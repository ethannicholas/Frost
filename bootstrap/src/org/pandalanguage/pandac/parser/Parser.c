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
typedef org$pandalanguage$pandac$parser$Token (*$fn29)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn33)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn42)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn48)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn51)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn53)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn58)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn61)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn63)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn70)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn75)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$Position* (*$fn77)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn81)(org$pandalanguage$pandac$ErrorReporter*, org$pandalanguage$pandac$Position*, panda$core$String*);
typedef panda$core$UInt8$nullable (*$fn140)(panda$io$LineNumberInputStream*);
typedef org$pandalanguage$pandac$parser$Token (*$fn163)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn171)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn176)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn184)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn190)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn195)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef void (*$fn198)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn201)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn205)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn207)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$Object* (*$fn213)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn238)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn241)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn246)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn248)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn251)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn256)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn261)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn268)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn274)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn280)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$parser$Token (*$fn302)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn308)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn313)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn318)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn324)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef panda$core$String* (*$fn328)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$UInt64 (*$fn334)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$UInt64);
typedef void (*$fn356)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn357)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn361)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn364)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn367)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn372)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn383)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn471)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn475)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn479)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn483)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn485)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn490)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn495)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn496)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn500)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn505)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn509)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn513)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn516)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn522)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn525)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn526)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn531)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn533)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn536)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn538)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn540)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn542)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn544)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn548)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn549)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn557)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn562)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn569)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn572)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn576)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn578)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn581)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn590)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn593)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn599)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn602)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn611)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn619)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn626)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn627)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn634)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn636)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn639)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn641)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef void (*$fn643)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn646)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef void (*$fn648)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn653)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn668)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn672)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn673)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn675)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn680)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn683)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn691)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn704)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn711)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn712)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn715)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn720)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn749)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn758)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn762)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn769)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn770)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn771)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn773)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn778)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn791)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn798)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn801)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn810)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn813)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn822)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn834)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn839)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn841)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn852)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn854)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn859)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn892)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn899)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn901)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn906)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn915)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn922)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn924)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn929)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn932)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn941)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn944)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn950)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn952)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token (*$fn954)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn958)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn961)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn966)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn968)(org$pandalanguage$pandac$parser$Parser*, panda$core$Bit);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn972)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn974)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn978)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn985)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef panda$core$String* (*$fn989)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn993)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn996)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn999)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1002)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1005)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1014)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1017)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1020)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1029)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1032)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1035)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1038)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1047)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1050)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1059)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1062)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1067)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1070)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1076)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1082)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1086)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1088)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1096)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1101)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1122)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1125)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1131)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1137)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1140)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1145)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1151)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1155)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1158)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1166)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1179)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1182)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1186)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1189)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef void (*$fn1195)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1197)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1203)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1211)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1214)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1225)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1228)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1231)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1236)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1239)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1303)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1306)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1314)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1317)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1319)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1322)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1333)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1335)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1338)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1340)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1343)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1346)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1348)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1353)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1362)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1367)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1371)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1374)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1380)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1383)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1390)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1392)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1395)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1399)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1401)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1404)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1410)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1413)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1417)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1423)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1426)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1430)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1436)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1439)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1456)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1461)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1464)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1467)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1470)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1473)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1476)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1479)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1482)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1485)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1488)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1490)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1493)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1496)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1499)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1502)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1505)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1508)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1511)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1514)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1518)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1520)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1522)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1524)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*);
typedef void (*$fn1526)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1527)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1534)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1549)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1552)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1555)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1558)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1562)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1567)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1571)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1575)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1577)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1584)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1588)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1593)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1597)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1601)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1603)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1610)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1614)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1622)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1625)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1629)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1633)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1636)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1638)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1641)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1645)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1648)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1654)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1660)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1664)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1666)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1669)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1679)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef panda$core$String* (*$fn1683)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1689)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1697)(org$pandalanguage$pandac$parser$Parser*);
typedef void (*$fn1702)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token, panda$core$String*);
typedef panda$core$String* (*$fn1703)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1710)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1713)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1720)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1724)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1729)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1732)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1736)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1738)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1741)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1747)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1750)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef panda$core$String* (*$fn1753)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1759)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1761)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1765)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1769)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1773)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1778)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1781)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1795)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1803)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1809)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1812)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1815)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1818)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1832)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1839)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1847)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1851)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1856)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1859)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1862)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1865)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1872)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1875)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1890)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$ASTNode*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1893)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1899)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1903)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1905)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1909)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1913)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1917)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1921)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1925)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1930)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1937)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1940)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn1946)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1953)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1957)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token (*$fn1959)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1963)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1970)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1973)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1977)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1979)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1984)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64, panda$core$String*);
typedef org$pandalanguage$pandac$parser$Token$nullable (*$fn1991)(org$pandalanguage$pandac$parser$Parser*, panda$core$Int64);
typedef org$pandalanguage$pandac$ASTNode* (*$fn1994)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$core$String* (*$fn2000)(org$pandalanguage$pandac$parser$Parser*, org$pandalanguage$pandac$parser$Token);
typedef org$pandalanguage$pandac$parser$Token (*$fn2003)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2006)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2009)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2036)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2038)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$parser$Token (*$fn2045)(org$pandalanguage$pandac$parser$Parser*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn2049)(org$pandalanguage$pandac$parser$Parser*);

