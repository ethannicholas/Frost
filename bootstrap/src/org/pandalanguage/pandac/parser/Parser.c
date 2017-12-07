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
#include "panda/core/SpecializedRange.LTpanda/core/Int64.GT.h"
#include "panda/io/LineNumberInputStream.h"
#include "panda/io/MemoryInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/SpecializedRange.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/UInt64.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/SpecializedRange.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/ImmutableArray.h"


org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$core$String$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$position$org$pandalanguage$pandac$parser$Token$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaces$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn9)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn10)(org$pandalanguage$pandac$parser$Lexer*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn19)(org$pandalanguage$pandac$parser$Lexer*);
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
typedef org$pandalanguage$pandac$parser$Token (*$fn166)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn174)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn179)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn187)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn193)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn198)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef void (*$fn199)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn202)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn205)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn209)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn211)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Object* (*$fn217)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn224)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn228)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn232)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn236)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn240)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn244)(panda$core$MutableString*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn248)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn251)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn255)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn257)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn259)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn260)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn263)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef void (*$fn268)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn269)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn271)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn274)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn276)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn283)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn289)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn295)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$parser$Token (*$fn317)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn323)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn328)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn333)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn339)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef panda$core$String* (*$fn343)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn349)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef void (*$fn371)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn372)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn376)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn379)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn382)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn387)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$Object* (*$fn392)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn399)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn487)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn491)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn495)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn499)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn501)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn506)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn511)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn512)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn516)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn521)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn525)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn529)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn532)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn533)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn535)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn539)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$parser$Token (*$fn541)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn544)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn545)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn550)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn552)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn555)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn557)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn559)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn561)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn563)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn566)(panda$core$MutableString*);
typedef void (*$fn568)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn569)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn577)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn582)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn586)(panda$collections$Stack*, panda$core$Object*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn590)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn593)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Object* (*$fn595)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn598)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn600)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Object* (*$fn602)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn604)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn606)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn607)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn615)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn618)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn624)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn627)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn636)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn644)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn651)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn652)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn653)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn660)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn662)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn663)(panda$core$MutableString*, panda$core$Object*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn666)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn668)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn670)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn672)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn673)(panda$core$MutableString*, panda$core$Object*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn675)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn677)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn679)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn681)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token (*$fn684)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn699)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn702)(panda$core$MutableString*);
typedef void (*$fn704)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn705)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn707)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn712)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn715)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn723)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn736)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn743)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn744)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn747)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn752)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn781)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn790)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn794)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn801)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn802)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn803)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn805)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn810)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn823)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn830)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn833)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn842)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn845)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn854)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn866)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn871)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn873)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn884)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn886)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn891)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn924)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn931)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn933)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn938)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn947)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn954)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn956)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn961)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn964)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn973)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn976)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn982)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn984)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn986)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn990)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn993)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn998)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1000)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1004)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1006)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1010)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1017)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn1021)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1025)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1028)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1031)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1034)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1037)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1046)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1049)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1052)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1061)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1064)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1067)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1070)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1079)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1082)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1091)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1094)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1099)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1102)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1108)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1114)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1118)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1120)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1128)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1133)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1154)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1157)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1163)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1169)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1172)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1177)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1183)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1187)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1190)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1198)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1211)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1214)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1218)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1221)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn1227)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1229)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1235)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1243)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1246)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1257)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1260)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1263)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1268)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1271)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1335)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1338)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1346)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1349)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1351)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1354)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1365)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1367)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1370)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1372)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1375)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1378)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1380)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1385)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1394)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1399)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1403)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1406)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1412)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1415)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn1417)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$String* (*$fn1423)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1425)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1428)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Object* (*$fn1430)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1433)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1435)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$Object* (*$fn1437)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1439)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn1441)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1442)(panda$collections$Stack*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1447)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1450)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1454)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1460)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1463)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1467)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1473)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1476)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1493)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1498)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1501)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1504)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1507)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1510)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1513)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1516)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1519)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1522)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1525)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1527)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1530)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1533)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1536)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1539)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1542)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1545)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1548)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1551)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1555)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1557)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1559)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1561)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef void (*$fn1563)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1564)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1571)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1586)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1589)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1592)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1595)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1599)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1604)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1608)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef void (*$fn1611)(panda$core$MutableString*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1613)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1615)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn1617)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1620)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1624)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1628)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1633)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1637)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef void (*$fn1640)(panda$core$MutableString*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1642)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1644)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn1646)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1649)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1653)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1657)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1665)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1668)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1672)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1676)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1679)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1681)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1684)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1688)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1691)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1697)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1703)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1707)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1709)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1712)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1722)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1726)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1732)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1740)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1745)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn1746)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn1748)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1751)(panda$core$MutableString*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1755)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1758)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1765)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1769)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1774)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1777)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1781)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1783)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1786)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1792)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1795)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1798)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1804)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1806)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1810)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1814)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1818)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1823)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1826)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1840)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1848)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1854)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1857)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1860)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1863)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1877)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1884)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1892)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1896)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1901)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1904)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1907)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1910)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1917)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1920)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1935)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1938)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1944)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1948)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1950)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1954)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1958)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1962)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1966)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1970)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1975)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1982)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1985)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1991)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1998)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn2002)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn2004)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2008)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn2015)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2018)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn2022)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2024)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn2029)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn2036)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2039)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn2045)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn2048)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2051)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2054)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2081)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2083)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn2090)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2094)(org$pandalanguage$pandac$parser$Parser*);

