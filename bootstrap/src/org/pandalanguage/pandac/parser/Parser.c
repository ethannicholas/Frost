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


org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$core$String$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$position$org$pandalanguage$pandac$parser$Token$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaces$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

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
typedef void (*$fn410)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn411)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn416)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn418)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn421)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn423)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn425)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn427)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn429)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn433)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn434)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn442)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn447)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn452)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn455)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn459)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn461)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn464)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn472)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn475)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn480)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn483)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn491)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn498)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn505)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn506)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn513)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn515)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn518)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn520)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn522)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn525)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn527)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn531)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn533)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn537)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn538)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn540)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn545)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn548)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn556)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn559)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn566)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn567)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn570)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn575)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn578)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn586)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn590)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn597)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn598)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn599)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn601)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn606)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn609)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn616)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn618)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn622)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn625)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn628)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn640)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn645)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn647)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn658)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn660)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn665)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn668)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn675)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn677)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn682)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn685)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn692)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn694)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn699)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn702)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn711)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn714)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn720)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn722)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn724)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn728)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn731)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn736)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn738)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn742)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn744)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn748)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn755)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn759)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn763)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn766)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn769)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn772)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn775)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn784)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn787)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn790)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn799)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn802)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn805)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn808)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn817)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn820)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn829)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn832)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn837)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn840)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn846)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn852)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn856)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn858)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn866)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn870)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn873)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn876)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn882)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn888)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn891)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn896)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn899)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn902)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn905)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn912)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn915)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn918)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn922)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn925)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn931)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn933)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn939)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn946)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn948)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn950)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn953)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn956)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn961)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn963)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn966)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn969)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn976)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn979)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn981)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn984)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn995)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn997)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1000)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1002)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1005)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1008)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1010)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1015)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1019)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1024)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1028)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1031)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1037)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1040)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1047)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1049)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1052)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1056)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1058)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1061)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1067)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1070)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1074)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1080)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1083)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1087)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1093)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1095)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1103)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1107)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1109)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1111)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1113)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1115)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1117)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1119)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1121)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1123)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1126)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1127)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1129)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1131)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1133)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1135)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1137)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1139)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1141)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1143)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1146)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1148)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1150)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1152)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef void (*$fn1154)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1155)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1157)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1159)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1161)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1164)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1167)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1171)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1176)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1180)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1184)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1186)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1193)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1197)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1202)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1206)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1210)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1212)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1219)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1223)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1231)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1234)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1238)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1242)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1245)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1247)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1250)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1254)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1257)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1263)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1269)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1273)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1275)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1278)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
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
typedef org$pandalanguage$pandac$parser$Token (*$fn1508)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1512)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1517)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1524)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1527)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1533)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1540)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1544)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1546)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1550)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1557)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1560)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1564)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1566)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1571)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1578)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1581)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1587)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn1589)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1591)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1593)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1595)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1597)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1604)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1608)(org$pandalanguage$pandac$parser$Parser*);

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
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1 };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 1 };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5, 1 };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4, 1 };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4, 1 };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6, 1 };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 1 };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6, 1 };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7, 1 };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42, 1 };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7, 1 };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39, 1 };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1 };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7, 1 };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10, 1 };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8, 1 };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47, 1 };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11, 1 };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9, 1 };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1 };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3, 1 };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
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
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11, 1 };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };

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
    panda$collections$Array* children412;
    org$pandalanguage$pandac$ASTNode* t415;
    panda$collections$Array* children436;
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
        panda$collections$Array$add$panda$collections$Array$T(children412, ((panda$core$Object*) result403));
        org$pandalanguage$pandac$ASTNode* $tmp417 = (($fn416) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
        t415 = $tmp417;
        if (((panda$core$Bit) { t415 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn418) self->$class->vtable[12])(self);
                return result403;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children412, ((panda$core$Object*) t415));
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
                    return result403;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children412, ((panda$core$Object*) t415));
        }
        goto $l419;
        $l420:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp428 = (($fn427) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s426);
        if (((panda$core$Bit) { !$tmp428.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn429) self->$class->vtable[12])(self);
                return result403;
            }
            }
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp430 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp430->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp430->refCount.value = 1;
        panda$core$String* $tmp432 = panda$core$MutableString$convert$R$panda$core$String(name387);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp430, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start383.value).offset, ((panda$core$Object*) $tmp432), ((panda$collections$ListView*) children412));
        result403 = $tmp430;
        (($fn433) self->$class->vtable[11])(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp435 = (($fn434) self->$class->vtable[7])(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp435.nonnull }).value) {
    {
        panda$collections$Array* $tmp437 = (panda$collections$Array*) malloc(40);
        $tmp437->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp437->refCount.value = 1;
        panda$collections$Array$init($tmp437);
        children436 = $tmp437;
        panda$collections$Array$add$panda$collections$Array$T(children436, ((panda$core$Object*) result403));
        org$pandalanguage$pandac$ASTNode* $tmp439 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp439->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp439->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp439, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start383.value).offset, ((panda$collections$ListView*) children436));
        result403 = $tmp439;
    }
    }
    return result403;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result441;
    org$pandalanguage$pandac$parser$Token token446;
    panda$collections$Array* children449;
    org$pandalanguage$pandac$ASTNode* expr454;
    panda$collections$Array* children468;
    org$pandalanguage$pandac$ASTNode* expr471;
    panda$core$String* name479;
    panda$collections$Array* children485;
    org$pandalanguage$pandac$ASTNode* target490;
    panda$collections$Array* children493;
    panda$core$String* name499;
    panda$core$MutableString* finalName501;
    panda$collections$Array* types507;
    org$pandalanguage$pandac$ASTNode* t512;
    panda$core$Bit shouldAccept529;
    org$pandalanguage$pandac$ASTNode* $tmp443 = (($fn442) self->$class->vtable[18])(self);
    result441 = $tmp443;
    if (((panda$core$Bit) { result441 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l444:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp448 = (($fn447) self->$class->vtable[4])(self);
        token446 = $tmp448;
        switch (token446.kind.value) {
            case 103:
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp450 = (panda$collections$Array*) malloc(40);
                $tmp450->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp450->refCount.value = 1;
                panda$collections$Array$init($tmp450);
                children449 = $tmp450;
                panda$collections$Array$add$panda$collections$Array$T(children449, ((panda$core$Object*) result441));
                org$pandalanguage$pandac$parser$Token$nullable $tmp453 = (($fn452) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp453.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp456 = (($fn455) self->$class->vtable[30])(self);
                    expr454 = $tmp456;
                    if (((panda$core$Bit) { expr454 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children449, ((panda$core$Object*) expr454));
                    $l457:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp460 = (($fn459) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp460.nonnull }).value) goto $l458;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp462 = (($fn461) self->$class->vtable[30])(self);
                        expr454 = $tmp462;
                        if (((panda$core$Bit) { expr454 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children449, ((panda$core$Object*) expr454));
                    }
                    goto $l457;
                    $l458:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp465 = (($fn464) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s463);
                    if (((panda$core$Bit) { !$tmp465.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp466 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp466->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp466->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp466, ((panda$core$Int64) { 107 }), token446.offset, ((panda$collections$ListView*) children449));
                result441 = $tmp466;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp469 = (panda$collections$Array*) malloc(40);
                $tmp469->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp469->refCount.value = 1;
                panda$collections$Array$init($tmp469);
                children468 = $tmp469;
                panda$collections$Array$add$panda$collections$Array$T(children468, ((panda$core$Object*) result441));
                org$pandalanguage$pandac$ASTNode* $tmp473 = (($fn472) self->$class->vtable[30])(self);
                expr471 = $tmp473;
                if (((panda$core$Bit) { expr471 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children468, ((panda$core$Object*) expr471));
                org$pandalanguage$pandac$parser$Token$nullable $tmp476 = (($fn475) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s474);
                if (((panda$core$Bit) { !$tmp476.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp477 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp477->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp477->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp477, ((panda$core$Int64) { 103 }), token446.offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children468));
                result441 = $tmp477;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp481 = (($fn480) self->$class->vtable[7])(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp481.nonnull }).value) {
                {
                    name479 = &$s482;
                }
                }
                else {
                {
                    panda$core$String* $tmp484 = (($fn483) self->$class->vtable[19])(self);
                    name479 = $tmp484;
                    if (((panda$core$Bit) { name479 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp486 = (panda$collections$Array*) malloc(40);
                $tmp486->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp486->refCount.value = 1;
                panda$collections$Array$init($tmp486);
                children485 = $tmp486;
                panda$collections$Array$add$panda$collections$Array$T(children485, ((panda$core$Object*) result441));
                org$pandalanguage$pandac$ASTNode* $tmp488 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp488->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp488->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp488, ((panda$core$Int64) { 108 }), token446.offset, ((panda$core$Object*) name479), ((panda$collections$ListView*) children485));
                result441 = $tmp488;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp492 = (($fn491) self->$class->vtable[20])(self);
                target490 = $tmp492;
                if (((panda$core$Bit) { target490 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp494 = (panda$collections$Array*) malloc(40);
                $tmp494->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp494->refCount.value = 1;
                panda$collections$Array$init($tmp494);
                children493 = $tmp494;
                panda$collections$Array$add$panda$collections$Array$T(children493, ((panda$core$Object*) result441));
                panda$collections$Array$add$panda$collections$Array$T(children493, ((panda$core$Object*) target490));
                org$pandalanguage$pandac$ASTNode* $tmp496 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp496->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp496->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp496, ((panda$core$Int64) { 111 }), token446.offset, ((panda$collections$ListView*) children493));
                result441 = $tmp496;
            }
            break;
            case 62:
            {
                (($fn498) self->$class->vtable[5])(self, token446);
                panda$core$String* $tmp500 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result441);
                name499 = $tmp500;
                if (((panda$core$Bit) { name499 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp502 = (panda$core$MutableString*) malloc(40);
                    $tmp502->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp502->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp502, name499);
                    finalName501 = $tmp502;
                    panda$core$MutableString$append$panda$core$String(finalName501, &$s504);
                    (($fn505) self->$class->vtable[10])(self);
                    (($fn506) self->$class->vtable[4])(self);
                    panda$collections$Array* $tmp508 = (panda$collections$Array*) malloc(40);
                    $tmp508->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp508->refCount.value = 1;
                    panda$collections$Array$init($tmp508);
                    types507 = $tmp508;
                    org$pandalanguage$pandac$ASTNode* $tmp510 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                    $tmp510->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp510->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp510, ((panda$core$Int64) { 109 }), result441->offset, name499);
                    panda$collections$Array$add$panda$collections$Array$T(types507, ((panda$core$Object*) $tmp510));
                    org$pandalanguage$pandac$ASTNode* $tmp514 = (($fn513) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                    t512 = $tmp514;
                    if (((panda$core$Bit) { t512 == NULL }).value) {
                    {
                        (($fn515) self->$class->vtable[12])(self);
                        return result441;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types507, ((panda$core$Object*) t512));
                    panda$core$MutableString$append$panda$core$Object(finalName501, ((panda$core$Object*) t512));
                    $l516:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp519 = (($fn518) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp519.nonnull }).value) goto $l517;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp521 = (($fn520) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                        t512 = $tmp521;
                        if (((panda$core$Bit) { t512 == NULL }).value) {
                        {
                            (($fn522) self->$class->vtable[12])(self);
                            return result441;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types507, ((panda$core$Object*) t512));
                        panda$core$MutableString$append$panda$core$String(finalName501, &$s523);
                        panda$core$MutableString$append$panda$core$Object(finalName501, ((panda$core$Object*) t512));
                    }
                    goto $l516;
                    $l517:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp526 = (($fn525) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s524);
                    if (((panda$core$Bit) { !$tmp526.nonnull }).value) {
                    {
                        (($fn527) self->$class->vtable[12])(self);
                        return result441;
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(finalName501, &$s528);
                    panda$core$Object* $tmp530 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp530)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp532 = (($fn531) self->$class->vtable[6])(self);
                        switch ($tmp532.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept529 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept529 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept529 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept529.value) {
                    {
                        (($fn533) self->$class->vtable[11])(self);
                        org$pandalanguage$pandac$ASTNode* $tmp534 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                        $tmp534->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp534->refCount.value = 1;
                        panda$core$String* $tmp536 = panda$core$MutableString$convert$R$panda$core$String(finalName501);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp534, ((panda$core$Int64) { 154 }), result441->offset, ((panda$core$Object*) $tmp536), ((panda$collections$ListView*) types507));
                        result441 = $tmp534;
                        goto $l444;
                    }
                    }
                    else {
                    {
                        (($fn537) self->$class->vtable[12])(self);
                        return result441;
                    }
                    }
                }
                }
                return result441;
            }
            break;
            default:
            {
                (($fn538) self->$class->vtable[5])(self, token446);
                return result441;
            }
        }
    }
    }
    $l445:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result539;
    org$pandalanguage$pandac$parser$Token$nullable op544;
    org$pandalanguage$pandac$ASTNode* next547;
    panda$collections$Array* children550;
    org$pandalanguage$pandac$ASTNode* $tmp541 = (($fn540) self->$class->vtable[22])(self);
    result539 = $tmp541;
    if (((panda$core$Bit) { result539 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l542:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp546 = (($fn545) self->$class->vtable[7])(self, ((panda$core$Int64) { 57 }));
        op544 = $tmp546;
        if (((panda$core$Bit) { !op544.nonnull }).value) {
        {
            goto $l543;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp549 = (($fn548) self->$class->vtable[22])(self);
        next547 = $tmp549;
        if (((panda$core$Bit) { next547 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp551 = (panda$collections$Array*) malloc(40);
        $tmp551->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp551->refCount.value = 1;
        panda$collections$Array$init($tmp551);
        children550 = $tmp551;
        panda$collections$Array$add$panda$collections$Array$T(children550, ((panda$core$Object*) result539));
        panda$collections$Array$add$panda$collections$Array$T(children550, ((panda$core$Object*) next547));
        org$pandalanguage$pandac$ASTNode* $tmp553 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp553->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp553->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp553, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op544.value).offset, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op544.value).kind)), ((panda$collections$ListView*) children550));
        result539 = $tmp553;
    }
    }
    $l543:;
    return result539;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op555;
    org$pandalanguage$pandac$ASTNode* base558;
    panda$collections$Array* children561;
    org$pandalanguage$pandac$parser$Token $tmp557 = (($fn556) self->$class->vtable[4])(self);
    op555 = $tmp557;
    switch (op555.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp560 = (($fn559) self->$class->vtable[23])(self);
            base558 = $tmp560;
            if (((panda$core$Bit) { base558 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp562 = (panda$collections$Array*) malloc(40);
            $tmp562->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp562->refCount.value = 1;
            panda$collections$Array$init($tmp562);
            children561 = $tmp562;
            panda$collections$Array$add$panda$collections$Array$T(children561, ((panda$core$Object*) base558));
            org$pandalanguage$pandac$ASTNode* $tmp564 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp564->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp564->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp564, ((panda$core$Int64) { 112 }), op555.offset, ((panda$core$Object*) wrap_panda$core$Int64(op555.kind)), ((panda$collections$ListView*) children561));
            return $tmp564;
        }
        break;
        default:
        {
            (($fn566) self->$class->vtable[5])(self, op555);
            org$pandalanguage$pandac$ASTNode* $tmp568 = (($fn567) self->$class->vtable[23])(self);
            return $tmp568;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result569;
    org$pandalanguage$pandac$parser$Token op574;
    org$pandalanguage$pandac$ASTNode* next577;
    panda$collections$Array* children580;
    org$pandalanguage$pandac$parser$Token nextToken585;
    org$pandalanguage$pandac$ASTNode* next589;
    panda$collections$Array* children592;
    org$pandalanguage$pandac$ASTNode* $tmp571 = (($fn570) self->$class->vtable[24])(self);
    result569 = $tmp571;
    if (((panda$core$Bit) { result569 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l572:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp576 = (($fn575) self->$class->vtable[4])(self);
        op574 = $tmp576;
        switch (op574.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp579 = (($fn578) self->$class->vtable[24])(self);
                next577 = $tmp579;
                if (((panda$core$Bit) { next577 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp581 = (panda$collections$Array*) malloc(40);
                $tmp581->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp581->refCount.value = 1;
                panda$collections$Array$init($tmp581);
                children580 = $tmp581;
                panda$collections$Array$add$panda$collections$Array$T(children580, ((panda$core$Object*) result569));
                panda$collections$Array$add$panda$collections$Array$T(children580, ((panda$core$Object*) next577));
                org$pandalanguage$pandac$ASTNode* $tmp583 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp583->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp583->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp583, ((panda$core$Int64) { 103 }), op574.offset, ((panda$core$Object*) wrap_panda$core$Int64(op574.kind)), ((panda$collections$ListView*) children580));
                result569 = $tmp583;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp587 = (($fn586) self->$class->vtable[3])(self);
                nextToken585 = $tmp587;
                panda$core$Bit $tmp588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken585.kind, ((panda$core$Int64) { 63 }));
                if ($tmp588.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp591 = (($fn590) self->$class->vtable[24])(self);
                    next589 = $tmp591;
                    if (((panda$core$Bit) { next589 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp593 = (panda$collections$Array*) malloc(40);
                    $tmp593->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp593->refCount.value = 1;
                    panda$collections$Array$init($tmp593);
                    children592 = $tmp593;
                    panda$collections$Array$add$panda$collections$Array$T(children592, ((panda$core$Object*) result569));
                    panda$collections$Array$add$panda$collections$Array$T(children592, ((panda$core$Object*) next589));
                    org$pandalanguage$pandac$ASTNode* $tmp595 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                    $tmp595->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp595->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp595, ((panda$core$Int64) { 103 }), op574.offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children592));
                    result569 = $tmp595;
                }
                }
                else {
                {
                    (($fn597) self->$class->vtable[5])(self, nextToken585);
                    (($fn598) self->$class->vtable[5])(self, op574);
                    return result569;
                }
                }
            }
            break;
            default:
            {
                (($fn599) self->$class->vtable[5])(self, op574);
                return result569;
            }
        }
    }
    }
    $l573:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result600;
    org$pandalanguage$pandac$parser$Token op605;
    org$pandalanguage$pandac$ASTNode* next608;
    panda$collections$Array* children611;
    org$pandalanguage$pandac$ASTNode* $tmp602 = (($fn601) self->$class->vtable[25])(self);
    result600 = $tmp602;
    if (((panda$core$Bit) { result600 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l603:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp607 = (($fn606) self->$class->vtable[4])(self);
        op605 = $tmp607;
        switch (op605.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp610 = (($fn609) self->$class->vtable[25])(self);
                next608 = $tmp610;
                if (((panda$core$Bit) { next608 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp612 = (panda$collections$Array*) malloc(40);
                $tmp612->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp612->refCount.value = 1;
                panda$collections$Array$init($tmp612);
                children611 = $tmp612;
                panda$collections$Array$add$panda$collections$Array$T(children611, ((panda$core$Object*) result600));
                panda$collections$Array$add$panda$collections$Array$T(children611, ((panda$core$Object*) next608));
                org$pandalanguage$pandac$ASTNode* $tmp614 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp614->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp614->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp614, ((panda$core$Int64) { 103 }), op605.offset, ((panda$core$Object*) wrap_panda$core$Int64(op605.kind)), ((panda$collections$ListView*) children611));
                result600 = $tmp614;
            }
            break;
            default:
            {
                (($fn616) self->$class->vtable[5])(self, op605);
                return result600;
            }
        }
    }
    }
    $l604:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result617;
    org$pandalanguage$pandac$parser$Token op624;
    org$pandalanguage$pandac$parser$Token next627;
    org$pandalanguage$pandac$ASTNode* right630;
    org$pandalanguage$pandac$ASTNode* step644;
    panda$collections$Array* children651;
    panda$core$Int64 kind654;
    org$pandalanguage$pandac$parser$Token $tmp619 = (($fn618) self->$class->vtable[6])(self);
    switch ($tmp619.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp620 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp620->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp620->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp620, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
            result617 = $tmp620;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp623 = (($fn622) self->$class->vtable[26])(self);
            result617 = $tmp623;
            if (((panda$core$Bit) { result617 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp626 = (($fn625) self->$class->vtable[4])(self);
    op624 = $tmp626;
    switch (op624.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$parser$Token $tmp629 = (($fn628) self->$class->vtable[6])(self);
            next627 = $tmp629;
            panda$core$Bit $tmp633 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next627.kind, ((panda$core$Int64) { 102 }));
            bool $tmp632 = $tmp633.value;
            if (!$tmp632) goto $l634;
            panda$core$Bit $tmp635 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next627.kind, ((panda$core$Int64) { 104 }));
            $tmp632 = $tmp635.value;
            $l634:;
            panda$core$Bit $tmp636 = { $tmp632 };
            bool $tmp631 = $tmp636.value;
            if (!$tmp631) goto $l637;
            panda$core$Bit $tmp638 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next627.kind, ((panda$core$Int64) { 33 }));
            $tmp631 = $tmp638.value;
            $l637:;
            panda$core$Bit $tmp639 = { $tmp631 };
            if ($tmp639.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp641 = (($fn640) self->$class->vtable[26])(self);
                right630 = $tmp641;
                if (((panda$core$Bit) { right630 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp642 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp642->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp642->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp642, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
                right630 = $tmp642;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp646 = (($fn645) self->$class->vtable[7])(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp646.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp648 = (($fn647) self->$class->vtable[26])(self);
                step644 = $tmp648;
                if (((panda$core$Bit) { step644 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp649 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp649->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp649->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp649, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
                step644 = $tmp649;
            }
            }
            panda$collections$Array* $tmp652 = (panda$collections$Array*) malloc(40);
            $tmp652->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp652->refCount.value = 1;
            panda$collections$Array$init($tmp652);
            children651 = $tmp652;
            panda$collections$Array$add$panda$collections$Array$T(children651, ((panda$core$Object*) result617));
            panda$collections$Array$add$panda$collections$Array$T(children651, ((panda$core$Object*) right630));
            panda$collections$Array$add$panda$collections$Array$T(children651, ((panda$core$Object*) step644));
            panda$core$Bit $tmp655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op624.kind, ((panda$core$Int64) { 97 }));
            if ($tmp655.value) {
            {
                kind654 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind654 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp656 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp656->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp656->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp656, kind654, op624.offset, ((panda$collections$ListView*) children651));
            return $tmp656;
        }
        break;
        default:
        {
            (($fn658) self->$class->vtable[5])(self, op624);
            return result617;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result659;
    org$pandalanguage$pandac$parser$Token op664;
    org$pandalanguage$pandac$ASTNode* next667;
    panda$collections$Array* children670;
    org$pandalanguage$pandac$ASTNode* $tmp661 = (($fn660) self->$class->vtable[27])(self);
    result659 = $tmp661;
    if (((panda$core$Bit) { result659 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l662:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp666 = (($fn665) self->$class->vtable[4])(self);
        op664 = $tmp666;
        switch (op664.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp669 = (($fn668) self->$class->vtable[27])(self);
                next667 = $tmp669;
                if (((panda$core$Bit) { next667 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp671 = (panda$collections$Array*) malloc(40);
                $tmp671->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp671->refCount.value = 1;
                panda$collections$Array$init($tmp671);
                children670 = $tmp671;
                panda$collections$Array$add$panda$collections$Array$T(children670, ((panda$core$Object*) result659));
                panda$collections$Array$add$panda$collections$Array$T(children670, ((panda$core$Object*) next667));
                org$pandalanguage$pandac$ASTNode* $tmp673 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp673->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp673->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp673, ((panda$core$Int64) { 103 }), op664.offset, ((panda$core$Object*) wrap_panda$core$Int64(op664.kind)), ((panda$collections$ListView*) children670));
                result659 = $tmp673;
            }
            break;
            default:
            {
                (($fn675) self->$class->vtable[5])(self, op664);
                return result659;
            }
        }
    }
    }
    $l663:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result676;
    org$pandalanguage$pandac$parser$Token op681;
    org$pandalanguage$pandac$ASTNode* next684;
    panda$collections$Array* children687;
    org$pandalanguage$pandac$ASTNode* $tmp678 = (($fn677) self->$class->vtable[28])(self);
    result676 = $tmp678;
    if (((panda$core$Bit) { result676 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l679:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp683 = (($fn682) self->$class->vtable[4])(self);
        op681 = $tmp683;
        switch (op681.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp686 = (($fn685) self->$class->vtable[28])(self);
                next684 = $tmp686;
                if (((panda$core$Bit) { next684 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp688 = (panda$collections$Array*) malloc(40);
                $tmp688->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp688->refCount.value = 1;
                panda$collections$Array$init($tmp688);
                children687 = $tmp688;
                panda$collections$Array$add$panda$collections$Array$T(children687, ((panda$core$Object*) result676));
                panda$collections$Array$add$panda$collections$Array$T(children687, ((panda$core$Object*) next684));
                org$pandalanguage$pandac$ASTNode* $tmp690 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp690->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp690->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp690, ((panda$core$Int64) { 103 }), op681.offset, ((panda$core$Object*) wrap_panda$core$Int64(op681.kind)), ((panda$collections$ListView*) children687));
                result676 = $tmp690;
            }
            break;
            default:
            {
                (($fn692) self->$class->vtable[5])(self, op681);
                return result676;
            }
        }
    }
    }
    $l680:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result693;
    org$pandalanguage$pandac$parser$Token$nullable op698;
    org$pandalanguage$pandac$ASTNode* next701;
    panda$collections$Array* children704;
    org$pandalanguage$pandac$ASTNode* $tmp695 = (($fn694) self->$class->vtable[29])(self);
    result693 = $tmp695;
    if (((panda$core$Bit) { result693 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l696:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp700 = (($fn699) self->$class->vtable[7])(self, ((panda$core$Int64) { 68 }));
        op698 = $tmp700;
        if (((panda$core$Bit) { !op698.nonnull }).value) {
        {
            goto $l697;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp703 = (($fn702) self->$class->vtable[29])(self);
        next701 = $tmp703;
        if (((panda$core$Bit) { next701 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp705 = (panda$collections$Array*) malloc(40);
        $tmp705->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp705->refCount.value = 1;
        panda$collections$Array$init($tmp705);
        children704 = $tmp705;
        panda$collections$Array$add$panda$collections$Array$T(children704, ((panda$core$Object*) result693));
        panda$collections$Array$add$panda$collections$Array$T(children704, ((panda$core$Object*) next701));
        org$pandalanguage$pandac$ASTNode* $tmp707 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp707->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp707->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp707, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op698.value).offset, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op698.value).kind)), ((panda$collections$ListView*) children704));
        result693 = $tmp707;
    }
    }
    $l697:;
    return result693;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start709;
    org$pandalanguage$pandac$ASTNode* test713;
    panda$collections$Array* children716;
    org$pandalanguage$pandac$ASTNode* ifTrue719;
    org$pandalanguage$pandac$ASTNode* ifFalse727;
    org$pandalanguage$pandac$ASTNode* ifFalse730;
    org$pandalanguage$pandac$parser$Token$nullable $tmp712 = (($fn711) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s710);
    start709 = $tmp712;
    if (((panda$core$Bit) { !start709.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp715 = (($fn714) self->$class->vtable[30])(self);
    test713 = $tmp715;
    if (((panda$core$Bit) { test713 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp717 = (panda$collections$Array*) malloc(40);
    $tmp717->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp717->refCount.value = 1;
    panda$collections$Array$init($tmp717);
    children716 = $tmp717;
    panda$collections$Array$add$panda$collections$Array$T(children716, ((panda$core$Object*) test713));
    org$pandalanguage$pandac$ASTNode* $tmp721 = (($fn720) self->$class->vtable[41])(self);
    ifTrue719 = $tmp721;
    if (((panda$core$Bit) { ifTrue719 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children716, ((panda$core$Object*) ifTrue719));
    org$pandalanguage$pandac$parser$Token$nullable $tmp723 = (($fn722) self->$class->vtable[7])(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp723.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp725 = (($fn724) self->$class->vtable[6])(self);
        panda$core$Bit $tmp726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp725.kind, ((panda$core$Int64) { 36 }));
        if ($tmp726.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp729 = (($fn728) self->$class->vtable[31])(self);
            ifFalse727 = $tmp729;
            if (((panda$core$Bit) { ifFalse727 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children716, ((panda$core$Object*) ifFalse727));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp732 = (($fn731) self->$class->vtable[41])(self);
            ifFalse730 = $tmp732;
            if (((panda$core$Bit) { ifFalse730 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children716, ((panda$core$Object*) ifFalse730));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp733 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp733->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp733->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp733, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start709.value).offset, ((panda$collections$ListView*) children716));
    return $tmp733;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp737 = (($fn736) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s735);
    if (((panda$core$Bit) { !$tmp737.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp739 = (($fn738) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
    return $tmp739;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id740;
    org$pandalanguage$pandac$ASTNode* type747;
    panda$collections$Array* children750;
    org$pandalanguage$pandac$parser$Token$nullable $tmp743 = (($fn742) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s741);
    id740 = $tmp743;
    if (((panda$core$Bit) { !id740.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp745 = (($fn744) self->$class->vtable[6])(self);
    panda$core$Bit $tmp746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp745.kind, ((panda$core$Int64) { 95 }));
    if ($tmp746.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp749 = (($fn748) self->$class->vtable[32])(self);
        type747 = $tmp749;
        if (((panda$core$Bit) { type747 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp751 = (panda$collections$Array*) malloc(40);
        $tmp751->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp751->refCount.value = 1;
        panda$collections$Array$init($tmp751);
        children750 = $tmp751;
        panda$collections$Array$add$panda$collections$Array$T(children750, ((panda$core$Object*) type747));
        org$pandalanguage$pandac$ASTNode* $tmp753 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp753->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp753->refCount.value = 1;
        panda$core$String* $tmp756 = (($fn755) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id740.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp753, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id740.value).offset, ((panda$core$Object*) $tmp756), ((panda$collections$ListView*) children750));
        return $tmp753;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp757 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp757->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp757->refCount.value = 1;
    panda$core$String* $tmp760 = (($fn759) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id740.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp757, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id740.value).offset, $tmp760);
    return $tmp757;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start761;
    org$pandalanguage$pandac$ASTNode* t765;
    org$pandalanguage$pandac$ASTNode* list771;
    org$pandalanguage$pandac$ASTNode* block774;
    panda$collections$Array* children777;
    org$pandalanguage$pandac$parser$Token$nullable $tmp764 = (($fn763) self->$class->vtable[8])(self, ((panda$core$Int64) { 32 }), &$s762);
    start761 = $tmp764;
    if (((panda$core$Bit) { !start761.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp767 = (($fn766) self->$class->vtable[33])(self);
    t765 = $tmp767;
    if (((panda$core$Bit) { t765 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp770 = (($fn769) self->$class->vtable[8])(self, ((panda$core$Int64) { 34 }), &$s768);
    if (((panda$core$Bit) { !$tmp770.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp773 = (($fn772) self->$class->vtable[30])(self);
    list771 = $tmp773;
    if (((panda$core$Bit) { list771 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp776 = (($fn775) self->$class->vtable[41])(self);
    block774 = $tmp776;
    if (((panda$core$Bit) { block774 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp778 = (panda$collections$Array*) malloc(40);
    $tmp778->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp778->refCount.value = 1;
    panda$collections$Array$init($tmp778);
    children777 = $tmp778;
    panda$collections$Array$add$panda$collections$Array$T(children777, ((panda$core$Object*) t765));
    panda$collections$Array$add$panda$collections$Array$T(children777, ((panda$core$Object*) list771));
    panda$collections$Array$add$panda$collections$Array$T(children777, ((panda$core$Object*) block774));
    org$pandalanguage$pandac$ASTNode* $tmp780 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp780->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp780->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp780, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start761.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children777));
    return $tmp780;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start782;
    org$pandalanguage$pandac$ASTNode* test786;
    org$pandalanguage$pandac$ASTNode* body789;
    panda$collections$Array* children792;
    org$pandalanguage$pandac$parser$Token$nullable $tmp785 = (($fn784) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s783);
    start782 = $tmp785;
    if (((panda$core$Bit) { !start782.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp788 = (($fn787) self->$class->vtable[30])(self);
    test786 = $tmp788;
    if (((panda$core$Bit) { test786 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp791 = (($fn790) self->$class->vtable[41])(self);
    body789 = $tmp791;
    if (((panda$core$Bit) { body789 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp793 = (panda$collections$Array*) malloc(40);
    $tmp793->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp793->refCount.value = 1;
    panda$collections$Array$init($tmp793);
    children792 = $tmp793;
    panda$collections$Array$add$panda$collections$Array$T(children792, ((panda$core$Object*) test786));
    panda$collections$Array$add$panda$collections$Array$T(children792, ((panda$core$Object*) body789));
    org$pandalanguage$pandac$ASTNode* $tmp795 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp795->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp795->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp795, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start782.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children792));
    return $tmp795;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start797;
    org$pandalanguage$pandac$ASTNode* body801;
    org$pandalanguage$pandac$ASTNode* test807;
    panda$collections$Array* children810;
    org$pandalanguage$pandac$parser$Token$nullable $tmp800 = (($fn799) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s798);
    start797 = $tmp800;
    if (((panda$core$Bit) { !start797.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp803 = (($fn802) self->$class->vtable[41])(self);
    body801 = $tmp803;
    if (((panda$core$Bit) { body801 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp806 = (($fn805) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s804);
    if (((panda$core$Bit) { !$tmp806.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp809 = (($fn808) self->$class->vtable[30])(self);
    test807 = $tmp809;
    if (((panda$core$Bit) { test807 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp811 = (panda$collections$Array*) malloc(40);
    $tmp811->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp811->refCount.value = 1;
    panda$collections$Array$init($tmp811);
    children810 = $tmp811;
    panda$collections$Array$add$panda$collections$Array$T(children810, ((panda$core$Object*) body801));
    panda$collections$Array$add$panda$collections$Array$T(children810, ((panda$core$Object*) test807));
    org$pandalanguage$pandac$ASTNode* $tmp813 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp813->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp813->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp813, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start797.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children810));
    return $tmp813;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start815;
    org$pandalanguage$pandac$ASTNode* body819;
    panda$collections$Array* children822;
    org$pandalanguage$pandac$parser$Token$nullable $tmp818 = (($fn817) self->$class->vtable[8])(self, ((panda$core$Int64) { 35 }), &$s816);
    start815 = $tmp818;
    if (((panda$core$Bit) { !start815.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp821 = (($fn820) self->$class->vtable[41])(self);
    body819 = $tmp821;
    if (((panda$core$Bit) { body819 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp823 = (panda$collections$Array*) malloc(40);
    $tmp823->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp823->refCount.value = 1;
    panda$collections$Array$init($tmp823);
    children822 = $tmp823;
    panda$collections$Array$add$panda$collections$Array$T(children822, ((panda$core$Object*) body819));
    org$pandalanguage$pandac$ASTNode* $tmp825 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp825->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp825->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp825, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start815.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children822));
    return $tmp825;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start827;
    org$pandalanguage$pandac$ASTNode* expr831;
    panda$collections$Array* children834;
    org$pandalanguage$pandac$ASTNode* message839;
    org$pandalanguage$pandac$parser$Token$nullable $tmp830 = (($fn829) self->$class->vtable[8])(self, ((panda$core$Int64) { 44 }), &$s828);
    start827 = $tmp830;
    if (((panda$core$Bit) { !start827.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp833 = (($fn832) self->$class->vtable[30])(self);
    expr831 = $tmp833;
    if (((panda$core$Bit) { expr831 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp835 = (panda$collections$Array*) malloc(40);
    $tmp835->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp835->refCount.value = 1;
    panda$collections$Array$init($tmp835);
    children834 = $tmp835;
    panda$collections$Array$add$panda$collections$Array$T(children834, ((panda$core$Object*) expr831));
    org$pandalanguage$pandac$parser$Token$nullable $tmp838 = (($fn837) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp838.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp841 = (($fn840) self->$class->vtable[30])(self);
        message839 = $tmp841;
        if (((panda$core$Bit) { message839 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children834, ((panda$core$Object*) message839));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp842 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp842->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp842->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp842, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start827.value).offset, ((panda$collections$ListView*) children834));
    return $tmp842;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start844;
    panda$collections$Array* expressions848;
    org$pandalanguage$pandac$ASTNode* expr851;
    panda$collections$Array* children860;
    org$pandalanguage$pandac$ASTNode* stmt872;
    org$pandalanguage$pandac$ASTNode* stmt875;
    org$pandalanguage$pandac$parser$Token$nullable $tmp847 = (($fn846) self->$class->vtable[8])(self, ((panda$core$Int64) { 39 }), &$s845);
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
    expressions848 = $tmp849;
    org$pandalanguage$pandac$ASTNode* $tmp853 = (($fn852) self->$class->vtable[30])(self);
    expr851 = $tmp853;
    if (((panda$core$Bit) { expr851 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions848, ((panda$core$Object*) expr851));
    $l854:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp857 = (($fn856) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp857.nonnull }).value) goto $l855;
    {
        org$pandalanguage$pandac$ASTNode* $tmp859 = (($fn858) self->$class->vtable[30])(self);
        expr851 = $tmp859;
        if (((panda$core$Bit) { expr851 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions848, ((panda$core$Object*) expr851));
    }
    goto $l854;
    $l855:;
    panda$collections$Array* $tmp861 = (panda$collections$Array*) malloc(40);
    $tmp861->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp861->refCount.value = 1;
    panda$collections$Array$init($tmp861);
    children860 = $tmp861;
    org$pandalanguage$pandac$ASTNode* $tmp863 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp863->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp863->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp863, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start844.value).offset, ((panda$collections$ListView*) expressions848));
    panda$collections$Array$add$panda$collections$Array$T(children860, ((panda$core$Object*) $tmp863));
    org$pandalanguage$pandac$parser$Token$nullable $tmp867 = (($fn866) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s865);
    if (((panda$core$Bit) { !$tmp867.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l868:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp871 = (($fn870) self->$class->vtable[6])(self);
        switch ($tmp871.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l869;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp874 = (($fn873) self->$class->vtable[49])(self);
                stmt872 = $tmp874;
                if (((panda$core$Bit) { stmt872 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children860, ((panda$core$Object*) stmt872));
                goto $l869;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp877 = (($fn876) self->$class->vtable[51])(self);
                    stmt875 = $tmp877;
                    if (((panda$core$Bit) { stmt875 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children860, ((panda$core$Object*) stmt875));
                }
            }
        }
    }
    }
    $l869:;
    org$pandalanguage$pandac$ASTNode* $tmp878 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp878->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp878->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp878, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start844.value).offset, ((panda$collections$ListView*) children860));
    return $tmp878;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start880;
    panda$collections$Array* children884;
    org$pandalanguage$pandac$ASTNode* expr887;
    org$pandalanguage$pandac$parser$Token token895;
    org$pandalanguage$pandac$ASTNode* w898;
    org$pandalanguage$pandac$parser$Token o901;
    panda$collections$Array* statements907;
    org$pandalanguage$pandac$ASTNode* stmt914;
    org$pandalanguage$pandac$ASTNode* stmt917;
    org$pandalanguage$pandac$parser$Token$nullable $tmp883 = (($fn882) self->$class->vtable[8])(self, ((panda$core$Int64) { 38 }), &$s881);
    start880 = $tmp883;
    if (((panda$core$Bit) { !start880.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp885 = (panda$collections$Array*) malloc(40);
    $tmp885->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp885->refCount.value = 1;
    panda$collections$Array$init($tmp885);
    children884 = $tmp885;
    org$pandalanguage$pandac$ASTNode* $tmp889 = (($fn888) self->$class->vtable[30])(self);
    expr887 = $tmp889;
    if (((panda$core$Bit) { expr887 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children884, ((panda$core$Object*) expr887));
    org$pandalanguage$pandac$parser$Token$nullable $tmp892 = (($fn891) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s890);
    if (((panda$core$Bit) { !$tmp892.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l893:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp897 = (($fn896) self->$class->vtable[6])(self);
        token895 = $tmp897;
        switch (token895.kind.value) {
            case 100:
            {
                goto $l894;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp900 = (($fn899) self->$class->vtable[39])(self);
                w898 = $tmp900;
                if (((panda$core$Bit) { w898 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children884, ((panda$core$Object*) w898));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp903 = (($fn902) self->$class->vtable[4])(self);
                o901 = $tmp903;
                org$pandalanguage$pandac$parser$Token$nullable $tmp906 = (($fn905) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s904);
                if (((panda$core$Bit) { !$tmp906.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp908 = (panda$collections$Array*) malloc(40);
                $tmp908->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp908->refCount.value = 1;
                panda$collections$Array$init($tmp908);
                statements907 = $tmp908;
                $l910:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp913 = (($fn912) self->$class->vtable[6])(self);
                    switch ($tmp913.kind.value) {
                        case 100:
                        {
                            goto $l911;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp916 = (($fn915) self->$class->vtable[49])(self);
                            stmt914 = $tmp916;
                            if (((panda$core$Bit) { stmt914 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements907, ((panda$core$Object*) stmt914));
                            goto $l911;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp919 = (($fn918) self->$class->vtable[51])(self);
                            stmt917 = $tmp919;
                            if (((panda$core$Bit) { stmt917 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements907, ((panda$core$Object*) stmt917));
                        }
                    }
                }
                }
                $l911:;
                org$pandalanguage$pandac$ASTNode* $tmp920 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp920->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp920->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp920, ((panda$core$Int64) { 127 }), o901.offset, ((panda$collections$ListView*) statements907));
                panda$collections$Array$add$panda$collections$Array$T(children884, ((panda$core$Object*) $tmp920));
                goto $l894;
            }
            break;
            default:
            {
                (($fn922) self->$class->vtable[4])(self);
                panda$core$String* $tmp926 = (($fn925) self->$class->vtable[14])(self, token895);
                panda$core$String* $tmp927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s924, $tmp926);
                panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp927, &$s928);
                panda$core$String* $tmp930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s923, $tmp929);
                (($fn931) self->$class->vtable[9])(self, token895, $tmp930);
            }
        }
    }
    }
    $l894:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp934 = (($fn933) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s932);
    if (((panda$core$Bit) { !$tmp934.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp935 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp935->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp935->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp935, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start880.value).offset, ((panda$collections$ListView*) children884));
    return $tmp935;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start937;
    panda$collections$Array* children941;
    org$pandalanguage$pandac$ASTNode* stmt949;
    org$pandalanguage$pandac$ASTNode* stmt955;
    org$pandalanguage$pandac$parser$Token$nullable $tmp940 = (($fn939) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s938);
    start937 = $tmp940;
    if (((panda$core$Bit) { !start937.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp942 = (panda$collections$Array*) malloc(40);
    $tmp942->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp942->refCount.value = 1;
    panda$collections$Array$init($tmp942);
    children941 = $tmp942;
    $l944:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp947 = (($fn946) self->$class->vtable[6])(self);
        switch ($tmp947.kind.value) {
            case 100:
            {
                (($fn948) self->$class->vtable[4])(self);
                goto $l945;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp951 = (($fn950) self->$class->vtable[49])(self);
                stmt949 = $tmp951;
                if (((panda$core$Bit) { stmt949 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp954 = (($fn953) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s952);
                if (((panda$core$Bit) { !$tmp954.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children941, ((panda$core$Object*) stmt949));
                goto $l945;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp957 = (($fn956) self->$class->vtable[51])(self);
                stmt955 = $tmp957;
                if (((panda$core$Bit) { stmt955 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children941, ((panda$core$Object*) stmt955));
            }
        }
    }
    }
    $l945:;
    org$pandalanguage$pandac$ASTNode* $tmp958 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp958->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp958->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp958, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start937.value).offset, ((panda$collections$ListView*) children941));
    return $tmp958;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start960;
    org$pandalanguage$pandac$parser$Token op965;
    org$pandalanguage$pandac$ASTNode* rvalue968;
    panda$collections$Array* children971;
    org$pandalanguage$pandac$parser$Token op980;
    org$pandalanguage$pandac$ASTNode* rvalue983;
    panda$collections$Array* children986;
    org$pandalanguage$pandac$ASTNode* $tmp962 = (($fn961) self->$class->vtable[30])(self);
    start960 = $tmp962;
    if (((panda$core$Bit) { start960 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp964 = (($fn963) self->$class->vtable[6])(self);
    switch ($tmp964.kind.value) {
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
            org$pandalanguage$pandac$parser$Token $tmp967 = (($fn966) self->$class->vtable[4])(self);
            op965 = $tmp967;
            org$pandalanguage$pandac$ASTNode* $tmp970 = (($fn969) self->$class->vtable[30])(self);
            rvalue968 = $tmp970;
            if (((panda$core$Bit) { rvalue968 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp972 = (panda$collections$Array*) malloc(40);
            $tmp972->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp972->refCount.value = 1;
            panda$collections$Array$init($tmp972);
            children971 = $tmp972;
            panda$collections$Array$add$panda$collections$Array$T(children971, ((panda$core$Object*) start960));
            panda$collections$Array$add$panda$collections$Array$T(children971, ((panda$core$Object*) rvalue968));
            org$pandalanguage$pandac$ASTNode* $tmp974 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp974->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp974->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp974, ((panda$core$Int64) { 103 }), start960->offset, ((panda$core$Object*) wrap_panda$core$Int64(op965.kind)), ((panda$collections$ListView*) children971));
            return $tmp974;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp977 = (($fn976) self->$class->vtable[6])(self);
            (($fn979) self->$class->vtable[9])(self, $tmp977, &$s978);
            org$pandalanguage$pandac$parser$Token $tmp982 = (($fn981) self->$class->vtable[4])(self);
            op980 = $tmp982;
            org$pandalanguage$pandac$ASTNode* $tmp985 = (($fn984) self->$class->vtable[30])(self);
            rvalue983 = $tmp985;
            if (((panda$core$Bit) { rvalue983 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp987 = (panda$collections$Array*) malloc(40);
            $tmp987->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp987->refCount.value = 1;
            panda$collections$Array$init($tmp987);
            children986 = $tmp987;
            panda$collections$Array$add$panda$collections$Array$T(children986, ((panda$core$Object*) start960));
            panda$collections$Array$add$panda$collections$Array$T(children986, ((panda$core$Object*) rvalue983));
            org$pandalanguage$pandac$ASTNode* $tmp989 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp989->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp989->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp989, ((panda$core$Int64) { 103 }), start960->offset, ((panda$core$Object*) wrap_panda$core$Int64(op980.kind)), ((panda$collections$ListView*) children986));
            return $tmp989;
        }
        break;
        default:
        {
            return start960;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children991;
    org$pandalanguage$pandac$ASTNode* t994;
    org$pandalanguage$pandac$ASTNode* value999;
    org$pandalanguage$pandac$ASTNode* value1009;
    panda$collections$Array* $tmp992 = (panda$collections$Array*) malloc(40);
    $tmp992->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp992->refCount.value = 1;
    panda$collections$Array$init($tmp992);
    children991 = $tmp992;
    org$pandalanguage$pandac$ASTNode* $tmp996 = (($fn995) self->$class->vtable[33])(self);
    t994 = $tmp996;
    if (((panda$core$Bit) { t994 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children991, ((panda$core$Object*) t994));
    org$pandalanguage$pandac$parser$Token$nullable $tmp998 = (($fn997) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp998.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1001 = (($fn1000) self->$class->vtable[30])(self);
        value999 = $tmp1001;
        if (((panda$core$Bit) { value999 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children991, ((panda$core$Object*) value999));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1003 = (($fn1002) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1003.kind, ((panda$core$Int64) { 58 }));
    if ($tmp1004.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1006 = (($fn1005) self->$class->vtable[4])(self);
        (($fn1008) self->$class->vtable[9])(self, $tmp1006, &$s1007);
        org$pandalanguage$pandac$ASTNode* $tmp1011 = (($fn1010) self->$class->vtable[30])(self);
        value1009 = $tmp1011;
        if (((panda$core$Bit) { value1009 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children991, ((panda$core$Object*) value1009));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1012 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1012->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1012->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1012, ((panda$core$Int64) { 129 }), t994->offset, ((panda$collections$ListView*) children991));
    return $tmp1012;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1014;
    panda$core$Int64 kind1017;
    panda$collections$Array* children1020;
    org$pandalanguage$pandac$ASTNode* child1023;
    org$pandalanguage$pandac$ASTNode* child1030;
    org$pandalanguage$pandac$parser$Token $tmp1016 = (($fn1015) self->$class->vtable[4])(self);
    start1014 = $tmp1016;
    switch (start1014.kind.value) {
        case 23:
        {
            kind1017 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind1017 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind1017 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind1017 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            (($fn1019) self->$class->vtable[9])(self, start1014, &$s1018);
        }
    }
    panda$collections$Array* $tmp1021 = (panda$collections$Array*) malloc(40);
    $tmp1021->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1021->refCount.value = 1;
    panda$collections$Array$init($tmp1021);
    children1020 = $tmp1021;
    org$pandalanguage$pandac$ASTNode* $tmp1025 = (($fn1024) self->$class->vtable[43])(self);
    child1023 = $tmp1025;
    if (((panda$core$Bit) { child1023 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1020, ((panda$core$Object*) child1023));
    $l1026:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1029 = (($fn1028) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1029.nonnull }).value) goto $l1027;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1032 = (($fn1031) self->$class->vtable[43])(self);
        child1030 = $tmp1032;
        if (((panda$core$Bit) { child1030 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1020, ((panda$core$Object*) child1030));
    }
    goto $l1026;
    $l1027:;
    org$pandalanguage$pandac$ASTNode* $tmp1033 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1033->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1033->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1033, kind1017, start1014.offset, ((panda$collections$ListView*) children1020));
    return $tmp1033;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1035;
    panda$collections$Array* children1042;
    org$pandalanguage$pandac$ASTNode* expr1051;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1038 = (($fn1037) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1036);
    start1035 = $tmp1038;
    if (((panda$core$Bit) { !start1035.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1041 = (($fn1040) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1039);
    if (((panda$core$Bit) { !$tmp1041.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp1043 = (panda$collections$Array*) malloc(40);
    $tmp1043->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1043->refCount.value = 1;
    panda$collections$Array$init($tmp1043);
    children1042 = $tmp1043;
    org$pandalanguage$pandac$ASTNode* $tmp1045 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1045->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1045->refCount.value = 1;
    panda$core$String* $tmp1048 = (($fn1047) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start1035.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1045, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start1035.value).offset, $tmp1048);
    panda$collections$Array$add$panda$collections$Array$T(children1042, ((panda$core$Object*) $tmp1045));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1050 = (($fn1049) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1050.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1053 = (($fn1052) self->$class->vtable[30])(self);
        expr1051 = $tmp1053;
        if (((panda$core$Bit) { expr1051 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1042, ((panda$core$Object*) expr1051));
        $l1054:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1057 = (($fn1056) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1057.nonnull }).value) goto $l1055;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1059 = (($fn1058) self->$class->vtable[30])(self);
            expr1051 = $tmp1059;
            if (((panda$core$Bit) { expr1051 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1042, ((panda$core$Object*) expr1051));
        }
        goto $l1054;
        $l1055:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1062 = (($fn1061) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1060);
        if (((panda$core$Bit) { !$tmp1062.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1063 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1063->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1063->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1063, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start1035.value).offset, ((panda$collections$ListView*) children1042));
    return $tmp1063;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1065;
    org$pandalanguage$pandac$parser$Token$nullable label1069;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1068 = (($fn1067) self->$class->vtable[8])(self, ((panda$core$Int64) { 28 }), &$s1066);
    start1065 = $tmp1068;
    if (((panda$core$Bit) { !start1065.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1071 = (($fn1070) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1069 = $tmp1071;
    if (((panda$core$Bit) { label1069.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1072 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1072->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1072->refCount.value = 1;
        panda$core$String* $tmp1075 = (($fn1074) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1069.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1072, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1065.value).offset, $tmp1075);
        return $tmp1072;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1076 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1076->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1076->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1076, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1065.value).offset);
    return $tmp1076;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1078;
    org$pandalanguage$pandac$parser$Token$nullable label1082;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1081 = (($fn1080) self->$class->vtable[8])(self, ((panda$core$Int64) { 29 }), &$s1079);
    start1078 = $tmp1081;
    if (((panda$core$Bit) { !start1078.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1084 = (($fn1083) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1082 = $tmp1084;
    if (((panda$core$Bit) { label1082.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1085 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1085->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1085->refCount.value = 1;
        panda$core$String* $tmp1088 = (($fn1087) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1082.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1085, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1078.value).offset, $tmp1088);
        return $tmp1085;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1089 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1089->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1089->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1089, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1078.value).offset);
    return $tmp1089;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1091;
    panda$collections$Array* children1099;
    org$pandalanguage$pandac$ASTNode* expr1102;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1094 = (($fn1093) self->$class->vtable[8])(self, ((panda$core$Int64) { 27 }), &$s1092);
    start1091 = $tmp1094;
    if (((panda$core$Bit) { !start1091.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1096 = (($fn1095) self->$class->vtable[6])(self);
    switch ($tmp1096.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1097 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1097->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1097->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1097, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1091.value).offset);
            return $tmp1097;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp1100 = (panda$collections$Array*) malloc(40);
            $tmp1100->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1100->refCount.value = 1;
            panda$collections$Array$init($tmp1100);
            children1099 = $tmp1100;
            org$pandalanguage$pandac$ASTNode* $tmp1104 = (($fn1103) self->$class->vtable[30])(self);
            expr1102 = $tmp1104;
            if (((panda$core$Bit) { expr1102 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1099, ((panda$core$Object*) expr1102));
            org$pandalanguage$pandac$ASTNode* $tmp1105 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1105->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1105->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1105, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1091.value).offset, ((panda$collections$ListView*) children1099));
            return $tmp1105;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1108 = (($fn1107) self->$class->vtable[6])(self);
    switch ($tmp1108.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1110 = (($fn1109) self->$class->vtable[46])(self);
            return $tmp1110;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1112 = (($fn1111) self->$class->vtable[47])(self);
            return $tmp1112;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1114 = (($fn1113) self->$class->vtable[48])(self);
            return $tmp1114;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp1116 = (($fn1115) self->$class->vtable[6])(self);
    switch ($tmp1116.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1118 = (($fn1117) self->$class->vtable[36])(self, p_label);
            return $tmp1118;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1120 = (($fn1119) self->$class->vtable[34])(self, p_label);
            return $tmp1120;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1122 = (($fn1121) self->$class->vtable[37])(self, p_label);
            return $tmp1122;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1124 = (($fn1123) self->$class->vtable[35])(self, p_label);
            return $tmp1124;
        }
        break;
        default:
        {
            (($fn1126) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1125);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id1145;
    org$pandalanguage$pandac$parser$Token $tmp1128 = (($fn1127) self->$class->vtable[6])(self);
    switch ($tmp1128.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1130 = (($fn1129) self->$class->vtable[31])(self);
            return $tmp1130;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1132 = (($fn1131) self->$class->vtable[34])(self, NULL);
            return $tmp1132;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1134 = (($fn1133) self->$class->vtable[35])(self, NULL);
            return $tmp1134;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1136 = (($fn1135) self->$class->vtable[36])(self, NULL);
            return $tmp1136;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1138 = (($fn1137) self->$class->vtable[37])(self, NULL);
            return $tmp1138;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1140 = (($fn1139) self->$class->vtable[38])(self);
            return $tmp1140;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1142 = (($fn1141) self->$class->vtable[40])(self);
            return $tmp1142;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1144 = (($fn1143) self->$class->vtable[41])(self);
            return $tmp1144;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp1147 = (($fn1146) self->$class->vtable[4])(self);
            id1145 = $tmp1147;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1149 = (($fn1148) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1149.nonnull }).value) {
            {
                panda$core$String* $tmp1151 = (($fn1150) self->$class->vtable[14])(self, id1145);
                org$pandalanguage$pandac$ASTNode* $tmp1153 = (($fn1152) self->$class->vtable[50])(self, $tmp1151);
                return $tmp1153;
            }
            }
            (($fn1154) self->$class->vtable[5])(self, id1145);
            org$pandalanguage$pandac$ASTNode* $tmp1156 = (($fn1155) self->$class->vtable[42])(self);
            return $tmp1156;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1158 = (($fn1157) self->$class->vtable[42])(self);
            return $tmp1158;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1160 = (($fn1159) self->$class->vtable[44])(self);
            return $tmp1160;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1162 = (($fn1161) self->$class->vtable[45])(self);
            return $tmp1162;
        }
        break;
        default:
        {
            (($fn1164) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s1163);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1165;
    org$pandalanguage$pandac$parser$Token$nullable next1169;
    panda$core$MutableString* name1173;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1168 = (($fn1167) self->$class->vtable[8])(self, ((panda$core$Int64) { 14 }), &$s1166);
    start1165 = $tmp1168;
    if (((panda$core$Bit) { !start1165.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1172 = (($fn1171) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1170);
    next1169 = $tmp1172;
    if (((panda$core$Bit) { !next1169.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1174 = (panda$core$MutableString*) malloc(40);
    $tmp1174->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1174->refCount.value = 1;
    panda$core$String* $tmp1177 = (($fn1176) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1169.value));
    panda$core$MutableString$init$panda$core$String($tmp1174, $tmp1177);
    name1173 = $tmp1174;
    $l1178:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1181 = (($fn1180) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1169 = $tmp1181;
        if (((panda$core$Bit) { !next1169.nonnull }).value) {
        {
            goto $l1179;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1173, &$s1182);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1185 = (($fn1184) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1183);
        next1169 = $tmp1185;
        if (((panda$core$Bit) { !next1169.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1187 = (($fn1186) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1169.value));
        panda$core$MutableString$append$panda$core$String(name1173, $tmp1187);
    }
    }
    $l1179:;
    org$pandalanguage$pandac$ASTNode* $tmp1188 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1188->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1188->refCount.value = 1;
    panda$core$String* $tmp1190 = panda$core$MutableString$convert$R$panda$core$String(name1173);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1188, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1165.value).offset, $tmp1190);
    return $tmp1188;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1191;
    org$pandalanguage$pandac$parser$Token$nullable next1195;
    panda$core$MutableString* name1199;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1194 = (($fn1193) self->$class->vtable[8])(self, ((panda$core$Int64) { 15 }), &$s1192);
    start1191 = $tmp1194;
    if (((panda$core$Bit) { !start1191.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1198 = (($fn1197) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1196);
    next1195 = $tmp1198;
    if (((panda$core$Bit) { !next1195.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1200 = (panda$core$MutableString*) malloc(40);
    $tmp1200->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1200->refCount.value = 1;
    panda$core$String* $tmp1203 = (($fn1202) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1195.value));
    panda$core$MutableString$init$panda$core$String($tmp1200, $tmp1203);
    name1199 = $tmp1200;
    $l1204:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1207 = (($fn1206) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1195 = $tmp1207;
        if (((panda$core$Bit) { !next1195.nonnull }).value) {
        {
            goto $l1205;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1199, &$s1208);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1211 = (($fn1210) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1209);
        next1195 = $tmp1211;
        if (((panda$core$Bit) { !next1195.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1213 = (($fn1212) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1195.value));
        panda$core$MutableString$append$panda$core$String(name1199, $tmp1213);
    }
    }
    $l1205:;
    org$pandalanguage$pandac$ASTNode* $tmp1214 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1214->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1214->refCount.value = 1;
    panda$core$String* $tmp1216 = panda$core$MutableString$convert$R$panda$core$String(name1199);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1214, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1191.value).offset, $tmp1216);
    return $tmp1214;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1217;
    org$pandalanguage$pandac$parser$Token$nullable id1221;
    panda$collections$Array* children1225;
    panda$collections$Array* idChildren1228;
    org$pandalanguage$pandac$ASTNode* t1233;
    org$pandalanguage$pandac$ASTNode* t1249;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1220 = (($fn1219) self->$class->vtable[8])(self, ((panda$core$Int64) { 62 }), &$s1218);
    start1217 = $tmp1220;
    if (((panda$core$Bit) { !start1217.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1224 = (($fn1223) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1222);
    id1221 = $tmp1224;
    if (((panda$core$Bit) { !id1221.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1226 = (panda$collections$Array*) malloc(40);
    $tmp1226->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1226->refCount.value = 1;
    panda$collections$Array$init($tmp1226);
    children1225 = $tmp1226;
    panda$collections$Array* $tmp1229 = (panda$collections$Array*) malloc(40);
    $tmp1229->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1229->refCount.value = 1;
    panda$collections$Array$init($tmp1229);
    idChildren1228 = $tmp1229;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1232 = (($fn1231) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1232.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1235 = (($fn1234) self->$class->vtable[20])(self);
        t1233 = $tmp1235;
        if (((panda$core$Bit) { t1233 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1228, ((panda$core$Object*) t1233));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1236 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1236->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1236->refCount.value = 1;
    panda$core$String* $tmp1239 = (($fn1238) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1221.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1236, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1221.value).offset, ((panda$core$Object*) $tmp1239), ((panda$collections$ListView*) idChildren1228));
    panda$collections$Array$add$panda$collections$Array$T(children1225, ((panda$core$Object*) $tmp1236));
    $l1240:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1243 = (($fn1242) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1243.nonnull }).value) goto $l1241;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1246 = (($fn1245) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1244);
        id1221 = $tmp1246;
        if (((panda$core$Bit) { !id1221.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1228);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1248 = (($fn1247) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1248.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1251 = (($fn1250) self->$class->vtable[20])(self);
            t1249 = $tmp1251;
            if (((panda$core$Bit) { t1249 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1228, ((panda$core$Object*) t1249));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1252 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1252->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1252->refCount.value = 1;
        panda$core$String* $tmp1255 = (($fn1254) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1221.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1252, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1221.value).offset, ((panda$core$Object*) $tmp1255), ((panda$collections$ListView*) idChildren1228));
        panda$collections$Array$add$panda$collections$Array$T(children1225, ((panda$core$Object*) $tmp1252));
    }
    goto $l1240;
    $l1241:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1258 = (($fn1257) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s1256);
    if (((panda$core$Bit) { !$tmp1258.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1259 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1259->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1259->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1259, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1217.value).offset, ((panda$collections$ListView*) children1225));
    return $tmp1259;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaces$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1261;
    panda$collections$Array* children1265;
    org$pandalanguage$pandac$ASTNode* t1268;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1264 = (($fn1263) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1262);
    start1261 = $tmp1264;
    if (((panda$core$Bit) { !start1261.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1266 = (panda$collections$Array*) malloc(40);
    $tmp1266->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1266->refCount.value = 1;
    panda$collections$Array$init($tmp1266);
    children1265 = $tmp1266;
    org$pandalanguage$pandac$ASTNode* $tmp1270 = (($fn1269) self->$class->vtable[20])(self);
    t1268 = $tmp1270;
    if (((panda$core$Bit) { t1268 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1265, ((panda$core$Object*) t1268));
    $l1271:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1274 = (($fn1273) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1274.nonnull }).value) goto $l1272;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1276 = (($fn1275) self->$class->vtable[20])(self);
        t1268 = $tmp1276;
        if (((panda$core$Bit) { t1268 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1265, ((panda$core$Object*) t1268));
    }
    goto $l1271;
    $l1272:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1279 = (($fn1278) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1277);
    if (((panda$core$Bit) { !$tmp1279.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1280 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1280->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1280->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1280, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1261.value).offset, ((panda$collections$ListView*) children1265));
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
    org$pandalanguage$pandac$ASTNode* superclass1503;
    org$pandalanguage$pandac$ASTNode* intfs1511;
    panda$collections$Array* members1519;
    org$pandalanguage$pandac$ASTNode* member1526;
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
        org$pandalanguage$pandac$ASTNode* $tmp1505 = (($fn1504) self->$class->vtable[32])(self);
        superclass1503 = $tmp1505;
        if (((panda$core$Bit) { superclass1503 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) superclass1503));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1506 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1506->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1506->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1506, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) $tmp1506));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1509 = (($fn1508) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1509.kind, ((panda$core$Int64) { 103 }));
    if ($tmp1510.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1513 = (($fn1512) self->$class->vtable[55])(self);
        intfs1511 = $tmp1513;
        if (((panda$core$Bit) { intfs1511 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) intfs1511));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1514 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1514->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1514->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1514, ((panda$core$Int64) { 139 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) $tmp1514));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1518 = (($fn1517) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1516);
    if (((panda$core$Bit) { !$tmp1518.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1520 = (panda$collections$Array*) malloc(40);
    $tmp1520->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1520->refCount.value = 1;
    panda$collections$Array$init($tmp1520);
    members1519 = $tmp1520;
    $l1522:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1525 = (($fn1524) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1525.nonnull }).value) goto $l1523;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1528 = (($fn1527) self->$class->vtable[64])(self);
        member1526 = $tmp1528;
        if (((panda$core$Bit) { member1526 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1519, ((panda$core$Object*) member1526));
    }
    goto $l1522;
    $l1523:;
    org$pandalanguage$pandac$ASTNode* $tmp1529 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1529->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1529->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1529, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1484.value).offset, ((panda$collections$ListView*) members1519));
    panda$collections$Array$add$panda$collections$Array$T(children1481, ((panda$core$Object*) $tmp1529));
    org$pandalanguage$pandac$ASTNode* $tmp1531 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1531->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1531->refCount.value = 1;
    panda$core$String* $tmp1534 = (($fn1533) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1488.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1531, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1484.value).offset, ((panda$core$Object*) $tmp1534), ((panda$collections$ListView*) children1481));
    return $tmp1531;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1535;
    org$pandalanguage$pandac$parser$Token$nullable start1538;
    org$pandalanguage$pandac$parser$Token$nullable name1542;
    org$pandalanguage$pandac$ASTNode* generics1549;
    panda$collections$Array* intfs1554;
    org$pandalanguage$pandac$ASTNode* t1559;
    panda$collections$Array* members1573;
    org$pandalanguage$pandac$ASTNode* member1580;
    panda$collections$Array* $tmp1536 = (panda$collections$Array*) malloc(40);
    $tmp1536->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1536->refCount.value = 1;
    panda$collections$Array$init($tmp1536);
    children1535 = $tmp1536;
    panda$collections$Array$add$panda$collections$Array$T(children1535, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1535, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1541 = (($fn1540) self->$class->vtable[8])(self, ((panda$core$Int64) { 18 }), &$s1539);
    start1538 = $tmp1541;
    if (((panda$core$Bit) { !start1538.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1545 = (($fn1544) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1543);
    name1542 = $tmp1545;
    if (((panda$core$Bit) { !name1542.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1547 = (($fn1546) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1547.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1548.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1551 = (($fn1550) self->$class->vtable[54])(self);
        generics1549 = $tmp1551;
        if (((panda$core$Bit) { generics1549 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1535, ((panda$core$Object*) generics1549));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1552 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1552->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1552->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1552, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1535, ((panda$core$Object*) $tmp1552));
    }
    }
    panda$collections$Array* $tmp1555 = (panda$collections$Array*) malloc(40);
    $tmp1555->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1555->refCount.value = 1;
    panda$collections$Array$init($tmp1555);
    intfs1554 = $tmp1555;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1558 = (($fn1557) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1558.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1561 = (($fn1560) self->$class->vtable[20])(self);
        t1559 = $tmp1561;
        if (((panda$core$Bit) { t1559 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1554, ((panda$core$Object*) t1559));
        $l1562:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1565 = (($fn1564) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1565.nonnull }).value) goto $l1563;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1567 = (($fn1566) self->$class->vtable[20])(self);
            t1559 = $tmp1567;
            if (((panda$core$Bit) { t1559 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1554, ((panda$core$Object*) t1559));
        }
        goto $l1562;
        $l1563:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1568 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1568->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1568->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1568, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1538.value).offset, ((panda$collections$ListView*) intfs1554));
    panda$collections$Array$add$panda$collections$Array$T(children1535, ((panda$core$Object*) $tmp1568));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1572 = (($fn1571) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1570);
    if (((panda$core$Bit) { !$tmp1572.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1574 = (panda$collections$Array*) malloc(40);
    $tmp1574->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1574->refCount.value = 1;
    panda$collections$Array$init($tmp1574);
    members1573 = $tmp1574;
    $l1576:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1579 = (($fn1578) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1579.nonnull }).value) goto $l1577;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1582 = (($fn1581) self->$class->vtable[64])(self);
        member1580 = $tmp1582;
        if (((panda$core$Bit) { member1580 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1573, ((panda$core$Object*) member1580));
    }
    goto $l1576;
    $l1577:;
    org$pandalanguage$pandac$ASTNode* $tmp1583 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1583->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1583->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1583, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1538.value).offset, ((panda$collections$ListView*) members1573));
    panda$collections$Array$add$panda$collections$Array$T(children1535, ((panda$core$Object*) $tmp1583));
    org$pandalanguage$pandac$ASTNode* $tmp1585 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1585->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1585->refCount.value = 1;
    panda$core$String* $tmp1588 = (($fn1587) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1542.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1585, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1538.value).offset, ((panda$core$Object*) $tmp1588), ((panda$collections$ListView*) children1535));
    return $tmp1585;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1590 = (($fn1589) self->$class->vtable[6])(self);
    switch ($tmp1590.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1592 = (($fn1591) self->$class->vtable[53])(self);
            return $tmp1592;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1594 = (($fn1593) self->$class->vtable[52])(self);
            return $tmp1594;
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
            org$pandalanguage$pandac$ASTNode* $tmp1596 = (($fn1595) self->$class->vtable[64])(self);
            return $tmp1596;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1598 = (($fn1597) self->$class->vtable[51])(self);
            return $tmp1598;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1599;
    org$pandalanguage$pandac$ASTNode* entry1607;
    panda$collections$Array* $tmp1600 = (panda$collections$Array*) malloc(40);
    $tmp1600->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1600->refCount.value = 1;
    panda$collections$Array$init($tmp1600);
    entries1599 = $tmp1600;
    $l1602:;
    org$pandalanguage$pandac$parser$Token $tmp1605 = (($fn1604) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1606 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1605.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1606.value) goto $l1603;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1609 = (($fn1608) self->$class->vtable[67])(self);
        entry1607 = $tmp1609;
        if (((panda$core$Bit) { entry1607 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1610 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1610.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1599, ((panda$core$Object*) entry1607));
    }
    goto $l1602;
    $l1603:;
    org$pandalanguage$pandac$ASTNode* $tmp1611 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1611->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1611->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1611, ((panda$core$Int64) { 152 }), ((panda$core$Int64) { 0 }), ((panda$collections$ListView*) entries1599));
    return $tmp1611;
}

