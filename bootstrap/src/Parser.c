#include "org/pandalanguage/pandac/parser/Parser.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/parser/Lexer.h"
#include "panda/collections/Array.h"
#include "panda/collections/Stack.h"
#include "panda/core/Bit.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.h"
#include "panda/io/LineNumberInputStream.h"
#include "panda/io/MemoryInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt64.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ImmutableArray.h"


typedef void (*$fn9)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn10)(org$pandalanguage$pandac$parser$Lexer*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn19)(org$pandalanguage$pandac$parser$Lexer*);
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$core$String$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$position$org$pandalanguage$pandac$parser$Token$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaces$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef org$pandalanguage$pandac$parser$Token (*$fn24)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn32)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn36)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn45)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn51)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn54)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn56)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn61)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn64)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn66)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn73)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn78)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$Position* (*$fn80)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn84)(org$pandalanguage$pandac$ErrorReporter*, org$pandalanguage$pandac$Position*, panda$core$String*);
typedef panda$core$UInt8$nullable (*$fn143)(panda$io$LineNumberInputStream*);
typedef org$pandalanguage$pandac$parser$Token (*$fn170)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn178)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn183)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn191)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn197)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn202)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef void (*$fn203)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn206)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn209)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn213)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn215)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Object* (*$fn221)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn228)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn232)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn236)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn240)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn244)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn248)(panda$core$MutableString*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn252)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn255)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn259)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn261)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn263)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn264)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn267)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef void (*$fn272)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn273)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn275)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn278)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn280)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn287)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn293)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn299)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$parser$Token (*$fn321)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn327)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn332)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn337)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn343)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef panda$core$String* (*$fn347)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn353)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef void (*$fn375)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn376)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn380)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn383)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn386)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn391)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$Object* (*$fn396)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn403)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn491)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn495)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn499)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn503)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn505)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn510)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn515)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn516)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn520)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn525)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn529)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn533)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn536)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn537)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn539)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn543)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$parser$Token (*$fn545)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn548)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn549)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn554)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn556)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn559)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn561)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn563)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn565)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn567)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn570)(panda$core$MutableString*);
typedef void (*$fn572)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn573)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn581)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn586)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn590)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn594)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn597)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Object* (*$fn599)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn602)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn604)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Object* (*$fn606)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn608)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn610)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn611)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn619)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn622)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn628)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn631)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn640)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn648)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn655)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn656)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn657)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn664)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn666)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn667)(panda$core$MutableString*, panda$core$Object*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn670)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn672)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn674)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn676)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn677)(panda$core$MutableString*, panda$core$Object*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn679)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn681)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn683)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn685)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token (*$fn688)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn703)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn706)(panda$core$MutableString*);
typedef void (*$fn708)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn709)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn711)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn716)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn719)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn727)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn740)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn747)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn748)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn751)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn756)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn785)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn794)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn798)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn805)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn806)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn807)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn809)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn814)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn827)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn834)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn837)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn846)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn849)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn858)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn870)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn875)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn877)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn888)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn890)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn895)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn928)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn935)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn937)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn942)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn951)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn958)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn960)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn965)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn968)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn977)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn980)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn986)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn988)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn990)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn994)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn997)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1002)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1004)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1008)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1010)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1014)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1021)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn1025)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1029)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1032)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1035)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1038)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1041)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1050)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1053)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1056)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1065)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1068)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1071)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1074)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1083)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1086)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1095)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1098)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1103)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1106)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1112)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1118)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1122)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1124)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1132)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1137)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1158)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1161)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1167)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1173)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1176)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1181)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1187)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1191)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1194)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1202)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1215)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1218)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1222)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1225)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn1231)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1233)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1239)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1247)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1250)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1261)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1264)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1267)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1272)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1275)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1339)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1342)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1350)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1353)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1355)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1358)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1369)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1371)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1374)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1376)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1379)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1382)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1384)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1389)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1398)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1403)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1407)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1410)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1416)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1419)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn1421)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$String* (*$fn1427)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1429)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1432)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Object* (*$fn1434)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1437)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1439)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Object* (*$fn1441)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1443)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn1445)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1446)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1451)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1454)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1458)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1464)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1467)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1471)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1477)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1480)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1497)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1502)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1505)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1508)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1511)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1514)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1517)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1520)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1523)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1526)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1529)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1531)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1534)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1537)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1540)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1543)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1546)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1549)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1552)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1555)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1559)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1561)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1563)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1565)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef void (*$fn1567)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1568)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1575)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1590)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1593)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1596)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1599)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1603)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1608)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1612)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef void (*$fn1615)(panda$core$MutableString*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1617)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1619)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn1621)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1624)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1628)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1632)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1637)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1641)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef void (*$fn1644)(panda$core$MutableString*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1646)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1648)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn1650)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1653)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1657)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1661)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1669)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1672)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1676)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1680)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1683)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1685)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1688)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1692)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1695)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1701)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1707)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1711)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1713)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1716)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1726)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1730)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1736)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1744)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1749)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn1750)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn1752)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1755)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1759)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1762)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1769)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1773)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1778)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1781)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1785)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1787)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1790)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1796)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1799)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1802)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1808)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1810)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1814)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1818)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1822)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1827)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1830)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1844)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1852)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1858)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1861)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1864)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1867)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1881)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1888)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1896)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1900)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1905)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1908)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1911)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1914)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1921)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1924)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1939)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1942)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1948)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1952)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1954)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1958)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1962)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1966)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1970)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1974)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1979)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1986)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1989)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1995)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn2002)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn2006)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn2008)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2012)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn2019)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2022)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn2026)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2028)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn2033)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn2040)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2043)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn2049)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn2052)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2055)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2058)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2085)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2087)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn2094)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2098)(org$pandalanguage$pandac$parser$Parser*);

