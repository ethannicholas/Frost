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
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
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
typedef org$pandalanguage$pandac$ASTNode* (*$fn182)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn185)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn198)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn200)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn224)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn229)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn234)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn241)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn247)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn253)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$parser$Token (*$fn280)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn284)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn288)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn292)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn298)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef panda$core$String* (*$fn301)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn307)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef void (*$fn319)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn320)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn323)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn326)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn329)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn334)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn342)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn344)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn347)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn351)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn354)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn356)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn361)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn366)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn367)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn371)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn376)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn380)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn384)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn387)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn393)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn397)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn398)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn403)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn405)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn408)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn410)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn412)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn415)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn417)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn422)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn423)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn431)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn436)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn441)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn444)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn448)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn450)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn453)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn461)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn464)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn469)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn472)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn480)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn487)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn494)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn495)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn502)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn504)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn507)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn509)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn511)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn514)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn516)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn520)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn522)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn526)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn527)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn529)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn534)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn537)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn545)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn548)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn555)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn556)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn559)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn564)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn567)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn575)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn579)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn586)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn587)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn588)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn590)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn595)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn598)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn605)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn607)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn612)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn615)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn618)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn630)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn636)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn638)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn650)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn652)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn657)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn660)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn667)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn669)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn674)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn677)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn684)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn686)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn691)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn694)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn703)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn706)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn712)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn714)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn716)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn720)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn723)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn728)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn730)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn734)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn736)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn740)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn747)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn751)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn755)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn758)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn761)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn764)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn767)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn776)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn779)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn782)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn791)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn794)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn797)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn800)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn809)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn812)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn821)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn824)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn829)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn832)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn838)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn844)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn848)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn850)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn858)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn862)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn865)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn868)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn874)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn880)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn883)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn888)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn891)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn894)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn897)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn904)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn907)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn910)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn914)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn917)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn923)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn925)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn931)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn938)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn940)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn942)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn945)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn948)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn953)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn955)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn958)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn961)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn968)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn971)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn973)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn976)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn987)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn989)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn992)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn994)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn997)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1000)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1002)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1007)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1011)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1016)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1020)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1023)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1029)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1032)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1039)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1041)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1044)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1048)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1050)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1053)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1059)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1062)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1066)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1072)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1075)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1079)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1085)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1087)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1095)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1099)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1101)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1103)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1105)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1107)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1109)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1111)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1113)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1115)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1118)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1119)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1121)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1123)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1125)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1127)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1129)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1131)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1133)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1135)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1138)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1140)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1142)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1144)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef void (*$fn1146)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1147)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1149)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1151)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1153)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1156)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1159)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1163)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1168)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1172)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1176)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1178)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1185)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1189)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1194)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1198)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1202)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1204)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1211)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1215)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1223)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1226)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1230)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1234)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1237)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1239)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1242)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1246)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1249)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1255)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1261)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1265)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1267)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1277)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1281)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1288)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1296)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1301)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn1302)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1309)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1312)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1319)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1323)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1328)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1331)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1335)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1337)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1340)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1346)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1349)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1352)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1358)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1360)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1364)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1369)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1373)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1379)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1382)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1396)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1405)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1411)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1414)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1417)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1420)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1434)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1442)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1450)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1454)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1460)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1462)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1464)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1466)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1468)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1470)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1472)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1475)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1481)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1485)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1487)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1491)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1496)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1500)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1506)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1513)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1516)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1522)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1529)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1533)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1535)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1539)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1547)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1550)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1554)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1556)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1561)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1568)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1571)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1577)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn1579)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1581)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1583)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1585)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1587)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1594)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1598)(org$pandalanguage$pandac$parser$Parser*);