static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 20, 1 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 13, 1 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6E\x67\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E", 1, 1 };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72", 1, 1 };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0D", 1, 1 };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74", 1, 1 };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x09", 1, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 1 };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6E\x63\x65", 30, 1 };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, 1 };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1 };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72\x20\x6F\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 47, 1 };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1 };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 1 };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5, 1 };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4, 1 };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4, 1 };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6, 1 };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 1 };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6, 1 };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7, 1 };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42, 1 };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7, 1 };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39, 1 };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1 };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7, 1 };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10, 1 };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8, 1 };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47, 1 };
static panda$core$String $s1591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11, 1 };
static panda$core$String $s1594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9, 1 };
static panda$core$String $s1598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1 };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3, 1 };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 23, 1 };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 34, 1 };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x65\x74\x68\x6F\x64\x27\x20\x6F\x72\x20\x27\x66\x75\x6E\x63\x74\x69\x6F\x6E\x27", 22, 1 };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 1 };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 1 };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1 };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 1 };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 1 };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E", 13, 1 };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6C\x61\x73\x73\x27", 7, 1 };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11, 1 };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };

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
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp85;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp86 = panda$collections$Array$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp87 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp86, ((panda$core$Int64) { 1 }));
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp85, $tmp87, ((panda$core$Int64) { 0 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { true }));
    int64_t $tmp89 = $tmp85.start.value;
    panda$core$Int64 i88 = { $tmp89 };
    int64_t $tmp91 = $tmp85.end.value;
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
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp123;
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
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp123, ((panda$core$Int64) { 0 }), p_token.offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp125 = $tmp123.start.value;
    panda$core$Int64 i124 = { $tmp125 };
    int64_t $tmp127 = $tmp123.end.value;
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
    panda$core$String* $tmp158 = (panda$core$String*) malloc(33);
    $tmp158->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp158->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp158, (self->source->data + p_token.offset.value), p_token.length, ((panda$core$Bit) { false }));
    return $tmp158;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    panda$collections$Array* children160;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    panda$collections$Array* $tmp161 = (panda$collections$Array*) malloc(40);
    $tmp161->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp161->refCount.value = 1;
    panda$collections$Array$init($tmp161);
    children160 = $tmp161;
    panda$collections$Array$add$panda$collections$Array$T(children160, ((panda$core$Object*) p_string));
    panda$collections$Array$add$panda$collections$Array$T(children160, ((panda$core$Object*) p_chunk));
    org$pandalanguage$pandac$ASTNode* $tmp163 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp163->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp163->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp163, ((panda$core$Int64) { 103 }), p_string->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 51 }))), ((panda$collections$ListView*) children160));
    return $tmp163;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start165;
    org$pandalanguage$pandac$ASTNode* result180;
    panda$core$MutableString* chunk181;
    org$pandalanguage$pandac$parser$Token token186;
    panda$core$Int64 $match$4913190;
    panda$core$String* str192;
    org$pandalanguage$pandac$parser$Token escape204;
    panda$core$String* escapeText210;
    panda$core$Char8 c213;
    panda$core$String* $match$5748219;
    org$pandalanguage$pandac$ASTNode* expr247;
    panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT $tmp264;
    org$pandalanguage$pandac$parser$Token $tmp167 = (($fn166) self->$class->vtable[4])(self);
    start165 = $tmp167;
    panda$core$Bit $tmp169 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start165.kind, ((panda$core$Int64) { 7 }));
    bool $tmp168 = $tmp169.value;
    if (!$tmp168) goto $l170;
    panda$core$Bit $tmp171 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start165.kind, ((panda$core$Int64) { 6 }));
    $tmp168 = $tmp171.value;
    $l170:;
    panda$core$Bit $tmp172 = { $tmp168 };
    if ($tmp172.value) {
    {
        panda$core$String* $tmp175 = (($fn174) self->$class->vtable[14])(self, start165);
        panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s173, $tmp175);
        panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s177);
        (($fn179) self->$class->vtable[9])(self, start165, $tmp178);
        return NULL;
    }
    }
    result180 = NULL;
    panda$core$MutableString* $tmp182 = (panda$core$MutableString*) malloc(40);
    $tmp182->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp182->refCount.value = 1;
    panda$core$MutableString$init($tmp182);
    chunk181 = $tmp182;
    $l184:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp188 = (($fn187) self->$class->vtable[3])(self);
        token186 = $tmp188;
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token186.kind, start165.kind);
        if ($tmp189.value) {
        {
            goto $l185;
        }
        }
        {
            $match$4913190 = token186.kind;
            panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4913190, ((panda$core$Int64) { 12 }));
            if ($tmp191.value) {
            {
                panda$core$String* $tmp194 = (($fn193) self->$class->vtable[14])(self, token186);
                str192 = $tmp194;
                panda$core$Bit $tmp196 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(str192, &$s195);
                if ($tmp196.value) {
                {
                    (($fn198) self->$class->vtable[9])(self, start165, &$s197);
                    return NULL;
                }
                }
                (($fn199) chunk181->$class->vtable[3])(chunk181, str192);
            }
            }
            else {
            panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4913190, ((panda$core$Int64) { 0 }));
            if ($tmp200.value) {
            {
                (($fn202) self->$class->vtable[9])(self, start165, &$s201);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4913190, ((panda$core$Int64) { 106 }));
            if ($tmp203.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp206 = (($fn205) self->$class->vtable[3])(self);
                escape204 = $tmp206;
                panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape204.kind, ((panda$core$Int64) { 0 }));
                if ($tmp207.value) {
                {
                    (($fn209) self->$class->vtable[9])(self, start165, &$s208);
                    return NULL;
                }
                }
                panda$core$String* $tmp212 = (($fn211) self->$class->vtable[14])(self, escape204);
                escapeText210 = $tmp212;
                panda$collections$ListView* $tmp214 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText210);
                ITable* $tmp215 = $tmp214->$class->itable;
                while ($tmp215->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp215 = $tmp215->next;
                }
                $fn217 $tmp216 = $tmp215->methods[0];
                panda$core$Object* $tmp218 = $tmp216($tmp214, ((panda$core$Int64) { 0 }));
                c213 = ((panda$core$Char8$wrapper*) $tmp218)->value;
                {
                    panda$core$String* $tmp220 = panda$core$Char8$convert$R$panda$core$String(c213);
                    $match$5748219 = $tmp220;
                    panda$core$Bit $tmp222 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748219, &$s221);
                    if ($tmp222.value) {
                    {
                        (($fn224) chunk181->$class->vtable[3])(chunk181, &$s223);
                    }
                    }
                    else {
                    panda$core$Bit $tmp226 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748219, &$s225);
                    if ($tmp226.value) {
                    {
                        (($fn228) chunk181->$class->vtable[3])(chunk181, &$s227);
                    }
                    }
                    else {
                    panda$core$Bit $tmp230 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748219, &$s229);
                    if ($tmp230.value) {
                    {
                        (($fn232) chunk181->$class->vtable[3])(chunk181, &$s231);
                    }
                    }
                    else {
                    panda$core$Bit $tmp234 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748219, &$s233);
                    if ($tmp234.value) {
                    {
                        (($fn236) chunk181->$class->vtable[3])(chunk181, &$s235);
                    }
                    }
                    else {
                    panda$core$Bit $tmp238 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748219, &$s237);
                    if ($tmp238.value) {
                    {
                        (($fn240) chunk181->$class->vtable[3])(chunk181, &$s239);
                    }
                    }
                    else {
                    panda$core$Bit $tmp242 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748219, &$s241);
                    if ($tmp242.value) {
                    {
                        (($fn244) chunk181->$class->vtable[3])(chunk181, &$s243);
                    }
                    }
                    else {
                    panda$core$Bit $tmp246 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748219, &$s245);
                    if ($tmp246.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp249 = (($fn248) self->$class->vtable[30])(self);
                            expr247 = $tmp249;
                            if (((panda$core$Bit) { expr247 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp252 = (($fn251) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s250);
                            if (((panda$core$Bit) { !$tmp252.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp253 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                            $tmp253->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                            $tmp253->refCount.value = 1;
                            panda$core$String* $tmp256 = (($fn255) chunk181->$class->vtable[0])(chunk181);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp253, ((panda$core$Int64) { 113 }), start165.offset, $tmp256);
                            org$pandalanguage$pandac$ASTNode* $tmp258 = (($fn257) self->$class->vtable[15])(self, result180, $tmp253);
                            result180 = $tmp258;
                            (($fn259) chunk181->$class->vtable[7])(chunk181);
                            org$pandalanguage$pandac$ASTNode* $tmp261 = (($fn260) self->$class->vtable[15])(self, result180, expr247);
                            result180 = $tmp261;
                        }
                    }
                    }
                    else {
                    {
                        (($fn263) self->$class->vtable[9])(self, token186, &$s262);
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
                panda$core$String$Index $tmp265 = panda$core$String$start$R$panda$core$String$Index(escapeText210);
                panda$core$String$Index $tmp266 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText210, $tmp265);
                panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp264, ((panda$core$String$Index$nullable) { $tmp266, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp267 = panda$core$String$$IDX$panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText210, $tmp264);
                (($fn268) chunk181->$class->vtable[3])(chunk181, $tmp267);
            }
            }
            else {
            {
                panda$core$String* $tmp270 = (($fn269) self->$class->vtable[14])(self, token186);
                (($fn271) chunk181->$class->vtable[3])(chunk181, $tmp270);
            }
            }
            }
            }
        }
    }
    }
    $l185:;
    org$pandalanguage$pandac$ASTNode* $tmp272 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp272->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp272->refCount.value = 1;
    panda$core$String* $tmp275 = (($fn274) chunk181->$class->vtable[0])(chunk181);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp272, ((panda$core$Int64) { 113 }), start165.offset, $tmp275);
    org$pandalanguage$pandac$ASTNode* $tmp277 = (($fn276) self->$class->vtable[15])(self, result180, $tmp272);
    return $tmp277;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result278;
    panda$collections$Iterator* c$Iter279;
    panda$core$Char8 c292;
    panda$core$UInt64 i298;
    result278 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp280 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp281 = ((panda$collections$Iterable*) $tmp280)->$class->itable;
        while ($tmp281->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp281 = $tmp281->next;
        }
        $fn283 $tmp282 = $tmp281->methods[0];
        panda$collections$Iterator* $tmp284 = $tmp282(((panda$collections$Iterable*) $tmp280));
        c$Iter279 = $tmp284;
        $l285:;
        ITable* $tmp287 = c$Iter279->$class->itable;
        while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp287 = $tmp287->next;
        }
        $fn289 $tmp288 = $tmp287->methods[0];
        panda$core$Bit $tmp290 = $tmp288(c$Iter279);
        panda$core$Bit $tmp291 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp290);
        if (!$tmp291.value) goto $l286;
        {
            ITable* $tmp293 = c$Iter279->$class->itable;
            while ($tmp293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp293 = $tmp293->next;
            }
            $fn295 $tmp294 = $tmp293->methods[1];
            panda$core$Object* $tmp296 = $tmp294(c$Iter279);
            c292 = ((panda$core$Char8$wrapper*) $tmp296)->value;
            panda$core$UInt64 $tmp297 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result278, p_base);
            result278 = $tmp297;
            panda$core$UInt64 $tmp299 = panda$core$Char8$convert$R$panda$core$UInt64(c292);
            i298 = $tmp299;
            panda$core$Bit $tmp301 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i298, ((panda$core$UInt64) { 48 }));
            bool $tmp300 = $tmp301.value;
            if (!$tmp300) goto $l302;
            panda$core$Bit $tmp303 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i298, ((panda$core$UInt64) { 57 }));
            $tmp300 = $tmp303.value;
            $l302:;
            panda$core$Bit $tmp304 = { $tmp300 };
            if ($tmp304.value) {
            {
                panda$core$UInt64 $tmp305 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i298, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp306 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result278, $tmp305);
                result278 = $tmp306;
            }
            }
            else {
            panda$core$Bit $tmp308 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i298, ((panda$core$UInt64) { 65 }));
            bool $tmp307 = $tmp308.value;
            if (!$tmp307) goto $l309;
            panda$core$Bit $tmp310 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i298, ((panda$core$UInt64) { 70 }));
            $tmp307 = $tmp310.value;
            $l309:;
            panda$core$Bit $tmp311 = { $tmp307 };
            if ($tmp311.value) {
            {
                panda$core$UInt64 $tmp312 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i298, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp313 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result278, $tmp312);
                result278 = $tmp313;
            }
            }
            else {
            {
                panda$core$UInt64 $tmp314 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i298, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp315 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result278, $tmp314);
                result278 = $tmp315;
            }
            }
            }
        }
        goto $l285;
        $l286:;
    }
    return result278;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t316;
    panda$core$Int64 $match$8156319;
    panda$core$String* s332;
    panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT $tmp337;
    panda$core$String* s342;
    panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT $tmp347;
    org$pandalanguage$pandac$ASTNode* result375;
    org$pandalanguage$pandac$parser$Token $tmp318 = (($fn317) self->$class->vtable[4])(self);
    t316 = $tmp318;
    {
        $match$8156319 = t316.kind;
        panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 48 }));
        if ($tmp320.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp321 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp321->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp321->refCount.value = 1;
            panda$core$String* $tmp324 = (($fn323) self->$class->vtable[14])(self, t316);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp321, ((panda$core$Int64) { 106 }), t316.offset, $tmp324);
            return $tmp321;
        }
        }
        else {
        panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 2 }));
        if ($tmp325.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp326 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp326->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp326->refCount.value = 1;
            panda$core$String* $tmp329 = (($fn328) self->$class->vtable[14])(self, t316);
            panda$core$UInt64$nullable $tmp330 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp329);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp326, ((panda$core$Int64) { 102 }), t316.offset, ((panda$core$UInt64) $tmp330.value));
            return $tmp326;
        }
        }
        else {
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 3 }));
        if ($tmp331.value) {
        {
            panda$core$String* $tmp334 = (($fn333) self->$class->vtable[14])(self, t316);
            s332 = $tmp334;
            org$pandalanguage$pandac$ASTNode* $tmp335 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp335->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp335->refCount.value = 1;
            panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp337, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp338 = panda$core$String$$IDX$panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$R$panda$core$String(s332, $tmp337);
            panda$core$UInt64 $tmp340 = (($fn339) self->$class->vtable[17])(self, $tmp338, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp335, ((panda$core$Int64) { 102 }), t316.offset, $tmp340);
            return $tmp335;
        }
        }
        else {
        panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 4 }));
        if ($tmp341.value) {
        {
            panda$core$String* $tmp344 = (($fn343) self->$class->vtable[14])(self, t316);
            s342 = $tmp344;
            org$pandalanguage$pandac$ASTNode* $tmp345 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp345->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp345->refCount.value = 1;
            panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp347, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp348 = panda$core$String$$IDX$panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$R$panda$core$String(s342, $tmp347);
            panda$core$UInt64 $tmp350 = (($fn349) self->$class->vtable[17])(self, $tmp348, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp345, ((panda$core$Int64) { 102 }), t316.offset, $tmp350);
            return $tmp345;
        }
        }
        else {
        panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 46 }));
        if ($tmp351.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp352 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp352->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp352->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp352, ((panda$core$Int64) { 114 }), t316.offset);
            return $tmp352;
        }
        }
        else {
        panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 47 }));
        if ($tmp354.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp355 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp355->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp355->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp355, ((panda$core$Int64) { 115 }), t316.offset);
            return $tmp355;
        }
        }
        else {
        panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 43 }));
        if ($tmp357.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp358 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp358->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp358->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp358, ((panda$core$Int64) { 117 }), t316.offset);
            return $tmp358;
        }
        }
        else {
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 41 }));
        if ($tmp360.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp361 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp361->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp361->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp361, ((panda$core$Int64) { 116 }), t316.offset, ((panda$core$Bit) { true }));
            return $tmp361;
        }
        }
        else {
        panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 42 }));
        if ($tmp363.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp364 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp364->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp364->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp364, ((panda$core$Int64) { 116 }), t316.offset, ((panda$core$Bit) { false }));
            return $tmp364;
        }
        }
        else {
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 7 }));
        bool $tmp366 = $tmp367.value;
        if ($tmp366) goto $l368;
        panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 6 }));
        $tmp366 = $tmp369.value;
        $l368:;
        panda$core$Bit $tmp370 = { $tmp366 };
        if ($tmp370.value) {
        {
            (($fn371) self->$class->vtable[5])(self, t316);
            org$pandalanguage$pandac$ASTNode* $tmp373 = (($fn372) self->$class->vtable[16])(self);
            return $tmp373;
        }
        }
        else {
        panda$core$Bit $tmp374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156319, ((panda$core$Int64) { 103 }));
        if ($tmp374.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp377 = (($fn376) self->$class->vtable[30])(self);
            result375 = $tmp377;
            if (((panda$core$Bit) { result375 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp380 = (($fn379) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s378);
            if (((panda$core$Bit) { !$tmp380.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result375;
        }
        }
        else {
        {
            panda$core$String* $tmp383 = (($fn382) self->$class->vtable[14])(self, t316);
            panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s381, $tmp383);
            panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp384, &$s385);
            (($fn387) self->$class->vtable[9])(self, t316, $tmp386);
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
    panda$core$Int64 $match$9882388;
    panda$core$String* result391;
    {
        $match$9882388 = p_expr->kind;
        panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$9882388, ((panda$core$Int64) { 106 }));
        if ($tmp389.value) {
        {
            return ((panda$core$String*) p_expr->payload);
        }
        }
        else {
        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$9882388, ((panda$core$Int64) { 108 }));
        if ($tmp390.value) {
        {
            panda$core$Object* $tmp393 = (($fn392) p_expr->children->$class->vtable[2])(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp394 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp393));
            result391 = $tmp394;
            if (((panda$core$Bit) { result391 != NULL }).value) {
            {
                panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s395, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result391, $tmp396);
                result391 = $tmp397;
            }
            }
            return result391;
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
    org$pandalanguage$pandac$parser$Token name398;
    panda$core$Int64 $match$10821401;
    org$pandalanguage$pandac$parser$Token token490;
    org$pandalanguage$pandac$parser$Token $tmp400 = (($fn399) self->$class->vtable[4])(self);
    name398 = $tmp400;
    {
        $match$10821401 = name398.kind;
        panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 48 }));
        bool $tmp422 = $tmp423.value;
        if ($tmp422) goto $l424;
        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 51 }));
        $tmp422 = $tmp425.value;
        $l424:;
        panda$core$Bit $tmp426 = { $tmp422 };
        bool $tmp421 = $tmp426.value;
        if ($tmp421) goto $l427;
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 52 }));
        $tmp421 = $tmp428.value;
        $l427:;
        panda$core$Bit $tmp429 = { $tmp421 };
        bool $tmp420 = $tmp429.value;
        if ($tmp420) goto $l430;
        panda$core$Bit $tmp431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 53 }));
        $tmp420 = $tmp431.value;
        $l430:;
        panda$core$Bit $tmp432 = { $tmp420 };
        bool $tmp419 = $tmp432.value;
        if ($tmp419) goto $l433;
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 54 }));
        $tmp419 = $tmp434.value;
        $l433:;
        panda$core$Bit $tmp435 = { $tmp419 };
        bool $tmp418 = $tmp435.value;
        if ($tmp418) goto $l436;
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 55 }));
        $tmp418 = $tmp437.value;
        $l436:;
        panda$core$Bit $tmp438 = { $tmp418 };
        bool $tmp417 = $tmp438.value;
        if ($tmp417) goto $l439;
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 57 }));
        $tmp417 = $tmp440.value;
        $l439:;
        panda$core$Bit $tmp441 = { $tmp417 };
        bool $tmp416 = $tmp441.value;
        if ($tmp416) goto $l442;
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 58 }));
        $tmp416 = $tmp443.value;
        $l442:;
        panda$core$Bit $tmp444 = { $tmp416 };
        bool $tmp415 = $tmp444.value;
        if ($tmp415) goto $l445;
        panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 59 }));
        $tmp415 = $tmp446.value;
        $l445:;
        panda$core$Bit $tmp447 = { $tmp415 };
        bool $tmp414 = $tmp447.value;
        if ($tmp414) goto $l448;
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 62 }));
        $tmp414 = $tmp449.value;
        $l448:;
        panda$core$Bit $tmp450 = { $tmp414 };
        bool $tmp413 = $tmp450.value;
        if ($tmp413) goto $l451;
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 65 }));
        $tmp413 = $tmp452.value;
        $l451:;
        panda$core$Bit $tmp453 = { $tmp413 };
        bool $tmp412 = $tmp453.value;
        if ($tmp412) goto $l454;
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 64 }));
        $tmp412 = $tmp455.value;
        $l454:;
        panda$core$Bit $tmp456 = { $tmp412 };
        bool $tmp411 = $tmp456.value;
        if ($tmp411) goto $l457;
        panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 56 }));
        $tmp411 = $tmp458.value;
        $l457:;
        panda$core$Bit $tmp459 = { $tmp411 };
        bool $tmp410 = $tmp459.value;
        if ($tmp410) goto $l460;
        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 66 }));
        $tmp410 = $tmp461.value;
        $l460:;
        panda$core$Bit $tmp462 = { $tmp410 };
        bool $tmp409 = $tmp462.value;
        if ($tmp409) goto $l463;
        panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 67 }));
        $tmp409 = $tmp464.value;
        $l463:;
        panda$core$Bit $tmp465 = { $tmp409 };
        bool $tmp408 = $tmp465.value;
        if ($tmp408) goto $l466;
        panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 68 }));
        $tmp408 = $tmp467.value;
        $l466:;
        panda$core$Bit $tmp468 = { $tmp408 };
        bool $tmp407 = $tmp468.value;
        if ($tmp407) goto $l469;
        panda$core$Bit $tmp470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 69 }));
        $tmp407 = $tmp470.value;
        $l469:;
        panda$core$Bit $tmp471 = { $tmp407 };
        bool $tmp406 = $tmp471.value;
        if ($tmp406) goto $l472;
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 70 }));
        $tmp406 = $tmp473.value;
        $l472:;
        panda$core$Bit $tmp474 = { $tmp406 };
        bool $tmp405 = $tmp474.value;
        if ($tmp405) goto $l475;
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 71 }));
        $tmp405 = $tmp476.value;
        $l475:;
        panda$core$Bit $tmp477 = { $tmp405 };
        bool $tmp404 = $tmp477.value;
        if ($tmp404) goto $l478;
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 49 }));
        $tmp404 = $tmp479.value;
        $l478:;
        panda$core$Bit $tmp480 = { $tmp404 };
        bool $tmp403 = $tmp480.value;
        if ($tmp403) goto $l481;
        panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 50 }));
        $tmp403 = $tmp482.value;
        $l481:;
        panda$core$Bit $tmp483 = { $tmp403 };
        bool $tmp402 = $tmp483.value;
        if ($tmp402) goto $l484;
        panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 72 }));
        $tmp402 = $tmp485.value;
        $l484:;
        panda$core$Bit $tmp486 = { $tmp402 };
        if ($tmp486.value) {
        {
            panda$core$String* $tmp488 = (($fn487) self->$class->vtable[14])(self, name398);
            return $tmp488;
        }
        }
        else {
        panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 63 }));
        if ($tmp489.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp492 = (($fn491) self->$class->vtable[3])(self);
            token490 = $tmp492;
            panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token490.kind, ((panda$core$Int64) { 63 }));
            if ($tmp493.value) {
            {
                return &$s494;
            }
            }
            else {
            {
                (($fn495) self->$class->vtable[5])(self, token490);
                return &$s496;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821401, ((panda$core$Int64) { 101 }));
        if ($tmp497.value) {
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp500 = (($fn499) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s498);
            if (((panda$core$Bit) { !$tmp500.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp502 = (($fn501) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp502.nonnull }).value) {
            {
                return &$s503;
            }
            }
            return &$s504;
        }
        }
        else {
        {
            panda$core$String* $tmp507 = (($fn506) self->$class->vtable[14])(self, name398);
            panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s505, $tmp507);
            panda$core$String* $tmp510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp508, &$s509);
            (($fn511) self->$class->vtable[9])(self, name398, $tmp510);
            return NULL;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp513 = (($fn512) self->$class->vtable[21])(self, ((panda$core$Bit) { true }));
    return $tmp513;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start514;
    panda$core$MutableString* name518;
    org$pandalanguage$pandac$parser$Token$nullable id527;
    org$pandalanguage$pandac$ASTNode* result536;
    panda$collections$Array* children546;
    org$pandalanguage$pandac$ASTNode* t549;
    panda$collections$Array* children571;
    org$pandalanguage$pandac$parser$Token$nullable $tmp517 = (($fn516) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s515);
    start514 = $tmp517;
    if (((panda$core$Bit) { !start514.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp519 = (panda$core$MutableString*) malloc(40);
    $tmp519->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp519->refCount.value = 1;
    panda$core$String* $tmp522 = (($fn521) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start514.value));
    panda$core$MutableString$init$panda$core$String($tmp519, $tmp522);
    name518 = $tmp519;
    $l523:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp526 = (($fn525) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp526.nonnull }).value) goto $l524;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp530 = (($fn529) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s528);
        id527 = $tmp530;
        if (((panda$core$Bit) { !id527.nonnull }).value) {
        {
            return NULL;
        }
        }
        (($fn532) name518->$class->vtable[3])(name518, &$s531);
        panda$core$String* $tmp534 = (($fn533) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id527.value));
        (($fn535) name518->$class->vtable[3])(name518, $tmp534);
    }
    goto $l523;
    $l524:;
    org$pandalanguage$pandac$ASTNode* $tmp537 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp537->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp537->refCount.value = 1;
    panda$core$String* $tmp540 = (($fn539) name518->$class->vtable[0])(name518);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp537, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start514.value).offset, $tmp540);
    result536 = $tmp537;
    org$pandalanguage$pandac$parser$Token $tmp542 = (($fn541) self->$class->vtable[6])(self);
    panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp542.kind, ((panda$core$Int64) { 62 }));
    if ($tmp543.value) {
    {
        if (p_needSpeculativeParse.value) {
        {
            (($fn544) self->$class->vtable[10])(self);
        }
        }
        (($fn545) self->$class->vtable[4])(self);
        panda$collections$Array* $tmp547 = (panda$collections$Array*) malloc(40);
        $tmp547->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp547->refCount.value = 1;
        panda$collections$Array$init($tmp547);
        children546 = $tmp547;
        panda$collections$Array$add$panda$collections$Array$T(children546, ((panda$core$Object*) result536));
        org$pandalanguage$pandac$ASTNode* $tmp551 = (($fn550) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
        t549 = $tmp551;
        if (((panda$core$Bit) { t549 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn552) self->$class->vtable[12])(self);
                return result536;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children546, ((panda$core$Object*) t549));
        $l553:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp556 = (($fn555) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp556.nonnull }).value) goto $l554;
        {
            org$pandalanguage$pandac$ASTNode* $tmp558 = (($fn557) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
            t549 = $tmp558;
            if (((panda$core$Bit) { t549 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    (($fn559) self->$class->vtable[12])(self);
                    return result536;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children546, ((panda$core$Object*) t549));
        }
        goto $l553;
        $l554:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp562 = (($fn561) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s560);
        if (((panda$core$Bit) { !$tmp562.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn563) self->$class->vtable[12])(self);
                return result536;
            }
            }
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp564 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp564->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp564->refCount.value = 1;
        panda$core$String* $tmp567 = (($fn566) name518->$class->vtable[0])(name518);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp564, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start514.value).offset, ((panda$core$Object*) $tmp567), ((panda$collections$ListView*) children546));
        result536 = $tmp564;
        (($fn568) self->$class->vtable[11])(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp570 = (($fn569) self->$class->vtable[7])(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp570.nonnull }).value) {
    {
        panda$collections$Array* $tmp572 = (panda$collections$Array*) malloc(40);
        $tmp572->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp572->refCount.value = 1;
        panda$collections$Array$init($tmp572);
        children571 = $tmp572;
        panda$collections$Array$add$panda$collections$Array$T(children571, ((panda$core$Object*) result536));
        org$pandalanguage$pandac$ASTNode* $tmp574 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp574->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp574->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp574, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start514.value).offset, ((panda$collections$ListView*) children571));
        result536 = $tmp574;
    }
    }
    return result536;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result576;
    org$pandalanguage$pandac$parser$Token token581;
    panda$core$Int64 $match$15754584;
    panda$collections$Array* children587;
    org$pandalanguage$pandac$ASTNode* expr592;
    panda$collections$Array* children611;
    org$pandalanguage$pandac$ASTNode* expr614;
    panda$core$String* name623;
    panda$collections$Array* children629;
    org$pandalanguage$pandac$ASTNode* target635;
    panda$collections$Array* children638;
    panda$core$String* name645;
    panda$core$MutableString* finalName647;
    panda$collections$Array* types654;
    org$pandalanguage$pandac$ASTNode* t659;
    panda$core$Bit shouldAccept680;
    panda$core$Int64 $match$22111683;
    org$pandalanguage$pandac$ASTNode* $tmp578 = (($fn577) self->$class->vtable[18])(self);
    result576 = $tmp578;
    if (((panda$core$Bit) { result576 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l579:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp583 = (($fn582) self->$class->vtable[4])(self);
        token581 = $tmp583;
        {
            $match$15754584 = token581.kind;
            panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15754584, ((panda$core$Int64) { 103 }));
            if ($tmp585.value) {
            {
                (($fn586) self->commaSeparatedExpressionContext->$class->vtable[2])(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp588 = (panda$collections$Array*) malloc(40);
                $tmp588->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp588->refCount.value = 1;
                panda$collections$Array$init($tmp588);
                children587 = $tmp588;
                panda$collections$Array$add$panda$collections$Array$T(children587, ((panda$core$Object*) result576));
                org$pandalanguage$pandac$parser$Token$nullable $tmp591 = (($fn590) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp591.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp594 = (($fn593) self->$class->vtable[30])(self);
                    expr592 = $tmp594;
                    if (((panda$core$Bit) { expr592 == NULL }).value) {
                    {
                        (($fn595) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children587, ((panda$core$Object*) expr592));
                    $l596:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp599 = (($fn598) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp599.nonnull }).value) goto $l597;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp601 = (($fn600) self->$class->vtable[30])(self);
                        expr592 = $tmp601;
                        if (((panda$core$Bit) { expr592 == NULL }).value) {
                        {
                            (($fn602) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children587, ((panda$core$Object*) expr592));
                    }
                    goto $l596;
                    $l597:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp605 = (($fn604) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s603);
                    if (((panda$core$Bit) { !$tmp605.nonnull }).value) {
                    {
                        (($fn606) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                (($fn607) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp608 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp608->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp608->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp608, ((panda$core$Int64) { 107 }), token581.offset, ((panda$collections$ListView*) children587));
                result576 = $tmp608;
            }
            }
            else {
            panda$core$Bit $tmp610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15754584, ((panda$core$Int64) { 101 }));
            if ($tmp610.value) {
            {
                panda$collections$Array* $tmp612 = (panda$collections$Array*) malloc(40);
                $tmp612->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp612->refCount.value = 1;
                panda$collections$Array$init($tmp612);
                children611 = $tmp612;
                panda$collections$Array$add$panda$collections$Array$T(children611, ((panda$core$Object*) result576));
                org$pandalanguage$pandac$ASTNode* $tmp616 = (($fn615) self->$class->vtable[30])(self);
                expr614 = $tmp616;
                if (((panda$core$Bit) { expr614 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children611, ((panda$core$Object*) expr614));
                org$pandalanguage$pandac$parser$Token$nullable $tmp619 = (($fn618) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s617);
                if (((panda$core$Bit) { !$tmp619.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp620 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp620->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp620->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp620, ((panda$core$Int64) { 103 }), token581.offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children611));
                result576 = $tmp620;
            }
            }
            else {
            panda$core$Bit $tmp622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15754584, ((panda$core$Int64) { 98 }));
            if ($tmp622.value) {
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp625 = (($fn624) self->$class->vtable[7])(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp625.nonnull }).value) {
                {
                    name623 = &$s626;
                }
                }
                else {
                {
                    panda$core$String* $tmp628 = (($fn627) self->$class->vtable[19])(self);
                    name623 = $tmp628;
                    if (((panda$core$Bit) { name623 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp630 = (panda$collections$Array*) malloc(40);
                $tmp630->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp630->refCount.value = 1;
                panda$collections$Array$init($tmp630);
                children629 = $tmp630;
                panda$collections$Array$add$panda$collections$Array$T(children629, ((panda$core$Object*) result576));
                org$pandalanguage$pandac$ASTNode* $tmp632 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp632->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp632->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp632, ((panda$core$Int64) { 108 }), token581.offset, ((panda$core$Object*) name623), ((panda$collections$ListView*) children629));
                result576 = $tmp632;
            }
            }
            else {
            panda$core$Bit $tmp634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15754584, ((panda$core$Int64) { 89 }));
            if ($tmp634.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp637 = (($fn636) self->$class->vtable[20])(self);
                target635 = $tmp637;
                if (((panda$core$Bit) { target635 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp639 = (panda$collections$Array*) malloc(40);
                $tmp639->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp639->refCount.value = 1;
                panda$collections$Array$init($tmp639);
                children638 = $tmp639;
                panda$collections$Array$add$panda$collections$Array$T(children638, ((panda$core$Object*) result576));
                panda$collections$Array$add$panda$collections$Array$T(children638, ((panda$core$Object*) target635));
                org$pandalanguage$pandac$ASTNode* $tmp641 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp641->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp641->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp641, ((panda$core$Int64) { 111 }), token581.offset, ((panda$collections$ListView*) children638));
                result576 = $tmp641;
            }
            }
            else {
            panda$core$Bit $tmp643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15754584, ((panda$core$Int64) { 62 }));
            if ($tmp643.value) {
            {
                (($fn644) self->$class->vtable[5])(self, token581);
                panda$core$String* $tmp646 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result576);
                name645 = $tmp646;
                if (((panda$core$Bit) { name645 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp648 = (panda$core$MutableString*) malloc(40);
                    $tmp648->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp648->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp648, name645);
                    finalName647 = $tmp648;
                    (($fn651) finalName647->$class->vtable[3])(finalName647, &$s650);
                    (($fn652) self->$class->vtable[10])(self);
                    (($fn653) self->$class->vtable[4])(self);
                    panda$collections$Array* $tmp655 = (panda$collections$Array*) malloc(40);
                    $tmp655->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp655->refCount.value = 1;
                    panda$collections$Array$init($tmp655);
                    types654 = $tmp655;
                    org$pandalanguage$pandac$ASTNode* $tmp657 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                    $tmp657->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp657->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp657, ((panda$core$Int64) { 109 }), result576->offset, name645);
                    panda$collections$Array$add$panda$collections$Array$T(types654, ((panda$core$Object*) $tmp657));
                    org$pandalanguage$pandac$ASTNode* $tmp661 = (($fn660) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                    t659 = $tmp661;
                    if (((panda$core$Bit) { t659 == NULL }).value) {
                    {
                        (($fn662) self->$class->vtable[12])(self);
                        return result576;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types654, ((panda$core$Object*) t659));
                    (($fn663) finalName647->$class->vtable[5])(finalName647, ((panda$core$Object*) t659));
                    $l664:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp667 = (($fn666) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp667.nonnull }).value) goto $l665;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp669 = (($fn668) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                        t659 = $tmp669;
                        if (((panda$core$Bit) { t659 == NULL }).value) {
                        {
                            (($fn670) self->$class->vtable[12])(self);
                            return result576;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types654, ((panda$core$Object*) t659));
                        (($fn672) finalName647->$class->vtable[3])(finalName647, &$s671);
                        (($fn673) finalName647->$class->vtable[5])(finalName647, ((panda$core$Object*) t659));
                    }
                    goto $l664;
                    $l665:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp676 = (($fn675) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s674);
                    if (((panda$core$Bit) { !$tmp676.nonnull }).value) {
                    {
                        (($fn677) self->$class->vtable[12])(self);
                        return result576;
                    }
                    }
                    (($fn679) finalName647->$class->vtable[3])(finalName647, &$s678);
                    panda$core$Object* $tmp682 = (($fn681) self->commaSeparatedExpressionContext->$class->vtable[4])(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp682)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp685 = (($fn684) self->$class->vtable[6])(self);
                            $match$22111683 = $tmp685.kind;
                            panda$core$Bit $tmp689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22111683, ((panda$core$Int64) { 98 }));
                            bool $tmp688 = $tmp689.value;
                            if ($tmp688) goto $l690;
                            panda$core$Bit $tmp691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22111683, ((panda$core$Int64) { 103 }));
                            $tmp688 = $tmp691.value;
                            $l690:;
                            panda$core$Bit $tmp692 = { $tmp688 };
                            bool $tmp687 = $tmp692.value;
                            if ($tmp687) goto $l693;
                            panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22111683, ((panda$core$Int64) { 105 }));
                            $tmp687 = $tmp694.value;
                            $l693:;
                            panda$core$Bit $tmp695 = { $tmp687 };
                            bool $tmp686 = $tmp695.value;
                            if ($tmp686) goto $l696;
                            panda$core$Bit $tmp697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22111683, ((panda$core$Int64) { 89 }));
                            $tmp686 = $tmp697.value;
                            $l696:;
                            panda$core$Bit $tmp698 = { $tmp686 };
                            if ($tmp698.value) {
                            {
                                shouldAccept680 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept680 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept680 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept680.value) {
                    {
                        (($fn699) self->$class->vtable[11])(self);
                        org$pandalanguage$pandac$ASTNode* $tmp700 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                        $tmp700->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp700->refCount.value = 1;
                        panda$core$String* $tmp703 = (($fn702) finalName647->$class->vtable[0])(finalName647);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp700, ((panda$core$Int64) { 154 }), result576->offset, ((panda$core$Object*) $tmp703), ((panda$collections$ListView*) types654));
                        result576 = $tmp700;
                        goto $l579;
                    }
                    }
                    else {
                    {
                        (($fn704) self->$class->vtable[12])(self);
                        return result576;
                    }
                    }
                }
                }
                return result576;
            }
            }
            else {
            {
                (($fn705) self->$class->vtable[5])(self, token581);
                return result576;
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l580:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result706;
    org$pandalanguage$pandac$parser$Token$nullable op711;
    org$pandalanguage$pandac$ASTNode* next714;
    panda$collections$Array* children717;
    org$pandalanguage$pandac$ASTNode* $tmp708 = (($fn707) self->$class->vtable[22])(self);
    result706 = $tmp708;
    if (((panda$core$Bit) { result706 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l709:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp713 = (($fn712) self->$class->vtable[7])(self, ((panda$core$Int64) { 57 }));
        op711 = $tmp713;
        if (((panda$core$Bit) { !op711.nonnull }).value) {
        {
            goto $l710;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp716 = (($fn715) self->$class->vtable[22])(self);
        next714 = $tmp716;
        if (((panda$core$Bit) { next714 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp718 = (panda$collections$Array*) malloc(40);
        $tmp718->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp718->refCount.value = 1;
        panda$collections$Array$init($tmp718);
        children717 = $tmp718;
        panda$collections$Array$add$panda$collections$Array$T(children717, ((panda$core$Object*) result706));
        panda$collections$Array$add$panda$collections$Array$T(children717, ((panda$core$Object*) next714));
        org$pandalanguage$pandac$ASTNode* $tmp720 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp720->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp720->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp720, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op711.value).offset, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op711.value).kind)), ((panda$collections$ListView*) children717));
        result706 = $tmp720;
    }
    }
    $l710:;
    return result706;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op722;
    panda$core$Int64 $match$24464725;
    org$pandalanguage$pandac$ASTNode* base735;
    panda$collections$Array* children738;
    org$pandalanguage$pandac$parser$Token $tmp724 = (($fn723) self->$class->vtable[4])(self);
    op722 = $tmp724;
    {
        $match$24464725 = op722.kind;
        panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$24464725, ((panda$core$Int64) { 52 }));
        bool $tmp727 = $tmp728.value;
        if ($tmp727) goto $l729;
        panda$core$Bit $tmp730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$24464725, ((panda$core$Int64) { 49 }));
        $tmp727 = $tmp730.value;
        $l729:;
        panda$core$Bit $tmp731 = { $tmp727 };
        bool $tmp726 = $tmp731.value;
        if ($tmp726) goto $l732;
        panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$24464725, ((panda$core$Int64) { 50 }));
        $tmp726 = $tmp733.value;
        $l732:;
        panda$core$Bit $tmp734 = { $tmp726 };
        if ($tmp734.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp737 = (($fn736) self->$class->vtable[23])(self);
            base735 = $tmp737;
            if (((panda$core$Bit) { base735 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp739 = (panda$collections$Array*) malloc(40);
            $tmp739->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp739->refCount.value = 1;
            panda$collections$Array$init($tmp739);
            children738 = $tmp739;
            panda$collections$Array$add$panda$collections$Array$T(children738, ((panda$core$Object*) base735));
            org$pandalanguage$pandac$ASTNode* $tmp741 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp741->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp741->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp741, ((panda$core$Int64) { 112 }), op722.offset, ((panda$core$Object*) wrap_panda$core$Int64(op722.kind)), ((panda$collections$ListView*) children738));
            return $tmp741;
        }
        }
        else {
        {
            (($fn743) self->$class->vtable[5])(self, op722);
            org$pandalanguage$pandac$ASTNode* $tmp745 = (($fn744) self->$class->vtable[23])(self);
            return $tmp745;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result746;
    org$pandalanguage$pandac$parser$Token op751;
    panda$core$Int64 $match$25656754;
    org$pandalanguage$pandac$ASTNode* next780;
    panda$collections$Array* children783;
    org$pandalanguage$pandac$parser$Token nextToken789;
    org$pandalanguage$pandac$ASTNode* next793;
    panda$collections$Array* children796;
    org$pandalanguage$pandac$ASTNode* $tmp748 = (($fn747) self->$class->vtable[24])(self);
    result746 = $tmp748;
    if (((panda$core$Bit) { result746 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l749:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp753 = (($fn752) self->$class->vtable[4])(self);
        op751 = $tmp753;
        {
            $match$25656754 = op751.kind;
            panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656754, ((panda$core$Int64) { 53 }));
            bool $tmp760 = $tmp761.value;
            if ($tmp760) goto $l762;
            panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656754, ((panda$core$Int64) { 54 }));
            $tmp760 = $tmp763.value;
            $l762:;
            panda$core$Bit $tmp764 = { $tmp760 };
            bool $tmp759 = $tmp764.value;
            if ($tmp759) goto $l765;
            panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656754, ((panda$core$Int64) { 55 }));
            $tmp759 = $tmp766.value;
            $l765:;
            panda$core$Bit $tmp767 = { $tmp759 };
            bool $tmp758 = $tmp767.value;
            if ($tmp758) goto $l768;
            panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656754, ((panda$core$Int64) { 56 }));
            $tmp758 = $tmp769.value;
            $l768:;
            panda$core$Bit $tmp770 = { $tmp758 };
            bool $tmp757 = $tmp770.value;
            if ($tmp757) goto $l771;
            panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656754, ((panda$core$Int64) { 72 }));
            $tmp757 = $tmp772.value;
            $l771:;
            panda$core$Bit $tmp773 = { $tmp757 };
            bool $tmp756 = $tmp773.value;
            if ($tmp756) goto $l774;
            panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656754, ((panda$core$Int64) { 67 }));
            $tmp756 = $tmp775.value;
            $l774:;
            panda$core$Bit $tmp776 = { $tmp756 };
            bool $tmp755 = $tmp776.value;
            if ($tmp755) goto $l777;
            panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656754, ((panda$core$Int64) { 69 }));
            $tmp755 = $tmp778.value;
            $l777:;
            panda$core$Bit $tmp779 = { $tmp755 };
            if ($tmp779.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp782 = (($fn781) self->$class->vtable[24])(self);
                next780 = $tmp782;
                if (((panda$core$Bit) { next780 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp784 = (panda$collections$Array*) malloc(40);
                $tmp784->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp784->refCount.value = 1;
                panda$collections$Array$init($tmp784);
                children783 = $tmp784;
                panda$collections$Array$add$panda$collections$Array$T(children783, ((panda$core$Object*) result746));
                panda$collections$Array$add$panda$collections$Array$T(children783, ((panda$core$Object*) next780));
                org$pandalanguage$pandac$ASTNode* $tmp786 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp786->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp786->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp786, ((panda$core$Int64) { 103 }), op751.offset, ((panda$core$Object*) wrap_panda$core$Int64(op751.kind)), ((panda$collections$ListView*) children783));
                result746 = $tmp786;
            }
            }
            else {
            panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656754, ((panda$core$Int64) { 63 }));
            if ($tmp788.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp791 = (($fn790) self->$class->vtable[3])(self);
                nextToken789 = $tmp791;
                panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken789.kind, ((panda$core$Int64) { 63 }));
                if ($tmp792.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp795 = (($fn794) self->$class->vtable[24])(self);
                    next793 = $tmp795;
                    if (((panda$core$Bit) { next793 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp797 = (panda$collections$Array*) malloc(40);
                    $tmp797->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp797->refCount.value = 1;
                    panda$collections$Array$init($tmp797);
                    children796 = $tmp797;
                    panda$collections$Array$add$panda$collections$Array$T(children796, ((panda$core$Object*) result746));
                    panda$collections$Array$add$panda$collections$Array$T(children796, ((panda$core$Object*) next793));
                    org$pandalanguage$pandac$ASTNode* $tmp799 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                    $tmp799->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp799->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp799, ((panda$core$Int64) { 103 }), op751.offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children796));
                    result746 = $tmp799;
                }
                }
                else {
                {
                    (($fn801) self->$class->vtable[5])(self, nextToken789);
                    (($fn802) self->$class->vtable[5])(self, op751);
                    return result746;
                }
                }
            }
            }
            else {
            {
                (($fn803) self->$class->vtable[5])(self, op751);
                return result746;
            }
            }
            }
        }
    }
    }
    $l750:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result804;
    org$pandalanguage$pandac$parser$Token op809;
    panda$core$Int64 $match$27743812;
    org$pandalanguage$pandac$ASTNode* next822;
    panda$collections$Array* children825;
    org$pandalanguage$pandac$ASTNode* $tmp806 = (($fn805) self->$class->vtable[25])(self);
    result804 = $tmp806;
    if (((panda$core$Bit) { result804 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l807:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp811 = (($fn810) self->$class->vtable[4])(self);
        op809 = $tmp811;
        {
            $match$27743812 = op809.kind;
            panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27743812, ((panda$core$Int64) { 51 }));
            bool $tmp814 = $tmp815.value;
            if ($tmp814) goto $l816;
            panda$core$Bit $tmp817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27743812, ((panda$core$Int64) { 52 }));
            $tmp814 = $tmp817.value;
            $l816:;
            panda$core$Bit $tmp818 = { $tmp814 };
            bool $tmp813 = $tmp818.value;
            if ($tmp813) goto $l819;
            panda$core$Bit $tmp820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27743812, ((panda$core$Int64) { 71 }));
            $tmp813 = $tmp820.value;
            $l819:;
            panda$core$Bit $tmp821 = { $tmp813 };
            if ($tmp821.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp824 = (($fn823) self->$class->vtable[25])(self);
                next822 = $tmp824;
                if (((panda$core$Bit) { next822 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp826 = (panda$collections$Array*) malloc(40);
                $tmp826->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp826->refCount.value = 1;
                panda$collections$Array$init($tmp826);
                children825 = $tmp826;
                panda$collections$Array$add$panda$collections$Array$T(children825, ((panda$core$Object*) result804));
                panda$collections$Array$add$panda$collections$Array$T(children825, ((panda$core$Object*) next822));
                org$pandalanguage$pandac$ASTNode* $tmp828 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp828->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp828->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp828, ((panda$core$Int64) { 103 }), op809.offset, ((panda$core$Object*) wrap_panda$core$Int64(op809.kind)), ((panda$collections$ListView*) children825));
                result804 = $tmp828;
            }
            }
            else {
            {
                (($fn830) self->$class->vtable[5])(self, op809);
                return result804;
            }
            }
        }
    }
    }
    $l808:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result831;
    panda$core$Int64 $match$28776832;
    org$pandalanguage$pandac$parser$Token op844;
    panda$core$Int64 $match$29108847;
    org$pandalanguage$pandac$parser$Token next853;
    org$pandalanguage$pandac$ASTNode* right856;
    org$pandalanguage$pandac$ASTNode* step870;
    panda$collections$Array* children877;
    panda$core$Int64 kind880;
    {
        org$pandalanguage$pandac$parser$Token $tmp834 = (($fn833) self->$class->vtable[6])(self);
        $match$28776832 = $tmp834.kind;
        panda$core$Bit $tmp836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$28776832, ((panda$core$Int64) { 97 }));
        bool $tmp835 = $tmp836.value;
        if ($tmp835) goto $l837;
        panda$core$Bit $tmp838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$28776832, ((panda$core$Int64) { 96 }));
        $tmp835 = $tmp838.value;
        $l837:;
        panda$core$Bit $tmp839 = { $tmp835 };
        if ($tmp839.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp840 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp840->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp840->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp840, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
            result831 = $tmp840;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp843 = (($fn842) self->$class->vtable[26])(self);
            result831 = $tmp843;
            if (((panda$core$Bit) { result831 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp846 = (($fn845) self->$class->vtable[4])(self);
    op844 = $tmp846;
    {
        $match$29108847 = op844.kind;
        panda$core$Bit $tmp849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29108847, ((panda$core$Int64) { 97 }));
        bool $tmp848 = $tmp849.value;
        if ($tmp848) goto $l850;
        panda$core$Bit $tmp851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29108847, ((panda$core$Int64) { 96 }));
        $tmp848 = $tmp851.value;
        $l850:;
        panda$core$Bit $tmp852 = { $tmp848 };
        if ($tmp852.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp855 = (($fn854) self->$class->vtable[6])(self);
            next853 = $tmp855;
            panda$core$Bit $tmp859 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next853.kind, ((panda$core$Int64) { 102 }));
            bool $tmp858 = $tmp859.value;
            if (!$tmp858) goto $l860;
            panda$core$Bit $tmp861 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next853.kind, ((panda$core$Int64) { 104 }));
            $tmp858 = $tmp861.value;
            $l860:;
            panda$core$Bit $tmp862 = { $tmp858 };
            bool $tmp857 = $tmp862.value;
            if (!$tmp857) goto $l863;
            panda$core$Bit $tmp864 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next853.kind, ((panda$core$Int64) { 33 }));
            $tmp857 = $tmp864.value;
            $l863:;
            panda$core$Bit $tmp865 = { $tmp857 };
            if ($tmp865.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp867 = (($fn866) self->$class->vtable[26])(self);
                right856 = $tmp867;
                if (((panda$core$Bit) { right856 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp868 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp868->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp868->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp868, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
                right856 = $tmp868;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp872 = (($fn871) self->$class->vtable[7])(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp872.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp874 = (($fn873) self->$class->vtable[26])(self);
                step870 = $tmp874;
                if (((panda$core$Bit) { step870 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp875 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp875->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp875->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp875, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
                step870 = $tmp875;
            }
            }
            panda$collections$Array* $tmp878 = (panda$collections$Array*) malloc(40);
            $tmp878->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp878->refCount.value = 1;
            panda$collections$Array$init($tmp878);
            children877 = $tmp878;
            panda$collections$Array$add$panda$collections$Array$T(children877, ((panda$core$Object*) result831));
            panda$collections$Array$add$panda$collections$Array$T(children877, ((panda$core$Object*) right856));
            panda$collections$Array$add$panda$collections$Array$T(children877, ((panda$core$Object*) step870));
            panda$core$Bit $tmp881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op844.kind, ((panda$core$Int64) { 97 }));
            if ($tmp881.value) {
            {
                kind880 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind880 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp882 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp882->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp882->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp882, kind880, op844.offset, ((panda$collections$ListView*) children877));
            return $tmp882;
        }
        }
        else {
        {
            (($fn884) self->$class->vtable[5])(self, op844);
            return result831;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result885;
    org$pandalanguage$pandac$parser$Token op890;
    panda$core$Int64 $match$31113893;
    org$pandalanguage$pandac$ASTNode* next923;
    panda$collections$Array* children926;
    org$pandalanguage$pandac$ASTNode* $tmp887 = (($fn886) self->$class->vtable[27])(self);
    result885 = $tmp887;
    if (((panda$core$Bit) { result885 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l888:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp892 = (($fn891) self->$class->vtable[4])(self);
        op890 = $tmp892;
        {
            $match$31113893 = op890.kind;
            panda$core$Bit $tmp901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113893, ((panda$core$Int64) { 58 }));
            bool $tmp900 = $tmp901.value;
            if ($tmp900) goto $l902;
            panda$core$Bit $tmp903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113893, ((panda$core$Int64) { 59 }));
            $tmp900 = $tmp903.value;
            $l902:;
            panda$core$Bit $tmp904 = { $tmp900 };
            bool $tmp899 = $tmp904.value;
            if ($tmp899) goto $l905;
            panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113893, ((panda$core$Int64) { 60 }));
            $tmp899 = $tmp906.value;
            $l905:;
            panda$core$Bit $tmp907 = { $tmp899 };
            bool $tmp898 = $tmp907.value;
            if ($tmp898) goto $l908;
            panda$core$Bit $tmp909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113893, ((panda$core$Int64) { 61 }));
            $tmp898 = $tmp909.value;
            $l908:;
            panda$core$Bit $tmp910 = { $tmp898 };
            bool $tmp897 = $tmp910.value;
            if ($tmp897) goto $l911;
            panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113893, ((panda$core$Int64) { 62 }));
            $tmp897 = $tmp912.value;
            $l911:;
            panda$core$Bit $tmp913 = { $tmp897 };
            bool $tmp896 = $tmp913.value;
            if ($tmp896) goto $l914;
            panda$core$Bit $tmp915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113893, ((panda$core$Int64) { 63 }));
            $tmp896 = $tmp915.value;
            $l914:;
            panda$core$Bit $tmp916 = { $tmp896 };
            bool $tmp895 = $tmp916.value;
            if ($tmp895) goto $l917;
            panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113893, ((panda$core$Int64) { 64 }));
            $tmp895 = $tmp918.value;
            $l917:;
            panda$core$Bit $tmp919 = { $tmp895 };
            bool $tmp894 = $tmp919.value;
            if ($tmp894) goto $l920;
            panda$core$Bit $tmp921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113893, ((panda$core$Int64) { 65 }));
            $tmp894 = $tmp921.value;
            $l920:;
            panda$core$Bit $tmp922 = { $tmp894 };
            if ($tmp922.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp925 = (($fn924) self->$class->vtable[27])(self);
                next923 = $tmp925;
                if (((panda$core$Bit) { next923 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp927 = (panda$collections$Array*) malloc(40);
                $tmp927->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp927->refCount.value = 1;
                panda$collections$Array$init($tmp927);
                children926 = $tmp927;
                panda$collections$Array$add$panda$collections$Array$T(children926, ((panda$core$Object*) result885));
                panda$collections$Array$add$panda$collections$Array$T(children926, ((panda$core$Object*) next923));
                org$pandalanguage$pandac$ASTNode* $tmp929 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp929->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp929->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp929, ((panda$core$Int64) { 103 }), op890.offset, ((panda$core$Object*) wrap_panda$core$Int64(op890.kind)), ((panda$collections$ListView*) children926));
                result885 = $tmp929;
            }
            }
            else {
            {
                (($fn931) self->$class->vtable[5])(self, op890);
                return result885;
            }
            }
        }
    }
    }
    $l889:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result932;
    org$pandalanguage$pandac$parser$Token op937;
    panda$core$Int64 $match$32448940;
    org$pandalanguage$pandac$ASTNode* next946;
    panda$collections$Array* children949;
    org$pandalanguage$pandac$ASTNode* $tmp934 = (($fn933) self->$class->vtable[28])(self);
    result932 = $tmp934;
    if (((panda$core$Bit) { result932 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l935:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp939 = (($fn938) self->$class->vtable[4])(self);
        op937 = $tmp939;
        {
            $match$32448940 = op937.kind;
            panda$core$Bit $tmp942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$32448940, ((panda$core$Int64) { 66 }));
            bool $tmp941 = $tmp942.value;
            if ($tmp941) goto $l943;
            panda$core$Bit $tmp944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$32448940, ((panda$core$Int64) { 70 }));
            $tmp941 = $tmp944.value;
            $l943:;
            panda$core$Bit $tmp945 = { $tmp941 };
            if ($tmp945.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp948 = (($fn947) self->$class->vtable[28])(self);
                next946 = $tmp948;
                if (((panda$core$Bit) { next946 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp950 = (panda$collections$Array*) malloc(40);
                $tmp950->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp950->refCount.value = 1;
                panda$collections$Array$init($tmp950);
                children949 = $tmp950;
                panda$collections$Array$add$panda$collections$Array$T(children949, ((panda$core$Object*) result932));
                panda$collections$Array$add$panda$collections$Array$T(children949, ((panda$core$Object*) next946));
                org$pandalanguage$pandac$ASTNode* $tmp952 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp952->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp952->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp952, ((panda$core$Int64) { 103 }), op937.offset, ((panda$core$Object*) wrap_panda$core$Int64(op937.kind)), ((panda$collections$ListView*) children949));
                result932 = $tmp952;
            }
            }
            else {
            {
                (($fn954) self->$class->vtable[5])(self, op937);
                return result932;
            }
            }
        }
    }
    }
    $l936:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result955;
    org$pandalanguage$pandac$parser$Token$nullable op960;
    org$pandalanguage$pandac$ASTNode* next963;
    panda$collections$Array* children966;
    org$pandalanguage$pandac$ASTNode* $tmp957 = (($fn956) self->$class->vtable[29])(self);
    result955 = $tmp957;
    if (((panda$core$Bit) { result955 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l958:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp962 = (($fn961) self->$class->vtable[7])(self, ((panda$core$Int64) { 68 }));
        op960 = $tmp962;
        if (((panda$core$Bit) { !op960.nonnull }).value) {
        {
            goto $l959;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp965 = (($fn964) self->$class->vtable[29])(self);
        next963 = $tmp965;
        if (((panda$core$Bit) { next963 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp967 = (panda$collections$Array*) malloc(40);
        $tmp967->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp967->refCount.value = 1;
        panda$collections$Array$init($tmp967);
        children966 = $tmp967;
        panda$collections$Array$add$panda$collections$Array$T(children966, ((panda$core$Object*) result955));
        panda$collections$Array$add$panda$collections$Array$T(children966, ((panda$core$Object*) next963));
        org$pandalanguage$pandac$ASTNode* $tmp969 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp969->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp969->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp969, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op960.value).offset, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op960.value).kind)), ((panda$collections$ListView*) children966));
        result955 = $tmp969;
    }
    }
    $l959:;
    return result955;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start971;
    org$pandalanguage$pandac$ASTNode* test975;
    panda$collections$Array* children978;
    org$pandalanguage$pandac$ASTNode* ifTrue981;
    org$pandalanguage$pandac$ASTNode* ifFalse989;
    org$pandalanguage$pandac$ASTNode* ifFalse992;
    org$pandalanguage$pandac$parser$Token$nullable $tmp974 = (($fn973) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s972);
    start971 = $tmp974;
    if (((panda$core$Bit) { !start971.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp977 = (($fn976) self->$class->vtable[30])(self);
    test975 = $tmp977;
    if (((panda$core$Bit) { test975 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp979 = (panda$collections$Array*) malloc(40);
    $tmp979->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp979->refCount.value = 1;
    panda$collections$Array$init($tmp979);
    children978 = $tmp979;
    panda$collections$Array$add$panda$collections$Array$T(children978, ((panda$core$Object*) test975));
    org$pandalanguage$pandac$ASTNode* $tmp983 = (($fn982) self->$class->vtable[41])(self);
    ifTrue981 = $tmp983;
    if (((panda$core$Bit) { ifTrue981 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children978, ((panda$core$Object*) ifTrue981));
    org$pandalanguage$pandac$parser$Token$nullable $tmp985 = (($fn984) self->$class->vtable[7])(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp985.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp987 = (($fn986) self->$class->vtable[6])(self);
        panda$core$Bit $tmp988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp987.kind, ((panda$core$Int64) { 36 }));
        if ($tmp988.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp991 = (($fn990) self->$class->vtable[31])(self);
            ifFalse989 = $tmp991;
            if (((panda$core$Bit) { ifFalse989 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children978, ((panda$core$Object*) ifFalse989));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp994 = (($fn993) self->$class->vtable[41])(self);
            ifFalse992 = $tmp994;
            if (((panda$core$Bit) { ifFalse992 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children978, ((panda$core$Object*) ifFalse992));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp995 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp995->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp995->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp995, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start971.value).offset, ((panda$collections$ListView*) children978));
    return $tmp995;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp999 = (($fn998) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s997);
    if (((panda$core$Bit) { !$tmp999.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1001 = (($fn1000) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
    return $tmp1001;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1002;
    org$pandalanguage$pandac$ASTNode* type1009;
    panda$collections$Array* children1012;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1005 = (($fn1004) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1003);
    id1002 = $tmp1005;
    if (((panda$core$Bit) { !id1002.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1007 = (($fn1006) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1007.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1008.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1011 = (($fn1010) self->$class->vtable[32])(self);
        type1009 = $tmp1011;
        if (((panda$core$Bit) { type1009 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp1013 = (panda$collections$Array*) malloc(40);
        $tmp1013->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1013->refCount.value = 1;
        panda$collections$Array$init($tmp1013);
        children1012 = $tmp1013;
        panda$collections$Array$add$panda$collections$Array$T(children1012, ((panda$core$Object*) type1009));
        org$pandalanguage$pandac$ASTNode* $tmp1015 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1015->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1015->refCount.value = 1;
        panda$core$String* $tmp1018 = (($fn1017) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1002.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1015, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1002.value).offset, ((panda$core$Object*) $tmp1018), ((panda$collections$ListView*) children1012));
        return $tmp1015;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1019 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1019->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1019->refCount.value = 1;
    panda$core$String* $tmp1022 = (($fn1021) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1002.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1019, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1002.value).offset, $tmp1022);
    return $tmp1019;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1023;
    org$pandalanguage$pandac$ASTNode* t1027;
    org$pandalanguage$pandac$ASTNode* list1033;
    org$pandalanguage$pandac$ASTNode* block1036;
    panda$collections$Array* children1039;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1026 = (($fn1025) self->$class->vtable[8])(self, ((panda$core$Int64) { 32 }), &$s1024);
    start1023 = $tmp1026;
    if (((panda$core$Bit) { !start1023.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1029 = (($fn1028) self->$class->vtable[33])(self);
    t1027 = $tmp1029;
    if (((panda$core$Bit) { t1027 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1032 = (($fn1031) self->$class->vtable[8])(self, ((panda$core$Int64) { 34 }), &$s1030);
    if (((panda$core$Bit) { !$tmp1032.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1035 = (($fn1034) self->$class->vtable[30])(self);
    list1033 = $tmp1035;
    if (((panda$core$Bit) { list1033 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1038 = (($fn1037) self->$class->vtable[41])(self);
    block1036 = $tmp1038;
    if (((panda$core$Bit) { block1036 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1040 = (panda$collections$Array*) malloc(40);
    $tmp1040->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1040->refCount.value = 1;
    panda$collections$Array$init($tmp1040);
    children1039 = $tmp1040;
    panda$collections$Array$add$panda$collections$Array$T(children1039, ((panda$core$Object*) t1027));
    panda$collections$Array$add$panda$collections$Array$T(children1039, ((panda$core$Object*) list1033));
    panda$collections$Array$add$panda$collections$Array$T(children1039, ((panda$core$Object*) block1036));
    org$pandalanguage$pandac$ASTNode* $tmp1042 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1042->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1042->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1042, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start1023.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1039));
    return $tmp1042;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1044;
    org$pandalanguage$pandac$ASTNode* test1048;
    org$pandalanguage$pandac$ASTNode* body1051;
    panda$collections$Array* children1054;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1047 = (($fn1046) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s1045);
    start1044 = $tmp1047;
    if (((panda$core$Bit) { !start1044.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1050 = (($fn1049) self->$class->vtable[30])(self);
    test1048 = $tmp1050;
    if (((panda$core$Bit) { test1048 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1053 = (($fn1052) self->$class->vtable[41])(self);
    body1051 = $tmp1053;
    if (((panda$core$Bit) { body1051 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1055 = (panda$collections$Array*) malloc(40);
    $tmp1055->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1055->refCount.value = 1;
    panda$collections$Array$init($tmp1055);
    children1054 = $tmp1055;
    panda$collections$Array$add$panda$collections$Array$T(children1054, ((panda$core$Object*) test1048));
    panda$collections$Array$add$panda$collections$Array$T(children1054, ((panda$core$Object*) body1051));
    org$pandalanguage$pandac$ASTNode* $tmp1057 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1057->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1057->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1057, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start1044.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1054));
    return $tmp1057;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1059;
    org$pandalanguage$pandac$ASTNode* body1063;
    org$pandalanguage$pandac$ASTNode* test1069;
    panda$collections$Array* children1072;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1062 = (($fn1061) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1060);
    start1059 = $tmp1062;
    if (((panda$core$Bit) { !start1059.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1065 = (($fn1064) self->$class->vtable[41])(self);
    body1063 = $tmp1065;
    if (((panda$core$Bit) { body1063 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1068 = (($fn1067) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s1066);
    if (((panda$core$Bit) { !$tmp1068.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1071 = (($fn1070) self->$class->vtable[30])(self);
    test1069 = $tmp1071;
    if (((panda$core$Bit) { test1069 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1073 = (panda$collections$Array*) malloc(40);
    $tmp1073->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1073->refCount.value = 1;
    panda$collections$Array$init($tmp1073);
    children1072 = $tmp1073;
    panda$collections$Array$add$panda$collections$Array$T(children1072, ((panda$core$Object*) body1063));
    panda$collections$Array$add$panda$collections$Array$T(children1072, ((panda$core$Object*) test1069));
    org$pandalanguage$pandac$ASTNode* $tmp1075 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1075->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1075->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1075, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start1059.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1072));
    return $tmp1075;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1077;
    org$pandalanguage$pandac$ASTNode* body1081;
    panda$collections$Array* children1084;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1080 = (($fn1079) self->$class->vtable[8])(self, ((panda$core$Int64) { 35 }), &$s1078);
    start1077 = $tmp1080;
    if (((panda$core$Bit) { !start1077.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1083 = (($fn1082) self->$class->vtable[41])(self);
    body1081 = $tmp1083;
    if (((panda$core$Bit) { body1081 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1085 = (panda$collections$Array*) malloc(40);
    $tmp1085->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1085->refCount.value = 1;
    panda$collections$Array$init($tmp1085);
    children1084 = $tmp1085;
    panda$collections$Array$add$panda$collections$Array$T(children1084, ((panda$core$Object*) body1081));
    org$pandalanguage$pandac$ASTNode* $tmp1087 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1087->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1087->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1087, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start1077.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1084));
    return $tmp1087;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1089;
    org$pandalanguage$pandac$ASTNode* expr1093;
    panda$collections$Array* children1096;
    org$pandalanguage$pandac$ASTNode* message1101;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1092 = (($fn1091) self->$class->vtable[8])(self, ((panda$core$Int64) { 44 }), &$s1090);
    start1089 = $tmp1092;
    if (((panda$core$Bit) { !start1089.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1095 = (($fn1094) self->$class->vtable[30])(self);
    expr1093 = $tmp1095;
    if (((panda$core$Bit) { expr1093 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1097 = (panda$collections$Array*) malloc(40);
    $tmp1097->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1097->refCount.value = 1;
    panda$collections$Array$init($tmp1097);
    children1096 = $tmp1097;
    panda$collections$Array$add$panda$collections$Array$T(children1096, ((panda$core$Object*) expr1093));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1100 = (($fn1099) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp1100.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1103 = (($fn1102) self->$class->vtable[30])(self);
        message1101 = $tmp1103;
        if (((panda$core$Bit) { message1101 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1096, ((panda$core$Object*) message1101));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1104 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1104->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1104->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1104, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start1089.value).offset, ((panda$collections$ListView*) children1096));
    return $tmp1104;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1106;
    panda$collections$Array* expressions1110;
    org$pandalanguage$pandac$ASTNode* expr1113;
    panda$collections$Array* children1122;
    panda$core$Int64 $match$414461132;
    org$pandalanguage$pandac$ASTNode* stmt1153;
    org$pandalanguage$pandac$ASTNode* stmt1156;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1109 = (($fn1108) self->$class->vtable[8])(self, ((panda$core$Int64) { 39 }), &$s1107);
    start1106 = $tmp1109;
    if (((panda$core$Bit) { !start1106.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1111 = (panda$collections$Array*) malloc(40);
    $tmp1111->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1111->refCount.value = 1;
    panda$collections$Array$init($tmp1111);
    expressions1110 = $tmp1111;
    org$pandalanguage$pandac$ASTNode* $tmp1115 = (($fn1114) self->$class->vtable[30])(self);
    expr1113 = $tmp1115;
    if (((panda$core$Bit) { expr1113 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1110, ((panda$core$Object*) expr1113));
    $l1116:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1119 = (($fn1118) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1119.nonnull }).value) goto $l1117;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1121 = (($fn1120) self->$class->vtable[30])(self);
        expr1113 = $tmp1121;
        if (((panda$core$Bit) { expr1113 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1110, ((panda$core$Object*) expr1113));
    }
    goto $l1116;
    $l1117:;
    panda$collections$Array* $tmp1123 = (panda$collections$Array*) malloc(40);
    $tmp1123->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1123->refCount.value = 1;
    panda$collections$Array$init($tmp1123);
    children1122 = $tmp1123;
    org$pandalanguage$pandac$ASTNode* $tmp1125 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1125->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1125->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1125, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start1106.value).offset, ((panda$collections$ListView*) expressions1110));
    panda$collections$Array$add$panda$collections$Array$T(children1122, ((panda$core$Object*) $tmp1125));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1129 = (($fn1128) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1127);
    if (((panda$core$Bit) { !$tmp1129.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l1130:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1134 = (($fn1133) self->$class->vtable[6])(self);
            $match$414461132 = $tmp1134.kind;
            panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461132, ((panda$core$Int64) { 39 }));
            bool $tmp1136 = $tmp1137.value;
            if ($tmp1136) goto $l1138;
            panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461132, ((panda$core$Int64) { 40 }));
            $tmp1136 = $tmp1139.value;
            $l1138:;
            panda$core$Bit $tmp1140 = { $tmp1136 };
            bool $tmp1135 = $tmp1140.value;
            if ($tmp1135) goto $l1141;
            panda$core$Bit $tmp1142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461132, ((panda$core$Int64) { 100 }));
            $tmp1135 = $tmp1142.value;
            $l1141:;
            panda$core$Bit $tmp1143 = { $tmp1135 };
            if ($tmp1143.value) {
            {
                goto $l1131;
            }
            }
            else {
            panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461132, ((panda$core$Int64) { 28 }));
            bool $tmp1145 = $tmp1146.value;
            if ($tmp1145) goto $l1147;
            panda$core$Bit $tmp1148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461132, ((panda$core$Int64) { 29 }));
            $tmp1145 = $tmp1148.value;
            $l1147:;
            panda$core$Bit $tmp1149 = { $tmp1145 };
            bool $tmp1144 = $tmp1149.value;
            if ($tmp1144) goto $l1150;
            panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461132, ((panda$core$Int64) { 27 }));
            $tmp1144 = $tmp1151.value;
            $l1150:;
            panda$core$Bit $tmp1152 = { $tmp1144 };
            if ($tmp1152.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1155 = (($fn1154) self->$class->vtable[49])(self);
                stmt1153 = $tmp1155;
                if (((panda$core$Bit) { stmt1153 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1122, ((panda$core$Object*) stmt1153));
                goto $l1131;
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1158 = (($fn1157) self->$class->vtable[51])(self);
                    stmt1156 = $tmp1158;
                    if (((panda$core$Bit) { stmt1156 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1122, ((panda$core$Object*) stmt1156));
                }
            }
            }
            }
        }
    }
    }
    $l1131:;
    org$pandalanguage$pandac$ASTNode* $tmp1159 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1159->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1159->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1159, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start1106.value).offset, ((panda$collections$ListView*) children1122));
    return $tmp1159;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1161;
    panda$collections$Array* children1165;
    org$pandalanguage$pandac$ASTNode* expr1168;
    org$pandalanguage$pandac$parser$Token token1176;
    panda$core$Int64 $match$429251179;
    org$pandalanguage$pandac$ASTNode* w1182;
    org$pandalanguage$pandac$parser$Token o1186;
    panda$collections$Array* statements1192;
    panda$core$Int64 $match$435251197;
    org$pandalanguage$pandac$ASTNode* stmt1210;
    org$pandalanguage$pandac$ASTNode* stmt1213;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1164 = (($fn1163) self->$class->vtable[8])(self, ((panda$core$Int64) { 38 }), &$s1162);
    start1161 = $tmp1164;
    if (((panda$core$Bit) { !start1161.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1166 = (panda$collections$Array*) malloc(40);
    $tmp1166->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1166->refCount.value = 1;
    panda$collections$Array$init($tmp1166);
    children1165 = $tmp1166;
    org$pandalanguage$pandac$ASTNode* $tmp1170 = (($fn1169) self->$class->vtable[30])(self);
    expr1168 = $tmp1170;
    if (((panda$core$Bit) { expr1168 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1165, ((panda$core$Object*) expr1168));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1173 = (($fn1172) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1171);
    if (((panda$core$Bit) { !$tmp1173.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l1174:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1178 = (($fn1177) self->$class->vtable[6])(self);
        token1176 = $tmp1178;
        {
            $match$429251179 = token1176.kind;
            panda$core$Bit $tmp1180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$429251179, ((panda$core$Int64) { 100 }));
            if ($tmp1180.value) {
            {
                goto $l1175;
            }
            }
            else {
            panda$core$Bit $tmp1181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$429251179, ((panda$core$Int64) { 39 }));
            if ($tmp1181.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1184 = (($fn1183) self->$class->vtable[39])(self);
                w1182 = $tmp1184;
                if (((panda$core$Bit) { w1182 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1165, ((panda$core$Object*) w1182));
            }
            }
            else {
            panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$429251179, ((panda$core$Int64) { 40 }));
            if ($tmp1185.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1188 = (($fn1187) self->$class->vtable[4])(self);
                o1186 = $tmp1188;
                org$pandalanguage$pandac$parser$Token$nullable $tmp1191 = (($fn1190) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1189);
                if (((panda$core$Bit) { !$tmp1191.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1193 = (panda$collections$Array*) malloc(40);
                $tmp1193->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1193->refCount.value = 1;
                panda$collections$Array$init($tmp1193);
                statements1192 = $tmp1193;
                $l1195:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1199 = (($fn1198) self->$class->vtable[6])(self);
                        $match$435251197 = $tmp1199.kind;
                        panda$core$Bit $tmp1200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435251197, ((panda$core$Int64) { 100 }));
                        if ($tmp1200.value) {
                        {
                            goto $l1196;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435251197, ((panda$core$Int64) { 28 }));
                        bool $tmp1202 = $tmp1203.value;
                        if ($tmp1202) goto $l1204;
                        panda$core$Bit $tmp1205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435251197, ((panda$core$Int64) { 29 }));
                        $tmp1202 = $tmp1205.value;
                        $l1204:;
                        panda$core$Bit $tmp1206 = { $tmp1202 };
                        bool $tmp1201 = $tmp1206.value;
                        if ($tmp1201) goto $l1207;
                        panda$core$Bit $tmp1208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435251197, ((panda$core$Int64) { 27 }));
                        $tmp1201 = $tmp1208.value;
                        $l1207:;
                        panda$core$Bit $tmp1209 = { $tmp1201 };
                        if ($tmp1209.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1212 = (($fn1211) self->$class->vtable[49])(self);
                            stmt1210 = $tmp1212;
                            if (((panda$core$Bit) { stmt1210 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements1192, ((panda$core$Object*) stmt1210));
                            goto $l1196;
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1215 = (($fn1214) self->$class->vtable[51])(self);
                            stmt1213 = $tmp1215;
                            if (((panda$core$Bit) { stmt1213 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements1192, ((panda$core$Object*) stmt1213));
                        }
                        }
                        }
                    }
                }
                }
                $l1196:;
                org$pandalanguage$pandac$ASTNode* $tmp1216 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp1216->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1216->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1216, ((panda$core$Int64) { 127 }), o1186.offset, ((panda$collections$ListView*) statements1192));
                panda$collections$Array$add$panda$collections$Array$T(children1165, ((panda$core$Object*) $tmp1216));
                goto $l1175;
            }
            }
            else {
            {
                (($fn1218) self->$class->vtable[4])(self);
                panda$core$String* $tmp1222 = (($fn1221) self->$class->vtable[14])(self, token1176);
                panda$core$String* $tmp1223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1220, $tmp1222);
                panda$core$String* $tmp1225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1223, &$s1224);
                panda$core$String* $tmp1226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1219, $tmp1225);
                (($fn1227) self->$class->vtable[9])(self, token1176, $tmp1226);
            }
            }
            }
            }
        }
    }
    }
    $l1175:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1230 = (($fn1229) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s1228);
    if (((panda$core$Bit) { !$tmp1230.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1231 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1231->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1231->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1231, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start1161.value).offset, ((panda$collections$ListView*) children1165));
    return $tmp1231;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1233;
    panda$collections$Array* children1237;
    panda$core$Int64 $match$452961242;
    org$pandalanguage$pandac$ASTNode* stmt1256;
    org$pandalanguage$pandac$ASTNode* stmt1262;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1236 = (($fn1235) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1234);
    start1233 = $tmp1236;
    if (((panda$core$Bit) { !start1233.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1238 = (panda$collections$Array*) malloc(40);
    $tmp1238->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1238->refCount.value = 1;
    panda$collections$Array$init($tmp1238);
    children1237 = $tmp1238;
    $l1240:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1244 = (($fn1243) self->$class->vtable[6])(self);
            $match$452961242 = $tmp1244.kind;
            panda$core$Bit $tmp1245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$452961242, ((panda$core$Int64) { 100 }));
            if ($tmp1245.value) {
            {
                (($fn1246) self->$class->vtable[4])(self);
                goto $l1241;
            }
            }
            else {
            panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$452961242, ((panda$core$Int64) { 28 }));
            bool $tmp1248 = $tmp1249.value;
            if ($tmp1248) goto $l1250;
            panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$452961242, ((panda$core$Int64) { 29 }));
            $tmp1248 = $tmp1251.value;
            $l1250:;
            panda$core$Bit $tmp1252 = { $tmp1248 };
            bool $tmp1247 = $tmp1252.value;
            if ($tmp1247) goto $l1253;
            panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$452961242, ((panda$core$Int64) { 27 }));
            $tmp1247 = $tmp1254.value;
            $l1253:;
            panda$core$Bit $tmp1255 = { $tmp1247 };
            if ($tmp1255.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1258 = (($fn1257) self->$class->vtable[49])(self);
                stmt1256 = $tmp1258;
                if (((panda$core$Bit) { stmt1256 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp1261 = (($fn1260) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s1259);
                if (((panda$core$Bit) { !$tmp1261.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1237, ((panda$core$Object*) stmt1256));
                goto $l1241;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1264 = (($fn1263) self->$class->vtable[51])(self);
                stmt1262 = $tmp1264;
                if (((panda$core$Bit) { stmt1262 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1237, ((panda$core$Object*) stmt1262));
            }
            }
            }
        }
    }
    }
    $l1241:;
    org$pandalanguage$pandac$ASTNode* $tmp1265 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1265->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1265->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1265, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start1233.value).offset, ((panda$collections$ListView*) children1237));
    return $tmp1265;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1267;
    panda$core$Int64 $match$465491270;
    org$pandalanguage$pandac$parser$Token op1334;
    org$pandalanguage$pandac$ASTNode* rvalue1337;
    panda$collections$Array* children1340;
    org$pandalanguage$pandac$parser$Token op1350;
    org$pandalanguage$pandac$ASTNode* rvalue1353;
    panda$collections$Array* children1356;
    org$pandalanguage$pandac$ASTNode* $tmp1269 = (($fn1268) self->$class->vtable[30])(self);
    start1267 = $tmp1269;
    if (((panda$core$Bit) { start1267 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1272 = (($fn1271) self->$class->vtable[6])(self);
        $match$465491270 = $tmp1272.kind;
        panda$core$Bit $tmp1288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 73 }));
        bool $tmp1287 = $tmp1288.value;
        if ($tmp1287) goto $l1289;
        panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 74 }));
        $tmp1287 = $tmp1290.value;
        $l1289:;
        panda$core$Bit $tmp1291 = { $tmp1287 };
        bool $tmp1286 = $tmp1291.value;
        if ($tmp1286) goto $l1292;
        panda$core$Bit $tmp1293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 75 }));
        $tmp1286 = $tmp1293.value;
        $l1292:;
        panda$core$Bit $tmp1294 = { $tmp1286 };
        bool $tmp1285 = $tmp1294.value;
        if ($tmp1285) goto $l1295;
        panda$core$Bit $tmp1296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 76 }));
        $tmp1285 = $tmp1296.value;
        $l1295:;
        panda$core$Bit $tmp1297 = { $tmp1285 };
        bool $tmp1284 = $tmp1297.value;
        if ($tmp1284) goto $l1298;
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 77 }));
        $tmp1284 = $tmp1299.value;
        $l1298:;
        panda$core$Bit $tmp1300 = { $tmp1284 };
        bool $tmp1283 = $tmp1300.value;
        if ($tmp1283) goto $l1301;
        panda$core$Bit $tmp1302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 78 }));
        $tmp1283 = $tmp1302.value;
        $l1301:;
        panda$core$Bit $tmp1303 = { $tmp1283 };
        bool $tmp1282 = $tmp1303.value;
        if ($tmp1282) goto $l1304;
        panda$core$Bit $tmp1305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 79 }));
        $tmp1282 = $tmp1305.value;
        $l1304:;
        panda$core$Bit $tmp1306 = { $tmp1282 };
        bool $tmp1281 = $tmp1306.value;
        if ($tmp1281) goto $l1307;
        panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 80 }));
        $tmp1281 = $tmp1308.value;
        $l1307:;
        panda$core$Bit $tmp1309 = { $tmp1281 };
        bool $tmp1280 = $tmp1309.value;
        if ($tmp1280) goto $l1310;
        panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 81 }));
        $tmp1280 = $tmp1311.value;
        $l1310:;
        panda$core$Bit $tmp1312 = { $tmp1280 };
        bool $tmp1279 = $tmp1312.value;
        if ($tmp1279) goto $l1313;
        panda$core$Bit $tmp1314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 82 }));
        $tmp1279 = $tmp1314.value;
        $l1313:;
        panda$core$Bit $tmp1315 = { $tmp1279 };
        bool $tmp1278 = $tmp1315.value;
        if ($tmp1278) goto $l1316;
        panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 83 }));
        $tmp1278 = $tmp1317.value;
        $l1316:;
        panda$core$Bit $tmp1318 = { $tmp1278 };
        bool $tmp1277 = $tmp1318.value;
        if ($tmp1277) goto $l1319;
        panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 84 }));
        $tmp1277 = $tmp1320.value;
        $l1319:;
        panda$core$Bit $tmp1321 = { $tmp1277 };
        bool $tmp1276 = $tmp1321.value;
        if ($tmp1276) goto $l1322;
        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 85 }));
        $tmp1276 = $tmp1323.value;
        $l1322:;
        panda$core$Bit $tmp1324 = { $tmp1276 };
        bool $tmp1275 = $tmp1324.value;
        if ($tmp1275) goto $l1325;
        panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 86 }));
        $tmp1275 = $tmp1326.value;
        $l1325:;
        panda$core$Bit $tmp1327 = { $tmp1275 };
        bool $tmp1274 = $tmp1327.value;
        if ($tmp1274) goto $l1328;
        panda$core$Bit $tmp1329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 87 }));
        $tmp1274 = $tmp1329.value;
        $l1328:;
        panda$core$Bit $tmp1330 = { $tmp1274 };
        bool $tmp1273 = $tmp1330.value;
        if ($tmp1273) goto $l1331;
        panda$core$Bit $tmp1332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 88 }));
        $tmp1273 = $tmp1332.value;
        $l1331:;
        panda$core$Bit $tmp1333 = { $tmp1273 };
        if ($tmp1333.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1336 = (($fn1335) self->$class->vtable[4])(self);
            op1334 = $tmp1336;
            org$pandalanguage$pandac$ASTNode* $tmp1339 = (($fn1338) self->$class->vtable[30])(self);
            rvalue1337 = $tmp1339;
            if (((panda$core$Bit) { rvalue1337 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1341 = (panda$collections$Array*) malloc(40);
            $tmp1341->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1341->refCount.value = 1;
            panda$collections$Array$init($tmp1341);
            children1340 = $tmp1341;
            panda$collections$Array$add$panda$collections$Array$T(children1340, ((panda$core$Object*) start1267));
            panda$collections$Array$add$panda$collections$Array$T(children1340, ((panda$core$Object*) rvalue1337));
            org$pandalanguage$pandac$ASTNode* $tmp1343 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1343->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1343->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1343, ((panda$core$Int64) { 103 }), start1267->offset, ((panda$core$Object*) wrap_panda$core$Int64(op1334.kind)), ((panda$collections$ListView*) children1340));
            return $tmp1343;
        }
        }
        else {
        panda$core$Bit $tmp1345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491270, ((panda$core$Int64) { 58 }));
        if ($tmp1345.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1347 = (($fn1346) self->$class->vtable[6])(self);
            (($fn1349) self->$class->vtable[9])(self, $tmp1347, &$s1348);
            org$pandalanguage$pandac$parser$Token $tmp1352 = (($fn1351) self->$class->vtable[4])(self);
            op1350 = $tmp1352;
            org$pandalanguage$pandac$ASTNode* $tmp1355 = (($fn1354) self->$class->vtable[30])(self);
            rvalue1353 = $tmp1355;
            if (((panda$core$Bit) { rvalue1353 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1357 = (panda$collections$Array*) malloc(40);
            $tmp1357->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1357->refCount.value = 1;
            panda$collections$Array$init($tmp1357);
            children1356 = $tmp1357;
            panda$collections$Array$add$panda$collections$Array$T(children1356, ((panda$core$Object*) start1267));
            panda$collections$Array$add$panda$collections$Array$T(children1356, ((panda$core$Object*) rvalue1353));
            org$pandalanguage$pandac$ASTNode* $tmp1359 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1359->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1359->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1359, ((panda$core$Int64) { 103 }), start1267->offset, ((panda$core$Object*) wrap_panda$core$Int64(op1350.kind)), ((panda$collections$ListView*) children1356));
            return $tmp1359;
        }
        }
        else {
        {
            return start1267;
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1361;
    org$pandalanguage$pandac$ASTNode* t1364;
    org$pandalanguage$pandac$ASTNode* value1369;
    org$pandalanguage$pandac$ASTNode* value1379;
    panda$collections$Array* $tmp1362 = (panda$collections$Array*) malloc(40);
    $tmp1362->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1362->refCount.value = 1;
    panda$collections$Array$init($tmp1362);
    children1361 = $tmp1362;
    org$pandalanguage$pandac$ASTNode* $tmp1366 = (($fn1365) self->$class->vtable[33])(self);
    t1364 = $tmp1366;
    if (((panda$core$Bit) { t1364 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1361, ((panda$core$Object*) t1364));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1368 = (($fn1367) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp1368.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1371 = (($fn1370) self->$class->vtable[30])(self);
        value1369 = $tmp1371;
        if (((panda$core$Bit) { value1369 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1361, ((panda$core$Object*) value1369));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1373 = (($fn1372) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1373.kind, ((panda$core$Int64) { 58 }));
    if ($tmp1374.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1376 = (($fn1375) self->$class->vtable[4])(self);
        (($fn1378) self->$class->vtable[9])(self, $tmp1376, &$s1377);
        org$pandalanguage$pandac$ASTNode* $tmp1381 = (($fn1380) self->$class->vtable[30])(self);
        value1379 = $tmp1381;
        if (((panda$core$Bit) { value1379 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1361, ((panda$core$Object*) value1379));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1382 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1382->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1382->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1382, ((panda$core$Int64) { 129 }), t1364->offset, ((panda$collections$ListView*) children1361));
    return $tmp1382;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1384;
    panda$core$Int64 kind1387;
    panda$core$Int64 $match$492661388;
    panda$collections$Array* children1395;
    org$pandalanguage$pandac$ASTNode* child1398;
    org$pandalanguage$pandac$ASTNode* child1405;
    org$pandalanguage$pandac$parser$Token $tmp1386 = (($fn1385) self->$class->vtable[4])(self);
    start1384 = $tmp1386;
    {
        $match$492661388 = start1384.kind;
        panda$core$Bit $tmp1389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492661388, ((panda$core$Int64) { 23 }));
        if ($tmp1389.value) {
        {
            kind1387 = ((panda$core$Int64) { 130 });
        }
        }
        else {
        panda$core$Bit $tmp1390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492661388, ((panda$core$Int64) { 24 }));
        if ($tmp1390.value) {
        {
            kind1387 = ((panda$core$Int64) { 131 });
        }
        }
        else {
        panda$core$Bit $tmp1391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492661388, ((panda$core$Int64) { 25 }));
        if ($tmp1391.value) {
        {
            kind1387 = ((panda$core$Int64) { 133 });
        }
        }
        else {
        panda$core$Bit $tmp1392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492661388, ((panda$core$Int64) { 26 }));
        if ($tmp1392.value) {
        {
            kind1387 = ((panda$core$Int64) { 132 });
        }
        }
        else {
        {
            (($fn1394) self->$class->vtable[9])(self, start1384, &$s1393);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1396 = (panda$collections$Array*) malloc(40);
    $tmp1396->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1396->refCount.value = 1;
    panda$collections$Array$init($tmp1396);
    children1395 = $tmp1396;
    org$pandalanguage$pandac$ASTNode* $tmp1400 = (($fn1399) self->$class->vtable[43])(self);
    child1398 = $tmp1400;
    if (((panda$core$Bit) { child1398 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1395, ((panda$core$Object*) child1398));
    $l1401:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1404 = (($fn1403) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1404.nonnull }).value) goto $l1402;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1407 = (($fn1406) self->$class->vtable[43])(self);
        child1405 = $tmp1407;
        if (((panda$core$Bit) { child1405 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1395, ((panda$core$Object*) child1405));
    }
    goto $l1401;
    $l1402:;
    org$pandalanguage$pandac$ASTNode* $tmp1408 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1408->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1408->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1408, kind1387, start1384.offset, ((panda$collections$ListView*) children1395));
    return $tmp1408;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1410;
    panda$collections$Array* children1418;
    org$pandalanguage$pandac$ASTNode* expr1427;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1413 = (($fn1412) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1411);
    start1410 = $tmp1413;
    if (((panda$core$Bit) { !start1410.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1416 = (($fn1415) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1414);
    if (((panda$core$Bit) { !$tmp1416.nonnull }).value) {
    {
        return NULL;
    }
    }
    (($fn1417) self->commaSeparatedExpressionContext->$class->vtable[2])(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp1419 = (panda$collections$Array*) malloc(40);
    $tmp1419->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1419->refCount.value = 1;
    panda$collections$Array$init($tmp1419);
    children1418 = $tmp1419;
    org$pandalanguage$pandac$ASTNode* $tmp1421 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1421->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1421->refCount.value = 1;
    panda$core$String* $tmp1424 = (($fn1423) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start1410.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1421, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start1410.value).offset, $tmp1424);
    panda$collections$Array$add$panda$collections$Array$T(children1418, ((panda$core$Object*) $tmp1421));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1426 = (($fn1425) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1426.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1429 = (($fn1428) self->$class->vtable[30])(self);
        expr1427 = $tmp1429;
        if (((panda$core$Bit) { expr1427 == NULL }).value) {
        {
            (($fn1430) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1418, ((panda$core$Object*) expr1427));
        $l1431:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1434 = (($fn1433) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1434.nonnull }).value) goto $l1432;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1436 = (($fn1435) self->$class->vtable[30])(self);
            expr1427 = $tmp1436;
            if (((panda$core$Bit) { expr1427 == NULL }).value) {
            {
                (($fn1437) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1418, ((panda$core$Object*) expr1427));
        }
        goto $l1431;
        $l1432:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1440 = (($fn1439) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1438);
        if (((panda$core$Bit) { !$tmp1440.nonnull }).value) {
        {
            (($fn1441) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    (($fn1442) self->commaSeparatedExpressionContext->$class->vtable[3])(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1443 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1443->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1443->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1443, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start1410.value).offset, ((panda$collections$ListView*) children1418));
    return $tmp1443;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1445;
    org$pandalanguage$pandac$parser$Token$nullable label1449;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1448 = (($fn1447) self->$class->vtable[8])(self, ((panda$core$Int64) { 28 }), &$s1446);
    start1445 = $tmp1448;
    if (((panda$core$Bit) { !start1445.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1451 = (($fn1450) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1449 = $tmp1451;
    if (((panda$core$Bit) { label1449.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1452 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1452->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1452->refCount.value = 1;
        panda$core$String* $tmp1455 = (($fn1454) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1449.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1452, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1445.value).offset, $tmp1455);
        return $tmp1452;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1456 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1456->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1456->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1456, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1445.value).offset);
    return $tmp1456;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1458;
    org$pandalanguage$pandac$parser$Token$nullable label1462;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1461 = (($fn1460) self->$class->vtable[8])(self, ((panda$core$Int64) { 29 }), &$s1459);
    start1458 = $tmp1461;
    if (((panda$core$Bit) { !start1458.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1464 = (($fn1463) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1462 = $tmp1464;
    if (((panda$core$Bit) { label1462.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1465 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1465->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1465->refCount.value = 1;
        panda$core$String* $tmp1468 = (($fn1467) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1462.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1465, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1458.value).offset, $tmp1468);
        return $tmp1465;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1469 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1469->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1469->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1469, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1458.value).offset);
    return $tmp1469;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1471;
    panda$core$Int64 $match$533441475;
    panda$collections$Array* children1489;
    org$pandalanguage$pandac$ASTNode* expr1492;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1474 = (($fn1473) self->$class->vtable[8])(self, ((panda$core$Int64) { 27 }), &$s1472);
    start1471 = $tmp1474;
    if (((panda$core$Bit) { !start1471.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1477 = (($fn1476) self->$class->vtable[6])(self);
        $match$533441475 = $tmp1477.kind;
        panda$core$Bit $tmp1480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533441475, ((panda$core$Int64) { 100 }));
        bool $tmp1479 = $tmp1480.value;
        if ($tmp1479) goto $l1481;
        panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533441475, ((panda$core$Int64) { 39 }));
        $tmp1479 = $tmp1482.value;
        $l1481:;
        panda$core$Bit $tmp1483 = { $tmp1479 };
        bool $tmp1478 = $tmp1483.value;
        if ($tmp1478) goto $l1484;
        panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533441475, ((panda$core$Int64) { 40 }));
        $tmp1478 = $tmp1485.value;
        $l1484:;
        panda$core$Bit $tmp1486 = { $tmp1478 };
        if ($tmp1486.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1487 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1487->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1487->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1487, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1471.value).offset);
            return $tmp1487;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1490 = (panda$collections$Array*) malloc(40);
            $tmp1490->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1490->refCount.value = 1;
            panda$collections$Array$init($tmp1490);
            children1489 = $tmp1490;
            org$pandalanguage$pandac$ASTNode* $tmp1494 = (($fn1493) self->$class->vtable[30])(self);
            expr1492 = $tmp1494;
            if (((panda$core$Bit) { expr1492 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1489, ((panda$core$Object*) expr1492));
            org$pandalanguage$pandac$ASTNode* $tmp1495 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1495->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1495->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1495, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1471.value).offset, ((panda$collections$ListView*) children1489));
            return $tmp1495;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $match$541581497;
    {
        org$pandalanguage$pandac$parser$Token $tmp1499 = (($fn1498) self->$class->vtable[6])(self);
        $match$541581497 = $tmp1499.kind;
        panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$541581497, ((panda$core$Int64) { 28 }));
        if ($tmp1500.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1502 = (($fn1501) self->$class->vtable[46])(self);
            return $tmp1502;
        }
        }
        else {
        panda$core$Bit $tmp1503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$541581497, ((panda$core$Int64) { 29 }));
        if ($tmp1503.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1505 = (($fn1504) self->$class->vtable[47])(self);
            return $tmp1505;
        }
        }
        else {
        panda$core$Bit $tmp1506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$541581497, ((panda$core$Int64) { 27 }));
        if ($tmp1506.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1508 = (($fn1507) self->$class->vtable[48])(self);
            return $tmp1508;
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
    panda$core$Int64 $match$544741509;
    {
        org$pandalanguage$pandac$parser$Token $tmp1511 = (($fn1510) self->$class->vtable[6])(self);
        $match$544741509 = $tmp1511.kind;
        panda$core$Bit $tmp1512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$544741509, ((panda$core$Int64) { 30 }));
        if ($tmp1512.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1514 = (($fn1513) self->$class->vtable[36])(self, p_label);
            return $tmp1514;
        }
        }
        else {
        panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$544741509, ((panda$core$Int64) { 32 }));
        if ($tmp1515.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1517 = (($fn1516) self->$class->vtable[34])(self, p_label);
            return $tmp1517;
        }
        }
        else {
        panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$544741509, ((panda$core$Int64) { 35 }));
        if ($tmp1518.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1520 = (($fn1519) self->$class->vtable[37])(self, p_label);
            return $tmp1520;
        }
        }
        else {
        panda$core$Bit $tmp1521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$544741509, ((panda$core$Int64) { 31 }));
        if ($tmp1521.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1523 = (($fn1522) self->$class->vtable[35])(self, p_label);
            return $tmp1523;
        }
        }
        else {
        {
            (($fn1525) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1524);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $match$553041526;
    org$pandalanguage$pandac$parser$Token id1554;
    {
        org$pandalanguage$pandac$parser$Token $tmp1528 = (($fn1527) self->$class->vtable[6])(self);
        $match$553041526 = $tmp1528.kind;
        panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 36 }));
        if ($tmp1529.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1531 = (($fn1530) self->$class->vtable[31])(self);
            return $tmp1531;
        }
        }
        else {
        panda$core$Bit $tmp1532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 32 }));
        if ($tmp1532.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1534 = (($fn1533) self->$class->vtable[34])(self, NULL);
            return $tmp1534;
        }
        }
        else {
        panda$core$Bit $tmp1535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 31 }));
        if ($tmp1535.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1537 = (($fn1536) self->$class->vtable[35])(self, NULL);
            return $tmp1537;
        }
        }
        else {
        panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 30 }));
        if ($tmp1538.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1540 = (($fn1539) self->$class->vtable[36])(self, NULL);
            return $tmp1540;
        }
        }
        else {
        panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 35 }));
        if ($tmp1541.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1543 = (($fn1542) self->$class->vtable[37])(self, NULL);
            return $tmp1543;
        }
        }
        else {
        panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 44 }));
        if ($tmp1544.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1546 = (($fn1545) self->$class->vtable[38])(self);
            return $tmp1546;
        }
        }
        else {
        panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 38 }));
        if ($tmp1547.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1549 = (($fn1548) self->$class->vtable[40])(self);
            return $tmp1549;
        }
        }
        else {
        panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 99 }));
        if ($tmp1550.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1552 = (($fn1551) self->$class->vtable[41])(self);
            return $tmp1552;
        }
        }
        else {
        panda$core$Bit $tmp1553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 48 }));
        if ($tmp1553.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1556 = (($fn1555) self->$class->vtable[4])(self);
            id1554 = $tmp1556;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1558 = (($fn1557) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1558.nonnull }).value) {
            {
                panda$core$String* $tmp1560 = (($fn1559) self->$class->vtable[14])(self, id1554);
                org$pandalanguage$pandac$ASTNode* $tmp1562 = (($fn1561) self->$class->vtable[50])(self, $tmp1560);
                return $tmp1562;
            }
            }
            (($fn1563) self->$class->vtable[5])(self, id1554);
            org$pandalanguage$pandac$ASTNode* $tmp1565 = (($fn1564) self->$class->vtable[42])(self);
            return $tmp1565;
        }
        }
        else {
        panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 46 }));
        bool $tmp1566 = $tmp1567.value;
        if ($tmp1566) goto $l1568;
        panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 47 }));
        $tmp1566 = $tmp1569.value;
        $l1568:;
        panda$core$Bit $tmp1570 = { $tmp1566 };
        if ($tmp1570.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1572 = (($fn1571) self->$class->vtable[42])(self);
            return $tmp1572;
        }
        }
        else {
        panda$core$Bit $tmp1576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 23 }));
        bool $tmp1575 = $tmp1576.value;
        if ($tmp1575) goto $l1577;
        panda$core$Bit $tmp1578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 24 }));
        $tmp1575 = $tmp1578.value;
        $l1577:;
        panda$core$Bit $tmp1579 = { $tmp1575 };
        bool $tmp1574 = $tmp1579.value;
        if ($tmp1574) goto $l1580;
        panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 25 }));
        $tmp1574 = $tmp1581.value;
        $l1580:;
        panda$core$Bit $tmp1582 = { $tmp1574 };
        bool $tmp1573 = $tmp1582.value;
        if ($tmp1573) goto $l1583;
        panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 26 }));
        $tmp1573 = $tmp1584.value;
        $l1583:;
        panda$core$Bit $tmp1585 = { $tmp1573 };
        if ($tmp1585.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1587 = (($fn1586) self->$class->vtable[44])(self);
            return $tmp1587;
        }
        }
        else {
        panda$core$Bit $tmp1588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041526, ((panda$core$Int64) { 22 }));
        if ($tmp1588.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1590 = (($fn1589) self->$class->vtable[45])(self);
            return $tmp1590;
        }
        }
        else {
        {
            (($fn1592) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s1591);
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
    org$pandalanguage$pandac$parser$Token$nullable start1593;
    org$pandalanguage$pandac$parser$Token$nullable next1597;
    panda$core$MutableString* name1601;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1596 = (($fn1595) self->$class->vtable[8])(self, ((panda$core$Int64) { 14 }), &$s1594);
    start1593 = $tmp1596;
    if (((panda$core$Bit) { !start1593.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1600 = (($fn1599) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1598);
    next1597 = $tmp1600;
    if (((panda$core$Bit) { !next1597.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1602 = (panda$core$MutableString*) malloc(40);
    $tmp1602->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1602->refCount.value = 1;
    panda$core$String* $tmp1605 = (($fn1604) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1597.value));
    panda$core$MutableString$init$panda$core$String($tmp1602, $tmp1605);
    name1601 = $tmp1602;
    $l1606:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1609 = (($fn1608) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1597 = $tmp1609;
        if (((panda$core$Bit) { !next1597.nonnull }).value) {
        {
            goto $l1607;
        }
        }
        (($fn1611) name1601->$class->vtable[3])(name1601, &$s1610);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1614 = (($fn1613) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1612);
        next1597 = $tmp1614;
        if (((panda$core$Bit) { !next1597.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1616 = (($fn1615) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1597.value));
        (($fn1617) name1601->$class->vtable[3])(name1601, $tmp1616);
    }
    }
    $l1607:;
    org$pandalanguage$pandac$ASTNode* $tmp1618 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1618->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1618->refCount.value = 1;
    panda$core$String* $tmp1621 = (($fn1620) name1601->$class->vtable[0])(name1601);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1618, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1593.value).offset, $tmp1621);
    return $tmp1618;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1622;
    org$pandalanguage$pandac$parser$Token$nullable next1626;
    panda$core$MutableString* name1630;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1625 = (($fn1624) self->$class->vtable[8])(self, ((panda$core$Int64) { 15 }), &$s1623);
    start1622 = $tmp1625;
    if (((panda$core$Bit) { !start1622.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1629 = (($fn1628) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1627);
    next1626 = $tmp1629;
    if (((panda$core$Bit) { !next1626.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1631 = (panda$core$MutableString*) malloc(40);
    $tmp1631->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1631->refCount.value = 1;
    panda$core$String* $tmp1634 = (($fn1633) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1626.value));
    panda$core$MutableString$init$panda$core$String($tmp1631, $tmp1634);
    name1630 = $tmp1631;
    $l1635:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1638 = (($fn1637) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1626 = $tmp1638;
        if (((panda$core$Bit) { !next1626.nonnull }).value) {
        {
            goto $l1636;
        }
        }
        (($fn1640) name1630->$class->vtable[3])(name1630, &$s1639);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1643 = (($fn1642) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1641);
        next1626 = $tmp1643;
        if (((panda$core$Bit) { !next1626.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1645 = (($fn1644) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1626.value));
        (($fn1646) name1630->$class->vtable[3])(name1630, $tmp1645);
    }
    }
    $l1636:;
    org$pandalanguage$pandac$ASTNode* $tmp1647 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1647->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1647->refCount.value = 1;
    panda$core$String* $tmp1650 = (($fn1649) name1630->$class->vtable[0])(name1630);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1647, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1622.value).offset, $tmp1650);
    return $tmp1647;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1651;
    org$pandalanguage$pandac$parser$Token$nullable id1655;
    panda$collections$Array* children1659;
    panda$collections$Array* idChildren1662;
    org$pandalanguage$pandac$ASTNode* t1667;
    org$pandalanguage$pandac$ASTNode* t1683;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1654 = (($fn1653) self->$class->vtable[8])(self, ((panda$core$Int64) { 62 }), &$s1652);
    start1651 = $tmp1654;
    if (((panda$core$Bit) { !start1651.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1658 = (($fn1657) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1656);
    id1655 = $tmp1658;
    if (((panda$core$Bit) { !id1655.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1660 = (panda$collections$Array*) malloc(40);
    $tmp1660->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1660->refCount.value = 1;
    panda$collections$Array$init($tmp1660);
    children1659 = $tmp1660;
    panda$collections$Array* $tmp1663 = (panda$collections$Array*) malloc(40);
    $tmp1663->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1663->refCount.value = 1;
    panda$collections$Array$init($tmp1663);
    idChildren1662 = $tmp1663;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1666 = (($fn1665) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1666.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1669 = (($fn1668) self->$class->vtable[20])(self);
        t1667 = $tmp1669;
        if (((panda$core$Bit) { t1667 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1662, ((panda$core$Object*) t1667));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1670 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1670->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1670->refCount.value = 1;
    panda$core$String* $tmp1673 = (($fn1672) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1655.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1670, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1655.value).offset, ((panda$core$Object*) $tmp1673), ((panda$collections$ListView*) idChildren1662));
    panda$collections$Array$add$panda$collections$Array$T(children1659, ((panda$core$Object*) $tmp1670));
    $l1674:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1677 = (($fn1676) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1677.nonnull }).value) goto $l1675;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1680 = (($fn1679) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1678);
        id1655 = $tmp1680;
        if (((panda$core$Bit) { !id1655.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1662);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1682 = (($fn1681) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1682.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1685 = (($fn1684) self->$class->vtable[20])(self);
            t1683 = $tmp1685;
            if (((panda$core$Bit) { t1683 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1662, ((panda$core$Object*) t1683));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1686 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1686->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1686->refCount.value = 1;
        panda$core$String* $tmp1689 = (($fn1688) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1655.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1686, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1655.value).offset, ((panda$core$Object*) $tmp1689), ((panda$collections$ListView*) idChildren1662));
        panda$collections$Array$add$panda$collections$Array$T(children1659, ((panda$core$Object*) $tmp1686));
    }
    goto $l1674;
    $l1675:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1692 = (($fn1691) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s1690);
    if (((panda$core$Bit) { !$tmp1692.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1693 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1693->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1693->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1693, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1651.value).offset, ((panda$collections$ListView*) children1659));
    return $tmp1693;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaces$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1695;
    panda$collections$Array* children1699;
    org$pandalanguage$pandac$ASTNode* t1702;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1698 = (($fn1697) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1696);
    start1695 = $tmp1698;
    if (((panda$core$Bit) { !start1695.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1700 = (panda$collections$Array*) malloc(40);
    $tmp1700->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1700->refCount.value = 1;
    panda$collections$Array$init($tmp1700);
    children1699 = $tmp1700;
    org$pandalanguage$pandac$ASTNode* $tmp1704 = (($fn1703) self->$class->vtable[20])(self);
    t1702 = $tmp1704;
    if (((panda$core$Bit) { t1702 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1699, ((panda$core$Object*) t1702));
    $l1705:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1708 = (($fn1707) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1708.nonnull }).value) goto $l1706;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1710 = (($fn1709) self->$class->vtable[20])(self);
        t1702 = $tmp1710;
        if (((panda$core$Bit) { t1702 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1699, ((panda$core$Object*) t1702));
    }
    goto $l1705;
    $l1706:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1713 = (($fn1712) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1711);
    if (((panda$core$Bit) { !$tmp1713.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1714 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1714->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1714->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1714, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1695.value).offset, ((panda$collections$ListView*) children1699));
    return $tmp1714;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1716;
    org$pandalanguage$pandac$parser$Token$nullable next1721;
    panda$collections$Array* $tmp1717 = (panda$collections$Array*) malloc(40);
    $tmp1717->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1717->refCount.value = 1;
    panda$collections$Array$init($tmp1717);
    children1716 = $tmp1717;
    $l1719:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1723 = (($fn1722) self->$class->vtable[7])(self, ((panda$core$Int64) { 13 }));
        next1721 = $tmp1723;
        if (((panda$core$Bit) { !next1721.nonnull }).value) {
        {
            goto $l1720;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1724 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1724->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1724->refCount.value = 1;
        panda$core$String* $tmp1727 = (($fn1726) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1721.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1724, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1721.value).offset, $tmp1727);
        panda$collections$Array$add$panda$collections$Array$T(children1716, ((panda$core$Object*) $tmp1724));
    }
    }
    $l1720:;
    org$pandalanguage$pandac$ASTNode* $tmp1728 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1728->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1728->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1728, ((panda$core$Int64) { 144 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) children1716));
    return $tmp1728;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1730;
    panda$core$MutableString* result1734;
    org$pandalanguage$pandac$parser$Token next1739;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1733 = (($fn1732) self->$class->vtable[8])(self, ((panda$core$Int64) { 11 }), &$s1731);
    start1730 = $tmp1733;
    if (((panda$core$Bit) { !start1730.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1735 = (panda$core$MutableString*) malloc(40);
    $tmp1735->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1735->refCount.value = 1;
    panda$core$MutableString$init($tmp1735);
    result1734 = $tmp1735;
    $l1737:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1741 = (($fn1740) self->$class->vtable[3])(self);
        next1739 = $tmp1741;
        panda$core$Bit $tmp1742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1739.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1742.value) {
        {
            goto $l1738;
        }
        }
        panda$core$Bit $tmp1743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1739.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1743.value) {
        {
            (($fn1745) self->$class->vtable[9])(self, ((org$pandalanguage$pandac$parser$Token) start1730.value), &$s1744);
            return NULL;
        }
        }
        panda$core$String* $tmp1747 = (($fn1746) self->$class->vtable[14])(self, next1739);
        (($fn1748) result1734->$class->vtable[3])(result1734, $tmp1747);
    }
    }
    $l1738:;
    org$pandalanguage$pandac$ASTNode* $tmp1749 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1749->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1749->refCount.value = 1;
    panda$core$String* $tmp1752 = (($fn1751) result1734->$class->vtable[0])(result1734);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1749, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1730.value).offset, $tmp1752);
    return $tmp1749;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1753;
    org$pandalanguage$pandac$ASTNode* t1757;
    panda$collections$Array* children1760;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1756 = (($fn1755) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1754);
    id1753 = $tmp1756;
    if (((panda$core$Bit) { !id1753.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1759 = (($fn1758) self->$class->vtable[32])(self);
    t1757 = $tmp1759;
    if (((panda$core$Bit) { t1757 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1761 = (panda$collections$Array*) malloc(40);
    $tmp1761->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1761->refCount.value = 1;
    panda$collections$Array$init($tmp1761);
    children1760 = $tmp1761;
    panda$collections$Array$add$panda$collections$Array$T(children1760, ((panda$core$Object*) t1757));
    org$pandalanguage$pandac$ASTNode* $tmp1763 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1763->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1763->refCount.value = 1;
    panda$core$String* $tmp1766 = (($fn1765) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1753.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1763, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1753.value).offset, ((panda$core$Object*) $tmp1766), ((panda$collections$ListView*) children1760));
    return $tmp1763;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1767;
    panda$collections$Array* children1771;
    org$pandalanguage$pandac$ASTNode* param1776;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1770 = (($fn1769) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1768);
    start1767 = $tmp1770;
    if (((panda$core$Bit) { !start1767.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1772 = (panda$collections$Array*) malloc(40);
    $tmp1772->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1772->refCount.value = 1;
    panda$collections$Array$init($tmp1772);
    children1771 = $tmp1772;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1775 = (($fn1774) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1775.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1778 = (($fn1777) self->$class->vtable[58])(self);
        param1776 = $tmp1778;
        if (((panda$core$Bit) { param1776 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1771, ((panda$core$Object*) param1776));
        $l1779:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1782 = (($fn1781) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1782.nonnull }).value) goto $l1780;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1784 = (($fn1783) self->$class->vtable[58])(self);
            param1776 = $tmp1784;
            if (((panda$core$Bit) { param1776 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1771, ((panda$core$Object*) param1776));
        }
        goto $l1779;
        $l1780:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1787 = (($fn1786) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1785);
        if (((panda$core$Bit) { !$tmp1787.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1788 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1788->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1788->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1788, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1767.value).offset, ((panda$collections$ListView*) children1771));
    return $tmp1788;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1790;
    org$pandalanguage$pandac$parser$Token$nullable start1791;
    panda$core$String* name1797;
    panda$collections$Array* children1800;
    org$pandalanguage$pandac$ASTNode* params1803;
    org$pandalanguage$pandac$ASTNode* returnType1809;
    org$pandalanguage$pandac$ASTNode* b1817;
    org$pandalanguage$pandac$parser$Token token1822;
    panda$core$String* tokenText1825;
    org$pandalanguage$pandac$ASTNode* post1839;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1793 = (($fn1792) self->$class->vtable[7])(self, ((panda$core$Int64) { 20 }));
    start1791 = $tmp1793;
    if (((panda$core$Bit) { !start1791.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1796 = (($fn1795) self->$class->vtable[8])(self, ((panda$core$Int64) { 21 }), &$s1794);
        start1791 = $tmp1796;
        if (((panda$core$Bit) { !start1791.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1790 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1790 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1799 = (($fn1798) self->$class->vtable[19])(self);
    name1797 = $tmp1799;
    if (((panda$core$Bit) { name1797 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1801 = (panda$collections$Array*) malloc(40);
    $tmp1801->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1801->refCount.value = 1;
    panda$collections$Array$init($tmp1801);
    children1800 = $tmp1801;
    panda$collections$Array$add$panda$collections$Array$T(children1800, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1800, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1805 = (($fn1804) self->$class->vtable[59])(self);
    params1803 = $tmp1805;
    if (((panda$core$Bit) { params1803 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1800, ((panda$core$Object*) params1803));
    org$pandalanguage$pandac$parser$Token $tmp1807 = (($fn1806) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1807.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1808.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1811 = (($fn1810) self->$class->vtable[32])(self);
        returnType1809 = $tmp1811;
        if (((panda$core$Bit) { returnType1809 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1800, ((panda$core$Object*) returnType1809));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1812 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1812->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1812->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1812, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1800, ((panda$core$Object*) $tmp1812));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1815 = (($fn1814) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1815.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1816.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1819 = (($fn1818) self->$class->vtable[41])(self);
        b1817 = $tmp1819;
        if (((panda$core$Bit) { b1817 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1800, ((panda$core$Object*) b1817));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1820 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1820->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1820->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1820, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1800, ((panda$core$Object*) $tmp1820));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1824 = (($fn1823) self->$class->vtable[6])(self);
    token1822 = $tmp1824;
    panda$core$String* $tmp1827 = (($fn1826) self->$class->vtable[14])(self, token1822);
    tokenText1825 = $tmp1827;
    panda$core$Bit $tmp1829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1822.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1828 = $tmp1829.value;
    if (!$tmp1828) goto $l1830;
    panda$core$Bit $tmp1833 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1825, &$s1832);
    bool $tmp1831 = $tmp1833.value;
    if ($tmp1831) goto $l1834;
    panda$core$Bit $tmp1836 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1825, &$s1835);
    $tmp1831 = $tmp1836.value;
    $l1834:;
    panda$core$Bit $tmp1837 = { $tmp1831 };
    $tmp1828 = $tmp1837.value;
    $l1830:;
    panda$core$Bit $tmp1838 = { $tmp1828 };
    if ($tmp1838.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1841 = (($fn1840) self->$class->vtable[60])(self);
        post1839 = $tmp1841;
        if (((panda$core$Bit) { post1839 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1800, ((panda$core$Object*) post1839));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1842 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1842->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1842->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1842, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1800, ((panda$core$Object*) $tmp1842));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1844 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1844->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1844->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1844, kind1790, ((org$pandalanguage$pandac$parser$Token) start1791.value).offset, ((panda$core$Object*) name1797), ((panda$collections$ListView*) children1800));
    return $tmp1844;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1846;
    panda$collections$Array* children1850;
    org$pandalanguage$pandac$ASTNode* params1853;
    org$pandalanguage$pandac$ASTNode* b1856;
    org$pandalanguage$pandac$parser$Token token1859;
    panda$core$String* tokenText1862;
    org$pandalanguage$pandac$ASTNode* post1876;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1849 = (($fn1848) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1847);
    start1846 = $tmp1849;
    if (((panda$core$Bit) { !start1846.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1851 = (panda$collections$Array*) malloc(40);
    $tmp1851->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1851->refCount.value = 1;
    panda$collections$Array$init($tmp1851);
    children1850 = $tmp1851;
    panda$collections$Array$add$panda$collections$Array$T(children1850, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1850, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1855 = (($fn1854) self->$class->vtable[59])(self);
    params1853 = $tmp1855;
    if (((panda$core$Bit) { params1853 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1850, ((panda$core$Object*) params1853));
    org$pandalanguage$pandac$ASTNode* $tmp1858 = (($fn1857) self->$class->vtable[41])(self);
    b1856 = $tmp1858;
    if (((panda$core$Bit) { b1856 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1850, ((panda$core$Object*) b1856));
    org$pandalanguage$pandac$parser$Token $tmp1861 = (($fn1860) self->$class->vtable[6])(self);
    token1859 = $tmp1861;
    panda$core$String* $tmp1864 = (($fn1863) self->$class->vtable[14])(self, token1859);
    tokenText1862 = $tmp1864;
    panda$core$Bit $tmp1866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1859.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1865 = $tmp1866.value;
    if (!$tmp1865) goto $l1867;
    panda$core$Bit $tmp1870 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1862, &$s1869);
    bool $tmp1868 = $tmp1870.value;
    if ($tmp1868) goto $l1871;
    panda$core$Bit $tmp1873 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1862, &$s1872);
    $tmp1868 = $tmp1873.value;
    $l1871:;
    panda$core$Bit $tmp1874 = { $tmp1868 };
    $tmp1865 = $tmp1874.value;
    $l1867:;
    panda$core$Bit $tmp1875 = { $tmp1865 };
    if ($tmp1875.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1878 = (($fn1877) self->$class->vtable[60])(self);
        post1876 = $tmp1878;
        if (((panda$core$Bit) { post1876 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1850, ((panda$core$Object*) post1876));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1879 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1879->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1879->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1879, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1850, ((panda$core$Object*) $tmp1879));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1881 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1881->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1881->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1881, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1846.value).offset, ((panda$collections$ListView*) children1850));
    return $tmp1881;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1883;
    panda$collections$Array* children1886;
    org$pandalanguage$pandac$ASTNode* $tmp1885 = (($fn1884) self->$class->vtable[44])(self);
    decl1883 = $tmp1885;
    if (((panda$core$Bit) { decl1883 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1887 = (panda$collections$Array*) malloc(40);
    $tmp1887->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1887->refCount.value = 1;
    panda$collections$Array$init($tmp1887);
    children1886 = $tmp1887;
    panda$collections$Array$add$panda$collections$Array$T(children1886, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1886, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1886, ((panda$core$Object*) decl1883));
    org$pandalanguage$pandac$ASTNode* $tmp1889 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1889->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1889->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1889, ((panda$core$Int64) { 148 }), decl1883->offset, ((panda$collections$ListView*) children1886));
    return $tmp1889;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1891;
    org$pandalanguage$pandac$ASTNode* dc1894;
    org$pandalanguage$pandac$ASTNode* a1900;
    panda$core$Int64 $match$689261903;
    org$pandalanguage$pandac$parser$Token $tmp1893 = (($fn1892) self->$class->vtable[6])(self);
    start1891 = $tmp1893;
    panda$core$Bit $tmp1895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1891.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1895.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1897 = (($fn1896) self->$class->vtable[57])(self);
        dc1894 = $tmp1897;
        if (((panda$core$Bit) { dc1894 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1898 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1898->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1898->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1898, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        dc1894 = $tmp1898;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1902 = (($fn1901) self->$class->vtable[56])(self);
    a1900 = $tmp1902;
    if (((panda$core$Bit) { a1900 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1905 = (($fn1904) self->$class->vtable[6])(self);
        $match$689261903 = $tmp1905.kind;
        panda$core$Bit $tmp1906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261903, ((panda$core$Int64) { 17 }));
        if ($tmp1906.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1908 = (($fn1907) self->$class->vtable[65])(self, dc1894, a1900);
            return $tmp1908;
        }
        }
        else {
        panda$core$Bit $tmp1909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261903, ((panda$core$Int64) { 18 }));
        if ($tmp1909.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1911 = (($fn1910) self->$class->vtable[66])(self, dc1894, a1900);
            return $tmp1911;
        }
        }
        else {
        panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261903, ((panda$core$Int64) { 21 }));
        bool $tmp1912 = $tmp1913.value;
        if ($tmp1912) goto $l1914;
        panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261903, ((panda$core$Int64) { 20 }));
        $tmp1912 = $tmp1915.value;
        $l1914:;
        panda$core$Bit $tmp1916 = { $tmp1912 };
        if ($tmp1916.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1918 = (($fn1917) self->$class->vtable[61])(self, dc1894, a1900);
            return $tmp1918;
        }
        }
        else {
        panda$core$Bit $tmp1919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261903, ((panda$core$Int64) { 22 }));
        if ($tmp1919.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1921 = (($fn1920) self->$class->vtable[62])(self, dc1894, a1900);
            return $tmp1921;
        }
        }
        else {
        panda$core$Bit $tmp1925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261903, ((panda$core$Int64) { 23 }));
        bool $tmp1924 = $tmp1925.value;
        if ($tmp1924) goto $l1926;
        panda$core$Bit $tmp1927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261903, ((panda$core$Int64) { 24 }));
        $tmp1924 = $tmp1927.value;
        $l1926:;
        panda$core$Bit $tmp1928 = { $tmp1924 };
        bool $tmp1923 = $tmp1928.value;
        if ($tmp1923) goto $l1929;
        panda$core$Bit $tmp1930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261903, ((panda$core$Int64) { 25 }));
        $tmp1923 = $tmp1930.value;
        $l1929:;
        panda$core$Bit $tmp1931 = { $tmp1923 };
        bool $tmp1922 = $tmp1931.value;
        if ($tmp1922) goto $l1932;
        panda$core$Bit $tmp1933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261903, ((panda$core$Int64) { 26 }));
        $tmp1922 = $tmp1933.value;
        $l1932:;
        panda$core$Bit $tmp1934 = { $tmp1922 };
        if ($tmp1934.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1936 = (($fn1935) self->$class->vtable[63])(self, dc1894, a1900);
            return $tmp1936;
        }
        }
        else {
        {
            (($fn1938) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1937);
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
    panda$collections$Array* children1939;
    org$pandalanguage$pandac$parser$Token$nullable start1942;
    org$pandalanguage$pandac$parser$Token$nullable name1946;
    org$pandalanguage$pandac$ASTNode* generics1953;
    org$pandalanguage$pandac$ASTNode* superclass1961;
    org$pandalanguage$pandac$ASTNode* intfs1969;
    panda$collections$Array* members1977;
    org$pandalanguage$pandac$ASTNode* member1984;
    panda$collections$Array* $tmp1940 = (panda$collections$Array*) malloc(40);
    $tmp1940->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1940->refCount.value = 1;
    panda$collections$Array$init($tmp1940);
    children1939 = $tmp1940;
    panda$collections$Array$add$panda$collections$Array$T(children1939, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1939, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1945 = (($fn1944) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1943);
    start1942 = $tmp1945;
    if (((panda$core$Bit) { !start1942.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1949 = (($fn1948) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1947);
    name1946 = $tmp1949;
    if (((panda$core$Bit) { !name1946.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1951 = (($fn1950) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1951.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1952.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1955 = (($fn1954) self->$class->vtable[54])(self);
        generics1953 = $tmp1955;
        if (((panda$core$Bit) { generics1953 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1939, ((panda$core$Object*) generics1953));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1956 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1956->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1956->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1956, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1939, ((panda$core$Object*) $tmp1956));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1959 = (($fn1958) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1959.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1960.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1963 = (($fn1962) self->$class->vtable[32])(self);
        superclass1961 = $tmp1963;
        if (((panda$core$Bit) { superclass1961 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1939, ((panda$core$Object*) superclass1961));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1964 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1964->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1964->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1964, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1939, ((panda$core$Object*) $tmp1964));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1967 = (($fn1966) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1967.kind, ((panda$core$Int64) { 103 }));
    if ($tmp1968.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1971 = (($fn1970) self->$class->vtable[55])(self);
        intfs1969 = $tmp1971;
        if (((panda$core$Bit) { intfs1969 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1939, ((panda$core$Object*) intfs1969));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1972 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1972->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1972->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1972, ((panda$core$Int64) { 139 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1939, ((panda$core$Object*) $tmp1972));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1976 = (($fn1975) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1974);
    if (((panda$core$Bit) { !$tmp1976.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1978 = (panda$collections$Array*) malloc(40);
    $tmp1978->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1978->refCount.value = 1;
    panda$collections$Array$init($tmp1978);
    members1977 = $tmp1978;
    $l1980:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1983 = (($fn1982) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1983.nonnull }).value) goto $l1981;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1986 = (($fn1985) self->$class->vtable[64])(self);
        member1984 = $tmp1986;
        if (((panda$core$Bit) { member1984 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1977, ((panda$core$Object*) member1984));
    }
    goto $l1980;
    $l1981:;
    org$pandalanguage$pandac$ASTNode* $tmp1987 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1987->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1987->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1987, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1942.value).offset, ((panda$collections$ListView*) members1977));
    panda$collections$Array$add$panda$collections$Array$T(children1939, ((panda$core$Object*) $tmp1987));
    org$pandalanguage$pandac$ASTNode* $tmp1989 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1989->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1989->refCount.value = 1;
    panda$core$String* $tmp1992 = (($fn1991) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1946.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1989, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1942.value).offset, ((panda$core$Object*) $tmp1992), ((panda$collections$ListView*) children1939));
    return $tmp1989;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1993;
    org$pandalanguage$pandac$parser$Token$nullable start1996;
    org$pandalanguage$pandac$parser$Token$nullable name2000;
    org$pandalanguage$pandac$ASTNode* generics2007;
    panda$collections$Array* intfs2012;
    org$pandalanguage$pandac$ASTNode* t2017;
    panda$collections$Array* members2031;
    org$pandalanguage$pandac$ASTNode* member2038;
    panda$collections$Array* $tmp1994 = (panda$collections$Array*) malloc(40);
    $tmp1994->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1994->refCount.value = 1;
    panda$collections$Array$init($tmp1994);
    children1993 = $tmp1994;
    panda$collections$Array$add$panda$collections$Array$T(children1993, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1993, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1999 = (($fn1998) self->$class->vtable[8])(self, ((panda$core$Int64) { 18 }), &$s1997);
    start1996 = $tmp1999;
    if (((panda$core$Bit) { !start1996.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp2003 = (($fn2002) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s2001);
    name2000 = $tmp2003;
    if (((panda$core$Bit) { !name2000.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2005 = (($fn2004) self->$class->vtable[6])(self);
    panda$core$Bit $tmp2006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2005.kind, ((panda$core$Int64) { 62 }));
    if ($tmp2006.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2009 = (($fn2008) self->$class->vtable[54])(self);
        generics2007 = $tmp2009;
        if (((panda$core$Bit) { generics2007 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1993, ((panda$core$Object*) generics2007));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2010 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp2010->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2010->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp2010, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1993, ((panda$core$Object*) $tmp2010));
    }
    }
    panda$collections$Array* $tmp2013 = (panda$collections$Array*) malloc(40);
    $tmp2013->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2013->refCount.value = 1;
    panda$collections$Array$init($tmp2013);
    intfs2012 = $tmp2013;
    org$pandalanguage$pandac$parser$Token$nullable $tmp2016 = (($fn2015) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp2016.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2019 = (($fn2018) self->$class->vtable[20])(self);
        t2017 = $tmp2019;
        if (((panda$core$Bit) { t2017 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs2012, ((panda$core$Object*) t2017));
        $l2020:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp2023 = (($fn2022) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp2023.nonnull }).value) goto $l2021;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2025 = (($fn2024) self->$class->vtable[20])(self);
            t2017 = $tmp2025;
            if (((panda$core$Bit) { t2017 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs2012, ((panda$core$Object*) t2017));
        }
        goto $l2020;
        $l2021:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2026 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp2026->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2026->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2026, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1996.value).offset, ((panda$collections$ListView*) intfs2012));
    panda$collections$Array$add$panda$collections$Array$T(children1993, ((panda$core$Object*) $tmp2026));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2030 = (($fn2029) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s2028);
    if (((panda$core$Bit) { !$tmp2030.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp2032 = (panda$collections$Array*) malloc(40);
    $tmp2032->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2032->refCount.value = 1;
    panda$collections$Array$init($tmp2032);
    members2031 = $tmp2032;
    $l2034:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp2037 = (($fn2036) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp2037.nonnull }).value) goto $l2035;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2040 = (($fn2039) self->$class->vtable[64])(self);
        member2038 = $tmp2040;
        if (((panda$core$Bit) { member2038 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2031, ((panda$core$Object*) member2038));
    }
    goto $l2034;
    $l2035:;
    org$pandalanguage$pandac$ASTNode* $tmp2041 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp2041->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2041->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2041, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1996.value).offset, ((panda$collections$ListView*) members2031));
    panda$collections$Array$add$panda$collections$Array$T(children1993, ((panda$core$Object*) $tmp2041));
    org$pandalanguage$pandac$ASTNode* $tmp2043 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp2043->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2043->refCount.value = 1;
    panda$core$String* $tmp2046 = (($fn2045) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name2000.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2043, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1996.value).offset, ((panda$core$Object*) $tmp2046), ((panda$collections$ListView*) children1993));
    return $tmp2043;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $match$742412047;
    {
        org$pandalanguage$pandac$parser$Token $tmp2049 = (($fn2048) self->$class->vtable[6])(self);
        $match$742412047 = $tmp2049.kind;
        panda$core$Bit $tmp2050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412047, ((panda$core$Int64) { 15 }));
        if ($tmp2050.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2052 = (($fn2051) self->$class->vtable[53])(self);
            return $tmp2052;
        }
        }
        else {
        panda$core$Bit $tmp2053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412047, ((panda$core$Int64) { 14 }));
        if ($tmp2053.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2055 = (($fn2054) self->$class->vtable[52])(self);
            return $tmp2055;
        }
        }
        else {
        panda$core$Bit $tmp2062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412047, ((panda$core$Int64) { 17 }));
        bool $tmp2061 = $tmp2062.value;
        if ($tmp2061) goto $l2063;
        panda$core$Bit $tmp2064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412047, ((panda$core$Int64) { 18 }));
        $tmp2061 = $tmp2064.value;
        $l2063:;
        panda$core$Bit $tmp2065 = { $tmp2061 };
        bool $tmp2060 = $tmp2065.value;
        if ($tmp2060) goto $l2066;
        panda$core$Bit $tmp2067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412047, ((panda$core$Int64) { 19 }));
        $tmp2060 = $tmp2067.value;
        $l2066:;
        panda$core$Bit $tmp2068 = { $tmp2060 };
        bool $tmp2059 = $tmp2068.value;
        if ($tmp2059) goto $l2069;
        panda$core$Bit $tmp2070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412047, ((panda$core$Int64) { 21 }));
        $tmp2059 = $tmp2070.value;
        $l2069:;
        panda$core$Bit $tmp2071 = { $tmp2059 };
        bool $tmp2058 = $tmp2071.value;
        if ($tmp2058) goto $l2072;
        panda$core$Bit $tmp2073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412047, ((panda$core$Int64) { 20 }));
        $tmp2058 = $tmp2073.value;
        $l2072:;
        panda$core$Bit $tmp2074 = { $tmp2058 };
        bool $tmp2057 = $tmp2074.value;
        if ($tmp2057) goto $l2075;
        panda$core$Bit $tmp2076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412047, ((panda$core$Int64) { 13 }));
        $tmp2057 = $tmp2076.value;
        $l2075:;
        panda$core$Bit $tmp2077 = { $tmp2057 };
        bool $tmp2056 = $tmp2077.value;
        if ($tmp2056) goto $l2078;
        panda$core$Bit $tmp2079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412047, ((panda$core$Int64) { 11 }));
        $tmp2056 = $tmp2079.value;
        $l2078:;
        panda$core$Bit $tmp2080 = { $tmp2056 };
        if ($tmp2080.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2082 = (($fn2081) self->$class->vtable[64])(self);
            return $tmp2082;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2084 = (($fn2083) self->$class->vtable[51])(self);
            return $tmp2084;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2085;
    org$pandalanguage$pandac$ASTNode* entry2093;
    panda$collections$Array* $tmp2086 = (panda$collections$Array*) malloc(40);
    $tmp2086->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2086->refCount.value = 1;
    panda$collections$Array$init($tmp2086);
    entries2085 = $tmp2086;
    $l2088:;
    org$pandalanguage$pandac$parser$Token $tmp2091 = (($fn2090) self->$class->vtable[6])(self);
    panda$core$Bit $tmp2092 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2091.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp2092.value) goto $l2089;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2095 = (($fn2094) self->$class->vtable[67])(self);
        entry2093 = $tmp2095;
        if (((panda$core$Bit) { entry2093 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(entries2085, ((panda$core$Object*) entry2093));
    }
    goto $l2088;
    $l2089:;
    org$pandalanguage$pandac$ASTNode* $tmp2096 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp2096->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2096->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2096, ((panda$core$Int64) { 152 }), ((panda$core$Int64) { 0 }), ((panda$collections$ListView*) entries2085));
    return $tmp2096;
}

