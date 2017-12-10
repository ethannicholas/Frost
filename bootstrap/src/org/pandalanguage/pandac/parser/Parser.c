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
typedef panda$core$UInt8$nullable (*$fn131)(panda$io$LineNumberInputStream*);
typedef org$pandalanguage$pandac$parser$Token (*$fn153)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn161)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn166)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn174)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn178)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn183)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef void (*$fn185)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn187)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn191)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn193)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Object* (*$fn199)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn224)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn227)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn232)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn234)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn237)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn242)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn247)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn254)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn260)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn266)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$parser$Token (*$fn293)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn297)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn301)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn305)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn311)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef panda$core$String* (*$fn314)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn320)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef void (*$fn332)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn333)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn336)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn339)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn342)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn347)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn355)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn357)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn360)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn364)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn367)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn369)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn374)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn379)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn380)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn384)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn389)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn393)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn397)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn400)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn406)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn410)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn411)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn416)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn418)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn421)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn423)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn425)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn428)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn430)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn435)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn436)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn444)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn449)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn454)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn457)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn461)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn463)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn466)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn474)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn477)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn482)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn485)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn493)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn500)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn507)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn508)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn515)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn517)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn520)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn522)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn524)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn527)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn529)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn533)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn535)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn539)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn540)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn542)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn547)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn550)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn558)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn561)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn568)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn569)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn572)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn577)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn580)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn588)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn592)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn599)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn600)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn601)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn603)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn608)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn611)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn618)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn620)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn625)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn628)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn631)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn643)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn649)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn651)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn663)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn665)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn670)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn673)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn680)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn682)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn687)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn690)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn697)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn699)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn704)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn707)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn716)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn719)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn725)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn727)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn729)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn733)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn736)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn741)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn743)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn747)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn749)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn753)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn760)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn764)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn768)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn771)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn774)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn777)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn780)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn789)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn792)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn795)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn804)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn807)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn810)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn813)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn822)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn825)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn834)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn837)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn842)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn845)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn851)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn857)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn861)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn863)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn871)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn875)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn878)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn881)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn887)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn893)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn896)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn901)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn904)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn907)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn910)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn917)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn920)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn923)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn927)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn930)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn936)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn938)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn944)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn951)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn953)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn955)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn958)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn961)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn966)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn968)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn971)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn974)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn981)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn984)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn986)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn989)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1000)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1002)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1005)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1007)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1010)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1013)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1015)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1020)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1024)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1029)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1033)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1036)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1042)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1045)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1052)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1054)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1057)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1061)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1063)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1066)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1072)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1075)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1079)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1085)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1088)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1092)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1098)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1100)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1108)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1112)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1114)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1116)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1118)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1120)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1122)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1124)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1126)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1128)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1131)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1132)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1134)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1136)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1138)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1140)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1142)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1144)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1146)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1148)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1151)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1153)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1155)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1157)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef void (*$fn1159)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1160)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1162)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1164)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1166)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1169)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1172)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1176)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1181)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1185)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1189)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1191)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1198)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1202)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1207)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1211)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1215)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1217)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1224)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1228)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1236)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1239)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1243)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1247)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1250)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1252)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1255)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1259)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1262)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1268)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1274)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1278)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1280)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1290)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1294)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1301)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1309)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1314)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn1315)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1322)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1325)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1332)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1336)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1341)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1344)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1348)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1350)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1353)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1359)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1362)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1365)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1371)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1373)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1377)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1382)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1386)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1392)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1395)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1409)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1418)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1424)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1427)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1430)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1433)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1447)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1455)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1463)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1467)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1473)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1475)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1477)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1479)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1481)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1483)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1485)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1488)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1494)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1498)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1500)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1504)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1509)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1513)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1519)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1526)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1529)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1535)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1542)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1546)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1548)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1552)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1560)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1563)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1567)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1569)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1574)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1581)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1584)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1590)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn1592)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1594)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1596)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1598)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1600)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1607)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1611)(org$pandalanguage$pandac$parser$Parser*);

