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
typedef org$pandalanguage$pandac$ASTNode* (*$fn197)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn199)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn223)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn228)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn233)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn240)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn246)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn252)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$parser$Token (*$fn279)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn283)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn287)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn291)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn297)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef panda$core$String* (*$fn300)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn306)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef void (*$fn318)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn319)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn322)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn325)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn328)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn333)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn341)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn343)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn346)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn350)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn353)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn355)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn360)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn365)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn366)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn370)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn375)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn379)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn383)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn386)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn392)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn396)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn397)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn402)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn404)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn407)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn409)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn411)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn414)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn416)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn421)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn422)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn430)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn435)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn440)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn443)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn447)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn449)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn452)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn460)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn463)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn468)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn471)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn479)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn486)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn493)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn494)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn501)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn503)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn506)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn508)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn510)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn513)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn515)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn519)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn521)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn525)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn526)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn528)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn533)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn536)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn544)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn547)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn554)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn555)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn558)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn563)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn566)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn574)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn578)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn585)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn586)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn587)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn589)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn594)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn597)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn604)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn606)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn611)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn614)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn617)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn629)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn635)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn637)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn649)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn651)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn656)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn659)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn666)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn668)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn673)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn676)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn683)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn685)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn690)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn693)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn702)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn705)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn711)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn713)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn715)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn719)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn722)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn727)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn729)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn733)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn735)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn739)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn746)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn750)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn754)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn757)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn760)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn763)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn766)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn775)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn778)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn781)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn790)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn793)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn796)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn799)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn808)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn811)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn820)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn823)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn828)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn831)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn837)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn843)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn847)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn849)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn857)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn861)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn864)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn867)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn873)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn879)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn882)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn887)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn890)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn893)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn896)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn903)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn906)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn909)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn913)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn916)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn922)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn924)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn930)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn937)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn939)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn941)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn944)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn947)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn952)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn954)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn957)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn960)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn967)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn970)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn972)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn975)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn986)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn988)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn991)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn993)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn996)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn999)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1001)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1006)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1010)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1015)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1019)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1022)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1028)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1031)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1038)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1040)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1043)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1047)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1049)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1052)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1058)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1061)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1065)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1071)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1074)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1078)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1084)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1086)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1094)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1098)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1100)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1102)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1104)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1106)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1108)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1110)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1112)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1114)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1117)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1118)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1120)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1122)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1124)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1126)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1128)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1130)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1132)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1134)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1137)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1139)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1141)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1143)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef void (*$fn1145)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1146)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1148)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1150)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1152)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1155)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1158)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1162)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1167)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1171)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1175)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1177)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1184)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1188)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1193)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1197)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1201)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1203)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1210)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1214)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1222)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1225)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1229)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1233)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1236)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1238)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1241)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1245)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1248)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1254)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1260)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1264)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1266)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1276)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1280)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1287)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1295)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1300)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn1301)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1308)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1311)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1318)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1322)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1327)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1330)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1334)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1336)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1339)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1345)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1348)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1351)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1357)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1359)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1363)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1368)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1372)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1378)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1381)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1395)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1404)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1410)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1413)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1416)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1419)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1433)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1441)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1449)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1453)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1459)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1461)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1463)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1465)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1467)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1469)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1471)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1474)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1480)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1484)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1486)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1490)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1495)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1499)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1505)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1512)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1515)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1521)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1528)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1532)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1534)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1538)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1546)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1549)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1553)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1555)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1560)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1567)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1570)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1576)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn1578)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1580)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1582)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1584)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1586)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1593)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1597)(org$pandalanguage$pandac$parser$Parser*);

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
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6E\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1437572, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72\x20\x6F\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1437572, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4, 145324394, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4, 145273490, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6, 1483905450613, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 5160334537588978262, NULL };
static panda$core$String $s998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 5160334537588978262, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39, -3936732696845588807, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7, 149654778879696, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47, -2376482472870228684, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3, 1434239, NULL };
static panda$core$String $s1213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x65\x74\x68\x6F\x64\x27\x20\x6F\x72\x20\x27\x66\x75\x6E\x63\x74\x69\x6F\x6E\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 227282500368930, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 227282500368930, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E", 13, 8609604847663634804, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6C\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };

void org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ErrorReporter* p_errors) {
    org$pandalanguage$pandac$parser$Lexer* $tmp1 = (org$pandalanguage$pandac$parser$Lexer*) malloc(40);
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
    panda$collections$Array* dotChildren201;
    org$pandalanguage$pandac$ASTNode* dot204;
    panda$collections$Array* callChildren208;
    org$pandalanguage$pandac$ASTNode* call211;
    panda$collections$Array* castChildren214;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp224;
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
                            panda$core$String* $tmp189 = panda$core$MutableString$finish$R$panda$core$String(chunk127);
                            text188 = $tmp189;
                            panda$core$MutableString$clear(chunk127);
                            panda$core$Bit $tmp192 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text188, &$s191);
                            bool $tmp190 = $tmp192.value;
                            if ($tmp190) goto $l193;
                            $tmp190 = ((panda$core$Bit) { result126 != NULL }).value;
                            $l193:;
                            panda$core$Bit $tmp194 = { $tmp190 };
                            if ($tmp194.value) {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp195 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp195->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp195->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp195, ((panda$core$Int64) { 113 }), start111.position, text188);
                                org$pandalanguage$pandac$ASTNode* $tmp198 = (($fn197) self->$class->vtable[14])(self, result126, $tmp195);
                                result126 = $tmp198;
                                org$pandalanguage$pandac$ASTNode* $tmp200 = (($fn199) self->$class->vtable[14])(self, result126, expr182);
                                result126 = $tmp200;
                            }
                            }
                            else {
                            {
                                panda$collections$Array* $tmp202 = (panda$collections$Array*) malloc(40);
                                $tmp202->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp202->refCount.value = 1;
                                panda$collections$Array$init($tmp202);
                                dotChildren201 = $tmp202;
                                panda$collections$Array$add$panda$collections$Array$T(dotChildren201, ((panda$core$Object*) expr182));
                                org$pandalanguage$pandac$ASTNode* $tmp205 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp205->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp205->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp205, ((panda$core$Int64) { 108 }), expr182->position, ((panda$core$Object*) &$s207), ((panda$collections$ListView*) dotChildren201));
                                dot204 = $tmp205;
                                panda$collections$Array* $tmp209 = (panda$collections$Array*) malloc(40);
                                $tmp209->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp209->refCount.value = 1;
                                panda$collections$Array$init($tmp209);
                                callChildren208 = $tmp209;
                                panda$collections$Array$add$panda$collections$Array$T(callChildren208, ((panda$core$Object*) dot204));
                                org$pandalanguage$pandac$ASTNode* $tmp212 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp212->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp212->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp212, ((panda$core$Int64) { 107 }), expr182->position, ((panda$collections$ListView*) callChildren208));
                                call211 = $tmp212;
                                panda$collections$Array* $tmp215 = (panda$collections$Array*) malloc(40);
                                $tmp215->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp215->refCount.value = 1;
                                panda$collections$Array$init($tmp215);
                                castChildren214 = $tmp215;
                                panda$collections$Array$add$panda$collections$Array$T(castChildren214, ((panda$core$Object*) call211));
                                org$pandalanguage$pandac$ASTNode* $tmp217 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp217->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp217->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp217, ((panda$core$Int64) { 109 }), expr182->position, &$s219);
                                panda$collections$Array$add$panda$collections$Array$T(castChildren214, ((panda$core$Object*) $tmp217));
                                org$pandalanguage$pandac$ASTNode* $tmp220 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp220->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp220->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp220, ((panda$core$Int64) { 111 }), expr182->position, ((panda$collections$ListView*) castChildren214));
                                result126 = $tmp220;
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        (($fn223) self->$class->vtable[9])(self, token132, &$s222);
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
                panda$core$String$Index $tmp225 = panda$core$String$start$R$panda$core$String$Index(escapeText151);
                panda$core$String$Index $tmp226 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText151, $tmp225);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp224, ((panda$core$String$Index$nullable) { $tmp226, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp227 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText151, $tmp224);
                panda$core$MutableString$append$panda$core$String(chunk127, $tmp227);
            }
            break;
            default:
            {
                panda$core$String* $tmp229 = (($fn228) self->$class->vtable[13])(self, token132);
                panda$core$MutableString$append$panda$core$String(chunk127, $tmp229);
            }
        }
    }
    }
    $l131:;
    org$pandalanguage$pandac$ASTNode* $tmp230 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp230->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp230->refCount.value = 1;
    panda$core$String* $tmp232 = panda$core$MutableString$finish$R$panda$core$String(chunk127);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp230, ((panda$core$Int64) { 113 }), start111.position, $tmp232);
    org$pandalanguage$pandac$ASTNode* $tmp234 = (($fn233) self->$class->vtable[14])(self, result126, $tmp230);
    return $tmp234;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result235;
    panda$collections$Iterator* c$Iter236;
    panda$core$Char8 c249;
    panda$core$UInt64 i255;
    result235 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp237 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp238 = ((panda$collections$Iterable*) $tmp237)->$class->itable;
        while ($tmp238->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp238 = $tmp238->next;
        }
        $fn240 $tmp239 = $tmp238->methods[0];
        panda$collections$Iterator* $tmp241 = $tmp239(((panda$collections$Iterable*) $tmp237));
        c$Iter236 = $tmp241;
        $l242:;
        ITable* $tmp244 = c$Iter236->$class->itable;
        while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp244 = $tmp244->next;
        }
        $fn246 $tmp245 = $tmp244->methods[0];
        panda$core$Bit $tmp247 = $tmp245(c$Iter236);
        panda$core$Bit $tmp248 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp247);
        if (!$tmp248.value) goto $l243;
        {
            ITable* $tmp250 = c$Iter236->$class->itable;
            while ($tmp250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp250 = $tmp250->next;
            }
            $fn252 $tmp251 = $tmp250->methods[1];
            panda$core$Object* $tmp253 = $tmp251(c$Iter236);
            c249 = ((panda$core$Char8$wrapper*) $tmp253)->value;
            panda$core$UInt64 $tmp254 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result235, p_base);
            result235 = $tmp254;
            panda$core$UInt64 $tmp256 = panda$core$Char8$convert$R$panda$core$UInt64(c249);
            i255 = $tmp256;
            panda$core$Bit $tmp258 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i255, ((panda$core$UInt64) { 48 }));
            bool $tmp257 = $tmp258.value;
            if (!$tmp257) goto $l259;
            panda$core$Bit $tmp260 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i255, ((panda$core$UInt64) { 57 }));
            $tmp257 = $tmp260.value;
            $l259:;
            panda$core$Bit $tmp261 = { $tmp257 };
            if ($tmp261.value) {
            {
                panda$core$UInt64 $tmp262 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i255, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp263 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result235, $tmp262);
                result235 = $tmp263;
            }
            }
            else {
            panda$core$Bit $tmp265 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i255, ((panda$core$UInt64) { 65 }));
            bool $tmp264 = $tmp265.value;
            if (!$tmp264) goto $l266;
            panda$core$Bit $tmp267 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i255, ((panda$core$UInt64) { 70 }));
            $tmp264 = $tmp267.value;
            $l266:;
            panda$core$Bit $tmp268 = { $tmp264 };
            if ($tmp268.value) {
            {
                panda$core$UInt64 $tmp269 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i255, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp270 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result235, $tmp269);
                result235 = $tmp270;
            }
            }
            else {
            {
                panda$core$Bit $tmp272 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i255, ((panda$core$UInt64) { 97 }));
                bool $tmp271 = $tmp272.value;
                if (!$tmp271) goto $l273;
                panda$core$Bit $tmp274 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i255, ((panda$core$UInt64) { 102 }));
                $tmp271 = $tmp274.value;
                $l273:;
                panda$core$Bit $tmp275 = { $tmp271 };
                PANDA_ASSERT($tmp275.value);
                panda$core$UInt64 $tmp276 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i255, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp277 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result235, $tmp276);
                result235 = $tmp277;
            }
            }
            }
        }
        goto $l242;
        $l243:;
    }
    return result235;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t278;
    panda$core$String* s290;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp295;
    panda$core$String* s299;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp304;
    org$pandalanguage$pandac$ASTNode* result321;
    org$pandalanguage$pandac$parser$Token $tmp280 = (($fn279) self->$class->vtable[4])(self);
    t278 = $tmp280;
    switch (t278.kind.value) {
        case 48:
        {
            org$pandalanguage$pandac$ASTNode* $tmp281 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp281->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp281->refCount.value = 1;
            panda$core$String* $tmp284 = (($fn283) self->$class->vtable[13])(self, t278);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp281, ((panda$core$Int64) { 106 }), t278.position, $tmp284);
            return $tmp281;
        }
        break;
        case 2:
        {
            org$pandalanguage$pandac$ASTNode* $tmp285 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp285->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp285->refCount.value = 1;
            panda$core$String* $tmp288 = (($fn287) self->$class->vtable[13])(self, t278);
            panda$core$UInt64$nullable $tmp289 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp288);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp285, ((panda$core$Int64) { 102 }), t278.position, ((panda$core$UInt64) $tmp289.value));
            return $tmp285;
        }
        break;
        case 3:
        {
            panda$core$String* $tmp292 = (($fn291) self->$class->vtable[13])(self, t278);
            s290 = $tmp292;
            org$pandalanguage$pandac$ASTNode* $tmp293 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp293->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp293->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp295, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp296 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s290, $tmp295);
            panda$core$UInt64 $tmp298 = (($fn297) self->$class->vtable[16])(self, $tmp296, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp293, ((panda$core$Int64) { 102 }), t278.position, $tmp298);
            return $tmp293;
        }
        break;
        case 4:
        {
            panda$core$String* $tmp301 = (($fn300) self->$class->vtable[13])(self, t278);
            s299 = $tmp301;
            org$pandalanguage$pandac$ASTNode* $tmp302 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp302->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp302->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp304, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp305 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s299, $tmp304);
            panda$core$UInt64 $tmp307 = (($fn306) self->$class->vtable[16])(self, $tmp305, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp302, ((panda$core$Int64) { 102 }), t278.position, $tmp307);
            return $tmp302;
        }
        break;
        case 46:
        {
            org$pandalanguage$pandac$ASTNode* $tmp308 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp308->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp308->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp308, ((panda$core$Int64) { 114 }), t278.position);
            return $tmp308;
        }
        break;
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp310 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp310->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp310->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp310, ((panda$core$Int64) { 115 }), t278.position);
            return $tmp310;
        }
        break;
        case 43:
        {
            org$pandalanguage$pandac$ASTNode* $tmp312 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp312->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp312->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp312, ((panda$core$Int64) { 117 }), t278.position);
            return $tmp312;
        }
        break;
        case 41:
        {
            org$pandalanguage$pandac$ASTNode* $tmp314 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp314->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp314->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp314, ((panda$core$Int64) { 116 }), t278.position, ((panda$core$Bit) { true }));
            return $tmp314;
        }
        break;
        case 42:
        {
            org$pandalanguage$pandac$ASTNode* $tmp316 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp316->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp316->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp316, ((panda$core$Int64) { 116 }), t278.position, ((panda$core$Bit) { false }));
            return $tmp316;
        }
        break;
        case 7:
        case 6:
        {
            (($fn318) self->$class->vtable[5])(self, t278);
            org$pandalanguage$pandac$ASTNode* $tmp320 = (($fn319) self->$class->vtable[15])(self);
            return $tmp320;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$ASTNode* $tmp323 = (($fn322) self->$class->vtable[29])(self);
            result321 = $tmp323;
            if (((panda$core$Bit) { result321 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp326 = (($fn325) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s324);
            if (((panda$core$Bit) { !$tmp326.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result321;
        }
        break;
        default:
        {
            panda$core$String* $tmp329 = (($fn328) self->$class->vtable[13])(self, t278);
            panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s327, $tmp329);
            panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s331);
            (($fn333) self->$class->vtable[9])(self, t278, $tmp332);
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result334;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp335 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp336 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp335));
            result334 = $tmp336;
            if (((panda$core$Bit) { result334 != NULL }).value) {
            {
                panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s337, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result334, $tmp338);
                result334 = $tmp339;
            }
            }
            return result334;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name340;
    org$pandalanguage$pandac$parser$Token token345;
    org$pandalanguage$pandac$parser$Token $tmp342 = (($fn341) self->$class->vtable[4])(self);
    name340 = $tmp342;
    switch (name340.kind.value) {
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
            panda$core$String* $tmp344 = (($fn343) self->$class->vtable[13])(self, name340);
            return $tmp344;
        }
        break;
        case 63:
        {
            org$pandalanguage$pandac$parser$Token $tmp347 = (($fn346) self->$class->vtable[3])(self);
            token345 = $tmp347;
            panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token345.kind, ((panda$core$Int64) { 63 }));
            if ($tmp348.value) {
            {
                return &$s349;
            }
            }
            else {
            {
                (($fn350) self->$class->vtable[5])(self, token345);
                return &$s351;
            }
            }
        }
        break;
        case 101:
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp354 = (($fn353) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s352);
            if (((panda$core$Bit) { !$tmp354.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp356 = (($fn355) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp356.nonnull }).value) {
            {
                return &$s357;
            }
            }
            return &$s358;
        }
        break;
        default:
        {
            panda$core$String* $tmp361 = (($fn360) self->$class->vtable[13])(self, name340);
            panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s359, $tmp361);
            panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, &$s363);
            (($fn365) self->$class->vtable[9])(self, name340, $tmp364);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp367 = (($fn366) self->$class->vtable[20])(self, ((panda$core$Bit) { true }));
    return $tmp367;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start368;
    panda$core$MutableString* name372;
    org$pandalanguage$pandac$parser$Token$nullable id381;
    org$pandalanguage$pandac$ASTNode* result388;
    panda$collections$Array* children398;
    org$pandalanguage$pandac$ASTNode* t401;
    panda$collections$Array* children424;
    org$pandalanguage$pandac$parser$Token$nullable $tmp371 = (($fn370) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s369);
    start368 = $tmp371;
    if (((panda$core$Bit) { !start368.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp373 = (panda$core$MutableString*) malloc(40);
    $tmp373->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp373->refCount.value = 1;
    panda$core$String* $tmp376 = (($fn375) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) start368.value));
    panda$core$MutableString$init$panda$core$String($tmp373, $tmp376);
    name372 = $tmp373;
    $l377:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp380 = (($fn379) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp380.nonnull }).value) goto $l378;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp384 = (($fn383) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s382);
        id381 = $tmp384;
        if (((panda$core$Bit) { !id381.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name372, &$s385);
        panda$core$String* $tmp387 = (($fn386) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id381.value));
        panda$core$MutableString$append$panda$core$String(name372, $tmp387);
    }
    goto $l377;
    $l378:;
    org$pandalanguage$pandac$ASTNode* $tmp389 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp389->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp389->refCount.value = 1;
    panda$core$String* $tmp391 = panda$core$MutableString$convert$R$panda$core$String(name372);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp389, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start368.value).position, $tmp391);
    result388 = $tmp389;
    org$pandalanguage$pandac$parser$Token $tmp393 = (($fn392) self->$class->vtable[6])(self);
    panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp393.kind, ((panda$core$Int64) { 62 }));
    if ($tmp394.value) {
    {
        panda$core$MutableString$append$panda$core$String(name372, &$s395);
        if (p_needSpeculativeParse.value) {
        {
            (($fn396) self->$class->vtable[10])(self);
        }
        }
        (($fn397) self->$class->vtable[4])(self);
        panda$collections$Array* $tmp399 = (panda$collections$Array*) malloc(40);
        $tmp399->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp399->refCount.value = 1;
        panda$collections$Array$init($tmp399);
        children398 = $tmp399;
        panda$collections$Array$add$panda$collections$Array$T(children398, ((panda$core$Object*) result388));
        org$pandalanguage$pandac$ASTNode* $tmp403 = (($fn402) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
        t401 = $tmp403;
        if (((panda$core$Bit) { t401 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn404) self->$class->vtable[12])(self);
                return result388;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children398, ((panda$core$Object*) t401));
        panda$core$MutableString$append$panda$core$Object(name372, ((panda$core$Object*) t401));
        $l405:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp408 = (($fn407) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp408.nonnull }).value) goto $l406;
        {
            org$pandalanguage$pandac$ASTNode* $tmp410 = (($fn409) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
            t401 = $tmp410;
            if (((panda$core$Bit) { t401 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    (($fn411) self->$class->vtable[12])(self);
                    return result388;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children398, ((panda$core$Object*) t401));
            panda$core$MutableString$append$panda$core$String(name372, &$s412);
            panda$core$MutableString$append$panda$core$Object(name372, ((panda$core$Object*) t401));
        }
        goto $l405;
        $l406:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp415 = (($fn414) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s413);
        if (((panda$core$Bit) { !$tmp415.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn416) self->$class->vtable[12])(self);
                return result388;
            }
            }
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name372, &$s417);
        org$pandalanguage$pandac$ASTNode* $tmp418 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp418->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp418->refCount.value = 1;
        panda$core$String* $tmp420 = panda$core$MutableString$finish$R$panda$core$String(name372);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp418, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start368.value).position, ((panda$core$Object*) $tmp420), ((panda$collections$ListView*) children398));
        result388 = $tmp418;
        (($fn421) self->$class->vtable[11])(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp423 = (($fn422) self->$class->vtable[7])(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp423.nonnull }).value) {
    {
        panda$collections$Array* $tmp425 = (panda$collections$Array*) malloc(40);
        $tmp425->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp425->refCount.value = 1;
        panda$collections$Array$init($tmp425);
        children424 = $tmp425;
        panda$collections$Array$add$panda$collections$Array$T(children424, ((panda$core$Object*) result388));
        org$pandalanguage$pandac$ASTNode* $tmp427 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp427->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp427->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp427, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start368.value).position, ((panda$collections$ListView*) children424));
        result388 = $tmp427;
    }
    }
    return result388;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result429;
    org$pandalanguage$pandac$parser$Token token434;
    panda$collections$Array* children437;
    org$pandalanguage$pandac$ASTNode* expr442;
    panda$collections$Array* children456;
    org$pandalanguage$pandac$ASTNode* expr459;
    panda$core$String* name467;
    panda$collections$Array* children473;
    org$pandalanguage$pandac$ASTNode* target478;
    panda$collections$Array* children481;
    panda$core$String* name487;
    panda$core$MutableString* finalName489;
    panda$collections$Array* types495;
    org$pandalanguage$pandac$ASTNode* t500;
    panda$core$Bit shouldAccept517;
    org$pandalanguage$pandac$ASTNode* $tmp431 = (($fn430) self->$class->vtable[17])(self);
    result429 = $tmp431;
    if (((panda$core$Bit) { result429 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l432:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp436 = (($fn435) self->$class->vtable[4])(self);
        token434 = $tmp436;
        switch (token434.kind.value) {
            case 103:
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp438 = (panda$collections$Array*) malloc(40);
                $tmp438->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp438->refCount.value = 1;
                panda$collections$Array$init($tmp438);
                children437 = $tmp438;
                panda$collections$Array$add$panda$collections$Array$T(children437, ((panda$core$Object*) result429));
                org$pandalanguage$pandac$parser$Token$nullable $tmp441 = (($fn440) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp441.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp444 = (($fn443) self->$class->vtable[29])(self);
                    expr442 = $tmp444;
                    if (((panda$core$Bit) { expr442 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children437, ((panda$core$Object*) expr442));
                    $l445:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp448 = (($fn447) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp448.nonnull }).value) goto $l446;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp450 = (($fn449) self->$class->vtable[29])(self);
                        expr442 = $tmp450;
                        if (((panda$core$Bit) { expr442 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children437, ((panda$core$Object*) expr442));
                    }
                    goto $l445;
                    $l446:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp453 = (($fn452) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s451);
                    if (((panda$core$Bit) { !$tmp453.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp454 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp454->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp454->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp454, ((panda$core$Int64) { 107 }), token434.position, ((panda$collections$ListView*) children437));
                result429 = $tmp454;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp457 = (panda$collections$Array*) malloc(40);
                $tmp457->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp457->refCount.value = 1;
                panda$collections$Array$init($tmp457);
                children456 = $tmp457;
                panda$collections$Array$add$panda$collections$Array$T(children456, ((panda$core$Object*) result429));
                org$pandalanguage$pandac$ASTNode* $tmp461 = (($fn460) self->$class->vtable[29])(self);
                expr459 = $tmp461;
                if (((panda$core$Bit) { expr459 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children456, ((panda$core$Object*) expr459));
                org$pandalanguage$pandac$parser$Token$nullable $tmp464 = (($fn463) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s462);
                if (((panda$core$Bit) { !$tmp464.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp465 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp465->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp465->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp465, ((panda$core$Int64) { 103 }), token434.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children456));
                result429 = $tmp465;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp469 = (($fn468) self->$class->vtable[7])(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp469.nonnull }).value) {
                {
                    name467 = &$s470;
                }
                }
                else {
                {
                    panda$core$String* $tmp472 = (($fn471) self->$class->vtable[18])(self);
                    name467 = $tmp472;
                    if (((panda$core$Bit) { name467 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp474 = (panda$collections$Array*) malloc(40);
                $tmp474->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp474->refCount.value = 1;
                panda$collections$Array$init($tmp474);
                children473 = $tmp474;
                panda$collections$Array$add$panda$collections$Array$T(children473, ((panda$core$Object*) result429));
                org$pandalanguage$pandac$ASTNode* $tmp476 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp476->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp476->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp476, ((panda$core$Int64) { 108 }), token434.position, ((panda$core$Object*) name467), ((panda$collections$ListView*) children473));
                result429 = $tmp476;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp480 = (($fn479) self->$class->vtable[19])(self);
                target478 = $tmp480;
                if (((panda$core$Bit) { target478 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp482 = (panda$collections$Array*) malloc(40);
                $tmp482->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp482->refCount.value = 1;
                panda$collections$Array$init($tmp482);
                children481 = $tmp482;
                panda$collections$Array$add$panda$collections$Array$T(children481, ((panda$core$Object*) result429));
                panda$collections$Array$add$panda$collections$Array$T(children481, ((panda$core$Object*) target478));
                org$pandalanguage$pandac$ASTNode* $tmp484 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp484->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp484->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp484, ((panda$core$Int64) { 111 }), token434.position, ((panda$collections$ListView*) children481));
                result429 = $tmp484;
            }
            break;
            case 62:
            {
                (($fn486) self->$class->vtable[5])(self, token434);
                panda$core$String* $tmp488 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result429);
                name487 = $tmp488;
                if (((panda$core$Bit) { name487 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp490 = (panda$core$MutableString*) malloc(40);
                    $tmp490->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp490->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp490, name487);
                    finalName489 = $tmp490;
                    panda$core$MutableString$append$panda$core$String(finalName489, &$s492);
                    (($fn493) self->$class->vtable[10])(self);
                    (($fn494) self->$class->vtable[4])(self);
                    panda$collections$Array* $tmp496 = (panda$collections$Array*) malloc(40);
                    $tmp496->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp496->refCount.value = 1;
                    panda$collections$Array$init($tmp496);
                    types495 = $tmp496;
                    org$pandalanguage$pandac$ASTNode* $tmp498 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp498->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp498->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp498, ((panda$core$Int64) { 109 }), result429->position, name487);
                    panda$collections$Array$add$panda$collections$Array$T(types495, ((panda$core$Object*) $tmp498));
                    org$pandalanguage$pandac$ASTNode* $tmp502 = (($fn501) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
                    t500 = $tmp502;
                    if (((panda$core$Bit) { t500 == NULL }).value) {
                    {
                        (($fn503) self->$class->vtable[12])(self);
                        return result429;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types495, ((panda$core$Object*) t500));
                    panda$core$MutableString$append$panda$core$Object(finalName489, ((panda$core$Object*) t500));
                    $l504:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp507 = (($fn506) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp507.nonnull }).value) goto $l505;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp509 = (($fn508) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
                        t500 = $tmp509;
                        if (((panda$core$Bit) { t500 == NULL }).value) {
                        {
                            (($fn510) self->$class->vtable[12])(self);
                            return result429;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types495, ((panda$core$Object*) t500));
                        panda$core$MutableString$append$panda$core$String(finalName489, &$s511);
                        panda$core$MutableString$append$panda$core$Object(finalName489, ((panda$core$Object*) t500));
                    }
                    goto $l504;
                    $l505:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp514 = (($fn513) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s512);
                    if (((panda$core$Bit) { !$tmp514.nonnull }).value) {
                    {
                        (($fn515) self->$class->vtable[12])(self);
                        return result429;
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(finalName489, &$s516);
                    panda$core$Object* $tmp518 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp518)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp520 = (($fn519) self->$class->vtable[6])(self);
                        switch ($tmp520.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept517 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept517 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept517 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept517.value) {
                    {
                        (($fn521) self->$class->vtable[11])(self);
                        org$pandalanguage$pandac$ASTNode* $tmp522 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                        $tmp522->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp522->refCount.value = 1;
                        panda$core$String* $tmp524 = panda$core$MutableString$convert$R$panda$core$String(finalName489);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp522, ((panda$core$Int64) { 154 }), result429->position, ((panda$core$Object*) $tmp524), ((panda$collections$ListView*) types495));
                        result429 = $tmp522;
                        goto $l432;
                    }
                    }
                    else {
                    {
                        (($fn525) self->$class->vtable[12])(self);
                        return result429;
                    }
                    }
                }
                }
                return result429;
            }
            break;
            default:
            {
                (($fn526) self->$class->vtable[5])(self, token434);
                return result429;
            }
        }
    }
    }
    $l433:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result527;
    org$pandalanguage$pandac$parser$Token$nullable op532;
    org$pandalanguage$pandac$ASTNode* next535;
    panda$collections$Array* children538;
    org$pandalanguage$pandac$ASTNode* $tmp529 = (($fn528) self->$class->vtable[21])(self);
    result527 = $tmp529;
    if (((panda$core$Bit) { result527 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l530:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp534 = (($fn533) self->$class->vtable[7])(self, ((panda$core$Int64) { 57 }));
        op532 = $tmp534;
        if (((panda$core$Bit) { !op532.nonnull }).value) {
        {
            goto $l531;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp537 = (($fn536) self->$class->vtable[21])(self);
        next535 = $tmp537;
        if (((panda$core$Bit) { next535 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp539 = (panda$collections$Array*) malloc(40);
        $tmp539->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp539->refCount.value = 1;
        panda$collections$Array$init($tmp539);
        children538 = $tmp539;
        panda$collections$Array$add$panda$collections$Array$T(children538, ((panda$core$Object*) result527));
        panda$collections$Array$add$panda$collections$Array$T(children538, ((panda$core$Object*) next535));
        org$pandalanguage$pandac$ASTNode* $tmp541 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp541->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp541->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp541, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op532.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op532.value).kind)), ((panda$collections$ListView*) children538));
        result527 = $tmp541;
    }
    }
    $l531:;
    return result527;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op543;
    org$pandalanguage$pandac$ASTNode* base546;
    panda$collections$Array* children549;
    org$pandalanguage$pandac$parser$Token $tmp545 = (($fn544) self->$class->vtable[4])(self);
    op543 = $tmp545;
    switch (op543.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp548 = (($fn547) self->$class->vtable[22])(self);
            base546 = $tmp548;
            if (((panda$core$Bit) { base546 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp550 = (panda$collections$Array*) malloc(40);
            $tmp550->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp550->refCount.value = 1;
            panda$collections$Array$init($tmp550);
            children549 = $tmp550;
            panda$collections$Array$add$panda$collections$Array$T(children549, ((panda$core$Object*) base546));
            org$pandalanguage$pandac$ASTNode* $tmp552 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp552->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp552->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp552, ((panda$core$Int64) { 112 }), op543.position, ((panda$core$Object*) wrap_panda$core$Int64(op543.kind)), ((panda$collections$ListView*) children549));
            return $tmp552;
        }
        break;
        default:
        {
            (($fn554) self->$class->vtable[5])(self, op543);
            org$pandalanguage$pandac$ASTNode* $tmp556 = (($fn555) self->$class->vtable[22])(self);
            return $tmp556;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result557;
    org$pandalanguage$pandac$parser$Token op562;
    org$pandalanguage$pandac$ASTNode* next565;
    panda$collections$Array* children568;
    org$pandalanguage$pandac$parser$Token nextToken573;
    org$pandalanguage$pandac$ASTNode* next577;
    panda$collections$Array* children580;
    org$pandalanguage$pandac$ASTNode* $tmp559 = (($fn558) self->$class->vtable[23])(self);
    result557 = $tmp559;
    if (((panda$core$Bit) { result557 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l560:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp564 = (($fn563) self->$class->vtable[4])(self);
        op562 = $tmp564;
        switch (op562.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp567 = (($fn566) self->$class->vtable[23])(self);
                next565 = $tmp567;
                if (((panda$core$Bit) { next565 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp569 = (panda$collections$Array*) malloc(40);
                $tmp569->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp569->refCount.value = 1;
                panda$collections$Array$init($tmp569);
                children568 = $tmp569;
                panda$collections$Array$add$panda$collections$Array$T(children568, ((panda$core$Object*) result557));
                panda$collections$Array$add$panda$collections$Array$T(children568, ((panda$core$Object*) next565));
                org$pandalanguage$pandac$ASTNode* $tmp571 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp571->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp571->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp571, ((panda$core$Int64) { 103 }), op562.position, ((panda$core$Object*) wrap_panda$core$Int64(op562.kind)), ((panda$collections$ListView*) children568));
                result557 = $tmp571;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp575 = (($fn574) self->$class->vtable[3])(self);
                nextToken573 = $tmp575;
                panda$core$Bit $tmp576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken573.kind, ((panda$core$Int64) { 63 }));
                if ($tmp576.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp579 = (($fn578) self->$class->vtable[23])(self);
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
                    panda$collections$Array$add$panda$collections$Array$T(children580, ((panda$core$Object*) result557));
                    panda$collections$Array$add$panda$collections$Array$T(children580, ((panda$core$Object*) next577));
                    org$pandalanguage$pandac$ASTNode* $tmp583 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp583->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp583->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp583, ((panda$core$Int64) { 103 }), op562.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children580));
                    result557 = $tmp583;
                }
                }
                else {
                {
                    (($fn585) self->$class->vtable[5])(self, nextToken573);
                    (($fn586) self->$class->vtable[5])(self, op562);
                    return result557;
                }
                }
            }
            break;
            default:
            {
                (($fn587) self->$class->vtable[5])(self, op562);
                return result557;
            }
        }
    }
    }
    $l561:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result588;
    org$pandalanguage$pandac$parser$Token op593;
    org$pandalanguage$pandac$ASTNode* next596;
    panda$collections$Array* children599;
    org$pandalanguage$pandac$ASTNode* $tmp590 = (($fn589) self->$class->vtable[24])(self);
    result588 = $tmp590;
    if (((panda$core$Bit) { result588 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l591:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp595 = (($fn594) self->$class->vtable[4])(self);
        op593 = $tmp595;
        switch (op593.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp598 = (($fn597) self->$class->vtable[24])(self);
                next596 = $tmp598;
                if (((panda$core$Bit) { next596 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp600 = (panda$collections$Array*) malloc(40);
                $tmp600->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp600->refCount.value = 1;
                panda$collections$Array$init($tmp600);
                children599 = $tmp600;
                panda$collections$Array$add$panda$collections$Array$T(children599, ((panda$core$Object*) result588));
                panda$collections$Array$add$panda$collections$Array$T(children599, ((panda$core$Object*) next596));
                org$pandalanguage$pandac$ASTNode* $tmp602 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp602->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp602->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp602, ((panda$core$Int64) { 103 }), op593.position, ((panda$core$Object*) wrap_panda$core$Int64(op593.kind)), ((panda$collections$ListView*) children599));
                result588 = $tmp602;
            }
            break;
            default:
            {
                (($fn604) self->$class->vtable[5])(self, op593);
                return result588;
            }
        }
    }
    }
    $l592:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result605;
    org$pandalanguage$pandac$Position $tmp610;
    org$pandalanguage$pandac$parser$Token op613;
    org$pandalanguage$pandac$parser$Token next616;
    org$pandalanguage$pandac$ASTNode* right619;
    org$pandalanguage$pandac$Position $tmp633;
    org$pandalanguage$pandac$ASTNode* step634;
    org$pandalanguage$pandac$Position $tmp641;
    panda$collections$Array* children642;
    panda$core$Int64 kind645;
    org$pandalanguage$pandac$parser$Token $tmp607 = (($fn606) self->$class->vtable[6])(self);
    switch ($tmp607.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp608 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp608->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp608->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp610);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp608, ((panda$core$Int64) { 138 }), $tmp610);
            result605 = $tmp608;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp612 = (($fn611) self->$class->vtable[25])(self);
            result605 = $tmp612;
            if (((panda$core$Bit) { result605 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp615 = (($fn614) self->$class->vtable[4])(self);
    op613 = $tmp615;
    switch (op613.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$parser$Token $tmp618 = (($fn617) self->$class->vtable[6])(self);
            next616 = $tmp618;
            panda$core$Bit $tmp622 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next616.kind, ((panda$core$Int64) { 102 }));
            bool $tmp621 = $tmp622.value;
            if (!$tmp621) goto $l623;
            panda$core$Bit $tmp624 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next616.kind, ((panda$core$Int64) { 104 }));
            $tmp621 = $tmp624.value;
            $l623:;
            panda$core$Bit $tmp625 = { $tmp621 };
            bool $tmp620 = $tmp625.value;
            if (!$tmp620) goto $l626;
            panda$core$Bit $tmp627 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next616.kind, ((panda$core$Int64) { 33 }));
            $tmp620 = $tmp627.value;
            $l626:;
            panda$core$Bit $tmp628 = { $tmp620 };
            if ($tmp628.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp630 = (($fn629) self->$class->vtable[25])(self);
                right619 = $tmp630;
                if (((panda$core$Bit) { right619 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp631 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp631->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp631->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp633);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp631, ((panda$core$Int64) { 138 }), $tmp633);
                right619 = $tmp631;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp636 = (($fn635) self->$class->vtable[7])(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp636.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp638 = (($fn637) self->$class->vtable[25])(self);
                step634 = $tmp638;
                if (((panda$core$Bit) { step634 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp639 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp639->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp639->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp641);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp639, ((panda$core$Int64) { 138 }), $tmp641);
                step634 = $tmp639;
            }
            }
            panda$collections$Array* $tmp643 = (panda$collections$Array*) malloc(40);
            $tmp643->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp643->refCount.value = 1;
            panda$collections$Array$init($tmp643);
            children642 = $tmp643;
            panda$collections$Array$add$panda$collections$Array$T(children642, ((panda$core$Object*) result605));
            panda$collections$Array$add$panda$collections$Array$T(children642, ((panda$core$Object*) right619));
            panda$collections$Array$add$panda$collections$Array$T(children642, ((panda$core$Object*) step634));
            panda$core$Bit $tmp646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op613.kind, ((panda$core$Int64) { 97 }));
            if ($tmp646.value) {
            {
                kind645 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind645 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp647 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp647->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp647->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp647, kind645, op613.position, ((panda$collections$ListView*) children642));
            return $tmp647;
        }
        break;
        default:
        {
            (($fn649) self->$class->vtable[5])(self, op613);
            return result605;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result650;
    org$pandalanguage$pandac$parser$Token op655;
    org$pandalanguage$pandac$ASTNode* next658;
    panda$collections$Array* children661;
    org$pandalanguage$pandac$ASTNode* $tmp652 = (($fn651) self->$class->vtable[26])(self);
    result650 = $tmp652;
    if (((panda$core$Bit) { result650 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l653:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp657 = (($fn656) self->$class->vtable[4])(self);
        op655 = $tmp657;
        switch (op655.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp660 = (($fn659) self->$class->vtable[26])(self);
                next658 = $tmp660;
                if (((panda$core$Bit) { next658 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp662 = (panda$collections$Array*) malloc(40);
                $tmp662->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp662->refCount.value = 1;
                panda$collections$Array$init($tmp662);
                children661 = $tmp662;
                panda$collections$Array$add$panda$collections$Array$T(children661, ((panda$core$Object*) result650));
                panda$collections$Array$add$panda$collections$Array$T(children661, ((panda$core$Object*) next658));
                org$pandalanguage$pandac$ASTNode* $tmp664 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp664->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp664->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp664, ((panda$core$Int64) { 103 }), op655.position, ((panda$core$Object*) wrap_panda$core$Int64(op655.kind)), ((panda$collections$ListView*) children661));
                result650 = $tmp664;
            }
            break;
            default:
            {
                (($fn666) self->$class->vtable[5])(self, op655);
                return result650;
            }
        }
    }
    }
    $l654:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result667;
    org$pandalanguage$pandac$parser$Token op672;
    org$pandalanguage$pandac$ASTNode* next675;
    panda$collections$Array* children678;
    org$pandalanguage$pandac$ASTNode* $tmp669 = (($fn668) self->$class->vtable[27])(self);
    result667 = $tmp669;
    if (((panda$core$Bit) { result667 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l670:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp674 = (($fn673) self->$class->vtable[4])(self);
        op672 = $tmp674;
        switch (op672.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp677 = (($fn676) self->$class->vtable[27])(self);
                next675 = $tmp677;
                if (((panda$core$Bit) { next675 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp679 = (panda$collections$Array*) malloc(40);
                $tmp679->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp679->refCount.value = 1;
                panda$collections$Array$init($tmp679);
                children678 = $tmp679;
                panda$collections$Array$add$panda$collections$Array$T(children678, ((panda$core$Object*) result667));
                panda$collections$Array$add$panda$collections$Array$T(children678, ((panda$core$Object*) next675));
                org$pandalanguage$pandac$ASTNode* $tmp681 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp681->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp681->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp681, ((panda$core$Int64) { 103 }), op672.position, ((panda$core$Object*) wrap_panda$core$Int64(op672.kind)), ((panda$collections$ListView*) children678));
                result667 = $tmp681;
            }
            break;
            default:
            {
                (($fn683) self->$class->vtable[5])(self, op672);
                return result667;
            }
        }
    }
    }
    $l671:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result684;
    org$pandalanguage$pandac$parser$Token$nullable op689;
    org$pandalanguage$pandac$ASTNode* next692;
    panda$collections$Array* children695;
    org$pandalanguage$pandac$ASTNode* $tmp686 = (($fn685) self->$class->vtable[28])(self);
    result684 = $tmp686;
    if (((panda$core$Bit) { result684 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l687:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp691 = (($fn690) self->$class->vtable[7])(self, ((panda$core$Int64) { 68 }));
        op689 = $tmp691;
        if (((panda$core$Bit) { !op689.nonnull }).value) {
        {
            goto $l688;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp694 = (($fn693) self->$class->vtable[28])(self);
        next692 = $tmp694;
        if (((panda$core$Bit) { next692 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp696 = (panda$collections$Array*) malloc(40);
        $tmp696->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp696->refCount.value = 1;
        panda$collections$Array$init($tmp696);
        children695 = $tmp696;
        panda$collections$Array$add$panda$collections$Array$T(children695, ((panda$core$Object*) result684));
        panda$collections$Array$add$panda$collections$Array$T(children695, ((panda$core$Object*) next692));
        org$pandalanguage$pandac$ASTNode* $tmp698 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp698->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp698->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp698, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op689.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op689.value).kind)), ((panda$collections$ListView*) children695));
        result684 = $tmp698;
    }
    }
    $l688:;
    return result684;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start700;
    org$pandalanguage$pandac$ASTNode* test704;
    panda$collections$Array* children707;
    org$pandalanguage$pandac$ASTNode* ifTrue710;
    org$pandalanguage$pandac$ASTNode* ifFalse718;
    org$pandalanguage$pandac$ASTNode* ifFalse721;
    org$pandalanguage$pandac$parser$Token$nullable $tmp703 = (($fn702) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s701);
    start700 = $tmp703;
    if (((panda$core$Bit) { !start700.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp706 = (($fn705) self->$class->vtable[29])(self);
    test704 = $tmp706;
    if (((panda$core$Bit) { test704 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp708 = (panda$collections$Array*) malloc(40);
    $tmp708->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp708->refCount.value = 1;
    panda$collections$Array$init($tmp708);
    children707 = $tmp708;
    panda$collections$Array$add$panda$collections$Array$T(children707, ((panda$core$Object*) test704));
    org$pandalanguage$pandac$ASTNode* $tmp712 = (($fn711) self->$class->vtable[40])(self);
    ifTrue710 = $tmp712;
    if (((panda$core$Bit) { ifTrue710 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children707, ((panda$core$Object*) ifTrue710));
    org$pandalanguage$pandac$parser$Token$nullable $tmp714 = (($fn713) self->$class->vtable[7])(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp714.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp716 = (($fn715) self->$class->vtable[6])(self);
        panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp716.kind, ((panda$core$Int64) { 36 }));
        if ($tmp717.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp720 = (($fn719) self->$class->vtable[30])(self);
            ifFalse718 = $tmp720;
            if (((panda$core$Bit) { ifFalse718 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children707, ((panda$core$Object*) ifFalse718));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp723 = (($fn722) self->$class->vtable[40])(self);
            ifFalse721 = $tmp723;
            if (((panda$core$Bit) { ifFalse721 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children707, ((panda$core$Object*) ifFalse721));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp724 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp724->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp724->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp724, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start700.value).position, ((panda$collections$ListView*) children707));
    return $tmp724;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp728 = (($fn727) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s726);
    if (((panda$core$Bit) { !$tmp728.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp730 = (($fn729) self->$class->vtable[20])(self, ((panda$core$Bit) { false }));
    return $tmp730;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id731;
    org$pandalanguage$pandac$ASTNode* type738;
    panda$collections$Array* children741;
    org$pandalanguage$pandac$parser$Token$nullable $tmp734 = (($fn733) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s732);
    id731 = $tmp734;
    if (((panda$core$Bit) { !id731.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp736 = (($fn735) self->$class->vtable[6])(self);
    panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp736.kind, ((panda$core$Int64) { 95 }));
    if ($tmp737.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp740 = (($fn739) self->$class->vtable[31])(self);
        type738 = $tmp740;
        if (((panda$core$Bit) { type738 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp742 = (panda$collections$Array*) malloc(40);
        $tmp742->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp742->refCount.value = 1;
        panda$collections$Array$init($tmp742);
        children741 = $tmp742;
        panda$collections$Array$add$panda$collections$Array$T(children741, ((panda$core$Object*) type738));
        org$pandalanguage$pandac$ASTNode* $tmp744 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp744->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp744->refCount.value = 1;
        panda$core$String* $tmp747 = (($fn746) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id731.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp744, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id731.value).position, ((panda$core$Object*) $tmp747), ((panda$collections$ListView*) children741));
        return $tmp744;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp748 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp748->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp748->refCount.value = 1;
    panda$core$String* $tmp751 = (($fn750) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id731.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp748, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id731.value).position, $tmp751);
    return $tmp748;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start752;
    org$pandalanguage$pandac$ASTNode* t756;
    org$pandalanguage$pandac$ASTNode* list762;
    org$pandalanguage$pandac$ASTNode* block765;
    panda$collections$Array* children768;
    org$pandalanguage$pandac$parser$Token$nullable $tmp755 = (($fn754) self->$class->vtable[8])(self, ((panda$core$Int64) { 32 }), &$s753);
    start752 = $tmp755;
    if (((panda$core$Bit) { !start752.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp758 = (($fn757) self->$class->vtable[32])(self);
    t756 = $tmp758;
    if (((panda$core$Bit) { t756 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp761 = (($fn760) self->$class->vtable[8])(self, ((panda$core$Int64) { 34 }), &$s759);
    if (((panda$core$Bit) { !$tmp761.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp764 = (($fn763) self->$class->vtable[29])(self);
    list762 = $tmp764;
    if (((panda$core$Bit) { list762 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp767 = (($fn766) self->$class->vtable[40])(self);
    block765 = $tmp767;
    if (((panda$core$Bit) { block765 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp769 = (panda$collections$Array*) malloc(40);
    $tmp769->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp769->refCount.value = 1;
    panda$collections$Array$init($tmp769);
    children768 = $tmp769;
    panda$collections$Array$add$panda$collections$Array$T(children768, ((panda$core$Object*) t756));
    panda$collections$Array$add$panda$collections$Array$T(children768, ((panda$core$Object*) list762));
    panda$collections$Array$add$panda$collections$Array$T(children768, ((panda$core$Object*) block765));
    org$pandalanguage$pandac$ASTNode* $tmp771 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp771->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp771->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp771, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start752.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children768));
    return $tmp771;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start773;
    org$pandalanguage$pandac$ASTNode* test777;
    org$pandalanguage$pandac$ASTNode* body780;
    panda$collections$Array* children783;
    org$pandalanguage$pandac$parser$Token$nullable $tmp776 = (($fn775) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s774);
    start773 = $tmp776;
    if (((panda$core$Bit) { !start773.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp779 = (($fn778) self->$class->vtable[29])(self);
    test777 = $tmp779;
    if (((panda$core$Bit) { test777 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp782 = (($fn781) self->$class->vtable[40])(self);
    body780 = $tmp782;
    if (((panda$core$Bit) { body780 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp784 = (panda$collections$Array*) malloc(40);
    $tmp784->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp784->refCount.value = 1;
    panda$collections$Array$init($tmp784);
    children783 = $tmp784;
    panda$collections$Array$add$panda$collections$Array$T(children783, ((panda$core$Object*) test777));
    panda$collections$Array$add$panda$collections$Array$T(children783, ((panda$core$Object*) body780));
    org$pandalanguage$pandac$ASTNode* $tmp786 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp786->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp786->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp786, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start773.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children783));
    return $tmp786;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start788;
    org$pandalanguage$pandac$ASTNode* body792;
    org$pandalanguage$pandac$ASTNode* test798;
    panda$collections$Array* children801;
    org$pandalanguage$pandac$parser$Token$nullable $tmp791 = (($fn790) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s789);
    start788 = $tmp791;
    if (((panda$core$Bit) { !start788.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp794 = (($fn793) self->$class->vtable[40])(self);
    body792 = $tmp794;
    if (((panda$core$Bit) { body792 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp797 = (($fn796) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s795);
    if (((panda$core$Bit) { !$tmp797.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp800 = (($fn799) self->$class->vtable[29])(self);
    test798 = $tmp800;
    if (((panda$core$Bit) { test798 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp802 = (panda$collections$Array*) malloc(40);
    $tmp802->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp802->refCount.value = 1;
    panda$collections$Array$init($tmp802);
    children801 = $tmp802;
    panda$collections$Array$add$panda$collections$Array$T(children801, ((panda$core$Object*) body792));
    panda$collections$Array$add$panda$collections$Array$T(children801, ((panda$core$Object*) test798));
    org$pandalanguage$pandac$ASTNode* $tmp804 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp804->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp804->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp804, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start788.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children801));
    return $tmp804;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start806;
    org$pandalanguage$pandac$ASTNode* body810;
    panda$collections$Array* children813;
    org$pandalanguage$pandac$parser$Token$nullable $tmp809 = (($fn808) self->$class->vtable[8])(self, ((panda$core$Int64) { 35 }), &$s807);
    start806 = $tmp809;
    if (((panda$core$Bit) { !start806.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp812 = (($fn811) self->$class->vtable[40])(self);
    body810 = $tmp812;
    if (((panda$core$Bit) { body810 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp814 = (panda$collections$Array*) malloc(40);
    $tmp814->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp814->refCount.value = 1;
    panda$collections$Array$init($tmp814);
    children813 = $tmp814;
    panda$collections$Array$add$panda$collections$Array$T(children813, ((panda$core$Object*) body810));
    org$pandalanguage$pandac$ASTNode* $tmp816 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp816->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp816->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp816, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start806.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children813));
    return $tmp816;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start818;
    org$pandalanguage$pandac$ASTNode* expr822;
    panda$collections$Array* children825;
    org$pandalanguage$pandac$ASTNode* message830;
    org$pandalanguage$pandac$parser$Token$nullable $tmp821 = (($fn820) self->$class->vtable[8])(self, ((panda$core$Int64) { 44 }), &$s819);
    start818 = $tmp821;
    if (((panda$core$Bit) { !start818.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp824 = (($fn823) self->$class->vtable[29])(self);
    expr822 = $tmp824;
    if (((panda$core$Bit) { expr822 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp826 = (panda$collections$Array*) malloc(40);
    $tmp826->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp826->refCount.value = 1;
    panda$collections$Array$init($tmp826);
    children825 = $tmp826;
    panda$collections$Array$add$panda$collections$Array$T(children825, ((panda$core$Object*) expr822));
    org$pandalanguage$pandac$parser$Token$nullable $tmp829 = (($fn828) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp829.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp832 = (($fn831) self->$class->vtable[29])(self);
        message830 = $tmp832;
        if (((panda$core$Bit) { message830 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children825, ((panda$core$Object*) message830));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp833 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp833->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp833->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp833, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start818.value).position, ((panda$collections$ListView*) children825));
    return $tmp833;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start835;
    panda$collections$Array* expressions839;
    org$pandalanguage$pandac$ASTNode* expr842;
    panda$collections$Array* children851;
    org$pandalanguage$pandac$ASTNode* stmt863;
    org$pandalanguage$pandac$ASTNode* stmt866;
    org$pandalanguage$pandac$parser$Token$nullable $tmp838 = (($fn837) self->$class->vtable[8])(self, ((panda$core$Int64) { 39 }), &$s836);
    start835 = $tmp838;
    if (((panda$core$Bit) { !start835.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp840 = (panda$collections$Array*) malloc(40);
    $tmp840->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp840->refCount.value = 1;
    panda$collections$Array$init($tmp840);
    expressions839 = $tmp840;
    org$pandalanguage$pandac$ASTNode* $tmp844 = (($fn843) self->$class->vtable[29])(self);
    expr842 = $tmp844;
    if (((panda$core$Bit) { expr842 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions839, ((panda$core$Object*) expr842));
    $l845:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp848 = (($fn847) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp848.nonnull }).value) goto $l846;
    {
        org$pandalanguage$pandac$ASTNode* $tmp850 = (($fn849) self->$class->vtable[29])(self);
        expr842 = $tmp850;
        if (((panda$core$Bit) { expr842 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions839, ((panda$core$Object*) expr842));
    }
    goto $l845;
    $l846:;
    panda$collections$Array* $tmp852 = (panda$collections$Array*) malloc(40);
    $tmp852->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp852->refCount.value = 1;
    panda$collections$Array$init($tmp852);
    children851 = $tmp852;
    org$pandalanguage$pandac$ASTNode* $tmp854 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp854->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp854->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp854, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start835.value).position, ((panda$collections$ListView*) expressions839));
    panda$collections$Array$add$panda$collections$Array$T(children851, ((panda$core$Object*) $tmp854));
    org$pandalanguage$pandac$parser$Token$nullable $tmp858 = (($fn857) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s856);
    if (((panda$core$Bit) { !$tmp858.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l859:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp862 = (($fn861) self->$class->vtable[6])(self);
        switch ($tmp862.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l860;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp865 = (($fn864) self->$class->vtable[48])(self);
                stmt863 = $tmp865;
                if (((panda$core$Bit) { stmt863 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children851, ((panda$core$Object*) stmt863));
                goto $l860;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp868 = (($fn867) self->$class->vtable[50])(self);
                    stmt866 = $tmp868;
                    if (((panda$core$Bit) { stmt866 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children851, ((panda$core$Object*) stmt866));
                }
            }
        }
    }
    }
    $l860:;
    org$pandalanguage$pandac$ASTNode* $tmp869 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp869->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp869->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp869, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start835.value).position, ((panda$collections$ListView*) children851));
    return $tmp869;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start871;
    panda$collections$Array* children875;
    org$pandalanguage$pandac$ASTNode* expr878;
    org$pandalanguage$pandac$parser$Token token886;
    org$pandalanguage$pandac$ASTNode* w889;
    org$pandalanguage$pandac$parser$Token o892;
    panda$collections$Array* statements898;
    org$pandalanguage$pandac$ASTNode* stmt905;
    org$pandalanguage$pandac$ASTNode* stmt908;
    org$pandalanguage$pandac$parser$Token$nullable $tmp874 = (($fn873) self->$class->vtable[8])(self, ((panda$core$Int64) { 38 }), &$s872);
    start871 = $tmp874;
    if (((panda$core$Bit) { !start871.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp876 = (panda$collections$Array*) malloc(40);
    $tmp876->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp876->refCount.value = 1;
    panda$collections$Array$init($tmp876);
    children875 = $tmp876;
    org$pandalanguage$pandac$ASTNode* $tmp880 = (($fn879) self->$class->vtable[29])(self);
    expr878 = $tmp880;
    if (((panda$core$Bit) { expr878 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children875, ((panda$core$Object*) expr878));
    org$pandalanguage$pandac$parser$Token$nullable $tmp883 = (($fn882) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s881);
    if (((panda$core$Bit) { !$tmp883.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l884:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp888 = (($fn887) self->$class->vtable[6])(self);
        token886 = $tmp888;
        switch (token886.kind.value) {
            case 100:
            {
                goto $l885;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp891 = (($fn890) self->$class->vtable[38])(self);
                w889 = $tmp891;
                if (((panda$core$Bit) { w889 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children875, ((panda$core$Object*) w889));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp894 = (($fn893) self->$class->vtable[4])(self);
                o892 = $tmp894;
                org$pandalanguage$pandac$parser$Token$nullable $tmp897 = (($fn896) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s895);
                if (((panda$core$Bit) { !$tmp897.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp899 = (panda$collections$Array*) malloc(40);
                $tmp899->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp899->refCount.value = 1;
                panda$collections$Array$init($tmp899);
                statements898 = $tmp899;
                $l901:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp904 = (($fn903) self->$class->vtable[6])(self);
                    switch ($tmp904.kind.value) {
                        case 100:
                        {
                            goto $l902;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp907 = (($fn906) self->$class->vtable[48])(self);
                            stmt905 = $tmp907;
                            if (((panda$core$Bit) { stmt905 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements898, ((panda$core$Object*) stmt905));
                            goto $l902;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp910 = (($fn909) self->$class->vtable[50])(self);
                            stmt908 = $tmp910;
                            if (((panda$core$Bit) { stmt908 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements898, ((panda$core$Object*) stmt908));
                        }
                    }
                }
                }
                $l902:;
                org$pandalanguage$pandac$ASTNode* $tmp911 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp911->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp911->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp911, ((panda$core$Int64) { 127 }), o892.position, ((panda$collections$ListView*) statements898));
                panda$collections$Array$add$panda$collections$Array$T(children875, ((panda$core$Object*) $tmp911));
                goto $l885;
            }
            break;
            default:
            {
                (($fn913) self->$class->vtable[4])(self);
                panda$core$String* $tmp917 = (($fn916) self->$class->vtable[13])(self, token886);
                panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s915, $tmp917);
                panda$core$String* $tmp920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp918, &$s919);
                panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s914, $tmp920);
                (($fn922) self->$class->vtable[9])(self, token886, $tmp921);
            }
        }
    }
    }
    $l885:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp925 = (($fn924) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s923);
    if (((panda$core$Bit) { !$tmp925.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp926 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp926->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp926->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp926, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start871.value).position, ((panda$collections$ListView*) children875));
    return $tmp926;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start928;
    panda$collections$Array* children932;
    org$pandalanguage$pandac$ASTNode* stmt940;
    org$pandalanguage$pandac$ASTNode* stmt946;
    org$pandalanguage$pandac$parser$Token$nullable $tmp931 = (($fn930) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s929);
    start928 = $tmp931;
    if (((panda$core$Bit) { !start928.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp933 = (panda$collections$Array*) malloc(40);
    $tmp933->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp933->refCount.value = 1;
    panda$collections$Array$init($tmp933);
    children932 = $tmp933;
    $l935:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp938 = (($fn937) self->$class->vtable[6])(self);
        switch ($tmp938.kind.value) {
            case 100:
            {
                (($fn939) self->$class->vtable[4])(self);
                goto $l936;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp942 = (($fn941) self->$class->vtable[48])(self);
                stmt940 = $tmp942;
                if (((panda$core$Bit) { stmt940 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp945 = (($fn944) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s943);
                if (((panda$core$Bit) { !$tmp945.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children932, ((panda$core$Object*) stmt940));
                goto $l936;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp948 = (($fn947) self->$class->vtable[50])(self);
                stmt946 = $tmp948;
                if (((panda$core$Bit) { stmt946 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children932, ((panda$core$Object*) stmt946));
            }
        }
    }
    }
    $l936:;
    org$pandalanguage$pandac$ASTNode* $tmp949 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp949->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp949->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp949, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start928.value).position, ((panda$collections$ListView*) children932));
    return $tmp949;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start951;
    org$pandalanguage$pandac$parser$Token op956;
    org$pandalanguage$pandac$ASTNode* rvalue959;
    panda$collections$Array* children962;
    org$pandalanguage$pandac$parser$Token op971;
    org$pandalanguage$pandac$ASTNode* rvalue974;
    panda$collections$Array* children977;
    org$pandalanguage$pandac$ASTNode* $tmp953 = (($fn952) self->$class->vtable[29])(self);
    start951 = $tmp953;
    if (((panda$core$Bit) { start951 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp955 = (($fn954) self->$class->vtable[6])(self);
    switch ($tmp955.kind.value) {
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
            org$pandalanguage$pandac$parser$Token $tmp958 = (($fn957) self->$class->vtable[4])(self);
            op956 = $tmp958;
            org$pandalanguage$pandac$ASTNode* $tmp961 = (($fn960) self->$class->vtable[29])(self);
            rvalue959 = $tmp961;
            if (((panda$core$Bit) { rvalue959 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp963 = (panda$collections$Array*) malloc(40);
            $tmp963->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp963->refCount.value = 1;
            panda$collections$Array$init($tmp963);
            children962 = $tmp963;
            panda$collections$Array$add$panda$collections$Array$T(children962, ((panda$core$Object*) start951));
            panda$collections$Array$add$panda$collections$Array$T(children962, ((panda$core$Object*) rvalue959));
            org$pandalanguage$pandac$ASTNode* $tmp965 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp965->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp965->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp965, ((panda$core$Int64) { 103 }), start951->position, ((panda$core$Object*) wrap_panda$core$Int64(op956.kind)), ((panda$collections$ListView*) children962));
            return $tmp965;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp968 = (($fn967) self->$class->vtable[6])(self);
            (($fn970) self->$class->vtable[9])(self, $tmp968, &$s969);
            org$pandalanguage$pandac$parser$Token $tmp973 = (($fn972) self->$class->vtable[4])(self);
            op971 = $tmp973;
            org$pandalanguage$pandac$ASTNode* $tmp976 = (($fn975) self->$class->vtable[29])(self);
            rvalue974 = $tmp976;
            if (((panda$core$Bit) { rvalue974 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp978 = (panda$collections$Array*) malloc(40);
            $tmp978->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp978->refCount.value = 1;
            panda$collections$Array$init($tmp978);
            children977 = $tmp978;
            panda$collections$Array$add$panda$collections$Array$T(children977, ((panda$core$Object*) start951));
            panda$collections$Array$add$panda$collections$Array$T(children977, ((panda$core$Object*) rvalue974));
            org$pandalanguage$pandac$ASTNode* $tmp980 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp980->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp980->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp980, ((panda$core$Int64) { 103 }), start951->position, ((panda$core$Object*) wrap_panda$core$Int64(op971.kind)), ((panda$collections$ListView*) children977));
            return $tmp980;
        }
        break;
        default:
        {
            return start951;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children982;
    org$pandalanguage$pandac$ASTNode* t985;
    org$pandalanguage$pandac$ASTNode* value990;
    org$pandalanguage$pandac$ASTNode* value1000;
    panda$collections$Array* $tmp983 = (panda$collections$Array*) malloc(40);
    $tmp983->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp983->refCount.value = 1;
    panda$collections$Array$init($tmp983);
    children982 = $tmp983;
    org$pandalanguage$pandac$ASTNode* $tmp987 = (($fn986) self->$class->vtable[32])(self);
    t985 = $tmp987;
    if (((panda$core$Bit) { t985 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) t985));
    org$pandalanguage$pandac$parser$Token$nullable $tmp989 = (($fn988) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp989.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp992 = (($fn991) self->$class->vtable[29])(self);
        value990 = $tmp992;
        if (((panda$core$Bit) { value990 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) value990));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp994 = (($fn993) self->$class->vtable[6])(self);
    panda$core$Bit $tmp995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp994.kind, ((panda$core$Int64) { 58 }));
    if ($tmp995.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp997 = (($fn996) self->$class->vtable[4])(self);
        (($fn999) self->$class->vtable[9])(self, $tmp997, &$s998);
        org$pandalanguage$pandac$ASTNode* $tmp1002 = (($fn1001) self->$class->vtable[29])(self);
        value1000 = $tmp1002;
        if (((panda$core$Bit) { value1000 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) value1000));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1003 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1003->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1003->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1003, ((panda$core$Int64) { 129 }), t985->position, ((panda$collections$ListView*) children982));
    return $tmp1003;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1005;
    panda$core$Int64 kind1008;
    panda$collections$Array* children1011;
    org$pandalanguage$pandac$ASTNode* child1014;
    org$pandalanguage$pandac$ASTNode* child1021;
    org$pandalanguage$pandac$parser$Token $tmp1007 = (($fn1006) self->$class->vtable[4])(self);
    start1005 = $tmp1007;
    switch (start1005.kind.value) {
        case 23:
        {
            kind1008 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind1008 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind1008 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind1008 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            (($fn1010) self->$class->vtable[9])(self, start1005, &$s1009);
        }
    }
    panda$collections$Array* $tmp1012 = (panda$collections$Array*) malloc(40);
    $tmp1012->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1012->refCount.value = 1;
    panda$collections$Array$init($tmp1012);
    children1011 = $tmp1012;
    org$pandalanguage$pandac$ASTNode* $tmp1016 = (($fn1015) self->$class->vtable[42])(self);
    child1014 = $tmp1016;
    if (((panda$core$Bit) { child1014 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1011, ((panda$core$Object*) child1014));
    $l1017:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1020 = (($fn1019) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1020.nonnull }).value) goto $l1018;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1023 = (($fn1022) self->$class->vtable[42])(self);
        child1021 = $tmp1023;
        if (((panda$core$Bit) { child1021 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1011, ((panda$core$Object*) child1021));
    }
    goto $l1017;
    $l1018:;
    org$pandalanguage$pandac$ASTNode* $tmp1024 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1024->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1024->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1024, kind1008, start1005.position, ((panda$collections$ListView*) children1011));
    return $tmp1024;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1026;
    panda$collections$Array* children1033;
    org$pandalanguage$pandac$ASTNode* expr1042;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1029 = (($fn1028) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1027);
    start1026 = $tmp1029;
    if (((panda$core$Bit) { !start1026.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1032 = (($fn1031) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1030);
    if (((panda$core$Bit) { !$tmp1032.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp1034 = (panda$collections$Array*) malloc(40);
    $tmp1034->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1034->refCount.value = 1;
    panda$collections$Array$init($tmp1034);
    children1033 = $tmp1034;
    org$pandalanguage$pandac$ASTNode* $tmp1036 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1036->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1036->refCount.value = 1;
    panda$core$String* $tmp1039 = (($fn1038) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) start1026.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1036, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start1026.value).position, $tmp1039);
    panda$collections$Array$add$panda$collections$Array$T(children1033, ((panda$core$Object*) $tmp1036));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1041 = (($fn1040) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1041.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1044 = (($fn1043) self->$class->vtable[29])(self);
        expr1042 = $tmp1044;
        if (((panda$core$Bit) { expr1042 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1033, ((panda$core$Object*) expr1042));
        $l1045:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1048 = (($fn1047) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1048.nonnull }).value) goto $l1046;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1050 = (($fn1049) self->$class->vtable[29])(self);
            expr1042 = $tmp1050;
            if (((panda$core$Bit) { expr1042 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1033, ((panda$core$Object*) expr1042));
        }
        goto $l1045;
        $l1046:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1053 = (($fn1052) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1051);
        if (((panda$core$Bit) { !$tmp1053.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1054 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1054->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1054->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1054, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start1026.value).position, ((panda$collections$ListView*) children1033));
    return $tmp1054;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1056;
    org$pandalanguage$pandac$parser$Token$nullable label1060;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1059 = (($fn1058) self->$class->vtable[8])(self, ((panda$core$Int64) { 28 }), &$s1057);
    start1056 = $tmp1059;
    if (((panda$core$Bit) { !start1056.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1062 = (($fn1061) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1060 = $tmp1062;
    if (((panda$core$Bit) { label1060.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1063 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1063->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1063->refCount.value = 1;
        panda$core$String* $tmp1066 = (($fn1065) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) label1060.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1063, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1056.value).position, $tmp1066);
        return $tmp1063;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1067 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1067->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1067->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1067, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1056.value).position);
    return $tmp1067;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1069;
    org$pandalanguage$pandac$parser$Token$nullable label1073;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1072 = (($fn1071) self->$class->vtable[8])(self, ((panda$core$Int64) { 29 }), &$s1070);
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
        panda$core$String* $tmp1079 = (($fn1078) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) label1073.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1076, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1069.value).position, $tmp1079);
        return $tmp1076;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1080 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1080->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1080->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1080, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1069.value).position);
    return $tmp1080;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1082;
    panda$collections$Array* children1090;
    org$pandalanguage$pandac$ASTNode* expr1093;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1085 = (($fn1084) self->$class->vtable[8])(self, ((panda$core$Int64) { 27 }), &$s1083);
    start1082 = $tmp1085;
    if (((panda$core$Bit) { !start1082.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1087 = (($fn1086) self->$class->vtable[6])(self);
    switch ($tmp1087.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1088 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1088->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1088->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1088, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1082.value).position);
            return $tmp1088;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp1091 = (panda$collections$Array*) malloc(40);
            $tmp1091->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1091->refCount.value = 1;
            panda$collections$Array$init($tmp1091);
            children1090 = $tmp1091;
            org$pandalanguage$pandac$ASTNode* $tmp1095 = (($fn1094) self->$class->vtable[29])(self);
            expr1093 = $tmp1095;
            if (((panda$core$Bit) { expr1093 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1090, ((panda$core$Object*) expr1093));
            org$pandalanguage$pandac$ASTNode* $tmp1096 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1096->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1096->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1096, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1082.value).position, ((panda$collections$ListView*) children1090));
            return $tmp1096;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1099 = (($fn1098) self->$class->vtable[6])(self);
    switch ($tmp1099.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1101 = (($fn1100) self->$class->vtable[45])(self);
            return $tmp1101;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1103 = (($fn1102) self->$class->vtable[46])(self);
            return $tmp1103;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1105 = (($fn1104) self->$class->vtable[47])(self);
            return $tmp1105;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp1107 = (($fn1106) self->$class->vtable[6])(self);
    switch ($tmp1107.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1109 = (($fn1108) self->$class->vtable[35])(self, p_label);
            return $tmp1109;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1111 = (($fn1110) self->$class->vtable[33])(self, p_label);
            return $tmp1111;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1113 = (($fn1112) self->$class->vtable[36])(self, p_label);
            return $tmp1113;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1115 = (($fn1114) self->$class->vtable[34])(self, p_label);
            return $tmp1115;
        }
        break;
        default:
        {
            (($fn1117) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1116);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id1136;
    org$pandalanguage$pandac$parser$Token $tmp1119 = (($fn1118) self->$class->vtable[6])(self);
    switch ($tmp1119.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1121 = (($fn1120) self->$class->vtable[30])(self);
            return $tmp1121;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1123 = (($fn1122) self->$class->vtable[33])(self, NULL);
            return $tmp1123;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1125 = (($fn1124) self->$class->vtable[34])(self, NULL);
            return $tmp1125;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1127 = (($fn1126) self->$class->vtable[35])(self, NULL);
            return $tmp1127;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1129 = (($fn1128) self->$class->vtable[36])(self, NULL);
            return $tmp1129;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1131 = (($fn1130) self->$class->vtable[37])(self);
            return $tmp1131;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1133 = (($fn1132) self->$class->vtable[39])(self);
            return $tmp1133;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1135 = (($fn1134) self->$class->vtable[40])(self);
            return $tmp1135;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp1138 = (($fn1137) self->$class->vtable[4])(self);
            id1136 = $tmp1138;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1140 = (($fn1139) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1140.nonnull }).value) {
            {
                panda$core$String* $tmp1142 = (($fn1141) self->$class->vtable[13])(self, id1136);
                org$pandalanguage$pandac$ASTNode* $tmp1144 = (($fn1143) self->$class->vtable[49])(self, $tmp1142);
                return $tmp1144;
            }
            }
            (($fn1145) self->$class->vtable[5])(self, id1136);
            org$pandalanguage$pandac$ASTNode* $tmp1147 = (($fn1146) self->$class->vtable[41])(self);
            return $tmp1147;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1149 = (($fn1148) self->$class->vtable[41])(self);
            return $tmp1149;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1151 = (($fn1150) self->$class->vtable[43])(self);
            return $tmp1151;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1153 = (($fn1152) self->$class->vtable[44])(self);
            return $tmp1153;
        }
        break;
        default:
        {
            (($fn1155) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s1154);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1156;
    org$pandalanguage$pandac$parser$Token$nullable next1160;
    panda$core$MutableString* name1164;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1159 = (($fn1158) self->$class->vtable[8])(self, ((panda$core$Int64) { 14 }), &$s1157);
    start1156 = $tmp1159;
    if (((panda$core$Bit) { !start1156.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1163 = (($fn1162) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1161);
    next1160 = $tmp1163;
    if (((panda$core$Bit) { !next1160.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1165 = (panda$core$MutableString*) malloc(40);
    $tmp1165->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1165->refCount.value = 1;
    panda$core$String* $tmp1168 = (($fn1167) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1160.value));
    panda$core$MutableString$init$panda$core$String($tmp1165, $tmp1168);
    name1164 = $tmp1165;
    $l1169:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1172 = (($fn1171) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1160 = $tmp1172;
        if (((panda$core$Bit) { !next1160.nonnull }).value) {
        {
            goto $l1170;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1164, &$s1173);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1176 = (($fn1175) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1174);
        next1160 = $tmp1176;
        if (((panda$core$Bit) { !next1160.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1178 = (($fn1177) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1160.value));
        panda$core$MutableString$append$panda$core$String(name1164, $tmp1178);
    }
    }
    $l1170:;
    org$pandalanguage$pandac$ASTNode* $tmp1179 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1179->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1179->refCount.value = 1;
    panda$core$String* $tmp1181 = panda$core$MutableString$finish$R$panda$core$String(name1164);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1179, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1156.value).position, $tmp1181);
    return $tmp1179;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1182;
    org$pandalanguage$pandac$parser$Token$nullable next1186;
    panda$core$MutableString* name1190;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1185 = (($fn1184) self->$class->vtable[8])(self, ((panda$core$Int64) { 15 }), &$s1183);
    start1182 = $tmp1185;
    if (((panda$core$Bit) { !start1182.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1189 = (($fn1188) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1187);
    next1186 = $tmp1189;
    if (((panda$core$Bit) { !next1186.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1191 = (panda$core$MutableString*) malloc(40);
    $tmp1191->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1191->refCount.value = 1;
    panda$core$String* $tmp1194 = (($fn1193) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1186.value));
    panda$core$MutableString$init$panda$core$String($tmp1191, $tmp1194);
    name1190 = $tmp1191;
    $l1195:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1198 = (($fn1197) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1186 = $tmp1198;
        if (((panda$core$Bit) { !next1186.nonnull }).value) {
        {
            goto $l1196;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1190, &$s1199);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1202 = (($fn1201) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1200);
        next1186 = $tmp1202;
        if (((panda$core$Bit) { !next1186.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1204 = (($fn1203) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1186.value));
        panda$core$MutableString$append$panda$core$String(name1190, $tmp1204);
    }
    }
    $l1196:;
    org$pandalanguage$pandac$ASTNode* $tmp1205 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1205->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1205->refCount.value = 1;
    panda$core$String* $tmp1207 = panda$core$MutableString$finish$R$panda$core$String(name1190);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1205, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1182.value).position, $tmp1207);
    return $tmp1205;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1208;
    org$pandalanguage$pandac$parser$Token$nullable id1212;
    panda$collections$Array* children1216;
    panda$collections$Array* idChildren1219;
    org$pandalanguage$pandac$ASTNode* t1224;
    org$pandalanguage$pandac$ASTNode* t1240;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1211 = (($fn1210) self->$class->vtable[8])(self, ((panda$core$Int64) { 62 }), &$s1209);
    start1208 = $tmp1211;
    if (((panda$core$Bit) { !start1208.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1215 = (($fn1214) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1213);
    id1212 = $tmp1215;
    if (((panda$core$Bit) { !id1212.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1217 = (panda$collections$Array*) malloc(40);
    $tmp1217->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1217->refCount.value = 1;
    panda$collections$Array$init($tmp1217);
    children1216 = $tmp1217;
    panda$collections$Array* $tmp1220 = (panda$collections$Array*) malloc(40);
    $tmp1220->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1220->refCount.value = 1;
    panda$collections$Array$init($tmp1220);
    idChildren1219 = $tmp1220;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1223 = (($fn1222) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1223.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1226 = (($fn1225) self->$class->vtable[19])(self);
        t1224 = $tmp1226;
        if (((panda$core$Bit) { t1224 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1219, ((panda$core$Object*) t1224));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1227 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1227->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1227->refCount.value = 1;
    panda$core$String* $tmp1230 = (($fn1229) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1212.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1227, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1212.value).position, ((panda$core$Object*) $tmp1230), ((panda$collections$ListView*) idChildren1219));
    panda$collections$Array$add$panda$collections$Array$T(children1216, ((panda$core$Object*) $tmp1227));
    $l1231:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1234 = (($fn1233) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1234.nonnull }).value) goto $l1232;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1237 = (($fn1236) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1235);
        id1212 = $tmp1237;
        if (((panda$core$Bit) { !id1212.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1219);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1239 = (($fn1238) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1239.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1242 = (($fn1241) self->$class->vtable[19])(self);
            t1240 = $tmp1242;
            if (((panda$core$Bit) { t1240 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1219, ((panda$core$Object*) t1240));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1243 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1243->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1243->refCount.value = 1;
        panda$core$String* $tmp1246 = (($fn1245) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1212.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1243, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1212.value).position, ((panda$core$Object*) $tmp1246), ((panda$collections$ListView*) idChildren1219));
        panda$collections$Array$add$panda$collections$Array$T(children1216, ((panda$core$Object*) $tmp1243));
    }
    goto $l1231;
    $l1232:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1249 = (($fn1248) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s1247);
    if (((panda$core$Bit) { !$tmp1249.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1250 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1250->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1250->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1250, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1208.value).position, ((panda$collections$ListView*) children1216));
    return $tmp1250;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1252;
    panda$collections$Array* children1256;
    org$pandalanguage$pandac$ASTNode* t1259;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1255 = (($fn1254) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1253);
    start1252 = $tmp1255;
    if (((panda$core$Bit) { !start1252.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1257 = (panda$collections$Array*) malloc(40);
    $tmp1257->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1257->refCount.value = 1;
    panda$collections$Array$init($tmp1257);
    children1256 = $tmp1257;
    org$pandalanguage$pandac$ASTNode* $tmp1261 = (($fn1260) self->$class->vtable[19])(self);
    t1259 = $tmp1261;
    if (((panda$core$Bit) { t1259 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1256, ((panda$core$Object*) t1259));
    $l1262:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1265 = (($fn1264) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1265.nonnull }).value) goto $l1263;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1267 = (($fn1266) self->$class->vtable[19])(self);
        t1259 = $tmp1267;
        if (((panda$core$Bit) { t1259 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1256, ((panda$core$Object*) t1259));
    }
    goto $l1262;
    $l1263:;
    org$pandalanguage$pandac$ASTNode* $tmp1268 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1268->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1268->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1268, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1252.value).position, ((panda$collections$ListView*) children1256));
    return $tmp1268;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1270;
    org$pandalanguage$pandac$parser$Token$nullable next1275;
    org$pandalanguage$pandac$Position $tmp1284;
    panda$collections$Array* $tmp1271 = (panda$collections$Array*) malloc(40);
    $tmp1271->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1271->refCount.value = 1;
    panda$collections$Array$init($tmp1271);
    children1270 = $tmp1271;
    $l1273:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1277 = (($fn1276) self->$class->vtable[7])(self, ((panda$core$Int64) { 13 }));
        next1275 = $tmp1277;
        if (((panda$core$Bit) { !next1275.nonnull }).value) {
        {
            goto $l1274;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1278 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1278->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1278->refCount.value = 1;
        panda$core$String* $tmp1281 = (($fn1280) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) next1275.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1278, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1275.value).position, $tmp1281);
        panda$collections$Array$add$panda$collections$Array$T(children1270, ((panda$core$Object*) $tmp1278));
    }
    }
    $l1274:;
    org$pandalanguage$pandac$ASTNode* $tmp1282 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1282->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1282->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1284);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1282, ((panda$core$Int64) { 144 }), $tmp1284, ((panda$collections$ListView*) children1270));
    return $tmp1282;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1285;
    panda$core$MutableString* result1289;
    org$pandalanguage$pandac$parser$Token next1294;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1288 = (($fn1287) self->$class->vtable[8])(self, ((panda$core$Int64) { 11 }), &$s1286);
    start1285 = $tmp1288;
    if (((panda$core$Bit) { !start1285.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1290 = (panda$core$MutableString*) malloc(40);
    $tmp1290->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1290->refCount.value = 1;
    panda$core$MutableString$init($tmp1290);
    result1289 = $tmp1290;
    $l1292:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1296 = (($fn1295) self->$class->vtable[3])(self);
        next1294 = $tmp1296;
        panda$core$Bit $tmp1297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1294.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1297.value) {
        {
            goto $l1293;
        }
        }
        panda$core$Bit $tmp1298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1294.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1298.value) {
        {
            (($fn1300) self->$class->vtable[9])(self, ((org$pandalanguage$pandac$parser$Token) start1285.value), &$s1299);
            return NULL;
        }
        }
        panda$core$String* $tmp1302 = (($fn1301) self->$class->vtable[13])(self, next1294);
        panda$core$MutableString$append$panda$core$String(result1289, $tmp1302);
    }
    }
    $l1293:;
    org$pandalanguage$pandac$ASTNode* $tmp1303 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1303->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1303->refCount.value = 1;
    panda$core$String* $tmp1305 = panda$core$MutableString$finish$R$panda$core$String(result1289);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1303, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1285.value).position, $tmp1305);
    return $tmp1303;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1306;
    org$pandalanguage$pandac$ASTNode* t1310;
    panda$collections$Array* children1313;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1309 = (($fn1308) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1307);
    id1306 = $tmp1309;
    if (((panda$core$Bit) { !id1306.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1312 = (($fn1311) self->$class->vtable[31])(self);
    t1310 = $tmp1312;
    if (((panda$core$Bit) { t1310 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1314 = (panda$collections$Array*) malloc(40);
    $tmp1314->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1314->refCount.value = 1;
    panda$collections$Array$init($tmp1314);
    children1313 = $tmp1314;
    panda$collections$Array$add$panda$collections$Array$T(children1313, ((panda$core$Object*) t1310));
    org$pandalanguage$pandac$ASTNode* $tmp1316 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1316->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1316->refCount.value = 1;
    panda$core$String* $tmp1319 = (($fn1318) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) id1306.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1316, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1306.value).position, ((panda$core$Object*) $tmp1319), ((panda$collections$ListView*) children1313));
    return $tmp1316;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1320;
    panda$collections$Array* children1324;
    org$pandalanguage$pandac$ASTNode* param1329;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1323 = (($fn1322) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1321);
    start1320 = $tmp1323;
    if (((panda$core$Bit) { !start1320.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1325 = (panda$collections$Array*) malloc(40);
    $tmp1325->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1325->refCount.value = 1;
    panda$collections$Array$init($tmp1325);
    children1324 = $tmp1325;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1328 = (($fn1327) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1328.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1331 = (($fn1330) self->$class->vtable[57])(self);
        param1329 = $tmp1331;
        if (((panda$core$Bit) { param1329 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1324, ((panda$core$Object*) param1329));
        $l1332:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1335 = (($fn1334) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1335.nonnull }).value) goto $l1333;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1337 = (($fn1336) self->$class->vtable[57])(self);
            param1329 = $tmp1337;
            if (((panda$core$Bit) { param1329 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1324, ((panda$core$Object*) param1329));
        }
        goto $l1332;
        $l1333:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1340 = (($fn1339) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1338);
        if (((panda$core$Bit) { !$tmp1340.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1341 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1341->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1341->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1341, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1320.value).position, ((panda$collections$ListView*) children1324));
    return $tmp1341;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1343;
    org$pandalanguage$pandac$parser$Token$nullable start1344;
    panda$core$String* name1350;
    panda$collections$Array* children1353;
    org$pandalanguage$pandac$ASTNode* params1356;
    org$pandalanguage$pandac$ASTNode* returnType1362;
    org$pandalanguage$pandac$Position $tmp1367;
    org$pandalanguage$pandac$ASTNode* b1371;
    org$pandalanguage$pandac$Position $tmp1376;
    org$pandalanguage$pandac$parser$Token token1377;
    panda$core$String* tokenText1380;
    org$pandalanguage$pandac$ASTNode* post1394;
    org$pandalanguage$pandac$Position $tmp1399;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1346 = (($fn1345) self->$class->vtable[7])(self, ((panda$core$Int64) { 20 }));
    start1344 = $tmp1346;
    if (((panda$core$Bit) { !start1344.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1349 = (($fn1348) self->$class->vtable[8])(self, ((panda$core$Int64) { 21 }), &$s1347);
        start1344 = $tmp1349;
        if (((panda$core$Bit) { !start1344.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1343 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1343 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1352 = (($fn1351) self->$class->vtable[18])(self);
    name1350 = $tmp1352;
    if (((panda$core$Bit) { name1350 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1354 = (panda$collections$Array*) malloc(40);
    $tmp1354->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1354->refCount.value = 1;
    panda$collections$Array$init($tmp1354);
    children1353 = $tmp1354;
    panda$collections$Array$add$panda$collections$Array$T(children1353, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1353, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1358 = (($fn1357) self->$class->vtable[58])(self);
    params1356 = $tmp1358;
    if (((panda$core$Bit) { params1356 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1353, ((panda$core$Object*) params1356));
    org$pandalanguage$pandac$parser$Token $tmp1360 = (($fn1359) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1360.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1361.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1364 = (($fn1363) self->$class->vtable[31])(self);
        returnType1362 = $tmp1364;
        if (((panda$core$Bit) { returnType1362 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1353, ((panda$core$Object*) returnType1362));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1365 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1365->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1365->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1367);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1365, ((panda$core$Int64) { 138 }), $tmp1367);
        panda$collections$Array$add$panda$collections$Array$T(children1353, ((panda$core$Object*) $tmp1365));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1369 = (($fn1368) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1369.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1370.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1373 = (($fn1372) self->$class->vtable[40])(self);
        b1371 = $tmp1373;
        if (((panda$core$Bit) { b1371 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1353, ((panda$core$Object*) b1371));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1374 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1374->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1374->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1376);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1374, ((panda$core$Int64) { 138 }), $tmp1376);
        panda$collections$Array$add$panda$collections$Array$T(children1353, ((panda$core$Object*) $tmp1374));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1379 = (($fn1378) self->$class->vtable[6])(self);
    token1377 = $tmp1379;
    panda$core$String* $tmp1382 = (($fn1381) self->$class->vtable[13])(self, token1377);
    tokenText1380 = $tmp1382;
    panda$core$Bit $tmp1384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1377.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1383 = $tmp1384.value;
    if (!$tmp1383) goto $l1385;
    panda$core$Bit $tmp1388 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1380, &$s1387);
    bool $tmp1386 = $tmp1388.value;
    if ($tmp1386) goto $l1389;
    panda$core$Bit $tmp1391 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1380, &$s1390);
    $tmp1386 = $tmp1391.value;
    $l1389:;
    panda$core$Bit $tmp1392 = { $tmp1386 };
    $tmp1383 = $tmp1392.value;
    $l1385:;
    panda$core$Bit $tmp1393 = { $tmp1383 };
    if ($tmp1393.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1396 = (($fn1395) self->$class->vtable[59])(self);
        post1394 = $tmp1396;
        if (((panda$core$Bit) { post1394 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1353, ((panda$core$Object*) post1394));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1397 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1397->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1397->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1399);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1397, ((panda$core$Int64) { 138 }), $tmp1399);
        panda$collections$Array$add$panda$collections$Array$T(children1353, ((panda$core$Object*) $tmp1397));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1400 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1400->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1400->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1400, kind1343, ((org$pandalanguage$pandac$parser$Token) start1344.value).position, ((panda$core$Object*) name1350), ((panda$collections$ListView*) children1353));
    return $tmp1400;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1402;
    panda$collections$Array* children1406;
    org$pandalanguage$pandac$ASTNode* params1409;
    org$pandalanguage$pandac$ASTNode* b1412;
    org$pandalanguage$pandac$parser$Token token1415;
    panda$core$String* tokenText1418;
    org$pandalanguage$pandac$ASTNode* post1432;
    org$pandalanguage$pandac$Position $tmp1437;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1405 = (($fn1404) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1403);
    start1402 = $tmp1405;
    if (((panda$core$Bit) { !start1402.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1407 = (panda$collections$Array*) malloc(40);
    $tmp1407->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1407->refCount.value = 1;
    panda$collections$Array$init($tmp1407);
    children1406 = $tmp1407;
    panda$collections$Array$add$panda$collections$Array$T(children1406, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1406, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1411 = (($fn1410) self->$class->vtable[58])(self);
    params1409 = $tmp1411;
    if (((panda$core$Bit) { params1409 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1406, ((panda$core$Object*) params1409));
    org$pandalanguage$pandac$ASTNode* $tmp1414 = (($fn1413) self->$class->vtable[40])(self);
    b1412 = $tmp1414;
    if (((panda$core$Bit) { b1412 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1406, ((panda$core$Object*) b1412));
    org$pandalanguage$pandac$parser$Token $tmp1417 = (($fn1416) self->$class->vtable[6])(self);
    token1415 = $tmp1417;
    panda$core$String* $tmp1420 = (($fn1419) self->$class->vtable[13])(self, token1415);
    tokenText1418 = $tmp1420;
    panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1415.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1421 = $tmp1422.value;
    if (!$tmp1421) goto $l1423;
    panda$core$Bit $tmp1426 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1418, &$s1425);
    bool $tmp1424 = $tmp1426.value;
    if ($tmp1424) goto $l1427;
    panda$core$Bit $tmp1429 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1418, &$s1428);
    $tmp1424 = $tmp1429.value;
    $l1427:;
    panda$core$Bit $tmp1430 = { $tmp1424 };
    $tmp1421 = $tmp1430.value;
    $l1423:;
    panda$core$Bit $tmp1431 = { $tmp1421 };
    if ($tmp1431.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1434 = (($fn1433) self->$class->vtable[59])(self);
        post1432 = $tmp1434;
        if (((panda$core$Bit) { post1432 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1406, ((panda$core$Object*) post1432));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1435 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1435->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1435->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1437);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1435, ((panda$core$Int64) { 138 }), $tmp1437);
        panda$collections$Array$add$panda$collections$Array$T(children1406, ((panda$core$Object*) $tmp1435));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1438 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1438->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1438->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1438, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1402.value).position, ((panda$collections$ListView*) children1406));
    return $tmp1438;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1440;
    panda$collections$Array* children1443;
    org$pandalanguage$pandac$ASTNode* $tmp1442 = (($fn1441) self->$class->vtable[43])(self);
    decl1440 = $tmp1442;
    if (((panda$core$Bit) { decl1440 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1444 = (panda$collections$Array*) malloc(40);
    $tmp1444->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1444->refCount.value = 1;
    panda$collections$Array$init($tmp1444);
    children1443 = $tmp1444;
    panda$collections$Array$add$panda$collections$Array$T(children1443, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1443, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1443, ((panda$core$Object*) decl1440));
    org$pandalanguage$pandac$ASTNode* $tmp1446 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1446->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1446->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1446, ((panda$core$Int64) { 148 }), decl1440->position, ((panda$collections$ListView*) children1443));
    return $tmp1446;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1448;
    org$pandalanguage$pandac$ASTNode* dc1451;
    org$pandalanguage$pandac$Position $tmp1457;
    org$pandalanguage$pandac$ASTNode* a1458;
    org$pandalanguage$pandac$parser$Token $tmp1450 = (($fn1449) self->$class->vtable[6])(self);
    start1448 = $tmp1450;
    panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1448.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1452.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1454 = (($fn1453) self->$class->vtable[56])(self);
        dc1451 = $tmp1454;
        if (((panda$core$Bit) { dc1451 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1455 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1455->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1455->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1457);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1455, ((panda$core$Int64) { 138 }), $tmp1457);
        dc1451 = $tmp1455;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1460 = (($fn1459) self->$class->vtable[55])(self);
    a1458 = $tmp1460;
    if (((panda$core$Bit) { a1458 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1462 = (($fn1461) self->$class->vtable[6])(self);
    switch ($tmp1462.kind.value) {
        case 17:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1464 = (($fn1463) self->$class->vtable[64])(self, dc1451, a1458);
            return $tmp1464;
        }
        break;
        case 18:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1466 = (($fn1465) self->$class->vtable[65])(self, dc1451, a1458);
            return $tmp1466;
        }
        break;
        case 21:
        case 20:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1468 = (($fn1467) self->$class->vtable[60])(self, dc1451, a1458);
            return $tmp1468;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1470 = (($fn1469) self->$class->vtable[61])(self, dc1451, a1458);
            return $tmp1470;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1472 = (($fn1471) self->$class->vtable[62])(self, dc1451, a1458);
            return $tmp1472;
        }
        break;
        default:
        {
            (($fn1474) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1473);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1475;
    org$pandalanguage$pandac$parser$Token$nullable start1478;
    org$pandalanguage$pandac$parser$Token$nullable name1482;
    org$pandalanguage$pandac$ASTNode* generics1489;
    org$pandalanguage$pandac$Position $tmp1494;
    org$pandalanguage$pandac$ASTNode* stypes1498;
    org$pandalanguage$pandac$Position $tmp1503;
    panda$collections$Array* members1507;
    org$pandalanguage$pandac$ASTNode* member1514;
    panda$collections$Array* $tmp1476 = (panda$collections$Array*) malloc(40);
    $tmp1476->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1476->refCount.value = 1;
    panda$collections$Array$init($tmp1476);
    children1475 = $tmp1476;
    panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1481 = (($fn1480) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1479);
    start1478 = $tmp1481;
    if (((panda$core$Bit) { !start1478.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1485 = (($fn1484) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1483);
    name1482 = $tmp1485;
    if (((panda$core$Bit) { !name1482.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1487 = (($fn1486) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1487.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1488.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1491 = (($fn1490) self->$class->vtable[53])(self);
        generics1489 = $tmp1491;
        if (((panda$core$Bit) { generics1489 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) generics1489));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1492 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1492->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1492->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1494);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1492, ((panda$core$Int64) { 138 }), $tmp1494);
        panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) $tmp1492));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1496 = (($fn1495) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1496.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1497.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1500 = (($fn1499) self->$class->vtable[54])(self);
        stypes1498 = $tmp1500;
        if (((panda$core$Bit) { stypes1498 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) stypes1498));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1501 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1501->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1501->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1503);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1501, ((panda$core$Int64) { 139 }), $tmp1503);
        panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) $tmp1501));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1506 = (($fn1505) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1504);
    if (((panda$core$Bit) { !$tmp1506.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1508 = (panda$collections$Array*) malloc(40);
    $tmp1508->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1508->refCount.value = 1;
    panda$collections$Array$init($tmp1508);
    members1507 = $tmp1508;
    $l1510:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1513 = (($fn1512) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1513.nonnull }).value) goto $l1511;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1516 = (($fn1515) self->$class->vtable[63])(self);
        member1514 = $tmp1516;
        if (((panda$core$Bit) { member1514 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1507, ((panda$core$Object*) member1514));
    }
    goto $l1510;
    $l1511:;
    org$pandalanguage$pandac$ASTNode* $tmp1517 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1517->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1517->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1517, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1478.value).position, ((panda$collections$ListView*) members1507));
    panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) $tmp1517));
    org$pandalanguage$pandac$ASTNode* $tmp1519 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1519->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1519->refCount.value = 1;
    panda$core$String* $tmp1522 = (($fn1521) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) name1482.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1519, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1478.value).position, ((panda$core$Object*) $tmp1522), ((panda$collections$ListView*) children1475));
    return $tmp1519;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1523;
    org$pandalanguage$pandac$parser$Token$nullable start1526;
    org$pandalanguage$pandac$parser$Token$nullable name1530;
    org$pandalanguage$pandac$ASTNode* generics1537;
    org$pandalanguage$pandac$Position $tmp1542;
    panda$collections$Array* intfs1543;
    org$pandalanguage$pandac$ASTNode* t1548;
    panda$collections$Array* members1562;
    org$pandalanguage$pandac$ASTNode* member1569;
    panda$collections$Array* $tmp1524 = (panda$collections$Array*) malloc(40);
    $tmp1524->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1524->refCount.value = 1;
    panda$collections$Array$init($tmp1524);
    children1523 = $tmp1524;
    panda$collections$Array$add$panda$collections$Array$T(children1523, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1523, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1529 = (($fn1528) self->$class->vtable[8])(self, ((panda$core$Int64) { 18 }), &$s1527);
    start1526 = $tmp1529;
    if (((panda$core$Bit) { !start1526.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1533 = (($fn1532) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1531);
    name1530 = $tmp1533;
    if (((panda$core$Bit) { !name1530.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1535 = (($fn1534) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1535.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1536.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1539 = (($fn1538) self->$class->vtable[53])(self);
        generics1537 = $tmp1539;
        if (((panda$core$Bit) { generics1537 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1523, ((panda$core$Object*) generics1537));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1540 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1540->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1540->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1542);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1540, ((panda$core$Int64) { 138 }), $tmp1542);
        panda$collections$Array$add$panda$collections$Array$T(children1523, ((panda$core$Object*) $tmp1540));
    }
    }
    panda$collections$Array* $tmp1544 = (panda$collections$Array*) malloc(40);
    $tmp1544->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1544->refCount.value = 1;
    panda$collections$Array$init($tmp1544);
    intfs1543 = $tmp1544;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1547 = (($fn1546) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1547.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1550 = (($fn1549) self->$class->vtable[19])(self);
        t1548 = $tmp1550;
        if (((panda$core$Bit) { t1548 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1543, ((panda$core$Object*) t1548));
        $l1551:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1554 = (($fn1553) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1554.nonnull }).value) goto $l1552;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1556 = (($fn1555) self->$class->vtable[19])(self);
            t1548 = $tmp1556;
            if (((panda$core$Bit) { t1548 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1543, ((panda$core$Object*) t1548));
        }
        goto $l1551;
        $l1552:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1557 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1557->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1557->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1557, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1526.value).position, ((panda$collections$ListView*) intfs1543));
    panda$collections$Array$add$panda$collections$Array$T(children1523, ((panda$core$Object*) $tmp1557));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1561 = (($fn1560) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1559);
    if (((panda$core$Bit) { !$tmp1561.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1563 = (panda$collections$Array*) malloc(40);
    $tmp1563->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1563->refCount.value = 1;
    panda$collections$Array$init($tmp1563);
    members1562 = $tmp1563;
    $l1565:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1568 = (($fn1567) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1568.nonnull }).value) goto $l1566;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1571 = (($fn1570) self->$class->vtable[63])(self);
        member1569 = $tmp1571;
        if (((panda$core$Bit) { member1569 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1562, ((panda$core$Object*) member1569));
    }
    goto $l1565;
    $l1566:;
    org$pandalanguage$pandac$ASTNode* $tmp1572 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1572->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1572->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1572, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1526.value).position, ((panda$collections$ListView*) members1562));
    panda$collections$Array$add$panda$collections$Array$T(children1523, ((panda$core$Object*) $tmp1572));
    org$pandalanguage$pandac$ASTNode* $tmp1574 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1574->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1574->refCount.value = 1;
    panda$core$String* $tmp1577 = (($fn1576) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$parser$Token) name1530.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1574, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1526.value).position, ((panda$core$Object*) $tmp1577), ((panda$collections$ListView*) children1523));
    return $tmp1574;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1579 = (($fn1578) self->$class->vtable[6])(self);
    switch ($tmp1579.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1581 = (($fn1580) self->$class->vtable[52])(self);
            return $tmp1581;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1583 = (($fn1582) self->$class->vtable[51])(self);
            return $tmp1583;
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
            org$pandalanguage$pandac$ASTNode* $tmp1585 = (($fn1584) self->$class->vtable[63])(self);
            return $tmp1585;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1587 = (($fn1586) self->$class->vtable[50])(self);
            return $tmp1587;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1588;
    org$pandalanguage$pandac$ASTNode* entry1596;
    org$pandalanguage$pandac$Position $tmp1602;
    panda$collections$Array* $tmp1589 = (panda$collections$Array*) malloc(40);
    $tmp1589->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1589->refCount.value = 1;
    panda$collections$Array$init($tmp1589);
    entries1588 = $tmp1589;
    $l1591:;
    org$pandalanguage$pandac$parser$Token $tmp1594 = (($fn1593) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1595 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1594.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1595.value) goto $l1592;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1598 = (($fn1597) self->$class->vtable[66])(self);
        entry1596 = $tmp1598;
        if (((panda$core$Bit) { entry1596 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1599 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1599.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1588, ((panda$core$Object*) entry1596));
    }
    goto $l1591;
    $l1592:;
    org$pandalanguage$pandac$ASTNode* $tmp1600 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1600->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1600->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp1602, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1600, ((panda$core$Int64) { 152 }), $tmp1602, ((panda$collections$ListView*) entries1588));
    return $tmp1600;
}