static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1 };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 20 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 13 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6E\x67\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30 };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1 };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27 };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27 };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E", 1 };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1 };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72", 1 };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0D", 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74", 1 };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x09", 1 };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1 };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1 };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1 };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1 };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3 };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6E\x63\x65", 30 };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3 };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35 };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2 };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3 };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4 };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2 };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72\x20\x6F\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 47 };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3 };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3 };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3 };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4 };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1 };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3 };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1 };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4 };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3 };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5 };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4 };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7 };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4 };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7 };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6 };
static panda$core$String $s1094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8 };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6 };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3 };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7 };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3 };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3 };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42 };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1 };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3 };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3 };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3 };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39 };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39 };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39 };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6 };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3 };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3 };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7 };
static panda$core$String $s1463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10 };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8 };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47 };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11 };
static panda$core$String $s1598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9 };
static panda$core$String $s1602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6 };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1 };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3 };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3 };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3 };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3 };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 23 };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 34 };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3 };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3 };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x65\x74\x68\x6F\x64\x27\x20\x6F\x72\x20\x27\x66\x75\x6E\x63\x74\x69\x6F\x6E\x27", 22 };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4 };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7 };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6 };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4 };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7 };
static panda$core$String $s1941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E", 13 };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6C\x61\x73\x73\x27", 7 };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3 };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11 };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13 };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3 };

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
    (($fn9) self->commaSeparatedExpressionContext->$class->vtable[2])(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))));
}
void org$pandalanguage$pandac$parser$Parser$start$panda$core$String$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_filename, panda$core$String* p_source) {
    (($fn10) self->lexer->$class->vtable[2])(self->lexer, p_source);
    self->filename = p_filename;
    self->source = p_source;
    panda$collections$Array$clear(self->pushbackBuffer);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx13;
    org$pandalanguage$pandac$parser$Token result16;
    org$pandalanguage$pandac$parser$Token result18;
    panda$core$Int64 $tmp11 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp12 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp11, ((panda$core$Int64) { 0 }));
    if ($tmp12.value) {
    {
        panda$core$Int64 $tmp14 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp15 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp14, ((panda$core$Int64) { 1 }));
        idx13 = $tmp15;
        panda$core$Object* $tmp17 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, idx13);
        result16 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp17)->value;
        panda$collections$Array$removeIndex$panda$core$Int64(self->pushbackBuffer, idx13);
        return result16;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp20 = (($fn19) self->lexer->$class->vtable[3])(self->lexer);
    result18 = $tmp20;
    if (self->inSpeculative.value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(self->speculativeBuffer, ((panda$core$Object*) wrap_org$pandalanguage$pandac$parser$Token(result18)));
    }
    }
    return result18;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result23;
    panda$core$Int64 $match$125426;
    org$pandalanguage$pandac$parser$Token next31;
    panda$core$Int64 $match$149034;
    org$pandalanguage$pandac$parser$Token next44;
    panda$core$Int64 $match$200047;
    $l21:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp25 = (($fn24) self->$class->vtable[3])(self);
        result23 = $tmp25;
        {
            $match$125426 = result23.kind;
            panda$core$Bit $tmp27 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125426, ((panda$core$Int64) { 12 }));
            if ($tmp27.value) {
            {
                goto $l21;
            }
            }
            else {
            panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125426, ((panda$core$Int64) { 8 }));
            if ($tmp28.value) {
            {
                $l29:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp33 = (($fn32) self->$class->vtable[3])(self);
                    next31 = $tmp33;
                    {
                        $match$149034 = next31.kind;
                        panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$149034, ((panda$core$Int64) { 12 }));
                        if ($tmp35.value) {
                        {
                            panda$core$String* $tmp37 = (($fn36) self->$class->vtable[14])(self, next31);
                            panda$core$Bit $tmp39 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp37, &$s38);
                            if ($tmp39.value) {
                            {
                                goto $l21;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$149034, ((panda$core$Int64) { 0 }));
                        if ($tmp40.value) {
                        {
                            return next31;
                        }
                        }
                        }
                    }
                }
                }
                $l30:;
            }
            }
            else {
            panda$core$Bit $tmp41 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125426, ((panda$core$Int64) { 9 }));
            if ($tmp41.value) {
            {
                $l42:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp46 = (($fn45) self->$class->vtable[4])(self);
                    next44 = $tmp46;
                    {
                        $match$200047 = next44.kind;
                        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$200047, ((panda$core$Int64) { 10 }));
                        if ($tmp48.value) {
                        {
                            goto $l21;
                        }
                        }
                        else {
                        panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$200047, ((panda$core$Int64) { 0 }));
                        if ($tmp49.value) {
                        {
                            (($fn51) self->$class->vtable[9])(self, result23, &$s50);
                            return next44;
                        }
                        }
                        }
                    }
                }
                }
                $l43:;
            }
            }
            else {
            {
                return result23;
            }
            }
            }
            }
        }
    }
    }
    $l22:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) wrap_org$pandalanguage$pandac$parser$Token(p_token)));
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp52 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp52, ((panda$core$Int64) { 0 }));
    if ($tmp53.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp55 = (($fn54) self->$class->vtable[4])(self);
        (($fn56) self->$class->vtable[5])(self, $tmp55);
    }
    }
    panda$core$Int64 $tmp57 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp58 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp57, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp59 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, $tmp58);
    return ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp59)->value;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Int64 p_kind) {
    org$pandalanguage$pandac$parser$Token result60;
    org$pandalanguage$pandac$parser$Token $tmp62 = (($fn61) self->$class->vtable[4])(self);
    result60 = $tmp62;
    panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result60.kind, p_kind);
    if ($tmp63.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result60, true });
    }
    }
    (($fn64) self->$class->vtable[5])(self, result60);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Int64 p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result65;
    org$pandalanguage$pandac$parser$Token $tmp67 = (($fn66) self->$class->vtable[4])(self);
    result65 = $tmp67;
    panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result65.kind, p_kind);
    if ($tmp68.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result65, true });
    }
    }
    panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s69, p_expected);
    panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp70, &$s71);
    panda$core$String* $tmp74 = (($fn73) self->$class->vtable[14])(self, result65);
    panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp72, $tmp74);
    panda$core$String* $tmp77 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp75, &$s76);
    (($fn78) self->$class->vtable[9])(self, result65, $tmp77);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp79 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp79.value) {
    {
        org$pandalanguage$pandac$Position* $tmp81 = (($fn80) self->$class->vtable[13])(self, p_token);
        ITable* $tmp82 = self->errors->$class->itable;
        while ($tmp82->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp82 = $tmp82->next;
        }
        $fn84 $tmp83 = $tmp82->methods[0];
        $tmp83(self->errors, $tmp81, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$Array$clear(self->speculativeBuffer);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Range $tmp85;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp86 = panda$collections$Array$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp87 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp86, ((panda$core$Int64) { 1 }));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp85, ((panda$core$Object*) wrap_panda$core$Int64($tmp87)), ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { true }));
    int64_t $tmp89 = ((panda$core$Int64$wrapper*) $tmp85.start)->value.value;
    panda$core$Int64 i88 = { $tmp89 };
    int64_t $tmp91 = ((panda$core$Int64$wrapper*) $tmp85.end)->value.value;
    int64_t $tmp92 = $tmp85.step.value;
    bool $tmp93 = $tmp85.inclusive.value;
    bool $tmp100 = $tmp92 > 0;
    if ($tmp100) goto $l98; else goto $l99;
    $l98:;
    if ($tmp93) goto $l101; else goto $l102;
    $l101:;
    if ($tmp89 <= $tmp91) goto $l94; else goto $l96;
    $l102:;
    if ($tmp89 < $tmp91) goto $l94; else goto $l96;
    $l99:;
    if ($tmp93) goto $l103; else goto $l104;
    $l103:;
    if ($tmp89 >= $tmp91) goto $l94; else goto $l96;
    $l104:;
    if ($tmp89 > $tmp91) goto $l94; else goto $l96;
    $l94:;
    {
        panda$core$Object* $tmp106 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->speculativeBuffer, i88);
        panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) wrap_org$pandalanguage$pandac$parser$Token(((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp106)->value)));
    }
    $l97:;
    if ($tmp100) goto $l108; else goto $l109;
    $l108:;
    int64_t $tmp110 = $tmp91 - i88.value;
    if ($tmp93) goto $l111; else goto $l112;
    $l111:;
    if ($tmp110 >= $tmp92) goto $l107; else goto $l96;
    $l112:;
    if ($tmp110 > $tmp92) goto $l107; else goto $l96;
    $l109:;
    int64_t $tmp114 = i88.value - $tmp91;
    if ($tmp93) goto $l115; else goto $l116;
    $l115:;
    if ($tmp114 >= -$tmp92) goto $l107; else goto $l96;
    $l116:;
    if ($tmp114 > -$tmp92) goto $l107; else goto $l96;
    $l107:;
    i88.value += $tmp92;
    goto $l94;
    $l96:;
}
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$parser$Parser$position$org$pandalanguage$pandac$parser$Token$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$io$LineNumberInputStream* input118;
    panda$core$Range $tmp123;
    panda$core$UInt8$nullable c142;
    panda$io$LineNumberInputStream* $tmp119 = (panda$io$LineNumberInputStream*) malloc(40);
    $tmp119->$class = (panda$core$Class*) &panda$io$LineNumberInputStream$class;
    $tmp119->refCount.value = 1;
    panda$io$MemoryInputStream* $tmp121 = (panda$io$MemoryInputStream*) malloc(32);
    $tmp121->$class = (panda$core$Class*) &panda$io$MemoryInputStream$class;
    $tmp121->refCount.value = 1;
    panda$io$MemoryInputStream$init$panda$core$String($tmp121, self->source);
    panda$io$LineNumberInputStream$init$panda$io$InputStream($tmp119, ((panda$io$InputStream*) $tmp121));
    input118 = $tmp119;
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp123, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(p_token.offset)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp125 = ((panda$core$Int64$wrapper*) $tmp123.start)->value.value;
    panda$core$Int64 i124 = { $tmp125 };
    int64_t $tmp127 = ((panda$core$Int64$wrapper*) $tmp123.end)->value.value;
    int64_t $tmp128 = $tmp123.step.value;
    bool $tmp129 = $tmp123.inclusive.value;
    bool $tmp136 = $tmp128 > 0;
    if ($tmp136) goto $l134; else goto $l135;
    $l134:;
    if ($tmp129) goto $l137; else goto $l138;
    $l137:;
    if ($tmp125 <= $tmp127) goto $l130; else goto $l132;
    $l138:;
    if ($tmp125 < $tmp127) goto $l130; else goto $l132;
    $l135:;
    if ($tmp129) goto $l139; else goto $l140;
    $l139:;
    if ($tmp125 >= $tmp127) goto $l130; else goto $l132;
    $l140:;
    if ($tmp125 > $tmp127) goto $l130; else goto $l132;
    $l130:;
    {
        panda$core$UInt8$nullable $tmp144 = (($fn143) input118->$class->vtable[2])(input118);
        c142 = $tmp144;
    }
    $l133:;
    if ($tmp136) goto $l146; else goto $l147;
    $l146:;
    int64_t $tmp148 = $tmp127 - i124.value;
    if ($tmp129) goto $l149; else goto $l150;
    $l149:;
    if ($tmp148 >= $tmp128) goto $l145; else goto $l132;
    $l150:;
    if ($tmp148 > $tmp128) goto $l145; else goto $l132;
    $l147:;
    int64_t $tmp152 = i124.value - $tmp127;
    if ($tmp129) goto $l153; else goto $l154;
    $l153:;
    if ($tmp152 >= -$tmp128) goto $l145; else goto $l132;
    $l154:;
    if ($tmp152 > -$tmp128) goto $l145; else goto $l132;
    $l145:;
    i124.value += $tmp128;
    goto $l130;
    $l132:;
    org$pandalanguage$pandac$Position* $tmp156 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp156->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp156->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp156, self->filename, input118->line, input118->column);
    return $tmp156;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String$Index start158;
    panda$core$Range $tmp161;
    panda$core$String$Index $tmp159 = panda$core$String$start$R$panda$core$String$Index(self->source);
    panda$core$String$Index $tmp160 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self->source, $tmp159, p_token.offset);
    start158 = $tmp160;
    panda$core$String$Index $tmp162 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self->source, start158, p_token.length);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp161, (((panda$core$String$Index$nullable) { start158, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { start158, true }).value))) : NULL), (((panda$core$String$Index$nullable) { $tmp162, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp162, true }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp163 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self->source, $tmp161);
    return $tmp163;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    panda$collections$Array* children164;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    panda$collections$Array* $tmp165 = (panda$collections$Array*) malloc(40);
    $tmp165->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp165->refCount.value = 1;
    panda$collections$Array$init($tmp165);
    children164 = $tmp165;
    panda$collections$Array$add$panda$collections$Array$T(children164, ((panda$core$Object*) p_string));
    panda$collections$Array$add$panda$collections$Array$T(children164, ((panda$core$Object*) p_chunk));
    org$pandalanguage$pandac$ASTNode* $tmp167 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp167->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp167->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp167, ((panda$core$Int64) { 103 }), p_string->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 51 }))), ((panda$collections$ListView*) children164));
    return $tmp167;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start169;
    org$pandalanguage$pandac$ASTNode* result184;
    panda$core$MutableString* chunk185;
    org$pandalanguage$pandac$parser$Token token190;
    panda$core$Int64 $match$4968194;
    panda$core$String* str196;
    org$pandalanguage$pandac$parser$Token escape208;
    panda$core$String* escapeText214;
    panda$core$Char8 c217;
    panda$core$String* $match$5803223;
    org$pandalanguage$pandac$ASTNode* expr251;
    panda$core$Range $tmp268;
    org$pandalanguage$pandac$parser$Token $tmp171 = (($fn170) self->$class->vtable[4])(self);
    start169 = $tmp171;
    panda$core$Bit $tmp173 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start169.kind, ((panda$core$Int64) { 7 }));
    bool $tmp172 = $tmp173.value;
    if (!$tmp172) goto $l174;
    panda$core$Bit $tmp175 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start169.kind, ((panda$core$Int64) { 6 }));
    $tmp172 = $tmp175.value;
    $l174:;
    panda$core$Bit $tmp176 = { $tmp172 };
    if ($tmp176.value) {
    {
        panda$core$String* $tmp179 = (($fn178) self->$class->vtable[14])(self, start169);
        panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s177, $tmp179);
        panda$core$String* $tmp182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp180, &$s181);
        (($fn183) self->$class->vtable[9])(self, start169, $tmp182);
        return NULL;
    }
    }
    result184 = NULL;
    panda$core$MutableString* $tmp186 = (panda$core$MutableString*) malloc(40);
    $tmp186->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp186->refCount.value = 1;
    panda$core$MutableString$init($tmp186);
    chunk185 = $tmp186;
    $l188:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp192 = (($fn191) self->$class->vtable[3])(self);
        token190 = $tmp192;
        panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token190.kind, start169.kind);
        if ($tmp193.value) {
        {
            goto $l189;
        }
        }
        {
            $match$4968194 = token190.kind;
            panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4968194, ((panda$core$Int64) { 12 }));
            if ($tmp195.value) {
            {
                panda$core$String* $tmp198 = (($fn197) self->$class->vtable[14])(self, token190);
                str196 = $tmp198;
                panda$core$Bit $tmp200 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(str196, &$s199);
                if ($tmp200.value) {
                {
                    (($fn202) self->$class->vtable[9])(self, start169, &$s201);
                    return NULL;
                }
                }
                (($fn203) chunk185->$class->vtable[3])(chunk185, str196);
            }
            }
            else {
            panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4968194, ((panda$core$Int64) { 0 }));
            if ($tmp204.value) {
            {
                (($fn206) self->$class->vtable[9])(self, start169, &$s205);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4968194, ((panda$core$Int64) { 106 }));
            if ($tmp207.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp210 = (($fn209) self->$class->vtable[3])(self);
                escape208 = $tmp210;
                panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape208.kind, ((panda$core$Int64) { 0 }));
                if ($tmp211.value) {
                {
                    (($fn213) self->$class->vtable[9])(self, start169, &$s212);
                    return NULL;
                }
                }
                panda$core$String* $tmp216 = (($fn215) self->$class->vtable[14])(self, escape208);
                escapeText214 = $tmp216;
                panda$collections$ListView* $tmp218 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText214);
                ITable* $tmp219 = $tmp218->$class->itable;
                while ($tmp219->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp219 = $tmp219->next;
                }
                $fn221 $tmp220 = $tmp219->methods[0];
                panda$core$Object* $tmp222 = $tmp220($tmp218, ((panda$core$Int64) { 0 }));
                c217 = ((panda$core$Char8$wrapper*) $tmp222)->value;
                {
                    panda$core$String* $tmp224 = panda$core$Char8$convert$R$panda$core$String(c217);
                    $match$5803223 = $tmp224;
                    panda$core$Bit $tmp226 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5803223, &$s225);
                    if ($tmp226.value) {
                    {
                        (($fn228) chunk185->$class->vtable[3])(chunk185, &$s227);
                    }
                    }
                    else {
                    panda$core$Bit $tmp230 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5803223, &$s229);
                    if ($tmp230.value) {
                    {
                        (($fn232) chunk185->$class->vtable[3])(chunk185, &$s231);
                    }
                    }
                    else {
                    panda$core$Bit $tmp234 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5803223, &$s233);
                    if ($tmp234.value) {
                    {
                        (($fn236) chunk185->$class->vtable[3])(chunk185, &$s235);
                    }
                    }
                    else {
                    panda$core$Bit $tmp238 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5803223, &$s237);
                    if ($tmp238.value) {
                    {
                        (($fn240) chunk185->$class->vtable[3])(chunk185, &$s239);
                    }
                    }
                    else {
                    panda$core$Bit $tmp242 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5803223, &$s241);
                    if ($tmp242.value) {
                    {
                        (($fn244) chunk185->$class->vtable[3])(chunk185, &$s243);
                    }
                    }
                    else {
                    panda$core$Bit $tmp246 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5803223, &$s245);
                    if ($tmp246.value) {
                    {
                        (($fn248) chunk185->$class->vtable[3])(chunk185, &$s247);
                    }
                    }
                    else {
                    panda$core$Bit $tmp250 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5803223, &$s249);
                    if ($tmp250.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp253 = (($fn252) self->$class->vtable[30])(self);
                            expr251 = $tmp253;
                            if (((panda$core$Bit) { expr251 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp256 = (($fn255) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s254);
                            if (((panda$core$Bit) { !$tmp256.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp257 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                            $tmp257->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                            $tmp257->refCount.value = 1;
                            panda$core$String* $tmp260 = (($fn259) chunk185->$class->vtable[0])(chunk185);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp257, ((panda$core$Int64) { 113 }), start169.offset, $tmp260);
                            org$pandalanguage$pandac$ASTNode* $tmp262 = (($fn261) self->$class->vtable[15])(self, result184, $tmp257);
                            result184 = $tmp262;
                            (($fn263) chunk185->$class->vtable[7])(chunk185);
                            org$pandalanguage$pandac$ASTNode* $tmp265 = (($fn264) self->$class->vtable[15])(self, result184, expr251);
                            result184 = $tmp265;
                        }
                    }
                    }
                    else {
                    {
                        (($fn267) self->$class->vtable[9])(self, token190, &$s266);
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
                panda$core$String$Index $tmp269 = panda$core$String$start$R$panda$core$String$Index(escapeText214);
                panda$core$String$Index $tmp270 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText214, $tmp269);
                panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp268, (((panda$core$String$Index$nullable) { $tmp270, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp270, true }).value))) : NULL), (((panda$core$String$Index$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp271 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText214, $tmp268);
                (($fn272) chunk185->$class->vtable[3])(chunk185, $tmp271);
            }
            }
            else {
            {
                panda$core$String* $tmp274 = (($fn273) self->$class->vtable[14])(self, token190);
                (($fn275) chunk185->$class->vtable[3])(chunk185, $tmp274);
            }
            }
            }
            }
        }
    }
    }
    $l189:;
    org$pandalanguage$pandac$ASTNode* $tmp276 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp276->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp276->refCount.value = 1;
    panda$core$String* $tmp279 = (($fn278) chunk185->$class->vtable[0])(chunk185);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp276, ((panda$core$Int64) { 113 }), start169.offset, $tmp279);
    org$pandalanguage$pandac$ASTNode* $tmp281 = (($fn280) self->$class->vtable[15])(self, result184, $tmp276);
    return $tmp281;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result282;
    panda$collections$Iterator* c$Iter283;
    panda$core$Char8 c296;
    panda$core$UInt64 i302;
    result282 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp284 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp285 = ((panda$collections$Iterable*) $tmp284)->$class->itable;
        while ($tmp285->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp285 = $tmp285->next;
        }
        $fn287 $tmp286 = $tmp285->methods[0];
        panda$collections$Iterator* $tmp288 = $tmp286(((panda$collections$Iterable*) $tmp284));
        c$Iter283 = $tmp288;
        $l289:;
        ITable* $tmp291 = c$Iter283->$class->itable;
        while ($tmp291->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp291 = $tmp291->next;
        }
        $fn293 $tmp292 = $tmp291->methods[0];
        panda$core$Bit $tmp294 = $tmp292(c$Iter283);
        panda$core$Bit $tmp295 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp294);
        if (!$tmp295.value) goto $l290;
        {
            ITable* $tmp297 = c$Iter283->$class->itable;
            while ($tmp297->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp297 = $tmp297->next;
            }
            $fn299 $tmp298 = $tmp297->methods[1];
            panda$core$Object* $tmp300 = $tmp298(c$Iter283);
            c296 = ((panda$core$Char8$wrapper*) $tmp300)->value;
            panda$core$UInt64 $tmp301 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result282, p_base);
            result282 = $tmp301;
            panda$core$UInt64 $tmp303 = panda$core$Char8$convert$R$panda$core$UInt64(c296);
            i302 = $tmp303;
            panda$core$Bit $tmp305 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i302, ((panda$core$UInt64) { 48 }));
            bool $tmp304 = $tmp305.value;
            if (!$tmp304) goto $l306;
            panda$core$Bit $tmp307 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i302, ((panda$core$UInt64) { 57 }));
            $tmp304 = $tmp307.value;
            $l306:;
            panda$core$Bit $tmp308 = { $tmp304 };
            if ($tmp308.value) {
            {
                panda$core$UInt64 $tmp309 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i302, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp310 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result282, $tmp309);
                result282 = $tmp310;
            }
            }
            else {
            panda$core$Bit $tmp312 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i302, ((panda$core$UInt64) { 65 }));
            bool $tmp311 = $tmp312.value;
            if (!$tmp311) goto $l313;
            panda$core$Bit $tmp314 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i302, ((panda$core$UInt64) { 70 }));
            $tmp311 = $tmp314.value;
            $l313:;
            panda$core$Bit $tmp315 = { $tmp311 };
            if ($tmp315.value) {
            {
                panda$core$UInt64 $tmp316 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i302, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp317 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result282, $tmp316);
                result282 = $tmp317;
            }
            }
            else {
            {
                panda$core$UInt64 $tmp318 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i302, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp319 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result282, $tmp318);
                result282 = $tmp319;
            }
            }
            }
        }
        goto $l289;
        $l290:;
    }
    return result282;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t320;
    panda$core$Int64 $match$8211323;
    panda$core$String* s336;
    panda$core$Range $tmp341;
    panda$core$String* s346;
    panda$core$Range $tmp351;
    org$pandalanguage$pandac$ASTNode* result379;
    org$pandalanguage$pandac$parser$Token $tmp322 = (($fn321) self->$class->vtable[4])(self);
    t320 = $tmp322;
    {
        $match$8211323 = t320.kind;
        panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 48 }));
        if ($tmp324.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp325 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp325->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp325->refCount.value = 1;
            panda$core$String* $tmp328 = (($fn327) self->$class->vtable[14])(self, t320);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp325, ((panda$core$Int64) { 106 }), t320.offset, $tmp328);
            return $tmp325;
        }
        }
        else {
        panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 2 }));
        if ($tmp329.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp330 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp330->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp330->refCount.value = 1;
            panda$core$String* $tmp333 = (($fn332) self->$class->vtable[14])(self, t320);
            panda$core$UInt64$nullable $tmp334 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp333);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp330, ((panda$core$Int64) { 102 }), t320.offset, ((panda$core$UInt64) $tmp334.value));
            return $tmp330;
        }
        }
        else {
        panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 3 }));
        if ($tmp335.value) {
        {
            panda$core$String* $tmp338 = (($fn337) self->$class->vtable[14])(self, t320);
            s336 = $tmp338;
            org$pandalanguage$pandac$ASTNode* $tmp339 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp339->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp339->refCount.value = 1;
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp341, (((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp342 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s336, $tmp341);
            panda$core$UInt64 $tmp344 = (($fn343) self->$class->vtable[17])(self, $tmp342, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp339, ((panda$core$Int64) { 102 }), t320.offset, $tmp344);
            return $tmp339;
        }
        }
        else {
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 4 }));
        if ($tmp345.value) {
        {
            panda$core$String* $tmp348 = (($fn347) self->$class->vtable[14])(self, t320);
            s346 = $tmp348;
            org$pandalanguage$pandac$ASTNode* $tmp349 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp349->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp349->refCount.value = 1;
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp351, (((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp352 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s346, $tmp351);
            panda$core$UInt64 $tmp354 = (($fn353) self->$class->vtable[17])(self, $tmp352, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp349, ((panda$core$Int64) { 102 }), t320.offset, $tmp354);
            return $tmp349;
        }
        }
        else {
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 46 }));
        if ($tmp355.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp356 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp356->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp356->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp356, ((panda$core$Int64) { 114 }), t320.offset);
            return $tmp356;
        }
        }
        else {
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 47 }));
        if ($tmp358.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp359 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp359->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp359->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp359, ((panda$core$Int64) { 115 }), t320.offset);
            return $tmp359;
        }
        }
        else {
        panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 43 }));
        if ($tmp361.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp362 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp362->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp362->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp362, ((panda$core$Int64) { 117 }), t320.offset);
            return $tmp362;
        }
        }
        else {
        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 41 }));
        if ($tmp364.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp365 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp365->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp365->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp365, ((panda$core$Int64) { 116 }), t320.offset, ((panda$core$Bit) { true }));
            return $tmp365;
        }
        }
        else {
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 42 }));
        if ($tmp367.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp368 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp368->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp368->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp368, ((panda$core$Int64) { 116 }), t320.offset, ((panda$core$Bit) { false }));
            return $tmp368;
        }
        }
        else {
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 7 }));
        bool $tmp370 = $tmp371.value;
        if ($tmp370) goto $l372;
        panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 6 }));
        $tmp370 = $tmp373.value;
        $l372:;
        panda$core$Bit $tmp374 = { $tmp370 };
        if ($tmp374.value) {
        {
            (($fn375) self->$class->vtable[5])(self, t320);
            org$pandalanguage$pandac$ASTNode* $tmp377 = (($fn376) self->$class->vtable[16])(self);
            return $tmp377;
        }
        }
        else {
        panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8211323, ((panda$core$Int64) { 103 }));
        if ($tmp378.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp381 = (($fn380) self->$class->vtable[30])(self);
            result379 = $tmp381;
            if (((panda$core$Bit) { result379 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp384 = (($fn383) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s382);
            if (((panda$core$Bit) { !$tmp384.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result379;
        }
        }
        else {
        {
            panda$core$String* $tmp387 = (($fn386) self->$class->vtable[14])(self, t320);
            panda$core$String* $tmp388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s385, $tmp387);
            panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp388, &$s389);
            (($fn391) self->$class->vtable[9])(self, t320, $tmp390);
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
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$Int64 $match$9937392;
    panda$core$String* result395;
    {
        $match$9937392 = p_expr->kind;
        panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$9937392, ((panda$core$Int64) { 106 }));
        if ($tmp393.value) {
        {
            return ((panda$core$String*) p_expr->payload);
        }
        }
        else {
        panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$9937392, ((panda$core$Int64) { 108 }));
        if ($tmp394.value) {
        {
            panda$core$Object* $tmp397 = (($fn396) p_expr->children->$class->vtable[2])(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp398 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp397));
            result395 = $tmp398;
            if (((panda$core$Bit) { result395 != NULL }).value) {
            {
                panda$core$String* $tmp400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s399, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result395, $tmp400);
                result395 = $tmp401;
            }
            }
            return result395;
        }
        }
        else {
        {
            return NULL;
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name402;
    panda$core$Int64 $match$10876405;
    org$pandalanguage$pandac$parser$Token token494;
    org$pandalanguage$pandac$parser$Token $tmp404 = (($fn403) self->$class->vtable[4])(self);
    name402 = $tmp404;
    {
        $match$10876405 = name402.kind;
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 48 }));
        bool $tmp426 = $tmp427.value;
        if ($tmp426) goto $l428;
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 51 }));
        $tmp426 = $tmp429.value;
        $l428:;
        panda$core$Bit $tmp430 = { $tmp426 };
        bool $tmp425 = $tmp430.value;
        if ($tmp425) goto $l431;
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 52 }));
        $tmp425 = $tmp432.value;
        $l431:;
        panda$core$Bit $tmp433 = { $tmp425 };
        bool $tmp424 = $tmp433.value;
        if ($tmp424) goto $l434;
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 53 }));
        $tmp424 = $tmp435.value;
        $l434:;
        panda$core$Bit $tmp436 = { $tmp424 };
        bool $tmp423 = $tmp436.value;
        if ($tmp423) goto $l437;
        panda$core$Bit $tmp438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 54 }));
        $tmp423 = $tmp438.value;
        $l437:;
        panda$core$Bit $tmp439 = { $tmp423 };
        bool $tmp422 = $tmp439.value;
        if ($tmp422) goto $l440;
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 55 }));
        $tmp422 = $tmp441.value;
        $l440:;
        panda$core$Bit $tmp442 = { $tmp422 };
        bool $tmp421 = $tmp442.value;
        if ($tmp421) goto $l443;
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 57 }));
        $tmp421 = $tmp444.value;
        $l443:;
        panda$core$Bit $tmp445 = { $tmp421 };
        bool $tmp420 = $tmp445.value;
        if ($tmp420) goto $l446;
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 58 }));
        $tmp420 = $tmp447.value;
        $l446:;
        panda$core$Bit $tmp448 = { $tmp420 };
        bool $tmp419 = $tmp448.value;
        if ($tmp419) goto $l449;
        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 59 }));
        $tmp419 = $tmp450.value;
        $l449:;
        panda$core$Bit $tmp451 = { $tmp419 };
        bool $tmp418 = $tmp451.value;
        if ($tmp418) goto $l452;
        panda$core$Bit $tmp453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 62 }));
        $tmp418 = $tmp453.value;
        $l452:;
        panda$core$Bit $tmp454 = { $tmp418 };
        bool $tmp417 = $tmp454.value;
        if ($tmp417) goto $l455;
        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 65 }));
        $tmp417 = $tmp456.value;
        $l455:;
        panda$core$Bit $tmp457 = { $tmp417 };
        bool $tmp416 = $tmp457.value;
        if ($tmp416) goto $l458;
        panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 64 }));
        $tmp416 = $tmp459.value;
        $l458:;
        panda$core$Bit $tmp460 = { $tmp416 };
        bool $tmp415 = $tmp460.value;
        if ($tmp415) goto $l461;
        panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 56 }));
        $tmp415 = $tmp462.value;
        $l461:;
        panda$core$Bit $tmp463 = { $tmp415 };
        bool $tmp414 = $tmp463.value;
        if ($tmp414) goto $l464;
        panda$core$Bit $tmp465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 66 }));
        $tmp414 = $tmp465.value;
        $l464:;
        panda$core$Bit $tmp466 = { $tmp414 };
        bool $tmp413 = $tmp466.value;
        if ($tmp413) goto $l467;
        panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 67 }));
        $tmp413 = $tmp468.value;
        $l467:;
        panda$core$Bit $tmp469 = { $tmp413 };
        bool $tmp412 = $tmp469.value;
        if ($tmp412) goto $l470;
        panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 68 }));
        $tmp412 = $tmp471.value;
        $l470:;
        panda$core$Bit $tmp472 = { $tmp412 };
        bool $tmp411 = $tmp472.value;
        if ($tmp411) goto $l473;
        panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 69 }));
        $tmp411 = $tmp474.value;
        $l473:;
        panda$core$Bit $tmp475 = { $tmp411 };
        bool $tmp410 = $tmp475.value;
        if ($tmp410) goto $l476;
        panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 70 }));
        $tmp410 = $tmp477.value;
        $l476:;
        panda$core$Bit $tmp478 = { $tmp410 };
        bool $tmp409 = $tmp478.value;
        if ($tmp409) goto $l479;
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 71 }));
        $tmp409 = $tmp480.value;
        $l479:;
        panda$core$Bit $tmp481 = { $tmp409 };
        bool $tmp408 = $tmp481.value;
        if ($tmp408) goto $l482;
        panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 49 }));
        $tmp408 = $tmp483.value;
        $l482:;
        panda$core$Bit $tmp484 = { $tmp408 };
        bool $tmp407 = $tmp484.value;
        if ($tmp407) goto $l485;
        panda$core$Bit $tmp486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 50 }));
        $tmp407 = $tmp486.value;
        $l485:;
        panda$core$Bit $tmp487 = { $tmp407 };
        bool $tmp406 = $tmp487.value;
        if ($tmp406) goto $l488;
        panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 72 }));
        $tmp406 = $tmp489.value;
        $l488:;
        panda$core$Bit $tmp490 = { $tmp406 };
        if ($tmp490.value) {
        {
            panda$core$String* $tmp492 = (($fn491) self->$class->vtable[14])(self, name402);
            return $tmp492;
        }
        }
        else {
        panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 63 }));
        if ($tmp493.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp496 = (($fn495) self->$class->vtable[3])(self);
            token494 = $tmp496;
            panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token494.kind, ((panda$core$Int64) { 63 }));
            if ($tmp497.value) {
            {
                return &$s498;
            }
            }
            else {
            {
                (($fn499) self->$class->vtable[5])(self, token494);
                return &$s500;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10876405, ((panda$core$Int64) { 101 }));
        if ($tmp501.value) {
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp504 = (($fn503) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s502);
            if (((panda$core$Bit) { !$tmp504.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp506 = (($fn505) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp506.nonnull }).value) {
            {
                return &$s507;
            }
            }
            return &$s508;
        }
        }
        else {
        {
            panda$core$String* $tmp511 = (($fn510) self->$class->vtable[14])(self, name402);
            panda$core$String* $tmp512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s509, $tmp511);
            panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, &$s513);
            (($fn515) self->$class->vtable[9])(self, name402, $tmp514);
            return NULL;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp517 = (($fn516) self->$class->vtable[21])(self, ((panda$core$Bit) { true }));
    return $tmp517;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start518;
    panda$core$MutableString* name522;
    org$pandalanguage$pandac$parser$Token$nullable id531;
    org$pandalanguage$pandac$ASTNode* result540;
    panda$collections$Array* children550;
    org$pandalanguage$pandac$ASTNode* t553;
    panda$collections$Array* children575;
    org$pandalanguage$pandac$parser$Token$nullable $tmp521 = (($fn520) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s519);
    start518 = $tmp521;
    if (((panda$core$Bit) { !start518.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp523 = (panda$core$MutableString*) malloc(40);
    $tmp523->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp523->refCount.value = 1;
    panda$core$String* $tmp526 = (($fn525) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start518.value));
    panda$core$MutableString$init$panda$core$String($tmp523, $tmp526);
    name522 = $tmp523;
    $l527:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp530 = (($fn529) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp530.nonnull }).value) goto $l528;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp534 = (($fn533) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s532);
        id531 = $tmp534;
        if (((panda$core$Bit) { !id531.nonnull }).value) {
        {
            return NULL;
        }
        }
        (($fn536) name522->$class->vtable[3])(name522, &$s535);
        panda$core$String* $tmp538 = (($fn537) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id531.value));
        (($fn539) name522->$class->vtable[3])(name522, $tmp538);
    }
    goto $l527;
    $l528:;
    org$pandalanguage$pandac$ASTNode* $tmp541 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp541->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp541->refCount.value = 1;
    panda$core$String* $tmp544 = (($fn543) name522->$class->vtable[0])(name522);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp541, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start518.value).offset, $tmp544);
    result540 = $tmp541;
    org$pandalanguage$pandac$parser$Token $tmp546 = (($fn545) self->$class->vtable[6])(self);
    panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp546.kind, ((panda$core$Int64) { 62 }));
    if ($tmp547.value) {
    {
        if (p_needSpeculativeParse.value) {
        {
            (($fn548) self->$class->vtable[10])(self);
        }
        }
        (($fn549) self->$class->vtable[4])(self);
        panda$collections$Array* $tmp551 = (panda$collections$Array*) malloc(40);
        $tmp551->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp551->refCount.value = 1;
        panda$collections$Array$init($tmp551);
        children550 = $tmp551;
        panda$collections$Array$add$panda$collections$Array$T(children550, ((panda$core$Object*) result540));
        org$pandalanguage$pandac$ASTNode* $tmp555 = (($fn554) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
        t553 = $tmp555;
        if (((panda$core$Bit) { t553 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn556) self->$class->vtable[12])(self);
                return result540;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children550, ((panda$core$Object*) t553));
        $l557:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp560 = (($fn559) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp560.nonnull }).value) goto $l558;
        {
            org$pandalanguage$pandac$ASTNode* $tmp562 = (($fn561) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
            t553 = $tmp562;
            if (((panda$core$Bit) { t553 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    (($fn563) self->$class->vtable[12])(self);
                    return result540;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children550, ((panda$core$Object*) t553));
        }
        goto $l557;
        $l558:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp566 = (($fn565) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s564);
        if (((panda$core$Bit) { !$tmp566.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn567) self->$class->vtable[12])(self);
                return result540;
            }
            }
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp568 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp568->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp568->refCount.value = 1;
        panda$core$String* $tmp571 = (($fn570) name522->$class->vtable[0])(name522);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp568, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start518.value).offset, ((panda$core$Object*) $tmp571), ((panda$collections$ListView*) children550));
        result540 = $tmp568;
        (($fn572) self->$class->vtable[11])(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp574 = (($fn573) self->$class->vtable[7])(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp574.nonnull }).value) {
    {
        panda$collections$Array* $tmp576 = (panda$collections$Array*) malloc(40);
        $tmp576->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp576->refCount.value = 1;
        panda$collections$Array$init($tmp576);
        children575 = $tmp576;
        panda$collections$Array$add$panda$collections$Array$T(children575, ((panda$core$Object*) result540));
        org$pandalanguage$pandac$ASTNode* $tmp578 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp578->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp578->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp578, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start518.value).offset, ((panda$collections$ListView*) children575));
        result540 = $tmp578;
    }
    }
    return result540;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result580;
    org$pandalanguage$pandac$parser$Token token585;
    panda$core$Int64 $match$15809588;
    panda$collections$Array* children591;
    org$pandalanguage$pandac$ASTNode* expr596;
    panda$collections$Array* children615;
    org$pandalanguage$pandac$ASTNode* expr618;
    panda$core$String* name627;
    panda$collections$Array* children633;
    org$pandalanguage$pandac$ASTNode* target639;
    panda$collections$Array* children642;
    panda$core$String* name649;
    panda$core$MutableString* finalName651;
    panda$collections$Array* types658;
    org$pandalanguage$pandac$ASTNode* t663;
    panda$core$Bit shouldAccept684;
    panda$core$Int64 $match$22166687;
    org$pandalanguage$pandac$ASTNode* $tmp582 = (($fn581) self->$class->vtable[18])(self);
    result580 = $tmp582;
    if (((panda$core$Bit) { result580 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l583:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp587 = (($fn586) self->$class->vtable[4])(self);
        token585 = $tmp587;
        {
            $match$15809588 = token585.kind;
            panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15809588, ((panda$core$Int64) { 103 }));
            if ($tmp589.value) {
            {
                (($fn590) self->commaSeparatedExpressionContext->$class->vtable[2])(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp592 = (panda$collections$Array*) malloc(40);
                $tmp592->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp592->refCount.value = 1;
                panda$collections$Array$init($tmp592);
                children591 = $tmp592;
                panda$collections$Array$add$panda$collections$Array$T(children591, ((panda$core$Object*) result580));
                org$pandalanguage$pandac$parser$Token$nullable $tmp595 = (($fn594) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp595.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp598 = (($fn597) self->$class->vtable[30])(self);
                    expr596 = $tmp598;
                    if (((panda$core$Bit) { expr596 == NULL }).value) {
                    {
                        (($fn599) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children591, ((panda$core$Object*) expr596));
                    $l600:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp603 = (($fn602) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp603.nonnull }).value) goto $l601;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp605 = (($fn604) self->$class->vtable[30])(self);
                        expr596 = $tmp605;
                        if (((panda$core$Bit) { expr596 == NULL }).value) {
                        {
                            (($fn606) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children591, ((panda$core$Object*) expr596));
                    }
                    goto $l600;
                    $l601:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp609 = (($fn608) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s607);
                    if (((panda$core$Bit) { !$tmp609.nonnull }).value) {
                    {
                        (($fn610) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                (($fn611) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp612 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp612->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp612->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp612, ((panda$core$Int64) { 107 }), token585.offset, ((panda$collections$ListView*) children591));
                result580 = $tmp612;
            }
            }
            else {
            panda$core$Bit $tmp614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15809588, ((panda$core$Int64) { 101 }));
            if ($tmp614.value) {
            {
                panda$collections$Array* $tmp616 = (panda$collections$Array*) malloc(40);
                $tmp616->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp616->refCount.value = 1;
                panda$collections$Array$init($tmp616);
                children615 = $tmp616;
                panda$collections$Array$add$panda$collections$Array$T(children615, ((panda$core$Object*) result580));
                org$pandalanguage$pandac$ASTNode* $tmp620 = (($fn619) self->$class->vtable[30])(self);
                expr618 = $tmp620;
                if (((panda$core$Bit) { expr618 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children615, ((panda$core$Object*) expr618));
                org$pandalanguage$pandac$parser$Token$nullable $tmp623 = (($fn622) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s621);
                if (((panda$core$Bit) { !$tmp623.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp624 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp624->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp624->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp624, ((panda$core$Int64) { 103 }), token585.offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children615));
                result580 = $tmp624;
            }
            }
            else {
            panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15809588, ((panda$core$Int64) { 98 }));
            if ($tmp626.value) {
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp629 = (($fn628) self->$class->vtable[7])(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp629.nonnull }).value) {
                {
                    name627 = &$s630;
                }
                }
                else {
                {
                    panda$core$String* $tmp632 = (($fn631) self->$class->vtable[19])(self);
                    name627 = $tmp632;
                    if (((panda$core$Bit) { name627 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp634 = (panda$collections$Array*) malloc(40);
                $tmp634->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp634->refCount.value = 1;
                panda$collections$Array$init($tmp634);
                children633 = $tmp634;
                panda$collections$Array$add$panda$collections$Array$T(children633, ((panda$core$Object*) result580));
                org$pandalanguage$pandac$ASTNode* $tmp636 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp636->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp636->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp636, ((panda$core$Int64) { 108 }), token585.offset, ((panda$core$Object*) name627), ((panda$collections$ListView*) children633));
                result580 = $tmp636;
            }
            }
            else {
            panda$core$Bit $tmp638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15809588, ((panda$core$Int64) { 89 }));
            if ($tmp638.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp641 = (($fn640) self->$class->vtable[20])(self);
                target639 = $tmp641;
                if (((panda$core$Bit) { target639 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp643 = (panda$collections$Array*) malloc(40);
                $tmp643->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp643->refCount.value = 1;
                panda$collections$Array$init($tmp643);
                children642 = $tmp643;
                panda$collections$Array$add$panda$collections$Array$T(children642, ((panda$core$Object*) result580));
                panda$collections$Array$add$panda$collections$Array$T(children642, ((panda$core$Object*) target639));
                org$pandalanguage$pandac$ASTNode* $tmp645 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp645->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp645->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp645, ((panda$core$Int64) { 111 }), token585.offset, ((panda$collections$ListView*) children642));
                result580 = $tmp645;
            }
            }
            else {
            panda$core$Bit $tmp647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15809588, ((panda$core$Int64) { 62 }));
            if ($tmp647.value) {
            {
                (($fn648) self->$class->vtable[5])(self, token585);
                panda$core$String* $tmp650 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result580);
                name649 = $tmp650;
                if (((panda$core$Bit) { name649 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp652 = (panda$core$MutableString*) malloc(40);
                    $tmp652->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp652->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp652, name649);
                    finalName651 = $tmp652;
                    (($fn655) finalName651->$class->vtable[3])(finalName651, &$s654);
                    (($fn656) self->$class->vtable[10])(self);
                    (($fn657) self->$class->vtable[4])(self);
                    panda$collections$Array* $tmp659 = (panda$collections$Array*) malloc(40);
                    $tmp659->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp659->refCount.value = 1;
                    panda$collections$Array$init($tmp659);
                    types658 = $tmp659;
                    org$pandalanguage$pandac$ASTNode* $tmp661 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                    $tmp661->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp661->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp661, ((panda$core$Int64) { 109 }), result580->offset, name649);
                    panda$collections$Array$add$panda$collections$Array$T(types658, ((panda$core$Object*) $tmp661));
                    org$pandalanguage$pandac$ASTNode* $tmp665 = (($fn664) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                    t663 = $tmp665;
                    if (((panda$core$Bit) { t663 == NULL }).value) {
                    {
                        (($fn666) self->$class->vtable[12])(self);
                        return result580;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types658, ((panda$core$Object*) t663));
                    (($fn667) finalName651->$class->vtable[5])(finalName651, ((panda$core$Object*) t663));
                    $l668:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp671 = (($fn670) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp671.nonnull }).value) goto $l669;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp673 = (($fn672) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                        t663 = $tmp673;
                        if (((panda$core$Bit) { t663 == NULL }).value) {
                        {
                            (($fn674) self->$class->vtable[12])(self);
                            return result580;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types658, ((panda$core$Object*) t663));
                        (($fn676) finalName651->$class->vtable[3])(finalName651, &$s675);
                        (($fn677) finalName651->$class->vtable[5])(finalName651, ((panda$core$Object*) t663));
                    }
                    goto $l668;
                    $l669:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp680 = (($fn679) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s678);
                    if (((panda$core$Bit) { !$tmp680.nonnull }).value) {
                    {
                        (($fn681) self->$class->vtable[12])(self);
                        return result580;
                    }
                    }
                    (($fn683) finalName651->$class->vtable[3])(finalName651, &$s682);
                    panda$core$Object* $tmp686 = (($fn685) self->commaSeparatedExpressionContext->$class->vtable[4])(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp686)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp689 = (($fn688) self->$class->vtable[6])(self);
                            $match$22166687 = $tmp689.kind;
                            panda$core$Bit $tmp693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22166687, ((panda$core$Int64) { 98 }));
                            bool $tmp692 = $tmp693.value;
                            if ($tmp692) goto $l694;
                            panda$core$Bit $tmp695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22166687, ((panda$core$Int64) { 103 }));
                            $tmp692 = $tmp695.value;
                            $l694:;
                            panda$core$Bit $tmp696 = { $tmp692 };
                            bool $tmp691 = $tmp696.value;
                            if ($tmp691) goto $l697;
                            panda$core$Bit $tmp698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22166687, ((panda$core$Int64) { 105 }));
                            $tmp691 = $tmp698.value;
                            $l697:;
                            panda$core$Bit $tmp699 = { $tmp691 };
                            bool $tmp690 = $tmp699.value;
                            if ($tmp690) goto $l700;
                            panda$core$Bit $tmp701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22166687, ((panda$core$Int64) { 89 }));
                            $tmp690 = $tmp701.value;
                            $l700:;
                            panda$core$Bit $tmp702 = { $tmp690 };
                            if ($tmp702.value) {
                            {
                                shouldAccept684 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept684 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept684 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept684.value) {
                    {
                        (($fn703) self->$class->vtable[11])(self);
                        org$pandalanguage$pandac$ASTNode* $tmp704 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                        $tmp704->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp704->refCount.value = 1;
                        panda$core$String* $tmp707 = (($fn706) finalName651->$class->vtable[0])(finalName651);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp704, ((panda$core$Int64) { 154 }), result580->offset, ((panda$core$Object*) $tmp707), ((panda$collections$ListView*) types658));
                        result580 = $tmp704;
                        goto $l583;
                    }
                    }
                    else {
                    {
                        (($fn708) self->$class->vtable[12])(self);
                        return result580;
                    }
                    }
                }
                }
                return result580;
            }
            }
            else {
            {
                (($fn709) self->$class->vtable[5])(self, token585);
                return result580;
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l584:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result710;
    org$pandalanguage$pandac$parser$Token$nullable op715;
    org$pandalanguage$pandac$ASTNode* next718;
    panda$collections$Array* children721;
    org$pandalanguage$pandac$ASTNode* $tmp712 = (($fn711) self->$class->vtable[22])(self);
    result710 = $tmp712;
    if (((panda$core$Bit) { result710 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l713:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp717 = (($fn716) self->$class->vtable[7])(self, ((panda$core$Int64) { 57 }));
        op715 = $tmp717;
        if (((panda$core$Bit) { !op715.nonnull }).value) {
        {
            goto $l714;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp720 = (($fn719) self->$class->vtable[22])(self);
        next718 = $tmp720;
        if (((panda$core$Bit) { next718 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp722 = (panda$collections$Array*) malloc(40);
        $tmp722->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp722->refCount.value = 1;
        panda$collections$Array$init($tmp722);
        children721 = $tmp722;
        panda$collections$Array$add$panda$collections$Array$T(children721, ((panda$core$Object*) result710));
        panda$collections$Array$add$panda$collections$Array$T(children721, ((panda$core$Object*) next718));
        org$pandalanguage$pandac$ASTNode* $tmp724 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp724->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp724->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp724, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op715.value).offset, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op715.value).kind)), ((panda$collections$ListView*) children721));
        result710 = $tmp724;
    }
    }
    $l714:;
    return result710;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op726;
    panda$core$Int64 $match$24519729;
    org$pandalanguage$pandac$ASTNode* base739;
    panda$collections$Array* children742;
    org$pandalanguage$pandac$parser$Token $tmp728 = (($fn727) self->$class->vtable[4])(self);
    op726 = $tmp728;
    {
        $match$24519729 = op726.kind;
        panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$24519729, ((panda$core$Int64) { 52 }));
        bool $tmp731 = $tmp732.value;
        if ($tmp731) goto $l733;
        panda$core$Bit $tmp734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$24519729, ((panda$core$Int64) { 49 }));
        $tmp731 = $tmp734.value;
        $l733:;
        panda$core$Bit $tmp735 = { $tmp731 };
        bool $tmp730 = $tmp735.value;
        if ($tmp730) goto $l736;
        panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$24519729, ((panda$core$Int64) { 50 }));
        $tmp730 = $tmp737.value;
        $l736:;
        panda$core$Bit $tmp738 = { $tmp730 };
        if ($tmp738.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp741 = (($fn740) self->$class->vtable[23])(self);
            base739 = $tmp741;
            if (((panda$core$Bit) { base739 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp743 = (panda$collections$Array*) malloc(40);
            $tmp743->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp743->refCount.value = 1;
            panda$collections$Array$init($tmp743);
            children742 = $tmp743;
            panda$collections$Array$add$panda$collections$Array$T(children742, ((panda$core$Object*) base739));
            org$pandalanguage$pandac$ASTNode* $tmp745 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp745->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp745->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp745, ((panda$core$Int64) { 112 }), op726.offset, ((panda$core$Object*) wrap_panda$core$Int64(op726.kind)), ((panda$collections$ListView*) children742));
            return $tmp745;
        }
        }
        else {
        {
            (($fn747) self->$class->vtable[5])(self, op726);
            org$pandalanguage$pandac$ASTNode* $tmp749 = (($fn748) self->$class->vtable[23])(self);
            return $tmp749;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result750;
    org$pandalanguage$pandac$parser$Token op755;
    panda$core$Int64 $match$25711758;
    org$pandalanguage$pandac$ASTNode* next784;
    panda$collections$Array* children787;
    org$pandalanguage$pandac$parser$Token nextToken793;
    org$pandalanguage$pandac$ASTNode* next797;
    panda$collections$Array* children800;
    org$pandalanguage$pandac$ASTNode* $tmp752 = (($fn751) self->$class->vtable[24])(self);
    result750 = $tmp752;
    if (((panda$core$Bit) { result750 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l753:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp757 = (($fn756) self->$class->vtable[4])(self);
        op755 = $tmp757;
        {
            $match$25711758 = op755.kind;
            panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25711758, ((panda$core$Int64) { 53 }));
            bool $tmp764 = $tmp765.value;
            if ($tmp764) goto $l766;
            panda$core$Bit $tmp767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25711758, ((panda$core$Int64) { 54 }));
            $tmp764 = $tmp767.value;
            $l766:;
            panda$core$Bit $tmp768 = { $tmp764 };
            bool $tmp763 = $tmp768.value;
            if ($tmp763) goto $l769;
            panda$core$Bit $tmp770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25711758, ((panda$core$Int64) { 55 }));
            $tmp763 = $tmp770.value;
            $l769:;
            panda$core$Bit $tmp771 = { $tmp763 };
            bool $tmp762 = $tmp771.value;
            if ($tmp762) goto $l772;
            panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25711758, ((panda$core$Int64) { 56 }));
            $tmp762 = $tmp773.value;
            $l772:;
            panda$core$Bit $tmp774 = { $tmp762 };
            bool $tmp761 = $tmp774.value;
            if ($tmp761) goto $l775;
            panda$core$Bit $tmp776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25711758, ((panda$core$Int64) { 72 }));
            $tmp761 = $tmp776.value;
            $l775:;
            panda$core$Bit $tmp777 = { $tmp761 };
            bool $tmp760 = $tmp777.value;
            if ($tmp760) goto $l778;
            panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25711758, ((panda$core$Int64) { 67 }));
            $tmp760 = $tmp779.value;
            $l778:;
            panda$core$Bit $tmp780 = { $tmp760 };
            bool $tmp759 = $tmp780.value;
            if ($tmp759) goto $l781;
            panda$core$Bit $tmp782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25711758, ((panda$core$Int64) { 69 }));
            $tmp759 = $tmp782.value;
            $l781:;
            panda$core$Bit $tmp783 = { $tmp759 };
            if ($tmp783.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp786 = (($fn785) self->$class->vtable[24])(self);
                next784 = $tmp786;
                if (((panda$core$Bit) { next784 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp788 = (panda$collections$Array*) malloc(40);
                $tmp788->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp788->refCount.value = 1;
                panda$collections$Array$init($tmp788);
                children787 = $tmp788;
                panda$collections$Array$add$panda$collections$Array$T(children787, ((panda$core$Object*) result750));
                panda$collections$Array$add$panda$collections$Array$T(children787, ((panda$core$Object*) next784));
                org$pandalanguage$pandac$ASTNode* $tmp790 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp790->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp790->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp790, ((panda$core$Int64) { 103 }), op755.offset, ((panda$core$Object*) wrap_panda$core$Int64(op755.kind)), ((panda$collections$ListView*) children787));
                result750 = $tmp790;
            }
            }
            else {
            panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25711758, ((panda$core$Int64) { 63 }));
            if ($tmp792.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp795 = (($fn794) self->$class->vtable[3])(self);
                nextToken793 = $tmp795;
                panda$core$Bit $tmp796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken793.kind, ((panda$core$Int64) { 63 }));
                if ($tmp796.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp799 = (($fn798) self->$class->vtable[24])(self);
                    next797 = $tmp799;
                    if (((panda$core$Bit) { next797 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp801 = (panda$collections$Array*) malloc(40);
                    $tmp801->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp801->refCount.value = 1;
                    panda$collections$Array$init($tmp801);
                    children800 = $tmp801;
                    panda$collections$Array$add$panda$collections$Array$T(children800, ((panda$core$Object*) result750));
                    panda$collections$Array$add$panda$collections$Array$T(children800, ((panda$core$Object*) next797));
                    org$pandalanguage$pandac$ASTNode* $tmp803 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                    $tmp803->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp803->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp803, ((panda$core$Int64) { 103 }), op755.offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children800));
                    result750 = $tmp803;
                }
                }
                else {
                {
                    (($fn805) self->$class->vtable[5])(self, nextToken793);
                    (($fn806) self->$class->vtable[5])(self, op755);
                    return result750;
                }
                }
            }
            }
            else {
            {
                (($fn807) self->$class->vtable[5])(self, op755);
                return result750;
            }
            }
            }
        }
    }
    }
    $l754:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result808;
    org$pandalanguage$pandac$parser$Token op813;
    panda$core$Int64 $match$27798816;
    org$pandalanguage$pandac$ASTNode* next826;
    panda$collections$Array* children829;
    org$pandalanguage$pandac$ASTNode* $tmp810 = (($fn809) self->$class->vtable[25])(self);
    result808 = $tmp810;
    if (((panda$core$Bit) { result808 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l811:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp815 = (($fn814) self->$class->vtable[4])(self);
        op813 = $tmp815;
        {
            $match$27798816 = op813.kind;
            panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27798816, ((panda$core$Int64) { 51 }));
            bool $tmp818 = $tmp819.value;
            if ($tmp818) goto $l820;
            panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27798816, ((panda$core$Int64) { 52 }));
            $tmp818 = $tmp821.value;
            $l820:;
            panda$core$Bit $tmp822 = { $tmp818 };
            bool $tmp817 = $tmp822.value;
            if ($tmp817) goto $l823;
            panda$core$Bit $tmp824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27798816, ((panda$core$Int64) { 71 }));
            $tmp817 = $tmp824.value;
            $l823:;
            panda$core$Bit $tmp825 = { $tmp817 };
            if ($tmp825.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp828 = (($fn827) self->$class->vtable[25])(self);
                next826 = $tmp828;
                if (((panda$core$Bit) { next826 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp830 = (panda$collections$Array*) malloc(40);
                $tmp830->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp830->refCount.value = 1;
                panda$collections$Array$init($tmp830);
                children829 = $tmp830;
                panda$collections$Array$add$panda$collections$Array$T(children829, ((panda$core$Object*) result808));
                panda$collections$Array$add$panda$collections$Array$T(children829, ((panda$core$Object*) next826));
                org$pandalanguage$pandac$ASTNode* $tmp832 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp832->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp832->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp832, ((panda$core$Int64) { 103 }), op813.offset, ((panda$core$Object*) wrap_panda$core$Int64(op813.kind)), ((panda$collections$ListView*) children829));
                result808 = $tmp832;
            }
            }
            else {
            {
                (($fn834) self->$class->vtable[5])(self, op813);
                return result808;
            }
            }
        }
    }
    }
    $l812:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result835;
    panda$core$Int64 $match$28831836;
    org$pandalanguage$pandac$parser$Token op848;
    panda$core$Int64 $match$29163851;
    org$pandalanguage$pandac$parser$Token next857;
    org$pandalanguage$pandac$ASTNode* right860;
    org$pandalanguage$pandac$ASTNode* step874;
    panda$collections$Array* children881;
    panda$core$Int64 kind884;
    {
        org$pandalanguage$pandac$parser$Token $tmp838 = (($fn837) self->$class->vtable[6])(self);
        $match$28831836 = $tmp838.kind;
        panda$core$Bit $tmp840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$28831836, ((panda$core$Int64) { 97 }));
        bool $tmp839 = $tmp840.value;
        if ($tmp839) goto $l841;
        panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$28831836, ((panda$core$Int64) { 96 }));
        $tmp839 = $tmp842.value;
        $l841:;
        panda$core$Bit $tmp843 = { $tmp839 };
        if ($tmp843.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp844 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp844->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp844->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp844, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
            result835 = $tmp844;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp847 = (($fn846) self->$class->vtable[26])(self);
            result835 = $tmp847;
            if (((panda$core$Bit) { result835 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp850 = (($fn849) self->$class->vtable[4])(self);
    op848 = $tmp850;
    {
        $match$29163851 = op848.kind;
        panda$core$Bit $tmp853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29163851, ((panda$core$Int64) { 97 }));
        bool $tmp852 = $tmp853.value;
        if ($tmp852) goto $l854;
        panda$core$Bit $tmp855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29163851, ((panda$core$Int64) { 96 }));
        $tmp852 = $tmp855.value;
        $l854:;
        panda$core$Bit $tmp856 = { $tmp852 };
        if ($tmp856.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp859 = (($fn858) self->$class->vtable[6])(self);
            next857 = $tmp859;
            panda$core$Bit $tmp863 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next857.kind, ((panda$core$Int64) { 102 }));
            bool $tmp862 = $tmp863.value;
            if (!$tmp862) goto $l864;
            panda$core$Bit $tmp865 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next857.kind, ((panda$core$Int64) { 104 }));
            $tmp862 = $tmp865.value;
            $l864:;
            panda$core$Bit $tmp866 = { $tmp862 };
            bool $tmp861 = $tmp866.value;
            if (!$tmp861) goto $l867;
            panda$core$Bit $tmp868 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next857.kind, ((panda$core$Int64) { 33 }));
            $tmp861 = $tmp868.value;
            $l867:;
            panda$core$Bit $tmp869 = { $tmp861 };
            if ($tmp869.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp871 = (($fn870) self->$class->vtable[26])(self);
                right860 = $tmp871;
                if (((panda$core$Bit) { right860 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp872 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp872->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp872->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp872, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
                right860 = $tmp872;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp876 = (($fn875) self->$class->vtable[7])(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp876.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp878 = (($fn877) self->$class->vtable[26])(self);
                step874 = $tmp878;
                if (((panda$core$Bit) { step874 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp879 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp879->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp879->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp879, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
                step874 = $tmp879;
            }
            }
            panda$collections$Array* $tmp882 = (panda$collections$Array*) malloc(40);
            $tmp882->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp882->refCount.value = 1;
            panda$collections$Array$init($tmp882);
            children881 = $tmp882;
            panda$collections$Array$add$panda$collections$Array$T(children881, ((panda$core$Object*) result835));
            panda$collections$Array$add$panda$collections$Array$T(children881, ((panda$core$Object*) right860));
            panda$collections$Array$add$panda$collections$Array$T(children881, ((panda$core$Object*) step874));
            panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op848.kind, ((panda$core$Int64) { 97 }));
            if ($tmp885.value) {
            {
                kind884 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind884 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp886 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp886->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp886->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp886, kind884, op848.offset, ((panda$collections$ListView*) children881));
            return $tmp886;
        }
        }
        else {
        {
            (($fn888) self->$class->vtable[5])(self, op848);
            return result835;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result889;
    org$pandalanguage$pandac$parser$Token op894;
    panda$core$Int64 $match$31168897;
    org$pandalanguage$pandac$ASTNode* next927;
    panda$collections$Array* children930;
    org$pandalanguage$pandac$ASTNode* $tmp891 = (($fn890) self->$class->vtable[27])(self);
    result889 = $tmp891;
    if (((panda$core$Bit) { result889 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l892:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp896 = (($fn895) self->$class->vtable[4])(self);
        op894 = $tmp896;
        {
            $match$31168897 = op894.kind;
            panda$core$Bit $tmp905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31168897, ((panda$core$Int64) { 58 }));
            bool $tmp904 = $tmp905.value;
            if ($tmp904) goto $l906;
            panda$core$Bit $tmp907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31168897, ((panda$core$Int64) { 59 }));
            $tmp904 = $tmp907.value;
            $l906:;
            panda$core$Bit $tmp908 = { $tmp904 };
            bool $tmp903 = $tmp908.value;
            if ($tmp903) goto $l909;
            panda$core$Bit $tmp910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31168897, ((panda$core$Int64) { 60 }));
            $tmp903 = $tmp910.value;
            $l909:;
            panda$core$Bit $tmp911 = { $tmp903 };
            bool $tmp902 = $tmp911.value;
            if ($tmp902) goto $l912;
            panda$core$Bit $tmp913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31168897, ((panda$core$Int64) { 61 }));
            $tmp902 = $tmp913.value;
            $l912:;
            panda$core$Bit $tmp914 = { $tmp902 };
            bool $tmp901 = $tmp914.value;
            if ($tmp901) goto $l915;
            panda$core$Bit $tmp916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31168897, ((panda$core$Int64) { 62 }));
            $tmp901 = $tmp916.value;
            $l915:;
            panda$core$Bit $tmp917 = { $tmp901 };
            bool $tmp900 = $tmp917.value;
            if ($tmp900) goto $l918;
            panda$core$Bit $tmp919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31168897, ((panda$core$Int64) { 63 }));
            $tmp900 = $tmp919.value;
            $l918:;
            panda$core$Bit $tmp920 = { $tmp900 };
            bool $tmp899 = $tmp920.value;
            if ($tmp899) goto $l921;
            panda$core$Bit $tmp922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31168897, ((panda$core$Int64) { 64 }));
            $tmp899 = $tmp922.value;
            $l921:;
            panda$core$Bit $tmp923 = { $tmp899 };
            bool $tmp898 = $tmp923.value;
            if ($tmp898) goto $l924;
            panda$core$Bit $tmp925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31168897, ((panda$core$Int64) { 65 }));
            $tmp898 = $tmp925.value;
            $l924:;
            panda$core$Bit $tmp926 = { $tmp898 };
            if ($tmp926.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp929 = (($fn928) self->$class->vtable[27])(self);
                next927 = $tmp929;
                if (((panda$core$Bit) { next927 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp931 = (panda$collections$Array*) malloc(40);
                $tmp931->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp931->refCount.value = 1;
                panda$collections$Array$init($tmp931);
                children930 = $tmp931;
                panda$collections$Array$add$panda$collections$Array$T(children930, ((panda$core$Object*) result889));
                panda$collections$Array$add$panda$collections$Array$T(children930, ((panda$core$Object*) next927));
                org$pandalanguage$pandac$ASTNode* $tmp933 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp933->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp933->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp933, ((panda$core$Int64) { 103 }), op894.offset, ((panda$core$Object*) wrap_panda$core$Int64(op894.kind)), ((panda$collections$ListView*) children930));
                result889 = $tmp933;
            }
            }
            else {
            {
                (($fn935) self->$class->vtable[5])(self, op894);
                return result889;
            }
            }
        }
    }
    }
    $l893:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result936;
    org$pandalanguage$pandac$parser$Token op941;
    panda$core$Int64 $match$32503944;
    org$pandalanguage$pandac$ASTNode* next950;
    panda$collections$Array* children953;
    org$pandalanguage$pandac$ASTNode* $tmp938 = (($fn937) self->$class->vtable[28])(self);
    result936 = $tmp938;
    if (((panda$core$Bit) { result936 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l939:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp943 = (($fn942) self->$class->vtable[4])(self);
        op941 = $tmp943;
        {
            $match$32503944 = op941.kind;
            panda$core$Bit $tmp946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$32503944, ((panda$core$Int64) { 66 }));
            bool $tmp945 = $tmp946.value;
            if ($tmp945) goto $l947;
            panda$core$Bit $tmp948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$32503944, ((panda$core$Int64) { 70 }));
            $tmp945 = $tmp948.value;
            $l947:;
            panda$core$Bit $tmp949 = { $tmp945 };
            if ($tmp949.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp952 = (($fn951) self->$class->vtable[28])(self);
                next950 = $tmp952;
                if (((panda$core$Bit) { next950 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp954 = (panda$collections$Array*) malloc(40);
                $tmp954->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp954->refCount.value = 1;
                panda$collections$Array$init($tmp954);
                children953 = $tmp954;
                panda$collections$Array$add$panda$collections$Array$T(children953, ((panda$core$Object*) result936));
                panda$collections$Array$add$panda$collections$Array$T(children953, ((panda$core$Object*) next950));
                org$pandalanguage$pandac$ASTNode* $tmp956 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp956->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp956->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp956, ((panda$core$Int64) { 103 }), op941.offset, ((panda$core$Object*) wrap_panda$core$Int64(op941.kind)), ((panda$collections$ListView*) children953));
                result936 = $tmp956;
            }
            }
            else {
            {
                (($fn958) self->$class->vtable[5])(self, op941);
                return result936;
            }
            }
        }
    }
    }
    $l940:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result959;
    org$pandalanguage$pandac$parser$Token$nullable op964;
    org$pandalanguage$pandac$ASTNode* next967;
    panda$collections$Array* children970;
    org$pandalanguage$pandac$ASTNode* $tmp961 = (($fn960) self->$class->vtable[29])(self);
    result959 = $tmp961;
    if (((panda$core$Bit) { result959 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l962:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp966 = (($fn965) self->$class->vtable[7])(self, ((panda$core$Int64) { 68 }));
        op964 = $tmp966;
        if (((panda$core$Bit) { !op964.nonnull }).value) {
        {
            goto $l963;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp969 = (($fn968) self->$class->vtable[29])(self);
        next967 = $tmp969;
        if (((panda$core$Bit) { next967 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp971 = (panda$collections$Array*) malloc(40);
        $tmp971->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp971->refCount.value = 1;
        panda$collections$Array$init($tmp971);
        children970 = $tmp971;
        panda$collections$Array$add$panda$collections$Array$T(children970, ((panda$core$Object*) result959));
        panda$collections$Array$add$panda$collections$Array$T(children970, ((panda$core$Object*) next967));
        org$pandalanguage$pandac$ASTNode* $tmp973 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp973->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp973->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp973, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op964.value).offset, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op964.value).kind)), ((panda$collections$ListView*) children970));
        result959 = $tmp973;
    }
    }
    $l963:;
    return result959;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start975;
    org$pandalanguage$pandac$ASTNode* test979;
    panda$collections$Array* children982;
    org$pandalanguage$pandac$ASTNode* ifTrue985;
    org$pandalanguage$pandac$ASTNode* ifFalse993;
    org$pandalanguage$pandac$ASTNode* ifFalse996;
    org$pandalanguage$pandac$parser$Token$nullable $tmp978 = (($fn977) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s976);
    start975 = $tmp978;
    if (((panda$core$Bit) { !start975.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp981 = (($fn980) self->$class->vtable[30])(self);
    test979 = $tmp981;
    if (((panda$core$Bit) { test979 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp983 = (panda$collections$Array*) malloc(40);
    $tmp983->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp983->refCount.value = 1;
    panda$collections$Array$init($tmp983);
    children982 = $tmp983;
    panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) test979));
    org$pandalanguage$pandac$ASTNode* $tmp987 = (($fn986) self->$class->vtable[41])(self);
    ifTrue985 = $tmp987;
    if (((panda$core$Bit) { ifTrue985 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) ifTrue985));
    org$pandalanguage$pandac$parser$Token$nullable $tmp989 = (($fn988) self->$class->vtable[7])(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp989.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp991 = (($fn990) self->$class->vtable[6])(self);
        panda$core$Bit $tmp992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp991.kind, ((panda$core$Int64) { 36 }));
        if ($tmp992.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp995 = (($fn994) self->$class->vtable[31])(self);
            ifFalse993 = $tmp995;
            if (((panda$core$Bit) { ifFalse993 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) ifFalse993));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp998 = (($fn997) self->$class->vtable[41])(self);
            ifFalse996 = $tmp998;
            if (((panda$core$Bit) { ifFalse996 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) ifFalse996));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp999 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp999->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp999->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp999, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start975.value).offset, ((panda$collections$ListView*) children982));
    return $tmp999;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp1003 = (($fn1002) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1001);
    if (((panda$core$Bit) { !$tmp1003.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1005 = (($fn1004) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
    return $tmp1005;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1006;
    org$pandalanguage$pandac$ASTNode* type1013;
    panda$collections$Array* children1016;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1009 = (($fn1008) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1007);
    id1006 = $tmp1009;
    if (((panda$core$Bit) { !id1006.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1011 = (($fn1010) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1011.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1012.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1015 = (($fn1014) self->$class->vtable[32])(self);
        type1013 = $tmp1015;
        if (((panda$core$Bit) { type1013 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp1017 = (panda$collections$Array*) malloc(40);
        $tmp1017->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1017->refCount.value = 1;
        panda$collections$Array$init($tmp1017);
        children1016 = $tmp1017;
        panda$collections$Array$add$panda$collections$Array$T(children1016, ((panda$core$Object*) type1013));
        org$pandalanguage$pandac$ASTNode* $tmp1019 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1019->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1019->refCount.value = 1;
        panda$core$String* $tmp1022 = (($fn1021) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1006.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1019, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1006.value).offset, ((panda$core$Object*) $tmp1022), ((panda$collections$ListView*) children1016));
        return $tmp1019;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1023 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1023->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1023->refCount.value = 1;
    panda$core$String* $tmp1026 = (($fn1025) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1006.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1023, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1006.value).offset, $tmp1026);
    return $tmp1023;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1027;
    org$pandalanguage$pandac$ASTNode* t1031;
    org$pandalanguage$pandac$ASTNode* list1037;
    org$pandalanguage$pandac$ASTNode* block1040;
    panda$collections$Array* children1043;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1030 = (($fn1029) self->$class->vtable[8])(self, ((panda$core$Int64) { 32 }), &$s1028);
    start1027 = $tmp1030;
    if (((panda$core$Bit) { !start1027.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1033 = (($fn1032) self->$class->vtable[33])(self);
    t1031 = $tmp1033;
    if (((panda$core$Bit) { t1031 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1036 = (($fn1035) self->$class->vtable[8])(self, ((panda$core$Int64) { 34 }), &$s1034);
    if (((panda$core$Bit) { !$tmp1036.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1039 = (($fn1038) self->$class->vtable[30])(self);
    list1037 = $tmp1039;
    if (((panda$core$Bit) { list1037 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1042 = (($fn1041) self->$class->vtable[41])(self);
    block1040 = $tmp1042;
    if (((panda$core$Bit) { block1040 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1044 = (panda$collections$Array*) malloc(40);
    $tmp1044->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1044->refCount.value = 1;
    panda$collections$Array$init($tmp1044);
    children1043 = $tmp1044;
    panda$collections$Array$add$panda$collections$Array$T(children1043, ((panda$core$Object*) t1031));
    panda$collections$Array$add$panda$collections$Array$T(children1043, ((panda$core$Object*) list1037));
    panda$collections$Array$add$panda$collections$Array$T(children1043, ((panda$core$Object*) block1040));
    org$pandalanguage$pandac$ASTNode* $tmp1046 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1046->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1046->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1046, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start1027.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1043));
    return $tmp1046;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1048;
    org$pandalanguage$pandac$ASTNode* test1052;
    org$pandalanguage$pandac$ASTNode* body1055;
    panda$collections$Array* children1058;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1051 = (($fn1050) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s1049);
    start1048 = $tmp1051;
    if (((panda$core$Bit) { !start1048.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1054 = (($fn1053) self->$class->vtable[30])(self);
    test1052 = $tmp1054;
    if (((panda$core$Bit) { test1052 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1057 = (($fn1056) self->$class->vtable[41])(self);
    body1055 = $tmp1057;
    if (((panda$core$Bit) { body1055 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1059 = (panda$collections$Array*) malloc(40);
    $tmp1059->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1059->refCount.value = 1;
    panda$collections$Array$init($tmp1059);
    children1058 = $tmp1059;
    panda$collections$Array$add$panda$collections$Array$T(children1058, ((panda$core$Object*) test1052));
    panda$collections$Array$add$panda$collections$Array$T(children1058, ((panda$core$Object*) body1055));
    org$pandalanguage$pandac$ASTNode* $tmp1061 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1061->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1061->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1061, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start1048.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1058));
    return $tmp1061;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1063;
    org$pandalanguage$pandac$ASTNode* body1067;
    org$pandalanguage$pandac$ASTNode* test1073;
    panda$collections$Array* children1076;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1066 = (($fn1065) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1064);
    start1063 = $tmp1066;
    if (((panda$core$Bit) { !start1063.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1069 = (($fn1068) self->$class->vtable[41])(self);
    body1067 = $tmp1069;
    if (((panda$core$Bit) { body1067 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1072 = (($fn1071) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s1070);
    if (((panda$core$Bit) { !$tmp1072.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1075 = (($fn1074) self->$class->vtable[30])(self);
    test1073 = $tmp1075;
    if (((panda$core$Bit) { test1073 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1077 = (panda$collections$Array*) malloc(40);
    $tmp1077->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1077->refCount.value = 1;
    panda$collections$Array$init($tmp1077);
    children1076 = $tmp1077;
    panda$collections$Array$add$panda$collections$Array$T(children1076, ((panda$core$Object*) body1067));
    panda$collections$Array$add$panda$collections$Array$T(children1076, ((panda$core$Object*) test1073));
    org$pandalanguage$pandac$ASTNode* $tmp1079 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1079->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1079->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1079, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start1063.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1076));
    return $tmp1079;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1081;
    org$pandalanguage$pandac$ASTNode* body1085;
    panda$collections$Array* children1088;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1084 = (($fn1083) self->$class->vtable[8])(self, ((panda$core$Int64) { 35 }), &$s1082);
    start1081 = $tmp1084;
    if (((panda$core$Bit) { !start1081.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1087 = (($fn1086) self->$class->vtable[41])(self);
    body1085 = $tmp1087;
    if (((panda$core$Bit) { body1085 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1089 = (panda$collections$Array*) malloc(40);
    $tmp1089->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1089->refCount.value = 1;
    panda$collections$Array$init($tmp1089);
    children1088 = $tmp1089;
    panda$collections$Array$add$panda$collections$Array$T(children1088, ((panda$core$Object*) body1085));
    org$pandalanguage$pandac$ASTNode* $tmp1091 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1091->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1091->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1091, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start1081.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1088));
    return $tmp1091;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1093;
    org$pandalanguage$pandac$ASTNode* expr1097;
    panda$collections$Array* children1100;
    org$pandalanguage$pandac$ASTNode* message1105;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1096 = (($fn1095) self->$class->vtable[8])(self, ((panda$core$Int64) { 44 }), &$s1094);
    start1093 = $tmp1096;
    if (((panda$core$Bit) { !start1093.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1099 = (($fn1098) self->$class->vtable[30])(self);
    expr1097 = $tmp1099;
    if (((panda$core$Bit) { expr1097 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1101 = (panda$collections$Array*) malloc(40);
    $tmp1101->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1101->refCount.value = 1;
    panda$collections$Array$init($tmp1101);
    children1100 = $tmp1101;
    panda$collections$Array$add$panda$collections$Array$T(children1100, ((panda$core$Object*) expr1097));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1104 = (($fn1103) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp1104.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1107 = (($fn1106) self->$class->vtable[30])(self);
        message1105 = $tmp1107;
        if (((panda$core$Bit) { message1105 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1100, ((panda$core$Object*) message1105));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1108 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1108->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1108->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1108, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start1093.value).offset, ((panda$collections$ListView*) children1100));
    return $tmp1108;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1110;
    panda$collections$Array* expressions1114;
    org$pandalanguage$pandac$ASTNode* expr1117;
    panda$collections$Array* children1126;
    panda$core$Int64 $match$415011136;
    org$pandalanguage$pandac$ASTNode* stmt1157;
    org$pandalanguage$pandac$ASTNode* stmt1160;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1113 = (($fn1112) self->$class->vtable[8])(self, ((panda$core$Int64) { 39 }), &$s1111);
    start1110 = $tmp1113;
    if (((panda$core$Bit) { !start1110.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1115 = (panda$collections$Array*) malloc(40);
    $tmp1115->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1115->refCount.value = 1;
    panda$collections$Array$init($tmp1115);
    expressions1114 = $tmp1115;
    org$pandalanguage$pandac$ASTNode* $tmp1119 = (($fn1118) self->$class->vtable[30])(self);
    expr1117 = $tmp1119;
    if (((panda$core$Bit) { expr1117 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1114, ((panda$core$Object*) expr1117));
    $l1120:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1123 = (($fn1122) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1123.nonnull }).value) goto $l1121;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1125 = (($fn1124) self->$class->vtable[30])(self);
        expr1117 = $tmp1125;
        if (((panda$core$Bit) { expr1117 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1114, ((panda$core$Object*) expr1117));
    }
    goto $l1120;
    $l1121:;
    panda$collections$Array* $tmp1127 = (panda$collections$Array*) malloc(40);
    $tmp1127->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1127->refCount.value = 1;
    panda$collections$Array$init($tmp1127);
    children1126 = $tmp1127;
    org$pandalanguage$pandac$ASTNode* $tmp1129 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1129->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1129->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1129, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start1110.value).offset, ((panda$collections$ListView*) expressions1114));
    panda$collections$Array$add$panda$collections$Array$T(children1126, ((panda$core$Object*) $tmp1129));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1133 = (($fn1132) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1131);
    if (((panda$core$Bit) { !$tmp1133.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l1134:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1138 = (($fn1137) self->$class->vtable[6])(self);
            $match$415011136 = $tmp1138.kind;
            panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415011136, ((panda$core$Int64) { 39 }));
            bool $tmp1140 = $tmp1141.value;
            if ($tmp1140) goto $l1142;
            panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415011136, ((panda$core$Int64) { 40 }));
            $tmp1140 = $tmp1143.value;
            $l1142:;
            panda$core$Bit $tmp1144 = { $tmp1140 };
            bool $tmp1139 = $tmp1144.value;
            if ($tmp1139) goto $l1145;
            panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415011136, ((panda$core$Int64) { 100 }));
            $tmp1139 = $tmp1146.value;
            $l1145:;
            panda$core$Bit $tmp1147 = { $tmp1139 };
            if ($tmp1147.value) {
            {
                goto $l1135;
            }
            }
            else {
            panda$core$Bit $tmp1150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415011136, ((panda$core$Int64) { 28 }));
            bool $tmp1149 = $tmp1150.value;
            if ($tmp1149) goto $l1151;
            panda$core$Bit $tmp1152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415011136, ((panda$core$Int64) { 29 }));
            $tmp1149 = $tmp1152.value;
            $l1151:;
            panda$core$Bit $tmp1153 = { $tmp1149 };
            bool $tmp1148 = $tmp1153.value;
            if ($tmp1148) goto $l1154;
            panda$core$Bit $tmp1155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415011136, ((panda$core$Int64) { 27 }));
            $tmp1148 = $tmp1155.value;
            $l1154:;
            panda$core$Bit $tmp1156 = { $tmp1148 };
            if ($tmp1156.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1159 = (($fn1158) self->$class->vtable[49])(self);
                stmt1157 = $tmp1159;
                if (((panda$core$Bit) { stmt1157 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1126, ((panda$core$Object*) stmt1157));
                goto $l1135;
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1162 = (($fn1161) self->$class->vtable[51])(self);
                    stmt1160 = $tmp1162;
                    if (((panda$core$Bit) { stmt1160 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1126, ((panda$core$Object*) stmt1160));
                }
            }
            }
            }
        }
    }
    }
    $l1135:;
    org$pandalanguage$pandac$ASTNode* $tmp1163 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1163->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1163->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1163, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start1110.value).offset, ((panda$collections$ListView*) children1126));
    return $tmp1163;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1165;
    panda$collections$Array* children1169;
    org$pandalanguage$pandac$ASTNode* expr1172;
    org$pandalanguage$pandac$parser$Token token1180;
    panda$core$Int64 $match$429801183;
    org$pandalanguage$pandac$ASTNode* w1186;
    org$pandalanguage$pandac$parser$Token o1190;
    panda$collections$Array* statements1196;
    panda$core$Int64 $match$435801201;
    org$pandalanguage$pandac$ASTNode* stmt1214;
    org$pandalanguage$pandac$ASTNode* stmt1217;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1168 = (($fn1167) self->$class->vtable[8])(self, ((panda$core$Int64) { 38 }), &$s1166);
    start1165 = $tmp1168;
    if (((panda$core$Bit) { !start1165.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1170 = (panda$collections$Array*) malloc(40);
    $tmp1170->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1170->refCount.value = 1;
    panda$collections$Array$init($tmp1170);
    children1169 = $tmp1170;
    org$pandalanguage$pandac$ASTNode* $tmp1174 = (($fn1173) self->$class->vtable[30])(self);
    expr1172 = $tmp1174;
    if (((panda$core$Bit) { expr1172 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1169, ((panda$core$Object*) expr1172));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1177 = (($fn1176) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1175);
    if (((panda$core$Bit) { !$tmp1177.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l1178:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1182 = (($fn1181) self->$class->vtable[6])(self);
        token1180 = $tmp1182;
        {
            $match$429801183 = token1180.kind;
            panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$429801183, ((panda$core$Int64) { 100 }));
            if ($tmp1184.value) {
            {
                goto $l1179;
            }
            }
            else {
            panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$429801183, ((panda$core$Int64) { 39 }));
            if ($tmp1185.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1188 = (($fn1187) self->$class->vtable[39])(self);
                w1186 = $tmp1188;
                if (((panda$core$Bit) { w1186 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1169, ((panda$core$Object*) w1186));
            }
            }
            else {
            panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$429801183, ((panda$core$Int64) { 40 }));
            if ($tmp1189.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1192 = (($fn1191) self->$class->vtable[4])(self);
                o1190 = $tmp1192;
                org$pandalanguage$pandac$parser$Token$nullable $tmp1195 = (($fn1194) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1193);
                if (((panda$core$Bit) { !$tmp1195.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1197 = (panda$collections$Array*) malloc(40);
                $tmp1197->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1197->refCount.value = 1;
                panda$collections$Array$init($tmp1197);
                statements1196 = $tmp1197;
                $l1199:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1203 = (($fn1202) self->$class->vtable[6])(self);
                        $match$435801201 = $tmp1203.kind;
                        panda$core$Bit $tmp1204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435801201, ((panda$core$Int64) { 100 }));
                        if ($tmp1204.value) {
                        {
                            goto $l1200;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435801201, ((panda$core$Int64) { 28 }));
                        bool $tmp1206 = $tmp1207.value;
                        if ($tmp1206) goto $l1208;
                        panda$core$Bit $tmp1209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435801201, ((panda$core$Int64) { 29 }));
                        $tmp1206 = $tmp1209.value;
                        $l1208:;
                        panda$core$Bit $tmp1210 = { $tmp1206 };
                        bool $tmp1205 = $tmp1210.value;
                        if ($tmp1205) goto $l1211;
                        panda$core$Bit $tmp1212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435801201, ((panda$core$Int64) { 27 }));
                        $tmp1205 = $tmp1212.value;
                        $l1211:;
                        panda$core$Bit $tmp1213 = { $tmp1205 };
                        if ($tmp1213.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1216 = (($fn1215) self->$class->vtable[49])(self);
                            stmt1214 = $tmp1216;
                            if (((panda$core$Bit) { stmt1214 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements1196, ((panda$core$Object*) stmt1214));
                            goto $l1200;
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1219 = (($fn1218) self->$class->vtable[51])(self);
                            stmt1217 = $tmp1219;
                            if (((panda$core$Bit) { stmt1217 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements1196, ((panda$core$Object*) stmt1217));
                        }
                        }
                        }
                    }
                }
                }
                $l1200:;
                org$pandalanguage$pandac$ASTNode* $tmp1220 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp1220->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1220->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1220, ((panda$core$Int64) { 127 }), o1190.offset, ((panda$collections$ListView*) statements1196));
                panda$collections$Array$add$panda$collections$Array$T(children1169, ((panda$core$Object*) $tmp1220));
                goto $l1179;
            }
            }
            else {
            {
                (($fn1222) self->$class->vtable[4])(self);
                panda$core$String* $tmp1226 = (($fn1225) self->$class->vtable[14])(self, token1180);
                panda$core$String* $tmp1227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1224, $tmp1226);
                panda$core$String* $tmp1229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1227, &$s1228);
                panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1223, $tmp1229);
                (($fn1231) self->$class->vtable[9])(self, token1180, $tmp1230);
            }
            }
            }
            }
        }
    }
    }
    $l1179:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1234 = (($fn1233) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s1232);
    if (((panda$core$Bit) { !$tmp1234.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1235 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1235->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1235->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1235, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start1165.value).offset, ((panda$collections$ListView*) children1169));
    return $tmp1235;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1237;
    panda$collections$Array* children1241;
    panda$core$Int64 $match$453511246;
    org$pandalanguage$pandac$ASTNode* stmt1260;
    org$pandalanguage$pandac$ASTNode* stmt1266;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1240 = (($fn1239) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1238);
    start1237 = $tmp1240;
    if (((panda$core$Bit) { !start1237.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1242 = (panda$collections$Array*) malloc(40);
    $tmp1242->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1242->refCount.value = 1;
    panda$collections$Array$init($tmp1242);
    children1241 = $tmp1242;
    $l1244:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1248 = (($fn1247) self->$class->vtable[6])(self);
            $match$453511246 = $tmp1248.kind;
            panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453511246, ((panda$core$Int64) { 100 }));
            if ($tmp1249.value) {
            {
                (($fn1250) self->$class->vtable[4])(self);
                goto $l1245;
            }
            }
            else {
            panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453511246, ((panda$core$Int64) { 28 }));
            bool $tmp1252 = $tmp1253.value;
            if ($tmp1252) goto $l1254;
            panda$core$Bit $tmp1255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453511246, ((panda$core$Int64) { 29 }));
            $tmp1252 = $tmp1255.value;
            $l1254:;
            panda$core$Bit $tmp1256 = { $tmp1252 };
            bool $tmp1251 = $tmp1256.value;
            if ($tmp1251) goto $l1257;
            panda$core$Bit $tmp1258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453511246, ((panda$core$Int64) { 27 }));
            $tmp1251 = $tmp1258.value;
            $l1257:;
            panda$core$Bit $tmp1259 = { $tmp1251 };
            if ($tmp1259.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1262 = (($fn1261) self->$class->vtable[49])(self);
                stmt1260 = $tmp1262;
                if (((panda$core$Bit) { stmt1260 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp1265 = (($fn1264) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s1263);
                if (((panda$core$Bit) { !$tmp1265.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1241, ((panda$core$Object*) stmt1260));
                goto $l1245;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1268 = (($fn1267) self->$class->vtable[51])(self);
                stmt1266 = $tmp1268;
                if (((panda$core$Bit) { stmt1266 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1241, ((panda$core$Object*) stmt1266));
            }
            }
            }
        }
    }
    }
    $l1245:;
    org$pandalanguage$pandac$ASTNode* $tmp1269 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1269->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1269->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1269, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start1237.value).offset, ((panda$collections$ListView*) children1241));
    return $tmp1269;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1271;
    panda$core$Int64 $match$466041274;
    org$pandalanguage$pandac$parser$Token op1338;
    org$pandalanguage$pandac$ASTNode* rvalue1341;
    panda$collections$Array* children1344;
    org$pandalanguage$pandac$parser$Token op1354;
    org$pandalanguage$pandac$ASTNode* rvalue1357;
    panda$collections$Array* children1360;
    org$pandalanguage$pandac$ASTNode* $tmp1273 = (($fn1272) self->$class->vtable[30])(self);
    start1271 = $tmp1273;
    if (((panda$core$Bit) { start1271 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1276 = (($fn1275) self->$class->vtable[6])(self);
        $match$466041274 = $tmp1276.kind;
        panda$core$Bit $tmp1292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 73 }));
        bool $tmp1291 = $tmp1292.value;
        if ($tmp1291) goto $l1293;
        panda$core$Bit $tmp1294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 74 }));
        $tmp1291 = $tmp1294.value;
        $l1293:;
        panda$core$Bit $tmp1295 = { $tmp1291 };
        bool $tmp1290 = $tmp1295.value;
        if ($tmp1290) goto $l1296;
        panda$core$Bit $tmp1297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 75 }));
        $tmp1290 = $tmp1297.value;
        $l1296:;
        panda$core$Bit $tmp1298 = { $tmp1290 };
        bool $tmp1289 = $tmp1298.value;
        if ($tmp1289) goto $l1299;
        panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 76 }));
        $tmp1289 = $tmp1300.value;
        $l1299:;
        panda$core$Bit $tmp1301 = { $tmp1289 };
        bool $tmp1288 = $tmp1301.value;
        if ($tmp1288) goto $l1302;
        panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 77 }));
        $tmp1288 = $tmp1303.value;
        $l1302:;
        panda$core$Bit $tmp1304 = { $tmp1288 };
        bool $tmp1287 = $tmp1304.value;
        if ($tmp1287) goto $l1305;
        panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 78 }));
        $tmp1287 = $tmp1306.value;
        $l1305:;
        panda$core$Bit $tmp1307 = { $tmp1287 };
        bool $tmp1286 = $tmp1307.value;
        if ($tmp1286) goto $l1308;
        panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 79 }));
        $tmp1286 = $tmp1309.value;
        $l1308:;
        panda$core$Bit $tmp1310 = { $tmp1286 };
        bool $tmp1285 = $tmp1310.value;
        if ($tmp1285) goto $l1311;
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 80 }));
        $tmp1285 = $tmp1312.value;
        $l1311:;
        panda$core$Bit $tmp1313 = { $tmp1285 };
        bool $tmp1284 = $tmp1313.value;
        if ($tmp1284) goto $l1314;
        panda$core$Bit $tmp1315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 81 }));
        $tmp1284 = $tmp1315.value;
        $l1314:;
        panda$core$Bit $tmp1316 = { $tmp1284 };
        bool $tmp1283 = $tmp1316.value;
        if ($tmp1283) goto $l1317;
        panda$core$Bit $tmp1318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 82 }));
        $tmp1283 = $tmp1318.value;
        $l1317:;
        panda$core$Bit $tmp1319 = { $tmp1283 };
        bool $tmp1282 = $tmp1319.value;
        if ($tmp1282) goto $l1320;
        panda$core$Bit $tmp1321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 83 }));
        $tmp1282 = $tmp1321.value;
        $l1320:;
        panda$core$Bit $tmp1322 = { $tmp1282 };
        bool $tmp1281 = $tmp1322.value;
        if ($tmp1281) goto $l1323;
        panda$core$Bit $tmp1324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 84 }));
        $tmp1281 = $tmp1324.value;
        $l1323:;
        panda$core$Bit $tmp1325 = { $tmp1281 };
        bool $tmp1280 = $tmp1325.value;
        if ($tmp1280) goto $l1326;
        panda$core$Bit $tmp1327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 85 }));
        $tmp1280 = $tmp1327.value;
        $l1326:;
        panda$core$Bit $tmp1328 = { $tmp1280 };
        bool $tmp1279 = $tmp1328.value;
        if ($tmp1279) goto $l1329;
        panda$core$Bit $tmp1330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 86 }));
        $tmp1279 = $tmp1330.value;
        $l1329:;
        panda$core$Bit $tmp1331 = { $tmp1279 };
        bool $tmp1278 = $tmp1331.value;
        if ($tmp1278) goto $l1332;
        panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 87 }));
        $tmp1278 = $tmp1333.value;
        $l1332:;
        panda$core$Bit $tmp1334 = { $tmp1278 };
        bool $tmp1277 = $tmp1334.value;
        if ($tmp1277) goto $l1335;
        panda$core$Bit $tmp1336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 88 }));
        $tmp1277 = $tmp1336.value;
        $l1335:;
        panda$core$Bit $tmp1337 = { $tmp1277 };
        if ($tmp1337.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1340 = (($fn1339) self->$class->vtable[4])(self);
            op1338 = $tmp1340;
            org$pandalanguage$pandac$ASTNode* $tmp1343 = (($fn1342) self->$class->vtable[30])(self);
            rvalue1341 = $tmp1343;
            if (((panda$core$Bit) { rvalue1341 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1345 = (panda$collections$Array*) malloc(40);
            $tmp1345->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1345->refCount.value = 1;
            panda$collections$Array$init($tmp1345);
            children1344 = $tmp1345;
            panda$collections$Array$add$panda$collections$Array$T(children1344, ((panda$core$Object*) start1271));
            panda$collections$Array$add$panda$collections$Array$T(children1344, ((panda$core$Object*) rvalue1341));
            org$pandalanguage$pandac$ASTNode* $tmp1347 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1347->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1347->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1347, ((panda$core$Int64) { 103 }), start1271->offset, ((panda$core$Object*) wrap_panda$core$Int64(op1338.kind)), ((panda$collections$ListView*) children1344));
            return $tmp1347;
        }
        }
        else {
        panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$466041274, ((panda$core$Int64) { 58 }));
        if ($tmp1349.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1351 = (($fn1350) self->$class->vtable[6])(self);
            (($fn1353) self->$class->vtable[9])(self, $tmp1351, &$s1352);
            org$pandalanguage$pandac$parser$Token $tmp1356 = (($fn1355) self->$class->vtable[4])(self);
            op1354 = $tmp1356;
            org$pandalanguage$pandac$ASTNode* $tmp1359 = (($fn1358) self->$class->vtable[30])(self);
            rvalue1357 = $tmp1359;
            if (((panda$core$Bit) { rvalue1357 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1361 = (panda$collections$Array*) malloc(40);
            $tmp1361->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1361->refCount.value = 1;
            panda$collections$Array$init($tmp1361);
            children1360 = $tmp1361;
            panda$collections$Array$add$panda$collections$Array$T(children1360, ((panda$core$Object*) start1271));
            panda$collections$Array$add$panda$collections$Array$T(children1360, ((panda$core$Object*) rvalue1357));
            org$pandalanguage$pandac$ASTNode* $tmp1363 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1363->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1363->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1363, ((panda$core$Int64) { 103 }), start1271->offset, ((panda$core$Object*) wrap_panda$core$Int64(op1354.kind)), ((panda$collections$ListView*) children1360));
            return $tmp1363;
        }
        }
        else {
        {
            return start1271;
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1365;
    org$pandalanguage$pandac$ASTNode* t1368;
    org$pandalanguage$pandac$ASTNode* value1373;
    org$pandalanguage$pandac$ASTNode* value1383;
    panda$collections$Array* $tmp1366 = (panda$collections$Array*) malloc(40);
    $tmp1366->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1366->refCount.value = 1;
    panda$collections$Array$init($tmp1366);
    children1365 = $tmp1366;
    org$pandalanguage$pandac$ASTNode* $tmp1370 = (($fn1369) self->$class->vtable[33])(self);
    t1368 = $tmp1370;
    if (((panda$core$Bit) { t1368 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1365, ((panda$core$Object*) t1368));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1372 = (($fn1371) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp1372.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1375 = (($fn1374) self->$class->vtable[30])(self);
        value1373 = $tmp1375;
        if (((panda$core$Bit) { value1373 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1365, ((panda$core$Object*) value1373));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1377 = (($fn1376) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1377.kind, ((panda$core$Int64) { 58 }));
    if ($tmp1378.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1380 = (($fn1379) self->$class->vtable[4])(self);
        (($fn1382) self->$class->vtable[9])(self, $tmp1380, &$s1381);
        org$pandalanguage$pandac$ASTNode* $tmp1385 = (($fn1384) self->$class->vtable[30])(self);
        value1383 = $tmp1385;
        if (((panda$core$Bit) { value1383 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1365, ((panda$core$Object*) value1383));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1386 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1386->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1386->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1386, ((panda$core$Int64) { 129 }), t1368->offset, ((panda$collections$ListView*) children1365));
    return $tmp1386;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1388;
    panda$core$Int64 kind1391;
    panda$core$Int64 $match$493211392;
    panda$collections$Array* children1399;
    org$pandalanguage$pandac$ASTNode* child1402;
    org$pandalanguage$pandac$ASTNode* child1409;
    org$pandalanguage$pandac$parser$Token $tmp1390 = (($fn1389) self->$class->vtable[4])(self);
    start1388 = $tmp1390;
    {
        $match$493211392 = start1388.kind;
        panda$core$Bit $tmp1393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$493211392, ((panda$core$Int64) { 23 }));
        if ($tmp1393.value) {
        {
            kind1391 = ((panda$core$Int64) { 130 });
        }
        }
        else {
        panda$core$Bit $tmp1394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$493211392, ((panda$core$Int64) { 24 }));
        if ($tmp1394.value) {
        {
            kind1391 = ((panda$core$Int64) { 131 });
        }
        }
        else {
        panda$core$Bit $tmp1395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$493211392, ((panda$core$Int64) { 25 }));
        if ($tmp1395.value) {
        {
            kind1391 = ((panda$core$Int64) { 133 });
        }
        }
        else {
        panda$core$Bit $tmp1396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$493211392, ((panda$core$Int64) { 26 }));
        if ($tmp1396.value) {
        {
            kind1391 = ((panda$core$Int64) { 132 });
        }
        }
        else {
        {
            (($fn1398) self->$class->vtable[9])(self, start1388, &$s1397);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1400 = (panda$collections$Array*) malloc(40);
    $tmp1400->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1400->refCount.value = 1;
    panda$collections$Array$init($tmp1400);
    children1399 = $tmp1400;
    org$pandalanguage$pandac$ASTNode* $tmp1404 = (($fn1403) self->$class->vtable[43])(self);
    child1402 = $tmp1404;
    if (((panda$core$Bit) { child1402 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1399, ((panda$core$Object*) child1402));
    $l1405:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1408 = (($fn1407) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1408.nonnull }).value) goto $l1406;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1411 = (($fn1410) self->$class->vtable[43])(self);
        child1409 = $tmp1411;
        if (((panda$core$Bit) { child1409 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1399, ((panda$core$Object*) child1409));
    }
    goto $l1405;
    $l1406:;
    org$pandalanguage$pandac$ASTNode* $tmp1412 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1412->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1412->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1412, kind1391, start1388.offset, ((panda$collections$ListView*) children1399));
    return $tmp1412;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1414;
    panda$collections$Array* children1422;
    org$pandalanguage$pandac$ASTNode* expr1431;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1417 = (($fn1416) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1415);
    start1414 = $tmp1417;
    if (((panda$core$Bit) { !start1414.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1420 = (($fn1419) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1418);
    if (((panda$core$Bit) { !$tmp1420.nonnull }).value) {
    {
        return NULL;
    }
    }
    (($fn1421) self->commaSeparatedExpressionContext->$class->vtable[2])(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp1423 = (panda$collections$Array*) malloc(40);
    $tmp1423->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1423->refCount.value = 1;
    panda$collections$Array$init($tmp1423);
    children1422 = $tmp1423;
    org$pandalanguage$pandac$ASTNode* $tmp1425 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1425->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1425->refCount.value = 1;
    panda$core$String* $tmp1428 = (($fn1427) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start1414.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1425, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start1414.value).offset, $tmp1428);
    panda$collections$Array$add$panda$collections$Array$T(children1422, ((panda$core$Object*) $tmp1425));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1430 = (($fn1429) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1430.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1433 = (($fn1432) self->$class->vtable[30])(self);
        expr1431 = $tmp1433;
        if (((panda$core$Bit) { expr1431 == NULL }).value) {
        {
            (($fn1434) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1422, ((panda$core$Object*) expr1431));
        $l1435:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1438 = (($fn1437) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1438.nonnull }).value) goto $l1436;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1440 = (($fn1439) self->$class->vtable[30])(self);
            expr1431 = $tmp1440;
            if (((panda$core$Bit) { expr1431 == NULL }).value) {
            {
                (($fn1441) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1422, ((panda$core$Object*) expr1431));
        }
        goto $l1435;
        $l1436:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1444 = (($fn1443) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1442);
        if (((panda$core$Bit) { !$tmp1444.nonnull }).value) {
        {
            (($fn1445) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    (($fn1446) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1447 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1447->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1447->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1447, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start1414.value).offset, ((panda$collections$ListView*) children1422));
    return $tmp1447;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1449;
    org$pandalanguage$pandac$parser$Token$nullable label1453;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1452 = (($fn1451) self->$class->vtable[8])(self, ((panda$core$Int64) { 28 }), &$s1450);
    start1449 = $tmp1452;
    if (((panda$core$Bit) { !start1449.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1455 = (($fn1454) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1453 = $tmp1455;
    if (((panda$core$Bit) { label1453.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1456 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1456->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1456->refCount.value = 1;
        panda$core$String* $tmp1459 = (($fn1458) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1453.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1456, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1449.value).offset, $tmp1459);
        return $tmp1456;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1460 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1460->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1460->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1460, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1449.value).offset);
    return $tmp1460;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1462;
    org$pandalanguage$pandac$parser$Token$nullable label1466;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1465 = (($fn1464) self->$class->vtable[8])(self, ((panda$core$Int64) { 29 }), &$s1463);
    start1462 = $tmp1465;
    if (((panda$core$Bit) { !start1462.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1468 = (($fn1467) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1466 = $tmp1468;
    if (((panda$core$Bit) { label1466.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1469 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1469->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1469->refCount.value = 1;
        panda$core$String* $tmp1472 = (($fn1471) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1466.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1469, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1462.value).offset, $tmp1472);
        return $tmp1469;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1473 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1473->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1473->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1473, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1462.value).offset);
    return $tmp1473;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1475;
    panda$core$Int64 $match$533991479;
    panda$collections$Array* children1493;
    org$pandalanguage$pandac$ASTNode* expr1496;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1478 = (($fn1477) self->$class->vtable[8])(self, ((panda$core$Int64) { 27 }), &$s1476);
    start1475 = $tmp1478;
    if (((panda$core$Bit) { !start1475.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1481 = (($fn1480) self->$class->vtable[6])(self);
        $match$533991479 = $tmp1481.kind;
        panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533991479, ((panda$core$Int64) { 100 }));
        bool $tmp1483 = $tmp1484.value;
        if ($tmp1483) goto $l1485;
        panda$core$Bit $tmp1486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533991479, ((panda$core$Int64) { 39 }));
        $tmp1483 = $tmp1486.value;
        $l1485:;
        panda$core$Bit $tmp1487 = { $tmp1483 };
        bool $tmp1482 = $tmp1487.value;
        if ($tmp1482) goto $l1488;
        panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533991479, ((panda$core$Int64) { 40 }));
        $tmp1482 = $tmp1489.value;
        $l1488:;
        panda$core$Bit $tmp1490 = { $tmp1482 };
        if ($tmp1490.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1491 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1491->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1491->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1491, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1475.value).offset);
            return $tmp1491;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1494 = (panda$collections$Array*) malloc(40);
            $tmp1494->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1494->refCount.value = 1;
            panda$collections$Array$init($tmp1494);
            children1493 = $tmp1494;
            org$pandalanguage$pandac$ASTNode* $tmp1498 = (($fn1497) self->$class->vtable[30])(self);
            expr1496 = $tmp1498;
            if (((panda$core$Bit) { expr1496 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1493, ((panda$core$Object*) expr1496));
            org$pandalanguage$pandac$ASTNode* $tmp1499 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1499->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1499->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1499, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1475.value).offset, ((panda$collections$ListView*) children1493));
            return $tmp1499;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $match$542131501;
    {
        org$pandalanguage$pandac$parser$Token $tmp1503 = (($fn1502) self->$class->vtable[6])(self);
        $match$542131501 = $tmp1503.kind;
        panda$core$Bit $tmp1504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$542131501, ((panda$core$Int64) { 28 }));
        if ($tmp1504.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1506 = (($fn1505) self->$class->vtable[46])(self);
            return $tmp1506;
        }
        }
        else {
        panda$core$Bit $tmp1507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$542131501, ((panda$core$Int64) { 29 }));
        if ($tmp1507.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1509 = (($fn1508) self->$class->vtable[47])(self);
            return $tmp1509;
        }
        }
        else {
        panda$core$Bit $tmp1510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$542131501, ((panda$core$Int64) { 27 }));
        if ($tmp1510.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1512 = (($fn1511) self->$class->vtable[48])(self);
            return $tmp1512;
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    panda$core$Int64 $match$545291513;
    {
        org$pandalanguage$pandac$parser$Token $tmp1515 = (($fn1514) self->$class->vtable[6])(self);
        $match$545291513 = $tmp1515.kind;
        panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545291513, ((panda$core$Int64) { 30 }));
        if ($tmp1516.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1518 = (($fn1517) self->$class->vtable[36])(self, p_label);
            return $tmp1518;
        }
        }
        else {
        panda$core$Bit $tmp1519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545291513, ((panda$core$Int64) { 32 }));
        if ($tmp1519.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1521 = (($fn1520) self->$class->vtable[34])(self, p_label);
            return $tmp1521;
        }
        }
        else {
        panda$core$Bit $tmp1522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545291513, ((panda$core$Int64) { 35 }));
        if ($tmp1522.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1524 = (($fn1523) self->$class->vtable[37])(self, p_label);
            return $tmp1524;
        }
        }
        else {
        panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$545291513, ((panda$core$Int64) { 31 }));
        if ($tmp1525.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1527 = (($fn1526) self->$class->vtable[35])(self, p_label);
            return $tmp1527;
        }
        }
        else {
        {
            (($fn1529) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1528);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $match$553591530;
    org$pandalanguage$pandac$parser$Token id1558;
    {
        org$pandalanguage$pandac$parser$Token $tmp1532 = (($fn1531) self->$class->vtable[6])(self);
        $match$553591530 = $tmp1532.kind;
        panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 36 }));
        if ($tmp1533.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1535 = (($fn1534) self->$class->vtable[31])(self);
            return $tmp1535;
        }
        }
        else {
        panda$core$Bit $tmp1536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 32 }));
        if ($tmp1536.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1538 = (($fn1537) self->$class->vtable[34])(self, NULL);
            return $tmp1538;
        }
        }
        else {
        panda$core$Bit $tmp1539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 31 }));
        if ($tmp1539.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1541 = (($fn1540) self->$class->vtable[35])(self, NULL);
            return $tmp1541;
        }
        }
        else {
        panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 30 }));
        if ($tmp1542.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1544 = (($fn1543) self->$class->vtable[36])(self, NULL);
            return $tmp1544;
        }
        }
        else {
        panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 35 }));
        if ($tmp1545.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1547 = (($fn1546) self->$class->vtable[37])(self, NULL);
            return $tmp1547;
        }
        }
        else {
        panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 44 }));
        if ($tmp1548.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1550 = (($fn1549) self->$class->vtable[38])(self);
            return $tmp1550;
        }
        }
        else {
        panda$core$Bit $tmp1551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 38 }));
        if ($tmp1551.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1553 = (($fn1552) self->$class->vtable[40])(self);
            return $tmp1553;
        }
        }
        else {
        panda$core$Bit $tmp1554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 99 }));
        if ($tmp1554.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1556 = (($fn1555) self->$class->vtable[41])(self);
            return $tmp1556;
        }
        }
        else {
        panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 48 }));
        if ($tmp1557.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1560 = (($fn1559) self->$class->vtable[4])(self);
            id1558 = $tmp1560;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1562 = (($fn1561) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1562.nonnull }).value) {
            {
                panda$core$String* $tmp1564 = (($fn1563) self->$class->vtable[14])(self, id1558);
                org$pandalanguage$pandac$ASTNode* $tmp1566 = (($fn1565) self->$class->vtable[50])(self, $tmp1564);
                return $tmp1566;
            }
            }
            (($fn1567) self->$class->vtable[5])(self, id1558);
            org$pandalanguage$pandac$ASTNode* $tmp1569 = (($fn1568) self->$class->vtable[42])(self);
            return $tmp1569;
        }
        }
        else {
        panda$core$Bit $tmp1571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 46 }));
        bool $tmp1570 = $tmp1571.value;
        if ($tmp1570) goto $l1572;
        panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 47 }));
        $tmp1570 = $tmp1573.value;
        $l1572:;
        panda$core$Bit $tmp1574 = { $tmp1570 };
        if ($tmp1574.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1576 = (($fn1575) self->$class->vtable[42])(self);
            return $tmp1576;
        }
        }
        else {
        panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 23 }));
        bool $tmp1579 = $tmp1580.value;
        if ($tmp1579) goto $l1581;
        panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 24 }));
        $tmp1579 = $tmp1582.value;
        $l1581:;
        panda$core$Bit $tmp1583 = { $tmp1579 };
        bool $tmp1578 = $tmp1583.value;
        if ($tmp1578) goto $l1584;
        panda$core$Bit $tmp1585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 25 }));
        $tmp1578 = $tmp1585.value;
        $l1584:;
        panda$core$Bit $tmp1586 = { $tmp1578 };
        bool $tmp1577 = $tmp1586.value;
        if ($tmp1577) goto $l1587;
        panda$core$Bit $tmp1588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 26 }));
        $tmp1577 = $tmp1588.value;
        $l1587:;
        panda$core$Bit $tmp1589 = { $tmp1577 };
        if ($tmp1589.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1591 = (($fn1590) self->$class->vtable[44])(self);
            return $tmp1591;
        }
        }
        else {
        panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553591530, ((panda$core$Int64) { 22 }));
        if ($tmp1592.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1594 = (($fn1593) self->$class->vtable[45])(self);
            return $tmp1594;
        }
        }
        else {
        {
            (($fn1596) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s1595);
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
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1597;
    org$pandalanguage$pandac$parser$Token$nullable next1601;
    panda$core$MutableString* name1605;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1600 = (($fn1599) self->$class->vtable[8])(self, ((panda$core$Int64) { 14 }), &$s1598);
    start1597 = $tmp1600;
    if (((panda$core$Bit) { !start1597.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1604 = (($fn1603) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1602);
    next1601 = $tmp1604;
    if (((panda$core$Bit) { !next1601.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1606 = (panda$core$MutableString*) malloc(40);
    $tmp1606->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1606->refCount.value = 1;
    panda$core$String* $tmp1609 = (($fn1608) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1601.value));
    panda$core$MutableString$init$panda$core$String($tmp1606, $tmp1609);
    name1605 = $tmp1606;
    $l1610:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1613 = (($fn1612) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1601 = $tmp1613;
        if (((panda$core$Bit) { !next1601.nonnull }).value) {
        {
            goto $l1611;
        }
        }
        (($fn1615) name1605->$class->vtable[3])(name1605, &$s1614);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1618 = (($fn1617) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1616);
        next1601 = $tmp1618;
        if (((panda$core$Bit) { !next1601.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1620 = (($fn1619) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1601.value));
        (($fn1621) name1605->$class->vtable[3])(name1605, $tmp1620);
    }
    }
    $l1611:;
    org$pandalanguage$pandac$ASTNode* $tmp1622 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1622->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1622->refCount.value = 1;
    panda$core$String* $tmp1625 = (($fn1624) name1605->$class->vtable[0])(name1605);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1622, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1597.value).offset, $tmp1625);
    return $tmp1622;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1626;
    org$pandalanguage$pandac$parser$Token$nullable next1630;
    panda$core$MutableString* name1634;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1629 = (($fn1628) self->$class->vtable[8])(self, ((panda$core$Int64) { 15 }), &$s1627);
    start1626 = $tmp1629;
    if (((panda$core$Bit) { !start1626.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1633 = (($fn1632) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1631);
    next1630 = $tmp1633;
    if (((panda$core$Bit) { !next1630.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1635 = (panda$core$MutableString*) malloc(40);
    $tmp1635->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1635->refCount.value = 1;
    panda$core$String* $tmp1638 = (($fn1637) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1630.value));
    panda$core$MutableString$init$panda$core$String($tmp1635, $tmp1638);
    name1634 = $tmp1635;
    $l1639:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1642 = (($fn1641) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1630 = $tmp1642;
        if (((panda$core$Bit) { !next1630.nonnull }).value) {
        {
            goto $l1640;
        }
        }
        (($fn1644) name1634->$class->vtable[3])(name1634, &$s1643);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1647 = (($fn1646) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1645);
        next1630 = $tmp1647;
        if (((panda$core$Bit) { !next1630.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1649 = (($fn1648) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1630.value));
        (($fn1650) name1634->$class->vtable[3])(name1634, $tmp1649);
    }
    }
    $l1640:;
    org$pandalanguage$pandac$ASTNode* $tmp1651 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1651->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1651->refCount.value = 1;
    panda$core$String* $tmp1654 = (($fn1653) name1634->$class->vtable[0])(name1634);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1651, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1626.value).offset, $tmp1654);
    return $tmp1651;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1655;
    org$pandalanguage$pandac$parser$Token$nullable id1659;
    panda$collections$Array* children1663;
    panda$collections$Array* idChildren1666;
    org$pandalanguage$pandac$ASTNode* t1671;
    org$pandalanguage$pandac$ASTNode* t1687;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1658 = (($fn1657) self->$class->vtable[8])(self, ((panda$core$Int64) { 62 }), &$s1656);
    start1655 = $tmp1658;
    if (((panda$core$Bit) { !start1655.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1662 = (($fn1661) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1660);
    id1659 = $tmp1662;
    if (((panda$core$Bit) { !id1659.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1664 = (panda$collections$Array*) malloc(40);
    $tmp1664->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1664->refCount.value = 1;
    panda$collections$Array$init($tmp1664);
    children1663 = $tmp1664;
    panda$collections$Array* $tmp1667 = (panda$collections$Array*) malloc(40);
    $tmp1667->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1667->refCount.value = 1;
    panda$collections$Array$init($tmp1667);
    idChildren1666 = $tmp1667;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1670 = (($fn1669) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1670.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1673 = (($fn1672) self->$class->vtable[20])(self);
        t1671 = $tmp1673;
        if (((panda$core$Bit) { t1671 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1666, ((panda$core$Object*) t1671));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1674 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1674->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1674->refCount.value = 1;
    panda$core$String* $tmp1677 = (($fn1676) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1659.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1674, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1659.value).offset, ((panda$core$Object*) $tmp1677), ((panda$collections$ListView*) idChildren1666));
    panda$collections$Array$add$panda$collections$Array$T(children1663, ((panda$core$Object*) $tmp1674));
    $l1678:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1681 = (($fn1680) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1681.nonnull }).value) goto $l1679;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1684 = (($fn1683) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1682);
        id1659 = $tmp1684;
        if (((panda$core$Bit) { !id1659.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1666);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1686 = (($fn1685) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1686.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1689 = (($fn1688) self->$class->vtable[20])(self);
            t1687 = $tmp1689;
            if (((panda$core$Bit) { t1687 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1666, ((panda$core$Object*) t1687));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1690 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1690->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1690->refCount.value = 1;
        panda$core$String* $tmp1693 = (($fn1692) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1659.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1690, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1659.value).offset, ((panda$core$Object*) $tmp1693), ((panda$collections$ListView*) idChildren1666));
        panda$collections$Array$add$panda$collections$Array$T(children1663, ((panda$core$Object*) $tmp1690));
    }
    goto $l1678;
    $l1679:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1696 = (($fn1695) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s1694);
    if (((panda$core$Bit) { !$tmp1696.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1697 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1697->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1697->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1697, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1655.value).offset, ((panda$collections$ListView*) children1663));
    return $tmp1697;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaces$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1699;
    panda$collections$Array* children1703;
    org$pandalanguage$pandac$ASTNode* t1706;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1702 = (($fn1701) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1700);
    start1699 = $tmp1702;
    if (((panda$core$Bit) { !start1699.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1704 = (panda$collections$Array*) malloc(40);
    $tmp1704->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1704->refCount.value = 1;
    panda$collections$Array$init($tmp1704);
    children1703 = $tmp1704;
    org$pandalanguage$pandac$ASTNode* $tmp1708 = (($fn1707) self->$class->vtable[20])(self);
    t1706 = $tmp1708;
    if (((panda$core$Bit) { t1706 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1703, ((panda$core$Object*) t1706));
    $l1709:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1712 = (($fn1711) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1712.nonnull }).value) goto $l1710;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1714 = (($fn1713) self->$class->vtable[20])(self);
        t1706 = $tmp1714;
        if (((panda$core$Bit) { t1706 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1703, ((panda$core$Object*) t1706));
    }
    goto $l1709;
    $l1710:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1717 = (($fn1716) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1715);
    if (((panda$core$Bit) { !$tmp1717.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1718 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1718->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1718->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1718, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1699.value).offset, ((panda$collections$ListView*) children1703));
    return $tmp1718;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1720;
    org$pandalanguage$pandac$parser$Token$nullable next1725;
    panda$collections$Array* $tmp1721 = (panda$collections$Array*) malloc(40);
    $tmp1721->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1721->refCount.value = 1;
    panda$collections$Array$init($tmp1721);
    children1720 = $tmp1721;
    $l1723:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1727 = (($fn1726) self->$class->vtable[7])(self, ((panda$core$Int64) { 13 }));
        next1725 = $tmp1727;
        if (((panda$core$Bit) { !next1725.nonnull }).value) {
        {
            goto $l1724;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1728 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1728->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1728->refCount.value = 1;
        panda$core$String* $tmp1731 = (($fn1730) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1725.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1728, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1725.value).offset, $tmp1731);
        panda$collections$Array$add$panda$collections$Array$T(children1720, ((panda$core$Object*) $tmp1728));
    }
    }
    $l1724:;
    org$pandalanguage$pandac$ASTNode* $tmp1732 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1732->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1732->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1732, ((panda$core$Int64) { 144 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) children1720));
    return $tmp1732;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1734;
    panda$core$MutableString* result1738;
    org$pandalanguage$pandac$parser$Token next1743;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1737 = (($fn1736) self->$class->vtable[8])(self, ((panda$core$Int64) { 11 }), &$s1735);
    start1734 = $tmp1737;
    if (((panda$core$Bit) { !start1734.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1739 = (panda$core$MutableString*) malloc(40);
    $tmp1739->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1739->refCount.value = 1;
    panda$core$MutableString$init($tmp1739);
    result1738 = $tmp1739;
    $l1741:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1745 = (($fn1744) self->$class->vtable[3])(self);
        next1743 = $tmp1745;
        panda$core$Bit $tmp1746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1743.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1746.value) {
        {
            goto $l1742;
        }
        }
        panda$core$Bit $tmp1747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1743.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1747.value) {
        {
            (($fn1749) self->$class->vtable[9])(self, ((org$pandalanguage$pandac$parser$Token) start1734.value), &$s1748);
            return NULL;
        }
        }
        panda$core$String* $tmp1751 = (($fn1750) self->$class->vtable[14])(self, next1743);
        (($fn1752) result1738->$class->vtable[3])(result1738, $tmp1751);
    }
    }
    $l1742:;
    org$pandalanguage$pandac$ASTNode* $tmp1753 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1753->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1753->refCount.value = 1;
    panda$core$String* $tmp1756 = (($fn1755) result1738->$class->vtable[0])(result1738);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1753, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1734.value).offset, $tmp1756);
    return $tmp1753;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1757;
    org$pandalanguage$pandac$ASTNode* t1761;
    panda$collections$Array* children1764;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1760 = (($fn1759) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1758);
    id1757 = $tmp1760;
    if (((panda$core$Bit) { !id1757.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1763 = (($fn1762) self->$class->vtable[32])(self);
    t1761 = $tmp1763;
    if (((panda$core$Bit) { t1761 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1765 = (panda$collections$Array*) malloc(40);
    $tmp1765->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1765->refCount.value = 1;
    panda$collections$Array$init($tmp1765);
    children1764 = $tmp1765;
    panda$collections$Array$add$panda$collections$Array$T(children1764, ((panda$core$Object*) t1761));
    org$pandalanguage$pandac$ASTNode* $tmp1767 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1767->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1767->refCount.value = 1;
    panda$core$String* $tmp1770 = (($fn1769) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1757.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1767, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1757.value).offset, ((panda$core$Object*) $tmp1770), ((panda$collections$ListView*) children1764));
    return $tmp1767;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1771;
    panda$collections$Array* children1775;
    org$pandalanguage$pandac$ASTNode* param1780;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1774 = (($fn1773) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1772);
    start1771 = $tmp1774;
    if (((panda$core$Bit) { !start1771.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1776 = (panda$collections$Array*) malloc(40);
    $tmp1776->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1776->refCount.value = 1;
    panda$collections$Array$init($tmp1776);
    children1775 = $tmp1776;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1779 = (($fn1778) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1779.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1782 = (($fn1781) self->$class->vtable[58])(self);
        param1780 = $tmp1782;
        if (((panda$core$Bit) { param1780 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1775, ((panda$core$Object*) param1780));
        $l1783:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1786 = (($fn1785) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1786.nonnull }).value) goto $l1784;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1788 = (($fn1787) self->$class->vtable[58])(self);
            param1780 = $tmp1788;
            if (((panda$core$Bit) { param1780 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1775, ((panda$core$Object*) param1780));
        }
        goto $l1783;
        $l1784:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1791 = (($fn1790) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1789);
        if (((panda$core$Bit) { !$tmp1791.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1792 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1792->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1792->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1792, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1771.value).offset, ((panda$collections$ListView*) children1775));
    return $tmp1792;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1794;
    org$pandalanguage$pandac$parser$Token$nullable start1795;
    panda$core$String* name1801;
    panda$collections$Array* children1804;
    org$pandalanguage$pandac$ASTNode* params1807;
    org$pandalanguage$pandac$ASTNode* returnType1813;
    org$pandalanguage$pandac$ASTNode* b1821;
    org$pandalanguage$pandac$parser$Token token1826;
    panda$core$String* tokenText1829;
    org$pandalanguage$pandac$ASTNode* post1843;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1797 = (($fn1796) self->$class->vtable[7])(self, ((panda$core$Int64) { 20 }));
    start1795 = $tmp1797;
    if (((panda$core$Bit) { !start1795.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1800 = (($fn1799) self->$class->vtable[8])(self, ((panda$core$Int64) { 21 }), &$s1798);
        start1795 = $tmp1800;
        if (((panda$core$Bit) { !start1795.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1794 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1794 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1803 = (($fn1802) self->$class->vtable[19])(self);
    name1801 = $tmp1803;
    if (((panda$core$Bit) { name1801 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1805 = (panda$collections$Array*) malloc(40);
    $tmp1805->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1805->refCount.value = 1;
    panda$collections$Array$init($tmp1805);
    children1804 = $tmp1805;
    panda$collections$Array$add$panda$collections$Array$T(children1804, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1804, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1809 = (($fn1808) self->$class->vtable[59])(self);
    params1807 = $tmp1809;
    if (((panda$core$Bit) { params1807 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1804, ((panda$core$Object*) params1807));
    org$pandalanguage$pandac$parser$Token $tmp1811 = (($fn1810) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1811.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1812.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1815 = (($fn1814) self->$class->vtable[32])(self);
        returnType1813 = $tmp1815;
        if (((panda$core$Bit) { returnType1813 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1804, ((panda$core$Object*) returnType1813));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1816 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1816->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1816->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1816, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1804, ((panda$core$Object*) $tmp1816));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1819 = (($fn1818) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1819.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1820.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1823 = (($fn1822) self->$class->vtable[41])(self);
        b1821 = $tmp1823;
        if (((panda$core$Bit) { b1821 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1804, ((panda$core$Object*) b1821));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1824 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1824->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1824->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1824, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1804, ((panda$core$Object*) $tmp1824));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1828 = (($fn1827) self->$class->vtable[6])(self);
    token1826 = $tmp1828;
    panda$core$String* $tmp1831 = (($fn1830) self->$class->vtable[14])(self, token1826);
    tokenText1829 = $tmp1831;
    panda$core$Bit $tmp1833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1826.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1832 = $tmp1833.value;
    if (!$tmp1832) goto $l1834;
    panda$core$Bit $tmp1837 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1829, &$s1836);
    bool $tmp1835 = $tmp1837.value;
    if ($tmp1835) goto $l1838;
    panda$core$Bit $tmp1840 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1829, &$s1839);
    $tmp1835 = $tmp1840.value;
    $l1838:;
    panda$core$Bit $tmp1841 = { $tmp1835 };
    $tmp1832 = $tmp1841.value;
    $l1834:;
    panda$core$Bit $tmp1842 = { $tmp1832 };
    if ($tmp1842.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1845 = (($fn1844) self->$class->vtable[60])(self);
        post1843 = $tmp1845;
        if (((panda$core$Bit) { post1843 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1804, ((panda$core$Object*) post1843));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1846 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1846->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1846->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1846, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1804, ((panda$core$Object*) $tmp1846));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1848 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1848->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1848->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1848, kind1794, ((org$pandalanguage$pandac$parser$Token) start1795.value).offset, ((panda$core$Object*) name1801), ((panda$collections$ListView*) children1804));
    return $tmp1848;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1850;
    panda$collections$Array* children1854;
    org$pandalanguage$pandac$ASTNode* params1857;
    org$pandalanguage$pandac$ASTNode* b1860;
    org$pandalanguage$pandac$parser$Token token1863;
    panda$core$String* tokenText1866;
    org$pandalanguage$pandac$ASTNode* post1880;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1853 = (($fn1852) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1851);
    start1850 = $tmp1853;
    if (((panda$core$Bit) { !start1850.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1855 = (panda$collections$Array*) malloc(40);
    $tmp1855->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1855->refCount.value = 1;
    panda$collections$Array$init($tmp1855);
    children1854 = $tmp1855;
    panda$collections$Array$add$panda$collections$Array$T(children1854, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1854, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1859 = (($fn1858) self->$class->vtable[59])(self);
    params1857 = $tmp1859;
    if (((panda$core$Bit) { params1857 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1854, ((panda$core$Object*) params1857));
    org$pandalanguage$pandac$ASTNode* $tmp1862 = (($fn1861) self->$class->vtable[41])(self);
    b1860 = $tmp1862;
    if (((panda$core$Bit) { b1860 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1854, ((panda$core$Object*) b1860));
    org$pandalanguage$pandac$parser$Token $tmp1865 = (($fn1864) self->$class->vtable[6])(self);
    token1863 = $tmp1865;
    panda$core$String* $tmp1868 = (($fn1867) self->$class->vtable[14])(self, token1863);
    tokenText1866 = $tmp1868;
    panda$core$Bit $tmp1870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1863.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1869 = $tmp1870.value;
    if (!$tmp1869) goto $l1871;
    panda$core$Bit $tmp1874 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1866, &$s1873);
    bool $tmp1872 = $tmp1874.value;
    if ($tmp1872) goto $l1875;
    panda$core$Bit $tmp1877 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1866, &$s1876);
    $tmp1872 = $tmp1877.value;
    $l1875:;
    panda$core$Bit $tmp1878 = { $tmp1872 };
    $tmp1869 = $tmp1878.value;
    $l1871:;
    panda$core$Bit $tmp1879 = { $tmp1869 };
    if ($tmp1879.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1882 = (($fn1881) self->$class->vtable[60])(self);
        post1880 = $tmp1882;
        if (((panda$core$Bit) { post1880 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1854, ((panda$core$Object*) post1880));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1883 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1883->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1883->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1883, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1854, ((panda$core$Object*) $tmp1883));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1885 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1885->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1885->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1885, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1850.value).offset, ((panda$collections$ListView*) children1854));
    return $tmp1885;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1887;
    panda$collections$Array* children1890;
    org$pandalanguage$pandac$ASTNode* $tmp1889 = (($fn1888) self->$class->vtable[44])(self);
    decl1887 = $tmp1889;
    if (((panda$core$Bit) { decl1887 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1891 = (panda$collections$Array*) malloc(40);
    $tmp1891->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1891->refCount.value = 1;
    panda$collections$Array$init($tmp1891);
    children1890 = $tmp1891;
    panda$collections$Array$add$panda$collections$Array$T(children1890, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1890, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1890, ((panda$core$Object*) decl1887));
    org$pandalanguage$pandac$ASTNode* $tmp1893 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1893->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1893->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1893, ((panda$core$Int64) { 148 }), decl1887->offset, ((panda$collections$ListView*) children1890));
    return $tmp1893;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1895;
    org$pandalanguage$pandac$ASTNode* dc1898;
    org$pandalanguage$pandac$ASTNode* a1904;
    panda$core$Int64 $match$689811907;
    org$pandalanguage$pandac$parser$Token $tmp1897 = (($fn1896) self->$class->vtable[6])(self);
    start1895 = $tmp1897;
    panda$core$Bit $tmp1899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1895.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1899.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1901 = (($fn1900) self->$class->vtable[57])(self);
        dc1898 = $tmp1901;
        if (((panda$core$Bit) { dc1898 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1902 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1902->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1902->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1902, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        dc1898 = $tmp1902;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1906 = (($fn1905) self->$class->vtable[56])(self);
    a1904 = $tmp1906;
    if (((panda$core$Bit) { a1904 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1909 = (($fn1908) self->$class->vtable[6])(self);
        $match$689811907 = $tmp1909.kind;
        panda$core$Bit $tmp1910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689811907, ((panda$core$Int64) { 17 }));
        if ($tmp1910.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1912 = (($fn1911) self->$class->vtable[65])(self, dc1898, a1904);
            return $tmp1912;
        }
        }
        else {
        panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689811907, ((panda$core$Int64) { 18 }));
        if ($tmp1913.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1915 = (($fn1914) self->$class->vtable[66])(self, dc1898, a1904);
            return $tmp1915;
        }
        }
        else {
        panda$core$Bit $tmp1917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689811907, ((panda$core$Int64) { 21 }));
        bool $tmp1916 = $tmp1917.value;
        if ($tmp1916) goto $l1918;
        panda$core$Bit $tmp1919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689811907, ((panda$core$Int64) { 20 }));
        $tmp1916 = $tmp1919.value;
        $l1918:;
        panda$core$Bit $tmp1920 = { $tmp1916 };
        if ($tmp1920.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1922 = (($fn1921) self->$class->vtable[61])(self, dc1898, a1904);
            return $tmp1922;
        }
        }
        else {
        panda$core$Bit $tmp1923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689811907, ((panda$core$Int64) { 22 }));
        if ($tmp1923.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1925 = (($fn1924) self->$class->vtable[62])(self, dc1898, a1904);
            return $tmp1925;
        }
        }
        else {
        panda$core$Bit $tmp1929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689811907, ((panda$core$Int64) { 23 }));
        bool $tmp1928 = $tmp1929.value;
        if ($tmp1928) goto $l1930;
        panda$core$Bit $tmp1931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689811907, ((panda$core$Int64) { 24 }));
        $tmp1928 = $tmp1931.value;
        $l1930:;
        panda$core$Bit $tmp1932 = { $tmp1928 };
        bool $tmp1927 = $tmp1932.value;
        if ($tmp1927) goto $l1933;
        panda$core$Bit $tmp1934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689811907, ((panda$core$Int64) { 25 }));
        $tmp1927 = $tmp1934.value;
        $l1933:;
        panda$core$Bit $tmp1935 = { $tmp1927 };
        bool $tmp1926 = $tmp1935.value;
        if ($tmp1926) goto $l1936;
        panda$core$Bit $tmp1937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689811907, ((panda$core$Int64) { 26 }));
        $tmp1926 = $tmp1937.value;
        $l1936:;
        panda$core$Bit $tmp1938 = { $tmp1926 };
        if ($tmp1938.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1940 = (($fn1939) self->$class->vtable[63])(self, dc1898, a1904);
            return $tmp1940;
        }
        }
        else {
        {
            (($fn1942) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1941);
            return NULL;
        }
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1943;
    org$pandalanguage$pandac$parser$Token$nullable start1946;
    org$pandalanguage$pandac$parser$Token$nullable name1950;
    org$pandalanguage$pandac$ASTNode* generics1957;
    org$pandalanguage$pandac$ASTNode* superclass1965;
    org$pandalanguage$pandac$ASTNode* intfs1973;
    panda$collections$Array* members1981;
    org$pandalanguage$pandac$ASTNode* member1988;
    panda$collections$Array* $tmp1944 = (panda$collections$Array*) malloc(40);
    $tmp1944->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1944->refCount.value = 1;
    panda$collections$Array$init($tmp1944);
    children1943 = $tmp1944;
    panda$collections$Array$add$panda$collections$Array$T(children1943, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1943, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1949 = (($fn1948) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1947);
    start1946 = $tmp1949;
    if (((panda$core$Bit) { !start1946.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1953 = (($fn1952) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1951);
    name1950 = $tmp1953;
    if (((panda$core$Bit) { !name1950.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1955 = (($fn1954) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1955.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1956.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1959 = (($fn1958) self->$class->vtable[54])(self);
        generics1957 = $tmp1959;
        if (((panda$core$Bit) { generics1957 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1943, ((panda$core$Object*) generics1957));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1960 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1960->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1960->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1960, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1943, ((panda$core$Object*) $tmp1960));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1963 = (($fn1962) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1963.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1964.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1967 = (($fn1966) self->$class->vtable[32])(self);
        superclass1965 = $tmp1967;
        if (((panda$core$Bit) { superclass1965 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1943, ((panda$core$Object*) superclass1965));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1968 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1968->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1968->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1968, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1943, ((panda$core$Object*) $tmp1968));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1971 = (($fn1970) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1971.kind, ((panda$core$Int64) { 103 }));
    if ($tmp1972.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1975 = (($fn1974) self->$class->vtable[55])(self);
        intfs1973 = $tmp1975;
        if (((panda$core$Bit) { intfs1973 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1943, ((panda$core$Object*) intfs1973));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1976 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1976->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1976->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1976, ((panda$core$Int64) { 139 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1943, ((panda$core$Object*) $tmp1976));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1980 = (($fn1979) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1978);
    if (((panda$core$Bit) { !$tmp1980.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1982 = (panda$collections$Array*) malloc(40);
    $tmp1982->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1982->refCount.value = 1;
    panda$collections$Array$init($tmp1982);
    members1981 = $tmp1982;
    $l1984:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1987 = (($fn1986) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1987.nonnull }).value) goto $l1985;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1990 = (($fn1989) self->$class->vtable[64])(self);
        member1988 = $tmp1990;
        if (((panda$core$Bit) { member1988 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1981, ((panda$core$Object*) member1988));
    }
    goto $l1984;
    $l1985:;
    org$pandalanguage$pandac$ASTNode* $tmp1991 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1991->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1991->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1991, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1946.value).offset, ((panda$collections$ListView*) members1981));
    panda$collections$Array$add$panda$collections$Array$T(children1943, ((panda$core$Object*) $tmp1991));
    org$pandalanguage$pandac$ASTNode* $tmp1993 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1993->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1993->refCount.value = 1;
    panda$core$String* $tmp1996 = (($fn1995) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1950.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1993, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1946.value).offset, ((panda$core$Object*) $tmp1996), ((panda$collections$ListView*) children1943));
    return $tmp1993;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1997;
    org$pandalanguage$pandac$parser$Token$nullable start2000;
    org$pandalanguage$pandac$parser$Token$nullable name2004;
    org$pandalanguage$pandac$ASTNode* generics2011;
    panda$collections$Array* intfs2016;
    org$pandalanguage$pandac$ASTNode* t2021;
    panda$collections$Array* members2035;
    org$pandalanguage$pandac$ASTNode* member2042;
    panda$collections$Array* $tmp1998 = (panda$collections$Array*) malloc(40);
    $tmp1998->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1998->refCount.value = 1;
    panda$collections$Array$init($tmp1998);
    children1997 = $tmp1998;
    panda$collections$Array$add$panda$collections$Array$T(children1997, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1997, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2003 = (($fn2002) self->$class->vtable[8])(self, ((panda$core$Int64) { 18 }), &$s2001);
    start2000 = $tmp2003;
    if (((panda$core$Bit) { !start2000.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp2007 = (($fn2006) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s2005);
    name2004 = $tmp2007;
    if (((panda$core$Bit) { !name2004.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2009 = (($fn2008) self->$class->vtable[6])(self);
    panda$core$Bit $tmp2010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2009.kind, ((panda$core$Int64) { 62 }));
    if ($tmp2010.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2013 = (($fn2012) self->$class->vtable[54])(self);
        generics2011 = $tmp2013;
        if (((panda$core$Bit) { generics2011 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1997, ((panda$core$Object*) generics2011));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2014 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp2014->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2014->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp2014, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1997, ((panda$core$Object*) $tmp2014));
    }
    }
    panda$collections$Array* $tmp2017 = (panda$collections$Array*) malloc(40);
    $tmp2017->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2017->refCount.value = 1;
    panda$collections$Array$init($tmp2017);
    intfs2016 = $tmp2017;
    org$pandalanguage$pandac$parser$Token$nullable $tmp2020 = (($fn2019) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp2020.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2023 = (($fn2022) self->$class->vtable[20])(self);
        t2021 = $tmp2023;
        if (((panda$core$Bit) { t2021 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs2016, ((panda$core$Object*) t2021));
        $l2024:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp2027 = (($fn2026) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp2027.nonnull }).value) goto $l2025;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2029 = (($fn2028) self->$class->vtable[20])(self);
            t2021 = $tmp2029;
            if (((panda$core$Bit) { t2021 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs2016, ((panda$core$Object*) t2021));
        }
        goto $l2024;
        $l2025:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2030 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp2030->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2030->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2030, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start2000.value).offset, ((panda$collections$ListView*) intfs2016));
    panda$collections$Array$add$panda$collections$Array$T(children1997, ((panda$core$Object*) $tmp2030));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2034 = (($fn2033) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s2032);
    if (((panda$core$Bit) { !$tmp2034.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp2036 = (panda$collections$Array*) malloc(40);
    $tmp2036->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2036->refCount.value = 1;
    panda$collections$Array$init($tmp2036);
    members2035 = $tmp2036;
    $l2038:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp2041 = (($fn2040) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp2041.nonnull }).value) goto $l2039;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2044 = (($fn2043) self->$class->vtable[64])(self);
        member2042 = $tmp2044;
        if (((panda$core$Bit) { member2042 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2035, ((panda$core$Object*) member2042));
    }
    goto $l2038;
    $l2039:;
    org$pandalanguage$pandac$ASTNode* $tmp2045 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp2045->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2045->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2045, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start2000.value).offset, ((panda$collections$ListView*) members2035));
    panda$collections$Array$add$panda$collections$Array$T(children1997, ((panda$core$Object*) $tmp2045));
    org$pandalanguage$pandac$ASTNode* $tmp2047 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp2047->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2047->refCount.value = 1;
    panda$core$String* $tmp2050 = (($fn2049) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name2004.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2047, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start2000.value).offset, ((panda$core$Object*) $tmp2050), ((panda$collections$ListView*) children1997));
    return $tmp2047;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $match$742962051;
    {
        org$pandalanguage$pandac$parser$Token $tmp2053 = (($fn2052) self->$class->vtable[6])(self);
        $match$742962051 = $tmp2053.kind;
        panda$core$Bit $tmp2054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742962051, ((panda$core$Int64) { 15 }));
        if ($tmp2054.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2056 = (($fn2055) self->$class->vtable[53])(self);
            return $tmp2056;
        }
        }
        else {
        panda$core$Bit $tmp2057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742962051, ((panda$core$Int64) { 14 }));
        if ($tmp2057.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2059 = (($fn2058) self->$class->vtable[52])(self);
            return $tmp2059;
        }
        }
        else {
        panda$core$Bit $tmp2066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742962051, ((panda$core$Int64) { 17 }));
        bool $tmp2065 = $tmp2066.value;
        if ($tmp2065) goto $l2067;
        panda$core$Bit $tmp2068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742962051, ((panda$core$Int64) { 18 }));
        $tmp2065 = $tmp2068.value;
        $l2067:;
        panda$core$Bit $tmp2069 = { $tmp2065 };
        bool $tmp2064 = $tmp2069.value;
        if ($tmp2064) goto $l2070;
        panda$core$Bit $tmp2071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742962051, ((panda$core$Int64) { 19 }));
        $tmp2064 = $tmp2071.value;
        $l2070:;
        panda$core$Bit $tmp2072 = { $tmp2064 };
        bool $tmp2063 = $tmp2072.value;
        if ($tmp2063) goto $l2073;
        panda$core$Bit $tmp2074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742962051, ((panda$core$Int64) { 21 }));
        $tmp2063 = $tmp2074.value;
        $l2073:;
        panda$core$Bit $tmp2075 = { $tmp2063 };
        bool $tmp2062 = $tmp2075.value;
        if ($tmp2062) goto $l2076;
        panda$core$Bit $tmp2077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742962051, ((panda$core$Int64) { 20 }));
        $tmp2062 = $tmp2077.value;
        $l2076:;
        panda$core$Bit $tmp2078 = { $tmp2062 };
        bool $tmp2061 = $tmp2078.value;
        if ($tmp2061) goto $l2079;
        panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742962051, ((panda$core$Int64) { 13 }));
        $tmp2061 = $tmp2080.value;
        $l2079:;
        panda$core$Bit $tmp2081 = { $tmp2061 };
        bool $tmp2060 = $tmp2081.value;
        if ($tmp2060) goto $l2082;
        panda$core$Bit $tmp2083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742962051, ((panda$core$Int64) { 11 }));
        $tmp2060 = $tmp2083.value;
        $l2082:;
        panda$core$Bit $tmp2084 = { $tmp2060 };
        if ($tmp2084.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2086 = (($fn2085) self->$class->vtable[64])(self);
            return $tmp2086;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2088 = (($fn2087) self->$class->vtable[51])(self);
            return $tmp2088;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2089;
    org$pandalanguage$pandac$ASTNode* entry2097;
    panda$collections$Array* $tmp2090 = (panda$collections$Array*) malloc(40);
    $tmp2090->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2090->refCount.value = 1;
    panda$collections$Array$init($tmp2090);
    entries2089 = $tmp2090;
    $l2092:;
    org$pandalanguage$pandac$parser$Token $tmp2095 = (($fn2094) self->$class->vtable[6])(self);
    panda$core$Bit $tmp2096 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2095.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp2096.value) goto $l2093;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2099 = (($fn2098) self->$class->vtable[67])(self);
        entry2097 = $tmp2099;
        if (((panda$core$Bit) { entry2097 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(entries2089, ((panda$core$Object*) entry2097));
    }
    goto $l2092;
    $l2093:;
    org$pandalanguage$pandac$ASTNode* $tmp2100 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp2100->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2100->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2100, ((panda$core$Int64) { 152 }), ((panda$core$Int64) { 0 }), ((panda$collections$ListView*) entries2089));
    return $tmp2100;
}