static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6E\x67\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 6051269863884878617, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 6051269863884878617, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 6051269863884878617, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6E\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1437572, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72\x20\x6F\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1437572, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4, 145324394, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4, 145273490, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6, 1483905450613, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 5160334537588978262, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 5160334537588978262, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39, -3936732696845588807, NULL };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7, 149654778879696, NULL };
static panda$core$String $s1071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47, -2376482472870228684, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3, 1434239, NULL };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s1287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x65\x74\x68\x6F\x64\x27\x20\x6F\x72\x20\x27\x66\x75\x6E\x63\x74\x69\x6F\x6E\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 227282500368930, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 227282500368930, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E", 13, 8609604847663634804, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6C\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };

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
    panda$core$Char8 $tmp30;
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
                            panda$core$Char8$init$panda$core$UInt8(&$tmp30, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp31 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp29, $tmp30);
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
    panda$core$Char8 $tmp139;
    org$pandalanguage$pandac$parser$Token escape145;
    panda$core$String* escapeText151;
    panda$core$Char8 c154;
    panda$core$Char8 $match$184_21160;
    panda$core$Char8 $tmp161;
    panda$core$Char8 $tmp163;
    panda$core$Char8 $tmp164;
    panda$core$Char8 $tmp166;
    panda$core$Char8 $tmp167;
    panda$core$Char8 $tmp169;
    panda$core$Char8 $tmp170;
    panda$core$Char8 $tmp172;
    panda$core$Char8 $tmp173;
    panda$core$Char8 $tmp175;
    panda$core$Char8 $tmp176;
    panda$core$Char8 $tmp178;
    panda$core$Char8 $tmp179;
    org$pandalanguage$pandac$ASTNode* expr181;
    panda$core$String* text187;
    panda$collections$Array* dotChildren202;
    org$pandalanguage$pandac$ASTNode* dot205;
    panda$collections$Array* callChildren209;
    org$pandalanguage$pandac$ASTNode* call212;
    panda$collections$Array* castChildren215;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp225;
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
                panda$core$Char8$init$panda$core$UInt8(&$tmp139, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp140 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str136, $tmp139);
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
                    $match$184_21160 = c154;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp161, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp162 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$184_21160, $tmp161);
                    if ($tmp162.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp163, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk127, $tmp163);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp164, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp165 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$184_21160, $tmp164);
                    if ($tmp165.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp166, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk127, $tmp166);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp167, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp168 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$184_21160, $tmp167);
                    if ($tmp168.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp169, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk127, $tmp169);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp170, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp171 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$184_21160, $tmp170);
                    if ($tmp171.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp172, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk127, $tmp172);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp173, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp174 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$184_21160, $tmp173);
                    if ($tmp174.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp175, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk127, $tmp175);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp176, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp177 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$184_21160, $tmp176);
                    if ($tmp177.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp178, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk127, $tmp178);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp179, ((panda$core$UInt8) { 123 }));
                    panda$core$Bit $tmp180 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$184_21160, $tmp179);
                    if ($tmp180.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp183 = (($fn182) self->$class->vtable[29])(self);
                            expr181 = $tmp183;
                            if (((panda$core$Bit) { expr181 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp186 = (($fn185) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s184);
                            if (((panda$core$Bit) { !$tmp186.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$core$String* $tmp188 = panda$core$MutableString$finish$R$panda$core$String(chunk127);
                            text187 = $tmp188;
                            panda$core$MutableString* $tmp189 = (panda$core$MutableString*) malloc(48);
                            $tmp189->$class = (panda$core$Class*) &panda$core$MutableString$class;
                            $tmp189->refCount.value = 1;
                            panda$core$MutableString$init($tmp189);
                            chunk127 = $tmp189;
                            panda$core$Bit $tmp193 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text187, &$s192);
                            bool $tmp191 = $tmp193.value;
                            if ($tmp191) goto $l194;
                            $tmp191 = ((panda$core$Bit) { result126 != NULL }).value;
                            $l194:;
                            panda$core$Bit $tmp195 = { $tmp191 };
                            if ($tmp195.value) {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp196 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp196->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp196->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp196, ((panda$core$Int64) { 113 }), start111.position, text187);
                                org$pandalanguage$pandac$ASTNode* $tmp199 = (($fn198) self->$class->vtable[14])(self, result126, $tmp196);
                                result126 = $tmp199;
                                org$pandalanguage$pandac$ASTNode* $tmp201 = (($fn200) self->$class->vtable[14])(self, result126, expr181);
                                result126 = $tmp201;
                            }
                            }
                            else {
                            {
                                panda$collections$Array* $tmp203 = (panda$collections$Array*) malloc(40);
                                $tmp203->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp203->refCount.value = 1;
                                panda$collections$Array$init($tmp203);
                                dotChildren202 = $tmp203;
                                panda$collections$Array$add$panda$collections$Array$T(dotChildren202, ((panda$core$Object*) expr181));
                                org$pandalanguage$pandac$ASTNode* $tmp206 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp206->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp206->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp206, ((panda$core$Int64) { 108 }), expr181->position, ((panda$core$Object*) &$s208), ((panda$collections$ListView*) dotChildren202));
                                dot205 = $tmp206;
                                panda$collections$Array* $tmp210 = (panda$collections$Array*) malloc(40);
                                $tmp210->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp210->refCount.value = 1;
                                panda$collections$Array$init($tmp210);
                                callChildren209 = $tmp210;
                                panda$collections$Array$add$panda$collections$Array$T(callChildren209, ((panda$core$Object*) dot205));
                                org$pandalanguage$pandac$ASTNode* $tmp213 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp213->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp213->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp213, ((panda$core$Int64) { 107 }), expr181->position, ((panda$collections$ListView*) callChildren209));
                                call212 = $tmp213;
                                panda$collections$Array* $tmp216 = (panda$collections$Array*) malloc(40);
                                $tmp216->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp216->refCount.value = 1;
                                panda$collections$Array$init($tmp216);
                                castChildren215 = $tmp216;
                                panda$collections$Array$add$panda$collections$Array$T(castChildren215, ((panda$core$Object*) call212));
                                org$pandalanguage$pandac$ASTNode* $tmp218 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp218->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp218->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp218, ((panda$core$Int64) { 109 }), expr181->position, &$s220);
                                panda$collections$Array$add$panda$collections$Array$T(castChildren215, ((panda$core$Object*) $tmp218));
                                org$pandalanguage$pandac$ASTNode* $tmp221 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp221->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp221->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp221, ((panda$core$Int64) { 111 }), expr181->position, ((panda$collections$ListView*) castChildren215));
                                result126 = $tmp221;
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        (($fn224) self->$class->vtable[9])(self, token132, &$s223);
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
                panda$core$String$Index $tmp226 = panda$core$String$start$R$panda$core$String$Index(escapeText151);
                panda$core$String$Index $tmp227 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText151, $tmp226);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp225, ((panda$core$String$Index$nullable) { $tmp227, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp228 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText151, $tmp225);
                panda$core$MutableString$append$panda$core$String(chunk127, $tmp228);
            }
            break;
            default:
            {
                panda$core$String* $tmp230 = (($fn229) self->$class->vtable[13])(self, token132);
                panda$core$MutableString$append$panda$core$String(chunk127, $tmp230);
            }
        }
    }
    }
    $l131:;
    org$pandalanguage$pandac$ASTNode* $tmp231 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp231->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp231->refCount.value = 1;
    panda$core$String* $tmp233 = panda$core$MutableString$finish$R$panda$core$String(chunk127);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp231, ((panda$core$Int64) { 113 }), start111.position, $tmp233);
    org$pandalanguage$pandac$ASTNode* $tmp235 = (($fn234) self->$class->vtable[14])(self, result126, $tmp231);
    return $tmp235;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result236;
    panda$collections$Iterator* c$Iter237;
    panda$core$Char8 c250;
    panda$core$UInt64 i256;
    result236 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp238 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp239 = ((panda$collections$Iterable*) $tmp238)->$class->itable;
        while ($tmp239->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp239 = $tmp239->next;
        }
        $fn241 $tmp240 = $tmp239->methods[0];
        panda$collections$Iterator* $tmp242 = $tmp240(((panda$collections$Iterable*) $tmp238));
        c$Iter237 = $tmp242;
        $l243:;
        ITable* $tmp245 = c$Iter237->$class->itable;
        while ($tmp245->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp245 = $tmp245->next;
        }
        $fn247 $tmp246 = $tmp245->methods[0];
        panda$core$Bit $tmp248 = $tmp246(c$Iter237);
        panda$core$Bit $tmp249 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp248);
        if (!$tmp249.value) goto $l244;
        {
            ITable* $tmp251 = c$Iter237->$class->itable;
            while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp251 = $tmp251->next;
            }
            $fn253 $tmp252 = $tmp251->methods[1];
            panda$core$Object* $tmp254 = $tmp252(c$Iter237);
            c250 = ((panda$core$Char8$wrapper*) $tmp254)->value;
            panda$core$UInt64 $tmp255 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result236, p_base);
            result236 = $tmp255;
            panda$core$UInt64 $tmp257 = panda$core$Char8$convert$R$panda$core$UInt64(c250);
            i256 = $tmp257;
            panda$core$Bit $tmp259 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i256, ((panda$core$UInt64) { 48 }));
            bool $tmp258 = $tmp259.value;
            if (!$tmp258) goto $l260;
            panda$core$Bit $tmp261 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i256, ((panda$core$UInt64) { 57 }));
            $tmp258 = $tmp261.value;
            $l260:;
            panda$core$Bit $tmp262 = { $tmp258 };
            if ($tmp262.value) {
            {
                panda$core$UInt64 $tmp263 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i256, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp264 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result236, $tmp263);
                result236 = $tmp264;
            }
            }
            else {
            panda$core$Bit $tmp266 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i256, ((panda$core$UInt64) { 65 }));
            bool $tmp265 = $tmp266.value;
            if (!$tmp265) goto $l267;
            panda$core$Bit $tmp268 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i256, ((panda$core$UInt64) { 70 }));
            $tmp265 = $tmp268.value;
            $l267:;
            panda$core$Bit $tmp269 = { $tmp265 };
            if ($tmp269.value) {
            {
                panda$core$UInt64 $tmp270 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i256, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp271 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result236, $tmp270);
                result236 = $tmp271;
            }
            }
            else {
            {
                panda$core$Bit $tmp273 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i256, ((panda$core$UInt64) { 97 }));
                bool $tmp272 = $tmp273.value;
                if (!$tmp272) goto $l274;
                panda$core$Bit $tmp275 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i256, ((panda$core$UInt64) { 102 }));
                $tmp272 = $tmp275.value;
                $l274:;
                panda$core$Bit $tmp276 = { $tmp272 };
                PANDA_ASSERT($tmp276.value);
                panda$core$UInt64 $tmp277 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i256, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp278 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result236, $tmp277);
                result236 = $tmp278;
            }
            }
            }
        }
        goto $l243;
        $l244:;
    }
    return result236;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t279;
    panda$core$String* s291;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp296;
    panda$core$String* s300;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp305;
    org$pandalanguage$pandac$ASTNode* result322;
    org$pandalanguage$pandac$parser$Token $tmp281 = (($fn280) self->$class->vtable[4])(self);
    t279 = $tmp281;
    switch (t279.kind.value) {
        case 48:
        {
            org$pandalanguage$pandac$ASTNode* $tmp282 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp282->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp282->refCount.value = 1;
            panda$core$String* $tmp285 = (($fn284) self->$class->vtable[13])(self, t279);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp282, ((panda$core$Int64) { 106 }), t279.position, $tmp285);
            return $tmp282;
        }
        break;
        case 2:
        {
            org$pandalanguage$pandac$ASTNode* $tmp286 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp286->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp286->refCount.value = 1;
            panda$core$String* $tmp289 = (($fn288) self->$class->vtable[13])(self, t279);
            panda$core$UInt64$nullable $tmp290 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp289);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp286, ((panda$core$Int64) { 102 }), t279.position, ((panda$core$UInt64) $tmp290.value));
            return $tmp286;
        }
        break;
        case 3:
        {
            panda$core$String* $tmp293 = (($fn292) self->$class->vtable[13])(self, t279);
            s291 = $tmp293;
            org$pandalanguage$pandac$ASTNode* $tmp294 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp294->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp294->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp296, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp297 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s291, $tmp296);
            panda$core$UInt64 $tmp299 = (($fn298) self->$class->vtable[16])(self, $tmp297, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp294, ((panda$core$Int64) { 102 }), t279.position, $tmp299);
            return $tmp294;
        }
        break;
        case 4:
        {
            panda$core$String* $tmp302 = (($fn301) self->$class->vtable[13])(self, t279);
            s300 = $tmp302;
            org$pandalanguage$pandac$ASTNode* $tmp303 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp303->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp303->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp305, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp306 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s300, $tmp305);
            panda$core$UInt64 $tmp308 = (($fn307) self->$class->vtable[16])(self, $tmp306, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp303, ((panda$core$Int64) { 102 }), t279.position, $tmp308);
            return $tmp303;
        }
        break;
        case 46:
        {
            org$pandalanguage$pandac$ASTNode* $tmp309 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp309->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp309->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp309, ((panda$core$Int64) { 114 }), t279.position);
            return $tmp309;
        }
        break;
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp311 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp311->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp311->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp311, ((panda$core$Int64) { 115 }), t279.position);
            return $tmp311;
        }
        break;
        case 43:
        {
            org$pandalanguage$pandac$ASTNode* $tmp313 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp313->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp313->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp313, ((panda$core$Int64) { 117 }), t279.position);
            return $tmp313;
        }
        break;
        case 41:
        {
            org$pandalanguage$pandac$ASTNode* $tmp315 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp315->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp315->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp315, ((panda$core$Int64) { 116 }), t279.position, ((panda$core$Bit) { true }));
            return $tmp315;
        }
        break;
        case 42:
        {
            org$pandalanguage$pandac$ASTNode* $tmp317 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp317->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp317->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp317, ((panda$core$Int64) { 116 }), t279.position, ((panda$core$Bit) { false }));
            return $tmp317;
        }
        break;
        case 7:
        case 6:
        {
            (($fn319) self->$class->vtable[5])(self, t279);
            org$pandalanguage$pandac$ASTNode* $tmp321 = (($fn320) self->$class->vtable[15])(self);
            return $tmp321;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$ASTNode* $tmp324 = (($fn323) self->$class->vtable[29])(self);
            result322 = $tmp324;
            if (((panda$core$Bit) { result322 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp327 = (($fn326) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s325);
            if (((panda$core$Bit) { !$tmp327.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result322;
        }
        break;
        default:
        {
            panda$core$String* $tmp330 = (($fn329) self->$class->vtable[13])(self, t279);
            panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s328, $tmp330);
            panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s332);
            (($fn334) self->$class->vtable[9])(self, t279, $tmp333);
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result335;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp336 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp337 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp336));
            result335 = $tmp337;
            if (((panda$core$Bit) { result335 != NULL }).value) {
            {
                panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s338, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result335, $tmp339);
                result335 = $tmp340;
            }
            }
            return result335;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name341;
    org$pandalanguage$pandac$parser$Token token346;
    org$pandalanguage$pandac$parser$Token $tmp343 = (($fn342) self->$class->vtable[4])(self);
    name341 = $tmp343;
    switch (name341.kind.value) {
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
            panda$core$String* $tmp345 = (($fn344) self->$class->vtable[13])(self, name341);
            return $tmp345;
        }
        break;
        case 63:
        {
            org$pandalanguage$pandac$parser$Token $tmp348 = (($fn347) self->$class->vtable[3])(self);
            token346 = $tmp348;
            panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token346.kind, ((panda$core$Int64) { 63 }));
            if ($tmp349.value) {
            {
                return &$s350;
            }
            }
            else {
            {
                (($fn351) self->$class->vtable[5])(self, token346);
                return &$s352;
            }
            }
        }
        break;
        case 101:
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp355 = (($fn354) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s353);
            if (((panda$core$Bit) { !$tmp355.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp357 = (($fn356) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp357.nonnull }).value) {
            {
                return &$s358;
            }
            }
            return &$s359;
        }
        break;
        default:
        {
            panda$core$String* $tmp362 = (($fn361) self->$class->vtable[13])(self, name341);
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s360, $tmp362);
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, &$s364);
            (($fn366) self->$class->vtable[9])(self, name341, $tmp365);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp368 = (($fn367) self->$class->vtable[20])(self, ((panda$core$Bit) { true }));
    return $tmp368;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start369;
    panda$core$MutableString* name373;
    org$pandalanguage$pandac$parser$Token$nullable id382;
    panda$core$Char8 $tmp386;
    org$pandalanguage$pandac$ASTNode* result389;
    panda$core$Char8 $tmp396;
    panda$collections$Array* children399;
    org$pandalanguage$pandac$ASTNode* t402;
    panda$core$Char8 $tmp418;
    panda$collections$Array* children425;
    org$pandalanguage$pandac$parser$Token$nullable $tmp372 = (($fn371) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s370);
    start369 = $tmp372;
    if (((panda$core$Bit) { !start369.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp374 = (panda$core$MutableString*) malloc(48);
    $tmp374->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp374->refCount.value = 1;
    panda$core$String* $tmp377 = (($fn376) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) start369.value));
    panda$core$MutableString$init$panda$core$String($tmp374, $tmp377);
    name373 = $tmp374;
    $l378:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp381 = (($fn380) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp381.nonnull }).value) goto $l379;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp385 = (($fn384) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s383);
        id382 = $tmp385;
        if (((panda$core$Bit) { !id382.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp386, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name373, $tmp386);
        panda$core$String* $tmp388 = (($fn387) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id382.value));
        panda$core$MutableString$append$panda$core$String(name373, $tmp388);
    }
    goto $l378;
    $l379:;
    org$pandalanguage$pandac$ASTNode* $tmp390 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp390->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp390->refCount.value = 1;
    panda$core$String* $tmp392 = panda$core$MutableString$convert$R$panda$core$String(name373);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp390, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start369.value).position, $tmp392);
    result389 = $tmp390;
    org$pandalanguage$pandac$parser$Token $tmp394 = (($fn393) self->$class->vtable[6])(self);
    panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp394.kind, ((panda$core$Int64) { 62 }));
    if ($tmp395.value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp396, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name373, $tmp396);
        if (p_needSpeculativeParse.value) {
        {
            (($fn397) self->$class->vtable[10])(self);
        }
        }
        (($fn398) self->$class->vtable[4])(self);
        panda$collections$Array* $tmp400 = (panda$collections$Array*) malloc(40);
        $tmp400->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp400->refCount.value = 1;
        panda$collections$Array$init($tmp400);
        children399 = $tmp400;
        panda$collections$Array$add$panda$collections$Array$T(children399, ((panda$core$Object*) result389));
        org$pandalanguage$pandac$ASTNode* $tmp404 = (($fn403) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
        t402 = $tmp404;
        if (((panda$core$Bit) { t402 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn405) self->$class->vtable[12])(self);
                return result389;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children399, ((panda$core$Object*) t402));
        panda$core$MutableString$append$panda$core$Object(name373, ((panda$core$Object*) t402));
        $l406:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp409 = (($fn408) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp409.nonnull }).value) goto $l407;
        {
            org$pandalanguage$pandac$ASTNode* $tmp411 = (($fn410) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
            t402 = $tmp411;
            if (((panda$core$Bit) { t402 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    (($fn412) self->$class->vtable[12])(self);
                    return result389;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children399, ((panda$core$Object*) t402));
            panda$core$MutableString$append$panda$core$String(name373, &$s413);
            panda$core$MutableString$append$panda$core$Object(name373, ((panda$core$Object*) t402));
        }
        goto $l406;
        $l407:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp416 = (($fn415) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s414);
        if (((panda$core$Bit) { !$tmp416.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn417) self->$class->vtable[12])(self);
                return result389;
            }
            }
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp418, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name373, $tmp418);
        org$pandalanguage$pandac$ASTNode* $tmp419 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp419->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp419->refCount.value = 1;
        panda$core$String* $tmp421 = panda$core$MutableString$finish$R$panda$core$String(name373);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp419, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start369.value).position, ((panda$core$Object*) $tmp421), ((panda$collections$ListView*) children399));
        result389 = $tmp419;
        (($fn422) self->$class->vtable[11])(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp424 = (($fn423) self->$class->vtable[7])(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp424.nonnull }).value) {
    {
        panda$collections$Array* $tmp426 = (panda$collections$Array*) malloc(40);
        $tmp426->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp426->refCount.value = 1;
        panda$collections$Array$init($tmp426);
        children425 = $tmp426;
        panda$collections$Array$add$panda$collections$Array$T(children425, ((panda$core$Object*) result389));
        org$pandalanguage$pandac$ASTNode* $tmp428 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp428->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp428->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp428, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start369.value).position, ((panda$collections$ListView*) children425));
        result389 = $tmp428;
    }
    }
    return result389;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result430;
    org$pandalanguage$pandac$parser$Token token435;
    panda$collections$Array* children438;
    org$pandalanguage$pandac$ASTNode* expr443;
    panda$collections$Array* children457;
    org$pandalanguage$pandac$ASTNode* expr460;
    panda$core$String* name468;
    panda$collections$Array* children474;
    org$pandalanguage$pandac$ASTNode* target479;
    panda$collections$Array* children482;
    panda$core$String* name488;
    panda$core$MutableString* finalName490;
    panda$core$Char8 $tmp493;
    panda$collections$Array* types496;
    org$pandalanguage$pandac$ASTNode* t501;
    panda$core$Char8 $tmp517;
    panda$core$Bit shouldAccept518;
    org$pandalanguage$pandac$ASTNode* $tmp432 = (($fn431) self->$class->vtable[17])(self);
    result430 = $tmp432;
    if (((panda$core$Bit) { result430 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l433:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp437 = (($fn436) self->$class->vtable[4])(self);
        token435 = $tmp437;
        switch (token435.kind.value) {
            case 103:
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp439 = (panda$collections$Array*) malloc(40);
                $tmp439->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp439->refCount.value = 1;
                panda$collections$Array$init($tmp439);
                children438 = $tmp439;
                panda$collections$Array$add$panda$collections$Array$T(children438, ((panda$core$Object*) result430));
                org$pandalanguage$pandac$parser$Token$nullable $tmp442 = (($fn441) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp442.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp445 = (($fn444) self->$class->vtable[29])(self);
                    expr443 = $tmp445;
                    if (((panda$core$Bit) { expr443 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children438, ((panda$core$Object*) expr443));
                    $l446:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp449 = (($fn448) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp449.nonnull }).value) goto $l447;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp451 = (($fn450) self->$class->vtable[29])(self);
                        expr443 = $tmp451;
                        if (((panda$core$Bit) { expr443 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children438, ((panda$core$Object*) expr443));
                    }
                    goto $l446;
                    $l447:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp454 = (($fn453) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s452);
                    if (((panda$core$Bit) { !$tmp454.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp455 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp455->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp455->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp455, ((panda$core$Int64) { 107 }), token435.position, ((panda$collections$ListView*) children438));
                result430 = $tmp455;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp458 = (panda$collections$Array*) malloc(40);
                $tmp458->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp458->refCount.value = 1;
                panda$collections$Array$init($tmp458);
                children457 = $tmp458;
                panda$collections$Array$add$panda$collections$Array$T(children457, ((panda$core$Object*) result430));
                org$pandalanguage$pandac$ASTNode* $tmp462 = (($fn461) self->$class->vtable[29])(self);
                expr460 = $tmp462;
                if (((panda$core$Bit) { expr460 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children457, ((panda$core$Object*) expr460));
                org$pandalanguage$pandac$parser$Token$nullable $tmp465 = (($fn464) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s463);
                if (((panda$core$Bit) { !$tmp465.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp466 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp466->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp466->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp466, ((panda$core$Int64) { 103 }), token435.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children457));
                result430 = $tmp466;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp470 = (($fn469) self->$class->vtable[7])(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp470.nonnull }).value) {
                {
                    name468 = &$s471;
                }
                }
                else {
                {
                    panda$core$String* $tmp473 = (($fn472) self->$class->vtable[18])(self);
                    name468 = $tmp473;
                    if (((panda$core$Bit) { name468 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp475 = (panda$collections$Array*) malloc(40);
                $tmp475->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp475->refCount.value = 1;
                panda$collections$Array$init($tmp475);
                children474 = $tmp475;
                panda$collections$Array$add$panda$collections$Array$T(children474, ((panda$core$Object*) result430));
                org$pandalanguage$pandac$ASTNode* $tmp477 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp477->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp477->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp477, ((panda$core$Int64) { 108 }), token435.position, ((panda$core$Object*) name468), ((panda$collections$ListView*) children474));
                result430 = $tmp477;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp481 = (($fn480) self->$class->vtable[19])(self);
                target479 = $tmp481;
                if (((panda$core$Bit) { target479 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp483 = (panda$collections$Array*) malloc(40);
                $tmp483->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp483->refCount.value = 1;
                panda$collections$Array$init($tmp483);
                children482 = $tmp483;
                panda$collections$Array$add$panda$collections$Array$T(children482, ((panda$core$Object*) result430));
                panda$collections$Array$add$panda$collections$Array$T(children482, ((panda$core$Object*) target479));
                org$pandalanguage$pandac$ASTNode* $tmp485 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp485->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp485->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp485, ((panda$core$Int64) { 111 }), token435.position, ((panda$collections$ListView*) children482));
                result430 = $tmp485;
            }
            break;
            case 62:
            {
                (($fn487) self->$class->vtable[5])(self, token435);
                panda$core$String* $tmp489 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result430);
                name488 = $tmp489;
                if (((panda$core$Bit) { name488 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp491 = (panda$core$MutableString*) malloc(48);
                    $tmp491->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp491->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp491, name488);
                    finalName490 = $tmp491;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp493, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName490, $tmp493);
                    (($fn494) self->$class->vtable[10])(self);
                    (($fn495) self->$class->vtable[4])(self);
                    panda$collections$Array* $tmp497 = (panda$collections$Array*) malloc(40);
                    $tmp497->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp497->refCount.value = 1;
                    panda$collections$Array$init($tmp497);
                    types496 = $tmp497;
                    org$pandalanguage$pandac$ASTNode* $tmp499 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp499->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp499->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp499, ((panda$core$Int64) { 109 }), result430->position, name488);
                    panda$collections$Array$add$panda$collections$Array$T(types496, ((panda$core$Object*) $tmp499));
                    org$pandalanguage$pandac$ASTNode* $tmp503 = (($fn502) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
                    t501 = $tmp503;
                    if (((panda$core$Bit) { t501 == NULL }).value) {
                    {
                        (($fn504) self->$class->vtable[12])(self);
                        return result430;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types496, ((panda$core$Object*) t501));
                    panda$core$MutableString$append$panda$core$Object(finalName490, ((panda$core$Object*) t501));
                    $l505:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp508 = (($fn507) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp508.nonnull }).value) goto $l506;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp510 = (($fn509) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
                        t501 = $tmp510;
                        if (((panda$core$Bit) { t501 == NULL }).value) {
                        {
                            (($fn511) self->$class->vtable[12])(self);
                            return result430;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types496, ((panda$core$Object*) t501));
                        panda$core$MutableString$append$panda$core$String(finalName490, &$s512);
                        panda$core$MutableString$append$panda$core$Object(finalName490, ((panda$core$Object*) t501));
                    }
                    goto $l505;
                    $l506:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp515 = (($fn514) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s513);
                    if (((panda$core$Bit) { !$tmp515.nonnull }).value) {
                    {
                        (($fn516) self->$class->vtable[12])(self);
                        return result430;
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp517, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName490, $tmp517);
                    panda$core$Object* $tmp519 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp519)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp521 = (($fn520) self->$class->vtable[6])(self);
                        switch ($tmp521.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept518 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept518 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept518 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept518.value) {
                    {
                        (($fn522) self->$class->vtable[11])(self);
                        org$pandalanguage$pandac$ASTNode* $tmp523 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                        $tmp523->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp523->refCount.value = 1;
                        panda$core$String* $tmp525 = panda$core$MutableString$convert$R$panda$core$String(finalName490);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp523, ((panda$core$Int64) { 154 }), result430->position, ((panda$core$Object*) $tmp525), ((panda$collections$ListView*) types496));
                        result430 = $tmp523;
                        goto $l433;
                    }
                    }
                    else {
                    {
                        (($fn526) self->$class->vtable[12])(self);
                        return result430;
                    }
                    }
                }
                }
                return result430;
            }
            break;
            default:
            {
                (($fn527) self->$class->vtable[5])(self, token435);
                return result430;
            }
        }
    }
    }
    $l434:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result528;
    org$pandalanguage$pandac$parser$Token$nullable op533;
    org$pandalanguage$pandac$ASTNode* next536;
    panda$collections$Array* children539;
    org$pandalanguage$pandac$ASTNode* $tmp530 = (($fn529) self->$class->vtable[21])(self);
    result528 = $tmp530;
    if (((panda$core$Bit) { result528 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l531:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp535 = (($fn534) self->$class->vtable[7])(self, ((panda$core$Int64) { 57 }));
        op533 = $tmp535;
        if (((panda$core$Bit) { !op533.nonnull }).value) {
        {
            goto $l532;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp538 = (($fn537) self->$class->vtable[21])(self);
        next536 = $tmp538;
        if (((panda$core$Bit) { next536 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp540 = (panda$collections$Array*) malloc(40);
        $tmp540->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp540->refCount.value = 1;
        panda$collections$Array$init($tmp540);
        children539 = $tmp540;
        panda$collections$Array$add$panda$collections$Array$T(children539, ((panda$core$Object*) result528));
        panda$collections$Array$add$panda$collections$Array$T(children539, ((panda$core$Object*) next536));
        org$pandalanguage$pandac$ASTNode* $tmp542 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp542->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp542->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp542, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op533.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op533.value).kind)), ((panda$collections$ListView*) children539));
        result528 = $tmp542;
    }
    }
    $l532:;
    return result528;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op544;
    org$pandalanguage$pandac$ASTNode* base547;
    panda$collections$Array* children550;
    org$pandalanguage$pandac$parser$Token $tmp546 = (($fn545) self->$class->vtable[4])(self);
    op544 = $tmp546;
    switch (op544.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp549 = (($fn548) self->$class->vtable[22])(self);
            base547 = $tmp549;
            if (((panda$core$Bit) { base547 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp551 = (panda$collections$Array*) malloc(40);
            $tmp551->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp551->refCount.value = 1;
            panda$collections$Array$init($tmp551);
            children550 = $tmp551;
            panda$collections$Array$add$panda$collections$Array$T(children550, ((panda$core$Object*) base547));
            org$pandalanguage$pandac$ASTNode* $tmp553 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp553->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp553->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp553, ((panda$core$Int64) { 112 }), op544.position, ((panda$core$Object*) wrap_panda$core$Int64(op544.kind)), ((panda$collections$ListView*) children550));
            return $tmp553;
        }
        break;
        default:
        {
            (($fn555) self->$class->vtable[5])(self, op544);
            org$pandalanguage$pandac$ASTNode* $tmp557 = (($fn556) self->$class->vtable[22])(self);
            return $tmp557;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result558;
    org$pandalanguage$pandac$parser$Token op563;
    org$pandalanguage$pandac$ASTNode* next566;
    panda$collections$Array* children569;
    org$pandalanguage$pandac$parser$Token nextToken574;
    org$pandalanguage$pandac$ASTNode* next578;
    panda$collections$Array* children581;
    org$pandalanguage$pandac$ASTNode* $tmp560 = (($fn559) self->$class->vtable[23])(self);
    result558 = $tmp560;
    if (((panda$core$Bit) { result558 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l561:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp565 = (($fn564) self->$class->vtable[4])(self);
        op563 = $tmp565;
        switch (op563.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp568 = (($fn567) self->$class->vtable[23])(self);
                next566 = $tmp568;
                if (((panda$core$Bit) { next566 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp570 = (panda$collections$Array*) malloc(40);
                $tmp570->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp570->refCount.value = 1;
                panda$collections$Array$init($tmp570);
                children569 = $tmp570;
                panda$collections$Array$add$panda$collections$Array$T(children569, ((panda$core$Object*) result558));
                panda$collections$Array$add$panda$collections$Array$T(children569, ((panda$core$Object*) next566));
                org$pandalanguage$pandac$ASTNode* $tmp572 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp572->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp572->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp572, ((panda$core$Int64) { 103 }), op563.position, ((panda$core$Object*) wrap_panda$core$Int64(op563.kind)), ((panda$collections$ListView*) children569));
                result558 = $tmp572;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp576 = (($fn575) self->$class->vtable[3])(self);
                nextToken574 = $tmp576;
                panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken574.kind, ((panda$core$Int64) { 63 }));
                if ($tmp577.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp580 = (($fn579) self->$class->vtable[23])(self);
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
                    panda$collections$Array$add$panda$collections$Array$T(children581, ((panda$core$Object*) result558));
                    panda$collections$Array$add$panda$collections$Array$T(children581, ((panda$core$Object*) next578));
                    org$pandalanguage$pandac$ASTNode* $tmp584 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp584->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp584->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp584, ((panda$core$Int64) { 103 }), op563.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children581));
                    result558 = $tmp584;
                }
                }
                else {
                {
                    (($fn586) self->$class->vtable[5])(self, nextToken574);
                    (($fn587) self->$class->vtable[5])(self, op563);
                    return result558;
                }
                }
            }
            break;
            default:
            {
                (($fn588) self->$class->vtable[5])(self, op563);
                return result558;
            }
        }
    }
    }
    $l562:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result589;
    org$pandalanguage$pandac$parser$Token op594;
    org$pandalanguage$pandac$ASTNode* next597;
    panda$collections$Array* children600;
    org$pandalanguage$pandac$ASTNode* $tmp591 = (($fn590) self->$class->vtable[24])(self);
    result589 = $tmp591;
    if (((panda$core$Bit) { result589 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l592:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp596 = (($fn595) self->$class->vtable[4])(self);
        op594 = $tmp596;
        switch (op594.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp599 = (($fn598) self->$class->vtable[24])(self);
                next597 = $tmp599;
                if (((panda$core$Bit) { next597 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp601 = (panda$collections$Array*) malloc(40);
                $tmp601->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp601->refCount.value = 1;
                panda$collections$Array$init($tmp601);
                children600 = $tmp601;
                panda$collections$Array$add$panda$collections$Array$T(children600, ((panda$core$Object*) result589));
                panda$collections$Array$add$panda$collections$Array$T(children600, ((panda$core$Object*) next597));
                org$pandalanguage$pandac$ASTNode* $tmp603 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp603->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp603->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp603, ((panda$core$Int64) { 103 }), op594.position, ((panda$core$Object*) wrap_panda$core$Int64(op594.kind)), ((panda$collections$ListView*) children600));
                result589 = $tmp603;
            }
            break;
            default:
            {
                (($fn605) self->$class->vtable[5])(self, op594);
                return result589;
            }
        }
    }
    }
    $l593:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result606;
    org$pandalanguage$pandac$Position $tmp611;
    org$pandalanguage$pandac$parser$Token op614;
    org$pandalanguage$pandac$parser$Token next617;
    org$pandalanguage$pandac$ASTNode* right620;
    org$pandalanguage$pandac$Position $tmp634;
    org$pandalanguage$pandac$ASTNode* step635;
    org$pandalanguage$pandac$Position $tmp642;
    panda$collections$Array* children643;
    panda$core$Int64 kind646;
    org$pandalanguage$pandac$parser$Token $tmp608 = (($fn607) self->$class->vtable[6])(self);
    switch ($tmp608.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp609 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp609->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp609->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp611);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp609, ((panda$core$Int64) { 138 }), $tmp611);
            result606 = $tmp609;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp613 = (($fn612) self->$class->vtable[25])(self);
            result606 = $tmp613;
            if (((panda$core$Bit) { result606 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp616 = (($fn615) self->$class->vtable[4])(self);
    op614 = $tmp616;
    switch (op614.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$parser$Token $tmp619 = (($fn618) self->$class->vtable[6])(self);
            next617 = $tmp619;
            panda$core$Bit $tmp623 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next617.kind, ((panda$core$Int64) { 102 }));
            bool $tmp622 = $tmp623.value;
            if (!$tmp622) goto $l624;
            panda$core$Bit $tmp625 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next617.kind, ((panda$core$Int64) { 104 }));
            $tmp622 = $tmp625.value;
            $l624:;
            panda$core$Bit $tmp626 = { $tmp622 };
            bool $tmp621 = $tmp626.value;
            if (!$tmp621) goto $l627;
            panda$core$Bit $tmp628 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next617.kind, ((panda$core$Int64) { 33 }));
            $tmp621 = $tmp628.value;
            $l627:;
            panda$core$Bit $tmp629 = { $tmp621 };
            if ($tmp629.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp631 = (($fn630) self->$class->vtable[25])(self);
                right620 = $tmp631;
                if (((panda$core$Bit) { right620 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp632 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp632->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp632->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp634);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp632, ((panda$core$Int64) { 138 }), $tmp634);
                right620 = $tmp632;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp637 = (($fn636) self->$class->vtable[7])(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp637.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp639 = (($fn638) self->$class->vtable[25])(self);
                step635 = $tmp639;
                if (((panda$core$Bit) { step635 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp640 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp640->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp640->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp642);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp640, ((panda$core$Int64) { 138 }), $tmp642);
                step635 = $tmp640;
            }
            }
            panda$collections$Array* $tmp644 = (panda$collections$Array*) malloc(40);
            $tmp644->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp644->refCount.value = 1;
            panda$collections$Array$init($tmp644);
            children643 = $tmp644;
            panda$collections$Array$add$panda$collections$Array$T(children643, ((panda$core$Object*) result606));
            panda$collections$Array$add$panda$collections$Array$T(children643, ((panda$core$Object*) right620));
            panda$collections$Array$add$panda$collections$Array$T(children643, ((panda$core$Object*) step635));
            panda$core$Bit $tmp647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op614.kind, ((panda$core$Int64) { 97 }));
            if ($tmp647.value) {
            {
                kind646 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind646 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp648 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp648->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp648->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp648, kind646, op614.position, ((panda$collections$ListView*) children643));
            return $tmp648;
        }
        break;
        default:
        {
            (($fn650) self->$class->vtable[5])(self, op614);
            return result606;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result651;
    org$pandalanguage$pandac$parser$Token op656;
    org$pandalanguage$pandac$ASTNode* next659;
    panda$collections$Array* children662;
    org$pandalanguage$pandac$ASTNode* $tmp653 = (($fn652) self->$class->vtable[26])(self);
    result651 = $tmp653;
    if (((panda$core$Bit) { result651 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l654:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp658 = (($fn657) self->$class->vtable[4])(self);
        op656 = $tmp658;
        switch (op656.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp661 = (($fn660) self->$class->vtable[26])(self);
                next659 = $tmp661;
                if (((panda$core$Bit) { next659 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp663 = (panda$collections$Array*) malloc(40);
                $tmp663->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp663->refCount.value = 1;
                panda$collections$Array$init($tmp663);
                children662 = $tmp663;
                panda$collections$Array$add$panda$collections$Array$T(children662, ((panda$core$Object*) result651));
                panda$collections$Array$add$panda$collections$Array$T(children662, ((panda$core$Object*) next659));
                org$pandalanguage$pandac$ASTNode* $tmp665 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp665->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp665->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp665, ((panda$core$Int64) { 103 }), op656.position, ((panda$core$Object*) wrap_panda$core$Int64(op656.kind)), ((panda$collections$ListView*) children662));
                result651 = $tmp665;
            }
            break;
            default:
            {
                (($fn667) self->$class->vtable[5])(self, op656);
                return result651;
            }
        }
    }
    }
    $l655:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result668;
    org$pandalanguage$pandac$parser$Token op673;
    org$pandalanguage$pandac$ASTNode* next676;
    panda$collections$Array* children679;
    org$pandalanguage$pandac$ASTNode* $tmp670 = (($fn669) self->$class->vtable[27])(self);
    result668 = $tmp670;
    if (((panda$core$Bit) { result668 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l671:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp675 = (($fn674) self->$class->vtable[4])(self);
        op673 = $tmp675;
        switch (op673.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp678 = (($fn677) self->$class->vtable[27])(self);
                next676 = $tmp678;
                if (((panda$core$Bit) { next676 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp680 = (panda$collections$Array*) malloc(40);
                $tmp680->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp680->refCount.value = 1;
                panda$collections$Array$init($tmp680);
                children679 = $tmp680;
                panda$collections$Array$add$panda$collections$Array$T(children679, ((panda$core$Object*) result668));
                panda$collections$Array$add$panda$collections$Array$T(children679, ((panda$core$Object*) next676));
                org$pandalanguage$pandac$ASTNode* $tmp682 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp682->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp682->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp682, ((panda$core$Int64) { 103 }), op673.position, ((panda$core$Object*) wrap_panda$core$Int64(op673.kind)), ((panda$collections$ListView*) children679));
                result668 = $tmp682;
            }
            break;
            default:
            {
                (($fn684) self->$class->vtable[5])(self, op673);
                return result668;
            }
        }
    }
    }
    $l672:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result685;
    org$pandalanguage$pandac$parser$Token$nullable op690;
    org$pandalanguage$pandac$ASTNode* next693;
    panda$collections$Array* children696;
    org$pandalanguage$pandac$ASTNode* $tmp687 = (($fn686) self->$class->vtable[28])(self);
    result685 = $tmp687;
    if (((panda$core$Bit) { result685 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l688:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp692 = (($fn691) self->$class->vtable[7])(self, ((panda$core$Int64) { 68 }));
        op690 = $tmp692;
        if (((panda$core$Bit) { !op690.nonnull }).value) {
        {
            goto $l689;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp695 = (($fn694) self->$class->vtable[28])(self);
        next693 = $tmp695;
        if (((panda$core$Bit) { next693 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp697 = (panda$collections$Array*) malloc(40);
        $tmp697->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp697->refCount.value = 1;
        panda$collections$Array$init($tmp697);
        children696 = $tmp697;
        panda$collections$Array$add$panda$collections$Array$T(children696, ((panda$core$Object*) result685));
        panda$collections$Array$add$panda$collections$Array$T(children696, ((panda$core$Object*) next693));
        org$pandalanguage$pandac$ASTNode* $tmp699 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp699->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp699->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp699, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op690.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op690.value).kind)), ((panda$collections$ListView*) children696));
        result685 = $tmp699;
    }
    }
    $l689:;
    return result685;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start701;
    org$pandalanguage$pandac$ASTNode* test705;
    panda$collections$Array* children708;
    org$pandalanguage$pandac$ASTNode* ifTrue711;
    org$pandalanguage$pandac$ASTNode* ifFalse719;
    org$pandalanguage$pandac$ASTNode* ifFalse722;
    org$pandalanguage$pandac$parser$Token$nullable $tmp704 = (($fn703) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s702);
    start701 = $tmp704;
    if (((panda$core$Bit) { !start701.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp707 = (($fn706) self->$class->vtable[29])(self);
    test705 = $tmp707;
    if (((panda$core$Bit) { test705 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp709 = (panda$collections$Array*) malloc(40);
    $tmp709->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp709->refCount.value = 1;
    panda$collections$Array$init($tmp709);
    children708 = $tmp709;
    panda$collections$Array$add$panda$collections$Array$T(children708, ((panda$core$Object*) test705));
    org$pandalanguage$pandac$ASTNode* $tmp713 = (($fn712) self->$class->vtable[40])(self);
    ifTrue711 = $tmp713;
    if (((panda$core$Bit) { ifTrue711 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children708, ((panda$core$Object*) ifTrue711));
    org$pandalanguage$pandac$parser$Token$nullable $tmp715 = (($fn714) self->$class->vtable[7])(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp715.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp717 = (($fn716) self->$class->vtable[6])(self);
        panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp717.kind, ((panda$core$Int64) { 36 }));
        if ($tmp718.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp721 = (($fn720) self->$class->vtable[30])(self);
            ifFalse719 = $tmp721;
            if (((panda$core$Bit) { ifFalse719 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children708, ((panda$core$Object*) ifFalse719));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp724 = (($fn723) self->$class->vtable[40])(self);
            ifFalse722 = $tmp724;
            if (((panda$core$Bit) { ifFalse722 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children708, ((panda$core$Object*) ifFalse722));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp725 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp725->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp725->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp725, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start701.value).position, ((panda$collections$ListView*) children708));
    return $tmp725;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp729 = (($fn728) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s727);
    if (((panda$core$Bit) { !$tmp729.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp731 = (($fn730) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
    return $tmp731;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id732;
    org$pandalanguage$pandac$ASTNode* type739;
    panda$collections$Array* children742;
    org$pandalanguage$pandac$parser$Token$nullable $tmp735 = (($fn734) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s733);
    id732 = $tmp735;
    if (((panda$core$Bit) { !id732.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp737 = (($fn736) self->$class->vtable[6])(self);
    panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737.kind, ((panda$core$Int64) { 95 }));
    if ($tmp738.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp741 = (($fn740) self->$class->vtable[31])(self);
        type739 = $tmp741;
        if (((panda$core$Bit) { type739 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp743 = (panda$collections$Array*) malloc(40);
        $tmp743->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp743->refCount.value = 1;
        panda$collections$Array$init($tmp743);
        children742 = $tmp743;
        panda$collections$Array$add$panda$collections$Array$T(children742, ((panda$core$Object*) type739));
        org$pandalanguage$pandac$ASTNode* $tmp745 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp745->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp745->refCount.value = 1;
        panda$core$String* $tmp748 = (($fn747) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id732.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp745, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id732.value).position, ((panda$core$Object*) $tmp748), ((panda$collections$ListView*) children742));
        return $tmp745;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp749 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp749->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp749->refCount.value = 1;
    panda$core$String* $tmp752 = (($fn751) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id732.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp749, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id732.value).position, $tmp752);
    return $tmp749;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start753;
    org$pandalanguage$pandac$ASTNode* t757;
    org$pandalanguage$pandac$ASTNode* list763;
    org$pandalanguage$pandac$ASTNode* block766;
    panda$collections$Array* children769;
    org$pandalanguage$pandac$parser$Token$nullable $tmp756 = (($fn755) self->$class->vtable[8])(self, ((panda$core$Int64) { 32 }), &$s754);
    start753 = $tmp756;
    if (((panda$core$Bit) { !start753.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp759 = (($fn758) self->$class->vtable[32])(self);
    t757 = $tmp759;
    if (((panda$core$Bit) { t757 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp762 = (($fn761) self->$class->vtable[8])(self, ((panda$core$Int64) { 34 }), &$s760);
    if (((panda$core$Bit) { !$tmp762.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp765 = (($fn764) self->$class->vtable[29])(self);
    list763 = $tmp765;
    if (((panda$core$Bit) { list763 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp768 = (($fn767) self->$class->vtable[40])(self);
    block766 = $tmp768;
    if (((panda$core$Bit) { block766 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp770 = (panda$collections$Array*) malloc(40);
    $tmp770->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp770->refCount.value = 1;
    panda$collections$Array$init($tmp770);
    children769 = $tmp770;
    panda$collections$Array$add$panda$collections$Array$T(children769, ((panda$core$Object*) t757));
    panda$collections$Array$add$panda$collections$Array$T(children769, ((panda$core$Object*) list763));
    panda$collections$Array$add$panda$collections$Array$T(children769, ((panda$core$Object*) block766));
    org$pandalanguage$pandac$ASTNode* $tmp772 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp772->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp772->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp772, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start753.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children769));
    return $tmp772;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start774;
    org$pandalanguage$pandac$ASTNode* test778;
    org$pandalanguage$pandac$ASTNode* body781;
    panda$collections$Array* children784;
    org$pandalanguage$pandac$parser$Token$nullable $tmp777 = (($fn776) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s775);
    start774 = $tmp777;
    if (((panda$core$Bit) { !start774.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp780 = (($fn779) self->$class->vtable[29])(self);
    test778 = $tmp780;
    if (((panda$core$Bit) { test778 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp783 = (($fn782) self->$class->vtable[40])(self);
    body781 = $tmp783;
    if (((panda$core$Bit) { body781 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp785 = (panda$collections$Array*) malloc(40);
    $tmp785->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp785->refCount.value = 1;
    panda$collections$Array$init($tmp785);
    children784 = $tmp785;
    panda$collections$Array$add$panda$collections$Array$T(children784, ((panda$core$Object*) test778));
    panda$collections$Array$add$panda$collections$Array$T(children784, ((panda$core$Object*) body781));
    org$pandalanguage$pandac$ASTNode* $tmp787 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp787->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp787->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp787, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start774.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children784));
    return $tmp787;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start789;
    org$pandalanguage$pandac$ASTNode* body793;
    org$pandalanguage$pandac$ASTNode* test799;
    panda$collections$Array* children802;
    org$pandalanguage$pandac$parser$Token$nullable $tmp792 = (($fn791) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s790);
    start789 = $tmp792;
    if (((panda$core$Bit) { !start789.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp795 = (($fn794) self->$class->vtable[40])(self);
    body793 = $tmp795;
    if (((panda$core$Bit) { body793 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp798 = (($fn797) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s796);
    if (((panda$core$Bit) { !$tmp798.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp801 = (($fn800) self->$class->vtable[29])(self);
    test799 = $tmp801;
    if (((panda$core$Bit) { test799 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp803 = (panda$collections$Array*) malloc(40);
    $tmp803->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp803->refCount.value = 1;
    panda$collections$Array$init($tmp803);
    children802 = $tmp803;
    panda$collections$Array$add$panda$collections$Array$T(children802, ((panda$core$Object*) body793));
    panda$collections$Array$add$panda$collections$Array$T(children802, ((panda$core$Object*) test799));
    org$pandalanguage$pandac$ASTNode* $tmp805 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp805->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp805->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp805, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start789.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children802));
    return $tmp805;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start807;
    org$pandalanguage$pandac$ASTNode* body811;
    panda$collections$Array* children814;
    org$pandalanguage$pandac$parser$Token$nullable $tmp810 = (($fn809) self->$class->vtable[8])(self, ((panda$core$Int64) { 35 }), &$s808);
    start807 = $tmp810;
    if (((panda$core$Bit) { !start807.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp813 = (($fn812) self->$class->vtable[40])(self);
    body811 = $tmp813;
    if (((panda$core$Bit) { body811 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp815 = (panda$collections$Array*) malloc(40);
    $tmp815->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp815->refCount.value = 1;
    panda$collections$Array$init($tmp815);
    children814 = $tmp815;
    panda$collections$Array$add$panda$collections$Array$T(children814, ((panda$core$Object*) body811));
    org$pandalanguage$pandac$ASTNode* $tmp817 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp817->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp817->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp817, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start807.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children814));
    return $tmp817;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start819;
    org$pandalanguage$pandac$ASTNode* expr823;
    panda$collections$Array* children826;
    org$pandalanguage$pandac$ASTNode* message831;
    org$pandalanguage$pandac$parser$Token$nullable $tmp822 = (($fn821) self->$class->vtable[8])(self, ((panda$core$Int64) { 44 }), &$s820);
    start819 = $tmp822;
    if (((panda$core$Bit) { !start819.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp825 = (($fn824) self->$class->vtable[29])(self);
    expr823 = $tmp825;
    if (((panda$core$Bit) { expr823 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp827 = (panda$collections$Array*) malloc(40);
    $tmp827->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp827->refCount.value = 1;
    panda$collections$Array$init($tmp827);
    children826 = $tmp827;
    panda$collections$Array$add$panda$collections$Array$T(children826, ((panda$core$Object*) expr823));
    org$pandalanguage$pandac$parser$Token$nullable $tmp830 = (($fn829) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp830.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp833 = (($fn832) self->$class->vtable[29])(self);
        message831 = $tmp833;
        if (((panda$core$Bit) { message831 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children826, ((panda$core$Object*) message831));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp834 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp834->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp834->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp834, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start819.value).position, ((panda$collections$ListView*) children826));
    return $tmp834;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start836;
    panda$collections$Array* expressions840;
    org$pandalanguage$pandac$ASTNode* expr843;
    panda$collections$Array* children852;
    org$pandalanguage$pandac$ASTNode* stmt864;
    org$pandalanguage$pandac$ASTNode* stmt867;
    org$pandalanguage$pandac$parser$Token$nullable $tmp839 = (($fn838) self->$class->vtable[8])(self, ((panda$core$Int64) { 39 }), &$s837);
    start836 = $tmp839;
    if (((panda$core$Bit) { !start836.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp841 = (panda$collections$Array*) malloc(40);
    $tmp841->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp841->refCount.value = 1;
    panda$collections$Array$init($tmp841);
    expressions840 = $tmp841;
    org$pandalanguage$pandac$ASTNode* $tmp845 = (($fn844) self->$class->vtable[29])(self);
    expr843 = $tmp845;
    if (((panda$core$Bit) { expr843 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions840, ((panda$core$Object*) expr843));
    $l846:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp849 = (($fn848) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp849.nonnull }).value) goto $l847;
    {
        org$pandalanguage$pandac$ASTNode* $tmp851 = (($fn850) self->$class->vtable[29])(self);
        expr843 = $tmp851;
        if (((panda$core$Bit) { expr843 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions840, ((panda$core$Object*) expr843));
    }
    goto $l846;
    $l847:;
    panda$collections$Array* $tmp853 = (panda$collections$Array*) malloc(40);
    $tmp853->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp853->refCount.value = 1;
    panda$collections$Array$init($tmp853);
    children852 = $tmp853;
    org$pandalanguage$pandac$ASTNode* $tmp855 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp855->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp855->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp855, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start836.value).position, ((panda$collections$ListView*) expressions840));
    panda$collections$Array$add$panda$collections$Array$T(children852, ((panda$core$Object*) $tmp855));
    org$pandalanguage$pandac$parser$Token$nullable $tmp859 = (($fn858) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s857);
    if (((panda$core$Bit) { !$tmp859.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l860:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp863 = (($fn862) self->$class->vtable[6])(self);
        switch ($tmp863.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l861;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp866 = (($fn865) self->$class->vtable[48])(self);
                stmt864 = $tmp866;
                if (((panda$core$Bit) { stmt864 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children852, ((panda$core$Object*) stmt864));
                goto $l861;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp869 = (($fn868) self->$class->vtable[50])(self);
                    stmt867 = $tmp869;
                    if (((panda$core$Bit) { stmt867 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children852, ((panda$core$Object*) stmt867));
                }
            }
        }
    }
    }
    $l861:;
    org$pandalanguage$pandac$ASTNode* $tmp870 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp870->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp870->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp870, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start836.value).position, ((panda$collections$ListView*) children852));
    return $tmp870;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start872;
    panda$collections$Array* children876;
    org$pandalanguage$pandac$ASTNode* expr879;
    org$pandalanguage$pandac$parser$Token token887;
    org$pandalanguage$pandac$ASTNode* w890;
    org$pandalanguage$pandac$parser$Token o893;
    panda$collections$Array* statements899;
    org$pandalanguage$pandac$ASTNode* stmt906;
    org$pandalanguage$pandac$ASTNode* stmt909;
    org$pandalanguage$pandac$parser$Token$nullable $tmp875 = (($fn874) self->$class->vtable[8])(self, ((panda$core$Int64) { 38 }), &$s873);
    start872 = $tmp875;
    if (((panda$core$Bit) { !start872.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp877 = (panda$collections$Array*) malloc(40);
    $tmp877->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp877->refCount.value = 1;
    panda$collections$Array$init($tmp877);
    children876 = $tmp877;
    org$pandalanguage$pandac$ASTNode* $tmp881 = (($fn880) self->$class->vtable[29])(self);
    expr879 = $tmp881;
    if (((panda$core$Bit) { expr879 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children876, ((panda$core$Object*) expr879));
    org$pandalanguage$pandac$parser$Token$nullable $tmp884 = (($fn883) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s882);
    if (((panda$core$Bit) { !$tmp884.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l885:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp889 = (($fn888) self->$class->vtable[6])(self);
        token887 = $tmp889;
        switch (token887.kind.value) {
            case 100:
            {
                goto $l886;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp892 = (($fn891) self->$class->vtable[38])(self);
                w890 = $tmp892;
                if (((panda$core$Bit) { w890 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children876, ((panda$core$Object*) w890));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp895 = (($fn894) self->$class->vtable[4])(self);
                o893 = $tmp895;
                org$pandalanguage$pandac$parser$Token$nullable $tmp898 = (($fn897) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s896);
                if (((panda$core$Bit) { !$tmp898.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp900 = (panda$collections$Array*) malloc(40);
                $tmp900->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp900->refCount.value = 1;
                panda$collections$Array$init($tmp900);
                statements899 = $tmp900;
                $l902:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp905 = (($fn904) self->$class->vtable[6])(self);
                    switch ($tmp905.kind.value) {
                        case 100:
                        {
                            goto $l903;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp908 = (($fn907) self->$class->vtable[48])(self);
                            stmt906 = $tmp908;
                            if (((panda$core$Bit) { stmt906 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements899, ((panda$core$Object*) stmt906));
                            goto $l903;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp911 = (($fn910) self->$class->vtable[50])(self);
                            stmt909 = $tmp911;
                            if (((panda$core$Bit) { stmt909 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements899, ((panda$core$Object*) stmt909));
                        }
                    }
                }
                }
                $l903:;
                org$pandalanguage$pandac$ASTNode* $tmp912 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp912->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp912->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp912, ((panda$core$Int64) { 127 }), o893.position, ((panda$collections$ListView*) statements899));
                panda$collections$Array$add$panda$collections$Array$T(children876, ((panda$core$Object*) $tmp912));
                goto $l886;
            }
            break;
            default:
            {
                (($fn914) self->$class->vtable[4])(self);
                panda$core$String* $tmp918 = (($fn917) self->$class->vtable[13])(self, token887);
                panda$core$String* $tmp919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s916, $tmp918);
                panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp919, &$s920);
                panda$core$String* $tmp922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s915, $tmp921);
                (($fn923) self->$class->vtable[9])(self, token887, $tmp922);
            }
        }
    }
    }
    $l886:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp926 = (($fn925) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s924);
    if (((panda$core$Bit) { !$tmp926.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp927 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp927->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp927->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp927, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start872.value).position, ((panda$collections$ListView*) children876));
    return $tmp927;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start929;
    panda$collections$Array* children933;
    org$pandalanguage$pandac$ASTNode* stmt941;
    org$pandalanguage$pandac$ASTNode* stmt947;
    org$pandalanguage$pandac$parser$Token$nullable $tmp932 = (($fn931) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s930);
    start929 = $tmp932;
    if (((panda$core$Bit) { !start929.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp934 = (panda$collections$Array*) malloc(40);
    $tmp934->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp934->refCount.value = 1;
    panda$collections$Array$init($tmp934);
    children933 = $tmp934;
    $l936:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp939 = (($fn938) self->$class->vtable[6])(self);
        switch ($tmp939.kind.value) {
            case 100:
            {
                (($fn940) self->$class->vtable[4])(self);
                goto $l937;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp943 = (($fn942) self->$class->vtable[48])(self);
                stmt941 = $tmp943;
                if (((panda$core$Bit) { stmt941 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp946 = (($fn945) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s944);
                if (((panda$core$Bit) { !$tmp946.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children933, ((panda$core$Object*) stmt941));
                goto $l937;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp949 = (($fn948) self->$class->vtable[50])(self);
                stmt947 = $tmp949;
                if (((panda$core$Bit) { stmt947 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children933, ((panda$core$Object*) stmt947));
            }
        }
    }
    }
    $l937:;
    org$pandalanguage$pandac$ASTNode* $tmp950 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp950->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp950->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp950, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start929.value).position, ((panda$collections$ListView*) children933));
    return $tmp950;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start952;
    org$pandalanguage$pandac$parser$Token op957;
    org$pandalanguage$pandac$ASTNode* rvalue960;
    panda$collections$Array* children963;
    org$pandalanguage$pandac$parser$Token op972;
    org$pandalanguage$pandac$ASTNode* rvalue975;
    panda$collections$Array* children978;
    org$pandalanguage$pandac$ASTNode* $tmp954 = (($fn953) self->$class->vtable[29])(self);
    start952 = $tmp954;
    if (((panda$core$Bit) { start952 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp956 = (($fn955) self->$class->vtable[6])(self);
    switch ($tmp956.kind.value) {
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
            org$pandalanguage$pandac$parser$Token $tmp959 = (($fn958) self->$class->vtable[4])(self);
            op957 = $tmp959;
            org$pandalanguage$pandac$ASTNode* $tmp962 = (($fn961) self->$class->vtable[29])(self);
            rvalue960 = $tmp962;
            if (((panda$core$Bit) { rvalue960 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp964 = (panda$collections$Array*) malloc(40);
            $tmp964->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp964->refCount.value = 1;
            panda$collections$Array$init($tmp964);
            children963 = $tmp964;
            panda$collections$Array$add$panda$collections$Array$T(children963, ((panda$core$Object*) start952));
            panda$collections$Array$add$panda$collections$Array$T(children963, ((panda$core$Object*) rvalue960));
            org$pandalanguage$pandac$ASTNode* $tmp966 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp966->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp966->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp966, ((panda$core$Int64) { 103 }), start952->position, ((panda$core$Object*) wrap_panda$core$Int64(op957.kind)), ((panda$collections$ListView*) children963));
            return $tmp966;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp969 = (($fn968) self->$class->vtable[6])(self);
            (($fn971) self->$class->vtable[9])(self, $tmp969, &$s970);
            org$pandalanguage$pandac$parser$Token $tmp974 = (($fn973) self->$class->vtable[4])(self);
            op972 = $tmp974;
            org$pandalanguage$pandac$ASTNode* $tmp977 = (($fn976) self->$class->vtable[29])(self);
            rvalue975 = $tmp977;
            if (((panda$core$Bit) { rvalue975 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp979 = (panda$collections$Array*) malloc(40);
            $tmp979->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp979->refCount.value = 1;
            panda$collections$Array$init($tmp979);
            children978 = $tmp979;
            panda$collections$Array$add$panda$collections$Array$T(children978, ((panda$core$Object*) start952));
            panda$collections$Array$add$panda$collections$Array$T(children978, ((panda$core$Object*) rvalue975));
            org$pandalanguage$pandac$ASTNode* $tmp981 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp981->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp981->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp981, ((panda$core$Int64) { 103 }), start952->position, ((panda$core$Object*) wrap_panda$core$Int64(op972.kind)), ((panda$collections$ListView*) children978));
            return $tmp981;
        }
        break;
        default:
        {
            return start952;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children983;
    org$pandalanguage$pandac$ASTNode* t986;
    org$pandalanguage$pandac$ASTNode* value991;
    org$pandalanguage$pandac$ASTNode* value1001;
    panda$collections$Array* $tmp984 = (panda$collections$Array*) malloc(40);
    $tmp984->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp984->refCount.value = 1;
    panda$collections$Array$init($tmp984);
    children983 = $tmp984;
    org$pandalanguage$pandac$ASTNode* $tmp988 = (($fn987) self->$class->vtable[32])(self);
    t986 = $tmp988;
    if (((panda$core$Bit) { t986 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children983, ((panda$core$Object*) t986));
    org$pandalanguage$pandac$parser$Token$nullable $tmp990 = (($fn989) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp990.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp993 = (($fn992) self->$class->vtable[29])(self);
        value991 = $tmp993;
        if (((panda$core$Bit) { value991 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children983, ((panda$core$Object*) value991));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp995 = (($fn994) self->$class->vtable[6])(self);
    panda$core$Bit $tmp996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp995.kind, ((panda$core$Int64) { 58 }));
    if ($tmp996.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp998 = (($fn997) self->$class->vtable[4])(self);
        (($fn1000) self->$class->vtable[9])(self, $tmp998, &$s999);
        org$pandalanguage$pandac$ASTNode* $tmp1003 = (($fn1002) self->$class->vtable[29])(self);
        value1001 = $tmp1003;
        if (((panda$core$Bit) { value1001 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children983, ((panda$core$Object*) value1001));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1004 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1004->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1004->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1004, ((panda$core$Int64) { 129 }), t986->position, ((panda$collections$ListView*) children983));
    return $tmp1004;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1006;
    panda$core$Int64 kind1009;
    panda$collections$Array* children1012;
    org$pandalanguage$pandac$ASTNode* child1015;
    org$pandalanguage$pandac$ASTNode* child1022;
    org$pandalanguage$pandac$parser$Token $tmp1008 = (($fn1007) self->$class->vtable[4])(self);
    start1006 = $tmp1008;
    switch (start1006.kind.value) {
        case 23:
        {
            kind1009 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind1009 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind1009 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind1009 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            (($fn1011) self->$class->vtable[9])(self, start1006, &$s1010);
        }
    }
    panda$collections$Array* $tmp1013 = (panda$collections$Array*) malloc(40);
    $tmp1013->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1013->refCount.value = 1;
    panda$collections$Array$init($tmp1013);
    children1012 = $tmp1013;
    org$pandalanguage$pandac$ASTNode* $tmp1017 = (($fn1016) self->$class->vtable[42])(self);
    child1015 = $tmp1017;
    if (((panda$core$Bit) { child1015 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1012, ((panda$core$Object*) child1015));
    $l1018:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1021 = (($fn1020) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1021.nonnull }).value) goto $l1019;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1024 = (($fn1023) self->$class->vtable[42])(self);
        child1022 = $tmp1024;
        if (((panda$core$Bit) { child1022 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1012, ((panda$core$Object*) child1022));
    }
    goto $l1018;
    $l1019:;
    org$pandalanguage$pandac$ASTNode* $tmp1025 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1025->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1025->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1025, kind1009, start1006.position, ((panda$collections$ListView*) children1012));
    return $tmp1025;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1027;
    panda$collections$Array* children1034;
    org$pandalanguage$pandac$ASTNode* expr1043;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1030 = (($fn1029) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1028);
    start1027 = $tmp1030;
    if (((panda$core$Bit) { !start1027.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1033 = (($fn1032) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1031);
    if (((panda$core$Bit) { !$tmp1033.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp1035 = (panda$collections$Array*) malloc(40);
    $tmp1035->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1035->refCount.value = 1;
    panda$collections$Array$init($tmp1035);
    children1034 = $tmp1035;
    org$pandalanguage$pandac$ASTNode* $tmp1037 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1037->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1037->refCount.value = 1;
    panda$core$String* $tmp1040 = (($fn1039) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) start1027.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1037, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start1027.value).position, $tmp1040);
    panda$collections$Array$add$panda$collections$Array$T(children1034, ((panda$core$Object*) $tmp1037));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1042 = (($fn1041) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1042.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1045 = (($fn1044) self->$class->vtable[29])(self);
        expr1043 = $tmp1045;
        if (((panda$core$Bit) { expr1043 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1034, ((panda$core$Object*) expr1043));
        $l1046:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1049 = (($fn1048) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1049.nonnull }).value) goto $l1047;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1051 = (($fn1050) self->$class->vtable[29])(self);
            expr1043 = $tmp1051;
            if (((panda$core$Bit) { expr1043 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1034, ((panda$core$Object*) expr1043));
        }
        goto $l1046;
        $l1047:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1054 = (($fn1053) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1052);
        if (((panda$core$Bit) { !$tmp1054.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1055 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1055->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1055->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1055, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start1027.value).position, ((panda$collections$ListView*) children1034));
    return $tmp1055;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1057;
    org$pandalanguage$pandac$parser$Token$nullable label1061;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1060 = (($fn1059) self->$class->vtable[8])(self, ((panda$core$Int64) { 28 }), &$s1058);
    start1057 = $tmp1060;
    if (((panda$core$Bit) { !start1057.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1063 = (($fn1062) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1061 = $tmp1063;
    if (((panda$core$Bit) { label1061.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1064 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1064->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1064->refCount.value = 1;
        panda$core$String* $tmp1067 = (($fn1066) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) label1061.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1064, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1057.value).position, $tmp1067);
        return $tmp1064;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1068 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1068->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1068->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1068, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1057.value).position);
    return $tmp1068;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1070;
    org$pandalanguage$pandac$parser$Token$nullable label1074;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1073 = (($fn1072) self->$class->vtable[8])(self, ((panda$core$Int64) { 29 }), &$s1071);
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
        panda$core$String* $tmp1080 = (($fn1079) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) label1074.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1077, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1070.value).position, $tmp1080);
        return $tmp1077;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1081 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1081->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1081->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1081, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1070.value).position);
    return $tmp1081;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1083;
    panda$collections$Array* children1091;
    org$pandalanguage$pandac$ASTNode* expr1094;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1086 = (($fn1085) self->$class->vtable[8])(self, ((panda$core$Int64) { 27 }), &$s1084);
    start1083 = $tmp1086;
    if (((panda$core$Bit) { !start1083.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1088 = (($fn1087) self->$class->vtable[6])(self);
    switch ($tmp1088.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1089 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1089->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1089->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1089, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1083.value).position);
            return $tmp1089;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp1092 = (panda$collections$Array*) malloc(40);
            $tmp1092->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1092->refCount.value = 1;
            panda$collections$Array$init($tmp1092);
            children1091 = $tmp1092;
            org$pandalanguage$pandac$ASTNode* $tmp1096 = (($fn1095) self->$class->vtable[29])(self);
            expr1094 = $tmp1096;
            if (((panda$core$Bit) { expr1094 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1091, ((panda$core$Object*) expr1094));
            org$pandalanguage$pandac$ASTNode* $tmp1097 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1097->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1097->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1097, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1083.value).position, ((panda$collections$ListView*) children1091));
            return $tmp1097;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1100 = (($fn1099) self->$class->vtable[6])(self);
    switch ($tmp1100.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1102 = (($fn1101) self->$class->vtable[45])(self);
            return $tmp1102;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1104 = (($fn1103) self->$class->vtable[46])(self);
            return $tmp1104;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1106 = (($fn1105) self->$class->vtable[47])(self);
            return $tmp1106;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp1108 = (($fn1107) self->$class->vtable[6])(self);
    switch ($tmp1108.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1110 = (($fn1109) self->$class->vtable[35])(self, p_label);
            return $tmp1110;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1112 = (($fn1111) self->$class->vtable[33])(self, p_label);
            return $tmp1112;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1114 = (($fn1113) self->$class->vtable[36])(self, p_label);
            return $tmp1114;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1116 = (($fn1115) self->$class->vtable[34])(self, p_label);
            return $tmp1116;
        }
        break;
        default:
        {
            (($fn1118) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1117);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id1137;
    org$pandalanguage$pandac$parser$Token $tmp1120 = (($fn1119) self->$class->vtable[6])(self);
    switch ($tmp1120.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1122 = (($fn1121) self->$class->vtable[30])(self);
            return $tmp1122;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1124 = (($fn1123) self->$class->vtable[33])(self, NULL);
            return $tmp1124;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1126 = (($fn1125) self->$class->vtable[34])(self, NULL);
            return $tmp1126;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1128 = (($fn1127) self->$class->vtable[35])(self, NULL);
            return $tmp1128;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1130 = (($fn1129) self->$class->vtable[36])(self, NULL);
            return $tmp1130;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1132 = (($fn1131) self->$class->vtable[37])(self);
            return $tmp1132;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1134 = (($fn1133) self->$class->vtable[39])(self);
            return $tmp1134;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1136 = (($fn1135) self->$class->vtable[40])(self);
            return $tmp1136;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp1139 = (($fn1138) self->$class->vtable[4])(self);
            id1137 = $tmp1139;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1141 = (($fn1140) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1141.nonnull }).value) {
            {
                panda$core$String* $tmp1143 = (($fn1142) self->$class->vtable[13])(self, id1137);
                org$pandalanguage$pandac$ASTNode* $tmp1145 = (($fn1144) self->$class->vtable[49])(self, $tmp1143);
                return $tmp1145;
            }
            }
            (($fn1146) self->$class->vtable[5])(self, id1137);
            org$pandalanguage$pandac$ASTNode* $tmp1148 = (($fn1147) self->$class->vtable[41])(self);
            return $tmp1148;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1150 = (($fn1149) self->$class->vtable[41])(self);
            return $tmp1150;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1152 = (($fn1151) self->$class->vtable[43])(self);
            return $tmp1152;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1154 = (($fn1153) self->$class->vtable[44])(self);
            return $tmp1154;
        }
        break;
        default:
        {
            (($fn1156) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s1155);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1157;
    org$pandalanguage$pandac$parser$Token$nullable next1161;
    panda$core$MutableString* name1165;
    panda$core$Char8 $tmp1174;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1160 = (($fn1159) self->$class->vtable[8])(self, ((panda$core$Int64) { 14 }), &$s1158);
    start1157 = $tmp1160;
    if (((panda$core$Bit) { !start1157.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1164 = (($fn1163) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1162);
    next1161 = $tmp1164;
    if (((panda$core$Bit) { !next1161.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1166 = (panda$core$MutableString*) malloc(48);
    $tmp1166->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1166->refCount.value = 1;
    panda$core$String* $tmp1169 = (($fn1168) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1161.value));
    panda$core$MutableString$init$panda$core$String($tmp1166, $tmp1169);
    name1165 = $tmp1166;
    $l1170:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1173 = (($fn1172) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1161 = $tmp1173;
        if (((panda$core$Bit) { !next1161.nonnull }).value) {
        {
            goto $l1171;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1174, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1165, $tmp1174);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1177 = (($fn1176) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1175);
        next1161 = $tmp1177;
        if (((panda$core$Bit) { !next1161.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1179 = (($fn1178) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1161.value));
        panda$core$MutableString$append$panda$core$String(name1165, $tmp1179);
    }
    }
    $l1171:;
    org$pandalanguage$pandac$ASTNode* $tmp1180 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1180->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1180->refCount.value = 1;
    panda$core$String* $tmp1182 = panda$core$MutableString$finish$R$panda$core$String(name1165);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1180, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1157.value).position, $tmp1182);
    return $tmp1180;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1183;
    org$pandalanguage$pandac$parser$Token$nullable next1187;
    panda$core$MutableString* name1191;
    panda$core$Char8 $tmp1200;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1186 = (($fn1185) self->$class->vtable[8])(self, ((panda$core$Int64) { 15 }), &$s1184);
    start1183 = $tmp1186;
    if (((panda$core$Bit) { !start1183.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1190 = (($fn1189) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1188);
    next1187 = $tmp1190;
    if (((panda$core$Bit) { !next1187.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1192 = (panda$core$MutableString*) malloc(48);
    $tmp1192->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1192->refCount.value = 1;
    panda$core$String* $tmp1195 = (($fn1194) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1187.value));
    panda$core$MutableString$init$panda$core$String($tmp1192, $tmp1195);
    name1191 = $tmp1192;
    $l1196:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1199 = (($fn1198) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1187 = $tmp1199;
        if (((panda$core$Bit) { !next1187.nonnull }).value) {
        {
            goto $l1197;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1200, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1191, $tmp1200);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1203 = (($fn1202) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1201);
        next1187 = $tmp1203;
        if (((panda$core$Bit) { !next1187.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1205 = (($fn1204) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1187.value));
        panda$core$MutableString$append$panda$core$String(name1191, $tmp1205);
    }
    }
    $l1197:;
    org$pandalanguage$pandac$ASTNode* $tmp1206 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1206->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1206->refCount.value = 1;
    panda$core$String* $tmp1208 = panda$core$MutableString$finish$R$panda$core$String(name1191);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1206, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1183.value).position, $tmp1208);
    return $tmp1206;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1209;
    org$pandalanguage$pandac$parser$Token$nullable id1213;
    panda$collections$Array* children1217;
    panda$collections$Array* idChildren1220;
    org$pandalanguage$pandac$ASTNode* t1225;
    org$pandalanguage$pandac$ASTNode* t1241;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1212 = (($fn1211) self->$class->vtable[8])(self, ((panda$core$Int64) { 62 }), &$s1210);
    start1209 = $tmp1212;
    if (((panda$core$Bit) { !start1209.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1216 = (($fn1215) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1214);
    id1213 = $tmp1216;
    if (((panda$core$Bit) { !id1213.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1218 = (panda$collections$Array*) malloc(40);
    $tmp1218->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1218->refCount.value = 1;
    panda$collections$Array$init($tmp1218);
    children1217 = $tmp1218;
    panda$collections$Array* $tmp1221 = (panda$collections$Array*) malloc(40);
    $tmp1221->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1221->refCount.value = 1;
    panda$collections$Array$init($tmp1221);
    idChildren1220 = $tmp1221;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1224 = (($fn1223) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1224.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1227 = (($fn1226) self->$class->vtable[19])(self);
        t1225 = $tmp1227;
        if (((panda$core$Bit) { t1225 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1220, ((panda$core$Object*) t1225));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1228 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1228->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1228->refCount.value = 1;
    panda$core$String* $tmp1231 = (($fn1230) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1213.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1228, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1213.value).position, ((panda$core$Object*) $tmp1231), ((panda$collections$ListView*) idChildren1220));
    panda$collections$Array$add$panda$collections$Array$T(children1217, ((panda$core$Object*) $tmp1228));
    $l1232:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1235 = (($fn1234) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1235.nonnull }).value) goto $l1233;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1238 = (($fn1237) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1236);
        id1213 = $tmp1238;
        if (((panda$core$Bit) { !id1213.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1220);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1240 = (($fn1239) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1240.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1243 = (($fn1242) self->$class->vtable[19])(self);
            t1241 = $tmp1243;
            if (((panda$core$Bit) { t1241 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1220, ((panda$core$Object*) t1241));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1244 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1244->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1244->refCount.value = 1;
        panda$core$String* $tmp1247 = (($fn1246) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1213.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1244, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1213.value).position, ((panda$core$Object*) $tmp1247), ((panda$collections$ListView*) idChildren1220));
        panda$collections$Array$add$panda$collections$Array$T(children1217, ((panda$core$Object*) $tmp1244));
    }
    goto $l1232;
    $l1233:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1250 = (($fn1249) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s1248);
    if (((panda$core$Bit) { !$tmp1250.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1251 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1251->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1251->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1251, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1209.value).position, ((panda$collections$ListView*) children1217));
    return $tmp1251;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1253;
    panda$collections$Array* children1257;
    org$pandalanguage$pandac$ASTNode* t1260;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1256 = (($fn1255) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1254);
    start1253 = $tmp1256;
    if (((panda$core$Bit) { !start1253.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1258 = (panda$collections$Array*) malloc(40);
    $tmp1258->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1258->refCount.value = 1;
    panda$collections$Array$init($tmp1258);
    children1257 = $tmp1258;
    org$pandalanguage$pandac$ASTNode* $tmp1262 = (($fn1261) self->$class->vtable[19])(self);
    t1260 = $tmp1262;
    if (((panda$core$Bit) { t1260 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1257, ((panda$core$Object*) t1260));
    $l1263:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1266 = (($fn1265) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1266.nonnull }).value) goto $l1264;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1268 = (($fn1267) self->$class->vtable[19])(self);
        t1260 = $tmp1268;
        if (((panda$core$Bit) { t1260 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1257, ((panda$core$Object*) t1260));
    }
    goto $l1263;
    $l1264:;
    org$pandalanguage$pandac$ASTNode* $tmp1269 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1269->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1269->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1269, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1253.value).position, ((panda$collections$ListView*) children1257));
    return $tmp1269;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1271;
    org$pandalanguage$pandac$parser$Token$nullable next1276;
    org$pandalanguage$pandac$Position $tmp1285;
    panda$collections$Array* $tmp1272 = (panda$collections$Array*) malloc(40);
    $tmp1272->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1272->refCount.value = 1;
    panda$collections$Array$init($tmp1272);
    children1271 = $tmp1272;
    $l1274:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1278 = (($fn1277) self->$class->vtable[7])(self, ((panda$core$Int64) { 13 }));
        next1276 = $tmp1278;
        if (((panda$core$Bit) { !next1276.nonnull }).value) {
        {
            goto $l1275;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1279 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1279->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1279->refCount.value = 1;
        panda$core$String* $tmp1282 = (($fn1281) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1276.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1279, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1276.value).position, $tmp1282);
        panda$collections$Array$add$panda$collections$Array$T(children1271, ((panda$core$Object*) $tmp1279));
    }
    }
    $l1275:;
    org$pandalanguage$pandac$ASTNode* $tmp1283 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1283->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1283->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1285);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1283, ((panda$core$Int64) { 144 }), $tmp1285, ((panda$collections$ListView*) children1271));
    return $tmp1283;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1286;
    panda$core$MutableString* result1290;
    org$pandalanguage$pandac$parser$Token next1295;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1289 = (($fn1288) self->$class->vtable[8])(self, ((panda$core$Int64) { 11 }), &$s1287);
    start1286 = $tmp1289;
    if (((panda$core$Bit) { !start1286.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1291 = (panda$core$MutableString*) malloc(48);
    $tmp1291->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1291->refCount.value = 1;
    panda$core$MutableString$init($tmp1291);
    result1290 = $tmp1291;
    $l1293:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1297 = (($fn1296) self->$class->vtable[3])(self);
        next1295 = $tmp1297;
        panda$core$Bit $tmp1298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1295.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1298.value) {
        {
            goto $l1294;
        }
        }
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1295.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1299.value) {
        {
            (($fn1301) self->$class->vtable[9])(self, ((org$pandalanguage$pandac$parser$Token) start1286.value), &$s1300);
            return NULL;
        }
        }
        panda$core$String* $tmp1303 = (($fn1302) self->$class->vtable[13])(self, next1295);
        panda$core$MutableString$append$panda$core$String(result1290, $tmp1303);
    }
    }
    $l1294:;
    org$pandalanguage$pandac$ASTNode* $tmp1304 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1304->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1304->refCount.value = 1;
    panda$core$String* $tmp1306 = panda$core$MutableString$finish$R$panda$core$String(result1290);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1304, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1286.value).position, $tmp1306);
    return $tmp1304;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1307;
    org$pandalanguage$pandac$ASTNode* t1311;
    panda$collections$Array* children1314;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1310 = (($fn1309) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1308);
    id1307 = $tmp1310;
    if (((panda$core$Bit) { !id1307.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1313 = (($fn1312) self->$class->vtable[31])(self);
    t1311 = $tmp1313;
    if (((panda$core$Bit) { t1311 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1315 = (panda$collections$Array*) malloc(40);
    $tmp1315->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1315->refCount.value = 1;
    panda$collections$Array$init($tmp1315);
    children1314 = $tmp1315;
    panda$collections$Array$add$panda$collections$Array$T(children1314, ((panda$core$Object*) t1311));
    org$pandalanguage$pandac$ASTNode* $tmp1317 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1317->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1317->refCount.value = 1;
    panda$core$String* $tmp1320 = (($fn1319) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1307.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1317, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1307.value).position, ((panda$core$Object*) $tmp1320), ((panda$collections$ListView*) children1314));
    return $tmp1317;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1321;
    panda$collections$Array* children1325;
    org$pandalanguage$pandac$ASTNode* param1330;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1324 = (($fn1323) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1322);
    start1321 = $tmp1324;
    if (((panda$core$Bit) { !start1321.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1326 = (panda$collections$Array*) malloc(40);
    $tmp1326->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1326->refCount.value = 1;
    panda$collections$Array$init($tmp1326);
    children1325 = $tmp1326;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1329 = (($fn1328) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1329.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1332 = (($fn1331) self->$class->vtable[57])(self);
        param1330 = $tmp1332;
        if (((panda$core$Bit) { param1330 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1325, ((panda$core$Object*) param1330));
        $l1333:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1336 = (($fn1335) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1336.nonnull }).value) goto $l1334;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1338 = (($fn1337) self->$class->vtable[57])(self);
            param1330 = $tmp1338;
            if (((panda$core$Bit) { param1330 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1325, ((panda$core$Object*) param1330));
        }
        goto $l1333;
        $l1334:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1341 = (($fn1340) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1339);
        if (((panda$core$Bit) { !$tmp1341.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1342 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1342->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1342->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1342, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1321.value).position, ((panda$collections$ListView*) children1325));
    return $tmp1342;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1344;
    org$pandalanguage$pandac$parser$Token$nullable start1345;
    panda$core$String* name1351;
    panda$collections$Array* children1354;
    org$pandalanguage$pandac$ASTNode* params1357;
    org$pandalanguage$pandac$ASTNode* returnType1363;
    org$pandalanguage$pandac$Position $tmp1368;
    org$pandalanguage$pandac$ASTNode* b1372;
    org$pandalanguage$pandac$Position $tmp1377;
    org$pandalanguage$pandac$parser$Token token1378;
    panda$core$String* tokenText1381;
    org$pandalanguage$pandac$ASTNode* post1395;
    org$pandalanguage$pandac$Position $tmp1400;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1347 = (($fn1346) self->$class->vtable[7])(self, ((panda$core$Int64) { 20 }));
    start1345 = $tmp1347;
    if (((panda$core$Bit) { !start1345.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1350 = (($fn1349) self->$class->vtable[8])(self, ((panda$core$Int64) { 21 }), &$s1348);
        start1345 = $tmp1350;
        if (((panda$core$Bit) { !start1345.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1344 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1344 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1353 = (($fn1352) self->$class->vtable[18])(self);
    name1351 = $tmp1353;
    if (((panda$core$Bit) { name1351 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1355 = (panda$collections$Array*) malloc(40);
    $tmp1355->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1355->refCount.value = 1;
    panda$collections$Array$init($tmp1355);
    children1354 = $tmp1355;
    panda$collections$Array$add$panda$collections$Array$T(children1354, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1354, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1359 = (($fn1358) self->$class->vtable[58])(self);
    params1357 = $tmp1359;
    if (((panda$core$Bit) { params1357 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1354, ((panda$core$Object*) params1357));
    org$pandalanguage$pandac$parser$Token $tmp1361 = (($fn1360) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1361.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1362.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1365 = (($fn1364) self->$class->vtable[31])(self);
        returnType1363 = $tmp1365;
        if (((panda$core$Bit) { returnType1363 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1354, ((panda$core$Object*) returnType1363));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1366 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1366->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1366->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1368);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1366, ((panda$core$Int64) { 138 }), $tmp1368);
        panda$collections$Array$add$panda$collections$Array$T(children1354, ((panda$core$Object*) $tmp1366));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1370 = (($fn1369) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1370.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1371.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1374 = (($fn1373) self->$class->vtable[40])(self);
        b1372 = $tmp1374;
        if (((panda$core$Bit) { b1372 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1354, ((panda$core$Object*) b1372));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1375 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1375->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1375->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1377);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1375, ((panda$core$Int64) { 138 }), $tmp1377);
        panda$collections$Array$add$panda$collections$Array$T(children1354, ((panda$core$Object*) $tmp1375));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1380 = (($fn1379) self->$class->vtable[6])(self);
    token1378 = $tmp1380;
    panda$core$String* $tmp1383 = (($fn1382) self->$class->vtable[13])(self, token1378);
    tokenText1381 = $tmp1383;
    panda$core$Bit $tmp1385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1378.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1384 = $tmp1385.value;
    if (!$tmp1384) goto $l1386;
    panda$core$Bit $tmp1389 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1381, &$s1388);
    bool $tmp1387 = $tmp1389.value;
    if ($tmp1387) goto $l1390;
    panda$core$Bit $tmp1392 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1381, &$s1391);
    $tmp1387 = $tmp1392.value;
    $l1390:;
    panda$core$Bit $tmp1393 = { $tmp1387 };
    $tmp1384 = $tmp1393.value;
    $l1386:;
    panda$core$Bit $tmp1394 = { $tmp1384 };
    if ($tmp1394.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1397 = (($fn1396) self->$class->vtable[59])(self);
        post1395 = $tmp1397;
        if (((panda$core$Bit) { post1395 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1354, ((panda$core$Object*) post1395));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1398 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1398->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1398->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1400);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1398, ((panda$core$Int64) { 138 }), $tmp1400);
        panda$collections$Array$add$panda$collections$Array$T(children1354, ((panda$core$Object*) $tmp1398));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1401 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1401->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1401->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1401, kind1344, ((org$pandalanguage$pandac$parser$Token) start1345.value).position, ((panda$core$Object*) name1351), ((panda$collections$ListView*) children1354));
    return $tmp1401;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1403;
    panda$collections$Array* children1407;
    org$pandalanguage$pandac$ASTNode* params1410;
    org$pandalanguage$pandac$ASTNode* b1413;
    org$pandalanguage$pandac$parser$Token token1416;
    panda$core$String* tokenText1419;
    org$pandalanguage$pandac$ASTNode* post1433;
    org$pandalanguage$pandac$Position $tmp1438;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1406 = (($fn1405) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1404);
    start1403 = $tmp1406;
    if (((panda$core$Bit) { !start1403.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1408 = (panda$collections$Array*) malloc(40);
    $tmp1408->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1408->refCount.value = 1;
    panda$collections$Array$init($tmp1408);
    children1407 = $tmp1408;
    panda$collections$Array$add$panda$collections$Array$T(children1407, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1407, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1412 = (($fn1411) self->$class->vtable[58])(self);
    params1410 = $tmp1412;
    if (((panda$core$Bit) { params1410 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1407, ((panda$core$Object*) params1410));
    org$pandalanguage$pandac$ASTNode* $tmp1415 = (($fn1414) self->$class->vtable[40])(self);
    b1413 = $tmp1415;
    if (((panda$core$Bit) { b1413 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1407, ((panda$core$Object*) b1413));
    org$pandalanguage$pandac$parser$Token $tmp1418 = (($fn1417) self->$class->vtable[6])(self);
    token1416 = $tmp1418;
    panda$core$String* $tmp1421 = (($fn1420) self->$class->vtable[13])(self, token1416);
    tokenText1419 = $tmp1421;
    panda$core$Bit $tmp1423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1416.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1422 = $tmp1423.value;
    if (!$tmp1422) goto $l1424;
    panda$core$Bit $tmp1427 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1419, &$s1426);
    bool $tmp1425 = $tmp1427.value;
    if ($tmp1425) goto $l1428;
    panda$core$Bit $tmp1430 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1419, &$s1429);
    $tmp1425 = $tmp1430.value;
    $l1428:;
    panda$core$Bit $tmp1431 = { $tmp1425 };
    $tmp1422 = $tmp1431.value;
    $l1424:;
    panda$core$Bit $tmp1432 = { $tmp1422 };
    if ($tmp1432.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1435 = (($fn1434) self->$class->vtable[59])(self);
        post1433 = $tmp1435;
        if (((panda$core$Bit) { post1433 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1407, ((panda$core$Object*) post1433));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1436 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1436->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1436->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1438);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1436, ((panda$core$Int64) { 138 }), $tmp1438);
        panda$collections$Array$add$panda$collections$Array$T(children1407, ((panda$core$Object*) $tmp1436));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1439 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1439->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1439->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1439, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1403.value).position, ((panda$collections$ListView*) children1407));
    return $tmp1439;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1441;
    panda$collections$Array* children1444;
    org$pandalanguage$pandac$ASTNode* $tmp1443 = (($fn1442) self->$class->vtable[43])(self);
    decl1441 = $tmp1443;
    if (((panda$core$Bit) { decl1441 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1445 = (panda$collections$Array*) malloc(40);
    $tmp1445->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1445->refCount.value = 1;
    panda$collections$Array$init($tmp1445);
    children1444 = $tmp1445;
    panda$collections$Array$add$panda$collections$Array$T(children1444, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1444, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1444, ((panda$core$Object*) decl1441));
    org$pandalanguage$pandac$ASTNode* $tmp1447 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1447->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1447->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1447, ((panda$core$Int64) { 148 }), decl1441->position, ((panda$collections$ListView*) children1444));
    return $tmp1447;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1449;
    org$pandalanguage$pandac$ASTNode* dc1452;
    org$pandalanguage$pandac$Position $tmp1458;
    org$pandalanguage$pandac$ASTNode* a1459;
    org$pandalanguage$pandac$parser$Token $tmp1451 = (($fn1450) self->$class->vtable[6])(self);
    start1449 = $tmp1451;
    panda$core$Bit $tmp1453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1449.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1453.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1455 = (($fn1454) self->$class->vtable[56])(self);
        dc1452 = $tmp1455;
        if (((panda$core$Bit) { dc1452 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1456 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1456->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1456->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1458);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1456, ((panda$core$Int64) { 138 }), $tmp1458);
        dc1452 = $tmp1456;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1461 = (($fn1460) self->$class->vtable[55])(self);
    a1459 = $tmp1461;
    if (((panda$core$Bit) { a1459 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1463 = (($fn1462) self->$class->vtable[6])(self);
    switch ($tmp1463.kind.value) {
        case 17:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1465 = (($fn1464) self->$class->vtable[64])(self, dc1452, a1459);
            return $tmp1465;
        }
        break;
        case 18:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1467 = (($fn1466) self->$class->vtable[65])(self, dc1452, a1459);
            return $tmp1467;
        }
        break;
        case 21:
        case 20:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1469 = (($fn1468) self->$class->vtable[60])(self, dc1452, a1459);
            return $tmp1469;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1471 = (($fn1470) self->$class->vtable[61])(self, dc1452, a1459);
            return $tmp1471;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1473 = (($fn1472) self->$class->vtable[62])(self, dc1452, a1459);
            return $tmp1473;
        }
        break;
        default:
        {
            (($fn1475) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1474);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1476;
    org$pandalanguage$pandac$parser$Token$nullable start1479;
    org$pandalanguage$pandac$parser$Token$nullable name1483;
    org$pandalanguage$pandac$ASTNode* generics1490;
    org$pandalanguage$pandac$Position $tmp1495;
    org$pandalanguage$pandac$ASTNode* stypes1499;
    org$pandalanguage$pandac$Position $tmp1504;
    panda$collections$Array* members1508;
    org$pandalanguage$pandac$ASTNode* member1515;
    panda$collections$Array* $tmp1477 = (panda$collections$Array*) malloc(40);
    $tmp1477->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1477->refCount.value = 1;
    panda$collections$Array$init($tmp1477);
    children1476 = $tmp1477;
    panda$collections$Array$add$panda$collections$Array$T(children1476, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1476, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1482 = (($fn1481) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1480);
    start1479 = $tmp1482;
    if (((panda$core$Bit) { !start1479.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1486 = (($fn1485) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1484);
    name1483 = $tmp1486;
    if (((panda$core$Bit) { !name1483.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1488 = (($fn1487) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1488.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1489.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1492 = (($fn1491) self->$class->vtable[53])(self);
        generics1490 = $tmp1492;
        if (((panda$core$Bit) { generics1490 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1476, ((panda$core$Object*) generics1490));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1493 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1493->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1493->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1495);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1493, ((panda$core$Int64) { 138 }), $tmp1495);
        panda$collections$Array$add$panda$collections$Array$T(children1476, ((panda$core$Object*) $tmp1493));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1497 = (($fn1496) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1497.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1498.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1501 = (($fn1500) self->$class->vtable[54])(self);
        stypes1499 = $tmp1501;
        if (((panda$core$Bit) { stypes1499 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1476, ((panda$core$Object*) stypes1499));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1502 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1502->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1502->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1504);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1502, ((panda$core$Int64) { 139 }), $tmp1504);
        panda$collections$Array$add$panda$collections$Array$T(children1476, ((panda$core$Object*) $tmp1502));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1507 = (($fn1506) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1505);
    if (((panda$core$Bit) { !$tmp1507.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1509 = (panda$collections$Array*) malloc(40);
    $tmp1509->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1509->refCount.value = 1;
    panda$collections$Array$init($tmp1509);
    members1508 = $tmp1509;
    $l1511:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1514 = (($fn1513) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1514.nonnull }).value) goto $l1512;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1517 = (($fn1516) self->$class->vtable[63])(self);
        member1515 = $tmp1517;
        if (((panda$core$Bit) { member1515 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1508, ((panda$core$Object*) member1515));
    }
    goto $l1511;
    $l1512:;
    org$pandalanguage$pandac$ASTNode* $tmp1518 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1518->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1518->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1518, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1479.value).position, ((panda$collections$ListView*) members1508));
    panda$collections$Array$add$panda$collections$Array$T(children1476, ((panda$core$Object*) $tmp1518));
    org$pandalanguage$pandac$ASTNode* $tmp1520 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1520->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1520->refCount.value = 1;
    panda$core$String* $tmp1523 = (($fn1522) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) name1483.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1520, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1479.value).position, ((panda$core$Object*) $tmp1523), ((panda$collections$ListView*) children1476));
    return $tmp1520;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1524;
    org$pandalanguage$pandac$parser$Token$nullable start1527;
    org$pandalanguage$pandac$parser$Token$nullable name1531;
    org$pandalanguage$pandac$ASTNode* generics1538;
    org$pandalanguage$pandac$Position $tmp1543;
    panda$collections$Array* intfs1544;
    org$pandalanguage$pandac$ASTNode* t1549;
    panda$collections$Array* members1563;
    org$pandalanguage$pandac$ASTNode* member1570;
    panda$collections$Array* $tmp1525 = (panda$collections$Array*) malloc(40);
    $tmp1525->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1525->refCount.value = 1;
    panda$collections$Array$init($tmp1525);
    children1524 = $tmp1525;
    panda$collections$Array$add$panda$collections$Array$T(children1524, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1524, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1530 = (($fn1529) self->$class->vtable[8])(self, ((panda$core$Int64) { 18 }), &$s1528);
    start1527 = $tmp1530;
    if (((panda$core$Bit) { !start1527.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1534 = (($fn1533) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1532);
    name1531 = $tmp1534;
    if (((panda$core$Bit) { !name1531.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1536 = (($fn1535) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1536.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1537.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1540 = (($fn1539) self->$class->vtable[53])(self);
        generics1538 = $tmp1540;
        if (((panda$core$Bit) { generics1538 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1524, ((panda$core$Object*) generics1538));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1541 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1541->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1541->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1543);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1541, ((panda$core$Int64) { 138 }), $tmp1543);
        panda$collections$Array$add$panda$collections$Array$T(children1524, ((panda$core$Object*) $tmp1541));
    }
    }
    panda$collections$Array* $tmp1545 = (panda$collections$Array*) malloc(40);
    $tmp1545->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1545->refCount.value = 1;
    panda$collections$Array$init($tmp1545);
    intfs1544 = $tmp1545;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1548 = (($fn1547) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1548.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1551 = (($fn1550) self->$class->vtable[19])(self);
        t1549 = $tmp1551;
        if (((panda$core$Bit) { t1549 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1544, ((panda$core$Object*) t1549));
        $l1552:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1555 = (($fn1554) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1555.nonnull }).value) goto $l1553;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1557 = (($fn1556) self->$class->vtable[19])(self);
            t1549 = $tmp1557;
            if (((panda$core$Bit) { t1549 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1544, ((panda$core$Object*) t1549));
        }
        goto $l1552;
        $l1553:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1558 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1558->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1558->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1558, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1527.value).position, ((panda$collections$ListView*) intfs1544));
    panda$collections$Array$add$panda$collections$Array$T(children1524, ((panda$core$Object*) $tmp1558));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1562 = (($fn1561) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1560);
    if (((panda$core$Bit) { !$tmp1562.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1564 = (panda$collections$Array*) malloc(40);
    $tmp1564->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1564->refCount.value = 1;
    panda$collections$Array$init($tmp1564);
    members1563 = $tmp1564;
    $l1566:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1569 = (($fn1568) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1569.nonnull }).value) goto $l1567;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1572 = (($fn1571) self->$class->vtable[63])(self);
        member1570 = $tmp1572;
        if (((panda$core$Bit) { member1570 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1563, ((panda$core$Object*) member1570));
    }
    goto $l1566;
    $l1567:;
    org$pandalanguage$pandac$ASTNode* $tmp1573 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1573->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1573->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1573, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1527.value).position, ((panda$collections$ListView*) members1563));
    panda$collections$Array$add$panda$collections$Array$T(children1524, ((panda$core$Object*) $tmp1573));
    org$pandalanguage$pandac$ASTNode* $tmp1575 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1575->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1575->refCount.value = 1;
    panda$core$String* $tmp1578 = (($fn1577) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) name1531.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1575, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1527.value).position, ((panda$core$Object*) $tmp1578), ((panda$collections$ListView*) children1524));
    return $tmp1575;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1580 = (($fn1579) self->$class->vtable[6])(self);
    switch ($tmp1580.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1582 = (($fn1581) self->$class->vtable[52])(self);
            return $tmp1582;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1584 = (($fn1583) self->$class->vtable[51])(self);
            return $tmp1584;
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
            org$pandalanguage$pandac$ASTNode* $tmp1586 = (($fn1585) self->$class->vtable[63])(self);
            return $tmp1586;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1588 = (($fn1587) self->$class->vtable[50])(self);
            return $tmp1588;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1589;
    org$pandalanguage$pandac$ASTNode* entry1597;
    org$pandalanguage$pandac$Position $tmp1603;
    panda$collections$Array* $tmp1590 = (panda$collections$Array*) malloc(40);
    $tmp1590->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1590->refCount.value = 1;
    panda$collections$Array$init($tmp1590);
    entries1589 = $tmp1590;
    $l1592:;
    org$pandalanguage$pandac$parser$Token $tmp1595 = (($fn1594) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1596 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1595.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1596.value) goto $l1593;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1599 = (($fn1598) self->$class->vtable[66])(self);
        entry1597 = $tmp1599;
        if (((panda$core$Bit) { entry1597 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1600 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1600.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1589, ((panda$core$Object*) entry1597));
    }
    goto $l1592;
    $l1593:;
    org$pandalanguage$pandac$ASTNode* $tmp1601 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1601->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1601->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp1603, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1601, ((panda$core$Int64) { 152 }), $tmp1603, ((panda$collections$ListView*) entries1589));
    return $tmp1601;
}