static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 20, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 1 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 13, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6E\x67\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E", 1, 1 };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72", 1, 1 };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0D", 1, 1 };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74", 1, 1 };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x09", 1, 1 };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 1 };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 1 };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6E\x63\x65", 30, 1 };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, 1 };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1 };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72\x20\x6F\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 47, 1 };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1 };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 1 };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5, 1 };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4, 1 };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4, 1 };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6, 1 };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 1 };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6, 1 };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7, 1 };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42, 1 };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7, 1 };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39, 1 };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1 };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7, 1 };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10, 1 };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8, 1 };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47, 1 };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11, 1 };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9, 1 };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1 };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3, 1 };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 23, 1 };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 34, 1 };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x65\x74\x68\x6F\x64\x27\x20\x6F\x72\x20\x27\x66\x75\x6E\x63\x74\x69\x6F\x6E\x27", 22, 1 };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 1 };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 1 };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1 };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 1 };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 1 };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E", 13, 1 };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6C\x61\x73\x73\x27", 7, 1 };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11, 1 };
static panda$core$String $s1545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };

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
org$pandalanguage$pandac$Position org$pandalanguage$pandac$parser$Parser$position$org$pandalanguage$pandac$parser$Token$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$io$LineNumberInputStream* input106;
    panda$core$Range$LTpanda$core$Int64$GT $tmp111;
    panda$core$UInt8$nullable c130;
    org$pandalanguage$pandac$Position $tmp144;
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
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp144, input106->line, input106->column);
    return $tmp144;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $tmp145 = (panda$core$String*) malloc(33);
    $tmp145->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp145->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp145, (self->source->data + p_token.offset.value), p_token.length, ((panda$core$Bit) { false }));
    return $tmp145;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    panda$collections$Array* children147;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    panda$collections$Array* $tmp148 = (panda$collections$Array*) malloc(40);
    $tmp148->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp148->refCount.value = 1;
    panda$collections$Array$init($tmp148);
    children147 = $tmp148;
    panda$collections$Array$add$panda$collections$Array$T(children147, ((panda$core$Object*) p_string));
    panda$collections$Array$add$panda$collections$Array$T(children147, ((panda$core$Object*) p_chunk));
    org$pandalanguage$pandac$ASTNode* $tmp150 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp150->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp150->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp150, ((panda$core$Int64) { 103 }), p_string->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 51 }))), ((panda$collections$ListView*) children147));
    return $tmp150;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start152;
    org$pandalanguage$pandac$ASTNode* result167;
    panda$core$MutableString* chunk168;
    org$pandalanguage$pandac$parser$Token token173;
    panda$core$String* str177;
    org$pandalanguage$pandac$parser$Token escape186;
    panda$core$String* escapeText192;
    panda$core$Char8 c195;
    panda$core$String* $match$193_21201;
    org$pandalanguage$pandac$ASTNode* expr223;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp238;
    org$pandalanguage$pandac$parser$Token $tmp154 = (($fn153) self->$class->vtable[4])(self);
    start152 = $tmp154;
    panda$core$Bit $tmp156 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start152.kind, ((panda$core$Int64) { 7 }));
    bool $tmp155 = $tmp156.value;
    if (!$tmp155) goto $l157;
    panda$core$Bit $tmp158 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start152.kind, ((panda$core$Int64) { 6 }));
    $tmp155 = $tmp158.value;
    $l157:;
    panda$core$Bit $tmp159 = { $tmp155 };
    if ($tmp159.value) {
    {
        panda$core$String* $tmp162 = (($fn161) self->$class->vtable[14])(self, start152);
        panda$core$String* $tmp163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s160, $tmp162);
        panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp163, &$s164);
        (($fn166) self->$class->vtable[9])(self, start152, $tmp165);
        return NULL;
    }
    }
    result167 = NULL;
    panda$core$MutableString* $tmp169 = (panda$core$MutableString*) malloc(40);
    $tmp169->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp169->refCount.value = 1;
    panda$core$MutableString$init($tmp169);
    chunk168 = $tmp169;
    $l171:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp175 = (($fn174) self->$class->vtable[3])(self);
        token173 = $tmp175;
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token173.kind, start152.kind);
        if ($tmp176.value) {
        {
            goto $l172;
        }
        }
        switch (token173.kind.value) {
            case 12:
            {
                panda$core$String* $tmp179 = (($fn178) self->$class->vtable[14])(self, token173);
                str177 = $tmp179;
                panda$core$Bit $tmp181 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(str177, &$s180);
                if ($tmp181.value) {
                {
                    (($fn183) self->$class->vtable[9])(self, start152, &$s182);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk168, str177);
            }
            break;
            case 0:
            {
                (($fn185) self->$class->vtable[9])(self, start152, &$s184);
                return NULL;
            }
            break;
            case 106:
            {
                org$pandalanguage$pandac$parser$Token $tmp188 = (($fn187) self->$class->vtable[3])(self);
                escape186 = $tmp188;
                panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape186.kind, ((panda$core$Int64) { 0 }));
                if ($tmp189.value) {
                {
                    (($fn191) self->$class->vtable[9])(self, start152, &$s190);
                    return NULL;
                }
                }
                panda$core$String* $tmp194 = (($fn193) self->$class->vtable[14])(self, escape186);
                escapeText192 = $tmp194;
                panda$collections$ListView* $tmp196 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText192);
                ITable* $tmp197 = $tmp196->$class->itable;
                while ($tmp197->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp197 = $tmp197->next;
                }
                $fn199 $tmp198 = $tmp197->methods[0];
                panda$core$Object* $tmp200 = $tmp198($tmp196, ((panda$core$Int64) { 0 }));
                c195 = ((panda$core$Char8$wrapper*) $tmp200)->value;
                {
                    panda$core$String* $tmp202 = panda$core$Char8$convert$R$panda$core$String(c195);
                    $match$193_21201 = $tmp202;
                    panda$core$Bit $tmp204 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21201, &$s203);
                    if ($tmp204.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk168, &$s205);
                    }
                    }
                    else {
                    panda$core$Bit $tmp207 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21201, &$s206);
                    if ($tmp207.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk168, &$s208);
                    }
                    }
                    else {
                    panda$core$Bit $tmp210 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21201, &$s209);
                    if ($tmp210.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk168, &$s211);
                    }
                    }
                    else {
                    panda$core$Bit $tmp213 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21201, &$s212);
                    if ($tmp213.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk168, &$s214);
                    }
                    }
                    else {
                    panda$core$Bit $tmp216 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21201, &$s215);
                    if ($tmp216.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk168, &$s217);
                    }
                    }
                    else {
                    panda$core$Bit $tmp219 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21201, &$s218);
                    if ($tmp219.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk168, &$s220);
                    }
                    }
                    else {
                    panda$core$Bit $tmp222 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$193_21201, &$s221);
                    if ($tmp222.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp225 = (($fn224) self->$class->vtable[30])(self);
                            expr223 = $tmp225;
                            if (((panda$core$Bit) { expr223 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp228 = (($fn227) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s226);
                            if (((panda$core$Bit) { !$tmp228.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp229 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                            $tmp229->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                            $tmp229->refCount.value = 1;
                            panda$core$String* $tmp231 = panda$core$MutableString$convert$R$panda$core$String(chunk168);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp229, ((panda$core$Int64) { 113 }), start152.position, $tmp231);
                            org$pandalanguage$pandac$ASTNode* $tmp233 = (($fn232) self->$class->vtable[15])(self, result167, $tmp229);
                            result167 = $tmp233;
                            panda$core$MutableString$clear(chunk168);
                            org$pandalanguage$pandac$ASTNode* $tmp235 = (($fn234) self->$class->vtable[15])(self, result167, expr223);
                            result167 = $tmp235;
                        }
                    }
                    }
                    else {
                    {
                        (($fn237) self->$class->vtable[9])(self, token173, &$s236);
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
                panda$core$String$Index $tmp239 = panda$core$String$start$R$panda$core$String$Index(escapeText192);
                panda$core$String$Index $tmp240 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText192, $tmp239);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp238, ((panda$core$String$Index$nullable) { $tmp240, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp241 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText192, $tmp238);
                panda$core$MutableString$append$panda$core$String(chunk168, $tmp241);
            }
            break;
            default:
            {
                panda$core$String* $tmp243 = (($fn242) self->$class->vtable[14])(self, token173);
                panda$core$MutableString$append$panda$core$String(chunk168, $tmp243);
            }
        }
    }
    }
    $l172:;
    org$pandalanguage$pandac$ASTNode* $tmp244 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp244->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp244->refCount.value = 1;
    panda$core$String* $tmp246 = panda$core$MutableString$convert$R$panda$core$String(chunk168);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp244, ((panda$core$Int64) { 113 }), start152.position, $tmp246);
    org$pandalanguage$pandac$ASTNode* $tmp248 = (($fn247) self->$class->vtable[15])(self, result167, $tmp244);
    return $tmp248;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result249;
    panda$collections$Iterator* c$Iter250;
    panda$core$Char8 c263;
    panda$core$UInt64 i269;
    result249 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp251 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp252 = ((panda$collections$Iterable*) $tmp251)->$class->itable;
        while ($tmp252->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp252 = $tmp252->next;
        }
        $fn254 $tmp253 = $tmp252->methods[0];
        panda$collections$Iterator* $tmp255 = $tmp253(((panda$collections$Iterable*) $tmp251));
        c$Iter250 = $tmp255;
        $l256:;
        ITable* $tmp258 = c$Iter250->$class->itable;
        while ($tmp258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp258 = $tmp258->next;
        }
        $fn260 $tmp259 = $tmp258->methods[0];
        panda$core$Bit $tmp261 = $tmp259(c$Iter250);
        panda$core$Bit $tmp262 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp261);
        if (!$tmp262.value) goto $l257;
        {
            ITable* $tmp264 = c$Iter250->$class->itable;
            while ($tmp264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp264 = $tmp264->next;
            }
            $fn266 $tmp265 = $tmp264->methods[1];
            panda$core$Object* $tmp267 = $tmp265(c$Iter250);
            c263 = ((panda$core$Char8$wrapper*) $tmp267)->value;
            panda$core$UInt64 $tmp268 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result249, p_base);
            result249 = $tmp268;
            panda$core$UInt64 $tmp270 = panda$core$Char8$convert$R$panda$core$UInt64(c263);
            i269 = $tmp270;
            panda$core$Bit $tmp272 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i269, ((panda$core$UInt64) { 48 }));
            bool $tmp271 = $tmp272.value;
            if (!$tmp271) goto $l273;
            panda$core$Bit $tmp274 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i269, ((panda$core$UInt64) { 57 }));
            $tmp271 = $tmp274.value;
            $l273:;
            panda$core$Bit $tmp275 = { $tmp271 };
            if ($tmp275.value) {
            {
                panda$core$UInt64 $tmp276 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i269, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp277 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result249, $tmp276);
                result249 = $tmp277;
            }
            }
            else {
            panda$core$Bit $tmp279 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i269, ((panda$core$UInt64) { 65 }));
            bool $tmp278 = $tmp279.value;
            if (!$tmp278) goto $l280;
            panda$core$Bit $tmp281 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i269, ((panda$core$UInt64) { 70 }));
            $tmp278 = $tmp281.value;
            $l280:;
            panda$core$Bit $tmp282 = { $tmp278 };
            if ($tmp282.value) {
            {
                panda$core$UInt64 $tmp283 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i269, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp284 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result249, $tmp283);
                result249 = $tmp284;
            }
            }
            else {
            {
                panda$core$Bit $tmp286 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i269, ((panda$core$UInt64) { 97 }));
                bool $tmp285 = $tmp286.value;
                if (!$tmp285) goto $l287;
                panda$core$Bit $tmp288 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i269, ((panda$core$UInt64) { 102 }));
                $tmp285 = $tmp288.value;
                $l287:;
                panda$core$Bit $tmp289 = { $tmp285 };
                PANDA_ASSERT($tmp289.value);
                panda$core$UInt64 $tmp290 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i269, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp291 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result249, $tmp290);
                result249 = $tmp291;
            }
            }
            }
        }
        goto $l256;
        $l257:;
    }
    return result249;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t292;
    panda$core$String* s304;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp309;
    panda$core$String* s313;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp318;
    org$pandalanguage$pandac$ASTNode* result335;
    org$pandalanguage$pandac$parser$Token $tmp294 = (($fn293) self->$class->vtable[4])(self);
    t292 = $tmp294;
    switch (t292.kind.value) {
        case 48:
        {
            org$pandalanguage$pandac$ASTNode* $tmp295 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp295->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp295->refCount.value = 1;
            panda$core$String* $tmp298 = (($fn297) self->$class->vtable[14])(self, t292);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp295, ((panda$core$Int64) { 106 }), t292.position, $tmp298);
            return $tmp295;
        }
        break;
        case 2:
        {
            org$pandalanguage$pandac$ASTNode* $tmp299 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp299->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp299->refCount.value = 1;
            panda$core$String* $tmp302 = (($fn301) self->$class->vtable[14])(self, t292);
            panda$core$UInt64$nullable $tmp303 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp302);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp299, ((panda$core$Int64) { 102 }), t292.position, ((panda$core$UInt64) $tmp303.value));
            return $tmp299;
        }
        break;
        case 3:
        {
            panda$core$String* $tmp306 = (($fn305) self->$class->vtable[14])(self, t292);
            s304 = $tmp306;
            org$pandalanguage$pandac$ASTNode* $tmp307 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp307->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp307->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp309, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp310 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s304, $tmp309);
            panda$core$UInt64 $tmp312 = (($fn311) self->$class->vtable[17])(self, $tmp310, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp307, ((panda$core$Int64) { 102 }), t292.position, $tmp312);
            return $tmp307;
        }
        break;
        case 4:
        {
            panda$core$String* $tmp315 = (($fn314) self->$class->vtable[14])(self, t292);
            s313 = $tmp315;
            org$pandalanguage$pandac$ASTNode* $tmp316 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp316->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp316->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp318, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp319 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s313, $tmp318);
            panda$core$UInt64 $tmp321 = (($fn320) self->$class->vtable[17])(self, $tmp319, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp316, ((panda$core$Int64) { 102 }), t292.position, $tmp321);
            return $tmp316;
        }
        break;
        case 46:
        {
            org$pandalanguage$pandac$ASTNode* $tmp322 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp322->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp322->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp322, ((panda$core$Int64) { 114 }), t292.position);
            return $tmp322;
        }
        break;
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp324 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp324->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp324->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp324, ((panda$core$Int64) { 115 }), t292.position);
            return $tmp324;
        }
        break;
        case 43:
        {
            org$pandalanguage$pandac$ASTNode* $tmp326 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp326->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp326->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp326, ((panda$core$Int64) { 117 }), t292.position);
            return $tmp326;
        }
        break;
        case 41:
        {
            org$pandalanguage$pandac$ASTNode* $tmp328 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp328->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp328->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp328, ((panda$core$Int64) { 116 }), t292.position, ((panda$core$Bit) { true }));
            return $tmp328;
        }
        break;
        case 42:
        {
            org$pandalanguage$pandac$ASTNode* $tmp330 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp330->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp330->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp330, ((panda$core$Int64) { 116 }), t292.position, ((panda$core$Bit) { false }));
            return $tmp330;
        }
        break;
        case 7:
        case 6:
        {
            (($fn332) self->$class->vtable[5])(self, t292);
            org$pandalanguage$pandac$ASTNode* $tmp334 = (($fn333) self->$class->vtable[16])(self);
            return $tmp334;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$ASTNode* $tmp337 = (($fn336) self->$class->vtable[30])(self);
            result335 = $tmp337;
            if (((panda$core$Bit) { result335 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp340 = (($fn339) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s338);
            if (((panda$core$Bit) { !$tmp340.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result335;
        }
        break;
        default:
        {
            panda$core$String* $tmp343 = (($fn342) self->$class->vtable[14])(self, t292);
            panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s341, $tmp343);
            panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, &$s345);
            (($fn347) self->$class->vtable[9])(self, t292, $tmp346);
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result348;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp349 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp350 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp349));
            result348 = $tmp350;
            if (((panda$core$Bit) { result348 != NULL }).value) {
            {
                panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s351, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result348, $tmp352);
                result348 = $tmp353;
            }
            }
            return result348;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name354;
    org$pandalanguage$pandac$parser$Token token359;
    org$pandalanguage$pandac$parser$Token $tmp356 = (($fn355) self->$class->vtable[4])(self);
    name354 = $tmp356;
    switch (name354.kind.value) {
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
            panda$core$String* $tmp358 = (($fn357) self->$class->vtable[14])(self, name354);
            return $tmp358;
        }
        break;
        case 63:
        {
            org$pandalanguage$pandac$parser$Token $tmp361 = (($fn360) self->$class->vtable[3])(self);
            token359 = $tmp361;
            panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token359.kind, ((panda$core$Int64) { 63 }));
            if ($tmp362.value) {
            {
                return &$s363;
            }
            }
            else {
            {
                (($fn364) self->$class->vtable[5])(self, token359);
                return &$s365;
            }
            }
        }
        break;
        case 101:
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp368 = (($fn367) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s366);
            if (((panda$core$Bit) { !$tmp368.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp370 = (($fn369) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp370.nonnull }).value) {
            {
                return &$s371;
            }
            }
            return &$s372;
        }
        break;
        default:
        {
            panda$core$String* $tmp375 = (($fn374) self->$class->vtable[14])(self, name354);
            panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s373, $tmp375);
            panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp376, &$s377);
            (($fn379) self->$class->vtable[9])(self, name354, $tmp378);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp381 = (($fn380) self->$class->vtable[21])(self, ((panda$core$Bit) { true }));
    return $tmp381;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start382;
    panda$core$MutableString* name386;
    org$pandalanguage$pandac$parser$Token$nullable id395;
    org$pandalanguage$pandac$ASTNode* result402;
    panda$collections$Array* children412;
    org$pandalanguage$pandac$ASTNode* t415;
    panda$collections$Array* children438;
    org$pandalanguage$pandac$parser$Token$nullable $tmp385 = (($fn384) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s383);
    start382 = $tmp385;
    if (((panda$core$Bit) { !start382.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp387 = (panda$core$MutableString*) malloc(40);
    $tmp387->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp387->refCount.value = 1;
    panda$core$String* $tmp390 = (($fn389) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start382.value));
    panda$core$MutableString$init$panda$core$String($tmp387, $tmp390);
    name386 = $tmp387;
    $l391:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp394 = (($fn393) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp394.nonnull }).value) goto $l392;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp398 = (($fn397) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s396);
        id395 = $tmp398;
        if (((panda$core$Bit) { !id395.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name386, &$s399);
        panda$core$String* $tmp401 = (($fn400) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id395.value));
        panda$core$MutableString$append$panda$core$String(name386, $tmp401);
    }
    goto $l391;
    $l392:;
    org$pandalanguage$pandac$ASTNode* $tmp403 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp403->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp403->refCount.value = 1;
    panda$core$String* $tmp405 = panda$core$MutableString$convert$R$panda$core$String(name386);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp403, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start382.value).position, $tmp405);
    result402 = $tmp403;
    org$pandalanguage$pandac$parser$Token $tmp407 = (($fn406) self->$class->vtable[6])(self);
    panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp407.kind, ((panda$core$Int64) { 62 }));
    if ($tmp408.value) {
    {
        panda$core$MutableString$append$panda$core$String(name386, &$s409);
        if (p_needSpeculativeParse.value) {
        {
            (($fn410) self->$class->vtable[10])(self);
        }
        }
        (($fn411) self->$class->vtable[4])(self);
        panda$collections$Array* $tmp413 = (panda$collections$Array*) malloc(40);
        $tmp413->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp413->refCount.value = 1;
        panda$collections$Array$init($tmp413);
        children412 = $tmp413;
        panda$collections$Array$add$panda$collections$Array$T(children412, ((panda$core$Object*) result402));
        org$pandalanguage$pandac$ASTNode* $tmp417 = (($fn416) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
        t415 = $tmp417;
        if (((panda$core$Bit) { t415 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn418) self->$class->vtable[12])(self);
                return result402;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children412, ((panda$core$Object*) t415));
        panda$core$MutableString$append$panda$core$Object(name386, ((panda$core$Object*) t415));
        $l419:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp422 = (($fn421) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp422.nonnull }).value) goto $l420;
        {
            org$pandalanguage$pandac$ASTNode* $tmp424 = (($fn423) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
            t415 = $tmp424;
            if (((panda$core$Bit) { t415 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    (($fn425) self->$class->vtable[12])(self);
                    return result402;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children412, ((panda$core$Object*) t415));
            panda$core$MutableString$append$panda$core$String(name386, &$s426);
            panda$core$MutableString$append$panda$core$Object(name386, ((panda$core$Object*) t415));
        }
        goto $l419;
        $l420:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp429 = (($fn428) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s427);
        if (((panda$core$Bit) { !$tmp429.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn430) self->$class->vtable[12])(self);
                return result402;
            }
            }
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name386, &$s431);
        org$pandalanguage$pandac$ASTNode* $tmp432 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp432->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp432->refCount.value = 1;
        panda$core$String* $tmp434 = panda$core$MutableString$convert$R$panda$core$String(name386);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp432, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start382.value).position, ((panda$core$Object*) $tmp434), ((panda$collections$ListView*) children412));
        result402 = $tmp432;
        (($fn435) self->$class->vtable[11])(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp437 = (($fn436) self->$class->vtable[7])(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp437.nonnull }).value) {
    {
        panda$collections$Array* $tmp439 = (panda$collections$Array*) malloc(40);
        $tmp439->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp439->refCount.value = 1;
        panda$collections$Array$init($tmp439);
        children438 = $tmp439;
        panda$collections$Array$add$panda$collections$Array$T(children438, ((panda$core$Object*) result402));
        org$pandalanguage$pandac$ASTNode* $tmp441 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp441->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp441->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp441, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start382.value).position, ((panda$collections$ListView*) children438));
        result402 = $tmp441;
    }
    }
    return result402;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result443;
    org$pandalanguage$pandac$parser$Token token448;
    panda$collections$Array* children451;
    org$pandalanguage$pandac$ASTNode* expr456;
    panda$collections$Array* children470;
    org$pandalanguage$pandac$ASTNode* expr473;
    panda$core$String* name481;
    panda$collections$Array* children487;
    org$pandalanguage$pandac$ASTNode* target492;
    panda$collections$Array* children495;
    panda$core$String* name501;
    panda$core$MutableString* finalName503;
    panda$collections$Array* types509;
    org$pandalanguage$pandac$ASTNode* t514;
    panda$core$Bit shouldAccept531;
    org$pandalanguage$pandac$ASTNode* $tmp445 = (($fn444) self->$class->vtable[18])(self);
    result443 = $tmp445;
    if (((panda$core$Bit) { result443 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l446:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp450 = (($fn449) self->$class->vtable[4])(self);
        token448 = $tmp450;
        switch (token448.kind.value) {
            case 103:
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp452 = (panda$collections$Array*) malloc(40);
                $tmp452->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp452->refCount.value = 1;
                panda$collections$Array$init($tmp452);
                children451 = $tmp452;
                panda$collections$Array$add$panda$collections$Array$T(children451, ((panda$core$Object*) result443));
                org$pandalanguage$pandac$parser$Token$nullable $tmp455 = (($fn454) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp455.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp458 = (($fn457) self->$class->vtable[30])(self);
                    expr456 = $tmp458;
                    if (((panda$core$Bit) { expr456 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children451, ((panda$core$Object*) expr456));
                    $l459:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp462 = (($fn461) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp462.nonnull }).value) goto $l460;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp464 = (($fn463) self->$class->vtable[30])(self);
                        expr456 = $tmp464;
                        if (((panda$core$Bit) { expr456 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children451, ((panda$core$Object*) expr456));
                    }
                    goto $l459;
                    $l460:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp467 = (($fn466) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s465);
                    if (((panda$core$Bit) { !$tmp467.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp468 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp468->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp468->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp468, ((panda$core$Int64) { 107 }), token448.position, ((panda$collections$ListView*) children451));
                result443 = $tmp468;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp471 = (panda$collections$Array*) malloc(40);
                $tmp471->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp471->refCount.value = 1;
                panda$collections$Array$init($tmp471);
                children470 = $tmp471;
                panda$collections$Array$add$panda$collections$Array$T(children470, ((panda$core$Object*) result443));
                org$pandalanguage$pandac$ASTNode* $tmp475 = (($fn474) self->$class->vtable[30])(self);
                expr473 = $tmp475;
                if (((panda$core$Bit) { expr473 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children470, ((panda$core$Object*) expr473));
                org$pandalanguage$pandac$parser$Token$nullable $tmp478 = (($fn477) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s476);
                if (((panda$core$Bit) { !$tmp478.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp479 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp479->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp479->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp479, ((panda$core$Int64) { 103 }), token448.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children470));
                result443 = $tmp479;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp483 = (($fn482) self->$class->vtable[7])(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp483.nonnull }).value) {
                {
                    name481 = &$s484;
                }
                }
                else {
                {
                    panda$core$String* $tmp486 = (($fn485) self->$class->vtable[19])(self);
                    name481 = $tmp486;
                    if (((panda$core$Bit) { name481 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp488 = (panda$collections$Array*) malloc(40);
                $tmp488->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp488->refCount.value = 1;
                panda$collections$Array$init($tmp488);
                children487 = $tmp488;
                panda$collections$Array$add$panda$collections$Array$T(children487, ((panda$core$Object*) result443));
                org$pandalanguage$pandac$ASTNode* $tmp490 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp490->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp490->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp490, ((panda$core$Int64) { 108 }), token448.position, ((panda$core$Object*) name481), ((panda$collections$ListView*) children487));
                result443 = $tmp490;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp494 = (($fn493) self->$class->vtable[20])(self);
                target492 = $tmp494;
                if (((panda$core$Bit) { target492 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp496 = (panda$collections$Array*) malloc(40);
                $tmp496->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp496->refCount.value = 1;
                panda$collections$Array$init($tmp496);
                children495 = $tmp496;
                panda$collections$Array$add$panda$collections$Array$T(children495, ((panda$core$Object*) result443));
                panda$collections$Array$add$panda$collections$Array$T(children495, ((panda$core$Object*) target492));
                org$pandalanguage$pandac$ASTNode* $tmp498 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp498->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp498->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp498, ((panda$core$Int64) { 111 }), token448.position, ((panda$collections$ListView*) children495));
                result443 = $tmp498;
            }
            break;
            case 62:
            {
                (($fn500) self->$class->vtable[5])(self, token448);
                panda$core$String* $tmp502 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result443);
                name501 = $tmp502;
                if (((panda$core$Bit) { name501 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp504 = (panda$core$MutableString*) malloc(40);
                    $tmp504->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp504->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp504, name501);
                    finalName503 = $tmp504;
                    panda$core$MutableString$append$panda$core$String(finalName503, &$s506);
                    (($fn507) self->$class->vtable[10])(self);
                    (($fn508) self->$class->vtable[4])(self);
                    panda$collections$Array* $tmp510 = (panda$collections$Array*) malloc(40);
                    $tmp510->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp510->refCount.value = 1;
                    panda$collections$Array$init($tmp510);
                    types509 = $tmp510;
                    org$pandalanguage$pandac$ASTNode* $tmp512 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp512->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp512->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp512, ((panda$core$Int64) { 109 }), result443->position, name501);
                    panda$collections$Array$add$panda$collections$Array$T(types509, ((panda$core$Object*) $tmp512));
                    org$pandalanguage$pandac$ASTNode* $tmp516 = (($fn515) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                    t514 = $tmp516;
                    if (((panda$core$Bit) { t514 == NULL }).value) {
                    {
                        (($fn517) self->$class->vtable[12])(self);
                        return result443;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types509, ((panda$core$Object*) t514));
                    panda$core$MutableString$append$panda$core$Object(finalName503, ((panda$core$Object*) t514));
                    $l518:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp521 = (($fn520) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp521.nonnull }).value) goto $l519;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp523 = (($fn522) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                        t514 = $tmp523;
                        if (((panda$core$Bit) { t514 == NULL }).value) {
                        {
                            (($fn524) self->$class->vtable[12])(self);
                            return result443;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types509, ((panda$core$Object*) t514));
                        panda$core$MutableString$append$panda$core$String(finalName503, &$s525);
                        panda$core$MutableString$append$panda$core$Object(finalName503, ((panda$core$Object*) t514));
                    }
                    goto $l518;
                    $l519:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp528 = (($fn527) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s526);
                    if (((panda$core$Bit) { !$tmp528.nonnull }).value) {
                    {
                        (($fn529) self->$class->vtable[12])(self);
                        return result443;
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(finalName503, &$s530);
                    panda$core$Object* $tmp532 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp532)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp534 = (($fn533) self->$class->vtable[6])(self);
                        switch ($tmp534.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept531 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept531 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept531 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept531.value) {
                    {
                        (($fn535) self->$class->vtable[11])(self);
                        org$pandalanguage$pandac$ASTNode* $tmp536 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                        $tmp536->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp536->refCount.value = 1;
                        panda$core$String* $tmp538 = panda$core$MutableString$convert$R$panda$core$String(finalName503);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp536, ((panda$core$Int64) { 154 }), result443->position, ((panda$core$Object*) $tmp538), ((panda$collections$ListView*) types509));
                        result443 = $tmp536;
                        goto $l446;
                    }
                    }
                    else {
                    {
                        (($fn539) self->$class->vtable[12])(self);
                        return result443;
                    }
                    }
                }
                }
                return result443;
            }
            break;
            default:
            {
                (($fn540) self->$class->vtable[5])(self, token448);
                return result443;
            }
        }
    }
    }
    $l447:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result541;
    org$pandalanguage$pandac$parser$Token$nullable op546;
    org$pandalanguage$pandac$ASTNode* next549;
    panda$collections$Array* children552;
    org$pandalanguage$pandac$ASTNode* $tmp543 = (($fn542) self->$class->vtable[22])(self);
    result541 = $tmp543;
    if (((panda$core$Bit) { result541 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l544:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp548 = (($fn547) self->$class->vtable[7])(self, ((panda$core$Int64) { 57 }));
        op546 = $tmp548;
        if (((panda$core$Bit) { !op546.nonnull }).value) {
        {
            goto $l545;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp551 = (($fn550) self->$class->vtable[22])(self);
        next549 = $tmp551;
        if (((panda$core$Bit) { next549 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp553 = (panda$collections$Array*) malloc(40);
        $tmp553->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp553->refCount.value = 1;
        panda$collections$Array$init($tmp553);
        children552 = $tmp553;
        panda$collections$Array$add$panda$collections$Array$T(children552, ((panda$core$Object*) result541));
        panda$collections$Array$add$panda$collections$Array$T(children552, ((panda$core$Object*) next549));
        org$pandalanguage$pandac$ASTNode* $tmp555 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp555->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp555->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp555, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op546.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op546.value).kind)), ((panda$collections$ListView*) children552));
        result541 = $tmp555;
    }
    }
    $l545:;
    return result541;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op557;
    org$pandalanguage$pandac$ASTNode* base560;
    panda$collections$Array* children563;
    org$pandalanguage$pandac$parser$Token $tmp559 = (($fn558) self->$class->vtable[4])(self);
    op557 = $tmp559;
    switch (op557.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp562 = (($fn561) self->$class->vtable[23])(self);
            base560 = $tmp562;
            if (((panda$core$Bit) { base560 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp564 = (panda$collections$Array*) malloc(40);
            $tmp564->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp564->refCount.value = 1;
            panda$collections$Array$init($tmp564);
            children563 = $tmp564;
            panda$collections$Array$add$panda$collections$Array$T(children563, ((panda$core$Object*) base560));
            org$pandalanguage$pandac$ASTNode* $tmp566 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp566->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp566->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp566, ((panda$core$Int64) { 112 }), op557.position, ((panda$core$Object*) wrap_panda$core$Int64(op557.kind)), ((panda$collections$ListView*) children563));
            return $tmp566;
        }
        break;
        default:
        {
            (($fn568) self->$class->vtable[5])(self, op557);
            org$pandalanguage$pandac$ASTNode* $tmp570 = (($fn569) self->$class->vtable[23])(self);
            return $tmp570;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result571;
    org$pandalanguage$pandac$parser$Token op576;
    org$pandalanguage$pandac$ASTNode* next579;
    panda$collections$Array* children582;
    org$pandalanguage$pandac$parser$Token nextToken587;
    org$pandalanguage$pandac$ASTNode* next591;
    panda$collections$Array* children594;
    org$pandalanguage$pandac$ASTNode* $tmp573 = (($fn572) self->$class->vtable[24])(self);
    result571 = $tmp573;
    if (((panda$core$Bit) { result571 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l574:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp578 = (($fn577) self->$class->vtable[4])(self);
        op576 = $tmp578;
        switch (op576.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp581 = (($fn580) self->$class->vtable[24])(self);
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
                panda$collections$Array$add$panda$collections$Array$T(children582, ((panda$core$Object*) result571));
                panda$collections$Array$add$panda$collections$Array$T(children582, ((panda$core$Object*) next579));
                org$pandalanguage$pandac$ASTNode* $tmp585 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp585->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp585->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp585, ((panda$core$Int64) { 103 }), op576.position, ((panda$core$Object*) wrap_panda$core$Int64(op576.kind)), ((panda$collections$ListView*) children582));
                result571 = $tmp585;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp589 = (($fn588) self->$class->vtable[3])(self);
                nextToken587 = $tmp589;
                panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken587.kind, ((panda$core$Int64) { 63 }));
                if ($tmp590.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp593 = (($fn592) self->$class->vtable[24])(self);
                    next591 = $tmp593;
                    if (((panda$core$Bit) { next591 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp595 = (panda$collections$Array*) malloc(40);
                    $tmp595->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp595->refCount.value = 1;
                    panda$collections$Array$init($tmp595);
                    children594 = $tmp595;
                    panda$collections$Array$add$panda$collections$Array$T(children594, ((panda$core$Object*) result571));
                    panda$collections$Array$add$panda$collections$Array$T(children594, ((panda$core$Object*) next591));
                    org$pandalanguage$pandac$ASTNode* $tmp597 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp597->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp597->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp597, ((panda$core$Int64) { 103 }), op576.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children594));
                    result571 = $tmp597;
                }
                }
                else {
                {
                    (($fn599) self->$class->vtable[5])(self, nextToken587);
                    (($fn600) self->$class->vtable[5])(self, op576);
                    return result571;
                }
                }
            }
            break;
            default:
            {
                (($fn601) self->$class->vtable[5])(self, op576);
                return result571;
            }
        }
    }
    }
    $l575:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result602;
    org$pandalanguage$pandac$parser$Token op607;
    org$pandalanguage$pandac$ASTNode* next610;
    panda$collections$Array* children613;
    org$pandalanguage$pandac$ASTNode* $tmp604 = (($fn603) self->$class->vtable[25])(self);
    result602 = $tmp604;
    if (((panda$core$Bit) { result602 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l605:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp609 = (($fn608) self->$class->vtable[4])(self);
        op607 = $tmp609;
        switch (op607.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp612 = (($fn611) self->$class->vtable[25])(self);
                next610 = $tmp612;
                if (((panda$core$Bit) { next610 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp614 = (panda$collections$Array*) malloc(40);
                $tmp614->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp614->refCount.value = 1;
                panda$collections$Array$init($tmp614);
                children613 = $tmp614;
                panda$collections$Array$add$panda$collections$Array$T(children613, ((panda$core$Object*) result602));
                panda$collections$Array$add$panda$collections$Array$T(children613, ((panda$core$Object*) next610));
                org$pandalanguage$pandac$ASTNode* $tmp616 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp616->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp616->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp616, ((panda$core$Int64) { 103 }), op607.position, ((panda$core$Object*) wrap_panda$core$Int64(op607.kind)), ((panda$collections$ListView*) children613));
                result602 = $tmp616;
            }
            break;
            default:
            {
                (($fn618) self->$class->vtable[5])(self, op607);
                return result602;
            }
        }
    }
    }
    $l606:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result619;
    org$pandalanguage$pandac$Position $tmp624;
    org$pandalanguage$pandac$parser$Token op627;
    org$pandalanguage$pandac$parser$Token next630;
    org$pandalanguage$pandac$ASTNode* right633;
    org$pandalanguage$pandac$Position $tmp647;
    org$pandalanguage$pandac$ASTNode* step648;
    org$pandalanguage$pandac$Position $tmp655;
    panda$collections$Array* children656;
    panda$core$Int64 kind659;
    org$pandalanguage$pandac$parser$Token $tmp621 = (($fn620) self->$class->vtable[6])(self);
    switch ($tmp621.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp622 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp622->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp622->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp624);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp622, ((panda$core$Int64) { 138 }), $tmp624);
            result619 = $tmp622;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp626 = (($fn625) self->$class->vtable[26])(self);
            result619 = $tmp626;
            if (((panda$core$Bit) { result619 == NULL }).value) {
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
                org$pandalanguage$pandac$ASTNode* $tmp645 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp645->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp645->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp647);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp645, ((panda$core$Int64) { 138 }), $tmp647);
                right633 = $tmp645;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp650 = (($fn649) self->$class->vtable[7])(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp650.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp652 = (($fn651) self->$class->vtable[26])(self);
                step648 = $tmp652;
                if (((panda$core$Bit) { step648 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp653 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp653->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp653->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp655);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp653, ((panda$core$Int64) { 138 }), $tmp655);
                step648 = $tmp653;
            }
            }
            panda$collections$Array* $tmp657 = (panda$collections$Array*) malloc(40);
            $tmp657->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp657->refCount.value = 1;
            panda$collections$Array$init($tmp657);
            children656 = $tmp657;
            panda$collections$Array$add$panda$collections$Array$T(children656, ((panda$core$Object*) result619));
            panda$collections$Array$add$panda$collections$Array$T(children656, ((panda$core$Object*) right633));
            panda$collections$Array$add$panda$collections$Array$T(children656, ((panda$core$Object*) step648));
            panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op627.kind, ((panda$core$Int64) { 97 }));
            if ($tmp660.value) {
            {
                kind659 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind659 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp661 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp661->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp661->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp661, kind659, op627.position, ((panda$collections$ListView*) children656));
            return $tmp661;
        }
        break;
        default:
        {
            (($fn663) self->$class->vtable[5])(self, op627);
            return result619;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result664;
    org$pandalanguage$pandac$parser$Token op669;
    org$pandalanguage$pandac$ASTNode* next672;
    panda$collections$Array* children675;
    org$pandalanguage$pandac$ASTNode* $tmp666 = (($fn665) self->$class->vtable[27])(self);
    result664 = $tmp666;
    if (((panda$core$Bit) { result664 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l667:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp671 = (($fn670) self->$class->vtable[4])(self);
        op669 = $tmp671;
        switch (op669.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp674 = (($fn673) self->$class->vtable[27])(self);
                next672 = $tmp674;
                if (((panda$core$Bit) { next672 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp676 = (panda$collections$Array*) malloc(40);
                $tmp676->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp676->refCount.value = 1;
                panda$collections$Array$init($tmp676);
                children675 = $tmp676;
                panda$collections$Array$add$panda$collections$Array$T(children675, ((panda$core$Object*) result664));
                panda$collections$Array$add$panda$collections$Array$T(children675, ((panda$core$Object*) next672));
                org$pandalanguage$pandac$ASTNode* $tmp678 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp678->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp678->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp678, ((panda$core$Int64) { 103 }), op669.position, ((panda$core$Object*) wrap_panda$core$Int64(op669.kind)), ((panda$collections$ListView*) children675));
                result664 = $tmp678;
            }
            break;
            default:
            {
                (($fn680) self->$class->vtable[5])(self, op669);
                return result664;
            }
        }
    }
    }
    $l668:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result681;
    org$pandalanguage$pandac$parser$Token op686;
    org$pandalanguage$pandac$ASTNode* next689;
    panda$collections$Array* children692;
    org$pandalanguage$pandac$ASTNode* $tmp683 = (($fn682) self->$class->vtable[28])(self);
    result681 = $tmp683;
    if (((panda$core$Bit) { result681 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l684:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp688 = (($fn687) self->$class->vtable[4])(self);
        op686 = $tmp688;
        switch (op686.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp691 = (($fn690) self->$class->vtable[28])(self);
                next689 = $tmp691;
                if (((panda$core$Bit) { next689 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp693 = (panda$collections$Array*) malloc(40);
                $tmp693->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp693->refCount.value = 1;
                panda$collections$Array$init($tmp693);
                children692 = $tmp693;
                panda$collections$Array$add$panda$collections$Array$T(children692, ((panda$core$Object*) result681));
                panda$collections$Array$add$panda$collections$Array$T(children692, ((panda$core$Object*) next689));
                org$pandalanguage$pandac$ASTNode* $tmp695 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp695->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp695->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp695, ((panda$core$Int64) { 103 }), op686.position, ((panda$core$Object*) wrap_panda$core$Int64(op686.kind)), ((panda$collections$ListView*) children692));
                result681 = $tmp695;
            }
            break;
            default:
            {
                (($fn697) self->$class->vtable[5])(self, op686);
                return result681;
            }
        }
    }
    }
    $l685:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result698;
    org$pandalanguage$pandac$parser$Token$nullable op703;
    org$pandalanguage$pandac$ASTNode* next706;
    panda$collections$Array* children709;
    org$pandalanguage$pandac$ASTNode* $tmp700 = (($fn699) self->$class->vtable[29])(self);
    result698 = $tmp700;
    if (((panda$core$Bit) { result698 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l701:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp705 = (($fn704) self->$class->vtable[7])(self, ((panda$core$Int64) { 68 }));
        op703 = $tmp705;
        if (((panda$core$Bit) { !op703.nonnull }).value) {
        {
            goto $l702;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp708 = (($fn707) self->$class->vtable[29])(self);
        next706 = $tmp708;
        if (((panda$core$Bit) { next706 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp710 = (panda$collections$Array*) malloc(40);
        $tmp710->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp710->refCount.value = 1;
        panda$collections$Array$init($tmp710);
        children709 = $tmp710;
        panda$collections$Array$add$panda$collections$Array$T(children709, ((panda$core$Object*) result698));
        panda$collections$Array$add$panda$collections$Array$T(children709, ((panda$core$Object*) next706));
        org$pandalanguage$pandac$ASTNode* $tmp712 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp712->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp712->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp712, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op703.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op703.value).kind)), ((panda$collections$ListView*) children709));
        result698 = $tmp712;
    }
    }
    $l702:;
    return result698;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start714;
    org$pandalanguage$pandac$ASTNode* test718;
    panda$collections$Array* children721;
    org$pandalanguage$pandac$ASTNode* ifTrue724;
    org$pandalanguage$pandac$ASTNode* ifFalse732;
    org$pandalanguage$pandac$ASTNode* ifFalse735;
    org$pandalanguage$pandac$parser$Token$nullable $tmp717 = (($fn716) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s715);
    start714 = $tmp717;
    if (((panda$core$Bit) { !start714.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp720 = (($fn719) self->$class->vtable[30])(self);
    test718 = $tmp720;
    if (((panda$core$Bit) { test718 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp722 = (panda$collections$Array*) malloc(40);
    $tmp722->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp722->refCount.value = 1;
    panda$collections$Array$init($tmp722);
    children721 = $tmp722;
    panda$collections$Array$add$panda$collections$Array$T(children721, ((panda$core$Object*) test718));
    org$pandalanguage$pandac$ASTNode* $tmp726 = (($fn725) self->$class->vtable[41])(self);
    ifTrue724 = $tmp726;
    if (((panda$core$Bit) { ifTrue724 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children721, ((panda$core$Object*) ifTrue724));
    org$pandalanguage$pandac$parser$Token$nullable $tmp728 = (($fn727) self->$class->vtable[7])(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp728.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp730 = (($fn729) self->$class->vtable[6])(self);
        panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp730.kind, ((panda$core$Int64) { 36 }));
        if ($tmp731.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp734 = (($fn733) self->$class->vtable[31])(self);
            ifFalse732 = $tmp734;
            if (((panda$core$Bit) { ifFalse732 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children721, ((panda$core$Object*) ifFalse732));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp737 = (($fn736) self->$class->vtable[41])(self);
            ifFalse735 = $tmp737;
            if (((panda$core$Bit) { ifFalse735 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children721, ((panda$core$Object*) ifFalse735));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp738 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp738->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp738->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp738, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start714.value).position, ((panda$collections$ListView*) children721));
    return $tmp738;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp742 = (($fn741) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s740);
    if (((panda$core$Bit) { !$tmp742.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp744 = (($fn743) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
    return $tmp744;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id745;
    org$pandalanguage$pandac$ASTNode* type752;
    panda$collections$Array* children755;
    org$pandalanguage$pandac$parser$Token$nullable $tmp748 = (($fn747) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s746);
    id745 = $tmp748;
    if (((panda$core$Bit) { !id745.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp750 = (($fn749) self->$class->vtable[6])(self);
    panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp750.kind, ((panda$core$Int64) { 95 }));
    if ($tmp751.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp754 = (($fn753) self->$class->vtable[32])(self);
        type752 = $tmp754;
        if (((panda$core$Bit) { type752 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp756 = (panda$collections$Array*) malloc(40);
        $tmp756->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp756->refCount.value = 1;
        panda$collections$Array$init($tmp756);
        children755 = $tmp756;
        panda$collections$Array$add$panda$collections$Array$T(children755, ((panda$core$Object*) type752));
        org$pandalanguage$pandac$ASTNode* $tmp758 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp758->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp758->refCount.value = 1;
        panda$core$String* $tmp761 = (($fn760) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id745.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp758, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id745.value).position, ((panda$core$Object*) $tmp761), ((panda$collections$ListView*) children755));
        return $tmp758;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp762 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp762->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp762->refCount.value = 1;
    panda$core$String* $tmp765 = (($fn764) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id745.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp762, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id745.value).position, $tmp765);
    return $tmp762;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start766;
    org$pandalanguage$pandac$ASTNode* t770;
    org$pandalanguage$pandac$ASTNode* list776;
    org$pandalanguage$pandac$ASTNode* block779;
    panda$collections$Array* children782;
    org$pandalanguage$pandac$parser$Token$nullable $tmp769 = (($fn768) self->$class->vtable[8])(self, ((panda$core$Int64) { 32 }), &$s767);
    start766 = $tmp769;
    if (((panda$core$Bit) { !start766.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp772 = (($fn771) self->$class->vtable[33])(self);
    t770 = $tmp772;
    if (((panda$core$Bit) { t770 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp775 = (($fn774) self->$class->vtable[8])(self, ((panda$core$Int64) { 34 }), &$s773);
    if (((panda$core$Bit) { !$tmp775.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp778 = (($fn777) self->$class->vtable[30])(self);
    list776 = $tmp778;
    if (((panda$core$Bit) { list776 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp781 = (($fn780) self->$class->vtable[41])(self);
    block779 = $tmp781;
    if (((panda$core$Bit) { block779 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp783 = (panda$collections$Array*) malloc(40);
    $tmp783->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp783->refCount.value = 1;
    panda$collections$Array$init($tmp783);
    children782 = $tmp783;
    panda$collections$Array$add$panda$collections$Array$T(children782, ((panda$core$Object*) t770));
    panda$collections$Array$add$panda$collections$Array$T(children782, ((panda$core$Object*) list776));
    panda$collections$Array$add$panda$collections$Array$T(children782, ((panda$core$Object*) block779));
    org$pandalanguage$pandac$ASTNode* $tmp785 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp785->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp785->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp785, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start766.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children782));
    return $tmp785;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start787;
    org$pandalanguage$pandac$ASTNode* test791;
    org$pandalanguage$pandac$ASTNode* body794;
    panda$collections$Array* children797;
    org$pandalanguage$pandac$parser$Token$nullable $tmp790 = (($fn789) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s788);
    start787 = $tmp790;
    if (((panda$core$Bit) { !start787.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp793 = (($fn792) self->$class->vtable[30])(self);
    test791 = $tmp793;
    if (((panda$core$Bit) { test791 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp796 = (($fn795) self->$class->vtable[41])(self);
    body794 = $tmp796;
    if (((panda$core$Bit) { body794 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp798 = (panda$collections$Array*) malloc(40);
    $tmp798->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp798->refCount.value = 1;
    panda$collections$Array$init($tmp798);
    children797 = $tmp798;
    panda$collections$Array$add$panda$collections$Array$T(children797, ((panda$core$Object*) test791));
    panda$collections$Array$add$panda$collections$Array$T(children797, ((panda$core$Object*) body794));
    org$pandalanguage$pandac$ASTNode* $tmp800 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp800->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp800->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp800, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start787.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children797));
    return $tmp800;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start802;
    org$pandalanguage$pandac$ASTNode* body806;
    org$pandalanguage$pandac$ASTNode* test812;
    panda$collections$Array* children815;
    org$pandalanguage$pandac$parser$Token$nullable $tmp805 = (($fn804) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s803);
    start802 = $tmp805;
    if (((panda$core$Bit) { !start802.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp808 = (($fn807) self->$class->vtable[41])(self);
    body806 = $tmp808;
    if (((panda$core$Bit) { body806 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp811 = (($fn810) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s809);
    if (((panda$core$Bit) { !$tmp811.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp814 = (($fn813) self->$class->vtable[30])(self);
    test812 = $tmp814;
    if (((panda$core$Bit) { test812 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp816 = (panda$collections$Array*) malloc(40);
    $tmp816->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp816->refCount.value = 1;
    panda$collections$Array$init($tmp816);
    children815 = $tmp816;
    panda$collections$Array$add$panda$collections$Array$T(children815, ((panda$core$Object*) body806));
    panda$collections$Array$add$panda$collections$Array$T(children815, ((panda$core$Object*) test812));
    org$pandalanguage$pandac$ASTNode* $tmp818 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp818->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp818->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp818, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start802.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children815));
    return $tmp818;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start820;
    org$pandalanguage$pandac$ASTNode* body824;
    panda$collections$Array* children827;
    org$pandalanguage$pandac$parser$Token$nullable $tmp823 = (($fn822) self->$class->vtable[8])(self, ((panda$core$Int64) { 35 }), &$s821);
    start820 = $tmp823;
    if (((panda$core$Bit) { !start820.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp826 = (($fn825) self->$class->vtable[41])(self);
    body824 = $tmp826;
    if (((panda$core$Bit) { body824 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp828 = (panda$collections$Array*) malloc(40);
    $tmp828->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp828->refCount.value = 1;
    panda$collections$Array$init($tmp828);
    children827 = $tmp828;
    panda$collections$Array$add$panda$collections$Array$T(children827, ((panda$core$Object*) body824));
    org$pandalanguage$pandac$ASTNode* $tmp830 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp830->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp830->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp830, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start820.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children827));
    return $tmp830;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start832;
    org$pandalanguage$pandac$ASTNode* expr836;
    panda$collections$Array* children839;
    org$pandalanguage$pandac$ASTNode* message844;
    org$pandalanguage$pandac$parser$Token$nullable $tmp835 = (($fn834) self->$class->vtable[8])(self, ((panda$core$Int64) { 44 }), &$s833);
    start832 = $tmp835;
    if (((panda$core$Bit) { !start832.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp838 = (($fn837) self->$class->vtable[30])(self);
    expr836 = $tmp838;
    if (((panda$core$Bit) { expr836 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp840 = (panda$collections$Array*) malloc(40);
    $tmp840->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp840->refCount.value = 1;
    panda$collections$Array$init($tmp840);
    children839 = $tmp840;
    panda$collections$Array$add$panda$collections$Array$T(children839, ((panda$core$Object*) expr836));
    org$pandalanguage$pandac$parser$Token$nullable $tmp843 = (($fn842) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp843.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp846 = (($fn845) self->$class->vtable[30])(self);
        message844 = $tmp846;
        if (((panda$core$Bit) { message844 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children839, ((panda$core$Object*) message844));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp847 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp847->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp847->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp847, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start832.value).position, ((panda$collections$ListView*) children839));
    return $tmp847;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start849;
    panda$collections$Array* expressions853;
    org$pandalanguage$pandac$ASTNode* expr856;
    panda$collections$Array* children865;
    org$pandalanguage$pandac$ASTNode* stmt877;
    org$pandalanguage$pandac$ASTNode* stmt880;
    org$pandalanguage$pandac$parser$Token$nullable $tmp852 = (($fn851) self->$class->vtable[8])(self, ((panda$core$Int64) { 39 }), &$s850);
    start849 = $tmp852;
    if (((panda$core$Bit) { !start849.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp854 = (panda$collections$Array*) malloc(40);
    $tmp854->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp854->refCount.value = 1;
    panda$collections$Array$init($tmp854);
    expressions853 = $tmp854;
    org$pandalanguage$pandac$ASTNode* $tmp858 = (($fn857) self->$class->vtable[30])(self);
    expr856 = $tmp858;
    if (((panda$core$Bit) { expr856 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions853, ((panda$core$Object*) expr856));
    $l859:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp862 = (($fn861) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp862.nonnull }).value) goto $l860;
    {
        org$pandalanguage$pandac$ASTNode* $tmp864 = (($fn863) self->$class->vtable[30])(self);
        expr856 = $tmp864;
        if (((panda$core$Bit) { expr856 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions853, ((panda$core$Object*) expr856));
    }
    goto $l859;
    $l860:;
    panda$collections$Array* $tmp866 = (panda$collections$Array*) malloc(40);
    $tmp866->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp866->refCount.value = 1;
    panda$collections$Array$init($tmp866);
    children865 = $tmp866;
    org$pandalanguage$pandac$ASTNode* $tmp868 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp868->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp868->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp868, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start849.value).position, ((panda$collections$ListView*) expressions853));
    panda$collections$Array$add$panda$collections$Array$T(children865, ((panda$core$Object*) $tmp868));
    org$pandalanguage$pandac$parser$Token$nullable $tmp872 = (($fn871) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s870);
    if (((panda$core$Bit) { !$tmp872.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l873:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp876 = (($fn875) self->$class->vtable[6])(self);
        switch ($tmp876.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l874;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp879 = (($fn878) self->$class->vtable[49])(self);
                stmt877 = $tmp879;
                if (((panda$core$Bit) { stmt877 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children865, ((panda$core$Object*) stmt877));
                goto $l874;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp882 = (($fn881) self->$class->vtable[51])(self);
                    stmt880 = $tmp882;
                    if (((panda$core$Bit) { stmt880 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children865, ((panda$core$Object*) stmt880));
                }
            }
        }
    }
    }
    $l874:;
    org$pandalanguage$pandac$ASTNode* $tmp883 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp883->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp883->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp883, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start849.value).position, ((panda$collections$ListView*) children865));
    return $tmp883;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start885;
    panda$collections$Array* children889;
    org$pandalanguage$pandac$ASTNode* expr892;
    org$pandalanguage$pandac$parser$Token token900;
    org$pandalanguage$pandac$ASTNode* w903;
    org$pandalanguage$pandac$parser$Token o906;
    panda$collections$Array* statements912;
    org$pandalanguage$pandac$ASTNode* stmt919;
    org$pandalanguage$pandac$ASTNode* stmt922;
    org$pandalanguage$pandac$parser$Token$nullable $tmp888 = (($fn887) self->$class->vtable[8])(self, ((panda$core$Int64) { 38 }), &$s886);
    start885 = $tmp888;
    if (((panda$core$Bit) { !start885.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp890 = (panda$collections$Array*) malloc(40);
    $tmp890->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp890->refCount.value = 1;
    panda$collections$Array$init($tmp890);
    children889 = $tmp890;
    org$pandalanguage$pandac$ASTNode* $tmp894 = (($fn893) self->$class->vtable[30])(self);
    expr892 = $tmp894;
    if (((panda$core$Bit) { expr892 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children889, ((panda$core$Object*) expr892));
    org$pandalanguage$pandac$parser$Token$nullable $tmp897 = (($fn896) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s895);
    if (((panda$core$Bit) { !$tmp897.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l898:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp902 = (($fn901) self->$class->vtable[6])(self);
        token900 = $tmp902;
        switch (token900.kind.value) {
            case 100:
            {
                goto $l899;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp905 = (($fn904) self->$class->vtable[39])(self);
                w903 = $tmp905;
                if (((panda$core$Bit) { w903 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children889, ((panda$core$Object*) w903));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp908 = (($fn907) self->$class->vtable[4])(self);
                o906 = $tmp908;
                org$pandalanguage$pandac$parser$Token$nullable $tmp911 = (($fn910) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s909);
                if (((panda$core$Bit) { !$tmp911.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp913 = (panda$collections$Array*) malloc(40);
                $tmp913->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp913->refCount.value = 1;
                panda$collections$Array$init($tmp913);
                statements912 = $tmp913;
                $l915:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp918 = (($fn917) self->$class->vtable[6])(self);
                    switch ($tmp918.kind.value) {
                        case 100:
                        {
                            goto $l916;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp921 = (($fn920) self->$class->vtable[49])(self);
                            stmt919 = $tmp921;
                            if (((panda$core$Bit) { stmt919 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements912, ((panda$core$Object*) stmt919));
                            goto $l916;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp924 = (($fn923) self->$class->vtable[51])(self);
                            stmt922 = $tmp924;
                            if (((panda$core$Bit) { stmt922 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements912, ((panda$core$Object*) stmt922));
                        }
                    }
                }
                }
                $l916:;
                org$pandalanguage$pandac$ASTNode* $tmp925 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp925->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp925->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp925, ((panda$core$Int64) { 127 }), o906.position, ((panda$collections$ListView*) statements912));
                panda$collections$Array$add$panda$collections$Array$T(children889, ((panda$core$Object*) $tmp925));
                goto $l899;
            }
            break;
            default:
            {
                (($fn927) self->$class->vtable[4])(self);
                panda$core$String* $tmp931 = (($fn930) self->$class->vtable[14])(self, token900);
                panda$core$String* $tmp932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s929, $tmp931);
                panda$core$String* $tmp934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp932, &$s933);
                panda$core$String* $tmp935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s928, $tmp934);
                (($fn936) self->$class->vtable[9])(self, token900, $tmp935);
            }
        }
    }
    }
    $l899:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp939 = (($fn938) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s937);
    if (((panda$core$Bit) { !$tmp939.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp940 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp940->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp940->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp940, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start885.value).position, ((panda$collections$ListView*) children889));
    return $tmp940;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start942;
    panda$collections$Array* children946;
    org$pandalanguage$pandac$ASTNode* stmt954;
    org$pandalanguage$pandac$ASTNode* stmt960;
    org$pandalanguage$pandac$parser$Token$nullable $tmp945 = (($fn944) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s943);
    start942 = $tmp945;
    if (((panda$core$Bit) { !start942.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp947 = (panda$collections$Array*) malloc(40);
    $tmp947->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp947->refCount.value = 1;
    panda$collections$Array$init($tmp947);
    children946 = $tmp947;
    $l949:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp952 = (($fn951) self->$class->vtable[6])(self);
        switch ($tmp952.kind.value) {
            case 100:
            {
                (($fn953) self->$class->vtable[4])(self);
                goto $l950;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp956 = (($fn955) self->$class->vtable[49])(self);
                stmt954 = $tmp956;
                if (((panda$core$Bit) { stmt954 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp959 = (($fn958) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s957);
                if (((panda$core$Bit) { !$tmp959.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children946, ((panda$core$Object*) stmt954));
                goto $l950;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp962 = (($fn961) self->$class->vtable[51])(self);
                stmt960 = $tmp962;
                if (((panda$core$Bit) { stmt960 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children946, ((panda$core$Object*) stmt960));
            }
        }
    }
    }
    $l950:;
    org$pandalanguage$pandac$ASTNode* $tmp963 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp963->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp963->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp963, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start942.value).position, ((panda$collections$ListView*) children946));
    return $tmp963;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start965;
    org$pandalanguage$pandac$parser$Token op970;
    org$pandalanguage$pandac$ASTNode* rvalue973;
    panda$collections$Array* children976;
    org$pandalanguage$pandac$parser$Token op985;
    org$pandalanguage$pandac$ASTNode* rvalue988;
    panda$collections$Array* children991;
    org$pandalanguage$pandac$ASTNode* $tmp967 = (($fn966) self->$class->vtable[30])(self);
    start965 = $tmp967;
    if (((panda$core$Bit) { start965 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp969 = (($fn968) self->$class->vtable[6])(self);
    switch ($tmp969.kind.value) {
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
            org$pandalanguage$pandac$parser$Token $tmp972 = (($fn971) self->$class->vtable[4])(self);
            op970 = $tmp972;
            org$pandalanguage$pandac$ASTNode* $tmp975 = (($fn974) self->$class->vtable[30])(self);
            rvalue973 = $tmp975;
            if (((panda$core$Bit) { rvalue973 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp977 = (panda$collections$Array*) malloc(40);
            $tmp977->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp977->refCount.value = 1;
            panda$collections$Array$init($tmp977);
            children976 = $tmp977;
            panda$collections$Array$add$panda$collections$Array$T(children976, ((panda$core$Object*) start965));
            panda$collections$Array$add$panda$collections$Array$T(children976, ((panda$core$Object*) rvalue973));
            org$pandalanguage$pandac$ASTNode* $tmp979 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp979->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp979->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp979, ((panda$core$Int64) { 103 }), start965->position, ((panda$core$Object*) wrap_panda$core$Int64(op970.kind)), ((panda$collections$ListView*) children976));
            return $tmp979;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp982 = (($fn981) self->$class->vtable[6])(self);
            (($fn984) self->$class->vtable[9])(self, $tmp982, &$s983);
            org$pandalanguage$pandac$parser$Token $tmp987 = (($fn986) self->$class->vtable[4])(self);
            op985 = $tmp987;
            org$pandalanguage$pandac$ASTNode* $tmp990 = (($fn989) self->$class->vtable[30])(self);
            rvalue988 = $tmp990;
            if (((panda$core$Bit) { rvalue988 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp992 = (panda$collections$Array*) malloc(40);
            $tmp992->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp992->refCount.value = 1;
            panda$collections$Array$init($tmp992);
            children991 = $tmp992;
            panda$collections$Array$add$panda$collections$Array$T(children991, ((panda$core$Object*) start965));
            panda$collections$Array$add$panda$collections$Array$T(children991, ((panda$core$Object*) rvalue988));
            org$pandalanguage$pandac$ASTNode* $tmp994 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp994->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp994->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp994, ((panda$core$Int64) { 103 }), start965->position, ((panda$core$Object*) wrap_panda$core$Int64(op985.kind)), ((panda$collections$ListView*) children991));
            return $tmp994;
        }
        break;
        default:
        {
            return start965;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children996;
    org$pandalanguage$pandac$ASTNode* t999;
    org$pandalanguage$pandac$ASTNode* value1004;
    org$pandalanguage$pandac$ASTNode* value1014;
    panda$collections$Array* $tmp997 = (panda$collections$Array*) malloc(40);
    $tmp997->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp997->refCount.value = 1;
    panda$collections$Array$init($tmp997);
    children996 = $tmp997;
    org$pandalanguage$pandac$ASTNode* $tmp1001 = (($fn1000) self->$class->vtable[33])(self);
    t999 = $tmp1001;
    if (((panda$core$Bit) { t999 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children996, ((panda$core$Object*) t999));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1003 = (($fn1002) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp1003.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1006 = (($fn1005) self->$class->vtable[30])(self);
        value1004 = $tmp1006;
        if (((panda$core$Bit) { value1004 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children996, ((panda$core$Object*) value1004));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1008 = (($fn1007) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1008.kind, ((panda$core$Int64) { 58 }));
    if ($tmp1009.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1011 = (($fn1010) self->$class->vtable[4])(self);
        (($fn1013) self->$class->vtable[9])(self, $tmp1011, &$s1012);
        org$pandalanguage$pandac$ASTNode* $tmp1016 = (($fn1015) self->$class->vtable[30])(self);
        value1014 = $tmp1016;
        if (((panda$core$Bit) { value1014 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children996, ((panda$core$Object*) value1014));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1017 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1017->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1017->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1017, ((panda$core$Int64) { 129 }), t999->position, ((panda$collections$ListView*) children996));
    return $tmp1017;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1019;
    panda$core$Int64 kind1022;
    panda$collections$Array* children1025;
    org$pandalanguage$pandac$ASTNode* child1028;
    org$pandalanguage$pandac$ASTNode* child1035;
    org$pandalanguage$pandac$parser$Token $tmp1021 = (($fn1020) self->$class->vtable[4])(self);
    start1019 = $tmp1021;
    switch (start1019.kind.value) {
        case 23:
        {
            kind1022 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind1022 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind1022 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind1022 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            (($fn1024) self->$class->vtable[9])(self, start1019, &$s1023);
        }
    }
    panda$collections$Array* $tmp1026 = (panda$collections$Array*) malloc(40);
    $tmp1026->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1026->refCount.value = 1;
    panda$collections$Array$init($tmp1026);
    children1025 = $tmp1026;
    org$pandalanguage$pandac$ASTNode* $tmp1030 = (($fn1029) self->$class->vtable[43])(self);
    child1028 = $tmp1030;
    if (((panda$core$Bit) { child1028 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1025, ((panda$core$Object*) child1028));
    $l1031:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1034 = (($fn1033) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1034.nonnull }).value) goto $l1032;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1037 = (($fn1036) self->$class->vtable[43])(self);
        child1035 = $tmp1037;
        if (((panda$core$Bit) { child1035 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1025, ((panda$core$Object*) child1035));
    }
    goto $l1031;
    $l1032:;
    org$pandalanguage$pandac$ASTNode* $tmp1038 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1038->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1038->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1038, kind1022, start1019.position, ((panda$collections$ListView*) children1025));
    return $tmp1038;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1040;
    panda$collections$Array* children1047;
    org$pandalanguage$pandac$ASTNode* expr1056;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1043 = (($fn1042) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1041);
    start1040 = $tmp1043;
    if (((panda$core$Bit) { !start1040.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1046 = (($fn1045) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1044);
    if (((panda$core$Bit) { !$tmp1046.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp1048 = (panda$collections$Array*) malloc(40);
    $tmp1048->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1048->refCount.value = 1;
    panda$collections$Array$init($tmp1048);
    children1047 = $tmp1048;
    org$pandalanguage$pandac$ASTNode* $tmp1050 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1050->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1050->refCount.value = 1;
    panda$core$String* $tmp1053 = (($fn1052) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start1040.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1050, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start1040.value).position, $tmp1053);
    panda$collections$Array$add$panda$collections$Array$T(children1047, ((panda$core$Object*) $tmp1050));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1055 = (($fn1054) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1055.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1058 = (($fn1057) self->$class->vtable[30])(self);
        expr1056 = $tmp1058;
        if (((panda$core$Bit) { expr1056 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1047, ((panda$core$Object*) expr1056));
        $l1059:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1062 = (($fn1061) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1062.nonnull }).value) goto $l1060;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1064 = (($fn1063) self->$class->vtable[30])(self);
            expr1056 = $tmp1064;
            if (((panda$core$Bit) { expr1056 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1047, ((panda$core$Object*) expr1056));
        }
        goto $l1059;
        $l1060:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1067 = (($fn1066) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1065);
        if (((panda$core$Bit) { !$tmp1067.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1068 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1068->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1068->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1068, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start1040.value).position, ((panda$collections$ListView*) children1047));
    return $tmp1068;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1070;
    org$pandalanguage$pandac$parser$Token$nullable label1074;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1073 = (($fn1072) self->$class->vtable[8])(self, ((panda$core$Int64) { 28 }), &$s1071);
    start1070 = $tmp1073;
    if (((panda$core$Bit) { !start1070.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1076 = (($fn1075) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1074 = $tmp1076;
    if (((panda$core$Bit) { label1074.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1077 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1077->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1077->refCount.value = 1;
        panda$core$String* $tmp1080 = (($fn1079) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1074.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1077, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1070.value).position, $tmp1080);
        return $tmp1077;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1081 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1081->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1081->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1081, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1070.value).position);
    return $tmp1081;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1083;
    org$pandalanguage$pandac$parser$Token$nullable label1087;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1086 = (($fn1085) self->$class->vtable[8])(self, ((panda$core$Int64) { 29 }), &$s1084);
    start1083 = $tmp1086;
    if (((panda$core$Bit) { !start1083.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1089 = (($fn1088) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1087 = $tmp1089;
    if (((panda$core$Bit) { label1087.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1090 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1090->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1090->refCount.value = 1;
        panda$core$String* $tmp1093 = (($fn1092) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1087.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1090, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1083.value).position, $tmp1093);
        return $tmp1090;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1094 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1094->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1094->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1094, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1083.value).position);
    return $tmp1094;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1096;
    panda$collections$Array* children1104;
    org$pandalanguage$pandac$ASTNode* expr1107;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1099 = (($fn1098) self->$class->vtable[8])(self, ((panda$core$Int64) { 27 }), &$s1097);
    start1096 = $tmp1099;
    if (((panda$core$Bit) { !start1096.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1101 = (($fn1100) self->$class->vtable[6])(self);
    switch ($tmp1101.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1102 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1102->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1102->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1102, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1096.value).position);
            return $tmp1102;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp1105 = (panda$collections$Array*) malloc(40);
            $tmp1105->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1105->refCount.value = 1;
            panda$collections$Array$init($tmp1105);
            children1104 = $tmp1105;
            org$pandalanguage$pandac$ASTNode* $tmp1109 = (($fn1108) self->$class->vtable[30])(self);
            expr1107 = $tmp1109;
            if (((panda$core$Bit) { expr1107 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1104, ((panda$core$Object*) expr1107));
            org$pandalanguage$pandac$ASTNode* $tmp1110 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1110->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1110->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1110, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1096.value).position, ((panda$collections$ListView*) children1104));
            return $tmp1110;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1113 = (($fn1112) self->$class->vtable[6])(self);
    switch ($tmp1113.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1115 = (($fn1114) self->$class->vtable[46])(self);
            return $tmp1115;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1117 = (($fn1116) self->$class->vtable[47])(self);
            return $tmp1117;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1119 = (($fn1118) self->$class->vtable[48])(self);
            return $tmp1119;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp1121 = (($fn1120) self->$class->vtable[6])(self);
    switch ($tmp1121.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1123 = (($fn1122) self->$class->vtable[36])(self, p_label);
            return $tmp1123;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1125 = (($fn1124) self->$class->vtable[34])(self, p_label);
            return $tmp1125;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1127 = (($fn1126) self->$class->vtable[37])(self, p_label);
            return $tmp1127;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1129 = (($fn1128) self->$class->vtable[35])(self, p_label);
            return $tmp1129;
        }
        break;
        default:
        {
            (($fn1131) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1130);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id1150;
    org$pandalanguage$pandac$parser$Token $tmp1133 = (($fn1132) self->$class->vtable[6])(self);
    switch ($tmp1133.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1135 = (($fn1134) self->$class->vtable[31])(self);
            return $tmp1135;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1137 = (($fn1136) self->$class->vtable[34])(self, NULL);
            return $tmp1137;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1139 = (($fn1138) self->$class->vtable[35])(self, NULL);
            return $tmp1139;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1141 = (($fn1140) self->$class->vtable[36])(self, NULL);
            return $tmp1141;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1143 = (($fn1142) self->$class->vtable[37])(self, NULL);
            return $tmp1143;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1145 = (($fn1144) self->$class->vtable[38])(self);
            return $tmp1145;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1147 = (($fn1146) self->$class->vtable[40])(self);
            return $tmp1147;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1149 = (($fn1148) self->$class->vtable[41])(self);
            return $tmp1149;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp1152 = (($fn1151) self->$class->vtable[4])(self);
            id1150 = $tmp1152;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1154 = (($fn1153) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1154.nonnull }).value) {
            {
                panda$core$String* $tmp1156 = (($fn1155) self->$class->vtable[14])(self, id1150);
                org$pandalanguage$pandac$ASTNode* $tmp1158 = (($fn1157) self->$class->vtable[50])(self, $tmp1156);
                return $tmp1158;
            }
            }
            (($fn1159) self->$class->vtable[5])(self, id1150);
            org$pandalanguage$pandac$ASTNode* $tmp1161 = (($fn1160) self->$class->vtable[42])(self);
            return $tmp1161;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1163 = (($fn1162) self->$class->vtable[42])(self);
            return $tmp1163;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1165 = (($fn1164) self->$class->vtable[44])(self);
            return $tmp1165;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1167 = (($fn1166) self->$class->vtable[45])(self);
            return $tmp1167;
        }
        break;
        default:
        {
            (($fn1169) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s1168);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1170;
    org$pandalanguage$pandac$parser$Token$nullable next1174;
    panda$core$MutableString* name1178;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1173 = (($fn1172) self->$class->vtable[8])(self, ((panda$core$Int64) { 14 }), &$s1171);
    start1170 = $tmp1173;
    if (((panda$core$Bit) { !start1170.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1177 = (($fn1176) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1175);
    next1174 = $tmp1177;
    if (((panda$core$Bit) { !next1174.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1179 = (panda$core$MutableString*) malloc(40);
    $tmp1179->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1179->refCount.value = 1;
    panda$core$String* $tmp1182 = (($fn1181) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1174.value));
    panda$core$MutableString$init$panda$core$String($tmp1179, $tmp1182);
    name1178 = $tmp1179;
    $l1183:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1186 = (($fn1185) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1174 = $tmp1186;
        if (((panda$core$Bit) { !next1174.nonnull }).value) {
        {
            goto $l1184;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1178, &$s1187);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1190 = (($fn1189) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1188);
        next1174 = $tmp1190;
        if (((panda$core$Bit) { !next1174.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1192 = (($fn1191) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1174.value));
        panda$core$MutableString$append$panda$core$String(name1178, $tmp1192);
    }
    }
    $l1184:;
    org$pandalanguage$pandac$ASTNode* $tmp1193 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1193->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1193->refCount.value = 1;
    panda$core$String* $tmp1195 = panda$core$MutableString$convert$R$panda$core$String(name1178);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1193, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1170.value).position, $tmp1195);
    return $tmp1193;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1196;
    org$pandalanguage$pandac$parser$Token$nullable next1200;
    panda$core$MutableString* name1204;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1199 = (($fn1198) self->$class->vtable[8])(self, ((panda$core$Int64) { 15 }), &$s1197);
    start1196 = $tmp1199;
    if (((panda$core$Bit) { !start1196.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1203 = (($fn1202) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1201);
    next1200 = $tmp1203;
    if (((panda$core$Bit) { !next1200.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1205 = (panda$core$MutableString*) malloc(40);
    $tmp1205->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1205->refCount.value = 1;
    panda$core$String* $tmp1208 = (($fn1207) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1200.value));
    panda$core$MutableString$init$panda$core$String($tmp1205, $tmp1208);
    name1204 = $tmp1205;
    $l1209:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1212 = (($fn1211) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1200 = $tmp1212;
        if (((panda$core$Bit) { !next1200.nonnull }).value) {
        {
            goto $l1210;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1204, &$s1213);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1216 = (($fn1215) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1214);
        next1200 = $tmp1216;
        if (((panda$core$Bit) { !next1200.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1218 = (($fn1217) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1200.value));
        panda$core$MutableString$append$panda$core$String(name1204, $tmp1218);
    }
    }
    $l1210:;
    org$pandalanguage$pandac$ASTNode* $tmp1219 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1219->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1219->refCount.value = 1;
    panda$core$String* $tmp1221 = panda$core$MutableString$convert$R$panda$core$String(name1204);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1219, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1196.value).position, $tmp1221);
    return $tmp1219;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1222;
    org$pandalanguage$pandac$parser$Token$nullable id1226;
    panda$collections$Array* children1230;
    panda$collections$Array* idChildren1233;
    org$pandalanguage$pandac$ASTNode* t1238;
    org$pandalanguage$pandac$ASTNode* t1254;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1225 = (($fn1224) self->$class->vtable[8])(self, ((panda$core$Int64) { 62 }), &$s1223);
    start1222 = $tmp1225;
    if (((panda$core$Bit) { !start1222.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1229 = (($fn1228) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1227);
    id1226 = $tmp1229;
    if (((panda$core$Bit) { !id1226.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1231 = (panda$collections$Array*) malloc(40);
    $tmp1231->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1231->refCount.value = 1;
    panda$collections$Array$init($tmp1231);
    children1230 = $tmp1231;
    panda$collections$Array* $tmp1234 = (panda$collections$Array*) malloc(40);
    $tmp1234->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1234->refCount.value = 1;
    panda$collections$Array$init($tmp1234);
    idChildren1233 = $tmp1234;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1237 = (($fn1236) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1237.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1240 = (($fn1239) self->$class->vtable[20])(self);
        t1238 = $tmp1240;
        if (((panda$core$Bit) { t1238 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1233, ((panda$core$Object*) t1238));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1241 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1241->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1241->refCount.value = 1;
    panda$core$String* $tmp1244 = (($fn1243) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1226.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1241, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1226.value).position, ((panda$core$Object*) $tmp1244), ((panda$collections$ListView*) idChildren1233));
    panda$collections$Array$add$panda$collections$Array$T(children1230, ((panda$core$Object*) $tmp1241));
    $l1245:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1248 = (($fn1247) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1248.nonnull }).value) goto $l1246;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1251 = (($fn1250) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1249);
        id1226 = $tmp1251;
        if (((panda$core$Bit) { !id1226.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1233);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1253 = (($fn1252) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1253.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1256 = (($fn1255) self->$class->vtable[20])(self);
            t1254 = $tmp1256;
            if (((panda$core$Bit) { t1254 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1233, ((panda$core$Object*) t1254));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1257 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1257->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1257->refCount.value = 1;
        panda$core$String* $tmp1260 = (($fn1259) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1226.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1257, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1226.value).position, ((panda$core$Object*) $tmp1260), ((panda$collections$ListView*) idChildren1233));
        panda$collections$Array$add$panda$collections$Array$T(children1230, ((panda$core$Object*) $tmp1257));
    }
    goto $l1245;
    $l1246:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1263 = (($fn1262) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s1261);
    if (((panda$core$Bit) { !$tmp1263.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1264 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1264->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1264->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1264, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1222.value).position, ((panda$collections$ListView*) children1230));
    return $tmp1264;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1266;
    panda$collections$Array* children1270;
    org$pandalanguage$pandac$ASTNode* t1273;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1269 = (($fn1268) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1267);
    start1266 = $tmp1269;
    if (((panda$core$Bit) { !start1266.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1271 = (panda$collections$Array*) malloc(40);
    $tmp1271->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1271->refCount.value = 1;
    panda$collections$Array$init($tmp1271);
    children1270 = $tmp1271;
    org$pandalanguage$pandac$ASTNode* $tmp1275 = (($fn1274) self->$class->vtable[20])(self);
    t1273 = $tmp1275;
    if (((panda$core$Bit) { t1273 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1270, ((panda$core$Object*) t1273));
    $l1276:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1279 = (($fn1278) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1279.nonnull }).value) goto $l1277;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1281 = (($fn1280) self->$class->vtable[20])(self);
        t1273 = $tmp1281;
        if (((panda$core$Bit) { t1273 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1270, ((panda$core$Object*) t1273));
    }
    goto $l1276;
    $l1277:;
    org$pandalanguage$pandac$ASTNode* $tmp1282 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1282->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1282->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1282, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1266.value).position, ((panda$collections$ListView*) children1270));
    return $tmp1282;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1284;
    org$pandalanguage$pandac$parser$Token$nullable next1289;
    org$pandalanguage$pandac$Position $tmp1298;
    panda$collections$Array* $tmp1285 = (panda$collections$Array*) malloc(40);
    $tmp1285->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1285->refCount.value = 1;
    panda$collections$Array$init($tmp1285);
    children1284 = $tmp1285;
    $l1287:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1291 = (($fn1290) self->$class->vtable[7])(self, ((panda$core$Int64) { 13 }));
        next1289 = $tmp1291;
        if (((panda$core$Bit) { !next1289.nonnull }).value) {
        {
            goto $l1288;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1292 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1292->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1292->refCount.value = 1;
        panda$core$String* $tmp1295 = (($fn1294) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1289.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1292, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1289.value).position, $tmp1295);
        panda$collections$Array$add$panda$collections$Array$T(children1284, ((panda$core$Object*) $tmp1292));
    }
    }
    $l1288:;
    org$pandalanguage$pandac$ASTNode* $tmp1296 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1296->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1296->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1298);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1296, ((panda$core$Int64) { 144 }), $tmp1298, ((panda$collections$ListView*) children1284));
    return $tmp1296;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1299;
    panda$core$MutableString* result1303;
    org$pandalanguage$pandac$parser$Token next1308;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1302 = (($fn1301) self->$class->vtable[8])(self, ((panda$core$Int64) { 11 }), &$s1300);
    start1299 = $tmp1302;
    if (((panda$core$Bit) { !start1299.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1304 = (panda$core$MutableString*) malloc(40);
    $tmp1304->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1304->refCount.value = 1;
    panda$core$MutableString$init($tmp1304);
    result1303 = $tmp1304;
    $l1306:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1310 = (($fn1309) self->$class->vtable[3])(self);
        next1308 = $tmp1310;
        panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1308.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1311.value) {
        {
            goto $l1307;
        }
        }
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1308.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1312.value) {
        {
            (($fn1314) self->$class->vtable[9])(self, ((org$pandalanguage$pandac$parser$Token) start1299.value), &$s1313);
            return NULL;
        }
        }
        panda$core$String* $tmp1316 = (($fn1315) self->$class->vtable[14])(self, next1308);
        panda$core$MutableString$append$panda$core$String(result1303, $tmp1316);
    }
    }
    $l1307:;
    org$pandalanguage$pandac$ASTNode* $tmp1317 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1317->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1317->refCount.value = 1;
    panda$core$String* $tmp1319 = panda$core$MutableString$convert$R$panda$core$String(result1303);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1317, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1299.value).position, $tmp1319);
    return $tmp1317;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1320;
    org$pandalanguage$pandac$ASTNode* t1324;
    panda$collections$Array* children1327;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1323 = (($fn1322) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1321);
    id1320 = $tmp1323;
    if (((panda$core$Bit) { !id1320.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1326 = (($fn1325) self->$class->vtable[32])(self);
    t1324 = $tmp1326;
    if (((panda$core$Bit) { t1324 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1328 = (panda$collections$Array*) malloc(40);
    $tmp1328->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1328->refCount.value = 1;
    panda$collections$Array$init($tmp1328);
    children1327 = $tmp1328;
    panda$collections$Array$add$panda$collections$Array$T(children1327, ((panda$core$Object*) t1324));
    org$pandalanguage$pandac$ASTNode* $tmp1330 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1330->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1330->refCount.value = 1;
    panda$core$String* $tmp1333 = (($fn1332) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1320.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1330, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1320.value).position, ((panda$core$Object*) $tmp1333), ((panda$collections$ListView*) children1327));
    return $tmp1330;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1334;
    panda$collections$Array* children1338;
    org$pandalanguage$pandac$ASTNode* param1343;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1337 = (($fn1336) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1335);
    start1334 = $tmp1337;
    if (((panda$core$Bit) { !start1334.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1339 = (panda$collections$Array*) malloc(40);
    $tmp1339->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1339->refCount.value = 1;
    panda$collections$Array$init($tmp1339);
    children1338 = $tmp1339;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1342 = (($fn1341) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1342.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1345 = (($fn1344) self->$class->vtable[58])(self);
        param1343 = $tmp1345;
        if (((panda$core$Bit) { param1343 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1338, ((panda$core$Object*) param1343));
        $l1346:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1349 = (($fn1348) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1349.nonnull }).value) goto $l1347;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1351 = (($fn1350) self->$class->vtable[58])(self);
            param1343 = $tmp1351;
            if (((panda$core$Bit) { param1343 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1338, ((panda$core$Object*) param1343));
        }
        goto $l1346;
        $l1347:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1354 = (($fn1353) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1352);
        if (((panda$core$Bit) { !$tmp1354.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1355 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1355->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1355->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1355, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1334.value).position, ((panda$collections$ListView*) children1338));
    return $tmp1355;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1357;
    org$pandalanguage$pandac$parser$Token$nullable start1358;
    panda$core$String* name1364;
    panda$collections$Array* children1367;
    org$pandalanguage$pandac$ASTNode* params1370;
    org$pandalanguage$pandac$ASTNode* returnType1376;
    org$pandalanguage$pandac$Position $tmp1381;
    org$pandalanguage$pandac$ASTNode* b1385;
    org$pandalanguage$pandac$Position $tmp1390;
    org$pandalanguage$pandac$parser$Token token1391;
    panda$core$String* tokenText1394;
    org$pandalanguage$pandac$ASTNode* post1408;
    org$pandalanguage$pandac$Position $tmp1413;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1360 = (($fn1359) self->$class->vtable[7])(self, ((panda$core$Int64) { 20 }));
    start1358 = $tmp1360;
    if (((panda$core$Bit) { !start1358.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1363 = (($fn1362) self->$class->vtable[8])(self, ((panda$core$Int64) { 21 }), &$s1361);
        start1358 = $tmp1363;
        if (((panda$core$Bit) { !start1358.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1357 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1357 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1366 = (($fn1365) self->$class->vtable[19])(self);
    name1364 = $tmp1366;
    if (((panda$core$Bit) { name1364 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1368 = (panda$collections$Array*) malloc(40);
    $tmp1368->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1368->refCount.value = 1;
    panda$collections$Array$init($tmp1368);
    children1367 = $tmp1368;
    panda$collections$Array$add$panda$collections$Array$T(children1367, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1367, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1372 = (($fn1371) self->$class->vtable[59])(self);
    params1370 = $tmp1372;
    if (((panda$core$Bit) { params1370 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1367, ((panda$core$Object*) params1370));
    org$pandalanguage$pandac$parser$Token $tmp1374 = (($fn1373) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1374.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1375.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1378 = (($fn1377) self->$class->vtable[32])(self);
        returnType1376 = $tmp1378;
        if (((panda$core$Bit) { returnType1376 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1367, ((panda$core$Object*) returnType1376));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1379 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1379->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1379->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1381);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1379, ((panda$core$Int64) { 138 }), $tmp1381);
        panda$collections$Array$add$panda$collections$Array$T(children1367, ((panda$core$Object*) $tmp1379));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1383 = (($fn1382) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1383.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1384.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1387 = (($fn1386) self->$class->vtable[41])(self);
        b1385 = $tmp1387;
        if (((panda$core$Bit) { b1385 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1367, ((panda$core$Object*) b1385));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1388 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1388->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1388->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1390);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1388, ((panda$core$Int64) { 138 }), $tmp1390);
        panda$collections$Array$add$panda$collections$Array$T(children1367, ((panda$core$Object*) $tmp1388));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1393 = (($fn1392) self->$class->vtable[6])(self);
    token1391 = $tmp1393;
    panda$core$String* $tmp1396 = (($fn1395) self->$class->vtable[14])(self, token1391);
    tokenText1394 = $tmp1396;
    panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1391.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1397 = $tmp1398.value;
    if (!$tmp1397) goto $l1399;
    panda$core$Bit $tmp1402 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1394, &$s1401);
    bool $tmp1400 = $tmp1402.value;
    if ($tmp1400) goto $l1403;
    panda$core$Bit $tmp1405 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1394, &$s1404);
    $tmp1400 = $tmp1405.value;
    $l1403:;
    panda$core$Bit $tmp1406 = { $tmp1400 };
    $tmp1397 = $tmp1406.value;
    $l1399:;
    panda$core$Bit $tmp1407 = { $tmp1397 };
    if ($tmp1407.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1410 = (($fn1409) self->$class->vtable[60])(self);
        post1408 = $tmp1410;
        if (((panda$core$Bit) { post1408 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1367, ((panda$core$Object*) post1408));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1411 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1411->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1411->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1413);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1411, ((panda$core$Int64) { 138 }), $tmp1413);
        panda$collections$Array$add$panda$collections$Array$T(children1367, ((panda$core$Object*) $tmp1411));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1414 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1414->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1414->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1414, kind1357, ((org$pandalanguage$pandac$parser$Token) start1358.value).position, ((panda$core$Object*) name1364), ((panda$collections$ListView*) children1367));
    return $tmp1414;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1416;
    panda$collections$Array* children1420;
    org$pandalanguage$pandac$ASTNode* params1423;
    org$pandalanguage$pandac$ASTNode* b1426;
    org$pandalanguage$pandac$parser$Token token1429;
    panda$core$String* tokenText1432;
    org$pandalanguage$pandac$ASTNode* post1446;
    org$pandalanguage$pandac$Position $tmp1451;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1419 = (($fn1418) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1417);
    start1416 = $tmp1419;
    if (((panda$core$Bit) { !start1416.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1421 = (panda$collections$Array*) malloc(40);
    $tmp1421->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1421->refCount.value = 1;
    panda$collections$Array$init($tmp1421);
    children1420 = $tmp1421;
    panda$collections$Array$add$panda$collections$Array$T(children1420, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1420, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1425 = (($fn1424) self->$class->vtable[59])(self);
    params1423 = $tmp1425;
    if (((panda$core$Bit) { params1423 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1420, ((panda$core$Object*) params1423));
    org$pandalanguage$pandac$ASTNode* $tmp1428 = (($fn1427) self->$class->vtable[41])(self);
    b1426 = $tmp1428;
    if (((panda$core$Bit) { b1426 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1420, ((panda$core$Object*) b1426));
    org$pandalanguage$pandac$parser$Token $tmp1431 = (($fn1430) self->$class->vtable[6])(self);
    token1429 = $tmp1431;
    panda$core$String* $tmp1434 = (($fn1433) self->$class->vtable[14])(self, token1429);
    tokenText1432 = $tmp1434;
    panda$core$Bit $tmp1436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1429.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1435 = $tmp1436.value;
    if (!$tmp1435) goto $l1437;
    panda$core$Bit $tmp1440 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1432, &$s1439);
    bool $tmp1438 = $tmp1440.value;
    if ($tmp1438) goto $l1441;
    panda$core$Bit $tmp1443 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1432, &$s1442);
    $tmp1438 = $tmp1443.value;
    $l1441:;
    panda$core$Bit $tmp1444 = { $tmp1438 };
    $tmp1435 = $tmp1444.value;
    $l1437:;
    panda$core$Bit $tmp1445 = { $tmp1435 };
    if ($tmp1445.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1448 = (($fn1447) self->$class->vtable[60])(self);
        post1446 = $tmp1448;
        if (((panda$core$Bit) { post1446 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1420, ((panda$core$Object*) post1446));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1449 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1449->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1449->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1451);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1449, ((panda$core$Int64) { 138 }), $tmp1451);
        panda$collections$Array$add$panda$collections$Array$T(children1420, ((panda$core$Object*) $tmp1449));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1452 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1452->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1452->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1452, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1416.value).position, ((panda$collections$ListView*) children1420));
    return $tmp1452;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1454;
    panda$collections$Array* children1457;
    org$pandalanguage$pandac$ASTNode* $tmp1456 = (($fn1455) self->$class->vtable[44])(self);
    decl1454 = $tmp1456;
    if (((panda$core$Bit) { decl1454 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1458 = (panda$collections$Array*) malloc(40);
    $tmp1458->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1458->refCount.value = 1;
    panda$collections$Array$init($tmp1458);
    children1457 = $tmp1458;
    panda$collections$Array$add$panda$collections$Array$T(children1457, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1457, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1457, ((panda$core$Object*) decl1454));
    org$pandalanguage$pandac$ASTNode* $tmp1460 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1460->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1460->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1460, ((panda$core$Int64) { 148 }), decl1454->position, ((panda$collections$ListView*) children1457));
    return $tmp1460;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1462;
    org$pandalanguage$pandac$ASTNode* dc1465;
    org$pandalanguage$pandac$Position $tmp1471;
    org$pandalanguage$pandac$ASTNode* a1472;
    org$pandalanguage$pandac$parser$Token $tmp1464 = (($fn1463) self->$class->vtable[6])(self);
    start1462 = $tmp1464;
    panda$core$Bit $tmp1466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1462.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1466.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1468 = (($fn1467) self->$class->vtable[57])(self);
        dc1465 = $tmp1468;
        if (((panda$core$Bit) { dc1465 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1469 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1469->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1469->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1471);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1469, ((panda$core$Int64) { 138 }), $tmp1471);
        dc1465 = $tmp1469;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1474 = (($fn1473) self->$class->vtable[56])(self);
    a1472 = $tmp1474;
    if (((panda$core$Bit) { a1472 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1476 = (($fn1475) self->$class->vtable[6])(self);
    switch ($tmp1476.kind.value) {
        case 17:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1478 = (($fn1477) self->$class->vtable[65])(self, dc1465, a1472);
            return $tmp1478;
        }
        break;
        case 18:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1480 = (($fn1479) self->$class->vtable[66])(self, dc1465, a1472);
            return $tmp1480;
        }
        break;
        case 21:
        case 20:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1482 = (($fn1481) self->$class->vtable[61])(self, dc1465, a1472);
            return $tmp1482;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1484 = (($fn1483) self->$class->vtable[62])(self, dc1465, a1472);
            return $tmp1484;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1486 = (($fn1485) self->$class->vtable[63])(self, dc1465, a1472);
            return $tmp1486;
        }
        break;
        default:
        {
            (($fn1488) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1487);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1489;
    org$pandalanguage$pandac$parser$Token$nullable start1492;
    org$pandalanguage$pandac$parser$Token$nullable name1496;
    org$pandalanguage$pandac$ASTNode* generics1503;
    org$pandalanguage$pandac$Position $tmp1508;
    org$pandalanguage$pandac$ASTNode* stypes1512;
    org$pandalanguage$pandac$Position $tmp1517;
    panda$collections$Array* members1521;
    org$pandalanguage$pandac$ASTNode* member1528;
    panda$collections$Array* $tmp1490 = (panda$collections$Array*) malloc(40);
    $tmp1490->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1490->refCount.value = 1;
    panda$collections$Array$init($tmp1490);
    children1489 = $tmp1490;
    panda$collections$Array$add$panda$collections$Array$T(children1489, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1489, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1495 = (($fn1494) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1493);
    start1492 = $tmp1495;
    if (((panda$core$Bit) { !start1492.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1499 = (($fn1498) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1497);
    name1496 = $tmp1499;
    if (((panda$core$Bit) { !name1496.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1501 = (($fn1500) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1501.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1502.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1505 = (($fn1504) self->$class->vtable[54])(self);
        generics1503 = $tmp1505;
        if (((panda$core$Bit) { generics1503 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1489, ((panda$core$Object*) generics1503));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1506 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1506->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1506->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1508);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1506, ((panda$core$Int64) { 138 }), $tmp1508);
        panda$collections$Array$add$panda$collections$Array$T(children1489, ((panda$core$Object*) $tmp1506));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1510 = (($fn1509) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1510.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1511.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1514 = (($fn1513) self->$class->vtable[55])(self);
        stypes1512 = $tmp1514;
        if (((panda$core$Bit) { stypes1512 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1489, ((panda$core$Object*) stypes1512));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1515 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1515->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1515->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1517);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1515, ((panda$core$Int64) { 139 }), $tmp1517);
        panda$collections$Array$add$panda$collections$Array$T(children1489, ((panda$core$Object*) $tmp1515));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1520 = (($fn1519) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1518);
    if (((panda$core$Bit) { !$tmp1520.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1522 = (panda$collections$Array*) malloc(40);
    $tmp1522->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1522->refCount.value = 1;
    panda$collections$Array$init($tmp1522);
    members1521 = $tmp1522;
    $l1524:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1527 = (($fn1526) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1527.nonnull }).value) goto $l1525;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1530 = (($fn1529) self->$class->vtable[64])(self);
        member1528 = $tmp1530;
        if (((panda$core$Bit) { member1528 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1521, ((panda$core$Object*) member1528));
    }
    goto $l1524;
    $l1525:;
    org$pandalanguage$pandac$ASTNode* $tmp1531 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1531->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1531->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1531, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1492.value).position, ((panda$collections$ListView*) members1521));
    panda$collections$Array$add$panda$collections$Array$T(children1489, ((panda$core$Object*) $tmp1531));
    org$pandalanguage$pandac$ASTNode* $tmp1533 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1533->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1533->refCount.value = 1;
    panda$core$String* $tmp1536 = (($fn1535) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1496.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1533, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1492.value).position, ((panda$core$Object*) $tmp1536), ((panda$collections$ListView*) children1489));
    return $tmp1533;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1537;
    org$pandalanguage$pandac$parser$Token$nullable start1540;
    org$pandalanguage$pandac$parser$Token$nullable name1544;
    org$pandalanguage$pandac$ASTNode* generics1551;
    org$pandalanguage$pandac$Position $tmp1556;
    panda$collections$Array* intfs1557;
    org$pandalanguage$pandac$ASTNode* t1562;
    panda$collections$Array* members1576;
    org$pandalanguage$pandac$ASTNode* member1583;
    panda$collections$Array* $tmp1538 = (panda$collections$Array*) malloc(40);
    $tmp1538->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1538->refCount.value = 1;
    panda$collections$Array$init($tmp1538);
    children1537 = $tmp1538;
    panda$collections$Array$add$panda$collections$Array$T(children1537, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1537, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1543 = (($fn1542) self->$class->vtable[8])(self, ((panda$core$Int64) { 18 }), &$s1541);
    start1540 = $tmp1543;
    if (((panda$core$Bit) { !start1540.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1547 = (($fn1546) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1545);
    name1544 = $tmp1547;
    if (((panda$core$Bit) { !name1544.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1549 = (($fn1548) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1549.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1550.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1553 = (($fn1552) self->$class->vtable[54])(self);
        generics1551 = $tmp1553;
        if (((panda$core$Bit) { generics1551 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1537, ((panda$core$Object*) generics1551));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1554 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1554->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1554->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1556);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1554, ((panda$core$Int64) { 138 }), $tmp1556);
        panda$collections$Array$add$panda$collections$Array$T(children1537, ((panda$core$Object*) $tmp1554));
    }
    }
    panda$collections$Array* $tmp1558 = (panda$collections$Array*) malloc(40);
    $tmp1558->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1558->refCount.value = 1;
    panda$collections$Array$init($tmp1558);
    intfs1557 = $tmp1558;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1561 = (($fn1560) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1561.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1564 = (($fn1563) self->$class->vtable[20])(self);
        t1562 = $tmp1564;
        if (((panda$core$Bit) { t1562 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1557, ((panda$core$Object*) t1562));
        $l1565:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1568 = (($fn1567) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1568.nonnull }).value) goto $l1566;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1570 = (($fn1569) self->$class->vtable[20])(self);
            t1562 = $tmp1570;
            if (((panda$core$Bit) { t1562 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1557, ((panda$core$Object*) t1562));
        }
        goto $l1565;
        $l1566:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1571 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1571->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1571->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1571, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1540.value).position, ((panda$collections$ListView*) intfs1557));
    panda$collections$Array$add$panda$collections$Array$T(children1537, ((panda$core$Object*) $tmp1571));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1575 = (($fn1574) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1573);
    if (((panda$core$Bit) { !$tmp1575.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1577 = (panda$collections$Array*) malloc(40);
    $tmp1577->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1577->refCount.value = 1;
    panda$collections$Array$init($tmp1577);
    members1576 = $tmp1577;
    $l1579:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1582 = (($fn1581) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1582.nonnull }).value) goto $l1580;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1585 = (($fn1584) self->$class->vtable[64])(self);
        member1583 = $tmp1585;
        if (((panda$core$Bit) { member1583 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1576, ((panda$core$Object*) member1583));
    }
    goto $l1579;
    $l1580:;
    org$pandalanguage$pandac$ASTNode* $tmp1586 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1586->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1586->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1586, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1540.value).position, ((panda$collections$ListView*) members1576));
    panda$collections$Array$add$panda$collections$Array$T(children1537, ((panda$core$Object*) $tmp1586));
    org$pandalanguage$pandac$ASTNode* $tmp1588 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1588->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1588->refCount.value = 1;
    panda$core$String* $tmp1591 = (($fn1590) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1544.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1588, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1540.value).position, ((panda$core$Object*) $tmp1591), ((panda$collections$ListView*) children1537));
    return $tmp1588;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1593 = (($fn1592) self->$class->vtable[6])(self);
    switch ($tmp1593.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1595 = (($fn1594) self->$class->vtable[53])(self);
            return $tmp1595;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1597 = (($fn1596) self->$class->vtable[52])(self);
            return $tmp1597;
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
            org$pandalanguage$pandac$ASTNode* $tmp1599 = (($fn1598) self->$class->vtable[64])(self);
            return $tmp1599;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1601 = (($fn1600) self->$class->vtable[51])(self);
            return $tmp1601;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1602;
    org$pandalanguage$pandac$ASTNode* entry1610;
    org$pandalanguage$pandac$Position $tmp1616;
    panda$collections$Array* $tmp1603 = (panda$collections$Array*) malloc(40);
    $tmp1603->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1603->refCount.value = 1;
    panda$collections$Array$init($tmp1603);
    entries1602 = $tmp1603;
    $l1605:;
    org$pandalanguage$pandac$parser$Token $tmp1608 = (($fn1607) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1609 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1608.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1609.value) goto $l1606;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1612 = (($fn1611) self->$class->vtable[67])(self);
        entry1610 = $tmp1612;
        if (((panda$core$Bit) { entry1610 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1613 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1613.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1602, ((panda$core$Object*) entry1610));
    }
    goto $l1605;
    $l1606:;
    org$pandalanguage$pandac$ASTNode* $tmp1614 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1614->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1614->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp1616, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1614, ((panda$core$Int64) { 152 }), $tmp1616, ((panda$collections$ListView*) entries1602));
    return $tmp1614;
}