static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 20, 1 };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 13, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6E\x67\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 1 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E", 1, 1 };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72", 1, 1 };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0D", 1, 1 };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74", 1, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x09", 1, 1 };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 1 };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 1 };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C", 1, 1 };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6E\x63\x65", 30, 1 };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, 1 };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1 };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72\x20\x6F\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 47, 1 };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1 };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 1 };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5, 1 };
static panda$core$String $s998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4, 1 };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4, 1 };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 1 };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6, 1 };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 1 };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6, 1 };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7, 1 };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1 };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42, 1 };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7, 1 };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1 };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 1 };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39, 1 };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1 };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7, 1 };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10, 1 };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8, 1 };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47, 1 };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11, 1 };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9, 1 };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1 };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3, 1 };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1 };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 23, 1 };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 34, 1 };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1 };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1 };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x65\x74\x68\x6F\x64\x27\x20\x6F\x72\x20\x27\x66\x75\x6E\x63\x74\x69\x6F\x6E\x27", 22, 1 };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 1 };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 1 };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1 };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 1 };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 1 };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E", 13, 1 };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6C\x61\x73\x73\x27", 7, 1 };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11, 1 };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 1 };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1 };

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
    panda$core$Int64 $match$125423;
    org$pandalanguage$pandac$parser$Token next28;
    panda$core$Int64 $match$149031;
    org$pandalanguage$pandac$parser$Token next41;
    panda$core$Int64 $match$200044;
    $l18:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp22 = (($fn21) self->$class->vtable[3])(self);
        result20 = $tmp22;
        {
            $match$125423 = result20.kind;
            panda$core$Bit $tmp24 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125423, ((panda$core$Int64) { 12 }));
            if ($tmp24.value) {
            {
                goto $l18;
            }
            }
            else {
            panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125423, ((panda$core$Int64) { 8 }));
            if ($tmp25.value) {
            {
                $l26:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp30 = (($fn29) self->$class->vtable[3])(self);
                    next28 = $tmp30;
                    {
                        $match$149031 = next28.kind;
                        panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$149031, ((panda$core$Int64) { 12 }));
                        if ($tmp32.value) {
                        {
                            panda$core$String* $tmp34 = (($fn33) self->$class->vtable[14])(self, next28);
                            panda$core$Bit $tmp36 = panda$core$String$contains$panda$core$String$R$panda$core$Bit($tmp34, &$s35);
                            if ($tmp36.value) {
                            {
                                goto $l18;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$149031, ((panda$core$Int64) { 0 }));
                        if ($tmp37.value) {
                        {
                            return next28;
                        }
                        }
                        }
                    }
                }
                }
                $l27:;
            }
            }
            else {
            panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$125423, ((panda$core$Int64) { 9 }));
            if ($tmp38.value) {
            {
                $l39:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp43 = (($fn42) self->$class->vtable[4])(self);
                    next41 = $tmp43;
                    {
                        $match$200044 = next41.kind;
                        panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$200044, ((panda$core$Int64) { 10 }));
                        if ($tmp45.value) {
                        {
                            goto $l18;
                        }
                        }
                        else {
                        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$200044, ((panda$core$Int64) { 0 }));
                        if ($tmp46.value) {
                        {
                            (($fn48) self->$class->vtable[9])(self, result20, &$s47);
                            return next41;
                        }
                        }
                        }
                    }
                }
                }
                $l40:;
            }
            }
            else {
            {
                return result20;
            }
            }
            }
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
    panda$core$Int64 $tmp49 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp49, ((panda$core$Int64) { 0 }));
    if ($tmp50.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp52 = (($fn51) self->$class->vtable[4])(self);
        (($fn53) self->$class->vtable[5])(self, $tmp52);
    }
    }
    panda$core$Int64 $tmp54 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp55 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp54, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp56 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, $tmp55);
    return ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp56)->value;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Int64 p_kind) {
    org$pandalanguage$pandac$parser$Token result57;
    org$pandalanguage$pandac$parser$Token $tmp59 = (($fn58) self->$class->vtable[4])(self);
    result57 = $tmp59;
    panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result57.kind, p_kind);
    if ($tmp60.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result57, true });
    }
    }
    (($fn61) self->$class->vtable[5])(self, result57);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Int64 p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result62;
    org$pandalanguage$pandac$parser$Token $tmp64 = (($fn63) self->$class->vtable[4])(self);
    result62 = $tmp64;
    panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result62.kind, p_kind);
    if ($tmp65.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result62, true });
    }
    }
    panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s66, p_expected);
    panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, &$s68);
    panda$core$String* $tmp71 = (($fn70) self->$class->vtable[14])(self, result62);
    panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp69, $tmp71);
    panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp72, &$s73);
    (($fn75) self->$class->vtable[9])(self, result62, $tmp74);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp76 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp76.value) {
    {
        org$pandalanguage$pandac$Position* $tmp78 = (($fn77) self->$class->vtable[13])(self, p_token);
        ITable* $tmp79 = self->errors->$class->itable;
        while ($tmp79->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp79 = $tmp79->next;
        }
        $fn81 $tmp80 = $tmp79->methods[0];
        $tmp80(self->errors, $tmp78, p_msg);
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
    panda$core$Range$LTpanda$core$Int64$GT $tmp82;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp83 = panda$collections$Array$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp84 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp83, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp82, $tmp84, ((panda$core$Int64) { 0 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { true }));
    int64_t $tmp86 = $tmp82.start.value;
    panda$core$Int64 i85 = { $tmp86 };
    int64_t $tmp88 = $tmp82.end.value;
    int64_t $tmp89 = $tmp82.step.value;
    bool $tmp90 = $tmp82.inclusive.value;
    bool $tmp97 = $tmp89 > 0;
    if ($tmp97) goto $l95; else goto $l96;
    $l95:;
    if ($tmp90) goto $l98; else goto $l99;
    $l98:;
    if ($tmp86 <= $tmp88) goto $l91; else goto $l93;
    $l99:;
    if ($tmp86 < $tmp88) goto $l91; else goto $l93;
    $l96:;
    if ($tmp90) goto $l100; else goto $l101;
    $l100:;
    if ($tmp86 >= $tmp88) goto $l91; else goto $l93;
    $l101:;
    if ($tmp86 > $tmp88) goto $l91; else goto $l93;
    $l91:;
    {
        panda$core$Object* $tmp103 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->speculativeBuffer, i85);
        panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) wrap_org$pandalanguage$pandac$parser$Token(((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp103)->value)));
    }
    $l94:;
    if ($tmp97) goto $l105; else goto $l106;
    $l105:;
    int64_t $tmp107 = $tmp88 - i85.value;
    if ($tmp90) goto $l108; else goto $l109;
    $l108:;
    if ($tmp107 >= $tmp89) goto $l104; else goto $l93;
    $l109:;
    if ($tmp107 > $tmp89) goto $l104; else goto $l93;
    $l106:;
    int64_t $tmp111 = i85.value - $tmp88;
    if ($tmp90) goto $l112; else goto $l113;
    $l112:;
    if ($tmp111 >= -$tmp89) goto $l104; else goto $l93;
    $l113:;
    if ($tmp111 > -$tmp89) goto $l104; else goto $l93;
    $l104:;
    i85.value += $tmp89;
    goto $l91;
    $l93:;
}
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$parser$Parser$position$org$pandalanguage$pandac$parser$Token$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$io$LineNumberInputStream* input115;
    panda$core$Range$LTpanda$core$Int64$GT $tmp120;
    panda$core$UInt8$nullable c139;
    panda$io$LineNumberInputStream* $tmp116 = (panda$io$LineNumberInputStream*) malloc(40);
    $tmp116->$class = (panda$core$Class*) &panda$io$LineNumberInputStream$class;
    $tmp116->refCount.value = 1;
    panda$io$MemoryInputStream* $tmp118 = (panda$io$MemoryInputStream*) malloc(32);
    $tmp118->$class = (panda$core$Class*) &panda$io$MemoryInputStream$class;
    $tmp118->refCount.value = 1;
    panda$io$MemoryInputStream$init$panda$core$String($tmp118, self->source);
    panda$io$LineNumberInputStream$init$panda$io$InputStream($tmp116, ((panda$io$InputStream*) $tmp118));
    input115 = $tmp116;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp120, ((panda$core$Int64) { 0 }), p_token.offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp122 = $tmp120.start.value;
    panda$core$Int64 i121 = { $tmp122 };
    int64_t $tmp124 = $tmp120.end.value;
    int64_t $tmp125 = $tmp120.step.value;
    bool $tmp126 = $tmp120.inclusive.value;
    bool $tmp133 = $tmp125 > 0;
    if ($tmp133) goto $l131; else goto $l132;
    $l131:;
    if ($tmp126) goto $l134; else goto $l135;
    $l134:;
    if ($tmp122 <= $tmp124) goto $l127; else goto $l129;
    $l135:;
    if ($tmp122 < $tmp124) goto $l127; else goto $l129;
    $l132:;
    if ($tmp126) goto $l136; else goto $l137;
    $l136:;
    if ($tmp122 >= $tmp124) goto $l127; else goto $l129;
    $l137:;
    if ($tmp122 > $tmp124) goto $l127; else goto $l129;
    $l127:;
    {
        panda$core$UInt8$nullable $tmp141 = (($fn140) input115->$class->vtable[2])(input115);
        c139 = $tmp141;
    }
    $l130:;
    if ($tmp133) goto $l143; else goto $l144;
    $l143:;
    int64_t $tmp145 = $tmp124 - i121.value;
    if ($tmp126) goto $l146; else goto $l147;
    $l146:;
    if ($tmp145 >= $tmp125) goto $l142; else goto $l129;
    $l147:;
    if ($tmp145 > $tmp125) goto $l142; else goto $l129;
    $l144:;
    int64_t $tmp149 = i121.value - $tmp124;
    if ($tmp126) goto $l150; else goto $l151;
    $l150:;
    if ($tmp149 >= -$tmp125) goto $l142; else goto $l129;
    $l151:;
    if ($tmp149 > -$tmp125) goto $l142; else goto $l129;
    $l142:;
    i121.value += $tmp125;
    goto $l127;
    $l129:;
    org$pandalanguage$pandac$Position* $tmp153 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp153->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp153->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp153, self->filename, input115->line, input115->column);
    return $tmp153;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $tmp155 = (panda$core$String*) malloc(33);
    $tmp155->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp155->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp155, (self->source->data + p_token.offset.value), p_token.length, ((panda$core$Bit) { false }));
    return $tmp155;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    panda$collections$Array* children157;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    panda$collections$Array* $tmp158 = (panda$collections$Array*) malloc(40);
    $tmp158->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp158->refCount.value = 1;
    panda$collections$Array$init($tmp158);
    children157 = $tmp158;
    panda$collections$Array$add$panda$collections$Array$T(children157, ((panda$core$Object*) p_string));
    panda$collections$Array$add$panda$collections$Array$T(children157, ((panda$core$Object*) p_chunk));
    org$pandalanguage$pandac$ASTNode* $tmp160 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp160->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp160->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp160, ((panda$core$Int64) { 103 }), p_string->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 51 }))), ((panda$collections$ListView*) children157));
    return $tmp160;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start162;
    org$pandalanguage$pandac$ASTNode* result177;
    panda$core$MutableString* chunk178;
    org$pandalanguage$pandac$parser$Token token183;
    panda$core$Int64 $match$4913187;
    panda$core$String* str189;
    org$pandalanguage$pandac$parser$Token escape200;
    panda$core$String* escapeText206;
    panda$core$Char8 c209;
    panda$core$String* $match$5748215;
    org$pandalanguage$pandac$ASTNode* expr237;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp252;
    org$pandalanguage$pandac$parser$Token $tmp164 = (($fn163) self->$class->vtable[4])(self);
    start162 = $tmp164;
    panda$core$Bit $tmp166 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start162.kind, ((panda$core$Int64) { 7 }));
    bool $tmp165 = $tmp166.value;
    if (!$tmp165) goto $l167;
    panda$core$Bit $tmp168 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start162.kind, ((panda$core$Int64) { 6 }));
    $tmp165 = $tmp168.value;
    $l167:;
    panda$core$Bit $tmp169 = { $tmp165 };
    if ($tmp169.value) {
    {
        panda$core$String* $tmp172 = (($fn171) self->$class->vtable[14])(self, start162);
        panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s170, $tmp172);
        panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s174);
        (($fn176) self->$class->vtable[9])(self, start162, $tmp175);
        return NULL;
    }
    }
    result177 = NULL;
    panda$core$MutableString* $tmp179 = (panda$core$MutableString*) malloc(40);
    $tmp179->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp179->refCount.value = 1;
    panda$core$MutableString$init($tmp179);
    chunk178 = $tmp179;
    $l181:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp185 = (($fn184) self->$class->vtable[3])(self);
        token183 = $tmp185;
        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token183.kind, start162.kind);
        if ($tmp186.value) {
        {
            goto $l182;
        }
        }
        {
            $match$4913187 = token183.kind;
            panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4913187, ((panda$core$Int64) { 12 }));
            if ($tmp188.value) {
            {
                panda$core$String* $tmp191 = (($fn190) self->$class->vtable[14])(self, token183);
                str189 = $tmp191;
                panda$core$Bit $tmp193 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(str189, &$s192);
                if ($tmp193.value) {
                {
                    (($fn195) self->$class->vtable[9])(self, start162, &$s194);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk178, str189);
            }
            }
            else {
            panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4913187, ((panda$core$Int64) { 0 }));
            if ($tmp196.value) {
            {
                (($fn198) self->$class->vtable[9])(self, start162, &$s197);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$4913187, ((panda$core$Int64) { 106 }));
            if ($tmp199.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp202 = (($fn201) self->$class->vtable[3])(self);
                escape200 = $tmp202;
                panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape200.kind, ((panda$core$Int64) { 0 }));
                if ($tmp203.value) {
                {
                    (($fn205) self->$class->vtable[9])(self, start162, &$s204);
                    return NULL;
                }
                }
                panda$core$String* $tmp208 = (($fn207) self->$class->vtable[14])(self, escape200);
                escapeText206 = $tmp208;
                panda$collections$ListView* $tmp210 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText206);
                ITable* $tmp211 = $tmp210->$class->itable;
                while ($tmp211->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp211 = $tmp211->next;
                }
                $fn213 $tmp212 = $tmp211->methods[0];
                panda$core$Object* $tmp214 = $tmp212($tmp210, ((panda$core$Int64) { 0 }));
                c209 = ((panda$core$Char8$wrapper*) $tmp214)->value;
                {
                    panda$core$String* $tmp216 = panda$core$Char8$convert$R$panda$core$String(c209);
                    $match$5748215 = $tmp216;
                    panda$core$Bit $tmp218 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748215, &$s217);
                    if ($tmp218.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk178, &$s219);
                    }
                    }
                    else {
                    panda$core$Bit $tmp221 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748215, &$s220);
                    if ($tmp221.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk178, &$s222);
                    }
                    }
                    else {
                    panda$core$Bit $tmp224 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748215, &$s223);
                    if ($tmp224.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk178, &$s225);
                    }
                    }
                    else {
                    panda$core$Bit $tmp227 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748215, &$s226);
                    if ($tmp227.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk178, &$s228);
                    }
                    }
                    else {
                    panda$core$Bit $tmp230 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748215, &$s229);
                    if ($tmp230.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk178, &$s231);
                    }
                    }
                    else {
                    panda$core$Bit $tmp233 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748215, &$s232);
                    if ($tmp233.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(chunk178, &$s234);
                    }
                    }
                    else {
                    panda$core$Bit $tmp236 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$5748215, &$s235);
                    if ($tmp236.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp239 = (($fn238) self->$class->vtable[30])(self);
                            expr237 = $tmp239;
                            if (((panda$core$Bit) { expr237 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp242 = (($fn241) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s240);
                            if (((panda$core$Bit) { !$tmp242.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$ASTNode* $tmp243 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                            $tmp243->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                            $tmp243->refCount.value = 1;
                            panda$core$String* $tmp245 = panda$core$MutableString$convert$R$panda$core$String(chunk178);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp243, ((panda$core$Int64) { 113 }), start162.offset, $tmp245);
                            org$pandalanguage$pandac$ASTNode* $tmp247 = (($fn246) self->$class->vtable[15])(self, result177, $tmp243);
                            result177 = $tmp247;
                            panda$core$MutableString$clear(chunk178);
                            org$pandalanguage$pandac$ASTNode* $tmp249 = (($fn248) self->$class->vtable[15])(self, result177, expr237);
                            result177 = $tmp249;
                        }
                    }
                    }
                    else {
                    {
                        (($fn251) self->$class->vtable[9])(self, token183, &$s250);
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
                panda$core$String$Index $tmp253 = panda$core$String$start$R$panda$core$String$Index(escapeText206);
                panda$core$String$Index $tmp254 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText206, $tmp253);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp252, ((panda$core$String$Index$nullable) { $tmp254, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp255 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText206, $tmp252);
                panda$core$MutableString$append$panda$core$String(chunk178, $tmp255);
            }
            }
            else {
            {
                panda$core$String* $tmp257 = (($fn256) self->$class->vtable[14])(self, token183);
                panda$core$MutableString$append$panda$core$String(chunk178, $tmp257);
            }
            }
            }
            }
        }
    }
    }
    $l182:;
    org$pandalanguage$pandac$ASTNode* $tmp258 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp258->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp258->refCount.value = 1;
    panda$core$String* $tmp260 = panda$core$MutableString$convert$R$panda$core$String(chunk178);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp258, ((panda$core$Int64) { 113 }), start162.offset, $tmp260);
    org$pandalanguage$pandac$ASTNode* $tmp262 = (($fn261) self->$class->vtable[15])(self, result177, $tmp258);
    return $tmp262;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result263;
    panda$collections$Iterator* c$Iter264;
    panda$core$Char8 c277;
    panda$core$UInt64 i283;
    result263 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp265 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp266 = ((panda$collections$Iterable*) $tmp265)->$class->itable;
        while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp266 = $tmp266->next;
        }
        $fn268 $tmp267 = $tmp266->methods[0];
        panda$collections$Iterator* $tmp269 = $tmp267(((panda$collections$Iterable*) $tmp265));
        c$Iter264 = $tmp269;
        $l270:;
        ITable* $tmp272 = c$Iter264->$class->itable;
        while ($tmp272->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp272 = $tmp272->next;
        }
        $fn274 $tmp273 = $tmp272->methods[0];
        panda$core$Bit $tmp275 = $tmp273(c$Iter264);
        panda$core$Bit $tmp276 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp275);
        if (!$tmp276.value) goto $l271;
        {
            ITable* $tmp278 = c$Iter264->$class->itable;
            while ($tmp278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp278 = $tmp278->next;
            }
            $fn280 $tmp279 = $tmp278->methods[1];
            panda$core$Object* $tmp281 = $tmp279(c$Iter264);
            c277 = ((panda$core$Char8$wrapper*) $tmp281)->value;
            panda$core$UInt64 $tmp282 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result263, p_base);
            result263 = $tmp282;
            panda$core$UInt64 $tmp284 = panda$core$Char8$convert$R$panda$core$UInt64(c277);
            i283 = $tmp284;
            panda$core$Bit $tmp286 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i283, ((panda$core$UInt64) { 48 }));
            bool $tmp285 = $tmp286.value;
            if (!$tmp285) goto $l287;
            panda$core$Bit $tmp288 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i283, ((panda$core$UInt64) { 57 }));
            $tmp285 = $tmp288.value;
            $l287:;
            panda$core$Bit $tmp289 = { $tmp285 };
            if ($tmp289.value) {
            {
                panda$core$UInt64 $tmp290 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i283, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp291 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result263, $tmp290);
                result263 = $tmp291;
            }
            }
            else {
            panda$core$Bit $tmp293 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i283, ((panda$core$UInt64) { 65 }));
            bool $tmp292 = $tmp293.value;
            if (!$tmp292) goto $l294;
            panda$core$Bit $tmp295 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i283, ((panda$core$UInt64) { 70 }));
            $tmp292 = $tmp295.value;
            $l294:;
            panda$core$Bit $tmp296 = { $tmp292 };
            if ($tmp296.value) {
            {
                panda$core$UInt64 $tmp297 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i283, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp298 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result263, $tmp297);
                result263 = $tmp298;
            }
            }
            else {
            {
                panda$core$UInt64 $tmp299 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i283, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp300 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result263, $tmp299);
                result263 = $tmp300;
            }
            }
            }
        }
        goto $l270;
        $l271:;
    }
    return result263;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t301;
    panda$core$Int64 $match$8156304;
    panda$core$String* s317;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp322;
    panda$core$String* s327;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp332;
    org$pandalanguage$pandac$ASTNode* result360;
    org$pandalanguage$pandac$parser$Token $tmp303 = (($fn302) self->$class->vtable[4])(self);
    t301 = $tmp303;
    {
        $match$8156304 = t301.kind;
        panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 48 }));
        if ($tmp305.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp306 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp306->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp306->refCount.value = 1;
            panda$core$String* $tmp309 = (($fn308) self->$class->vtable[14])(self, t301);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp306, ((panda$core$Int64) { 106 }), t301.offset, $tmp309);
            return $tmp306;
        }
        }
        else {
        panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 2 }));
        if ($tmp310.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp311 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp311->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp311->refCount.value = 1;
            panda$core$String* $tmp314 = (($fn313) self->$class->vtable[14])(self, t301);
            panda$core$UInt64$nullable $tmp315 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp314);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp311, ((panda$core$Int64) { 102 }), t301.offset, ((panda$core$UInt64) $tmp315.value));
            return $tmp311;
        }
        }
        else {
        panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 3 }));
        if ($tmp316.value) {
        {
            panda$core$String* $tmp319 = (($fn318) self->$class->vtable[14])(self, t301);
            s317 = $tmp319;
            org$pandalanguage$pandac$ASTNode* $tmp320 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp320->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp320->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp322, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp323 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s317, $tmp322);
            panda$core$UInt64 $tmp325 = (($fn324) self->$class->vtable[17])(self, $tmp323, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp320, ((panda$core$Int64) { 102 }), t301.offset, $tmp325);
            return $tmp320;
        }
        }
        else {
        panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 4 }));
        if ($tmp326.value) {
        {
            panda$core$String* $tmp329 = (($fn328) self->$class->vtable[14])(self, t301);
            s327 = $tmp329;
            org$pandalanguage$pandac$ASTNode* $tmp330 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp330->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp330->refCount.value = 1;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp332, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp333 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(s327, $tmp332);
            panda$core$UInt64 $tmp335 = (($fn334) self->$class->vtable[17])(self, $tmp333, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64($tmp330, ((panda$core$Int64) { 102 }), t301.offset, $tmp335);
            return $tmp330;
        }
        }
        else {
        panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 46 }));
        if ($tmp336.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp337 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp337->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp337->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp337, ((panda$core$Int64) { 114 }), t301.offset);
            return $tmp337;
        }
        }
        else {
        panda$core$Bit $tmp339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 47 }));
        if ($tmp339.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp340 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp340->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp340->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp340, ((panda$core$Int64) { 115 }), t301.offset);
            return $tmp340;
        }
        }
        else {
        panda$core$Bit $tmp342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 43 }));
        if ($tmp342.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp343 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp343->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp343->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp343, ((panda$core$Int64) { 117 }), t301.offset);
            return $tmp343;
        }
        }
        else {
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 41 }));
        if ($tmp345.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp346 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp346->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp346->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp346, ((panda$core$Int64) { 116 }), t301.offset, ((panda$core$Bit) { true }));
            return $tmp346;
        }
        }
        else {
        panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 42 }));
        if ($tmp348.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp349 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp349->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp349->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp349, ((panda$core$Int64) { 116 }), t301.offset, ((panda$core$Bit) { false }));
            return $tmp349;
        }
        }
        else {
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 7 }));
        bool $tmp351 = $tmp352.value;
        if ($tmp351) goto $l353;
        panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 6 }));
        $tmp351 = $tmp354.value;
        $l353:;
        panda$core$Bit $tmp355 = { $tmp351 };
        if ($tmp355.value) {
        {
            (($fn356) self->$class->vtable[5])(self, t301);
            org$pandalanguage$pandac$ASTNode* $tmp358 = (($fn357) self->$class->vtable[16])(self);
            return $tmp358;
        }
        }
        else {
        panda$core$Bit $tmp359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$8156304, ((panda$core$Int64) { 103 }));
        if ($tmp359.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp362 = (($fn361) self->$class->vtable[30])(self);
            result360 = $tmp362;
            if (((panda$core$Bit) { result360 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp365 = (($fn364) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s363);
            if (((panda$core$Bit) { !$tmp365.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result360;
        }
        }
        else {
        {
            panda$core$String* $tmp368 = (($fn367) self->$class->vtable[14])(self, t301);
            panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s366, $tmp368);
            panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp369, &$s370);
            (($fn372) self->$class->vtable[9])(self, t301, $tmp371);
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
    panda$core$Int64 $match$9882373;
    panda$core$String* result376;
    {
        $match$9882373 = p_expr->kind;
        panda$core$Bit $tmp374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$9882373, ((panda$core$Int64) { 106 }));
        if ($tmp374.value) {
        {
            return ((panda$core$String*) p_expr->payload);
        }
        }
        else {
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$9882373, ((panda$core$Int64) { 108 }));
        if ($tmp375.value) {
        {
            panda$core$Object* $tmp377 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp378 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp377));
            result376 = $tmp378;
            if (((panda$core$Bit) { result376 != NULL }).value) {
            {
                panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s379, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result376, $tmp380);
                result376 = $tmp381;
            }
            }
            return result376;
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
    org$pandalanguage$pandac$parser$Token name382;
    panda$core$Int64 $match$10821385;
    org$pandalanguage$pandac$parser$Token token474;
    org$pandalanguage$pandac$parser$Token $tmp384 = (($fn383) self->$class->vtable[4])(self);
    name382 = $tmp384;
    {
        $match$10821385 = name382.kind;
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 48 }));
        bool $tmp406 = $tmp407.value;
        if ($tmp406) goto $l408;
        panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 51 }));
        $tmp406 = $tmp409.value;
        $l408:;
        panda$core$Bit $tmp410 = { $tmp406 };
        bool $tmp405 = $tmp410.value;
        if ($tmp405) goto $l411;
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 52 }));
        $tmp405 = $tmp412.value;
        $l411:;
        panda$core$Bit $tmp413 = { $tmp405 };
        bool $tmp404 = $tmp413.value;
        if ($tmp404) goto $l414;
        panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 53 }));
        $tmp404 = $tmp415.value;
        $l414:;
        panda$core$Bit $tmp416 = { $tmp404 };
        bool $tmp403 = $tmp416.value;
        if ($tmp403) goto $l417;
        panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 54 }));
        $tmp403 = $tmp418.value;
        $l417:;
        panda$core$Bit $tmp419 = { $tmp403 };
        bool $tmp402 = $tmp419.value;
        if ($tmp402) goto $l420;
        panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 55 }));
        $tmp402 = $tmp421.value;
        $l420:;
        panda$core$Bit $tmp422 = { $tmp402 };
        bool $tmp401 = $tmp422.value;
        if ($tmp401) goto $l423;
        panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 57 }));
        $tmp401 = $tmp424.value;
        $l423:;
        panda$core$Bit $tmp425 = { $tmp401 };
        bool $tmp400 = $tmp425.value;
        if ($tmp400) goto $l426;
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 58 }));
        $tmp400 = $tmp427.value;
        $l426:;
        panda$core$Bit $tmp428 = { $tmp400 };
        bool $tmp399 = $tmp428.value;
        if ($tmp399) goto $l429;
        panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 59 }));
        $tmp399 = $tmp430.value;
        $l429:;
        panda$core$Bit $tmp431 = { $tmp399 };
        bool $tmp398 = $tmp431.value;
        if ($tmp398) goto $l432;
        panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 62 }));
        $tmp398 = $tmp433.value;
        $l432:;
        panda$core$Bit $tmp434 = { $tmp398 };
        bool $tmp397 = $tmp434.value;
        if ($tmp397) goto $l435;
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 65 }));
        $tmp397 = $tmp436.value;
        $l435:;
        panda$core$Bit $tmp437 = { $tmp397 };
        bool $tmp396 = $tmp437.value;
        if ($tmp396) goto $l438;
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 64 }));
        $tmp396 = $tmp439.value;
        $l438:;
        panda$core$Bit $tmp440 = { $tmp396 };
        bool $tmp395 = $tmp440.value;
        if ($tmp395) goto $l441;
        panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 56 }));
        $tmp395 = $tmp442.value;
        $l441:;
        panda$core$Bit $tmp443 = { $tmp395 };
        bool $tmp394 = $tmp443.value;
        if ($tmp394) goto $l444;
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 66 }));
        $tmp394 = $tmp445.value;
        $l444:;
        panda$core$Bit $tmp446 = { $tmp394 };
        bool $tmp393 = $tmp446.value;
        if ($tmp393) goto $l447;
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 67 }));
        $tmp393 = $tmp448.value;
        $l447:;
        panda$core$Bit $tmp449 = { $tmp393 };
        bool $tmp392 = $tmp449.value;
        if ($tmp392) goto $l450;
        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 68 }));
        $tmp392 = $tmp451.value;
        $l450:;
        panda$core$Bit $tmp452 = { $tmp392 };
        bool $tmp391 = $tmp452.value;
        if ($tmp391) goto $l453;
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 69 }));
        $tmp391 = $tmp454.value;
        $l453:;
        panda$core$Bit $tmp455 = { $tmp391 };
        bool $tmp390 = $tmp455.value;
        if ($tmp390) goto $l456;
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 70 }));
        $tmp390 = $tmp457.value;
        $l456:;
        panda$core$Bit $tmp458 = { $tmp390 };
        bool $tmp389 = $tmp458.value;
        if ($tmp389) goto $l459;
        panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 71 }));
        $tmp389 = $tmp460.value;
        $l459:;
        panda$core$Bit $tmp461 = { $tmp389 };
        bool $tmp388 = $tmp461.value;
        if ($tmp388) goto $l462;
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 49 }));
        $tmp388 = $tmp463.value;
        $l462:;
        panda$core$Bit $tmp464 = { $tmp388 };
        bool $tmp387 = $tmp464.value;
        if ($tmp387) goto $l465;
        panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 50 }));
        $tmp387 = $tmp466.value;
        $l465:;
        panda$core$Bit $tmp467 = { $tmp387 };
        bool $tmp386 = $tmp467.value;
        if ($tmp386) goto $l468;
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 72 }));
        $tmp386 = $tmp469.value;
        $l468:;
        panda$core$Bit $tmp470 = { $tmp386 };
        if ($tmp470.value) {
        {
            panda$core$String* $tmp472 = (($fn471) self->$class->vtable[14])(self, name382);
            return $tmp472;
        }
        }
        else {
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 63 }));
        if ($tmp473.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp476 = (($fn475) self->$class->vtable[3])(self);
            token474 = $tmp476;
            panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token474.kind, ((panda$core$Int64) { 63 }));
            if ($tmp477.value) {
            {
                return &$s478;
            }
            }
            else {
            {
                (($fn479) self->$class->vtable[5])(self, token474);
                return &$s480;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10821385, ((panda$core$Int64) { 101 }));
        if ($tmp481.value) {
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp484 = (($fn483) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s482);
            if (((panda$core$Bit) { !$tmp484.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp486 = (($fn485) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp486.nonnull }).value) {
            {
                return &$s487;
            }
            }
            return &$s488;
        }
        }
        else {
        {
            panda$core$String* $tmp491 = (($fn490) self->$class->vtable[14])(self, name382);
            panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s489, $tmp491);
            panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp492, &$s493);
            (($fn495) self->$class->vtable[9])(self, name382, $tmp494);
            return NULL;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp497 = (($fn496) self->$class->vtable[21])(self, ((panda$core$Bit) { true }));
    return $tmp497;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start498;
    panda$core$MutableString* name502;
    org$pandalanguage$pandac$parser$Token$nullable id511;
    org$pandalanguage$pandac$ASTNode* result518;
    panda$collections$Array* children527;
    org$pandalanguage$pandac$ASTNode* t530;
    panda$collections$Array* children551;
    org$pandalanguage$pandac$parser$Token$nullable $tmp501 = (($fn500) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s499);
    start498 = $tmp501;
    if (((panda$core$Bit) { !start498.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp503 = (panda$core$MutableString*) malloc(40);
    $tmp503->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp503->refCount.value = 1;
    panda$core$String* $tmp506 = (($fn505) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start498.value));
    panda$core$MutableString$init$panda$core$String($tmp503, $tmp506);
    name502 = $tmp503;
    $l507:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp510 = (($fn509) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp510.nonnull }).value) goto $l508;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp514 = (($fn513) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s512);
        id511 = $tmp514;
        if (((panda$core$Bit) { !id511.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$MutableString$append$panda$core$String(name502, &$s515);
        panda$core$String* $tmp517 = (($fn516) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id511.value));
        panda$core$MutableString$append$panda$core$String(name502, $tmp517);
    }
    goto $l507;
    $l508:;
    org$pandalanguage$pandac$ASTNode* $tmp519 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp519->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp519->refCount.value = 1;
    panda$core$String* $tmp521 = panda$core$MutableString$convert$R$panda$core$String(name502);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp519, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start498.value).offset, $tmp521);
    result518 = $tmp519;
    org$pandalanguage$pandac$parser$Token $tmp523 = (($fn522) self->$class->vtable[6])(self);
    panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp523.kind, ((panda$core$Int64) { 62 }));
    if ($tmp524.value) {
    {
        if (p_needSpeculativeParse.value) {
        {
            (($fn525) self->$class->vtable[10])(self);
        }
        }
        (($fn526) self->$class->vtable[4])(self);
        panda$collections$Array* $tmp528 = (panda$collections$Array*) malloc(40);
        $tmp528->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp528->refCount.value = 1;
        panda$collections$Array$init($tmp528);
        children527 = $tmp528;
        panda$collections$Array$add$panda$collections$Array$T(children527, ((panda$core$Object*) result518));
        org$pandalanguage$pandac$ASTNode* $tmp532 = (($fn531) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
        t530 = $tmp532;
        if (((panda$core$Bit) { t530 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn533) self->$class->vtable[12])(self);
                return result518;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children527, ((panda$core$Object*) t530));
        $l534:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp537 = (($fn536) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp537.nonnull }).value) goto $l535;
        {
            org$pandalanguage$pandac$ASTNode* $tmp539 = (($fn538) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
            t530 = $tmp539;
            if (((panda$core$Bit) { t530 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    (($fn540) self->$class->vtable[12])(self);
                    return result518;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children527, ((panda$core$Object*) t530));
        }
        goto $l534;
        $l535:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp543 = (($fn542) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s541);
        if (((panda$core$Bit) { !$tmp543.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                (($fn544) self->$class->vtable[12])(self);
                return result518;
            }
            }
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp545 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp545->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp545->refCount.value = 1;
        panda$core$String* $tmp547 = panda$core$MutableString$convert$R$panda$core$String(name502);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp545, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start498.value).offset, ((panda$core$Object*) $tmp547), ((panda$collections$ListView*) children527));
        result518 = $tmp545;
        (($fn548) self->$class->vtable[11])(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp550 = (($fn549) self->$class->vtable[7])(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp550.nonnull }).value) {
    {
        panda$collections$Array* $tmp552 = (panda$collections$Array*) malloc(40);
        $tmp552->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp552->refCount.value = 1;
        panda$collections$Array$init($tmp552);
        children551 = $tmp552;
        panda$collections$Array$add$panda$collections$Array$T(children551, ((panda$core$Object*) result518));
        org$pandalanguage$pandac$ASTNode* $tmp554 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp554->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp554->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp554, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start498.value).offset, ((panda$collections$ListView*) children551));
        result518 = $tmp554;
    }
    }
    return result518;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result556;
    org$pandalanguage$pandac$parser$Token token561;
    panda$core$Int64 $match$15754564;
    panda$collections$Array* children566;
    org$pandalanguage$pandac$ASTNode* expr571;
    panda$collections$Array* children586;
    org$pandalanguage$pandac$ASTNode* expr589;
    panda$core$String* name598;
    panda$collections$Array* children604;
    org$pandalanguage$pandac$ASTNode* target610;
    panda$collections$Array* children613;
    panda$core$String* name620;
    panda$core$MutableString* finalName622;
    panda$collections$Array* types628;
    org$pandalanguage$pandac$ASTNode* t633;
    panda$core$Bit shouldAccept650;
    panda$core$Int64 $match$22111652;
    org$pandalanguage$pandac$ASTNode* $tmp558 = (($fn557) self->$class->vtable[18])(self);
    result556 = $tmp558;
    if (((panda$core$Bit) { result556 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l559:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp563 = (($fn562) self->$class->vtable[4])(self);
        token561 = $tmp563;
        {
            $match$15754564 = token561.kind;
            panda$core$Bit $tmp565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15754564, ((panda$core$Int64) { 103 }));
            if ($tmp565.value) {
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp567 = (panda$collections$Array*) malloc(40);
                $tmp567->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp567->refCount.value = 1;
                panda$collections$Array$init($tmp567);
                children566 = $tmp567;
                panda$collections$Array$add$panda$collections$Array$T(children566, ((panda$core$Object*) result556));
                org$pandalanguage$pandac$parser$Token$nullable $tmp570 = (($fn569) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp570.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp573 = (($fn572) self->$class->vtable[30])(self);
                    expr571 = $tmp573;
                    if (((panda$core$Bit) { expr571 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children566, ((panda$core$Object*) expr571));
                    $l574:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp577 = (($fn576) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp577.nonnull }).value) goto $l575;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp579 = (($fn578) self->$class->vtable[30])(self);
                        expr571 = $tmp579;
                        if (((panda$core$Bit) { expr571 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children566, ((panda$core$Object*) expr571));
                    }
                    goto $l574;
                    $l575:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp582 = (($fn581) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s580);
                    if (((panda$core$Bit) { !$tmp582.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp583 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp583->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp583->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp583, ((panda$core$Int64) { 107 }), token561.offset, ((panda$collections$ListView*) children566));
                result556 = $tmp583;
            }
            }
            else {
            panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15754564, ((panda$core$Int64) { 101 }));
            if ($tmp585.value) {
            {
                panda$collections$Array* $tmp587 = (panda$collections$Array*) malloc(40);
                $tmp587->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp587->refCount.value = 1;
                panda$collections$Array$init($tmp587);
                children586 = $tmp587;
                panda$collections$Array$add$panda$collections$Array$T(children586, ((panda$core$Object*) result556));
                org$pandalanguage$pandac$ASTNode* $tmp591 = (($fn590) self->$class->vtable[30])(self);
                expr589 = $tmp591;
                if (((panda$core$Bit) { expr589 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children586, ((panda$core$Object*) expr589));
                org$pandalanguage$pandac$parser$Token$nullable $tmp594 = (($fn593) self->$class->vtable[8])(self, ((panda$core$Int64) { 102 }), &$s592);
                if (((panda$core$Bit) { !$tmp594.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp595 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp595->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp595->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp595, ((panda$core$Int64) { 103 }), token561.offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children586));
                result556 = $tmp595;
            }
            }
            else {
            panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15754564, ((panda$core$Int64) { 98 }));
            if ($tmp597.value) {
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp600 = (($fn599) self->$class->vtable[7])(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp600.nonnull }).value) {
                {
                    name598 = &$s601;
                }
                }
                else {
                {
                    panda$core$String* $tmp603 = (($fn602) self->$class->vtable[19])(self);
                    name598 = $tmp603;
                    if (((panda$core$Bit) { name598 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp605 = (panda$collections$Array*) malloc(40);
                $tmp605->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp605->refCount.value = 1;
                panda$collections$Array$init($tmp605);
                children604 = $tmp605;
                panda$collections$Array$add$panda$collections$Array$T(children604, ((panda$core$Object*) result556));
                org$pandalanguage$pandac$ASTNode* $tmp607 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp607->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp607->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp607, ((panda$core$Int64) { 108 }), token561.offset, ((panda$core$Object*) name598), ((panda$collections$ListView*) children604));
                result556 = $tmp607;
            }
            }
            else {
            panda$core$Bit $tmp609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15754564, ((panda$core$Int64) { 89 }));
            if ($tmp609.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp612 = (($fn611) self->$class->vtable[20])(self);
                target610 = $tmp612;
                if (((panda$core$Bit) { target610 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp614 = (panda$collections$Array*) malloc(40);
                $tmp614->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp614->refCount.value = 1;
                panda$collections$Array$init($tmp614);
                children613 = $tmp614;
                panda$collections$Array$add$panda$collections$Array$T(children613, ((panda$core$Object*) result556));
                panda$collections$Array$add$panda$collections$Array$T(children613, ((panda$core$Object*) target610));
                org$pandalanguage$pandac$ASTNode* $tmp616 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp616->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp616->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp616, ((panda$core$Int64) { 111 }), token561.offset, ((panda$collections$ListView*) children613));
                result556 = $tmp616;
            }
            }
            else {
            panda$core$Bit $tmp618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15754564, ((panda$core$Int64) { 62 }));
            if ($tmp618.value) {
            {
                (($fn619) self->$class->vtable[5])(self, token561);
                panda$core$String* $tmp621 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result556);
                name620 = $tmp621;
                if (((panda$core$Bit) { name620 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp623 = (panda$core$MutableString*) malloc(40);
                    $tmp623->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp623->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp623, name620);
                    finalName622 = $tmp623;
                    panda$core$MutableString$append$panda$core$String(finalName622, &$s625);
                    (($fn626) self->$class->vtable[10])(self);
                    (($fn627) self->$class->vtable[4])(self);
                    panda$collections$Array* $tmp629 = (panda$collections$Array*) malloc(40);
                    $tmp629->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp629->refCount.value = 1;
                    panda$collections$Array$init($tmp629);
                    types628 = $tmp629;
                    org$pandalanguage$pandac$ASTNode* $tmp631 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                    $tmp631->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp631->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp631, ((panda$core$Int64) { 109 }), result556->offset, name620);
                    panda$collections$Array$add$panda$collections$Array$T(types628, ((panda$core$Object*) $tmp631));
                    org$pandalanguage$pandac$ASTNode* $tmp635 = (($fn634) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                    t633 = $tmp635;
                    if (((panda$core$Bit) { t633 == NULL }).value) {
                    {
                        (($fn636) self->$class->vtable[12])(self);
                        return result556;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types628, ((panda$core$Object*) t633));
                    panda$core$MutableString$append$panda$core$Object(finalName622, ((panda$core$Object*) t633));
                    $l637:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp640 = (($fn639) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp640.nonnull }).value) goto $l638;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp642 = (($fn641) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
                        t633 = $tmp642;
                        if (((panda$core$Bit) { t633 == NULL }).value) {
                        {
                            (($fn643) self->$class->vtable[12])(self);
                            return result556;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types628, ((panda$core$Object*) t633));
                        panda$core$MutableString$append$panda$core$String(finalName622, &$s644);
                        panda$core$MutableString$append$panda$core$Object(finalName622, ((panda$core$Object*) t633));
                    }
                    goto $l637;
                    $l638:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp647 = (($fn646) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s645);
                    if (((panda$core$Bit) { !$tmp647.nonnull }).value) {
                    {
                        (($fn648) self->$class->vtable[12])(self);
                        return result556;
                    }
                    }
                    panda$core$MutableString$append$panda$core$String(finalName622, &$s649);
                    panda$core$Object* $tmp651 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp651)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp654 = (($fn653) self->$class->vtable[6])(self);
                            $match$22111652 = $tmp654.kind;
                            panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22111652, ((panda$core$Int64) { 98 }));
                            bool $tmp657 = $tmp658.value;
                            if ($tmp657) goto $l659;
                            panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22111652, ((panda$core$Int64) { 103 }));
                            $tmp657 = $tmp660.value;
                            $l659:;
                            panda$core$Bit $tmp661 = { $tmp657 };
                            bool $tmp656 = $tmp661.value;
                            if ($tmp656) goto $l662;
                            panda$core$Bit $tmp663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22111652, ((panda$core$Int64) { 105 }));
                            $tmp656 = $tmp663.value;
                            $l662:;
                            panda$core$Bit $tmp664 = { $tmp656 };
                            bool $tmp655 = $tmp664.value;
                            if ($tmp655) goto $l665;
                            panda$core$Bit $tmp666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$22111652, ((panda$core$Int64) { 89 }));
                            $tmp655 = $tmp666.value;
                            $l665:;
                            panda$core$Bit $tmp667 = { $tmp655 };
                            if ($tmp667.value) {
                            {
                                shouldAccept650 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept650 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept650 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept650.value) {
                    {
                        (($fn668) self->$class->vtable[11])(self);
                        org$pandalanguage$pandac$ASTNode* $tmp669 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                        $tmp669->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp669->refCount.value = 1;
                        panda$core$String* $tmp671 = panda$core$MutableString$convert$R$panda$core$String(finalName622);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp669, ((panda$core$Int64) { 154 }), result556->offset, ((panda$core$Object*) $tmp671), ((panda$collections$ListView*) types628));
                        result556 = $tmp669;
                        goto $l559;
                    }
                    }
                    else {
                    {
                        (($fn672) self->$class->vtable[12])(self);
                        return result556;
                    }
                    }
                }
                }
                return result556;
            }
            }
            else {
            {
                (($fn673) self->$class->vtable[5])(self, token561);
                return result556;
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l560:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result674;
    org$pandalanguage$pandac$parser$Token$nullable op679;
    org$pandalanguage$pandac$ASTNode* next682;
    panda$collections$Array* children685;
    org$pandalanguage$pandac$ASTNode* $tmp676 = (($fn675) self->$class->vtable[22])(self);
    result674 = $tmp676;
    if (((panda$core$Bit) { result674 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l677:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp681 = (($fn680) self->$class->vtable[7])(self, ((panda$core$Int64) { 57 }));
        op679 = $tmp681;
        if (((panda$core$Bit) { !op679.nonnull }).value) {
        {
            goto $l678;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp684 = (($fn683) self->$class->vtable[22])(self);
        next682 = $tmp684;
        if (((panda$core$Bit) { next682 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp686 = (panda$collections$Array*) malloc(40);
        $tmp686->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp686->refCount.value = 1;
        panda$collections$Array$init($tmp686);
        children685 = $tmp686;
        panda$collections$Array$add$panda$collections$Array$T(children685, ((panda$core$Object*) result674));
        panda$collections$Array$add$panda$collections$Array$T(children685, ((panda$core$Object*) next682));
        org$pandalanguage$pandac$ASTNode* $tmp688 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp688->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp688->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp688, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op679.value).offset, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op679.value).kind)), ((panda$collections$ListView*) children685));
        result674 = $tmp688;
    }
    }
    $l678:;
    return result674;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op690;
    panda$core$Int64 $match$24464693;
    org$pandalanguage$pandac$ASTNode* base703;
    panda$collections$Array* children706;
    org$pandalanguage$pandac$parser$Token $tmp692 = (($fn691) self->$class->vtable[4])(self);
    op690 = $tmp692;
    {
        $match$24464693 = op690.kind;
        panda$core$Bit $tmp696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$24464693, ((panda$core$Int64) { 52 }));
        bool $tmp695 = $tmp696.value;
        if ($tmp695) goto $l697;
        panda$core$Bit $tmp698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$24464693, ((panda$core$Int64) { 49 }));
        $tmp695 = $tmp698.value;
        $l697:;
        panda$core$Bit $tmp699 = { $tmp695 };
        bool $tmp694 = $tmp699.value;
        if ($tmp694) goto $l700;
        panda$core$Bit $tmp701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$24464693, ((panda$core$Int64) { 50 }));
        $tmp694 = $tmp701.value;
        $l700:;
        panda$core$Bit $tmp702 = { $tmp694 };
        if ($tmp702.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp705 = (($fn704) self->$class->vtable[23])(self);
            base703 = $tmp705;
            if (((panda$core$Bit) { base703 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp707 = (panda$collections$Array*) malloc(40);
            $tmp707->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp707->refCount.value = 1;
            panda$collections$Array$init($tmp707);
            children706 = $tmp707;
            panda$collections$Array$add$panda$collections$Array$T(children706, ((panda$core$Object*) base703));
            org$pandalanguage$pandac$ASTNode* $tmp709 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp709->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp709->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp709, ((panda$core$Int64) { 112 }), op690.offset, ((panda$core$Object*) wrap_panda$core$Int64(op690.kind)), ((panda$collections$ListView*) children706));
            return $tmp709;
        }
        }
        else {
        {
            (($fn711) self->$class->vtable[5])(self, op690);
            org$pandalanguage$pandac$ASTNode* $tmp713 = (($fn712) self->$class->vtable[23])(self);
            return $tmp713;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result714;
    org$pandalanguage$pandac$parser$Token op719;
    panda$core$Int64 $match$25656722;
    org$pandalanguage$pandac$ASTNode* next748;
    panda$collections$Array* children751;
    org$pandalanguage$pandac$parser$Token nextToken757;
    org$pandalanguage$pandac$ASTNode* next761;
    panda$collections$Array* children764;
    org$pandalanguage$pandac$ASTNode* $tmp716 = (($fn715) self->$class->vtable[24])(self);
    result714 = $tmp716;
    if (((panda$core$Bit) { result714 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l717:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp721 = (($fn720) self->$class->vtable[4])(self);
        op719 = $tmp721;
        {
            $match$25656722 = op719.kind;
            panda$core$Bit $tmp729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656722, ((panda$core$Int64) { 53 }));
            bool $tmp728 = $tmp729.value;
            if ($tmp728) goto $l730;
            panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656722, ((panda$core$Int64) { 54 }));
            $tmp728 = $tmp731.value;
            $l730:;
            panda$core$Bit $tmp732 = { $tmp728 };
            bool $tmp727 = $tmp732.value;
            if ($tmp727) goto $l733;
            panda$core$Bit $tmp734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656722, ((panda$core$Int64) { 55 }));
            $tmp727 = $tmp734.value;
            $l733:;
            panda$core$Bit $tmp735 = { $tmp727 };
            bool $tmp726 = $tmp735.value;
            if ($tmp726) goto $l736;
            panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656722, ((panda$core$Int64) { 56 }));
            $tmp726 = $tmp737.value;
            $l736:;
            panda$core$Bit $tmp738 = { $tmp726 };
            bool $tmp725 = $tmp738.value;
            if ($tmp725) goto $l739;
            panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656722, ((panda$core$Int64) { 72 }));
            $tmp725 = $tmp740.value;
            $l739:;
            panda$core$Bit $tmp741 = { $tmp725 };
            bool $tmp724 = $tmp741.value;
            if ($tmp724) goto $l742;
            panda$core$Bit $tmp743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656722, ((panda$core$Int64) { 67 }));
            $tmp724 = $tmp743.value;
            $l742:;
            panda$core$Bit $tmp744 = { $tmp724 };
            bool $tmp723 = $tmp744.value;
            if ($tmp723) goto $l745;
            panda$core$Bit $tmp746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656722, ((panda$core$Int64) { 69 }));
            $tmp723 = $tmp746.value;
            $l745:;
            panda$core$Bit $tmp747 = { $tmp723 };
            if ($tmp747.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp750 = (($fn749) self->$class->vtable[24])(self);
                next748 = $tmp750;
                if (((panda$core$Bit) { next748 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp752 = (panda$collections$Array*) malloc(40);
                $tmp752->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp752->refCount.value = 1;
                panda$collections$Array$init($tmp752);
                children751 = $tmp752;
                panda$collections$Array$add$panda$collections$Array$T(children751, ((panda$core$Object*) result714));
                panda$collections$Array$add$panda$collections$Array$T(children751, ((panda$core$Object*) next748));
                org$pandalanguage$pandac$ASTNode* $tmp754 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp754->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp754->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp754, ((panda$core$Int64) { 103 }), op719.offset, ((panda$core$Object*) wrap_panda$core$Int64(op719.kind)), ((panda$collections$ListView*) children751));
                result714 = $tmp754;
            }
            }
            else {
            panda$core$Bit $tmp756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$25656722, ((panda$core$Int64) { 63 }));
            if ($tmp756.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp759 = (($fn758) self->$class->vtable[3])(self);
                nextToken757 = $tmp759;
                panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken757.kind, ((panda$core$Int64) { 63 }));
                if ($tmp760.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp763 = (($fn762) self->$class->vtable[24])(self);
                    next761 = $tmp763;
                    if (((panda$core$Bit) { next761 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp765 = (panda$collections$Array*) malloc(40);
                    $tmp765->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp765->refCount.value = 1;
                    panda$collections$Array$init($tmp765);
                    children764 = $tmp765;
                    panda$collections$Array$add$panda$collections$Array$T(children764, ((panda$core$Object*) result714));
                    panda$collections$Array$add$panda$collections$Array$T(children764, ((panda$core$Object*) next761));
                    org$pandalanguage$pandac$ASTNode* $tmp767 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                    $tmp767->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp767->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp767, ((panda$core$Int64) { 103 }), op719.offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children764));
                    result714 = $tmp767;
                }
                }
                else {
                {
                    (($fn769) self->$class->vtable[5])(self, nextToken757);
                    (($fn770) self->$class->vtable[5])(self, op719);
                    return result714;
                }
                }
            }
            }
            else {
            {
                (($fn771) self->$class->vtable[5])(self, op719);
                return result714;
            }
            }
            }
        }
    }
    }
    $l718:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result772;
    org$pandalanguage$pandac$parser$Token op777;
    panda$core$Int64 $match$27743780;
    org$pandalanguage$pandac$ASTNode* next790;
    panda$collections$Array* children793;
    org$pandalanguage$pandac$ASTNode* $tmp774 = (($fn773) self->$class->vtable[25])(self);
    result772 = $tmp774;
    if (((panda$core$Bit) { result772 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l775:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp779 = (($fn778) self->$class->vtable[4])(self);
        op777 = $tmp779;
        {
            $match$27743780 = op777.kind;
            panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27743780, ((panda$core$Int64) { 51 }));
            bool $tmp782 = $tmp783.value;
            if ($tmp782) goto $l784;
            panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27743780, ((panda$core$Int64) { 52 }));
            $tmp782 = $tmp785.value;
            $l784:;
            panda$core$Bit $tmp786 = { $tmp782 };
            bool $tmp781 = $tmp786.value;
            if ($tmp781) goto $l787;
            panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$27743780, ((panda$core$Int64) { 71 }));
            $tmp781 = $tmp788.value;
            $l787:;
            panda$core$Bit $tmp789 = { $tmp781 };
            if ($tmp789.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp792 = (($fn791) self->$class->vtable[25])(self);
                next790 = $tmp792;
                if (((panda$core$Bit) { next790 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp794 = (panda$collections$Array*) malloc(40);
                $tmp794->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp794->refCount.value = 1;
                panda$collections$Array$init($tmp794);
                children793 = $tmp794;
                panda$collections$Array$add$panda$collections$Array$T(children793, ((panda$core$Object*) result772));
                panda$collections$Array$add$panda$collections$Array$T(children793, ((panda$core$Object*) next790));
                org$pandalanguage$pandac$ASTNode* $tmp796 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp796->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp796->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp796, ((panda$core$Int64) { 103 }), op777.offset, ((panda$core$Object*) wrap_panda$core$Int64(op777.kind)), ((panda$collections$ListView*) children793));
                result772 = $tmp796;
            }
            }
            else {
            {
                (($fn798) self->$class->vtable[5])(self, op777);
                return result772;
            }
            }
        }
    }
    }
    $l776:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result799;
    panda$core$Int64 $match$28776800;
    org$pandalanguage$pandac$parser$Token op812;
    panda$core$Int64 $match$29108815;
    org$pandalanguage$pandac$parser$Token next821;
    org$pandalanguage$pandac$ASTNode* right824;
    org$pandalanguage$pandac$ASTNode* step838;
    panda$collections$Array* children845;
    panda$core$Int64 kind848;
    {
        org$pandalanguage$pandac$parser$Token $tmp802 = (($fn801) self->$class->vtable[6])(self);
        $match$28776800 = $tmp802.kind;
        panda$core$Bit $tmp804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$28776800, ((panda$core$Int64) { 97 }));
        bool $tmp803 = $tmp804.value;
        if ($tmp803) goto $l805;
        panda$core$Bit $tmp806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$28776800, ((panda$core$Int64) { 96 }));
        $tmp803 = $tmp806.value;
        $l805:;
        panda$core$Bit $tmp807 = { $tmp803 };
        if ($tmp807.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp808 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp808->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp808->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp808, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
            result799 = $tmp808;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp811 = (($fn810) self->$class->vtable[26])(self);
            result799 = $tmp811;
            if (((panda$core$Bit) { result799 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp814 = (($fn813) self->$class->vtable[4])(self);
    op812 = $tmp814;
    {
        $match$29108815 = op812.kind;
        panda$core$Bit $tmp817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29108815, ((panda$core$Int64) { 97 }));
        bool $tmp816 = $tmp817.value;
        if ($tmp816) goto $l818;
        panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$29108815, ((panda$core$Int64) { 96 }));
        $tmp816 = $tmp819.value;
        $l818:;
        panda$core$Bit $tmp820 = { $tmp816 };
        if ($tmp820.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp823 = (($fn822) self->$class->vtable[6])(self);
            next821 = $tmp823;
            panda$core$Bit $tmp827 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next821.kind, ((panda$core$Int64) { 102 }));
            bool $tmp826 = $tmp827.value;
            if (!$tmp826) goto $l828;
            panda$core$Bit $tmp829 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next821.kind, ((panda$core$Int64) { 104 }));
            $tmp826 = $tmp829.value;
            $l828:;
            panda$core$Bit $tmp830 = { $tmp826 };
            bool $tmp825 = $tmp830.value;
            if (!$tmp825) goto $l831;
            panda$core$Bit $tmp832 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next821.kind, ((panda$core$Int64) { 33 }));
            $tmp825 = $tmp832.value;
            $l831:;
            panda$core$Bit $tmp833 = { $tmp825 };
            if ($tmp833.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp835 = (($fn834) self->$class->vtable[26])(self);
                right824 = $tmp835;
                if (((panda$core$Bit) { right824 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp836 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp836->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp836->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp836, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
                right824 = $tmp836;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp840 = (($fn839) self->$class->vtable[7])(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp840.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp842 = (($fn841) self->$class->vtable[26])(self);
                step838 = $tmp842;
                if (((panda$core$Bit) { step838 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp843 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp843->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp843->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp843, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
                step838 = $tmp843;
            }
            }
            panda$collections$Array* $tmp846 = (panda$collections$Array*) malloc(40);
            $tmp846->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp846->refCount.value = 1;
            panda$collections$Array$init($tmp846);
            children845 = $tmp846;
            panda$collections$Array$add$panda$collections$Array$T(children845, ((panda$core$Object*) result799));
            panda$collections$Array$add$panda$collections$Array$T(children845, ((panda$core$Object*) right824));
            panda$collections$Array$add$panda$collections$Array$T(children845, ((panda$core$Object*) step838));
            panda$core$Bit $tmp849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op812.kind, ((panda$core$Int64) { 97 }));
            if ($tmp849.value) {
            {
                kind848 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind848 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp850 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp850->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp850->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp850, kind848, op812.offset, ((panda$collections$ListView*) children845));
            return $tmp850;
        }
        }
        else {
        {
            (($fn852) self->$class->vtable[5])(self, op812);
            return result799;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result853;
    org$pandalanguage$pandac$parser$Token op858;
    panda$core$Int64 $match$31113861;
    org$pandalanguage$pandac$ASTNode* next891;
    panda$collections$Array* children894;
    org$pandalanguage$pandac$ASTNode* $tmp855 = (($fn854) self->$class->vtable[27])(self);
    result853 = $tmp855;
    if (((panda$core$Bit) { result853 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l856:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp860 = (($fn859) self->$class->vtable[4])(self);
        op858 = $tmp860;
        {
            $match$31113861 = op858.kind;
            panda$core$Bit $tmp869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113861, ((panda$core$Int64) { 58 }));
            bool $tmp868 = $tmp869.value;
            if ($tmp868) goto $l870;
            panda$core$Bit $tmp871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113861, ((panda$core$Int64) { 59 }));
            $tmp868 = $tmp871.value;
            $l870:;
            panda$core$Bit $tmp872 = { $tmp868 };
            bool $tmp867 = $tmp872.value;
            if ($tmp867) goto $l873;
            panda$core$Bit $tmp874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113861, ((panda$core$Int64) { 60 }));
            $tmp867 = $tmp874.value;
            $l873:;
            panda$core$Bit $tmp875 = { $tmp867 };
            bool $tmp866 = $tmp875.value;
            if ($tmp866) goto $l876;
            panda$core$Bit $tmp877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113861, ((panda$core$Int64) { 61 }));
            $tmp866 = $tmp877.value;
            $l876:;
            panda$core$Bit $tmp878 = { $tmp866 };
            bool $tmp865 = $tmp878.value;
            if ($tmp865) goto $l879;
            panda$core$Bit $tmp880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113861, ((panda$core$Int64) { 62 }));
            $tmp865 = $tmp880.value;
            $l879:;
            panda$core$Bit $tmp881 = { $tmp865 };
            bool $tmp864 = $tmp881.value;
            if ($tmp864) goto $l882;
            panda$core$Bit $tmp883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113861, ((panda$core$Int64) { 63 }));
            $tmp864 = $tmp883.value;
            $l882:;
            panda$core$Bit $tmp884 = { $tmp864 };
            bool $tmp863 = $tmp884.value;
            if ($tmp863) goto $l885;
            panda$core$Bit $tmp886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113861, ((panda$core$Int64) { 64 }));
            $tmp863 = $tmp886.value;
            $l885:;
            panda$core$Bit $tmp887 = { $tmp863 };
            bool $tmp862 = $tmp887.value;
            if ($tmp862) goto $l888;
            panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$31113861, ((panda$core$Int64) { 65 }));
            $tmp862 = $tmp889.value;
            $l888:;
            panda$core$Bit $tmp890 = { $tmp862 };
            if ($tmp890.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp893 = (($fn892) self->$class->vtable[27])(self);
                next891 = $tmp893;
                if (((panda$core$Bit) { next891 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp895 = (panda$collections$Array*) malloc(40);
                $tmp895->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp895->refCount.value = 1;
                panda$collections$Array$init($tmp895);
                children894 = $tmp895;
                panda$collections$Array$add$panda$collections$Array$T(children894, ((panda$core$Object*) result853));
                panda$collections$Array$add$panda$collections$Array$T(children894, ((panda$core$Object*) next891));
                org$pandalanguage$pandac$ASTNode* $tmp897 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp897->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp897->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp897, ((panda$core$Int64) { 103 }), op858.offset, ((panda$core$Object*) wrap_panda$core$Int64(op858.kind)), ((panda$collections$ListView*) children894));
                result853 = $tmp897;
            }
            }
            else {
            {
                (($fn899) self->$class->vtable[5])(self, op858);
                return result853;
            }
            }
        }
    }
    }
    $l857:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result900;
    org$pandalanguage$pandac$parser$Token op905;
    panda$core$Int64 $match$32448908;
    org$pandalanguage$pandac$ASTNode* next914;
    panda$collections$Array* children917;
    org$pandalanguage$pandac$ASTNode* $tmp902 = (($fn901) self->$class->vtable[28])(self);
    result900 = $tmp902;
    if (((panda$core$Bit) { result900 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l903:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp907 = (($fn906) self->$class->vtable[4])(self);
        op905 = $tmp907;
        {
            $match$32448908 = op905.kind;
            panda$core$Bit $tmp910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$32448908, ((panda$core$Int64) { 66 }));
            bool $tmp909 = $tmp910.value;
            if ($tmp909) goto $l911;
            panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$32448908, ((panda$core$Int64) { 70 }));
            $tmp909 = $tmp912.value;
            $l911:;
            panda$core$Bit $tmp913 = { $tmp909 };
            if ($tmp913.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp916 = (($fn915) self->$class->vtable[28])(self);
                next914 = $tmp916;
                if (((panda$core$Bit) { next914 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp918 = (panda$collections$Array*) malloc(40);
                $tmp918->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp918->refCount.value = 1;
                panda$collections$Array$init($tmp918);
                children917 = $tmp918;
                panda$collections$Array$add$panda$collections$Array$T(children917, ((panda$core$Object*) result900));
                panda$collections$Array$add$panda$collections$Array$T(children917, ((panda$core$Object*) next914));
                org$pandalanguage$pandac$ASTNode* $tmp920 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp920->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp920->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp920, ((panda$core$Int64) { 103 }), op905.offset, ((panda$core$Object*) wrap_panda$core$Int64(op905.kind)), ((panda$collections$ListView*) children917));
                result900 = $tmp920;
            }
            }
            else {
            {
                (($fn922) self->$class->vtable[5])(self, op905);
                return result900;
            }
            }
        }
    }
    }
    $l904:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result923;
    org$pandalanguage$pandac$parser$Token$nullable op928;
    org$pandalanguage$pandac$ASTNode* next931;
    panda$collections$Array* children934;
    org$pandalanguage$pandac$ASTNode* $tmp925 = (($fn924) self->$class->vtable[29])(self);
    result923 = $tmp925;
    if (((panda$core$Bit) { result923 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l926:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp930 = (($fn929) self->$class->vtable[7])(self, ((panda$core$Int64) { 68 }));
        op928 = $tmp930;
        if (((panda$core$Bit) { !op928.nonnull }).value) {
        {
            goto $l927;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp933 = (($fn932) self->$class->vtable[29])(self);
        next931 = $tmp933;
        if (((panda$core$Bit) { next931 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp935 = (panda$collections$Array*) malloc(40);
        $tmp935->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp935->refCount.value = 1;
        panda$collections$Array$init($tmp935);
        children934 = $tmp935;
        panda$collections$Array$add$panda$collections$Array$T(children934, ((panda$core$Object*) result923));
        panda$collections$Array$add$panda$collections$Array$T(children934, ((panda$core$Object*) next931));
        org$pandalanguage$pandac$ASTNode* $tmp937 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp937->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp937->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp937, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op928.value).offset, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op928.value).kind)), ((panda$collections$ListView*) children934));
        result923 = $tmp937;
    }
    }
    $l927:;
    return result923;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start939;
    org$pandalanguage$pandac$ASTNode* test943;
    panda$collections$Array* children946;
    org$pandalanguage$pandac$ASTNode* ifTrue949;
    org$pandalanguage$pandac$ASTNode* ifFalse957;
    org$pandalanguage$pandac$ASTNode* ifFalse960;
    org$pandalanguage$pandac$parser$Token$nullable $tmp942 = (($fn941) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s940);
    start939 = $tmp942;
    if (((panda$core$Bit) { !start939.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp945 = (($fn944) self->$class->vtable[30])(self);
    test943 = $tmp945;
    if (((panda$core$Bit) { test943 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp947 = (panda$collections$Array*) malloc(40);
    $tmp947->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp947->refCount.value = 1;
    panda$collections$Array$init($tmp947);
    children946 = $tmp947;
    panda$collections$Array$add$panda$collections$Array$T(children946, ((panda$core$Object*) test943));
    org$pandalanguage$pandac$ASTNode* $tmp951 = (($fn950) self->$class->vtable[41])(self);
    ifTrue949 = $tmp951;
    if (((panda$core$Bit) { ifTrue949 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children946, ((panda$core$Object*) ifTrue949));
    org$pandalanguage$pandac$parser$Token$nullable $tmp953 = (($fn952) self->$class->vtable[7])(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp953.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp955 = (($fn954) self->$class->vtable[6])(self);
        panda$core$Bit $tmp956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp955.kind, ((panda$core$Int64) { 36 }));
        if ($tmp956.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp959 = (($fn958) self->$class->vtable[31])(self);
            ifFalse957 = $tmp959;
            if (((panda$core$Bit) { ifFalse957 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children946, ((panda$core$Object*) ifFalse957));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp962 = (($fn961) self->$class->vtable[41])(self);
            ifFalse960 = $tmp962;
            if (((panda$core$Bit) { ifFalse960 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children946, ((panda$core$Object*) ifFalse960));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp963 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp963->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp963->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp963, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start939.value).offset, ((panda$collections$ListView*) children946));
    return $tmp963;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp967 = (($fn966) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s965);
    if (((panda$core$Bit) { !$tmp967.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp969 = (($fn968) self->$class->vtable[21])(self, ((panda$core$Bit) { false }));
    return $tmp969;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id970;
    org$pandalanguage$pandac$ASTNode* type977;
    panda$collections$Array* children980;
    org$pandalanguage$pandac$parser$Token$nullable $tmp973 = (($fn972) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s971);
    id970 = $tmp973;
    if (((panda$core$Bit) { !id970.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp975 = (($fn974) self->$class->vtable[6])(self);
    panda$core$Bit $tmp976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp975.kind, ((panda$core$Int64) { 95 }));
    if ($tmp976.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp979 = (($fn978) self->$class->vtable[32])(self);
        type977 = $tmp979;
        if (((panda$core$Bit) { type977 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp981 = (panda$collections$Array*) malloc(40);
        $tmp981->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp981->refCount.value = 1;
        panda$collections$Array$init($tmp981);
        children980 = $tmp981;
        panda$collections$Array$add$panda$collections$Array$T(children980, ((panda$core$Object*) type977));
        org$pandalanguage$pandac$ASTNode* $tmp983 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp983->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp983->refCount.value = 1;
        panda$core$String* $tmp986 = (($fn985) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id970.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp983, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id970.value).offset, ((panda$core$Object*) $tmp986), ((panda$collections$ListView*) children980));
        return $tmp983;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp987 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp987->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp987->refCount.value = 1;
    panda$core$String* $tmp990 = (($fn989) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id970.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp987, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id970.value).offset, $tmp990);
    return $tmp987;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start991;
    org$pandalanguage$pandac$ASTNode* t995;
    org$pandalanguage$pandac$ASTNode* list1001;
    org$pandalanguage$pandac$ASTNode* block1004;
    panda$collections$Array* children1007;
    org$pandalanguage$pandac$parser$Token$nullable $tmp994 = (($fn993) self->$class->vtable[8])(self, ((panda$core$Int64) { 32 }), &$s992);
    start991 = $tmp994;
    if (((panda$core$Bit) { !start991.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp997 = (($fn996) self->$class->vtable[33])(self);
    t995 = $tmp997;
    if (((panda$core$Bit) { t995 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1000 = (($fn999) self->$class->vtable[8])(self, ((panda$core$Int64) { 34 }), &$s998);
    if (((panda$core$Bit) { !$tmp1000.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1003 = (($fn1002) self->$class->vtable[30])(self);
    list1001 = $tmp1003;
    if (((panda$core$Bit) { list1001 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1006 = (($fn1005) self->$class->vtable[41])(self);
    block1004 = $tmp1006;
    if (((panda$core$Bit) { block1004 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1008 = (panda$collections$Array*) malloc(40);
    $tmp1008->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1008->refCount.value = 1;
    panda$collections$Array$init($tmp1008);
    children1007 = $tmp1008;
    panda$collections$Array$add$panda$collections$Array$T(children1007, ((panda$core$Object*) t995));
    panda$collections$Array$add$panda$collections$Array$T(children1007, ((panda$core$Object*) list1001));
    panda$collections$Array$add$panda$collections$Array$T(children1007, ((panda$core$Object*) block1004));
    org$pandalanguage$pandac$ASTNode* $tmp1010 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1010->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1010->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1010, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start991.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1007));
    return $tmp1010;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1012;
    org$pandalanguage$pandac$ASTNode* test1016;
    org$pandalanguage$pandac$ASTNode* body1019;
    panda$collections$Array* children1022;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1015 = (($fn1014) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s1013);
    start1012 = $tmp1015;
    if (((panda$core$Bit) { !start1012.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1018 = (($fn1017) self->$class->vtable[30])(self);
    test1016 = $tmp1018;
    if (((panda$core$Bit) { test1016 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1021 = (($fn1020) self->$class->vtable[41])(self);
    body1019 = $tmp1021;
    if (((panda$core$Bit) { body1019 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1023 = (panda$collections$Array*) malloc(40);
    $tmp1023->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1023->refCount.value = 1;
    panda$collections$Array$init($tmp1023);
    children1022 = $tmp1023;
    panda$collections$Array$add$panda$collections$Array$T(children1022, ((panda$core$Object*) test1016));
    panda$collections$Array$add$panda$collections$Array$T(children1022, ((panda$core$Object*) body1019));
    org$pandalanguage$pandac$ASTNode* $tmp1025 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1025->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1025->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1025, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start1012.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1022));
    return $tmp1025;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1027;
    org$pandalanguage$pandac$ASTNode* body1031;
    org$pandalanguage$pandac$ASTNode* test1037;
    panda$collections$Array* children1040;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1030 = (($fn1029) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1028);
    start1027 = $tmp1030;
    if (((panda$core$Bit) { !start1027.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1033 = (($fn1032) self->$class->vtable[41])(self);
    body1031 = $tmp1033;
    if (((panda$core$Bit) { body1031 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1036 = (($fn1035) self->$class->vtable[8])(self, ((panda$core$Int64) { 31 }), &$s1034);
    if (((panda$core$Bit) { !$tmp1036.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1039 = (($fn1038) self->$class->vtable[30])(self);
    test1037 = $tmp1039;
    if (((panda$core$Bit) { test1037 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1041 = (panda$collections$Array*) malloc(40);
    $tmp1041->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1041->refCount.value = 1;
    panda$collections$Array$init($tmp1041);
    children1040 = $tmp1041;
    panda$collections$Array$add$panda$collections$Array$T(children1040, ((panda$core$Object*) body1031));
    panda$collections$Array$add$panda$collections$Array$T(children1040, ((panda$core$Object*) test1037));
    org$pandalanguage$pandac$ASTNode* $tmp1043 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1043->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1043->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1043, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start1027.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1040));
    return $tmp1043;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1045;
    org$pandalanguage$pandac$ASTNode* body1049;
    panda$collections$Array* children1052;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1048 = (($fn1047) self->$class->vtable[8])(self, ((panda$core$Int64) { 35 }), &$s1046);
    start1045 = $tmp1048;
    if (((panda$core$Bit) { !start1045.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1051 = (($fn1050) self->$class->vtable[41])(self);
    body1049 = $tmp1051;
    if (((panda$core$Bit) { body1049 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1053 = (panda$collections$Array*) malloc(40);
    $tmp1053->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1053->refCount.value = 1;
    panda$collections$Array$init($tmp1053);
    children1052 = $tmp1053;
    panda$collections$Array$add$panda$collections$Array$T(children1052, ((panda$core$Object*) body1049));
    org$pandalanguage$pandac$ASTNode* $tmp1055 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1055->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1055->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1055, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start1045.value).offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1052));
    return $tmp1055;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1057;
    org$pandalanguage$pandac$ASTNode* expr1061;
    panda$collections$Array* children1064;
    org$pandalanguage$pandac$ASTNode* message1069;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1060 = (($fn1059) self->$class->vtable[8])(self, ((panda$core$Int64) { 44 }), &$s1058);
    start1057 = $tmp1060;
    if (((panda$core$Bit) { !start1057.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1063 = (($fn1062) self->$class->vtable[30])(self);
    expr1061 = $tmp1063;
    if (((panda$core$Bit) { expr1061 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1065 = (panda$collections$Array*) malloc(40);
    $tmp1065->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1065->refCount.value = 1;
    panda$collections$Array$init($tmp1065);
    children1064 = $tmp1065;
    panda$collections$Array$add$panda$collections$Array$T(children1064, ((panda$core$Object*) expr1061));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1068 = (($fn1067) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp1068.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1071 = (($fn1070) self->$class->vtable[30])(self);
        message1069 = $tmp1071;
        if (((panda$core$Bit) { message1069 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1064, ((panda$core$Object*) message1069));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1072 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1072->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1072->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1072, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start1057.value).offset, ((panda$collections$ListView*) children1064));
    return $tmp1072;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1074;
    panda$collections$Array* expressions1078;
    org$pandalanguage$pandac$ASTNode* expr1081;
    panda$collections$Array* children1090;
    panda$core$Int64 $match$414461100;
    org$pandalanguage$pandac$ASTNode* stmt1121;
    org$pandalanguage$pandac$ASTNode* stmt1124;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1077 = (($fn1076) self->$class->vtable[8])(self, ((panda$core$Int64) { 39 }), &$s1075);
    start1074 = $tmp1077;
    if (((panda$core$Bit) { !start1074.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1079 = (panda$collections$Array*) malloc(40);
    $tmp1079->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1079->refCount.value = 1;
    panda$collections$Array$init($tmp1079);
    expressions1078 = $tmp1079;
    org$pandalanguage$pandac$ASTNode* $tmp1083 = (($fn1082) self->$class->vtable[30])(self);
    expr1081 = $tmp1083;
    if (((panda$core$Bit) { expr1081 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1078, ((panda$core$Object*) expr1081));
    $l1084:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1087 = (($fn1086) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1087.nonnull }).value) goto $l1085;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1089 = (($fn1088) self->$class->vtable[30])(self);
        expr1081 = $tmp1089;
        if (((panda$core$Bit) { expr1081 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1078, ((panda$core$Object*) expr1081));
    }
    goto $l1084;
    $l1085:;
    panda$collections$Array* $tmp1091 = (panda$collections$Array*) malloc(40);
    $tmp1091->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1091->refCount.value = 1;
    panda$collections$Array$init($tmp1091);
    children1090 = $tmp1091;
    org$pandalanguage$pandac$ASTNode* $tmp1093 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1093->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1093->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1093, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start1074.value).offset, ((panda$collections$ListView*) expressions1078));
    panda$collections$Array$add$panda$collections$Array$T(children1090, ((panda$core$Object*) $tmp1093));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1097 = (($fn1096) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1095);
    if (((panda$core$Bit) { !$tmp1097.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l1098:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1102 = (($fn1101) self->$class->vtable[6])(self);
            $match$414461100 = $tmp1102.kind;
            panda$core$Bit $tmp1105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461100, ((panda$core$Int64) { 39 }));
            bool $tmp1104 = $tmp1105.value;
            if ($tmp1104) goto $l1106;
            panda$core$Bit $tmp1107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461100, ((panda$core$Int64) { 40 }));
            $tmp1104 = $tmp1107.value;
            $l1106:;
            panda$core$Bit $tmp1108 = { $tmp1104 };
            bool $tmp1103 = $tmp1108.value;
            if ($tmp1103) goto $l1109;
            panda$core$Bit $tmp1110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461100, ((panda$core$Int64) { 100 }));
            $tmp1103 = $tmp1110.value;
            $l1109:;
            panda$core$Bit $tmp1111 = { $tmp1103 };
            if ($tmp1111.value) {
            {
                goto $l1099;
            }
            }
            else {
            panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461100, ((panda$core$Int64) { 28 }));
            bool $tmp1113 = $tmp1114.value;
            if ($tmp1113) goto $l1115;
            panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461100, ((panda$core$Int64) { 29 }));
            $tmp1113 = $tmp1116.value;
            $l1115:;
            panda$core$Bit $tmp1117 = { $tmp1113 };
            bool $tmp1112 = $tmp1117.value;
            if ($tmp1112) goto $l1118;
            panda$core$Bit $tmp1119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414461100, ((panda$core$Int64) { 27 }));
            $tmp1112 = $tmp1119.value;
            $l1118:;
            panda$core$Bit $tmp1120 = { $tmp1112 };
            if ($tmp1120.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1123 = (($fn1122) self->$class->vtable[49])(self);
                stmt1121 = $tmp1123;
                if (((panda$core$Bit) { stmt1121 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1090, ((panda$core$Object*) stmt1121));
                goto $l1099;
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1126 = (($fn1125) self->$class->vtable[51])(self);
                    stmt1124 = $tmp1126;
                    if (((panda$core$Bit) { stmt1124 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1090, ((panda$core$Object*) stmt1124));
                }
            }
            }
            }
        }
    }
    }
    $l1099:;
    org$pandalanguage$pandac$ASTNode* $tmp1127 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1127->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1127->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1127, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start1074.value).offset, ((panda$collections$ListView*) children1090));
    return $tmp1127;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1129;
    panda$collections$Array* children1133;
    org$pandalanguage$pandac$ASTNode* expr1136;
    org$pandalanguage$pandac$parser$Token token1144;
    panda$core$Int64 $match$429251147;
    org$pandalanguage$pandac$ASTNode* w1150;
    org$pandalanguage$pandac$parser$Token o1154;
    panda$collections$Array* statements1160;
    panda$core$Int64 $match$435251165;
    org$pandalanguage$pandac$ASTNode* stmt1178;
    org$pandalanguage$pandac$ASTNode* stmt1181;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1132 = (($fn1131) self->$class->vtable[8])(self, ((panda$core$Int64) { 38 }), &$s1130);
    start1129 = $tmp1132;
    if (((panda$core$Bit) { !start1129.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1134 = (panda$collections$Array*) malloc(40);
    $tmp1134->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1134->refCount.value = 1;
    panda$collections$Array$init($tmp1134);
    children1133 = $tmp1134;
    org$pandalanguage$pandac$ASTNode* $tmp1138 = (($fn1137) self->$class->vtable[30])(self);
    expr1136 = $tmp1138;
    if (((panda$core$Bit) { expr1136 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1133, ((panda$core$Object*) expr1136));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1141 = (($fn1140) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1139);
    if (((panda$core$Bit) { !$tmp1141.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l1142:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1146 = (($fn1145) self->$class->vtable[6])(self);
        token1144 = $tmp1146;
        {
            $match$429251147 = token1144.kind;
            panda$core$Bit $tmp1148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$429251147, ((panda$core$Int64) { 100 }));
            if ($tmp1148.value) {
            {
                goto $l1143;
            }
            }
            else {
            panda$core$Bit $tmp1149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$429251147, ((panda$core$Int64) { 39 }));
            if ($tmp1149.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1152 = (($fn1151) self->$class->vtable[39])(self);
                w1150 = $tmp1152;
                if (((panda$core$Bit) { w1150 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1133, ((panda$core$Object*) w1150));
            }
            }
            else {
            panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$429251147, ((panda$core$Int64) { 40 }));
            if ($tmp1153.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1156 = (($fn1155) self->$class->vtable[4])(self);
                o1154 = $tmp1156;
                org$pandalanguage$pandac$parser$Token$nullable $tmp1159 = (($fn1158) self->$class->vtable[8])(self, ((panda$core$Int64) { 95 }), &$s1157);
                if (((panda$core$Bit) { !$tmp1159.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1161 = (panda$collections$Array*) malloc(40);
                $tmp1161->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1161->refCount.value = 1;
                panda$collections$Array$init($tmp1161);
                statements1160 = $tmp1161;
                $l1163:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1167 = (($fn1166) self->$class->vtable[6])(self);
                        $match$435251165 = $tmp1167.kind;
                        panda$core$Bit $tmp1168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435251165, ((panda$core$Int64) { 100 }));
                        if ($tmp1168.value) {
                        {
                            goto $l1164;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435251165, ((panda$core$Int64) { 28 }));
                        bool $tmp1170 = $tmp1171.value;
                        if ($tmp1170) goto $l1172;
                        panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435251165, ((panda$core$Int64) { 29 }));
                        $tmp1170 = $tmp1173.value;
                        $l1172:;
                        panda$core$Bit $tmp1174 = { $tmp1170 };
                        bool $tmp1169 = $tmp1174.value;
                        if ($tmp1169) goto $l1175;
                        panda$core$Bit $tmp1176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$435251165, ((panda$core$Int64) { 27 }));
                        $tmp1169 = $tmp1176.value;
                        $l1175:;
                        panda$core$Bit $tmp1177 = { $tmp1169 };
                        if ($tmp1177.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1180 = (($fn1179) self->$class->vtable[49])(self);
                            stmt1178 = $tmp1180;
                            if (((panda$core$Bit) { stmt1178 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements1160, ((panda$core$Object*) stmt1178));
                            goto $l1164;
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1183 = (($fn1182) self->$class->vtable[51])(self);
                            stmt1181 = $tmp1183;
                            if (((panda$core$Bit) { stmt1181 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements1160, ((panda$core$Object*) stmt1181));
                        }
                        }
                        }
                    }
                }
                }
                $l1164:;
                org$pandalanguage$pandac$ASTNode* $tmp1184 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
                $tmp1184->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1184->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1184, ((panda$core$Int64) { 127 }), o1154.offset, ((panda$collections$ListView*) statements1160));
                panda$collections$Array$add$panda$collections$Array$T(children1133, ((panda$core$Object*) $tmp1184));
                goto $l1143;
            }
            }
            else {
            {
                (($fn1186) self->$class->vtable[4])(self);
                panda$core$String* $tmp1190 = (($fn1189) self->$class->vtable[14])(self, token1144);
                panda$core$String* $tmp1191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1188, $tmp1190);
                panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1191, &$s1192);
                panda$core$String* $tmp1194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1187, $tmp1193);
                (($fn1195) self->$class->vtable[9])(self, token1144, $tmp1194);
            }
            }
            }
            }
        }
    }
    }
    $l1143:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1198 = (($fn1197) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s1196);
    if (((panda$core$Bit) { !$tmp1198.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1199 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1199->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1199->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1199, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start1129.value).offset, ((panda$collections$ListView*) children1133));
    return $tmp1199;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1201;
    panda$collections$Array* children1205;
    panda$core$Int64 $match$452961210;
    org$pandalanguage$pandac$ASTNode* stmt1224;
    org$pandalanguage$pandac$ASTNode* stmt1230;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1204 = (($fn1203) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1202);
    start1201 = $tmp1204;
    if (((panda$core$Bit) { !start1201.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1206 = (panda$collections$Array*) malloc(40);
    $tmp1206->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1206->refCount.value = 1;
    panda$collections$Array$init($tmp1206);
    children1205 = $tmp1206;
    $l1208:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1212 = (($fn1211) self->$class->vtable[6])(self);
            $match$452961210 = $tmp1212.kind;
            panda$core$Bit $tmp1213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$452961210, ((panda$core$Int64) { 100 }));
            if ($tmp1213.value) {
            {
                (($fn1214) self->$class->vtable[4])(self);
                goto $l1209;
            }
            }
            else {
            panda$core$Bit $tmp1217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$452961210, ((panda$core$Int64) { 28 }));
            bool $tmp1216 = $tmp1217.value;
            if ($tmp1216) goto $l1218;
            panda$core$Bit $tmp1219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$452961210, ((panda$core$Int64) { 29 }));
            $tmp1216 = $tmp1219.value;
            $l1218:;
            panda$core$Bit $tmp1220 = { $tmp1216 };
            bool $tmp1215 = $tmp1220.value;
            if ($tmp1215) goto $l1221;
            panda$core$Bit $tmp1222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$452961210, ((panda$core$Int64) { 27 }));
            $tmp1215 = $tmp1222.value;
            $l1221:;
            panda$core$Bit $tmp1223 = { $tmp1215 };
            if ($tmp1223.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1226 = (($fn1225) self->$class->vtable[49])(self);
                stmt1224 = $tmp1226;
                if (((panda$core$Bit) { stmt1224 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp1229 = (($fn1228) self->$class->vtable[8])(self, ((panda$core$Int64) { 100 }), &$s1227);
                if (((panda$core$Bit) { !$tmp1229.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1205, ((panda$core$Object*) stmt1224));
                goto $l1209;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1232 = (($fn1231) self->$class->vtable[51])(self);
                stmt1230 = $tmp1232;
                if (((panda$core$Bit) { stmt1230 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1205, ((panda$core$Object*) stmt1230));
            }
            }
            }
        }
    }
    }
    $l1209:;
    org$pandalanguage$pandac$ASTNode* $tmp1233 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1233->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1233->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1233, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start1201.value).offset, ((panda$collections$ListView*) children1205));
    return $tmp1233;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1235;
    panda$core$Int64 $match$465491238;
    org$pandalanguage$pandac$parser$Token op1302;
    org$pandalanguage$pandac$ASTNode* rvalue1305;
    panda$collections$Array* children1308;
    org$pandalanguage$pandac$parser$Token op1318;
    org$pandalanguage$pandac$ASTNode* rvalue1321;
    panda$collections$Array* children1324;
    org$pandalanguage$pandac$ASTNode* $tmp1237 = (($fn1236) self->$class->vtable[30])(self);
    start1235 = $tmp1237;
    if (((panda$core$Bit) { start1235 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1240 = (($fn1239) self->$class->vtable[6])(self);
        $match$465491238 = $tmp1240.kind;
        panda$core$Bit $tmp1256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 73 }));
        bool $tmp1255 = $tmp1256.value;
        if ($tmp1255) goto $l1257;
        panda$core$Bit $tmp1258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 74 }));
        $tmp1255 = $tmp1258.value;
        $l1257:;
        panda$core$Bit $tmp1259 = { $tmp1255 };
        bool $tmp1254 = $tmp1259.value;
        if ($tmp1254) goto $l1260;
        panda$core$Bit $tmp1261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 75 }));
        $tmp1254 = $tmp1261.value;
        $l1260:;
        panda$core$Bit $tmp1262 = { $tmp1254 };
        bool $tmp1253 = $tmp1262.value;
        if ($tmp1253) goto $l1263;
        panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 76 }));
        $tmp1253 = $tmp1264.value;
        $l1263:;
        panda$core$Bit $tmp1265 = { $tmp1253 };
        bool $tmp1252 = $tmp1265.value;
        if ($tmp1252) goto $l1266;
        panda$core$Bit $tmp1267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 77 }));
        $tmp1252 = $tmp1267.value;
        $l1266:;
        panda$core$Bit $tmp1268 = { $tmp1252 };
        bool $tmp1251 = $tmp1268.value;
        if ($tmp1251) goto $l1269;
        panda$core$Bit $tmp1270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 78 }));
        $tmp1251 = $tmp1270.value;
        $l1269:;
        panda$core$Bit $tmp1271 = { $tmp1251 };
        bool $tmp1250 = $tmp1271.value;
        if ($tmp1250) goto $l1272;
        panda$core$Bit $tmp1273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 79 }));
        $tmp1250 = $tmp1273.value;
        $l1272:;
        panda$core$Bit $tmp1274 = { $tmp1250 };
        bool $tmp1249 = $tmp1274.value;
        if ($tmp1249) goto $l1275;
        panda$core$Bit $tmp1276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 80 }));
        $tmp1249 = $tmp1276.value;
        $l1275:;
        panda$core$Bit $tmp1277 = { $tmp1249 };
        bool $tmp1248 = $tmp1277.value;
        if ($tmp1248) goto $l1278;
        panda$core$Bit $tmp1279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 81 }));
        $tmp1248 = $tmp1279.value;
        $l1278:;
        panda$core$Bit $tmp1280 = { $tmp1248 };
        bool $tmp1247 = $tmp1280.value;
        if ($tmp1247) goto $l1281;
        panda$core$Bit $tmp1282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 82 }));
        $tmp1247 = $tmp1282.value;
        $l1281:;
        panda$core$Bit $tmp1283 = { $tmp1247 };
        bool $tmp1246 = $tmp1283.value;
        if ($tmp1246) goto $l1284;
        panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 83 }));
        $tmp1246 = $tmp1285.value;
        $l1284:;
        panda$core$Bit $tmp1286 = { $tmp1246 };
        bool $tmp1245 = $tmp1286.value;
        if ($tmp1245) goto $l1287;
        panda$core$Bit $tmp1288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 84 }));
        $tmp1245 = $tmp1288.value;
        $l1287:;
        panda$core$Bit $tmp1289 = { $tmp1245 };
        bool $tmp1244 = $tmp1289.value;
        if ($tmp1244) goto $l1290;
        panda$core$Bit $tmp1291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 85 }));
        $tmp1244 = $tmp1291.value;
        $l1290:;
        panda$core$Bit $tmp1292 = { $tmp1244 };
        bool $tmp1243 = $tmp1292.value;
        if ($tmp1243) goto $l1293;
        panda$core$Bit $tmp1294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 86 }));
        $tmp1243 = $tmp1294.value;
        $l1293:;
        panda$core$Bit $tmp1295 = { $tmp1243 };
        bool $tmp1242 = $tmp1295.value;
        if ($tmp1242) goto $l1296;
        panda$core$Bit $tmp1297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 87 }));
        $tmp1242 = $tmp1297.value;
        $l1296:;
        panda$core$Bit $tmp1298 = { $tmp1242 };
        bool $tmp1241 = $tmp1298.value;
        if ($tmp1241) goto $l1299;
        panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 88 }));
        $tmp1241 = $tmp1300.value;
        $l1299:;
        panda$core$Bit $tmp1301 = { $tmp1241 };
        if ($tmp1301.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1304 = (($fn1303) self->$class->vtable[4])(self);
            op1302 = $tmp1304;
            org$pandalanguage$pandac$ASTNode* $tmp1307 = (($fn1306) self->$class->vtable[30])(self);
            rvalue1305 = $tmp1307;
            if (((panda$core$Bit) { rvalue1305 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1309 = (panda$collections$Array*) malloc(40);
            $tmp1309->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1309->refCount.value = 1;
            panda$collections$Array$init($tmp1309);
            children1308 = $tmp1309;
            panda$collections$Array$add$panda$collections$Array$T(children1308, ((panda$core$Object*) start1235));
            panda$collections$Array$add$panda$collections$Array$T(children1308, ((panda$core$Object*) rvalue1305));
            org$pandalanguage$pandac$ASTNode* $tmp1311 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1311->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1311->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1311, ((panda$core$Int64) { 103 }), start1235->offset, ((panda$core$Object*) wrap_panda$core$Int64(op1302.kind)), ((panda$collections$ListView*) children1308));
            return $tmp1311;
        }
        }
        else {
        panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$465491238, ((panda$core$Int64) { 58 }));
        if ($tmp1313.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1315 = (($fn1314) self->$class->vtable[6])(self);
            (($fn1317) self->$class->vtable[9])(self, $tmp1315, &$s1316);
            org$pandalanguage$pandac$parser$Token $tmp1320 = (($fn1319) self->$class->vtable[4])(self);
            op1318 = $tmp1320;
            org$pandalanguage$pandac$ASTNode* $tmp1323 = (($fn1322) self->$class->vtable[30])(self);
            rvalue1321 = $tmp1323;
            if (((panda$core$Bit) { rvalue1321 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1325 = (panda$collections$Array*) malloc(40);
            $tmp1325->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1325->refCount.value = 1;
            panda$collections$Array$init($tmp1325);
            children1324 = $tmp1325;
            panda$collections$Array$add$panda$collections$Array$T(children1324, ((panda$core$Object*) start1235));
            panda$collections$Array$add$panda$collections$Array$T(children1324, ((panda$core$Object*) rvalue1321));
            org$pandalanguage$pandac$ASTNode* $tmp1327 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1327->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1327->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1327, ((panda$core$Int64) { 103 }), start1235->offset, ((panda$core$Object*) wrap_panda$core$Int64(op1318.kind)), ((panda$collections$ListView*) children1324));
            return $tmp1327;
        }
        }
        else {
        {
            return start1235;
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1329;
    org$pandalanguage$pandac$ASTNode* t1332;
    org$pandalanguage$pandac$ASTNode* value1337;
    org$pandalanguage$pandac$ASTNode* value1347;
    panda$collections$Array* $tmp1330 = (panda$collections$Array*) malloc(40);
    $tmp1330->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1330->refCount.value = 1;
    panda$collections$Array$init($tmp1330);
    children1329 = $tmp1330;
    org$pandalanguage$pandac$ASTNode* $tmp1334 = (($fn1333) self->$class->vtable[33])(self);
    t1332 = $tmp1334;
    if (((panda$core$Bit) { t1332 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1329, ((panda$core$Object*) t1332));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1336 = (($fn1335) self->$class->vtable[7])(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp1336.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1339 = (($fn1338) self->$class->vtable[30])(self);
        value1337 = $tmp1339;
        if (((panda$core$Bit) { value1337 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1329, ((panda$core$Object*) value1337));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1341 = (($fn1340) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1341.kind, ((panda$core$Int64) { 58 }));
    if ($tmp1342.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1344 = (($fn1343) self->$class->vtable[4])(self);
        (($fn1346) self->$class->vtable[9])(self, $tmp1344, &$s1345);
        org$pandalanguage$pandac$ASTNode* $tmp1349 = (($fn1348) self->$class->vtable[30])(self);
        value1347 = $tmp1349;
        if (((panda$core$Bit) { value1347 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1329, ((panda$core$Object*) value1347));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1350 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1350->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1350->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1350, ((panda$core$Int64) { 129 }), t1332->offset, ((panda$collections$ListView*) children1329));
    return $tmp1350;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1352;
    panda$core$Int64 kind1355;
    panda$core$Int64 $match$492661356;
    panda$collections$Array* children1363;
    org$pandalanguage$pandac$ASTNode* child1366;
    org$pandalanguage$pandac$ASTNode* child1373;
    org$pandalanguage$pandac$parser$Token $tmp1354 = (($fn1353) self->$class->vtable[4])(self);
    start1352 = $tmp1354;
    {
        $match$492661356 = start1352.kind;
        panda$core$Bit $tmp1357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492661356, ((panda$core$Int64) { 23 }));
        if ($tmp1357.value) {
        {
            kind1355 = ((panda$core$Int64) { 130 });
        }
        }
        else {
        panda$core$Bit $tmp1358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492661356, ((panda$core$Int64) { 24 }));
        if ($tmp1358.value) {
        {
            kind1355 = ((panda$core$Int64) { 131 });
        }
        }
        else {
        panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492661356, ((panda$core$Int64) { 25 }));
        if ($tmp1359.value) {
        {
            kind1355 = ((panda$core$Int64) { 133 });
        }
        }
        else {
        panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$492661356, ((panda$core$Int64) { 26 }));
        if ($tmp1360.value) {
        {
            kind1355 = ((panda$core$Int64) { 132 });
        }
        }
        else {
        {
            (($fn1362) self->$class->vtable[9])(self, start1352, &$s1361);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1364 = (panda$collections$Array*) malloc(40);
    $tmp1364->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1364->refCount.value = 1;
    panda$collections$Array$init($tmp1364);
    children1363 = $tmp1364;
    org$pandalanguage$pandac$ASTNode* $tmp1368 = (($fn1367) self->$class->vtable[43])(self);
    child1366 = $tmp1368;
    if (((panda$core$Bit) { child1366 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1363, ((panda$core$Object*) child1366));
    $l1369:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1372 = (($fn1371) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1372.nonnull }).value) goto $l1370;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1375 = (($fn1374) self->$class->vtable[43])(self);
        child1373 = $tmp1375;
        if (((panda$core$Bit) { child1373 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1363, ((panda$core$Object*) child1373));
    }
    goto $l1369;
    $l1370:;
    org$pandalanguage$pandac$ASTNode* $tmp1376 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1376->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1376->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1376, kind1355, start1352.offset, ((panda$collections$ListView*) children1363));
    return $tmp1376;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1378;
    panda$collections$Array* children1385;
    org$pandalanguage$pandac$ASTNode* expr1394;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1381 = (($fn1380) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1379);
    start1378 = $tmp1381;
    if (((panda$core$Bit) { !start1378.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1384 = (($fn1383) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1382);
    if (((panda$core$Bit) { !$tmp1384.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp1386 = (panda$collections$Array*) malloc(40);
    $tmp1386->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1386->refCount.value = 1;
    panda$collections$Array$init($tmp1386);
    children1385 = $tmp1386;
    org$pandalanguage$pandac$ASTNode* $tmp1388 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1388->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1388->refCount.value = 1;
    panda$core$String* $tmp1391 = (($fn1390) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) start1378.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1388, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start1378.value).offset, $tmp1391);
    panda$collections$Array$add$panda$collections$Array$T(children1385, ((panda$core$Object*) $tmp1388));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1393 = (($fn1392) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1393.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1396 = (($fn1395) self->$class->vtable[30])(self);
        expr1394 = $tmp1396;
        if (((panda$core$Bit) { expr1394 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1385, ((panda$core$Object*) expr1394));
        $l1397:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1400 = (($fn1399) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1400.nonnull }).value) goto $l1398;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1402 = (($fn1401) self->$class->vtable[30])(self);
            expr1394 = $tmp1402;
            if (((panda$core$Bit) { expr1394 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1385, ((panda$core$Object*) expr1394));
        }
        goto $l1397;
        $l1398:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1405 = (($fn1404) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1403);
        if (((panda$core$Bit) { !$tmp1405.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1406 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1406->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1406->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1406, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start1378.value).offset, ((panda$collections$ListView*) children1385));
    return $tmp1406;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1408;
    org$pandalanguage$pandac$parser$Token$nullable label1412;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1411 = (($fn1410) self->$class->vtable[8])(self, ((panda$core$Int64) { 28 }), &$s1409);
    start1408 = $tmp1411;
    if (((panda$core$Bit) { !start1408.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1414 = (($fn1413) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1412 = $tmp1414;
    if (((panda$core$Bit) { label1412.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1415 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1415->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1415->refCount.value = 1;
        panda$core$String* $tmp1418 = (($fn1417) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1412.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1415, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1408.value).offset, $tmp1418);
        return $tmp1415;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1419 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1419->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1419->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1419, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1408.value).offset);
    return $tmp1419;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1421;
    org$pandalanguage$pandac$parser$Token$nullable label1425;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1424 = (($fn1423) self->$class->vtable[8])(self, ((panda$core$Int64) { 29 }), &$s1422);
    start1421 = $tmp1424;
    if (((panda$core$Bit) { !start1421.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1427 = (($fn1426) self->$class->vtable[7])(self, ((panda$core$Int64) { 48 }));
    label1425 = $tmp1427;
    if (((panda$core$Bit) { label1425.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1428 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1428->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1428->refCount.value = 1;
        panda$core$String* $tmp1431 = (($fn1430) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) label1425.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1428, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1421.value).offset, $tmp1431);
        return $tmp1428;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1432 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1432->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1432->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1432, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1421.value).offset);
    return $tmp1432;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1434;
    panda$core$Int64 $match$533441438;
    panda$collections$Array* children1452;
    org$pandalanguage$pandac$ASTNode* expr1455;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1437 = (($fn1436) self->$class->vtable[8])(self, ((panda$core$Int64) { 27 }), &$s1435);
    start1434 = $tmp1437;
    if (((panda$core$Bit) { !start1434.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1440 = (($fn1439) self->$class->vtable[6])(self);
        $match$533441438 = $tmp1440.kind;
        panda$core$Bit $tmp1443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533441438, ((panda$core$Int64) { 100 }));
        bool $tmp1442 = $tmp1443.value;
        if ($tmp1442) goto $l1444;
        panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533441438, ((panda$core$Int64) { 39 }));
        $tmp1442 = $tmp1445.value;
        $l1444:;
        panda$core$Bit $tmp1446 = { $tmp1442 };
        bool $tmp1441 = $tmp1446.value;
        if ($tmp1441) goto $l1447;
        panda$core$Bit $tmp1448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$533441438, ((panda$core$Int64) { 40 }));
        $tmp1441 = $tmp1448.value;
        $l1447:;
        panda$core$Bit $tmp1449 = { $tmp1441 };
        if ($tmp1449.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1450 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1450->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1450->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1450, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1434.value).offset);
            return $tmp1450;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1453 = (panda$collections$Array*) malloc(40);
            $tmp1453->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1453->refCount.value = 1;
            panda$collections$Array$init($tmp1453);
            children1452 = $tmp1453;
            org$pandalanguage$pandac$ASTNode* $tmp1457 = (($fn1456) self->$class->vtable[30])(self);
            expr1455 = $tmp1457;
            if (((panda$core$Bit) { expr1455 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1452, ((panda$core$Object*) expr1455));
            org$pandalanguage$pandac$ASTNode* $tmp1458 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
            $tmp1458->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1458->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1458, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1434.value).offset, ((panda$collections$ListView*) children1452));
            return $tmp1458;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $match$541581460;
    {
        org$pandalanguage$pandac$parser$Token $tmp1462 = (($fn1461) self->$class->vtable[6])(self);
        $match$541581460 = $tmp1462.kind;
        panda$core$Bit $tmp1463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$541581460, ((panda$core$Int64) { 28 }));
        if ($tmp1463.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1465 = (($fn1464) self->$class->vtable[46])(self);
            return $tmp1465;
        }
        }
        else {
        panda$core$Bit $tmp1466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$541581460, ((panda$core$Int64) { 29 }));
        if ($tmp1466.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1468 = (($fn1467) self->$class->vtable[47])(self);
            return $tmp1468;
        }
        }
        else {
        panda$core$Bit $tmp1469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$541581460, ((panda$core$Int64) { 27 }));
        if ($tmp1469.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1471 = (($fn1470) self->$class->vtable[48])(self);
            return $tmp1471;
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
    panda$core$Int64 $match$544741472;
    {
        org$pandalanguage$pandac$parser$Token $tmp1474 = (($fn1473) self->$class->vtable[6])(self);
        $match$544741472 = $tmp1474.kind;
        panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$544741472, ((panda$core$Int64) { 30 }));
        if ($tmp1475.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1477 = (($fn1476) self->$class->vtable[36])(self, p_label);
            return $tmp1477;
        }
        }
        else {
        panda$core$Bit $tmp1478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$544741472, ((panda$core$Int64) { 32 }));
        if ($tmp1478.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1480 = (($fn1479) self->$class->vtable[34])(self, p_label);
            return $tmp1480;
        }
        }
        else {
        panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$544741472, ((panda$core$Int64) { 35 }));
        if ($tmp1481.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1483 = (($fn1482) self->$class->vtable[37])(self, p_label);
            return $tmp1483;
        }
        }
        else {
        panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$544741472, ((panda$core$Int64) { 31 }));
        if ($tmp1484.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1486 = (($fn1485) self->$class->vtable[35])(self, p_label);
            return $tmp1486;
        }
        }
        else {
        {
            (($fn1488) self->$class->vtable[8])(self, ((panda$core$Int64) { 30 }), &$s1487);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $match$553041489;
    org$pandalanguage$pandac$parser$Token id1517;
    {
        org$pandalanguage$pandac$parser$Token $tmp1491 = (($fn1490) self->$class->vtable[6])(self);
        $match$553041489 = $tmp1491.kind;
        panda$core$Bit $tmp1492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 36 }));
        if ($tmp1492.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1494 = (($fn1493) self->$class->vtable[31])(self);
            return $tmp1494;
        }
        }
        else {
        panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 32 }));
        if ($tmp1495.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1497 = (($fn1496) self->$class->vtable[34])(self, NULL);
            return $tmp1497;
        }
        }
        else {
        panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 31 }));
        if ($tmp1498.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1500 = (($fn1499) self->$class->vtable[35])(self, NULL);
            return $tmp1500;
        }
        }
        else {
        panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 30 }));
        if ($tmp1501.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1503 = (($fn1502) self->$class->vtable[36])(self, NULL);
            return $tmp1503;
        }
        }
        else {
        panda$core$Bit $tmp1504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 35 }));
        if ($tmp1504.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1506 = (($fn1505) self->$class->vtable[37])(self, NULL);
            return $tmp1506;
        }
        }
        else {
        panda$core$Bit $tmp1507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 44 }));
        if ($tmp1507.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1509 = (($fn1508) self->$class->vtable[38])(self);
            return $tmp1509;
        }
        }
        else {
        panda$core$Bit $tmp1510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 38 }));
        if ($tmp1510.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1512 = (($fn1511) self->$class->vtable[40])(self);
            return $tmp1512;
        }
        }
        else {
        panda$core$Bit $tmp1513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 99 }));
        if ($tmp1513.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1515 = (($fn1514) self->$class->vtable[41])(self);
            return $tmp1515;
        }
        }
        else {
        panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 48 }));
        if ($tmp1516.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1519 = (($fn1518) self->$class->vtable[4])(self);
            id1517 = $tmp1519;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1521 = (($fn1520) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1521.nonnull }).value) {
            {
                panda$core$String* $tmp1523 = (($fn1522) self->$class->vtable[14])(self, id1517);
                org$pandalanguage$pandac$ASTNode* $tmp1525 = (($fn1524) self->$class->vtable[50])(self, $tmp1523);
                return $tmp1525;
            }
            }
            (($fn1526) self->$class->vtable[5])(self, id1517);
            org$pandalanguage$pandac$ASTNode* $tmp1528 = (($fn1527) self->$class->vtable[42])(self);
            return $tmp1528;
        }
        }
        else {
        panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 46 }));
        bool $tmp1529 = $tmp1530.value;
        if ($tmp1529) goto $l1531;
        panda$core$Bit $tmp1532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 47 }));
        $tmp1529 = $tmp1532.value;
        $l1531:;
        panda$core$Bit $tmp1533 = { $tmp1529 };
        if ($tmp1533.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1535 = (($fn1534) self->$class->vtable[42])(self);
            return $tmp1535;
        }
        }
        else {
        panda$core$Bit $tmp1539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 23 }));
        bool $tmp1538 = $tmp1539.value;
        if ($tmp1538) goto $l1540;
        panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 24 }));
        $tmp1538 = $tmp1541.value;
        $l1540:;
        panda$core$Bit $tmp1542 = { $tmp1538 };
        bool $tmp1537 = $tmp1542.value;
        if ($tmp1537) goto $l1543;
        panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 25 }));
        $tmp1537 = $tmp1544.value;
        $l1543:;
        panda$core$Bit $tmp1545 = { $tmp1537 };
        bool $tmp1536 = $tmp1545.value;
        if ($tmp1536) goto $l1546;
        panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 26 }));
        $tmp1536 = $tmp1547.value;
        $l1546:;
        panda$core$Bit $tmp1548 = { $tmp1536 };
        if ($tmp1548.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1550 = (($fn1549) self->$class->vtable[44])(self);
            return $tmp1550;
        }
        }
        else {
        panda$core$Bit $tmp1551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553041489, ((panda$core$Int64) { 22 }));
        if ($tmp1551.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1553 = (($fn1552) self->$class->vtable[45])(self);
            return $tmp1553;
        }
        }
        else {
        {
            (($fn1555) self->$class->vtable[8])(self, ((panda$core$Int64) { 36 }), &$s1554);
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
    org$pandalanguage$pandac$parser$Token$nullable start1556;
    org$pandalanguage$pandac$parser$Token$nullable next1560;
    panda$core$MutableString* name1564;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1559 = (($fn1558) self->$class->vtable[8])(self, ((panda$core$Int64) { 14 }), &$s1557);
    start1556 = $tmp1559;
    if (((panda$core$Bit) { !start1556.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1563 = (($fn1562) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1561);
    next1560 = $tmp1563;
    if (((panda$core$Bit) { !next1560.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1565 = (panda$core$MutableString*) malloc(40);
    $tmp1565->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1565->refCount.value = 1;
    panda$core$String* $tmp1568 = (($fn1567) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1560.value));
    panda$core$MutableString$init$panda$core$String($tmp1565, $tmp1568);
    name1564 = $tmp1565;
    $l1569:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1572 = (($fn1571) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1560 = $tmp1572;
        if (((panda$core$Bit) { !next1560.nonnull }).value) {
        {
            goto $l1570;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1564, &$s1573);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1576 = (($fn1575) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1574);
        next1560 = $tmp1576;
        if (((panda$core$Bit) { !next1560.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1578 = (($fn1577) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1560.value));
        panda$core$MutableString$append$panda$core$String(name1564, $tmp1578);
    }
    }
    $l1570:;
    org$pandalanguage$pandac$ASTNode* $tmp1579 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1579->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1579->refCount.value = 1;
    panda$core$String* $tmp1581 = panda$core$MutableString$convert$R$panda$core$String(name1564);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1579, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1556.value).offset, $tmp1581);
    return $tmp1579;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1582;
    org$pandalanguage$pandac$parser$Token$nullable next1586;
    panda$core$MutableString* name1590;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1585 = (($fn1584) self->$class->vtable[8])(self, ((panda$core$Int64) { 15 }), &$s1583);
    start1582 = $tmp1585;
    if (((panda$core$Bit) { !start1582.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1589 = (($fn1588) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1587);
    next1586 = $tmp1589;
    if (((panda$core$Bit) { !next1586.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1591 = (panda$core$MutableString*) malloc(40);
    $tmp1591->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1591->refCount.value = 1;
    panda$core$String* $tmp1594 = (($fn1593) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1586.value));
    panda$core$MutableString$init$panda$core$String($tmp1591, $tmp1594);
    name1590 = $tmp1591;
    $l1595:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1598 = (($fn1597) self->$class->vtable[7])(self, ((panda$core$Int64) { 98 }));
        next1586 = $tmp1598;
        if (((panda$core$Bit) { !next1586.nonnull }).value) {
        {
            goto $l1596;
        }
        }
        panda$core$MutableString$append$panda$core$String(name1590, &$s1599);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1602 = (($fn1601) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1600);
        next1586 = $tmp1602;
        if (((panda$core$Bit) { !next1586.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1604 = (($fn1603) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1586.value));
        panda$core$MutableString$append$panda$core$String(name1590, $tmp1604);
    }
    }
    $l1596:;
    org$pandalanguage$pandac$ASTNode* $tmp1605 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1605->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1605->refCount.value = 1;
    panda$core$String* $tmp1607 = panda$core$MutableString$convert$R$panda$core$String(name1590);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1605, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1582.value).offset, $tmp1607);
    return $tmp1605;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1608;
    org$pandalanguage$pandac$parser$Token$nullable id1612;
    panda$collections$Array* children1616;
    panda$collections$Array* idChildren1619;
    org$pandalanguage$pandac$ASTNode* t1624;
    org$pandalanguage$pandac$ASTNode* t1640;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1611 = (($fn1610) self->$class->vtable[8])(self, ((panda$core$Int64) { 62 }), &$s1609);
    start1608 = $tmp1611;
    if (((panda$core$Bit) { !start1608.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1615 = (($fn1614) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1613);
    id1612 = $tmp1615;
    if (((panda$core$Bit) { !id1612.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1617 = (panda$collections$Array*) malloc(40);
    $tmp1617->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1617->refCount.value = 1;
    panda$collections$Array$init($tmp1617);
    children1616 = $tmp1617;
    panda$collections$Array* $tmp1620 = (panda$collections$Array*) malloc(40);
    $tmp1620->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1620->refCount.value = 1;
    panda$collections$Array$init($tmp1620);
    idChildren1619 = $tmp1620;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1623 = (($fn1622) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1623.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1626 = (($fn1625) self->$class->vtable[20])(self);
        t1624 = $tmp1626;
        if (((panda$core$Bit) { t1624 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1619, ((panda$core$Object*) t1624));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1627 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1627->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1627->refCount.value = 1;
    panda$core$String* $tmp1630 = (($fn1629) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1612.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1627, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1612.value).offset, ((panda$core$Object*) $tmp1630), ((panda$collections$ListView*) idChildren1619));
    panda$collections$Array$add$panda$collections$Array$T(children1616, ((panda$core$Object*) $tmp1627));
    $l1631:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1634 = (($fn1633) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1634.nonnull }).value) goto $l1632;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1637 = (($fn1636) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1635);
        id1612 = $tmp1637;
        if (((panda$core$Bit) { !id1612.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1619);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1639 = (($fn1638) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1639.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1642 = (($fn1641) self->$class->vtable[20])(self);
            t1640 = $tmp1642;
            if (((panda$core$Bit) { t1640 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1619, ((panda$core$Object*) t1640));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1643 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1643->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1643->refCount.value = 1;
        panda$core$String* $tmp1646 = (($fn1645) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1612.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1643, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1612.value).offset, ((panda$core$Object*) $tmp1646), ((panda$collections$ListView*) idChildren1619));
        panda$collections$Array$add$panda$collections$Array$T(children1616, ((panda$core$Object*) $tmp1643));
    }
    goto $l1631;
    $l1632:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1649 = (($fn1648) self->$class->vtable[8])(self, ((panda$core$Int64) { 63 }), &$s1647);
    if (((panda$core$Bit) { !$tmp1649.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1650 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1650->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1650->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1650, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1608.value).offset, ((panda$collections$ListView*) children1616));
    return $tmp1650;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaces$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1652;
    panda$collections$Array* children1656;
    org$pandalanguage$pandac$ASTNode* t1659;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1655 = (($fn1654) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1653);
    start1652 = $tmp1655;
    if (((panda$core$Bit) { !start1652.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1657 = (panda$collections$Array*) malloc(40);
    $tmp1657->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1657->refCount.value = 1;
    panda$collections$Array$init($tmp1657);
    children1656 = $tmp1657;
    org$pandalanguage$pandac$ASTNode* $tmp1661 = (($fn1660) self->$class->vtable[20])(self);
    t1659 = $tmp1661;
    if (((panda$core$Bit) { t1659 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1656, ((panda$core$Object*) t1659));
    $l1662:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1665 = (($fn1664) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1665.nonnull }).value) goto $l1663;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1667 = (($fn1666) self->$class->vtable[20])(self);
        t1659 = $tmp1667;
        if (((panda$core$Bit) { t1659 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1656, ((panda$core$Object*) t1659));
    }
    goto $l1662;
    $l1663:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1670 = (($fn1669) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1668);
    if (((panda$core$Bit) { !$tmp1670.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1671 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1671->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1671->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1671, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1652.value).offset, ((panda$collections$ListView*) children1656));
    return $tmp1671;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1673;
    org$pandalanguage$pandac$parser$Token$nullable next1678;
    panda$collections$Array* $tmp1674 = (panda$collections$Array*) malloc(40);
    $tmp1674->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1674->refCount.value = 1;
    panda$collections$Array$init($tmp1674);
    children1673 = $tmp1674;
    $l1676:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1680 = (($fn1679) self->$class->vtable[7])(self, ((panda$core$Int64) { 13 }));
        next1678 = $tmp1680;
        if (((panda$core$Bit) { !next1678.nonnull }).value) {
        {
            goto $l1677;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1681 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1681->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1681->refCount.value = 1;
        panda$core$String* $tmp1684 = (($fn1683) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) next1678.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1681, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1678.value).offset, $tmp1684);
        panda$collections$Array$add$panda$collections$Array$T(children1673, ((panda$core$Object*) $tmp1681));
    }
    }
    $l1677:;
    org$pandalanguage$pandac$ASTNode* $tmp1685 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1685->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1685->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1685, ((panda$core$Int64) { 144 }), ((panda$core$Int64) { -1 }), ((panda$collections$ListView*) children1673));
    return $tmp1685;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1687;
    panda$core$MutableString* result1691;
    org$pandalanguage$pandac$parser$Token next1696;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1690 = (($fn1689) self->$class->vtable[8])(self, ((panda$core$Int64) { 11 }), &$s1688);
    start1687 = $tmp1690;
    if (((panda$core$Bit) { !start1687.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1692 = (panda$core$MutableString*) malloc(40);
    $tmp1692->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1692->refCount.value = 1;
    panda$core$MutableString$init($tmp1692);
    result1691 = $tmp1692;
    $l1694:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1698 = (($fn1697) self->$class->vtable[3])(self);
        next1696 = $tmp1698;
        panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1696.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1699.value) {
        {
            goto $l1695;
        }
        }
        panda$core$Bit $tmp1700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1696.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1700.value) {
        {
            (($fn1702) self->$class->vtable[9])(self, ((org$pandalanguage$pandac$parser$Token) start1687.value), &$s1701);
            return NULL;
        }
        }
        panda$core$String* $tmp1704 = (($fn1703) self->$class->vtable[14])(self, next1696);
        panda$core$MutableString$append$panda$core$String(result1691, $tmp1704);
    }
    }
    $l1695:;
    org$pandalanguage$pandac$ASTNode* $tmp1705 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1705->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1705->refCount.value = 1;
    panda$core$String* $tmp1707 = panda$core$MutableString$convert$R$panda$core$String(result1691);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp1705, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1687.value).offset, $tmp1707);
    return $tmp1705;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1708;
    org$pandalanguage$pandac$ASTNode* t1712;
    panda$collections$Array* children1715;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1711 = (($fn1710) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1709);
    id1708 = $tmp1711;
    if (((panda$core$Bit) { !id1708.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1714 = (($fn1713) self->$class->vtable[32])(self);
    t1712 = $tmp1714;
    if (((panda$core$Bit) { t1712 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1716 = (panda$collections$Array*) malloc(40);
    $tmp1716->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1716->refCount.value = 1;
    panda$collections$Array$init($tmp1716);
    children1715 = $tmp1716;
    panda$collections$Array$add$panda$collections$Array$T(children1715, ((panda$core$Object*) t1712));
    org$pandalanguage$pandac$ASTNode* $tmp1718 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1718->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1718->refCount.value = 1;
    panda$core$String* $tmp1721 = (($fn1720) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) id1708.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1718, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1708.value).offset, ((panda$core$Object*) $tmp1721), ((panda$collections$ListView*) children1715));
    return $tmp1718;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1722;
    panda$collections$Array* children1726;
    org$pandalanguage$pandac$ASTNode* param1731;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1725 = (($fn1724) self->$class->vtable[8])(self, ((panda$core$Int64) { 103 }), &$s1723);
    start1722 = $tmp1725;
    if (((panda$core$Bit) { !start1722.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1727 = (panda$collections$Array*) malloc(40);
    $tmp1727->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1727->refCount.value = 1;
    panda$collections$Array$init($tmp1727);
    children1726 = $tmp1727;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1730 = (($fn1729) self->$class->vtable[7])(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1730.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1733 = (($fn1732) self->$class->vtable[58])(self);
        param1731 = $tmp1733;
        if (((panda$core$Bit) { param1731 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1726, ((panda$core$Object*) param1731));
        $l1734:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1737 = (($fn1736) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1737.nonnull }).value) goto $l1735;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1739 = (($fn1738) self->$class->vtable[58])(self);
            param1731 = $tmp1739;
            if (((panda$core$Bit) { param1731 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1726, ((panda$core$Object*) param1731));
        }
        goto $l1734;
        $l1735:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1742 = (($fn1741) self->$class->vtable[8])(self, ((panda$core$Int64) { 104 }), &$s1740);
        if (((panda$core$Bit) { !$tmp1742.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1743 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1743->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1743->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1743, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1722.value).offset, ((panda$collections$ListView*) children1726));
    return $tmp1743;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1745;
    org$pandalanguage$pandac$parser$Token$nullable start1746;
    panda$core$String* name1752;
    panda$collections$Array* children1755;
    org$pandalanguage$pandac$ASTNode* params1758;
    org$pandalanguage$pandac$ASTNode* returnType1764;
    org$pandalanguage$pandac$ASTNode* b1772;
    org$pandalanguage$pandac$parser$Token token1777;
    panda$core$String* tokenText1780;
    org$pandalanguage$pandac$ASTNode* post1794;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1748 = (($fn1747) self->$class->vtable[7])(self, ((panda$core$Int64) { 20 }));
    start1746 = $tmp1748;
    if (((panda$core$Bit) { !start1746.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1751 = (($fn1750) self->$class->vtable[8])(self, ((panda$core$Int64) { 21 }), &$s1749);
        start1746 = $tmp1751;
        if (((panda$core$Bit) { !start1746.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1745 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1745 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1754 = (($fn1753) self->$class->vtable[19])(self);
    name1752 = $tmp1754;
    if (((panda$core$Bit) { name1752 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1756 = (panda$collections$Array*) malloc(40);
    $tmp1756->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1756->refCount.value = 1;
    panda$collections$Array$init($tmp1756);
    children1755 = $tmp1756;
    panda$collections$Array$add$panda$collections$Array$T(children1755, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1755, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1760 = (($fn1759) self->$class->vtable[59])(self);
    params1758 = $tmp1760;
    if (((panda$core$Bit) { params1758 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1755, ((panda$core$Object*) params1758));
    org$pandalanguage$pandac$parser$Token $tmp1762 = (($fn1761) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1762.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1763.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1766 = (($fn1765) self->$class->vtable[32])(self);
        returnType1764 = $tmp1766;
        if (((panda$core$Bit) { returnType1764 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1755, ((panda$core$Object*) returnType1764));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1767 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1767->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1767->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1767, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1755, ((panda$core$Object*) $tmp1767));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1770 = (($fn1769) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1770.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1771.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1774 = (($fn1773) self->$class->vtable[41])(self);
        b1772 = $tmp1774;
        if (((panda$core$Bit) { b1772 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1755, ((panda$core$Object*) b1772));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1775 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1775->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1775->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1775, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1755, ((panda$core$Object*) $tmp1775));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1779 = (($fn1778) self->$class->vtable[6])(self);
    token1777 = $tmp1779;
    panda$core$String* $tmp1782 = (($fn1781) self->$class->vtable[14])(self, token1777);
    tokenText1780 = $tmp1782;
    panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1777.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1783 = $tmp1784.value;
    if (!$tmp1783) goto $l1785;
    panda$core$Bit $tmp1788 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1780, &$s1787);
    bool $tmp1786 = $tmp1788.value;
    if ($tmp1786) goto $l1789;
    panda$core$Bit $tmp1791 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1780, &$s1790);
    $tmp1786 = $tmp1791.value;
    $l1789:;
    panda$core$Bit $tmp1792 = { $tmp1786 };
    $tmp1783 = $tmp1792.value;
    $l1785:;
    panda$core$Bit $tmp1793 = { $tmp1783 };
    if ($tmp1793.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1796 = (($fn1795) self->$class->vtable[60])(self);
        post1794 = $tmp1796;
        if (((panda$core$Bit) { post1794 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1755, ((panda$core$Object*) post1794));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1797 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1797->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1797->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1797, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1755, ((panda$core$Object*) $tmp1797));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1799 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1799->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1799->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1799, kind1745, ((org$pandalanguage$pandac$parser$Token) start1746.value).offset, ((panda$core$Object*) name1752), ((panda$collections$ListView*) children1755));
    return $tmp1799;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1801;
    panda$collections$Array* children1805;
    org$pandalanguage$pandac$ASTNode* params1808;
    org$pandalanguage$pandac$ASTNode* b1811;
    org$pandalanguage$pandac$parser$Token token1814;
    panda$core$String* tokenText1817;
    org$pandalanguage$pandac$ASTNode* post1831;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1804 = (($fn1803) self->$class->vtable[8])(self, ((panda$core$Int64) { 22 }), &$s1802);
    start1801 = $tmp1804;
    if (((panda$core$Bit) { !start1801.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1806 = (panda$collections$Array*) malloc(40);
    $tmp1806->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1806->refCount.value = 1;
    panda$collections$Array$init($tmp1806);
    children1805 = $tmp1806;
    panda$collections$Array$add$panda$collections$Array$T(children1805, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1805, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1810 = (($fn1809) self->$class->vtable[59])(self);
    params1808 = $tmp1810;
    if (((panda$core$Bit) { params1808 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1805, ((panda$core$Object*) params1808));
    org$pandalanguage$pandac$ASTNode* $tmp1813 = (($fn1812) self->$class->vtable[41])(self);
    b1811 = $tmp1813;
    if (((panda$core$Bit) { b1811 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1805, ((panda$core$Object*) b1811));
    org$pandalanguage$pandac$parser$Token $tmp1816 = (($fn1815) self->$class->vtable[6])(self);
    token1814 = $tmp1816;
    panda$core$String* $tmp1819 = (($fn1818) self->$class->vtable[14])(self, token1814);
    tokenText1817 = $tmp1819;
    panda$core$Bit $tmp1821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1814.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1820 = $tmp1821.value;
    if (!$tmp1820) goto $l1822;
    panda$core$Bit $tmp1825 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1817, &$s1824);
    bool $tmp1823 = $tmp1825.value;
    if ($tmp1823) goto $l1826;
    panda$core$Bit $tmp1828 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1817, &$s1827);
    $tmp1823 = $tmp1828.value;
    $l1826:;
    panda$core$Bit $tmp1829 = { $tmp1823 };
    $tmp1820 = $tmp1829.value;
    $l1822:;
    panda$core$Bit $tmp1830 = { $tmp1820 };
    if ($tmp1830.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1833 = (($fn1832) self->$class->vtable[60])(self);
        post1831 = $tmp1833;
        if (((panda$core$Bit) { post1831 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1805, ((panda$core$Object*) post1831));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1834 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1834->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1834->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1834, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1805, ((panda$core$Object*) $tmp1834));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1836 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1836->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1836->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1836, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1801.value).offset, ((panda$collections$ListView*) children1805));
    return $tmp1836;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1838;
    panda$collections$Array* children1841;
    org$pandalanguage$pandac$ASTNode* $tmp1840 = (($fn1839) self->$class->vtable[44])(self);
    decl1838 = $tmp1840;
    if (((panda$core$Bit) { decl1838 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1842 = (panda$collections$Array*) malloc(40);
    $tmp1842->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1842->refCount.value = 1;
    panda$collections$Array$init($tmp1842);
    children1841 = $tmp1842;
    panda$collections$Array$add$panda$collections$Array$T(children1841, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1841, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1841, ((panda$core$Object*) decl1838));
    org$pandalanguage$pandac$ASTNode* $tmp1844 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1844->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1844->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1844, ((panda$core$Int64) { 148 }), decl1838->offset, ((panda$collections$ListView*) children1841));
    return $tmp1844;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1846;
    org$pandalanguage$pandac$ASTNode* dc1849;
    org$pandalanguage$pandac$ASTNode* a1855;
    panda$core$Int64 $match$689261858;
    org$pandalanguage$pandac$parser$Token $tmp1848 = (($fn1847) self->$class->vtable[6])(self);
    start1846 = $tmp1848;
    panda$core$Bit $tmp1850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1846.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1850.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1852 = (($fn1851) self->$class->vtable[57])(self);
        dc1849 = $tmp1852;
        if (((panda$core$Bit) { dc1849 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1853 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1853->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1853->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1853, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        dc1849 = $tmp1853;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1857 = (($fn1856) self->$class->vtable[56])(self);
    a1855 = $tmp1857;
    if (((panda$core$Bit) { a1855 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1860 = (($fn1859) self->$class->vtable[6])(self);
        $match$689261858 = $tmp1860.kind;
        panda$core$Bit $tmp1861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261858, ((panda$core$Int64) { 17 }));
        if ($tmp1861.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1863 = (($fn1862) self->$class->vtable[65])(self, dc1849, a1855);
            return $tmp1863;
        }
        }
        else {
        panda$core$Bit $tmp1864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261858, ((panda$core$Int64) { 18 }));
        if ($tmp1864.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1866 = (($fn1865) self->$class->vtable[66])(self, dc1849, a1855);
            return $tmp1866;
        }
        }
        else {
        panda$core$Bit $tmp1868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261858, ((panda$core$Int64) { 21 }));
        bool $tmp1867 = $tmp1868.value;
        if ($tmp1867) goto $l1869;
        panda$core$Bit $tmp1870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261858, ((panda$core$Int64) { 20 }));
        $tmp1867 = $tmp1870.value;
        $l1869:;
        panda$core$Bit $tmp1871 = { $tmp1867 };
        if ($tmp1871.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1873 = (($fn1872) self->$class->vtable[61])(self, dc1849, a1855);
            return $tmp1873;
        }
        }
        else {
        panda$core$Bit $tmp1874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261858, ((panda$core$Int64) { 22 }));
        if ($tmp1874.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1876 = (($fn1875) self->$class->vtable[62])(self, dc1849, a1855);
            return $tmp1876;
        }
        }
        else {
        panda$core$Bit $tmp1880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261858, ((panda$core$Int64) { 23 }));
        bool $tmp1879 = $tmp1880.value;
        if ($tmp1879) goto $l1881;
        panda$core$Bit $tmp1882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261858, ((panda$core$Int64) { 24 }));
        $tmp1879 = $tmp1882.value;
        $l1881:;
        panda$core$Bit $tmp1883 = { $tmp1879 };
        bool $tmp1878 = $tmp1883.value;
        if ($tmp1878) goto $l1884;
        panda$core$Bit $tmp1885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261858, ((panda$core$Int64) { 25 }));
        $tmp1878 = $tmp1885.value;
        $l1884:;
        panda$core$Bit $tmp1886 = { $tmp1878 };
        bool $tmp1877 = $tmp1886.value;
        if ($tmp1877) goto $l1887;
        panda$core$Bit $tmp1888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$689261858, ((panda$core$Int64) { 26 }));
        $tmp1877 = $tmp1888.value;
        $l1887:;
        panda$core$Bit $tmp1889 = { $tmp1877 };
        if ($tmp1889.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1891 = (($fn1890) self->$class->vtable[63])(self, dc1849, a1855);
            return $tmp1891;
        }
        }
        else {
        {
            (($fn1893) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1892);
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
    panda$collections$Array* children1894;
    org$pandalanguage$pandac$parser$Token$nullable start1897;
    org$pandalanguage$pandac$parser$Token$nullable name1901;
    org$pandalanguage$pandac$ASTNode* generics1908;
    org$pandalanguage$pandac$ASTNode* superclass1916;
    org$pandalanguage$pandac$ASTNode* intfs1924;
    panda$collections$Array* members1932;
    org$pandalanguage$pandac$ASTNode* member1939;
    panda$collections$Array* $tmp1895 = (panda$collections$Array*) malloc(40);
    $tmp1895->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1895->refCount.value = 1;
    panda$collections$Array$init($tmp1895);
    children1894 = $tmp1895;
    panda$collections$Array$add$panda$collections$Array$T(children1894, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1894, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1900 = (($fn1899) self->$class->vtable[8])(self, ((panda$core$Int64) { 17 }), &$s1898);
    start1897 = $tmp1900;
    if (((panda$core$Bit) { !start1897.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1904 = (($fn1903) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1902);
    name1901 = $tmp1904;
    if (((panda$core$Bit) { !name1901.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1906 = (($fn1905) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1906.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1907.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1910 = (($fn1909) self->$class->vtable[54])(self);
        generics1908 = $tmp1910;
        if (((panda$core$Bit) { generics1908 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1894, ((panda$core$Object*) generics1908));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1911 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1911->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1911->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1911, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1894, ((panda$core$Object*) $tmp1911));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1914 = (($fn1913) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1914.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1915.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1918 = (($fn1917) self->$class->vtable[32])(self);
        superclass1916 = $tmp1918;
        if (((panda$core$Bit) { superclass1916 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1894, ((panda$core$Object*) superclass1916));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1919 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1919->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1919->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1919, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1894, ((panda$core$Object*) $tmp1919));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1922 = (($fn1921) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1922.kind, ((panda$core$Int64) { 103 }));
    if ($tmp1923.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1926 = (($fn1925) self->$class->vtable[55])(self);
        intfs1924 = $tmp1926;
        if (((panda$core$Bit) { intfs1924 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1894, ((panda$core$Object*) intfs1924));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1927 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1927->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1927->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1927, ((panda$core$Int64) { 139 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1894, ((panda$core$Object*) $tmp1927));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1931 = (($fn1930) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1929);
    if (((panda$core$Bit) { !$tmp1931.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1933 = (panda$collections$Array*) malloc(40);
    $tmp1933->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1933->refCount.value = 1;
    panda$collections$Array$init($tmp1933);
    members1932 = $tmp1933;
    $l1935:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1938 = (($fn1937) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1938.nonnull }).value) goto $l1936;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1941 = (($fn1940) self->$class->vtable[64])(self);
        member1939 = $tmp1941;
        if (((panda$core$Bit) { member1939 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1932, ((panda$core$Object*) member1939));
    }
    goto $l1935;
    $l1936:;
    org$pandalanguage$pandac$ASTNode* $tmp1942 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1942->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1942->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1942, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1897.value).offset, ((panda$collections$ListView*) members1932));
    panda$collections$Array$add$panda$collections$Array$T(children1894, ((panda$core$Object*) $tmp1942));
    org$pandalanguage$pandac$ASTNode* $tmp1944 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1944->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1944->refCount.value = 1;
    panda$core$String* $tmp1947 = (($fn1946) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1901.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1944, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1897.value).offset, ((panda$core$Object*) $tmp1947), ((panda$collections$ListView*) children1894));
    return $tmp1944;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1948;
    org$pandalanguage$pandac$parser$Token$nullable start1951;
    org$pandalanguage$pandac$parser$Token$nullable name1955;
    org$pandalanguage$pandac$ASTNode* generics1962;
    panda$collections$Array* intfs1967;
    org$pandalanguage$pandac$ASTNode* t1972;
    panda$collections$Array* members1986;
    org$pandalanguage$pandac$ASTNode* member1993;
    panda$collections$Array* $tmp1949 = (panda$collections$Array*) malloc(40);
    $tmp1949->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1949->refCount.value = 1;
    panda$collections$Array$init($tmp1949);
    children1948 = $tmp1949;
    panda$collections$Array$add$panda$collections$Array$T(children1948, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1948, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1954 = (($fn1953) self->$class->vtable[8])(self, ((panda$core$Int64) { 18 }), &$s1952);
    start1951 = $tmp1954;
    if (((panda$core$Bit) { !start1951.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1958 = (($fn1957) self->$class->vtable[8])(self, ((panda$core$Int64) { 48 }), &$s1956);
    name1955 = $tmp1958;
    if (((panda$core$Bit) { !name1955.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1960 = (($fn1959) self->$class->vtable[6])(self);
    panda$core$Bit $tmp1961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1960.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1961.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1964 = (($fn1963) self->$class->vtable[54])(self);
        generics1962 = $tmp1964;
        if (((panda$core$Bit) { generics1962 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1948, ((panda$core$Object*) generics1962));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1965 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp1965->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1965->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp1965, ((panda$core$Int64) { 138 }), ((panda$core$Int64) { -1 }));
        panda$collections$Array$add$panda$collections$Array$T(children1948, ((panda$core$Object*) $tmp1965));
    }
    }
    panda$collections$Array* $tmp1968 = (panda$collections$Array*) malloc(40);
    $tmp1968->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1968->refCount.value = 1;
    panda$collections$Array$init($tmp1968);
    intfs1967 = $tmp1968;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1971 = (($fn1970) self->$class->vtable[7])(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1971.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1974 = (($fn1973) self->$class->vtable[20])(self);
        t1972 = $tmp1974;
        if (((panda$core$Bit) { t1972 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1967, ((panda$core$Object*) t1972));
        $l1975:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1978 = (($fn1977) self->$class->vtable[7])(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1978.nonnull }).value) goto $l1976;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1980 = (($fn1979) self->$class->vtable[20])(self);
            t1972 = $tmp1980;
            if (((panda$core$Bit) { t1972 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1967, ((panda$core$Object*) t1972));
        }
        goto $l1975;
        $l1976:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1981 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1981->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1981->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1981, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1951.value).offset, ((panda$collections$ListView*) intfs1967));
    panda$collections$Array$add$panda$collections$Array$T(children1948, ((panda$core$Object*) $tmp1981));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1985 = (($fn1984) self->$class->vtable[8])(self, ((panda$core$Int64) { 99 }), &$s1983);
    if (((panda$core$Bit) { !$tmp1985.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1987 = (panda$collections$Array*) malloc(40);
    $tmp1987->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1987->refCount.value = 1;
    panda$collections$Array$init($tmp1987);
    members1986 = $tmp1987;
    $l1989:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1992 = (($fn1991) self->$class->vtable[7])(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1992.nonnull }).value) goto $l1990;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1995 = (($fn1994) self->$class->vtable[64])(self);
        member1993 = $tmp1995;
        if (((panda$core$Bit) { member1993 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1986, ((panda$core$Object*) member1993));
    }
    goto $l1989;
    $l1990:;
    org$pandalanguage$pandac$ASTNode* $tmp1996 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1996->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1996->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1996, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1951.value).offset, ((panda$collections$ListView*) members1986));
    panda$collections$Array$add$panda$collections$Array$T(children1948, ((panda$core$Object*) $tmp1996));
    org$pandalanguage$pandac$ASTNode* $tmp1998 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp1998->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1998->refCount.value = 1;
    panda$core$String* $tmp2001 = (($fn2000) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$parser$Token) name1955.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1998, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1951.value).offset, ((panda$core$Object*) $tmp2001), ((panda$collections$ListView*) children1948));
    return $tmp1998;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $match$742412002;
    {
        org$pandalanguage$pandac$parser$Token $tmp2004 = (($fn2003) self->$class->vtable[6])(self);
        $match$742412002 = $tmp2004.kind;
        panda$core$Bit $tmp2005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412002, ((panda$core$Int64) { 15 }));
        if ($tmp2005.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2007 = (($fn2006) self->$class->vtable[53])(self);
            return $tmp2007;
        }
        }
        else {
        panda$core$Bit $tmp2008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412002, ((panda$core$Int64) { 14 }));
        if ($tmp2008.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2010 = (($fn2009) self->$class->vtable[52])(self);
            return $tmp2010;
        }
        }
        else {
        panda$core$Bit $tmp2017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412002, ((panda$core$Int64) { 17 }));
        bool $tmp2016 = $tmp2017.value;
        if ($tmp2016) goto $l2018;
        panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412002, ((panda$core$Int64) { 18 }));
        $tmp2016 = $tmp2019.value;
        $l2018:;
        panda$core$Bit $tmp2020 = { $tmp2016 };
        bool $tmp2015 = $tmp2020.value;
        if ($tmp2015) goto $l2021;
        panda$core$Bit $tmp2022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412002, ((panda$core$Int64) { 19 }));
        $tmp2015 = $tmp2022.value;
        $l2021:;
        panda$core$Bit $tmp2023 = { $tmp2015 };
        bool $tmp2014 = $tmp2023.value;
        if ($tmp2014) goto $l2024;
        panda$core$Bit $tmp2025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412002, ((panda$core$Int64) { 21 }));
        $tmp2014 = $tmp2025.value;
        $l2024:;
        panda$core$Bit $tmp2026 = { $tmp2014 };
        bool $tmp2013 = $tmp2026.value;
        if ($tmp2013) goto $l2027;
        panda$core$Bit $tmp2028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412002, ((panda$core$Int64) { 20 }));
        $tmp2013 = $tmp2028.value;
        $l2027:;
        panda$core$Bit $tmp2029 = { $tmp2013 };
        bool $tmp2012 = $tmp2029.value;
        if ($tmp2012) goto $l2030;
        panda$core$Bit $tmp2031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412002, ((panda$core$Int64) { 13 }));
        $tmp2012 = $tmp2031.value;
        $l2030:;
        panda$core$Bit $tmp2032 = { $tmp2012 };
        bool $tmp2011 = $tmp2032.value;
        if ($tmp2011) goto $l2033;
        panda$core$Bit $tmp2034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$742412002, ((panda$core$Int64) { 11 }));
        $tmp2011 = $tmp2034.value;
        $l2033:;
        panda$core$Bit $tmp2035 = { $tmp2011 };
        if ($tmp2035.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2037 = (($fn2036) self->$class->vtable[64])(self);
            return $tmp2037;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2039 = (($fn2038) self->$class->vtable[51])(self);
            return $tmp2039;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2040;
    org$pandalanguage$pandac$ASTNode* entry2048;
    panda$collections$Array* $tmp2041 = (panda$collections$Array*) malloc(40);
    $tmp2041->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2041->refCount.value = 1;
    panda$collections$Array$init($tmp2041);
    entries2040 = $tmp2041;
    $l2043:;
    org$pandalanguage$pandac$parser$Token $tmp2046 = (($fn2045) self->$class->vtable[6])(self);
    panda$core$Bit $tmp2047 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2046.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp2047.value) goto $l2044;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2050 = (($fn2049) self->$class->vtable[67])(self);
        entry2048 = $tmp2050;
        if (((panda$core$Bit) { entry2048 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(entries2040, ((panda$core$Object*) entry2048));
    }
    goto $l2043;
    $l2044:;
    org$pandalanguage$pandac$ASTNode* $tmp2051 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
    $tmp2051->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2051->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2051, ((panda$core$Int64) { 152 }), ((panda$core$Int64) { 0 }), ((panda$collections$ListView*) entries2040));
    return $tmp2051;
}

