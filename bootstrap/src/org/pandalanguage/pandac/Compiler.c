#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/Array.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Stack.h"
#include "panda/core/UInt64.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/parser/Parser.h"
#include "org/pandalanguage/pandac/Scanner.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Alias.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/collections/MapView.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/List.h"
#include "panda/collections/ListView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/io/File.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/io/Console.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/io/InputStream.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn121)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn158)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn165)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn208)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn212)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn222)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn230)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn237)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn351)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn357)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn363)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn370)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn376)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn382)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn426)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn432)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn438)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn449)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn455)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn461)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn467)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn473)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn479)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn487)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn493)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn499)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn539)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn545)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn551)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn567)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn573)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn579)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn605)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn611)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn617)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn671)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn677)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn683)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn692)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn714)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn737)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn743)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn749)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn757)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn763)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn769)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn780)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn786)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn792)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn815)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn821)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn827)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn876)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn882)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn888)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn901)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn907)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn913)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn927)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn933)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn939)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn954)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn960)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn966)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn980)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn986)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn992)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1005)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1011)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1017)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1072)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1078)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1084)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1091)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1097)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1103)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1123)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1135)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1220)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1285)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1291)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1297)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1323)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1329)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1335)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1452)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1458)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1464)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1592)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1598)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1604)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1651)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1657)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1663)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1753)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1780)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1807)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1824)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1830)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1836)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1848)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1871)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1931)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1954)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2030)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2049)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2055)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2061)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2092)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2098)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2104)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2141)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2153)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2176)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2182)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2188)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2578)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2584)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2590)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2722)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2728)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2734)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2958)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2974)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2980)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2986)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3082)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3088)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3094)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3277)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3283)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3289)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3419)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3425)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3431)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3457)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3463)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3469)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3573)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3579)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3585)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3753)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3759)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3765)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3843)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3849)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3855)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3916)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3922)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3928)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3992)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3998)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4004)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4043)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4049)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4055)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4067)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4073)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4079)(panda$collections$Iterator*);
typedef void (*$fn4112)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4115)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4119)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4125)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4131)(panda$collections$Iterator*);
typedef void (*$fn4136)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4139)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4144)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4148)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4160)(panda$collections$Iterator*);
typedef void (*$fn4164)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4175)(org$pandalanguage$pandac$parser$Parser*, panda$core$String*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4177)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4183)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4189)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4195)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4204)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4210)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4216)(panda$collections$Iterator*);
typedef panda$core$Char8$nullable (*$fn4243)(panda$io$InputStream*);
typedef void (*$fn4265)(panda$core$Object*);
typedef void (*$fn4281)(org$pandalanguage$pandac$CodeGenerator*);

static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, 1 };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x38", 12, 1 };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x31\x36", 13, 1 };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x33\x32", 13, 1 };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x36\x34", 13, 1 };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x38", 13, 1 };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x31\x36", 14, 1 };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x33\x32", 14, 1 };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x36\x34", 14, 1 };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x6E\x74", 3, 1 };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x41\x72\x72\x61\x79", 23, 1 };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E", 28, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x56\x69\x65\x77", 32, 1 };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x57\x72\x69\x74\x65\x72", 34, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x64\x65\x6E\x74\x69\x74\x79\x4D\x61\x70", 29, 1 };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65\x41\x72\x72\x61\x79", 32, 1 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1 };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1 };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4B\x65\x79", 21, 1 };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74", 22, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x56\x69\x65\x77", 26, 1 };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, 1 };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x48\x61\x73\x68\x4D\x61\x70", 25, 1 };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70", 21, 1 };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x56\x69\x65\x77", 25, 1 };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x57\x72\x69\x74\x65\x72", 27, 1 };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x65\x74", 21, 1 };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x74\x61\x63\x6B", 23, 1 };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, 1 };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, 1 };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, 1 };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, 1 };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6F\x6D\x70\x61\x72\x61\x62\x6C\x65", 21, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x45\x71\x75\x61\x74\x61\x62\x6C\x65", 20, 1 };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, 1 };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, 1 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65", 20, 1 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4D\x75\x74\x61\x62\x6C\x65\x53\x74\x72\x69\x6E\x67", 24, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, 1 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17, 1 };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26, 1 };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13, 1 };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29, 1 };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20, 1 };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30, 1 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26, 1 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21, 1 };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 1 };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72", 18, 1 };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1 };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20", 6, 1 };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x27", 19, 1 };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 1 };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 9, 1 };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1 };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73\x20\x27", 12, 1 };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6F\x66\x20\x63\x6C\x61\x73\x73\x20\x27", 12, 1 };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 1 };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6F\x72\x65\x20\x61\x6E\x79\x20\x73\x75\x70\x65\x72\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x73", 33, 1 };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6D\x6F\x72\x65\x20\x74\x68\x61\x6E\x20\x6F\x6E\x65\x20\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73", 30, 1 };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, 1 };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 1 };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1 };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, 1 };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1 };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, 1 };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 1 };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 1 };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 1 };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, 1 };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 1 };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 1 };
static panda$core$String $s1687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 1 };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, 1 };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, 1 };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1 };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, 1 };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 1 };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 1 };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, 1 };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 1 };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, 1 };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 1 };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 1 };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, 1 };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1 };
static panda$core$String $s2135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 1 };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 1 };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 1 };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1 };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 1 };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1 };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, 1 };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 1 };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, 1 };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 1 };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 1 };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 1 };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 1 };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, 1 };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, 1 };
static panda$core$String $s2952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, 1 };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 1 };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, 1 };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, 1 };
static panda$core$String $s3035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 1 };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, 1 };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 1 };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 1 };
static panda$core$String $s3219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 1 };
static panda$core$String $s3313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 1 };
static panda$core$String $s3321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 1 };
static panda$core$String $s3323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 1 };
static panda$core$String $s3438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 1 };
static panda$core$String $s3440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, 1 };
static panda$core$String $s3476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 1 };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 1 };
static panda$core$String $s3480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s3482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 1 };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, 1 };
static panda$core$String $s3496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, 1 };
static panda$core$String $s3512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 1 };
static panda$core$String $s3532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s3599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 1 };
static panda$core$String $s3709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1 };
static panda$core$String $s4277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

void org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$CodeGenerator* p_codeGenerator, org$pandalanguage$pandac$Compiler$Settings* p_settings) {
    self->compiling = NULL;
    panda$collections$Array* $tmp1 = (panda$collections$Array*) malloc(40);
    $tmp1->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1->refCount.value = 1;
    panda$collections$Array$init($tmp1);
    self->compilationQueue = $tmp1;
    panda$collections$HashMap* $tmp3 = (panda$collections$HashMap*) malloc(56);
    $tmp3->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp3->refCount.value = 1;
    panda$collections$HashMap$init($tmp3);
    self->scans = $tmp3;
    panda$collections$HashMap* $tmp5 = (panda$collections$HashMap*) malloc(56);
    $tmp5->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp5->refCount.value = 1;
    panda$collections$HashMap$init($tmp5);
    self->classes = $tmp5;
    panda$collections$Stack* $tmp7 = (panda$collections$Stack*) malloc(24);
    $tmp7->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp7->refCount.value = 1;
    panda$collections$Stack$init($tmp7);
    self->currentFile = $tmp7;
    panda$collections$Stack* $tmp9 = (panda$collections$Stack*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp9->refCount.value = 1;
    panda$collections$Stack$init($tmp9);
    self->currentClass = $tmp9;
    panda$collections$Stack* $tmp11 = (panda$collections$Stack*) malloc(24);
    $tmp11->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp11->refCount.value = 1;
    panda$collections$Stack$init($tmp11);
    self->currentMethod = $tmp11;
    panda$collections$Stack* $tmp13 = (panda$collections$Stack*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp13->refCount.value = 1;
    panda$collections$Stack$init($tmp13);
    self->loops = $tmp13;
    self->reusedValueCount = ((panda$core$UInt64) { 0 });
    self->errorCount = ((panda$core$Int64) { 0 });
    self->reportErrors = ((panda$core$Bit) { true });
    self->settings = p_settings;
    org$pandalanguage$pandac$parser$Parser* $tmp15 = (org$pandalanguage$pandac$parser$Parser*) malloc(80);
    $tmp15->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class;
    $tmp15->refCount.value = 1;
    org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter($tmp15, ((org$pandalanguage$pandac$ErrorReporter*) self));
    self->parser = $tmp15;
    org$pandalanguage$pandac$Scanner* $tmp17 = (org$pandalanguage$pandac$Scanner*) malloc(24);
    $tmp17->$class = (panda$core$Class*) &org$pandalanguage$pandac$Scanner$class;
    $tmp17->refCount.value = 1;
    org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler($tmp17, self);
    self->scanner = $tmp17;
    org$pandalanguage$pandac$SymbolTable* $tmp19 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp19->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp19->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler($tmp19, self);
    self->root = $tmp19;
    self->symbolTable = self->root;
    self->codeGenerator = p_codeGenerator;
    ITable* $tmp21 = p_codeGenerator->$class->itable;
    while ($tmp21->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp21 = $tmp21->next;
    }
    $fn23 $tmp22 = $tmp21->methods[0];
    $tmp22(p_codeGenerator, self);
    org$pandalanguage$pandac$Type* $tmp24 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp24->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp24->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp24, &$s26, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { 1 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp24));
    org$pandalanguage$pandac$Type* $tmp27 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp27->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp27->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp27, &$s29, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp27));
    org$pandalanguage$pandac$Type* $tmp30 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp30->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp30->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp30, &$s32, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp30));
    org$pandalanguage$pandac$Type* $tmp33 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp33->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp33->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp33, &$s35, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp33));
    org$pandalanguage$pandac$Type* $tmp36 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp36->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp36->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp36, &$s38, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp36));
    org$pandalanguage$pandac$Type* $tmp39 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp39->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp39->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp39, &$s41, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp39));
    org$pandalanguage$pandac$Type* $tmp42 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp42->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp42->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp42, &$s44, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp42));
    org$pandalanguage$pandac$Type* $tmp45 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp45->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp45->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp45, &$s47, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp45));
    org$pandalanguage$pandac$Type* $tmp48 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp48->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp48->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp48, &$s50, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }), ((panda$core$Bit) { true }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp48));
    org$pandalanguage$pandac$Alias* $tmp51 = (org$pandalanguage$pandac$Alias*) malloc(48);
    $tmp51->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp51->refCount.value = 1;
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$panda$core$Int64($tmp51, &$s53, &$s54, ((panda$core$Int64) { -1 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp51));
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s55);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s56);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s57);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s58);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s59);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s60);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s61);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s62);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s63);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s64);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s65);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s66);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s67);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s68);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s69);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s70);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s71);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s72);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s73);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s74);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s75);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s76);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s77);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s78);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s79);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s80);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s81);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s82);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s83);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s84);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s85);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s86);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s87);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s88);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s89);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s90);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s91);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s92);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s93);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s94);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s95);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s96);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s97);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s98);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s99);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s100);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s101);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s102);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s103);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s104);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s105);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s106);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s107);
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp110;
    org$pandalanguage$pandac$Alias* $tmp108 = (org$pandalanguage$pandac$Alias*) malloc(48);
    $tmp108->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp108->refCount.value = 1;
    panda$core$String$Index$nullable $tmp112 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s111);
    panda$core$String$Index $tmp113 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp112.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp110, ((panda$core$String$Index$nullable) { $tmp113, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp114 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp110);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$panda$core$Int64($tmp108, $tmp114, p_name, ((panda$core$Int64) { -1 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp108));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$String* alias117;
    org$pandalanguage$pandac$ClassDecl* result124;
    panda$core$String$Index$nullable idx128;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp133;
    org$pandalanguage$pandac$Symbol* rootAlias148;
    panda$core$Int64 $tmp115 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp116 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp115, ((panda$core$Int64) { 0 }));
    if ($tmp116.value) {
    {
        panda$core$Object* $tmp118 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        ITable* $tmp119 = ((org$pandalanguage$pandac$ClassDecl*) $tmp118)->aliases->$class->itable;
        while ($tmp119->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp119 = $tmp119->next;
        }
        $fn121 $tmp120 = $tmp119->methods[1];
        panda$core$Object* $tmp122 = $tmp120(((org$pandalanguage$pandac$ClassDecl*) $tmp118)->aliases, ((panda$core$Object*) p_name));
        alias117 = ((panda$core$String*) $tmp122);
        if (((panda$core$Bit) { alias117 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp123 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, alias117);
            return $tmp123;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp125 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
    result124 = $tmp125;
    panda$core$Int64 $tmp126 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp127 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp126, ((panda$core$Int64) { 0 }));
    if ($tmp127.value) {
    {
        if (((panda$core$Bit) { result124 == NULL }).value) {
        {
            panda$core$Object* $tmp129 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$core$String$Index$nullable $tmp131 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp129))->name, &$s130);
            idx128 = $tmp131;
            if (((panda$core$Bit) { idx128.nonnull }).value) {
            {
                panda$core$Object* $tmp132 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp133, ((panda$core$String$Index$nullable) { .nonnull = false }), idx128, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
                panda$core$String* $tmp134 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp132))->name, $tmp133);
                panda$core$String* $tmp135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp134, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp136 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp135);
                result124 = $tmp136;
            }
            }
        }
        }
        if (((panda$core$Bit) { result124 == NULL }).value) {
        {
            panda$core$Object* $tmp137 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp137))->name, &$s138);
            panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp139, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp141 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp140);
            result124 = $tmp141;
        }
        }
        bool $tmp142 = ((panda$core$Bit) { result124 == NULL }).value;
        if (!$tmp142) goto $l143;
        panda$core$Object* $tmp144 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        $tmp142 = ((panda$core$Bit) { ((org$pandalanguage$pandac$ClassDecl*) $tmp144)->owner != NULL }).value;
        $l143:;
        panda$core$Bit $tmp145 = { $tmp142 };
        if ($tmp145.value) {
        {
            panda$core$Object* $tmp146 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp146)->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp147 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
            result124 = $tmp147;
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result124 == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp149 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->root, p_name);
        rootAlias148 = $tmp149;
        bool $tmp150 = ((panda$core$Bit) { rootAlias148 != NULL }).value;
        if (!$tmp150) goto $l151;
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rootAlias148->kind, ((panda$core$Int64) { 200 }));
        $tmp150 = $tmp152.value;
        $l151:;
        panda$core$Bit $tmp153 = { $tmp150 };
        if ($tmp153.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp154 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Alias*) rootAlias148)->fullName);
            result124 = $tmp154;
        }
        }
    }
    }
    return result124;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 expectedCount155;
    panda$collections$ListView* foundTypes160;
    panda$core$Int64 foundCount162;
    panda$core$String* s168;
    panda$core$Range$LTpanda$core$Int64$GT $tmp187;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    PANDA_ASSERT(p_type->resolved.value);
    ITable* $tmp156 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
    while ($tmp156->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp156 = $tmp156->next;
    }
    $fn158 $tmp157 = $tmp156->methods[0];
    panda$core$Int64 $tmp159 = $tmp157(((panda$collections$CollectionView*) p_cl->parameters));
    expectedCount155 = $tmp159;
    panda$collections$ListView* $tmp161 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type);
    foundTypes160 = $tmp161;
    ITable* $tmp163 = ((panda$collections$CollectionView*) foundTypes160)->$class->itable;
    while ($tmp163->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp163 = $tmp163->next;
    }
    $fn165 $tmp164 = $tmp163->methods[0];
    panda$core$Int64 $tmp166 = $tmp164(((panda$collections$CollectionView*) foundTypes160));
    foundCount162 = $tmp166;
    panda$core$Bit $tmp167 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(expectedCount155, foundCount162);
    if ($tmp167.value) {
    {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expectedCount155, ((panda$core$Int64) { 1 }));
        if ($tmp169.value) {
        {
            s168 = &$s170;
        }
        }
        else {
        {
            s168 = &$s171;
        }
        }
        panda$core$String* $tmp173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s172, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp173, &$s174);
        panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp175, ((panda$core$Object*) wrap_panda$core$Int64(expectedCount155)));
        panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s177);
        panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, s168);
        panda$core$String* $tmp181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp179, &$s180);
        panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s182, ((panda$core$Object*) wrap_panda$core$Int64(foundCount162)));
        panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, &$s184);
        panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp181, $tmp185);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp186);
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp187, ((panda$core$Int64) { 0 }), expectedCount155, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp189 = $tmp187.start.value;
    panda$core$Int64 i188 = { $tmp189 };
    int64_t $tmp191 = $tmp187.end.value;
    int64_t $tmp192 = $tmp187.step.value;
    bool $tmp193 = $tmp187.inclusive.value;
    bool $tmp200 = $tmp192 > 0;
    if ($tmp200) goto $l198; else goto $l199;
    $l198:;
    if ($tmp193) goto $l201; else goto $l202;
    $l201:;
    if ($tmp189 <= $tmp191) goto $l194; else goto $l196;
    $l202:;
    if ($tmp189 < $tmp191) goto $l194; else goto $l196;
    $l199:;
    if ($tmp193) goto $l203; else goto $l204;
    $l203:;
    if ($tmp189 >= $tmp191) goto $l194; else goto $l196;
    $l204:;
    if ($tmp189 > $tmp191) goto $l194; else goto $l196;
    $l194:;
    {
        ITable* $tmp206 = foundTypes160->$class->itable;
        while ($tmp206->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp206 = $tmp206->next;
        }
        $fn208 $tmp207 = $tmp206->methods[0];
        panda$core$Object* $tmp209 = $tmp207(foundTypes160, i188);
        ITable* $tmp210 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp210->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp210 = $tmp210->next;
        }
        $fn212 $tmp211 = $tmp210->methods[0];
        panda$core$Object* $tmp213 = $tmp211(((panda$collections$ListView*) p_cl->parameters), i188);
        org$pandalanguage$pandac$Type* $tmp214 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp213)->bound);
        panda$core$Int64$nullable $tmp215 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp209), $tmp214);
        if (((panda$core$Bit) { !$tmp215.nonnull }).value) {
        {
            panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s216, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s218);
            ITable* $tmp220 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp220->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp220 = $tmp220->next;
            }
            $fn222 $tmp221 = $tmp220->methods[0];
            panda$core$Object* $tmp223 = $tmp221(((panda$collections$ListView*) p_cl->parameters), i188);
            panda$core$String* $tmp224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp223))->name);
            panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp224, &$s225);
            ITable* $tmp228 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp228->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp228 = $tmp228->next;
            }
            $fn230 $tmp229 = $tmp228->methods[0];
            panda$core$Object* $tmp231 = $tmp229(((panda$collections$ListView*) p_cl->parameters), i188);
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s227, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp231)->bound));
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s233);
            ITable* $tmp235 = foundTypes160->$class->itable;
            while ($tmp235->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp235 = $tmp235->next;
            }
            $fn237 $tmp236 = $tmp235->methods[0];
            panda$core$Object* $tmp238 = $tmp236(foundTypes160, i188);
            panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp234, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp238)));
            panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s240);
            panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, $tmp241);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp242);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l197:;
    if ($tmp200) goto $l244; else goto $l245;
    $l244:;
    int64_t $tmp246 = $tmp191 - i188.value;
    if ($tmp193) goto $l247; else goto $l248;
    $l247:;
    if ($tmp246 >= $tmp192) goto $l243; else goto $l196;
    $l248:;
    if ($tmp246 > $tmp192) goto $l243; else goto $l196;
    $l245:;
    int64_t $tmp250 = i188.value - $tmp191;
    if ($tmp193) goto $l251; else goto $l252;
    $l251:;
    if ($tmp250 >= -$tmp192) goto $l243; else goto $l196;
    $l252:;
    if ($tmp250 > -$tmp192) goto $l243; else goto $l196;
    $l243:;
    i188.value += $tmp192;
    goto $l194;
    $l196:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved254;
    org$pandalanguage$pandac$Type* result256;
    org$pandalanguage$pandac$Symbol* s260;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp264;
    panda$collections$Array* subtypes276;
    org$pandalanguage$pandac$Type* sub279;
    panda$collections$Array* subtypes289;
    org$pandalanguage$pandac$Type* base292;
    panda$core$MutableString* name295;
    panda$core$String* separator300;
    panda$core$Range$LTpanda$core$Int64$GT $tmp302;
    org$pandalanguage$pandac$Type* resolved322;
    org$pandalanguage$pandac$Type* result338;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp255 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved254 = $tmp255;
            if (((panda$core$Bit) { resolved254 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp257 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved254);
                result256 = $tmp257;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp258 = org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, resolved254, result256);
                    panda$core$Bit $tmp259 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp258);
                    if ($tmp259.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result256;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp261 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s260 = $tmp261;
            if (((panda$core$Bit) { s260 != NULL }).value) {
            {
                switch (s260->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp262 = (org$pandalanguage$pandac$Type*) malloc(80);
                        $tmp262->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp262->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp262, ((org$pandalanguage$pandac$Alias*) s260)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$core$Bit) { true }));
                        return $tmp262;
                    }
                    break;
                    case 203:
                    {
                        gp264 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s260);
                        org$pandalanguage$pandac$ClassDecl* $tmp265 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, gp264->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp265);
                        org$pandalanguage$pandac$Type* $tmp266 = (org$pandalanguage$pandac$Type*) malloc(80);
                        $tmp266->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp266->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp266, gp264);
                        return $tmp266;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s260);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp268 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s260));
                        return $tmp268;
                    }
                    break;
                }
            }
            }
            org$pandalanguage$pandac$Position* $tmp269 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset);
            panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s270, ((panda$core$Object*) p_type));
            panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp271, &$s272);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp269, $tmp273);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp274 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp274, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp275.value);
            panda$collections$Array* $tmp277 = (panda$collections$Array*) malloc(40);
            $tmp277->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp277->refCount.value = 1;
            panda$collections$Array$init($tmp277);
            subtypes276 = $tmp277;
            panda$core$Object* $tmp280 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp281 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp280));
            sub279 = $tmp281;
            if (((panda$core$Bit) { sub279 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes276, ((panda$core$Object*) sub279));
            org$pandalanguage$pandac$Type* $tmp282 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp282->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp282->refCount.value = 1;
            panda$core$Object* $tmp284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes276, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp284))->name, &$s285);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp282, $tmp286, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes276), ((panda$core$Bit) { true }));
            return $tmp282;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp287 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp288 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp287, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp288.value);
            panda$collections$Array* $tmp290 = (panda$collections$Array*) malloc(40);
            $tmp290->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp290->refCount.value = 1;
            panda$collections$Array$init($tmp290);
            subtypes289 = $tmp290;
            panda$core$Object* $tmp293 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp294 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp293), ((panda$core$Bit) { false }));
            base292 = $tmp294;
            if (((panda$core$Bit) { base292 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes289, ((panda$core$Object*) base292));
            panda$core$MutableString* $tmp296 = (panda$core$MutableString*) malloc(40);
            $tmp296->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp296->refCount.value = 1;
            panda$core$Object* $tmp298 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes289, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp296, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp298))->name);
            name295 = $tmp296;
            panda$core$MutableString$append$panda$core$String(name295, &$s299);
            separator300 = &$s301;
            panda$core$Int64 $tmp303 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp302, ((panda$core$Int64) { 1 }), $tmp303, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp305 = $tmp302.start.value;
            panda$core$Int64 i304 = { $tmp305 };
            int64_t $tmp307 = $tmp302.end.value;
            int64_t $tmp308 = $tmp302.step.value;
            bool $tmp309 = $tmp302.inclusive.value;
            bool $tmp316 = $tmp308 > 0;
            if ($tmp316) goto $l314; else goto $l315;
            $l314:;
            if ($tmp309) goto $l317; else goto $l318;
            $l317:;
            if ($tmp305 <= $tmp307) goto $l310; else goto $l312;
            $l318:;
            if ($tmp305 < $tmp307) goto $l310; else goto $l312;
            $l315:;
            if ($tmp309) goto $l319; else goto $l320;
            $l319:;
            if ($tmp305 >= $tmp307) goto $l310; else goto $l312;
            $l320:;
            if ($tmp305 > $tmp307) goto $l310; else goto $l312;
            $l310:;
            {
                panda$core$Object* $tmp323 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, i304);
                org$pandalanguage$pandac$Type* $tmp324 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp323));
                resolved322 = $tmp324;
                if (((panda$core$Bit) { resolved322 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes289, ((panda$core$Object*) resolved322));
                panda$core$MutableString$append$panda$core$String(name295, separator300);
                panda$core$MutableString$append$panda$core$String(name295, ((org$pandalanguage$pandac$Symbol*) resolved322)->name);
                separator300 = &$s325;
            }
            $l313:;
            if ($tmp316) goto $l327; else goto $l328;
            $l327:;
            int64_t $tmp329 = $tmp307 - i304.value;
            if ($tmp309) goto $l330; else goto $l331;
            $l330:;
            if ($tmp329 >= $tmp308) goto $l326; else goto $l312;
            $l331:;
            if ($tmp329 > $tmp308) goto $l326; else goto $l312;
            $l328:;
            int64_t $tmp333 = i304.value - $tmp307;
            if ($tmp309) goto $l334; else goto $l335;
            $l334:;
            if ($tmp333 >= -$tmp308) goto $l326; else goto $l312;
            $l335:;
            if ($tmp333 > -$tmp308) goto $l326; else goto $l312;
            $l326:;
            i304.value += $tmp308;
            goto $l310;
            $l312:;
            panda$core$MutableString$append$panda$core$String(name295, &$s337);
            org$pandalanguage$pandac$Type* $tmp339 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp339->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp339->refCount.value = 1;
            panda$core$String* $tmp341 = panda$core$MutableString$convert$R$panda$core$String(name295);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp339, $tmp341, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((panda$collections$ListView*) subtypes289), ((panda$core$Bit) { true }));
            result338 = $tmp339;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp342 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(result338->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp343 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp342));
                panda$core$Bit $tmp344 = org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, $tmp343, result338);
                panda$core$Bit $tmp345 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp344);
                if ($tmp345.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result338;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp346 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp346;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old347;
    panda$collections$Iterator* p$Iter348;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p360;
    org$pandalanguage$pandac$Type* resolved365;
    panda$collections$Iterator* rawS$Iter367;
    org$pandalanguage$pandac$Type* rawS379;
    org$pandalanguage$pandac$Type* s384;
    org$pandalanguage$pandac$ClassDecl* sClass386;
    panda$collections$Iterator* m$Iter423;
    org$pandalanguage$pandac$MethodDecl* m435;
    panda$collections$Iterator* intf$Iter446;
    org$pandalanguage$pandac$Type* intf458;
    panda$collections$Iterator* p$Iter464;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p476;
    org$pandalanguage$pandac$ClassDecl* cl481;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old347 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp349 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp349 = $tmp349->next;
        }
        $fn351 $tmp350 = $tmp349->methods[0];
        panda$collections$Iterator* $tmp352 = $tmp350(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter348 = $tmp352;
        $l353:;
        ITable* $tmp355 = p$Iter348->$class->itable;
        while ($tmp355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp355 = $tmp355->next;
        }
        $fn357 $tmp356 = $tmp355->methods[0];
        panda$core$Bit $tmp358 = $tmp356(p$Iter348);
        panda$core$Bit $tmp359 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp358);
        if (!$tmp359.value) goto $l354;
        {
            ITable* $tmp361 = p$Iter348->$class->itable;
            while ($tmp361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp361 = $tmp361->next;
            }
            $fn363 $tmp362 = $tmp361->methods[1];
            panda$core$Object* $tmp364 = $tmp362(p$Iter348);
            p360 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp364);
            org$pandalanguage$pandac$Type* $tmp366 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p360->bound, ((panda$core$Bit) { false }));
            resolved365 = $tmp366;
            if (((panda$core$Bit) { resolved365 != NULL }).value) {
            {
                p360->bound = resolved365;
            }
            }
        }
        goto $l353;
        $l354:;
    }
    {
        ITable* $tmp368 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp368->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp368 = $tmp368->next;
        }
        $fn370 $tmp369 = $tmp368->methods[0];
        panda$collections$Iterator* $tmp371 = $tmp369(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter367 = $tmp371;
        $l372:;
        ITable* $tmp374 = rawS$Iter367->$class->itable;
        while ($tmp374->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp374 = $tmp374->next;
        }
        $fn376 $tmp375 = $tmp374->methods[0];
        panda$core$Bit $tmp377 = $tmp375(rawS$Iter367);
        panda$core$Bit $tmp378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp377);
        if (!$tmp378.value) goto $l373;
        {
            ITable* $tmp380 = rawS$Iter367->$class->itable;
            while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp380 = $tmp380->next;
            }
            $fn382 $tmp381 = $tmp380->methods[1];
            panda$core$Object* $tmp383 = $tmp381(rawS$Iter367);
            rawS379 = ((org$pandalanguage$pandac$Type*) $tmp383);
            org$pandalanguage$pandac$Type* $tmp385 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS379, ((panda$core$Bit) { false }));
            s384 = $tmp385;
            if (((panda$core$Bit) { s384 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp387 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s384);
                sClass386 = $tmp387;
                if (((panda$core$Bit) { sClass386 != NULL }).value) {
                {
                    panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass386->classKind, ((panda$core$Int64) { 5011 }));
                    if ($tmp388.value) {
                    {
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s384;
                            panda$core$Int64 $tmp389 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp390 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp389, ((panda$core$Int64) { 0 }));
                            if ($tmp390.value) {
                            {
                                panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s391, ((panda$core$Object*) s384));
                                panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp392, &$s393);
                                panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp395, &$s396);
                                panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s398);
                                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s384)->offset, $tmp399);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s400, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp401, &$s402);
                            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s384)->offset, $tmp403);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass386->classKind, ((panda$core$Int64) { 5012 }));
                        PANDA_ASSERT($tmp404.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s384));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l372;
        $l373:;
    }
    bool $tmp405 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp405) goto $l406;
    panda$core$Bit $tmp408 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s407);
    $tmp405 = $tmp408.value;
    $l406:;
    panda$core$Bit $tmp409 = { $tmp405 };
    if ($tmp409.value) {
    {
        org$pandalanguage$pandac$Type* $tmp410 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp410;
    }
    }
    bool $tmp412 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp412) goto $l413;
    panda$core$Bit $tmp414 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp415 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp414);
    $tmp412 = $tmp415.value;
    $l413:;
    panda$core$Bit $tmp416 = { $tmp412 };
    bool $tmp411 = $tmp416.value;
    if (!$tmp411) goto $l417;
    panda$core$Bit $tmp419 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s418);
    $tmp411 = $tmp419.value;
    $l417:;
    panda$core$Bit $tmp420 = { $tmp411 };
    if ($tmp420.value) {
    {
        panda$core$Int64 $tmp421 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp422 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp421);
        p_cl->annotations->flags = $tmp422;
        {
            ITable* $tmp424 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp424->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp424 = $tmp424->next;
            }
            $fn426 $tmp425 = $tmp424->methods[0];
            panda$collections$Iterator* $tmp427 = $tmp425(((panda$collections$Iterable*) p_cl->methods));
            m$Iter423 = $tmp427;
            $l428:;
            ITable* $tmp430 = m$Iter423->$class->itable;
            while ($tmp430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp430 = $tmp430->next;
            }
            $fn432 $tmp431 = $tmp430->methods[0];
            panda$core$Bit $tmp433 = $tmp431(m$Iter423);
            panda$core$Bit $tmp434 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp433);
            if (!$tmp434.value) goto $l429;
            {
                ITable* $tmp436 = m$Iter423->$class->itable;
                while ($tmp436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp436 = $tmp436->next;
                }
                $fn438 $tmp437 = $tmp436->methods[1];
                panda$core$Object* $tmp439 = $tmp437(m$Iter423);
                m435 = ((org$pandalanguage$pandac$MethodDecl*) $tmp439);
                panda$core$Int64 $tmp440 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp441 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m435->annotations->flags, $tmp440);
                m435->annotations->flags = $tmp441;
                panda$core$Bit $tmp442 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m435->annotations, m435->body);
                if ($tmp442.value) {
                {
                    panda$core$Int64 $tmp443 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp444 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m435->annotations->flags, $tmp443);
                    m435->annotations->flags = $tmp444;
                }
                }
            }
            goto $l428;
            $l429:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp445 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, $tmp445, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp447 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp447->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp447 = $tmp447->next;
        }
        $fn449 $tmp448 = $tmp447->methods[0];
        panda$collections$Iterator* $tmp450 = $tmp448(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter446 = $tmp450;
        $l451:;
        ITable* $tmp453 = intf$Iter446->$class->itable;
        while ($tmp453->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp453 = $tmp453->next;
        }
        $fn455 $tmp454 = $tmp453->methods[0];
        panda$core$Bit $tmp456 = $tmp454(intf$Iter446);
        panda$core$Bit $tmp457 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp456);
        if (!$tmp457.value) goto $l452;
        {
            ITable* $tmp459 = intf$Iter446->$class->itable;
            while ($tmp459->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp459 = $tmp459->next;
            }
            $fn461 $tmp460 = $tmp459->methods[1];
            panda$core$Object* $tmp462 = $tmp460(intf$Iter446);
            intf458 = ((org$pandalanguage$pandac$Type*) $tmp462);
            org$pandalanguage$pandac$ClassDecl* $tmp463 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf458);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, $tmp463, intf458);
        }
        goto $l451;
        $l452:;
    }
    {
        ITable* $tmp465 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp465->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp465 = $tmp465->next;
        }
        $fn467 $tmp466 = $tmp465->methods[0];
        panda$collections$Iterator* $tmp468 = $tmp466(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter464 = $tmp468;
        $l469:;
        ITable* $tmp471 = p$Iter464->$class->itable;
        while ($tmp471->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp471 = $tmp471->next;
        }
        $fn473 $tmp472 = $tmp471->methods[0];
        panda$core$Bit $tmp474 = $tmp472(p$Iter464);
        panda$core$Bit $tmp475 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp474);
        if (!$tmp475.value) goto $l470;
        {
            ITable* $tmp477 = p$Iter464->$class->itable;
            while ($tmp477->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp477 = $tmp477->next;
            }
            $fn479 $tmp478 = $tmp477->methods[1];
            panda$core$Object* $tmp480 = $tmp478(p$Iter464);
            p476 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp480);
            org$pandalanguage$pandac$ClassDecl* $tmp482 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p476->bound);
            cl481 = $tmp482;
            if (((panda$core$Bit) { cl481 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl481)->offset, cl481, p476->bound);
            }
            }
        }
        goto $l469;
        $l470:;
    }
    self->symbolTable = old347;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old483;
    panda$collections$Iterator* p$Iter484;
    org$pandalanguage$pandac$MethodDecl$Parameter* p496;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_m->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old483 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp485 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp485->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp485 = $tmp485->next;
        }
        $fn487 $tmp486 = $tmp485->methods[0];
        panda$collections$Iterator* $tmp488 = $tmp486(((panda$collections$Iterable*) p_m->parameters));
        p$Iter484 = $tmp488;
        $l489:;
        ITable* $tmp491 = p$Iter484->$class->itable;
        while ($tmp491->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp491 = $tmp491->next;
        }
        $fn493 $tmp492 = $tmp491->methods[0];
        panda$core$Bit $tmp494 = $tmp492(p$Iter484);
        panda$core$Bit $tmp495 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp494);
        if (!$tmp495.value) goto $l490;
        {
            ITable* $tmp497 = p$Iter484->$class->itable;
            while ($tmp497->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp497 = $tmp497->next;
            }
            $fn499 $tmp498 = $tmp497->methods[1];
            panda$core$Object* $tmp500 = $tmp498(p$Iter484);
            p496 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp500);
            org$pandalanguage$pandac$Type* $tmp501 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p496->type);
            p496->type = $tmp501;
        }
        goto $l489;
        $l490:;
    }
    org$pandalanguage$pandac$Type* $tmp502 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp502;
    p_m->resolved = ((panda$core$Bit) { true });
    self->symbolTable = old483;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old503;
    org$pandalanguage$pandac$Type* resolved506;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_f->owner->source));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old503 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp504 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp505 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp504);
    if ($tmp505.value) {
    {
        org$pandalanguage$pandac$Type* $tmp507 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved506 = $tmp507;
        if (((panda$core$Bit) { resolved506 != NULL }).value) {
        {
            p_f->type = resolved506;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp508 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp509 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp508, p_f->type);
                p_f->value = $tmp509;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old503;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->offset, &$s510);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old503;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp511 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp511;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
        self->symbolTable = old503;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp512 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp512;
    org$pandalanguage$pandac$IRNode* $tmp513 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp513;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    self->symbolTable = old503;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (p_expr->kind.value) {
        case 1037:
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s514);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s515);
            panda$core$Object* $tmp516 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp516)->payload)));
            return NULL;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, &$s517);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp518 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp519 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp518);
            return $tmp519;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp520 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp520) goto $l521;
    org$pandalanguage$pandac$Type* $tmp522 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp523 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_cl->rawSuper, $tmp522);
    $tmp520 = ((panda$core$Bit) { $tmp523.nonnull }).value;
    $l521:;
    panda$core$Bit $tmp524 = { $tmp520 };
    return $tmp524;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result525;
    org$pandalanguage$pandac$ClassDecl* s533;
    panda$collections$Iterator* f$Iter536;
    org$pandalanguage$pandac$FieldDecl* f548;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp526 = (panda$collections$Array*) malloc(40);
    $tmp526->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp526->refCount.value = 1;
    panda$collections$Array$init($tmp526);
    result525 = $tmp526;
    panda$core$Bit $tmp529 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp530 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp529);
    bool $tmp528 = $tmp530.value;
    if (!$tmp528) goto $l531;
    $tmp528 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l531:;
    panda$core$Bit $tmp532 = { $tmp528 };
    if ($tmp532.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp534 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s533 = $tmp534;
        if (((panda$core$Bit) { s533 != NULL }).value) {
        {
            panda$collections$ListView* $tmp535 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s533);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result525, ((panda$collections$CollectionView*) $tmp535));
        }
        }
    }
    }
    {
        ITable* $tmp537 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp537->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp537 = $tmp537->next;
        }
        $fn539 $tmp538 = $tmp537->methods[0];
        panda$collections$Iterator* $tmp540 = $tmp538(((panda$collections$Iterable*) p_cl->fields));
        f$Iter536 = $tmp540;
        $l541:;
        ITable* $tmp543 = f$Iter536->$class->itable;
        while ($tmp543->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp543 = $tmp543->next;
        }
        $fn545 $tmp544 = $tmp543->methods[0];
        panda$core$Bit $tmp546 = $tmp544(f$Iter536);
        panda$core$Bit $tmp547 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp546);
        if (!$tmp547.value) goto $l542;
        {
            ITable* $tmp549 = f$Iter536->$class->itable;
            while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp549 = $tmp549->next;
            }
            $fn551 $tmp550 = $tmp549->methods[1];
            panda$core$Object* $tmp552 = $tmp550(f$Iter536);
            f548 = ((org$pandalanguage$pandac$FieldDecl*) $tmp552);
            panda$core$Bit $tmp553 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f548->annotations);
            panda$core$Bit $tmp554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp553);
            if ($tmp554.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result525, ((panda$core$Object*) f548));
            }
            }
        }
        goto $l541;
        $l542:;
    }
    return ((panda$collections$ListView*) result525);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result555;
    panda$core$String* suffix557;
    panda$core$Bit found563;
    panda$collections$Iterator* dir$Iter564;
    panda$io$File* dir576;
    panda$io$File* f581;
    panda$core$Bit $tmp583;
    panda$core$String$Index$nullable index585;
    org$pandalanguage$pandac$ClassDecl* parent588;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp589;
    panda$core$Object* $tmp556 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result555 = ((org$pandalanguage$pandac$ClassDecl*) $tmp556);
    if (((panda$core$Bit) { result555 == NULL }).value) {
    {
        panda$core$String* $tmp560 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s558, &$s559);
        panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s561);
        suffix557 = $tmp562;
        found563 = ((panda$core$Bit) { false });
        {
            ITable* $tmp565 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp565->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp565 = $tmp565->next;
            }
            $fn567 $tmp566 = $tmp565->methods[0];
            panda$collections$Iterator* $tmp568 = $tmp566(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter564 = $tmp568;
            $l569:;
            ITable* $tmp571 = dir$Iter564->$class->itable;
            while ($tmp571->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp571 = $tmp571->next;
            }
            $fn573 $tmp572 = $tmp571->methods[0];
            panda$core$Bit $tmp574 = $tmp572(dir$Iter564);
            panda$core$Bit $tmp575 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp574);
            if (!$tmp575.value) goto $l570;
            {
                ITable* $tmp577 = dir$Iter564->$class->itable;
                while ($tmp577->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp577 = $tmp577->next;
                }
                $fn579 $tmp578 = $tmp577->methods[1];
                panda$core$Object* $tmp580 = $tmp578(dir$Iter564);
                dir576 = ((panda$io$File*) $tmp580);
                panda$io$File* $tmp582 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir576, suffix557);
                f581 = $tmp582;
                panda$io$File$exists$R$panda$core$Bit(&$tmp583, f581);
                if ($tmp583.value) {
                {
                    found563 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f581);
                    panda$core$Object* $tmp584 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result555 = ((org$pandalanguage$pandac$ClassDecl*) $tmp584);
                }
                }
            }
            goto $l569;
            $l570:;
        }
    }
    }
    if (((panda$core$Bit) { result555 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp587 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s586);
        index585 = $tmp587;
        if (((panda$core$Bit) { index585.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp589, ((panda$core$String$Index$nullable) { .nonnull = false }), index585, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp590 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp589);
            org$pandalanguage$pandac$ClassDecl* $tmp591 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp590);
            parent588 = $tmp591;
            if (((panda$core$Bit) { parent588 != NULL }).value) {
            {
                panda$core$Object* $tmp592 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result555 = ((org$pandalanguage$pandac$ClassDecl*) $tmp592);
            }
            }
        }
        }
    }
    }
    return result555;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result593;
    panda$core$String* suffix595;
    panda$core$Bit found601;
    panda$collections$Iterator* dir$Iter602;
    panda$io$File* dir614;
    panda$io$File* f619;
    panda$core$Bit $tmp621;
    panda$core$Int64 oldErrorCount622;
    panda$core$Object* $tmp594 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result593 = ((org$pandalanguage$pandac$ClassDecl*) $tmp594);
    if (((panda$core$Bit) { result593 == NULL }).value) {
    {
        panda$core$String* $tmp598 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s596, &$s597);
        panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, &$s599);
        suffix595 = $tmp600;
        found601 = ((panda$core$Bit) { false });
        {
            ITable* $tmp603 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp603->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp603 = $tmp603->next;
            }
            $fn605 $tmp604 = $tmp603->methods[0];
            panda$collections$Iterator* $tmp606 = $tmp604(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter602 = $tmp606;
            $l607:;
            ITable* $tmp609 = dir$Iter602->$class->itable;
            while ($tmp609->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp609 = $tmp609->next;
            }
            $fn611 $tmp610 = $tmp609->methods[0];
            panda$core$Bit $tmp612 = $tmp610(dir$Iter602);
            panda$core$Bit $tmp613 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp612);
            if (!$tmp613.value) goto $l608;
            {
                ITable* $tmp615 = dir$Iter602->$class->itable;
                while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp615 = $tmp615->next;
                }
                $fn617 $tmp616 = $tmp615->methods[1];
                panda$core$Object* $tmp618 = $tmp616(dir$Iter602);
                dir614 = ((panda$io$File*) $tmp618);
                panda$io$File* $tmp620 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir614, suffix595);
                f619 = $tmp620;
                panda$io$File$exists$R$panda$core$Bit(&$tmp621, f619);
                if ($tmp621.value) {
                {
                    found601 = ((panda$core$Bit) { true });
                    oldErrorCount622 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f619);
                    panda$core$Object* $tmp623 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result593 = ((org$pandalanguage$pandac$ClassDecl*) $tmp623);
                    bool $tmp624 = ((panda$core$Bit) { result593 == NULL }).value;
                    if (!$tmp624) goto $l625;
                    panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount622);
                    $tmp624 = $tmp626.value;
                    $l625:;
                    panda$core$Bit $tmp627 = { $tmp624 };
                    if ($tmp627.value) {
                    {
                        org$pandalanguage$pandac$Position* $tmp628 = (org$pandalanguage$pandac$Position*) malloc(40);
                        $tmp628->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
                        $tmp628->refCount.value = 1;
                        panda$core$String* $tmp630 = panda$io$File$name$R$panda$core$String(f619);
                        org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp628, $tmp630, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s631, ((panda$core$Object*) f619));
                        panda$core$String* $tmp634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp632, &$s633);
                        panda$core$String* $tmp635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp634, p_fullName);
                        panda$core$String* $tmp637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, &$s636);
                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp628, $tmp637);
                    }
                    }
                }
                }
            }
            goto $l607;
            $l608:;
        }
        panda$core$Bit $tmp638 = panda$core$Bit$$NOT$R$panda$core$Bit(found601);
        if ($tmp638.value) {
        {
            panda$core$String* $tmp640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s639, suffix595);
            panda$core$String* $tmp642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp640, &$s641);
            panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp642, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp643, &$s644);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp645);
        }
        }
    }
    }
    return result593;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type649;
    org$pandalanguage$pandac$ClassDecl* result656;
    org$pandalanguage$pandac$Annotations* annotations658;
    panda$collections$Array* supertypes664;
    panda$collections$Iterator* intf$Iter668;
    org$pandalanguage$pandac$Type* intf680;
    panda$collections$HashMap* aliases686;
    panda$core$Range$LTpanda$core$Int64$GT $tmp689;
    panda$collections$Iterator* m$Iter734;
    org$pandalanguage$pandac$MethodDecl* m746;
    panda$collections$Array* parameters751;
    panda$collections$Iterator* p$Iter754;
    org$pandalanguage$pandac$MethodDecl$Parameter* p766;
    org$pandalanguage$pandac$MethodDecl* clone774;
    panda$collections$Iterator* f$Iter777;
    org$pandalanguage$pandac$FieldDecl* f789;
    org$pandalanguage$pandac$FieldDecl* clone794;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp647 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s646);
    panda$core$Bit $tmp648 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp647);
    PANDA_ASSERT($tmp648.value);
    org$pandalanguage$pandac$Type* $tmp650 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type649 = $tmp650;
    panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type649->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp651.value) {
    {
        panda$core$Object* $tmp652 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type649->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp653 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp652));
        return $tmp653;
    }
    }
    panda$core$Bit $tmp654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type649->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp654.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type649->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp655.value);
    panda$core$Object* $tmp657 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type649)->name));
    result656 = ((org$pandalanguage$pandac$ClassDecl*) $tmp657);
    if (((panda$core$Bit) { result656 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp659 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp659->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp659->refCount.value = 1;
        panda$core$Int64 $tmp661 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp662 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp661);
        panda$core$Int64 $tmp663 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp662);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp659, $tmp663);
        annotations658 = $tmp659;
        panda$collections$Array* $tmp665 = (panda$collections$Array*) malloc(40);
        $tmp665->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp665->refCount.value = 1;
        panda$collections$Array$init($tmp665);
        supertypes664 = $tmp665;
        org$pandalanguage$pandac$Type* $tmp667 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type649, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes664, ((panda$core$Object*) $tmp667));
        {
            ITable* $tmp669 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp669->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp669 = $tmp669->next;
            }
            $fn671 $tmp670 = $tmp669->methods[0];
            panda$collections$Iterator* $tmp672 = $tmp670(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter668 = $tmp672;
            $l673:;
            ITable* $tmp675 = intf$Iter668->$class->itable;
            while ($tmp675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp675 = $tmp675->next;
            }
            $fn677 $tmp676 = $tmp675->methods[0];
            panda$core$Bit $tmp678 = $tmp676(intf$Iter668);
            panda$core$Bit $tmp679 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp678);
            if (!$tmp679.value) goto $l674;
            {
                ITable* $tmp681 = intf$Iter668->$class->itable;
                while ($tmp681->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp681 = $tmp681->next;
                }
                $fn683 $tmp682 = $tmp681->methods[1];
                panda$core$Object* $tmp684 = $tmp682(intf$Iter668);
                intf680 = ((org$pandalanguage$pandac$Type*) $tmp684);
                org$pandalanguage$pandac$Type* $tmp685 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type649, intf680);
                panda$collections$Array$add$panda$collections$Array$T(supertypes664, ((panda$core$Object*) $tmp685));
            }
            goto $l673;
            $l674:;
        }
        panda$collections$HashMap* $tmp687 = (panda$collections$HashMap*) malloc(56);
        $tmp687->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp687->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp687, p_cl->aliases);
        aliases686 = $tmp687;
        ITable* $tmp690 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp690->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp690 = $tmp690->next;
        }
        $fn692 $tmp691 = $tmp690->methods[0];
        panda$core$Int64 $tmp693 = $tmp691(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp689, ((panda$core$Int64) { 0 }), $tmp693, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp695 = $tmp689.start.value;
        panda$core$Int64 i694 = { $tmp695 };
        int64_t $tmp697 = $tmp689.end.value;
        int64_t $tmp698 = $tmp689.step.value;
        bool $tmp699 = $tmp689.inclusive.value;
        bool $tmp706 = $tmp698 > 0;
        if ($tmp706) goto $l704; else goto $l705;
        $l704:;
        if ($tmp699) goto $l707; else goto $l708;
        $l707:;
        if ($tmp695 <= $tmp697) goto $l700; else goto $l702;
        $l708:;
        if ($tmp695 < $tmp697) goto $l700; else goto $l702;
        $l705:;
        if ($tmp699) goto $l709; else goto $l710;
        $l709:;
        if ($tmp695 >= $tmp697) goto $l700; else goto $l702;
        $l710:;
        if ($tmp695 > $tmp697) goto $l700; else goto $l702;
        $l700:;
        {
            ITable* $tmp712 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp712->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp712 = $tmp712->next;
            }
            $fn714 $tmp713 = $tmp712->methods[0];
            panda$core$Object* $tmp715 = $tmp713(((panda$collections$ListView*) p_cl->parameters), i694);
            panda$core$Int64 $tmp716 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i694, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp717 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(type649->subtypes, $tmp716);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases686, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp715))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp717))->name));
        }
        $l703:;
        if ($tmp706) goto $l719; else goto $l720;
        $l719:;
        int64_t $tmp721 = $tmp697 - i694.value;
        if ($tmp699) goto $l722; else goto $l723;
        $l722:;
        if ($tmp721 >= $tmp698) goto $l718; else goto $l702;
        $l723:;
        if ($tmp721 > $tmp698) goto $l718; else goto $l702;
        $l720:;
        int64_t $tmp725 = i694.value - $tmp697;
        if ($tmp699) goto $l726; else goto $l727;
        $l726:;
        if ($tmp725 >= -$tmp698) goto $l718; else goto $l702;
        $l727:;
        if ($tmp725 > -$tmp698) goto $l718; else goto $l702;
        $l718:;
        i694.value += $tmp698;
        goto $l700;
        $l702:;
        org$pandalanguage$pandac$ClassDecl* $tmp729 = (org$pandalanguage$pandac$ClassDecl*) malloc(169);
        $tmp729->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp729->refCount.value = 1;
        panda$collections$Array* $tmp731 = (panda$collections$Array*) malloc(40);
        $tmp731->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp731->refCount.value = 1;
        panda$collections$Array$init($tmp731);
        panda$core$Object* $tmp733 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp729, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->offset, ((panda$collections$MapView*) aliases686), p_cl->doccomment, annotations658, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type649)->name, ((panda$collections$ListView*) supertypes664), $tmp731, ((org$pandalanguage$pandac$SymbolTable*) $tmp733));
        result656 = $tmp729;
        result656->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp735 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp735->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp735 = $tmp735->next;
            }
            $fn737 $tmp736 = $tmp735->methods[0];
            panda$collections$Iterator* $tmp738 = $tmp736(((panda$collections$Iterable*) p_cl->methods));
            m$Iter734 = $tmp738;
            $l739:;
            ITable* $tmp741 = m$Iter734->$class->itable;
            while ($tmp741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp741 = $tmp741->next;
            }
            $fn743 $tmp742 = $tmp741->methods[0];
            panda$core$Bit $tmp744 = $tmp742(m$Iter734);
            panda$core$Bit $tmp745 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp744);
            if (!$tmp745.value) goto $l740;
            {
                ITable* $tmp747 = m$Iter734->$class->itable;
                while ($tmp747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp747 = $tmp747->next;
                }
                $fn749 $tmp748 = $tmp747->methods[1];
                panda$core$Object* $tmp750 = $tmp748(m$Iter734);
                m746 = ((org$pandalanguage$pandac$MethodDecl*) $tmp750);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m746);
                panda$collections$Array* $tmp752 = (panda$collections$Array*) malloc(40);
                $tmp752->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp752->refCount.value = 1;
                panda$collections$Array$init($tmp752);
                parameters751 = $tmp752;
                {
                    ITable* $tmp755 = ((panda$collections$Iterable*) m746->parameters)->$class->itable;
                    while ($tmp755->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp755 = $tmp755->next;
                    }
                    $fn757 $tmp756 = $tmp755->methods[0];
                    panda$collections$Iterator* $tmp758 = $tmp756(((panda$collections$Iterable*) m746->parameters));
                    p$Iter754 = $tmp758;
                    $l759:;
                    ITable* $tmp761 = p$Iter754->$class->itable;
                    while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp761 = $tmp761->next;
                    }
                    $fn763 $tmp762 = $tmp761->methods[0];
                    panda$core$Bit $tmp764 = $tmp762(p$Iter754);
                    panda$core$Bit $tmp765 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp764);
                    if (!$tmp765.value) goto $l760;
                    {
                        ITable* $tmp767 = p$Iter754->$class->itable;
                        while ($tmp767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp767 = $tmp767->next;
                        }
                        $fn769 $tmp768 = $tmp767->methods[1];
                        panda$core$Object* $tmp770 = $tmp768(p$Iter754);
                        p766 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp770);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp771 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp771->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp771->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp773 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type649, p766->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp771, p766->name, $tmp773);
                        panda$collections$Array$add$panda$collections$Array$T(parameters751, ((panda$core$Object*) $tmp771));
                    }
                    goto $l759;
                    $l760:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp775 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
                $tmp775->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp775->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp775, result656, ((org$pandalanguage$pandac$Symbol*) m746)->offset, m746->doccomment, m746->annotations, m746->methodKind, ((org$pandalanguage$pandac$Symbol*) m746)->name, parameters751, m746->returnType, m746->body);
                clone774 = $tmp775;
                panda$collections$Array$add$panda$collections$Array$T(result656->methods, ((panda$core$Object*) clone774));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result656->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone774));
            }
            goto $l739;
            $l740:;
        }
        {
            ITable* $tmp778 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp778->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp778 = $tmp778->next;
            }
            $fn780 $tmp779 = $tmp778->methods[0];
            panda$collections$Iterator* $tmp781 = $tmp779(((panda$collections$Iterable*) p_cl->fields));
            f$Iter777 = $tmp781;
            $l782:;
            ITable* $tmp784 = f$Iter777->$class->itable;
            while ($tmp784->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp784 = $tmp784->next;
            }
            $fn786 $tmp785 = $tmp784->methods[0];
            panda$core$Bit $tmp787 = $tmp785(f$Iter777);
            panda$core$Bit $tmp788 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp787);
            if (!$tmp788.value) goto $l783;
            {
                ITable* $tmp790 = f$Iter777->$class->itable;
                while ($tmp790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp790 = $tmp790->next;
                }
                $fn792 $tmp791 = $tmp790->methods[1];
                panda$core$Object* $tmp793 = $tmp791(f$Iter777);
                f789 = ((org$pandalanguage$pandac$FieldDecl*) $tmp793);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f789);
                org$pandalanguage$pandac$FieldDecl* $tmp795 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
                $tmp795->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp795->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp797 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type649, f789->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp795, result656, ((org$pandalanguage$pandac$Symbol*) f789)->offset, f789->doccomment, f789->annotations, f789->fieldKind, ((org$pandalanguage$pandac$Symbol*) f789)->name, $tmp797, f789->rawValue);
                clone794 = $tmp795;
                panda$collections$Array$add$panda$collections$Array$T(result656->fields, ((panda$core$Object*) clone794));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result656->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone794));
            }
            goto $l782;
            $l783:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result656)->name), ((panda$core$Object*) result656));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result656));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result656;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result798;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp799 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->offset, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result798 = $tmp799;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp800 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp801 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp800));
            result798 = $tmp801;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp802 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp802;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp803 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result798->annotations);
    if ($tmp803.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp804 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result798, p_type);
        result798 = $tmp804;
    }
    }
    return result798;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl805;
    panda$collections$Set* result807;
    panda$collections$Iterator* intf$Iter812;
    org$pandalanguage$pandac$Type* intf824;
    org$pandalanguage$pandac$ClassDecl* $tmp806 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl805 = $tmp806;
    PANDA_ASSERT(((panda$core$Bit) { cl805 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl805);
    panda$collections$Set* $tmp808 = (panda$collections$Set*) malloc(24);
    $tmp808->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp808->refCount.value = 1;
    panda$collections$Set$init($tmp808);
    result807 = $tmp808;
    if (((panda$core$Bit) { cl805->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp810 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl805->rawSuper);
        panda$collections$Set* $tmp811 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp810);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result807, ((panda$collections$CollectionView*) $tmp811));
    }
    }
    {
        ITable* $tmp813 = ((panda$collections$Iterable*) cl805->rawInterfaces)->$class->itable;
        while ($tmp813->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp813 = $tmp813->next;
        }
        $fn815 $tmp814 = $tmp813->methods[0];
        panda$collections$Iterator* $tmp816 = $tmp814(((panda$collections$Iterable*) cl805->rawInterfaces));
        intf$Iter812 = $tmp816;
        $l817:;
        ITable* $tmp819 = intf$Iter812->$class->itable;
        while ($tmp819->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp819 = $tmp819->next;
        }
        $fn821 $tmp820 = $tmp819->methods[0];
        panda$core$Bit $tmp822 = $tmp820(intf$Iter812);
        panda$core$Bit $tmp823 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp822);
        if (!$tmp823.value) goto $l818;
        {
            ITable* $tmp825 = intf$Iter812->$class->itable;
            while ($tmp825->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp825 = $tmp825->next;
            }
            $fn827 $tmp826 = $tmp825->methods[1];
            panda$core$Object* $tmp828 = $tmp826(intf$Iter812);
            intf824 = ((org$pandalanguage$pandac$Type*) $tmp828);
            org$pandalanguage$pandac$Type* $tmp829 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf824);
            panda$collections$Set* $tmp830 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp829);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result807, ((panda$collections$CollectionView*) $tmp830));
        }
        goto $l817;
        $l818:;
    }
    panda$core$Bit $tmp831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl805->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp831.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result807, ((panda$collections$Key*) p_t));
    }
    }
    return result807;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp837;
    panda$core$Bit $tmp832 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp832.value);
    panda$core$Bit $tmp833 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp833.value);
    panda$core$Int64 $tmp834 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp835 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp836 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp834, $tmp835);
    if ($tmp836.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp838 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp837, ((panda$core$Int64) { 0 }), $tmp838, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp840 = $tmp837.start.value;
    panda$core$Int64 i839 = { $tmp840 };
    int64_t $tmp842 = $tmp837.end.value;
    int64_t $tmp843 = $tmp837.step.value;
    bool $tmp844 = $tmp837.inclusive.value;
    bool $tmp851 = $tmp843 > 0;
    if ($tmp851) goto $l849; else goto $l850;
    $l849:;
    if ($tmp844) goto $l852; else goto $l853;
    $l852:;
    if ($tmp840 <= $tmp842) goto $l845; else goto $l847;
    $l853:;
    if ($tmp840 < $tmp842) goto $l845; else goto $l847;
    $l850:;
    if ($tmp844) goto $l854; else goto $l855;
    $l854:;
    if ($tmp840 >= $tmp842) goto $l845; else goto $l847;
    $l855:;
    if ($tmp840 > $tmp842) goto $l845; else goto $l847;
    $l845:;
    {
        panda$core$Object* $tmp857 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t1->subtypes, i839);
        panda$core$Object* $tmp858 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t2->subtypes, i839);
        panda$core$Bit $tmp859 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp857), ((org$pandalanguage$pandac$Type*) $tmp858));
        if ($tmp859.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l848:;
    if ($tmp851) goto $l861; else goto $l862;
    $l861:;
    int64_t $tmp863 = $tmp842 - i839.value;
    if ($tmp844) goto $l864; else goto $l865;
    $l864:;
    if ($tmp863 >= $tmp843) goto $l860; else goto $l847;
    $l865:;
    if ($tmp863 > $tmp843) goto $l860; else goto $l847;
    $l862:;
    int64_t $tmp867 = i839.value - $tmp842;
    if ($tmp844) goto $l868; else goto $l869;
    $l868:;
    if ($tmp867 >= -$tmp843) goto $l860; else goto $l847;
    $l869:;
    if ($tmp867 > -$tmp843) goto $l860; else goto $l847;
    $l860:;
    i839.value += $tmp843;
    goto $l845;
    $l847:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl871;
    panda$collections$Iterator* test$Iter873;
    org$pandalanguage$pandac$MethodDecl* test885;
    panda$collections$Iterator* raw$Iter898;
    org$pandalanguage$pandac$Type* raw910;
    org$pandalanguage$pandac$MethodDecl* result915;
    org$pandalanguage$pandac$ClassDecl* $tmp872 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl871 = $tmp872;
    PANDA_ASSERT(((panda$core$Bit) { cl871 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl871);
    {
        ITable* $tmp874 = ((panda$collections$Iterable*) cl871->methods)->$class->itable;
        while ($tmp874->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp874 = $tmp874->next;
        }
        $fn876 $tmp875 = $tmp874->methods[0];
        panda$collections$Iterator* $tmp877 = $tmp875(((panda$collections$Iterable*) cl871->methods));
        test$Iter873 = $tmp877;
        $l878:;
        ITable* $tmp880 = test$Iter873->$class->itable;
        while ($tmp880->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp880 = $tmp880->next;
        }
        $fn882 $tmp881 = $tmp880->methods[0];
        panda$core$Bit $tmp883 = $tmp881(test$Iter873);
        panda$core$Bit $tmp884 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp883);
        if (!$tmp884.value) goto $l879;
        {
            ITable* $tmp886 = test$Iter873->$class->itable;
            while ($tmp886->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp886 = $tmp886->next;
            }
            $fn888 $tmp887 = $tmp886->methods[1];
            panda$core$Object* $tmp889 = $tmp887(test$Iter873);
            test885 = ((org$pandalanguage$pandac$MethodDecl*) $tmp889);
            panda$core$Bit $tmp890 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test885)->name, p_name);
            if ($tmp890.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test885);
                org$pandalanguage$pandac$Type* $tmp891 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test885);
                org$pandalanguage$pandac$Type* $tmp892 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp891);
                panda$core$Bit $tmp893 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp892, p_methodType);
                if ($tmp893.value) {
                {
                    return test885;
                }
                }
            }
            }
        }
        goto $l878;
        $l879:;
    }
    bool $tmp894 = p_checkInterfaces.value;
    if ($tmp894) goto $l895;
    panda$core$Bit $tmp896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl871->classKind, ((panda$core$Int64) { 5012 }));
    $tmp894 = $tmp896.value;
    $l895:;
    panda$core$Bit $tmp897 = { $tmp894 };
    if ($tmp897.value) {
    {
        {
            ITable* $tmp899 = ((panda$collections$Iterable*) cl871->rawInterfaces)->$class->itable;
            while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp899 = $tmp899->next;
            }
            $fn901 $tmp900 = $tmp899->methods[0];
            panda$collections$Iterator* $tmp902 = $tmp900(((panda$collections$Iterable*) cl871->rawInterfaces));
            raw$Iter898 = $tmp902;
            $l903:;
            ITable* $tmp905 = raw$Iter898->$class->itable;
            while ($tmp905->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp905 = $tmp905->next;
            }
            $fn907 $tmp906 = $tmp905->methods[0];
            panda$core$Bit $tmp908 = $tmp906(raw$Iter898);
            panda$core$Bit $tmp909 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp908);
            if (!$tmp909.value) goto $l904;
            {
                ITable* $tmp911 = raw$Iter898->$class->itable;
                while ($tmp911->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp911 = $tmp911->next;
                }
                $fn913 $tmp912 = $tmp911->methods[1];
                panda$core$Object* $tmp914 = $tmp912(raw$Iter898);
                raw910 = ((org$pandalanguage$pandac$Type*) $tmp914);
                org$pandalanguage$pandac$Type* $tmp916 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw910);
                org$pandalanguage$pandac$MethodDecl* $tmp917 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp916, p_name, p_methodType, p_checkInterfaces);
                result915 = $tmp917;
                if (((panda$core$Bit) { result915 != NULL }).value) {
                {
                    return result915;
                }
                }
            }
            goto $l903;
            $l904:;
        }
    }
    }
    if (((panda$core$Bit) { cl871->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp918 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl871->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp919 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp918, p_name, p_methodType, p_checkInterfaces);
        return $tmp919;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType920;
    org$pandalanguage$pandac$Type* owner922;
    panda$collections$Iterator* raw$Iter924;
    org$pandalanguage$pandac$Type* raw936;
    org$pandalanguage$pandac$MethodDecl* result941;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp921 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType920 = $tmp921;
    org$pandalanguage$pandac$Type* $tmp923 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner922 = $tmp923;
    {
        ITable* $tmp925 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp925->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp925 = $tmp925->next;
        }
        $fn927 $tmp926 = $tmp925->methods[0];
        panda$collections$Iterator* $tmp928 = $tmp926(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter924 = $tmp928;
        $l929:;
        ITable* $tmp931 = raw$Iter924->$class->itable;
        while ($tmp931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp931 = $tmp931->next;
        }
        $fn933 $tmp932 = $tmp931->methods[0];
        panda$core$Bit $tmp934 = $tmp932(raw$Iter924);
        panda$core$Bit $tmp935 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp934);
        if (!$tmp935.value) goto $l930;
        {
            ITable* $tmp937 = raw$Iter924->$class->itable;
            while ($tmp937->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp937 = $tmp937->next;
            }
            $fn939 $tmp938 = $tmp937->methods[1];
            panda$core$Object* $tmp940 = $tmp938(raw$Iter924);
            raw936 = ((org$pandalanguage$pandac$Type*) $tmp940);
            org$pandalanguage$pandac$Type* $tmp942 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner922, raw936);
            org$pandalanguage$pandac$MethodDecl* $tmp943 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp942, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType920, ((panda$core$Bit) { true }));
            result941 = $tmp943;
            if (((panda$core$Bit) { result941 != NULL }).value) {
            {
                return result941;
            }
            }
        }
        goto $l929;
        $l930:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp944 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner922, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp945 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp944, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType920, ((panda$core$Bit) { true }));
        return $tmp945;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass946;
    panda$collections$Array* result948;
    panda$collections$Iterator* m$Iter951;
    org$pandalanguage$pandac$MethodDecl* m963;
    org$pandalanguage$pandac$MethodDecl* found968;
    org$pandalanguage$pandac$ClassDecl* $tmp947 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass946 = $tmp947;
    PANDA_ASSERT(((panda$core$Bit) { intfClass946 != NULL }).value);
    panda$collections$Array* $tmp949 = (panda$collections$Array*) malloc(40);
    $tmp949->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp949->refCount.value = 1;
    panda$collections$Array$init($tmp949);
    result948 = $tmp949;
    {
        ITable* $tmp952 = ((panda$collections$Iterable*) intfClass946->methods)->$class->itable;
        while ($tmp952->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp952 = $tmp952->next;
        }
        $fn954 $tmp953 = $tmp952->methods[0];
        panda$collections$Iterator* $tmp955 = $tmp953(((panda$collections$Iterable*) intfClass946->methods));
        m$Iter951 = $tmp955;
        $l956:;
        ITable* $tmp958 = m$Iter951->$class->itable;
        while ($tmp958->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp958 = $tmp958->next;
        }
        $fn960 $tmp959 = $tmp958->methods[0];
        panda$core$Bit $tmp961 = $tmp959(m$Iter951);
        panda$core$Bit $tmp962 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp961);
        if (!$tmp962.value) goto $l957;
        {
            ITable* $tmp964 = m$Iter951->$class->itable;
            while ($tmp964->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp964 = $tmp964->next;
            }
            $fn966 $tmp965 = $tmp964->methods[1];
            panda$core$Object* $tmp967 = $tmp965(m$Iter951);
            m963 = ((org$pandalanguage$pandac$MethodDecl*) $tmp967);
            org$pandalanguage$pandac$Type* $tmp969 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp970 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m963);
            org$pandalanguage$pandac$Type* $tmp971 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp970);
            org$pandalanguage$pandac$MethodDecl* $tmp972 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp969, ((org$pandalanguage$pandac$Symbol*) m963)->name, $tmp971, ((panda$core$Bit) { false }));
            found968 = $tmp972;
            PANDA_ASSERT(((panda$core$Bit) { found968 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result948, ((panda$core$Object*) found968));
        }
        goto $l956;
        $l957:;
    }
    return ((panda$collections$ListView*) result948);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl974;
    panda$collections$Iterator* rawIntf$Iter977;
    org$pandalanguage$pandac$Type* rawIntf989;
    org$pandalanguage$pandac$ClassDecl* intf994;
    panda$core$Bit $tmp973 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp973.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp975 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl974 = $tmp975;
            if (((panda$core$Bit) { superCl974 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp976 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl974);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp976));
            }
            }
        }
        }
        {
            ITable* $tmp978 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp978 = $tmp978->next;
            }
            $fn980 $tmp979 = $tmp978->methods[0];
            panda$collections$Iterator* $tmp981 = $tmp979(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter977 = $tmp981;
            $l982:;
            ITable* $tmp984 = rawIntf$Iter977->$class->itable;
            while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp984 = $tmp984->next;
            }
            $fn986 $tmp985 = $tmp984->methods[0];
            panda$core$Bit $tmp987 = $tmp985(rawIntf$Iter977);
            panda$core$Bit $tmp988 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp987);
            if (!$tmp988.value) goto $l983;
            {
                ITable* $tmp990 = rawIntf$Iter977->$class->itable;
                while ($tmp990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp990 = $tmp990->next;
                }
                $fn992 $tmp991 = $tmp990->methods[1];
                panda$core$Object* $tmp993 = $tmp991(rawIntf$Iter977);
                rawIntf989 = ((org$pandalanguage$pandac$Type*) $tmp993);
                org$pandalanguage$pandac$ClassDecl* $tmp995 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf989);
                intf994 = $tmp995;
                if (((panda$core$Bit) { intf994 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp996 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf994);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp996));
                }
                }
            }
            goto $l982;
            $l983:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl999;
    panda$collections$Iterator* derived$Iter1002;
    org$pandalanguage$pandac$MethodDecl* derived1014;
    panda$core$Bit found1024;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1025;
    org$pandalanguage$pandac$MethodDecl* base1045;
    panda$core$Int64 $tmp997 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp997, ((panda$core$Int64) { 0 }));
    if ($tmp998.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1000 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl999 = $tmp1000;
            if (((panda$core$Bit) { superCl999 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1001 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl999);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1001));
        }
        }
        {
            ITable* $tmp1003 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1003->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1003 = $tmp1003->next;
            }
            $fn1005 $tmp1004 = $tmp1003->methods[0];
            panda$collections$Iterator* $tmp1006 = $tmp1004(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1002 = $tmp1006;
            $l1007:;
            ITable* $tmp1009 = derived$Iter1002->$class->itable;
            while ($tmp1009->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1009 = $tmp1009->next;
            }
            $fn1011 $tmp1010 = $tmp1009->methods[0];
            panda$core$Bit $tmp1012 = $tmp1010(derived$Iter1002);
            panda$core$Bit $tmp1013 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1012);
            if (!$tmp1013.value) goto $l1008;
            {
                ITable* $tmp1015 = derived$Iter1002->$class->itable;
                while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1015 = $tmp1015->next;
                }
                $fn1017 $tmp1016 = $tmp1015->methods[1];
                panda$core$Object* $tmp1018 = $tmp1016(derived$Iter1002);
                derived1014 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1018);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1014);
                panda$core$Bit $tmp1020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1014->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1019 = $tmp1020.value;
                if ($tmp1019) goto $l1021;
                panda$core$Bit $tmp1022 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1014->annotations);
                $tmp1019 = $tmp1022.value;
                $l1021:;
                panda$core$Bit $tmp1023 = { $tmp1019 };
                if ($tmp1023.value) {
                {
                    goto $l1007;
                }
                }
                found1024 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1026 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1025, ((panda$core$Int64) { 0 }), $tmp1026, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                int64_t $tmp1028 = $tmp1025.start.value;
                panda$core$Int64 i1027 = { $tmp1028 };
                int64_t $tmp1030 = $tmp1025.end.value;
                int64_t $tmp1031 = $tmp1025.step.value;
                bool $tmp1032 = $tmp1025.inclusive.value;
                bool $tmp1039 = $tmp1031 > 0;
                if ($tmp1039) goto $l1037; else goto $l1038;
                $l1037:;
                if ($tmp1032) goto $l1040; else goto $l1041;
                $l1040:;
                if ($tmp1028 <= $tmp1030) goto $l1033; else goto $l1035;
                $l1041:;
                if ($tmp1028 < $tmp1030) goto $l1033; else goto $l1035;
                $l1038:;
                if ($tmp1032) goto $l1042; else goto $l1043;
                $l1042:;
                if ($tmp1028 >= $tmp1030) goto $l1033; else goto $l1035;
                $l1043:;
                if ($tmp1028 > $tmp1030) goto $l1033; else goto $l1035;
                $l1033:;
                {
                    panda$core$Object* $tmp1046 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1027);
                    base1045 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1046);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1045);
                    panda$core$Bit $tmp1047 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1014, base1045);
                    if ($tmp1047.value) {
                    {
                        found1024 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1027, ((panda$core$Object*) derived1014));
                        goto $l1035;
                    }
                    }
                }
                $l1036:;
                if ($tmp1039) goto $l1049; else goto $l1050;
                $l1049:;
                int64_t $tmp1051 = $tmp1030 - i1027.value;
                if ($tmp1032) goto $l1052; else goto $l1053;
                $l1052:;
                if ($tmp1051 >= $tmp1031) goto $l1048; else goto $l1035;
                $l1053:;
                if ($tmp1051 > $tmp1031) goto $l1048; else goto $l1035;
                $l1050:;
                int64_t $tmp1055 = i1027.value - $tmp1030;
                if ($tmp1032) goto $l1056; else goto $l1057;
                $l1056:;
                if ($tmp1055 >= -$tmp1031) goto $l1048; else goto $l1035;
                $l1057:;
                if ($tmp1055 > -$tmp1031) goto $l1048; else goto $l1035;
                $l1048:;
                i1027.value += $tmp1031;
                goto $l1033;
                $l1035:;
                panda$core$Bit $tmp1059 = panda$core$Bit$$NOT$R$panda$core$Bit(found1024);
                if ($tmp1059.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1014));
                }
                }
            }
            goto $l1007;
            $l1008:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$core$Int64 p_offset, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1060;
    org$pandalanguage$pandac$Symbol* s1063;
    panda$collections$Iterator* m$Iter1069;
    org$pandalanguage$pandac$MethodDecl* m1081;
    panda$collections$Iterator* p$Iter1088;
    org$pandalanguage$pandac$SymbolTable* p1100;
    panda$collections$Array* children1105;
    panda$collections$Array* types1117;
    panda$collections$Iterator* m$Iter1120;
    org$pandalanguage$pandac$MethodRef* m1132;
    panda$collections$Array* $tmp1061 = (panda$collections$Array*) malloc(40);
    $tmp1061->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1061->refCount.value = 1;
    panda$collections$Array$init($tmp1061);
    methods1060 = $tmp1061;
    org$pandalanguage$pandac$Symbol* $tmp1064 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1063 = $tmp1064;
    PANDA_ASSERT(((panda$core$Bit) { s1063 != NULL }).value);
    panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1063->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1065.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1063));
        org$pandalanguage$pandac$MethodRef* $tmp1066 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1066->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1066->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1066, ((org$pandalanguage$pandac$MethodDecl*) s1063), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1060, ((panda$core$Object*) $tmp1066));
    }
    }
    else {
    {
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1063->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1068.value);
        {
            ITable* $tmp1070 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1063)->methods)->$class->itable;
            while ($tmp1070->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1070 = $tmp1070->next;
            }
            $fn1072 $tmp1071 = $tmp1070->methods[0];
            panda$collections$Iterator* $tmp1073 = $tmp1071(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1063)->methods));
            m$Iter1069 = $tmp1073;
            $l1074:;
            ITable* $tmp1076 = m$Iter1069->$class->itable;
            while ($tmp1076->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1076 = $tmp1076->next;
            }
            $fn1078 $tmp1077 = $tmp1076->methods[0];
            panda$core$Bit $tmp1079 = $tmp1077(m$Iter1069);
            panda$core$Bit $tmp1080 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1079);
            if (!$tmp1080.value) goto $l1075;
            {
                ITable* $tmp1082 = m$Iter1069->$class->itable;
                while ($tmp1082->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1082 = $tmp1082->next;
                }
                $fn1084 $tmp1083 = $tmp1082->methods[1];
                panda$core$Object* $tmp1085 = $tmp1083(m$Iter1069);
                m1081 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1085);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1081);
                org$pandalanguage$pandac$MethodRef* $tmp1086 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1086->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1086->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1086, m1081, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1060, ((panda$core$Object*) $tmp1086));
            }
            goto $l1074;
            $l1075:;
        }
    }
    }
    {
        ITable* $tmp1089 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1089->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1089 = $tmp1089->next;
        }
        $fn1091 $tmp1090 = $tmp1089->methods[0];
        panda$collections$Iterator* $tmp1092 = $tmp1090(((panda$collections$Iterable*) p_st->parents));
        p$Iter1088 = $tmp1092;
        $l1093:;
        ITable* $tmp1095 = p$Iter1088->$class->itable;
        while ($tmp1095->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1095 = $tmp1095->next;
        }
        $fn1097 $tmp1096 = $tmp1095->methods[0];
        panda$core$Bit $tmp1098 = $tmp1096(p$Iter1088);
        panda$core$Bit $tmp1099 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1098);
        if (!$tmp1099.value) goto $l1094;
        {
            ITable* $tmp1101 = p$Iter1088->$class->itable;
            while ($tmp1101->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1101 = $tmp1101->next;
            }
            $fn1103 $tmp1102 = $tmp1101->methods[1];
            panda$core$Object* $tmp1104 = $tmp1102(p$Iter1088);
            p1100 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1104);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1100, p_name, methods1060, p_types);
        }
        goto $l1093;
        $l1094:;
    }
    panda$collections$Array* $tmp1106 = (panda$collections$Array*) malloc(40);
    $tmp1106->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1106->refCount.value = 1;
    panda$collections$Array$init($tmp1106);
    children1105 = $tmp1106;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1105, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1108 = panda$collections$Array$get_count$R$panda$core$Int64(methods1060);
    panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1108, ((panda$core$Int64) { 1 }));
    if ($tmp1109.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1110 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1110->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1110->refCount.value = 1;
        panda$core$Object* $tmp1112 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1060, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1113 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1112));
        panda$core$Object* $tmp1114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1060, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1110, ((panda$core$Int64) { 1002 }), p_offset, $tmp1113, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1114)), ((panda$collections$ListView*) children1105));
        return $tmp1110;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1115 = panda$collections$Array$get_count$R$panda$core$Int64(methods1060);
        panda$core$Bit $tmp1116 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1115, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1116.value);
        panda$collections$Array* $tmp1118 = (panda$collections$Array*) malloc(40);
        $tmp1118->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1118->refCount.value = 1;
        panda$collections$Array$init($tmp1118);
        types1117 = $tmp1118;
        {
            ITable* $tmp1121 = ((panda$collections$Iterable*) methods1060)->$class->itable;
            while ($tmp1121->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1121 = $tmp1121->next;
            }
            $fn1123 $tmp1122 = $tmp1121->methods[0];
            panda$collections$Iterator* $tmp1124 = $tmp1122(((panda$collections$Iterable*) methods1060));
            m$Iter1120 = $tmp1124;
            $l1125:;
            ITable* $tmp1127 = m$Iter1120->$class->itable;
            while ($tmp1127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1127 = $tmp1127->next;
            }
            $fn1129 $tmp1128 = $tmp1127->methods[0];
            panda$core$Bit $tmp1130 = $tmp1128(m$Iter1120);
            panda$core$Bit $tmp1131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1130);
            if (!$tmp1131.value) goto $l1126;
            {
                ITable* $tmp1133 = m$Iter1120->$class->itable;
                while ($tmp1133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1133 = $tmp1133->next;
                }
                $fn1135 $tmp1134 = $tmp1133->methods[1];
                panda$core$Object* $tmp1136 = $tmp1134(m$Iter1120);
                m1132 = ((org$pandalanguage$pandac$MethodRef*) $tmp1136);
                org$pandalanguage$pandac$Type* $tmp1137 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1132);
                panda$collections$Array$add$panda$collections$Array$T(types1117, ((panda$core$Object*) $tmp1137));
            }
            goto $l1125;
            $l1126:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1138 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1138->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1138->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1140 = (org$pandalanguage$pandac$Type*) malloc(80);
        $tmp1140->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1140->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1140, ((panda$collections$ListView*) types1117));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1138, ((panda$core$Int64) { 1003 }), p_offset, $tmp1140, ((panda$core$Object*) methods1060), ((panda$collections$ListView*) children1105));
        return $tmp1138;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1142;
    org$pandalanguage$pandac$FieldDecl* f1158;
    panda$collections$Array* children1161;
    org$pandalanguage$pandac$Type* effectiveType1166;
    org$pandalanguage$pandac$IRNode* result1171;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1143 = org$pandalanguage$pandac$Compiler$getClass$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_offset, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1142 = $tmp1143;
            if (((panda$core$Bit) { cl1142 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1144 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1142);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_offset, cl1142, $tmp1144);
                org$pandalanguage$pandac$IRNode* $tmp1145 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1145->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1145->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1147 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1148 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1142);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1145, ((panda$core$Int64) { 1001 }), p_offset, $tmp1147, $tmp1148);
                return $tmp1145;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1149 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$panda$core$Int64$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_offset, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1149);
            org$pandalanguage$pandac$IRNode* $tmp1150 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1150->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1150->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1152 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1153 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1150, ((panda$core$Int64) { 1001 }), p_offset, $tmp1152, $tmp1153);
            return $tmp1150;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1154 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1155 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_offset, $tmp1154);
            return $tmp1155;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1156 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1156->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1156->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1156, ((panda$core$Int64) { 1016 }), p_offset, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1156;
        }
        break;
        case 202:
        {
            f1158 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1158);
            org$pandalanguage$pandac$Type* $tmp1159 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1160 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1158->type, $tmp1159);
            if ($tmp1160.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1162 = (panda$collections$Array*) malloc(40);
            $tmp1162->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1162->refCount.value = 1;
            panda$collections$Array$init($tmp1162);
            children1161 = $tmp1162;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1164.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, &$s1165);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1167 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1158->type);
                effectiveType1166 = $tmp1167;
                panda$core$Bit $tmp1168 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1158->annotations);
                if ($tmp1168.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1161, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1169 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1158->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1170 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1169);
                    panda$collections$Array$add$panda$collections$Array$T(children1161, ((panda$core$Object*) $tmp1170));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1172 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1172->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1172->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1172, ((panda$core$Int64) { 1026 }), p_offset, f1158->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1161));
                result1171 = $tmp1172;
                panda$core$Bit $tmp1174 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1166, result1171->type);
                if ($tmp1174.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1175 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1171, p_offset, ((panda$core$Bit) { false }), effectiveType1166);
                    result1171 = $tmp1175;
                }
                }
                return result1171;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1176 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1176->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1176->refCount.value = 1;
                panda$core$Object* $tmp1178 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1179 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1178));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1176, ((panda$core$Int64) { 1025 }), p_offset, $tmp1179);
                panda$collections$Array$add$panda$collections$Array$T(children1161, ((panda$core$Object*) $tmp1176));
                org$pandalanguage$pandac$IRNode* $tmp1180 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1180->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1180->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1180, ((panda$core$Int64) { 1026 }), p_offset, f1158->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1161));
                return $tmp1180;
            }
            }
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_context, org$pandalanguage$pandac$Type* p_raw) {
    panda$collections$HashMap* typeMap1188;
    org$pandalanguage$pandac$Type* base1191;
    org$pandalanguage$pandac$ClassDecl* cl1193;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1195;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1182 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1182, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1183.value);
            panda$core$Object* $tmp1184 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1185 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1184), p_raw);
            return $tmp1185;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1186 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1187 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1186, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1187.value);
            panda$collections$HashMap* $tmp1189 = (panda$collections$HashMap*) malloc(56);
            $tmp1189->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1189->refCount.value = 1;
            panda$collections$HashMap$init($tmp1189);
            typeMap1188 = $tmp1189;
            panda$core$Object* $tmp1192 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1191 = ((org$pandalanguage$pandac$Type*) $tmp1192);
            org$pandalanguage$pandac$ClassDecl* $tmp1194 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1191)->name);
            cl1193 = $tmp1194;
            PANDA_ASSERT(((panda$core$Bit) { cl1193 != NULL }).value);
            panda$core$Int64 $tmp1196 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1195, ((panda$core$Int64) { 1 }), $tmp1196, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1198 = $tmp1195.start.value;
            panda$core$Int64 i1197 = { $tmp1198 };
            int64_t $tmp1200 = $tmp1195.end.value;
            int64_t $tmp1201 = $tmp1195.step.value;
            bool $tmp1202 = $tmp1195.inclusive.value;
            bool $tmp1209 = $tmp1201 > 0;
            if ($tmp1209) goto $l1207; else goto $l1208;
            $l1207:;
            if ($tmp1202) goto $l1210; else goto $l1211;
            $l1210:;
            if ($tmp1198 <= $tmp1200) goto $l1203; else goto $l1205;
            $l1211:;
            if ($tmp1198 < $tmp1200) goto $l1203; else goto $l1205;
            $l1208:;
            if ($tmp1202) goto $l1212; else goto $l1213;
            $l1212:;
            if ($tmp1198 >= $tmp1200) goto $l1203; else goto $l1205;
            $l1213:;
            if ($tmp1198 > $tmp1200) goto $l1203; else goto $l1205;
            $l1203:;
            {
                panda$core$String* $tmp1216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1193)->name, &$s1215);
                panda$core$Int64 $tmp1217 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1197, ((panda$core$Int64) { 1 }));
                ITable* $tmp1218 = ((panda$collections$ListView*) cl1193->parameters)->$class->itable;
                while ($tmp1218->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1218 = $tmp1218->next;
                }
                $fn1220 $tmp1219 = $tmp1218->methods[0];
                panda$core$Object* $tmp1221 = $tmp1219(((panda$collections$ListView*) cl1193->parameters), $tmp1217);
                panda$core$String* $tmp1222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1216, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1221))->name);
                panda$core$Object* $tmp1223 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_context->subtypes, i1197);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1188, ((panda$collections$Key*) $tmp1222), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1223)));
            }
            $l1206:;
            if ($tmp1209) goto $l1225; else goto $l1226;
            $l1225:;
            int64_t $tmp1227 = $tmp1200 - i1197.value;
            if ($tmp1202) goto $l1228; else goto $l1229;
            $l1228:;
            if ($tmp1227 >= $tmp1201) goto $l1224; else goto $l1205;
            $l1229:;
            if ($tmp1227 > $tmp1201) goto $l1224; else goto $l1205;
            $l1226:;
            int64_t $tmp1231 = i1197.value - $tmp1200;
            if ($tmp1202) goto $l1232; else goto $l1233;
            $l1232:;
            if ($tmp1231 >= -$tmp1201) goto $l1224; else goto $l1205;
            $l1233:;
            if ($tmp1231 > -$tmp1201) goto $l1224; else goto $l1205;
            $l1224:;
            i1197.value += $tmp1201;
            goto $l1203;
            $l1205:;
            org$pandalanguage$pandac$Type* $tmp1235 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1188);
            return $tmp1235;
        }
        break;
        case 22:
        {
            return p_raw;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp1236 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1237 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1236);
    if ($tmp1237.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1238 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1238;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1239 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1240 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1239);
    if ($tmp1240.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1241 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1241;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$collections$Array* args1249;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1250;
    org$pandalanguage$pandac$IRNode* c1252;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1242 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1243 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1242)->type);
            panda$core$Object* $tmp1244 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1245 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1244)->type);
            org$pandalanguage$pandac$Type* $tmp1246 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1243, $tmp1245);
            org$pandalanguage$pandac$Type* $tmp1247 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1246);
            org$pandalanguage$pandac$Type* $tmp1248 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1247);
            return $tmp1248;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1250, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1251 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1250);
            args1249 = $tmp1251;
            panda$core$Object* $tmp1253 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1255 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1253), &$s1254, ((panda$collections$ListView*) args1249));
            c1252 = $tmp1255;
            if (((panda$core$Bit) { c1252 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1256 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1256;
            }
            }
            return c1252->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1257 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1257;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1268;
    panda$core$Int64$nullable result1272;
    panda$core$Int64$nullable best1281;
    panda$collections$Iterator* t$Iter1282;
    org$pandalanguage$pandac$Type* t1294;
    panda$core$Int64$nullable cost1299;
    org$pandalanguage$pandac$ClassDecl* cl1313;
    panda$core$Int64$nullable cost1315;
    panda$collections$Iterator* intf$Iter1320;
    org$pandalanguage$pandac$Type* intf1332;
    panda$core$Int64$nullable cost1337;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1258 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1258.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1259 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1260 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1259);
    if ($tmp1260.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1261.value) {
    {
        panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1262.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1263 = $tmp1264.value;
    if (!$tmp1263) goto $l1265;
    panda$core$Bit $tmp1266 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1263 = $tmp1266.value;
    $l1265:;
    panda$core$Bit $tmp1267 = { $tmp1263 };
    if ($tmp1267.value) {
    {
        panda$core$Object* $tmp1269 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1270 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1269), p_target);
        result1268 = $tmp1270;
        if (((panda$core$Bit) { !result1268.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1271 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1268.value), ((panda$core$Int64) { 1 }));
        return ((panda$core$Int64$nullable) { $tmp1271, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1273 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1274 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1273));
            result1272 = $tmp1274;
            if (((panda$core$Bit) { !result1272.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1275 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1272.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1275, true });
        }
        break;
        case 22:
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        break;
        case 12:
        case 13:
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        break;
        case 10:
        {
            panda$core$Bit $tmp1276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1276.value) {
            {
                panda$core$Object* $tmp1277 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1278 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1277), p_target);
                return $tmp1278;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1279 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1280 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1279, p_target);
            return $tmp1280;
        }
        break;
        case 17:
        {
            best1281 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1283 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1283->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1283 = $tmp1283->next;
                }
                $fn1285 $tmp1284 = $tmp1283->methods[0];
                panda$collections$Iterator* $tmp1286 = $tmp1284(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1282 = $tmp1286;
                $l1287:;
                ITable* $tmp1289 = t$Iter1282->$class->itable;
                while ($tmp1289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1289 = $tmp1289->next;
                }
                $fn1291 $tmp1290 = $tmp1289->methods[0];
                panda$core$Bit $tmp1292 = $tmp1290(t$Iter1282);
                panda$core$Bit $tmp1293 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1292);
                if (!$tmp1293.value) goto $l1288;
                {
                    ITable* $tmp1295 = t$Iter1282->$class->itable;
                    while ($tmp1295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1295 = $tmp1295->next;
                    }
                    $fn1297 $tmp1296 = $tmp1295->methods[1];
                    panda$core$Object* $tmp1298 = $tmp1296(t$Iter1282);
                    t1294 = ((org$pandalanguage$pandac$Type*) $tmp1298);
                    panda$core$Int64$nullable $tmp1300 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1294, p_target);
                    cost1299 = $tmp1300;
                    bool $tmp1301 = ((panda$core$Bit) { cost1299.nonnull }).value;
                    if (!$tmp1301) goto $l1302;
                    bool $tmp1303 = ((panda$core$Bit) { !best1281.nonnull }).value;
                    if ($tmp1303) goto $l1304;
                    panda$core$Bit $tmp1305 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1299.value), ((panda$core$Int64) best1281.value));
                    $tmp1303 = $tmp1305.value;
                    $l1304:;
                    panda$core$Bit $tmp1306 = { $tmp1303 };
                    $tmp1301 = $tmp1306.value;
                    $l1302:;
                    panda$core$Bit $tmp1307 = { $tmp1301 };
                    if ($tmp1307.value) {
                    {
                        best1281 = cost1299;
                    }
                    }
                }
                goto $l1287;
                $l1288:;
            }
            return best1281;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1308 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1308;
        }
        break;
    }
    panda$core$Bit $tmp1309 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1310 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1309);
    if ($tmp1310.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1311 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1312 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1311);
    if ($tmp1312.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1314 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1313 = $tmp1314;
    PANDA_ASSERT(((panda$core$Bit) { cl1313 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1313);
    if (((panda$core$Bit) { cl1313->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1316 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1313->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1317 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1316);
        panda$core$Int64$nullable $tmp1318 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1317, p_target);
        cost1315 = $tmp1318;
        if (((panda$core$Bit) { cost1315.nonnull }).value) {
        {
            panda$core$Int64 $tmp1319 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1315.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1319, true });
        }
        }
    }
    }
    {
        ITable* $tmp1321 = ((panda$collections$Iterable*) cl1313->rawInterfaces)->$class->itable;
        while ($tmp1321->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1321 = $tmp1321->next;
        }
        $fn1323 $tmp1322 = $tmp1321->methods[0];
        panda$collections$Iterator* $tmp1324 = $tmp1322(((panda$collections$Iterable*) cl1313->rawInterfaces));
        intf$Iter1320 = $tmp1324;
        $l1325:;
        ITable* $tmp1327 = intf$Iter1320->$class->itable;
        while ($tmp1327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1327 = $tmp1327->next;
        }
        $fn1329 $tmp1328 = $tmp1327->methods[0];
        panda$core$Bit $tmp1330 = $tmp1328(intf$Iter1320);
        panda$core$Bit $tmp1331 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1330);
        if (!$tmp1331.value) goto $l1326;
        {
            ITable* $tmp1333 = intf$Iter1320->$class->itable;
            while ($tmp1333->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1333 = $tmp1333->next;
            }
            $fn1335 $tmp1334 = $tmp1333->methods[1];
            panda$core$Object* $tmp1336 = $tmp1334(intf$Iter1320);
            intf1332 = ((org$pandalanguage$pandac$Type*) $tmp1336);
            org$pandalanguage$pandac$Type* $tmp1338 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1332);
            org$pandalanguage$pandac$Type* $tmp1339 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1338);
            panda$core$Int64$nullable $tmp1340 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1339, p_target);
            cost1337 = $tmp1340;
            if (((panda$core$Bit) { cost1337.nonnull }).value) {
            {
                panda$core$Int64 $tmp1341 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1337.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1341, true });
            }
            }
        }
        goto $l1325;
        $l1326:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1343 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1342 = $tmp1343.value;
    if (!$tmp1342) goto $l1344;
    panda$core$Bit $tmp1345 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1342 = $tmp1345.value;
    $l1344:;
    panda$core$Bit $tmp1346 = { $tmp1342 };
    if ($tmp1346.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1348 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1347 = $tmp1348.value;
    if (!$tmp1347) goto $l1349;
    panda$core$Bit $tmp1350 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1347 = $tmp1350.value;
    $l1349:;
    panda$core$Bit $tmp1351 = { $tmp1347 };
    if ($tmp1351.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1353 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1352 = $tmp1353.value;
    if (!$tmp1352) goto $l1354;
    panda$core$Bit $tmp1355 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1352 = $tmp1355.value;
    $l1354:;
    panda$core$Bit $tmp1356 = { $tmp1352 };
    if ($tmp1356.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1357 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1357.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1358 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1358.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1359 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1359.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1362;
    panda$core$Int64$nullable cost11433;
    panda$core$Int64$nullable cost21437;
    org$pandalanguage$pandac$ClassDecl* targetClass1447;
    panda$collections$Iterator* m$Iter1449;
    org$pandalanguage$pandac$MethodDecl* m1461;
    panda$core$Int64$nullable cost1470;
    panda$core$Bit $tmp1360 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1360.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1361.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1363 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1364 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1363));
            cost1362 = $tmp1364;
            if (((panda$core$Bit) { !cost1362.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1365.value) {
            {
                return cost1362;
            }
            }
            panda$core$Int64 $tmp1366 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1362.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1366, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1367 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1367;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1368.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1369 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1369.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1370 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1371 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1370, p_target);
                return $tmp1371;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1373 = $tmp1374.value;
            if (!$tmp1373) goto $l1375;
            panda$core$Int64 $tmp1376 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1377 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1376);
            panda$core$Int64 $tmp1378 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1379 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1377, $tmp1378);
            $tmp1373 = $tmp1379.value;
            $l1375:;
            panda$core$Bit $tmp1380 = { $tmp1373 };
            bool $tmp1372 = $tmp1380.value;
            if ($tmp1372) goto $l1381;
            panda$core$Bit $tmp1383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1382 = $tmp1383.value;
            if (!$tmp1382) goto $l1384;
            panda$core$Int64 $tmp1385 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1386 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1387 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1385, $tmp1386);
            $tmp1382 = $tmp1387.value;
            $l1384:;
            panda$core$Bit $tmp1388 = { $tmp1382 };
            $tmp1372 = $tmp1388.value;
            $l1381:;
            panda$core$Bit $tmp1389 = { $tmp1372 };
            if ($tmp1389.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1390 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1390);
            if ($tmp1391.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1392 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1393 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1392, p_target);
                return $tmp1393;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1395 = $tmp1396.value;
            if (!$tmp1395) goto $l1397;
            panda$core$Int64 $tmp1398 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1399 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1398);
            panda$core$Int64 $tmp1400 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1399);
            panda$core$Int64 $tmp1401 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1402 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1400, $tmp1401);
            $tmp1395 = $tmp1402.value;
            $l1397:;
            panda$core$Bit $tmp1403 = { $tmp1395 };
            bool $tmp1394 = $tmp1403.value;
            if ($tmp1394) goto $l1404;
            panda$core$Bit $tmp1406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1405 = $tmp1406.value;
            if (!$tmp1405) goto $l1407;
            panda$core$Int64 $tmp1408 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1409 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1408);
            panda$core$Int64 $tmp1410 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1409);
            panda$core$Int64 $tmp1411 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1412 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1410, $tmp1411);
            $tmp1405 = $tmp1412.value;
            $l1407:;
            panda$core$Bit $tmp1413 = { $tmp1405 };
            $tmp1394 = $tmp1413.value;
            $l1404:;
            panda$core$Bit $tmp1414 = { $tmp1394 };
            if ($tmp1414.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1415 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1416 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1415);
            if ($tmp1416.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1417 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1418 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1417, p_target);
                return $tmp1418;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1419 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1419.value) {
            {
                panda$core$Int64 $tmp1420 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1420, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp1421.value);
                panda$core$Object* $tmp1423 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1423)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1422 = $tmp1424.value;
                if (!$tmp1422) goto $l1425;
                panda$core$Object* $tmp1426 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1426)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1422 = $tmp1427.value;
                $l1425:;
                panda$core$Bit $tmp1428 = { $tmp1422 };
                if ($tmp1428.value) {
                {
                    panda$core$Object* $tmp1429 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1430 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1429));
                    panda$core$Bit $tmp1431 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1430);
                    if ($tmp1431.value) {
                    {
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                }
                }
                panda$core$Bit $tmp1432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1432.value);
                panda$core$Object* $tmp1434 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1435 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1436 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1434), ((org$pandalanguage$pandac$Type*) $tmp1435));
                cost11433 = $tmp1436;
                if (((panda$core$Bit) { !cost11433.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1438 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1439 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1440 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1438), ((org$pandalanguage$pandac$Type*) $tmp1439));
                cost21437 = $tmp1440;
                if (((panda$core$Bit) { !cost21437.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1441 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11433.value), ((panda$core$Int64) cost21437.value));
                return ((panda$core$Int64$nullable) { $tmp1441, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1442 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1443 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1442, p_target);
            return $tmp1443;
        }
        break;
        case 1040:
        {
            panda$core$Int64$nullable $tmp1444 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1444;
        }
        break;
    }
    panda$core$Bit $tmp1445 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1446 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1445);
    if ($tmp1446.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1448 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1447 = $tmp1448;
    if (((panda$core$Bit) { targetClass1447 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1450 = ((panda$collections$Iterable*) targetClass1447->methods)->$class->itable;
        while ($tmp1450->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1450 = $tmp1450->next;
        }
        $fn1452 $tmp1451 = $tmp1450->methods[0];
        panda$collections$Iterator* $tmp1453 = $tmp1451(((panda$collections$Iterable*) targetClass1447->methods));
        m$Iter1449 = $tmp1453;
        $l1454:;
        ITable* $tmp1456 = m$Iter1449->$class->itable;
        while ($tmp1456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1456 = $tmp1456->next;
        }
        $fn1458 $tmp1457 = $tmp1456->methods[0];
        panda$core$Bit $tmp1459 = $tmp1457(m$Iter1449);
        panda$core$Bit $tmp1460 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1459);
        if (!$tmp1460.value) goto $l1455;
        {
            ITable* $tmp1462 = m$Iter1449->$class->itable;
            while ($tmp1462->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1462 = $tmp1462->next;
            }
            $fn1464 $tmp1463 = $tmp1462->methods[1];
            panda$core$Object* $tmp1465 = $tmp1463(m$Iter1449);
            m1461 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1465);
            panda$core$Bit $tmp1466 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1461->annotations);
            if ($tmp1466.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1461);
                panda$core$Bit $tmp1467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1461->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1467.value);
                panda$core$Int64 $tmp1468 = panda$collections$Array$get_count$R$panda$core$Int64(m1461->parameters);
                panda$core$Bit $tmp1469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1468, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1469.value);
                panda$core$Object* $tmp1471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1461->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1472 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1471)->type);
                cost1470 = $tmp1472;
                if (((panda$core$Bit) { cost1470.nonnull }).value) {
                {
                    return cost1470;
                }
                }
            }
            }
        }
        goto $l1454;
        $l1455:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1473 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1473;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1482;
    org$pandalanguage$pandac$IRNode* intermediate1487;
    org$pandalanguage$pandac$IRNode* coerced1515;
    org$pandalanguage$pandac$IRNode* coerced1536;
    org$pandalanguage$pandac$IRNode* varType1550;
    org$pandalanguage$pandac$Type* param1558;
    org$pandalanguage$pandac$IRNode* start1560;
    org$pandalanguage$pandac$IRNode* end1563;
    panda$collections$Array* args1566;
    org$pandalanguage$pandac$IRNode* target1573;
    panda$collections$ListView* methods1580;
    panda$collections$Array* args1582;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1583;
    panda$collections$Array* best1585;
    panda$core$Int64$nullable bestCost1588;
    panda$collections$Iterator* m$Iter1589;
    org$pandalanguage$pandac$MethodRef* m1601;
    panda$core$Int64$nullable cost1606;
    org$pandalanguage$pandac$IRNode* callTarget1612;
    org$pandalanguage$pandac$IRNode* result1618;
    panda$collections$Array* args1622;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1623;
    panda$collections$Array* children1635;
    org$pandalanguage$pandac$IRNode* intermediate1641;
    org$pandalanguage$pandac$ClassDecl* cl1646;
    panda$collections$Iterator* m$Iter1648;
    org$pandalanguage$pandac$MethodDecl* m1660;
    org$pandalanguage$pandac$IRNode* type1671;
    panda$collections$Array* args1676;
    panda$collections$Array* children1680;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1474 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1474.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1475 = $tmp1476.value;
    if (!$tmp1475) goto $l1477;
    panda$core$Bit $tmp1478 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1475 = $tmp1478.value;
    $l1477:;
    panda$core$Bit $tmp1479 = { $tmp1475 };
    if ($tmp1479.value) {
    {
        panda$core$Object* $tmp1480 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1481 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1480), p_target);
        if ($tmp1481.value) {
        {
            panda$collections$Array* $tmp1483 = (panda$collections$Array*) malloc(40);
            $tmp1483->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1483->refCount.value = 1;
            panda$collections$Array$init($tmp1483);
            children1482 = $tmp1483;
            panda$collections$Array$add$panda$collections$Array$T(children1482, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1485 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1485->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1485->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1485, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1482));
            return $tmp1485;
        }
        }
        panda$core$Object* $tmp1488 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1489 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1488));
        intermediate1487 = $tmp1489;
        org$pandalanguage$pandac$IRNode* $tmp1490 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1487, p_target);
        return $tmp1490;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1491 = $tmp1492.value;
            if (!$tmp1491) goto $l1493;
            panda$core$Int64 $tmp1494 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1495 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1496 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1494, $tmp1495);
            $tmp1491 = $tmp1496.value;
            $l1493:;
            panda$core$Bit $tmp1497 = { $tmp1491 };
            if ($tmp1497.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1498 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1498->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1498->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1498, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1498;
            }
            }
            else {
            panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1500 = $tmp1501.value;
            if (!$tmp1500) goto $l1502;
            panda$core$Int64 $tmp1503 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1504 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1505 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1503, $tmp1504);
            $tmp1500 = $tmp1505.value;
            $l1502:;
            panda$core$Bit $tmp1506 = { $tmp1500 };
            if ($tmp1506.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1507 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1507->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1507->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1507, ((panda$core$Int64) { 1004 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1507;
            }
            }
            }
            panda$core$Bit $tmp1510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1509 = $tmp1510.value;
            if (!$tmp1509) goto $l1511;
            panda$core$Bit $tmp1512 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1513 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1512);
            $tmp1509 = $tmp1513.value;
            $l1511:;
            panda$core$Bit $tmp1514 = { $tmp1509 };
            if ($tmp1514.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1516 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1517 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1516);
                coerced1515 = $tmp1517;
                if (((panda$core$Bit) { coerced1515 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1518 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1515, p_target);
                return $tmp1518;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1519 = $tmp1520.value;
            if (!$tmp1519) goto $l1521;
            panda$core$Int64 $tmp1522 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1523 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1522);
            panda$core$Int64 $tmp1524 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1523);
            panda$core$Int64 $tmp1525 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1526 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1524, $tmp1525);
            $tmp1519 = $tmp1526.value;
            $l1521:;
            panda$core$Bit $tmp1527 = { $tmp1519 };
            if ($tmp1527.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1528 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1528->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1528->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1528, ((panda$core$Int64) { 1032 }), p_expr->offset, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1528;
            }
            }
            panda$core$Bit $tmp1531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1530 = $tmp1531.value;
            if (!$tmp1530) goto $l1532;
            panda$core$Bit $tmp1533 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1534 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1533);
            $tmp1530 = $tmp1534.value;
            $l1532:;
            panda$core$Bit $tmp1535 = { $tmp1530 };
            if ($tmp1535.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1537 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1538 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1537);
                coerced1536 = $tmp1538;
                if (((panda$core$Bit) { coerced1536 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1539 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1536, p_target);
                return $tmp1539;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1540 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1541 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1540);
            if ($tmp1541.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1542 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1542->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1542->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1542, ((panda$core$Int64) { 1011 }), p_expr->offset, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1542;
            }
            }
            panda$core$Bit $tmp1545 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1544 = $tmp1545.value;
            if (!$tmp1544) goto $l1546;
            org$pandalanguage$pandac$Type* $tmp1547 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1548 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1547);
            $tmp1544 = $tmp1548.value;
            $l1546:;
            panda$core$Bit $tmp1549 = { $tmp1544 };
            if ($tmp1549.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1551 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1552 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1551);
                varType1550 = $tmp1552;
                if (((panda$core$Bit) { varType1550 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1553 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1550, p_target);
                    return $tmp1553;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Int64 $tmp1554 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1554, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp1555.value);
            panda$core$Bit $tmp1556 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1556.value) {
            {
                panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1557.value);
                panda$core$Object* $tmp1559 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1558 = ((org$pandalanguage$pandac$Type*) $tmp1559);
                panda$core$Object* $tmp1561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1562 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1561), param1558);
                start1560 = $tmp1562;
                if (((panda$core$Bit) { start1560 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1564 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1565 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1564), param1558);
                end1563 = $tmp1565;
                if (((panda$core$Bit) { end1563 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1567 = (panda$collections$Array*) malloc(40);
                $tmp1567->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1567->refCount.value = 1;
                panda$collections$Array$init($tmp1567);
                args1566 = $tmp1567;
                panda$collections$Array$add$panda$collections$Array$T(args1566, ((panda$core$Object*) start1560));
                panda$collections$Array$add$panda$collections$Array$T(args1566, ((panda$core$Object*) end1563));
                panda$core$Object* $tmp1569 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$collections$Array$add$panda$collections$Array$T(args1566, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1569)));
                org$pandalanguage$pandac$IRNode* $tmp1570 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1570->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1570->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1572 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1570, ((panda$core$Int64) { 1011 }), p_expr->offset, $tmp1572, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1566, ((panda$core$Object*) $tmp1570));
                org$pandalanguage$pandac$IRNode* $tmp1574 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1574->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1574->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1576 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1574, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1576, p_target);
                target1573 = $tmp1574;
                org$pandalanguage$pandac$IRNode* $tmp1577 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1573, ((panda$collections$ListView*) args1566));
                return $tmp1577;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1578 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1579 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1578, p_target);
                return $tmp1579;
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1581 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1580 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1581)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1583, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1584 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1583);
            args1582 = $tmp1584;
            panda$collections$Array* $tmp1586 = (panda$collections$Array*) malloc(40);
            $tmp1586->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1586->refCount.value = 1;
            panda$collections$Array$init($tmp1586);
            best1585 = $tmp1586;
            bestCost1588 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1590 = ((panda$collections$Iterable*) methods1580)->$class->itable;
                while ($tmp1590->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1590 = $tmp1590->next;
                }
                $fn1592 $tmp1591 = $tmp1590->methods[0];
                panda$collections$Iterator* $tmp1593 = $tmp1591(((panda$collections$Iterable*) methods1580));
                m$Iter1589 = $tmp1593;
                $l1594:;
                ITable* $tmp1596 = m$Iter1589->$class->itable;
                while ($tmp1596->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1596 = $tmp1596->next;
                }
                $fn1598 $tmp1597 = $tmp1596->methods[0];
                panda$core$Bit $tmp1599 = $tmp1597(m$Iter1589);
                panda$core$Bit $tmp1600 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1599);
                if (!$tmp1600.value) goto $l1595;
                {
                    ITable* $tmp1602 = m$Iter1589->$class->itable;
                    while ($tmp1602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1602 = $tmp1602->next;
                    }
                    $fn1604 $tmp1603 = $tmp1602->methods[1];
                    panda$core$Object* $tmp1605 = $tmp1603(m$Iter1589);
                    m1601 = ((org$pandalanguage$pandac$MethodRef*) $tmp1605);
                    panda$core$Int64$nullable $tmp1607 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1601, ((panda$collections$ListView*) args1582), p_target);
                    cost1606 = $tmp1607;
                    if (((panda$core$Bit) { !cost1606.nonnull }).value) {
                    {
                        goto $l1594;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1588.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1585, ((panda$core$Object*) m1601));
                        bestCost1588 = cost1606;
                        goto $l1594;
                    }
                    }
                    panda$core$Bit $tmp1608 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1606.value), ((panda$core$Int64) bestCost1588.value));
                    if ($tmp1608.value) {
                    {
                        panda$collections$Array$clear(best1585);
                        bestCost1588 = cost1606;
                    }
                    }
                    panda$core$Bit $tmp1609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1606.value), ((panda$core$Int64) bestCost1588.value));
                    if ($tmp1609.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1585, ((panda$core$Object*) m1601));
                    }
                    }
                }
                goto $l1594;
                $l1595:;
            }
            panda$core$Int64 $tmp1610 = panda$collections$Array$get_count$R$panda$core$Int64(best1585);
            panda$core$Bit $tmp1611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1610, ((panda$core$Int64) { 1 }));
            if ($tmp1611.value) {
            {
                panda$core$Object* $tmp1613 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1614 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1613)->children);
                panda$core$Bit $tmp1615 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1614, ((panda$core$Int64) { 0 }));
                if ($tmp1615.value) {
                {
                    panda$core$Object* $tmp1616 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1617 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1616)->children, ((panda$core$Int64) { 0 }));
                    callTarget1612 = ((org$pandalanguage$pandac$IRNode*) $tmp1617);
                }
                }
                else {
                {
                    callTarget1612 = NULL;
                }
                }
                panda$core$Object* $tmp1619 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1585, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1620 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->offset, callTarget1612, ((org$pandalanguage$pandac$MethodRef*) $tmp1619), ((panda$collections$ListView*) args1582));
                result1618 = $tmp1620;
                org$pandalanguage$pandac$IRNode* $tmp1621 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1618, p_target);
                return $tmp1621;
            }
            }
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1623, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1624 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1623);
            args1622 = $tmp1624;
            panda$core$Object* $tmp1625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1627 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1625), &$s1626, ((panda$collections$ListView*) args1622), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1628 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1627, p_target);
            return $tmp1628;
        }
        break;
    }
    panda$core$Bit $tmp1629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1629.value) {
    {
        panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1630.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1631 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1631->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1631->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1631, ((panda$core$Int64) { 1030 }), p_expr->offset, p_target);
            return $tmp1631;
        }
        }
        panda$core$Object* $tmp1633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1634 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1633));
        if ($tmp1634.value) {
        {
            panda$collections$Array* $tmp1636 = (panda$collections$Array*) malloc(40);
            $tmp1636->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1636->refCount.value = 1;
            panda$collections$Array$init($tmp1636);
            children1635 = $tmp1636;
            panda$collections$Array$add$panda$collections$Array$T(children1635, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1638 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp1638->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1638->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1638, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1635));
            return $tmp1638;
        }
        }
        panda$core$Bit $tmp1640 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1640.value) {
        {
            panda$core$Object* $tmp1642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1643 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1642));
            intermediate1641 = $tmp1643;
            org$pandalanguage$pandac$IRNode* $tmp1644 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1641, p_target);
            return $tmp1644;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1645 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1645.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1647 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1646 = $tmp1647;
        if (((panda$core$Bit) { cl1646 != NULL }).value) {
        {
            {
                ITable* $tmp1649 = ((panda$collections$Iterable*) cl1646->methods)->$class->itable;
                while ($tmp1649->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1649 = $tmp1649->next;
                }
                $fn1651 $tmp1650 = $tmp1649->methods[0];
                panda$collections$Iterator* $tmp1652 = $tmp1650(((panda$collections$Iterable*) cl1646->methods));
                m$Iter1648 = $tmp1652;
                $l1653:;
                ITable* $tmp1655 = m$Iter1648->$class->itable;
                while ($tmp1655->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1655 = $tmp1655->next;
                }
                $fn1657 $tmp1656 = $tmp1655->methods[0];
                panda$core$Bit $tmp1658 = $tmp1656(m$Iter1648);
                panda$core$Bit $tmp1659 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1658);
                if (!$tmp1659.value) goto $l1654;
                {
                    ITable* $tmp1661 = m$Iter1648->$class->itable;
                    while ($tmp1661->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1661 = $tmp1661->next;
                    }
                    $fn1663 $tmp1662 = $tmp1661->methods[1];
                    panda$core$Object* $tmp1664 = $tmp1662(m$Iter1648);
                    m1660 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1664);
                    panda$core$Bit $tmp1665 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1660->annotations);
                    if ($tmp1665.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1660);
                        panda$core$Bit $tmp1666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1660->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1666.value);
                        panda$core$Int64 $tmp1667 = panda$collections$Array$get_count$R$panda$core$Int64(m1660->parameters);
                        panda$core$Bit $tmp1668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1667, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1668.value);
                        panda$core$Object* $tmp1669 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1660->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1670 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1669)->type);
                        if (((panda$core$Bit) { $tmp1670.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1672 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                            $tmp1672->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1672->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1674 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1675 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1646);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1672, ((panda$core$Int64) { 1001 }), p_expr->offset, $tmp1674, $tmp1675);
                            type1671 = $tmp1672;
                            panda$collections$Array* $tmp1677 = (panda$collections$Array*) malloc(40);
                            $tmp1677->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1677->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1677, ((panda$core$Int64) { 1 }));
                            args1676 = $tmp1677;
                            panda$collections$Array$add$panda$collections$Array$T(args1676, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1679 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1671, ((panda$collections$ListView*) args1676));
                            return $tmp1679;
                        }
                        }
                    }
                    }
                }
                goto $l1653;
                $l1654:;
            }
        }
        }
        panda$collections$Array* $tmp1681 = (panda$collections$Array*) malloc(40);
        $tmp1681->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1681->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1681, ((panda$core$Int64) { 1 }));
        children1680 = $tmp1681;
        panda$collections$Array$add$panda$collections$Array$T(children1680, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1683 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1683->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1683->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1683, ((panda$core$Int64) { 1009 }), p_expr->offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1680));
        return $tmp1683;
    }
    }
    panda$core$String* $tmp1686 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1685, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1686, &$s1687);
    panda$core$String* $tmp1689 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1688, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1689, &$s1690);
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_expr->offset, $tmp1691);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1692;
    org$pandalanguage$pandac$IRNode* $tmp1693 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1692 = $tmp1693;
    bool $tmp1694 = ((panda$core$Bit) { result1692 == NULL }).value;
    if ($tmp1694) goto $l1695;
    panda$core$Bit $tmp1696 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1692->type, p_target);
    $tmp1694 = $tmp1696.value;
    $l1695:;
    panda$core$Bit $tmp1697 = { $tmp1694 };
    PANDA_ASSERT($tmp1697.value);
    return result1692;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1699 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1698 = $tmp1699.value;
    if (!$tmp1698) goto $l1700;
    panda$core$Bit $tmp1701 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1698 = $tmp1701.value;
    $l1700:;
    panda$core$Bit $tmp1702 = { $tmp1698 };
    if ($tmp1702.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1703 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1703.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1705 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1704 = $tmp1705.value;
    if (!$tmp1704) goto $l1706;
    panda$core$Bit $tmp1707 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1704 = $tmp1707.value;
    $l1706:;
    panda$core$Bit $tmp1708 = { $tmp1704 };
    if ($tmp1708.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1709.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1710 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1710.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1712;
    org$pandalanguage$pandac$IRNode* resolved1719;
    panda$core$Int64$nullable $tmp1711 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1711.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1713 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1712 = $tmp1713;
    panda$core$Bit $tmp1715 = panda$core$Bit$$NOT$R$panda$core$Bit(result1712);
    bool $tmp1714 = $tmp1715.value;
    if (!$tmp1714) goto $l1716;
    panda$core$Bit $tmp1717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1714 = $tmp1717.value;
    $l1716:;
    panda$core$Bit $tmp1718 = { $tmp1714 };
    if ($tmp1718.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1720 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1719 = $tmp1720;
        if (((panda$core$Bit) { resolved1719 != NULL }).value) {
        {
            panda$core$Bit $tmp1721 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1719, p_target);
            result1712 = $tmp1721;
        }
        }
    }
    }
    return result1712;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, panda$core$Int64 p_offset, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1742;
    panda$collections$Array* children1745;
    panda$core$Bit $tmp1722 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1722.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1723 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1724 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1723);
    PANDA_ASSERT($tmp1724.value);
    bool $tmp1725 = p_isExplicit.value;
    if (!$tmp1725) goto $l1726;
    panda$core$Bit $tmp1727 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1728 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1727);
    $tmp1725 = $tmp1728.value;
    $l1726:;
    panda$core$Bit $tmp1729 = { $tmp1725 };
    if ($tmp1729.value) {
    {
        panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1730, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1731, &$s1732);
        panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1734, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1735, &$s1736);
        panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1733, $tmp1737);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1738);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1739 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1739;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1740 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1740.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1741 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1741;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1743 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1742 = $tmp1743;
            if (((panda$core$Bit) { resolved1742 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1744 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1742, p_offset, p_isExplicit, p_target);
                return $tmp1744;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1746 = (panda$collections$Array*) malloc(40);
    $tmp1746->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1746->refCount.value = 1;
    panda$collections$Array$init($tmp1746);
    children1745 = $tmp1746;
    panda$collections$Array$add$panda$collections$Array$T(children1745, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1748 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1748->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1748->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1748, ((panda$core$Int64) { 1009 }), p_offset, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1745));
    return $tmp1748;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1756;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1757;
    panda$core$Int64$nullable cost1777;
    panda$core$Int64$nullable cost1796;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1750 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1751 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1751->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1751 = $tmp1751->next;
    }
    $fn1753 $tmp1752 = $tmp1751->methods[0];
    panda$core$Int64 $tmp1754 = $tmp1752(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1755 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1750, $tmp1754);
    if ($tmp1755.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1756 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1758 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1757, ((panda$core$Int64) { 0 }), $tmp1758, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1760 = $tmp1757.start.value;
    panda$core$Int64 i1759 = { $tmp1760 };
    int64_t $tmp1762 = $tmp1757.end.value;
    int64_t $tmp1763 = $tmp1757.step.value;
    bool $tmp1764 = $tmp1757.inclusive.value;
    bool $tmp1771 = $tmp1763 > 0;
    if ($tmp1771) goto $l1769; else goto $l1770;
    $l1769:;
    if ($tmp1764) goto $l1772; else goto $l1773;
    $l1772:;
    if ($tmp1760 <= $tmp1762) goto $l1765; else goto $l1767;
    $l1773:;
    if ($tmp1760 < $tmp1762) goto $l1765; else goto $l1767;
    $l1770:;
    if ($tmp1764) goto $l1774; else goto $l1775;
    $l1774:;
    if ($tmp1760 >= $tmp1762) goto $l1765; else goto $l1767;
    $l1775:;
    if ($tmp1760 > $tmp1762) goto $l1765; else goto $l1767;
    $l1765:;
    {
        ITable* $tmp1778 = p_args->$class->itable;
        while ($tmp1778->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1778 = $tmp1778->next;
        }
        $fn1780 $tmp1779 = $tmp1778->methods[0];
        panda$core$Object* $tmp1781 = $tmp1779(p_args, i1759);
        org$pandalanguage$pandac$Type* $tmp1782 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1759);
        panda$core$Int64$nullable $tmp1783 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1781), $tmp1782);
        cost1777 = $tmp1783;
        if (((panda$core$Bit) { !cost1777.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1784 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1756, ((panda$core$Int64) cost1777.value));
        result1756 = $tmp1784;
    }
    $l1768:;
    if ($tmp1771) goto $l1786; else goto $l1787;
    $l1786:;
    int64_t $tmp1788 = $tmp1762 - i1759.value;
    if ($tmp1764) goto $l1789; else goto $l1790;
    $l1789:;
    if ($tmp1788 >= $tmp1763) goto $l1785; else goto $l1767;
    $l1790:;
    if ($tmp1788 > $tmp1763) goto $l1785; else goto $l1767;
    $l1787:;
    int64_t $tmp1792 = i1759.value - $tmp1762;
    if ($tmp1764) goto $l1793; else goto $l1794;
    $l1793:;
    if ($tmp1792 >= -$tmp1763) goto $l1785; else goto $l1767;
    $l1794:;
    if ($tmp1792 > -$tmp1763) goto $l1785; else goto $l1767;
    $l1785:;
    i1759.value += $tmp1763;
    goto $l1765;
    $l1767:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1797 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1798 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1797, p_expectedReturn);
        cost1796 = $tmp1798;
        if (((panda$core$Bit) { !cost1796.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1799 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1756, ((panda$core$Int64) cost1796.value));
        result1756 = $tmp1799;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1802 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1803 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1802);
    bool $tmp1801 = $tmp1803.value;
    if (!$tmp1801) goto $l1804;
    ITable* $tmp1805 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1805->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1805 = $tmp1805->next;
    }
    $fn1807 $tmp1806 = $tmp1805->methods[0];
    panda$core$Int64 $tmp1808 = $tmp1806(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1808, ((panda$core$Int64) { 1 }));
    $tmp1801 = $tmp1809.value;
    $l1804:;
    panda$core$Bit $tmp1810 = { $tmp1801 };
    bool $tmp1800 = $tmp1810.value;
    if (!$tmp1800) goto $l1811;
    panda$core$Object* $tmp1812 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1813 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1814 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1812)->type, $tmp1813);
    $tmp1800 = $tmp1814.value;
    $l1811:;
    panda$core$Bit $tmp1815 = { $tmp1800 };
    if ($tmp1815.value) {
    {
        panda$core$Int64 $tmp1816 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1756, ((panda$core$Int64) { 1 }));
        result1756 = $tmp1816;
    }
    }
    return ((panda$core$Int64$nullable) { result1756, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1817;
    panda$core$Int64$nullable best1820;
    panda$collections$Iterator* m$Iter1821;
    org$pandalanguage$pandac$MethodRef* m1833;
    panda$core$Int64$nullable cost1838;
    panda$collections$Array* $tmp1818 = (panda$collections$Array*) malloc(40);
    $tmp1818->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1818->refCount.value = 1;
    panda$collections$Array$init($tmp1818);
    result1817 = $tmp1818;
    best1820 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1822 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1822->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1822 = $tmp1822->next;
        }
        $fn1824 $tmp1823 = $tmp1822->methods[0];
        panda$collections$Iterator* $tmp1825 = $tmp1823(((panda$collections$Iterable*) p_methods));
        m$Iter1821 = $tmp1825;
        $l1826:;
        ITable* $tmp1828 = m$Iter1821->$class->itable;
        while ($tmp1828->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1828 = $tmp1828->next;
        }
        $fn1830 $tmp1829 = $tmp1828->methods[0];
        panda$core$Bit $tmp1831 = $tmp1829(m$Iter1821);
        panda$core$Bit $tmp1832 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1831);
        if (!$tmp1832.value) goto $l1827;
        {
            ITable* $tmp1834 = m$Iter1821->$class->itable;
            while ($tmp1834->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1834 = $tmp1834->next;
            }
            $fn1836 $tmp1835 = $tmp1834->methods[1];
            panda$core$Object* $tmp1837 = $tmp1835(m$Iter1821);
            m1833 = ((org$pandalanguage$pandac$MethodRef*) $tmp1837);
            panda$core$Int64$nullable $tmp1839 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1833, p_args, p_expectedReturn);
            cost1838 = $tmp1839;
            if (((panda$core$Bit) { !cost1838.nonnull }).value) {
            {
                goto $l1826;
            }
            }
            bool $tmp1840 = ((panda$core$Bit) { !best1820.nonnull }).value;
            if ($tmp1840) goto $l1841;
            panda$core$Bit $tmp1842 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1838.value), ((panda$core$Int64) best1820.value));
            $tmp1840 = $tmp1842.value;
            $l1841:;
            panda$core$Bit $tmp1843 = { $tmp1840 };
            if ($tmp1843.value) {
            {
                panda$collections$Array$clear(result1817);
                best1820 = cost1838;
            }
            }
            panda$core$Bit $tmp1844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1838.value), ((panda$core$Int64) best1820.value));
            if ($tmp1844.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1817, ((panda$core$Object*) m1833));
            }
            }
        }
        goto $l1826;
        $l1827:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1817));
    return best1820;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s1851;
    panda$collections$Array* finalArgs1877;
    org$pandalanguage$pandac$IRNode* selfNode1913;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1928;
    org$pandalanguage$pandac$IRNode* coerced1951;
    org$pandalanguage$pandac$IRNode* result1971;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1845 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1846 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1846->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1846 = $tmp1846->next;
    }
    $fn1848 $tmp1847 = $tmp1846->methods[0];
    panda$core$Int64 $tmp1849 = $tmp1847(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1850 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1845, $tmp1849);
    if ($tmp1850.value) {
    {
        panda$core$Int64 $tmp1852 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1852, ((panda$core$Int64) { 1 }));
        if ($tmp1853.value) {
        {
            s1851 = &$s1854;
        }
        }
        else {
        {
            s1851 = &$s1855;
        }
        }
        panda$core$String* $tmp1857 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1856, $tmp1857);
        panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1859);
        panda$core$Int64 $tmp1861 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1860, ((panda$core$Object*) wrap_panda$core$Int64($tmp1861)));
        panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1862, &$s1863);
        panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, s1851);
        panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, &$s1866);
        ITable* $tmp1869 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp1869->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1869 = $tmp1869->next;
        }
        $fn1871 $tmp1870 = $tmp1869->methods[0];
        panda$core$Int64 $tmp1872 = $tmp1870(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1868, ((panda$core$Object*) wrap_panda$core$Int64($tmp1872)));
        panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1873, &$s1874);
        panda$core$String* $tmp1876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1867, $tmp1875);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1876);
        return NULL;
    }
    }
    panda$collections$Array* $tmp1878 = (panda$collections$Array*) malloc(40);
    $tmp1878->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1878->refCount.value = 1;
    panda$collections$Array$init($tmp1878);
    finalArgs1877 = $tmp1878;
    bool $tmp1881 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1881) goto $l1882;
    panda$core$Bit $tmp1883 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1881 = $tmp1883.value;
    $l1882:;
    panda$core$Bit $tmp1884 = { $tmp1881 };
    bool $tmp1880 = $tmp1884.value;
    if (!$tmp1880) goto $l1885;
    panda$core$Bit $tmp1886 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp1887 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1886);
    $tmp1880 = $tmp1887.value;
    $l1885:;
    panda$core$Bit $tmp1888 = { $tmp1880 };
    if ($tmp1888.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1889 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1890 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_offset, ((panda$core$Bit) { false }), $tmp1889);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1877, ((panda$core$Object*) $tmp1890));
    }
    }
    panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1891.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp1892 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp1893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1892)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp1893.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1894 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp1894->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1894->refCount.value = 1;
                panda$core$Object* $tmp1896 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1897 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1896));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1894, ((panda$core$Int64) { 1025 }), p_offset, $tmp1897);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1877, ((panda$core$Object*) $tmp1894));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1898);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1901 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp1900 = $tmp1901.value;
        if (!$tmp1900) goto $l1902;
        panda$core$Bit $tmp1903 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp1900 = $tmp1903.value;
        $l1902:;
        panda$core$Bit $tmp1904 = { $tmp1900 };
        bool $tmp1899 = $tmp1904.value;
        if (!$tmp1899) goto $l1905;
        panda$core$Bit $tmp1906 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp1899 = $tmp1906.value;
        $l1905:;
        panda$core$Bit $tmp1907 = { $tmp1899 };
        if ($tmp1907.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s1908);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp1910 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp1909 = $tmp1910.value;
    if (!$tmp1909) goto $l1911;
    $tmp1909 = ((panda$core$Bit) { p_target == NULL }).value;
    $l1911:;
    panda$core$Bit $tmp1912 = { $tmp1909 };
    if ($tmp1912.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1914 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1914->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1914->refCount.value = 1;
        panda$core$Object* $tmp1916 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp1917 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1916));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1914, ((panda$core$Int64) { 1025 }), p_offset, $tmp1917);
        selfNode1913 = $tmp1914;
        org$pandalanguage$pandac$Type* $tmp1918 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp1919 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode1913, $tmp1918);
        selfNode1913 = $tmp1919;
        PANDA_ASSERT(((panda$core$Bit) { selfNode1913 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1877, ((panda$core$Object*) selfNode1913));
        panda$core$Object* $tmp1920 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp1921 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1920));
        panda$core$Bit $tmp1922 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1921);
        if ($tmp1922.value) {
        {
            panda$core$String* $tmp1924 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m->value);
            panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1923, $tmp1924);
            panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, &$s1926);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp1927);
        }
        }
    }
    }
    }
    ITable* $tmp1929 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1929->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1929 = $tmp1929->next;
    }
    $fn1931 $tmp1930 = $tmp1929->methods[0];
    panda$core$Int64 $tmp1932 = $tmp1930(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1928, ((panda$core$Int64) { 0 }), $tmp1932, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1934 = $tmp1928.start.value;
    panda$core$Int64 i1933 = { $tmp1934 };
    int64_t $tmp1936 = $tmp1928.end.value;
    int64_t $tmp1937 = $tmp1928.step.value;
    bool $tmp1938 = $tmp1928.inclusive.value;
    bool $tmp1945 = $tmp1937 > 0;
    if ($tmp1945) goto $l1943; else goto $l1944;
    $l1943:;
    if ($tmp1938) goto $l1946; else goto $l1947;
    $l1946:;
    if ($tmp1934 <= $tmp1936) goto $l1939; else goto $l1941;
    $l1947:;
    if ($tmp1934 < $tmp1936) goto $l1939; else goto $l1941;
    $l1944:;
    if ($tmp1938) goto $l1948; else goto $l1949;
    $l1948:;
    if ($tmp1934 >= $tmp1936) goto $l1939; else goto $l1941;
    $l1949:;
    if ($tmp1934 > $tmp1936) goto $l1939; else goto $l1941;
    $l1939:;
    {
        ITable* $tmp1952 = p_args->$class->itable;
        while ($tmp1952->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1952 = $tmp1952->next;
        }
        $fn1954 $tmp1953 = $tmp1952->methods[0];
        panda$core$Object* $tmp1955 = $tmp1953(p_args, i1933);
        org$pandalanguage$pandac$Type* $tmp1956 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1933);
        org$pandalanguage$pandac$IRNode* $tmp1957 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1955), $tmp1956);
        coerced1951 = $tmp1957;
        if (((panda$core$Bit) { coerced1951 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp1958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i1933);
        org$pandalanguage$pandac$IRNode* $tmp1959 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced1951, p_offset, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1958)->type);
        coerced1951 = $tmp1959;
        if (((panda$core$Bit) { coerced1951 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1877, ((panda$core$Object*) coerced1951));
    }
    $l1942:;
    if ($tmp1945) goto $l1961; else goto $l1962;
    $l1961:;
    int64_t $tmp1963 = $tmp1936 - i1933.value;
    if ($tmp1938) goto $l1964; else goto $l1965;
    $l1964:;
    if ($tmp1963 >= $tmp1937) goto $l1960; else goto $l1941;
    $l1965:;
    if ($tmp1963 > $tmp1937) goto $l1960; else goto $l1941;
    $l1962:;
    int64_t $tmp1967 = i1933.value - $tmp1936;
    if ($tmp1938) goto $l1968; else goto $l1969;
    $l1968:;
    if ($tmp1967 >= -$tmp1937) goto $l1960; else goto $l1941;
    $l1969:;
    if ($tmp1967 > -$tmp1937) goto $l1960; else goto $l1941;
    $l1960:;
    i1933.value += $tmp1937;
    goto $l1939;
    $l1941:;
    panda$core$Bit $tmp1973 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s1972);
    if ($tmp1973.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1974 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1974->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1974->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1976 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1974, ((panda$core$Int64) { 1005 }), p_offset, $tmp1976, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1877));
        result1971 = $tmp1974;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp1977 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp1977->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1977->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1977, ((panda$core$Int64) { 1005 }), p_offset, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1877));
        result1971 = $tmp1977;
        org$pandalanguage$pandac$Type* $tmp1979 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1980 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1971, p_offset, ((panda$core$Bit) { false }), $tmp1979);
        result1971 = $tmp1980;
    }
    }
    return result1971;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp1981 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp1981;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved1982;
    org$pandalanguage$pandac$ClassDecl* cl1984;
    org$pandalanguage$pandac$Symbol* s1988;
    org$pandalanguage$pandac$IRNode* ref2010;
    org$pandalanguage$pandac$IRNode* $tmp1983 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved1982 = $tmp1983;
    if (((panda$core$Bit) { resolved1982 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp1985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved1982->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp1985.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1986 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved1982->payload));
        cl1984 = $tmp1986;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1987 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved1982->type);
        cl1984 = $tmp1987;
    }
    }
    if (((panda$core$Bit) { cl1984 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp1989 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1984);
    org$pandalanguage$pandac$Symbol* $tmp1990 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp1989, p_name);
    s1988 = $tmp1990;
    if (((panda$core$Bit) { s1988 == NULL }).value) {
    {
        panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1991, ((org$pandalanguage$pandac$Symbol*) cl1984)->name);
        panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1992, &$s1993);
        panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1994, p_name);
        panda$core$String* $tmp1997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1995, &$s1996);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp1997);
        return NULL;
    }
    }
    panda$core$Bit $tmp1999 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1988->kind, ((panda$core$Int64) { 204 }));
    bool $tmp1998 = $tmp1999.value;
    if (!$tmp1998) goto $l2000;
    panda$core$Bit $tmp2001 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s1988->kind, ((panda$core$Int64) { 205 }));
    $tmp1998 = $tmp2001.value;
    $l2000:;
    panda$core$Bit $tmp2002 = { $tmp1998 };
    if ($tmp2002.value) {
    {
        panda$core$String* $tmp2004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2003, ((org$pandalanguage$pandac$Symbol*) cl1984)->name);
        panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2004, &$s2005);
        panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2006, p_name);
        panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, &$s2008);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_target->offset, $tmp2009);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2011 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl1984);
    org$pandalanguage$pandac$IRNode* $tmp2012 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->offset, p_target, s1988, $tmp2011);
    ref2010 = $tmp2012;
    if (((panda$core$Bit) { ref2010 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2013 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2010, p_args, p_expectedType);
    return $tmp2013;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2014 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2014;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2015;
    panda$collections$Array* methods2022;
    org$pandalanguage$pandac$MethodDecl* first2027;
    panda$core$MutableString* msg2032;
    panda$core$String* separator2044;
    panda$collections$Iterator* a$Iter2046;
    org$pandalanguage$pandac$IRNode* a2058;
    org$pandalanguage$pandac$IRNode* target2072;
    panda$collections$Array* children2080;
    panda$collections$Array* types2086;
    panda$collections$Iterator* m$Iter2089;
    org$pandalanguage$pandac$MethodRef* m2101;
    org$pandalanguage$pandac$IRNode* target2111;
    org$pandalanguage$pandac$IRNode* initCall2114;
    panda$collections$Array* children2118;
    org$pandalanguage$pandac$IRNode* resolved2123;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2016 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2016, ((panda$core$Int64) { 0 }));
            if ($tmp2017.value) {
            {
                target2015 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2018 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2018, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2019.value);
                panda$core$Object* $tmp2020 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2015 = ((org$pandalanguage$pandac$IRNode*) $tmp2020);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2021 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target2015, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2021;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2023 = (panda$collections$Array*) malloc(40);
            $tmp2023->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2023->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2023, ((panda$collections$ListView*) p_m->payload));
            methods2022 = $tmp2023;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2022, p_args, p_expectedType);
            panda$core$Int64 $tmp2025 = panda$collections$Array$get_count$R$panda$core$Int64(methods2022);
            panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2025, ((panda$core$Int64) { 0 }));
            if ($tmp2026.value) {
            {
                ITable* $tmp2028 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2028->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2028 = $tmp2028->next;
                }
                $fn2030 $tmp2029 = $tmp2028->methods[0];
                panda$core$Object* $tmp2031 = $tmp2029(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2027 = ((org$pandalanguage$pandac$MethodRef*) $tmp2031)->value;
                panda$core$MutableString* $tmp2033 = (panda$core$MutableString*) malloc(40);
                $tmp2033->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2033->refCount.value = 1;
                panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2035, ((org$pandalanguage$pandac$Symbol*) first2027->owner)->name);
                panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2036, &$s2037);
                panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2039, ((org$pandalanguage$pandac$Symbol*) first2027)->name);
                panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, &$s2041);
                panda$core$String* $tmp2043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2038, $tmp2042);
                panda$core$MutableString$init$panda$core$String($tmp2033, $tmp2043);
                msg2032 = $tmp2033;
                separator2044 = &$s2045;
                {
                    ITable* $tmp2047 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2047->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2047 = $tmp2047->next;
                    }
                    $fn2049 $tmp2048 = $tmp2047->methods[0];
                    panda$collections$Iterator* $tmp2050 = $tmp2048(((panda$collections$Iterable*) p_args));
                    a$Iter2046 = $tmp2050;
                    $l2051:;
                    ITable* $tmp2053 = a$Iter2046->$class->itable;
                    while ($tmp2053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2053 = $tmp2053->next;
                    }
                    $fn2055 $tmp2054 = $tmp2053->methods[0];
                    panda$core$Bit $tmp2056 = $tmp2054(a$Iter2046);
                    panda$core$Bit $tmp2057 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2056);
                    if (!$tmp2057.value) goto $l2052;
                    {
                        ITable* $tmp2059 = a$Iter2046->$class->itable;
                        while ($tmp2059->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2059 = $tmp2059->next;
                        }
                        $fn2061 $tmp2060 = $tmp2059->methods[1];
                        panda$core$Object* $tmp2062 = $tmp2060(a$Iter2046);
                        a2058 = ((org$pandalanguage$pandac$IRNode*) $tmp2062);
                        panda$core$MutableString$append$panda$core$String(msg2032, separator2044);
                        panda$core$MutableString$append$panda$core$Object(msg2032, ((panda$core$Object*) a2058->type));
                        separator2044 = &$s2063;
                    }
                    goto $l2051;
                    $l2052:;
                }
                panda$core$MutableString$append$panda$core$String(msg2032, &$s2064);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2066 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2065, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2066, &$s2067);
                    panda$core$MutableString$append$panda$core$String(msg2032, $tmp2068);
                }
                }
                panda$core$String* $tmp2069 = panda$core$MutableString$convert$R$panda$core$String(msg2032);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_m->offset, $tmp2069);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2070 = panda$collections$Array$get_count$R$panda$core$Int64(methods2022);
            panda$core$Bit $tmp2071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2070, ((panda$core$Int64) { 1 }));
            if ($tmp2071.value) {
            {
                panda$core$Int64 $tmp2073 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2073, ((panda$core$Int64) { 1 }));
                if ($tmp2074.value) {
                {
                    panda$core$Object* $tmp2075 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2072 = ((org$pandalanguage$pandac$IRNode*) $tmp2075);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2076 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2076, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2077.value);
                    target2072 = NULL;
                }
                }
                panda$core$Object* $tmp2078 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2022, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2079 = org$pandalanguage$pandac$Compiler$call$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->offset, target2072, ((org$pandalanguage$pandac$MethodRef*) $tmp2078), p_args);
                return $tmp2079;
            }
            }
            panda$collections$Array* $tmp2081 = (panda$collections$Array*) malloc(40);
            $tmp2081->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2081->refCount.value = 1;
            panda$collections$Array$init($tmp2081);
            children2080 = $tmp2081;
            org$pandalanguage$pandac$IRNode* $tmp2083 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2083->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2083->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2085 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2083, ((panda$core$Int64) { 1003 }), p_m->offset, $tmp2085, ((panda$core$Object*) methods2022), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2080, ((panda$core$Object*) $tmp2083));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2080, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2087 = (panda$collections$Array*) malloc(40);
            $tmp2087->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2087->refCount.value = 1;
            panda$collections$Array$init($tmp2087);
            types2086 = $tmp2087;
            {
                ITable* $tmp2090 = ((panda$collections$Iterable*) methods2022)->$class->itable;
                while ($tmp2090->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2090 = $tmp2090->next;
                }
                $fn2092 $tmp2091 = $tmp2090->methods[0];
                panda$collections$Iterator* $tmp2093 = $tmp2091(((panda$collections$Iterable*) methods2022));
                m$Iter2089 = $tmp2093;
                $l2094:;
                ITable* $tmp2096 = m$Iter2089->$class->itable;
                while ($tmp2096->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2096 = $tmp2096->next;
                }
                $fn2098 $tmp2097 = $tmp2096->methods[0];
                panda$core$Bit $tmp2099 = $tmp2097(m$Iter2089);
                panda$core$Bit $tmp2100 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2099);
                if (!$tmp2100.value) goto $l2095;
                {
                    ITable* $tmp2102 = m$Iter2089->$class->itable;
                    while ($tmp2102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2102 = $tmp2102->next;
                    }
                    $fn2104 $tmp2103 = $tmp2102->methods[1];
                    panda$core$Object* $tmp2105 = $tmp2103(m$Iter2089);
                    m2101 = ((org$pandalanguage$pandac$MethodRef*) $tmp2105);
                    org$pandalanguage$pandac$Type* $tmp2106 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2101);
                    panda$collections$Array$add$panda$collections$Array$T(types2086, ((panda$core$Object*) $tmp2106));
                }
                goto $l2094;
                $l2095:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2107 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2107->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2107->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2109 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp2109->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2109->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2109, ((panda$collections$ListView*) types2086));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2107, ((panda$core$Int64) { 1039 }), p_m->offset, $tmp2109, ((panda$collections$ListView*) children2080));
            return $tmp2107;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2112 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2112->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2112->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2112, ((panda$core$Int64) { 1038 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2111 = $tmp2112;
            org$pandalanguage$pandac$IRNode* $tmp2116 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2111, &$s2115, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2117 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2116);
            initCall2114 = $tmp2117;
            if (((panda$core$Bit) { initCall2114 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2119 = (panda$collections$Array*) malloc(40);
            $tmp2119->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2119->refCount.value = 1;
            panda$collections$Array$init($tmp2119);
            children2118 = $tmp2119;
            panda$collections$Array$add$panda$collections$Array$T(children2118, ((panda$core$Object*) initCall2114));
            org$pandalanguage$pandac$IRNode* $tmp2121 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2121->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2121->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2121, ((panda$core$Int64) { 1010 }), p_m->offset, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2118));
            return $tmp2121;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2124 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2123 = $tmp2124;
            if (((panda$core$Bit) { resolved2123 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2126 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2125, ((panda$core$Object*) resolved2123->type));
            panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2126, &$s2127);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, resolved2123->offset, $tmp2128);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2129;
    panda$core$MutableString* typeName2132;
    panda$core$String* separator2136;
    panda$collections$Iterator* p$Iter2138;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2150;
    panda$core$Int64 kind2156;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2130 = (panda$collections$Array*) malloc(40);
    $tmp2130->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2130->refCount.value = 1;
    panda$collections$Array$init($tmp2130);
    subtypes2129 = $tmp2130;
    panda$core$MutableString* $tmp2133 = (panda$core$MutableString*) malloc(40);
    $tmp2133->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2133->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2133, &$s2135);
    typeName2132 = $tmp2133;
    separator2136 = &$s2137;
    {
        ITable* $tmp2139 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2139->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2139 = $tmp2139->next;
        }
        $fn2141 $tmp2140 = $tmp2139->methods[0];
        panda$collections$Iterator* $tmp2142 = $tmp2140(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2138 = $tmp2142;
        $l2143:;
        ITable* $tmp2145 = p$Iter2138->$class->itable;
        while ($tmp2145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2145 = $tmp2145->next;
        }
        $fn2147 $tmp2146 = $tmp2145->methods[0];
        panda$core$Bit $tmp2148 = $tmp2146(p$Iter2138);
        panda$core$Bit $tmp2149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2148);
        if (!$tmp2149.value) goto $l2144;
        {
            ITable* $tmp2151 = p$Iter2138->$class->itable;
            while ($tmp2151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2151 = $tmp2151->next;
            }
            $fn2153 $tmp2152 = $tmp2151->methods[1];
            panda$core$Object* $tmp2154 = $tmp2152(p$Iter2138);
            p2150 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2154);
            panda$core$MutableString$append$panda$core$String(typeName2132, separator2136);
            panda$core$MutableString$append$panda$core$String(typeName2132, ((org$pandalanguage$pandac$Symbol*) p2150->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2129, ((panda$core$Object*) p2150->type));
            separator2136 = &$s2155;
        }
        goto $l2143;
        $l2144:;
    }
    panda$core$Bit $tmp2157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2157.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2132, &$s2158);
        kind2156 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2132, &$s2159);
        kind2156 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2129, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2160 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2161 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2160);
    if ($tmp2161.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2132, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2132, &$s2162);
    org$pandalanguage$pandac$Type* $tmp2163 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp2163->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2163->refCount.value = 1;
    panda$core$String* $tmp2165 = panda$core$MutableString$convert$R$panda$core$String(typeName2132);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2163, $tmp2165, kind2156, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2129), ((panda$core$Bit) { true }));
    return $tmp2163;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2166;
    panda$core$MutableString* typeName2169;
    panda$collections$Iterator* p$Iter2173;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2185;
    panda$core$Int64 kind2191;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2167 = (panda$collections$Array*) malloc(40);
    $tmp2167->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2167->refCount.value = 1;
    panda$collections$Array$init($tmp2167);
    subtypes2166 = $tmp2167;
    panda$core$MutableString* $tmp2170 = (panda$core$MutableString*) malloc(40);
    $tmp2170->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2170->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2170, &$s2172);
    typeName2169 = $tmp2170;
    panda$core$MutableString$append$panda$core$String(typeName2169, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2166, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2174 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2174->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2174 = $tmp2174->next;
        }
        $fn2176 $tmp2175 = $tmp2174->methods[0];
        panda$collections$Iterator* $tmp2177 = $tmp2175(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2173 = $tmp2177;
        $l2178:;
        ITable* $tmp2180 = p$Iter2173->$class->itable;
        while ($tmp2180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2180 = $tmp2180->next;
        }
        $fn2182 $tmp2181 = $tmp2180->methods[0];
        panda$core$Bit $tmp2183 = $tmp2181(p$Iter2173);
        panda$core$Bit $tmp2184 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2183);
        if (!$tmp2184.value) goto $l2179;
        {
            ITable* $tmp2186 = p$Iter2173->$class->itable;
            while ($tmp2186->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2186 = $tmp2186->next;
            }
            $fn2188 $tmp2187 = $tmp2186->methods[1];
            panda$core$Object* $tmp2189 = $tmp2187(p$Iter2173);
            p2185 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2189);
            panda$core$MutableString$append$panda$core$String(typeName2169, &$s2190);
            panda$core$MutableString$append$panda$core$String(typeName2169, ((org$pandalanguage$pandac$Symbol*) p2185->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2166, ((panda$core$Object*) p2185->type));
        }
        goto $l2178;
        $l2179:;
    }
    panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2192.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2169, &$s2193);
        kind2191 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2169, &$s2194);
        kind2191 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2166, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2195 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2196 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2195);
    if ($tmp2196.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2169, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2169, &$s2197);
    org$pandalanguage$pandac$Type* $tmp2198 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp2198->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2198->refCount.value = 1;
    panda$core$String* $tmp2200 = panda$core$MutableString$convert$R$panda$core$String(typeName2169);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2198, $tmp2200, kind2191, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$collections$ListView*) subtypes2166), ((panda$core$Bit) { true }));
    return $tmp2198;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2201;
    org$pandalanguage$pandac$MethodDecl* $tmp2202 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2201 = $tmp2202;
    if (((panda$core$Bit) { inherited2201 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2203 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2203;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2204 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2201);
    return $tmp2204;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2205 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2206 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2205);
    return $tmp2206;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2207;
    org$pandalanguage$pandac$MethodDecl* $tmp2208 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2207 = $tmp2208;
    if (((panda$core$Bit) { inherited2207 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2209 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2209;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2210 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2207, p_selfType);
    return $tmp2210;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2211;
        }
        break;
        case 52:
        {
            return &$s2212;
        }
        break;
        case 53:
        {
            return &$s2213;
        }
        break;
        case 54:
        {
            return &$s2214;
        }
        break;
        case 55:
        {
            return &$s2215;
        }
        break;
        case 56:
        {
            return &$s2216;
        }
        break;
        case 57:
        {
            return &$s2217;
        }
        break;
        case 58:
        {
            return &$s2218;
        }
        break;
        case 59:
        {
            return &$s2219;
        }
        break;
        case 63:
        {
            return &$s2220;
        }
        break;
        case 62:
        {
            return &$s2221;
        }
        break;
        case 65:
        {
            return &$s2222;
        }
        break;
        case 64:
        {
            return &$s2223;
        }
        break;
        case 68:
        {
            return &$s2224;
        }
        break;
        case 69:
        {
            return &$s2225;
        }
        break;
        case 66:
        {
            return &$s2226;
        }
        break;
        case 67:
        {
            return &$s2227;
        }
        break;
        case 70:
        {
            return &$s2228;
        }
        break;
        case 71:
        {
            return &$s2229;
        }
        break;
        case 49:
        {
            return &$s2230;
        }
        break;
        case 50:
        {
            return &$s2231;
        }
        break;
        case 72:
        {
            return &$s2232;
        }
        break;
        case 1:
        {
            return &$s2233;
        }
        break;
        case 101:
        {
            return &$s2234;
        }
        break;
        case 73:
        {
            return &$s2235;
        }
        break;
        case 60:
        {
            return &$s2236;
        }
        break;
        case 61:
        {
            return &$s2237;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 74:
        case 75:
        case 76:
        case 77:
        case 79:
        case 78:
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
            return ((panda$core$Bit) { true });
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 74:
        {
            return ((panda$core$Int64) { 51 });
        }
        break;
        case 75:
        {
            return ((panda$core$Int64) { 52 });
        }
        break;
        case 76:
        {
            return ((panda$core$Int64) { 53 });
        }
        break;
        case 77:
        {
            return ((panda$core$Int64) { 54 });
        }
        break;
        case 79:
        {
            return ((panda$core$Int64) { 55 });
        }
        break;
        case 78:
        {
            return ((panda$core$Int64) { 56 });
        }
        break;
        case 80:
        {
            return ((panda$core$Int64) { 57 });
        }
        break;
        case 81:
        {
            return ((panda$core$Int64) { 68 });
        }
        break;
        case 82:
        {
            return ((panda$core$Int64) { 69 });
        }
        break;
        case 83:
        {
            return ((panda$core$Int64) { 66 });
        }
        break;
        case 84:
        {
            return ((panda$core$Int64) { 67 });
        }
        break;
        case 85:
        {
            return ((panda$core$Int64) { 70 });
        }
        break;
        case 86:
        {
            return ((panda$core$Int64) { 71 });
        }
        break;
        case 87:
        {
            return ((panda$core$Int64) { 72 });
        }
        break;
        case 88:
        {
            return ((panda$core$Int64) { 1 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    switch (p_expr->kind.value) {
        case 1009:
        {
            panda$core$Int64 $tmp2238 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2238, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2239.value);
            panda$core$Bit $tmp2240 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2240.value) {
            {
                panda$core$Object* $tmp2241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2242 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2241));
                return $tmp2242;
            }
            }
            return ((panda$core$Bit) { false });
        }
        break;
        case 1026:
        case 1016:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2243 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2244 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2243));
            return $tmp2244;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2270;
    panda$core$Int64 r2272;
    panda$core$Bit $tmp2246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2245 = $tmp2246.value;
    if ($tmp2245) goto $l2247;
    panda$core$Bit $tmp2248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2245 = $tmp2248.value;
    $l2247:;
    panda$core$Bit $tmp2249 = { $tmp2245 };
    PANDA_ASSERT($tmp2249.value);
    panda$core$Bit $tmp2251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2250 = $tmp2251.value;
    if ($tmp2250) goto $l2252;
    panda$core$Bit $tmp2253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2250 = $tmp2253.value;
    $l2252:;
    panda$core$Bit $tmp2254 = { $tmp2250 };
    PANDA_ASSERT($tmp2254.value);
    panda$core$Bit $tmp2257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2256 = $tmp2257.value;
    if ($tmp2256) goto $l2258;
    panda$core$UInt64 $tmp2260 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2261 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2260);
    bool $tmp2259 = $tmp2261.value;
    if (!$tmp2259) goto $l2262;
    panda$core$Bit $tmp2263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2259 = $tmp2263.value;
    $l2262:;
    panda$core$Bit $tmp2264 = { $tmp2259 };
    $tmp2256 = $tmp2264.value;
    $l2258:;
    panda$core$Bit $tmp2265 = { $tmp2256 };
    bool $tmp2255 = $tmp2265.value;
    if ($tmp2255) goto $l2266;
    panda$core$UInt64 $tmp2267 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2268 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2267);
    $tmp2255 = $tmp2268.value;
    $l2266:;
    panda$core$Bit $tmp2269 = { $tmp2255 };
    if ($tmp2269.value) {
    {
        panda$core$Int64 $tmp2271 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2270 = $tmp2271;
        panda$core$Int64 $tmp2273 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2272 = $tmp2273;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2274 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2274->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2274->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2276 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2277 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2270, r2272);
                panda$core$UInt64 $tmp2278 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2277);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2274, ((panda$core$Int64) { 1004 }), p_offset, $tmp2276, $tmp2278);
                return $tmp2274;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2279 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2279->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2279->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2281 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2282 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2270, r2272);
                panda$core$UInt64 $tmp2283 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2282);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2279, ((panda$core$Int64) { 1004 }), p_offset, $tmp2281, $tmp2283);
                return $tmp2279;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2284 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2284->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2284->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2286 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2287 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2270, r2272);
                panda$core$UInt64 $tmp2288 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2287);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2284, ((panda$core$Int64) { 1004 }), p_offset, $tmp2286, $tmp2288);
                return $tmp2284;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2289 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2289->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2289->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2291 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2292 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2270, r2272);
                panda$core$UInt64 $tmp2293 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2292);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2289, ((panda$core$Int64) { 1004 }), p_offset, $tmp2291, $tmp2293);
                return $tmp2289;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2294 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2294->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2294->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2296 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2297 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2270, r2272);
                panda$core$UInt64 $tmp2298 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2297);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2294, ((panda$core$Int64) { 1004 }), p_offset, $tmp2296, $tmp2298);
                return $tmp2294;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2299 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2299->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2299->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2301 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2270, r2272);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2299, ((panda$core$Int64) { 1011 }), p_offset, $tmp2301, $tmp2302);
                return $tmp2299;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2303 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2303->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2303->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2305 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2306 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2270, r2272);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2303, ((panda$core$Int64) { 1011 }), p_offset, $tmp2305, $tmp2306);
                return $tmp2303;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2307 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2307->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2307->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2309 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2310 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2270, r2272);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2307, ((panda$core$Int64) { 1011 }), p_offset, $tmp2309, $tmp2310);
                return $tmp2307;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2311 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2311->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2311->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2313 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2314 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2270, r2272);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2311, ((panda$core$Int64) { 1011 }), p_offset, $tmp2313, $tmp2314);
                return $tmp2311;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2315 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2315->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2315->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2317 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2318 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2270, r2272);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2315, ((panda$core$Int64) { 1011 }), p_offset, $tmp2317, $tmp2318);
                return $tmp2315;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2319 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2319->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2319->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2321 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2322 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2270, r2272);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2319, ((panda$core$Int64) { 1011 }), p_offset, $tmp2321, $tmp2322);
                return $tmp2319;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2323 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2323->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2323->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2325 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2326 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2270, r2272);
                panda$core$UInt64 $tmp2327 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2326);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2323, ((panda$core$Int64) { 1004 }), p_offset, $tmp2325, $tmp2327);
                return $tmp2323;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2328 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2328->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2328->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2330 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2331 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2270, r2272);
                panda$core$UInt64 $tmp2332 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2331);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2328, ((panda$core$Int64) { 1004 }), p_offset, $tmp2330, $tmp2332);
                return $tmp2328;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2333 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2333->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2333->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2335 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2336 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2270, r2272);
                panda$core$UInt64 $tmp2337 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2336);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2333, ((panda$core$Int64) { 1004 }), p_offset, $tmp2335, $tmp2337);
                return $tmp2333;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2338 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2338->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2338->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2340 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2341 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2270, r2272);
                panda$core$UInt64 $tmp2342 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2341);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2338, ((panda$core$Int64) { 1004 }), p_offset, $tmp2340, $tmp2342);
                return $tmp2338;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2343 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2343->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2343->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2345 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2346 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2270, r2272);
                panda$core$UInt64 $tmp2347 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2346);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2343, ((panda$core$Int64) { 1004 }), p_offset, $tmp2345, $tmp2347);
                return $tmp2343;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, &$s2348);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2349.value) {
    {
        panda$core$Object* $tmp2350 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2350);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2355;
    org$pandalanguage$pandac$IRNode* resolved2363;
    panda$collections$Array* children2368;
    panda$core$UInt64 baseId2374;
    org$pandalanguage$pandac$IRNode* base2375;
    panda$core$UInt64 indexId2382;
    org$pandalanguage$pandac$IRNode* index2383;
    org$pandalanguage$pandac$IRNode* baseRef2388;
    org$pandalanguage$pandac$IRNode* indexRef2391;
    org$pandalanguage$pandac$IRNode* rhsIndex2394;
    org$pandalanguage$pandac$IRNode* value2396;
    panda$core$Bit $tmp2351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2351.value);
    panda$core$Int64 $tmp2352 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2352, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2353.value);
    panda$core$Bit $tmp2354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2354.value) {
    {
        panda$collections$Array* $tmp2356 = (panda$collections$Array*) malloc(40);
        $tmp2356->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2356->refCount.value = 1;
        panda$collections$Array$init($tmp2356);
        args2355 = $tmp2356;
        panda$core$Object* $tmp2358 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2355, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2358)));
        panda$collections$Array$add$panda$collections$Array$T(args2355, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2359 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2361 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2359), &$s2360, ((panda$collections$ListView*) args2355));
        return $tmp2361;
    }
    }
    panda$core$Bit $tmp2362 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2362.value);
    org$pandalanguage$pandac$IRNode* $tmp2364 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2363 = $tmp2364;
    if (((panda$core$Bit) { resolved2363 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2365 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2363);
    resolved2363 = $tmp2365;
    panda$core$Int64 $tmp2366 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2363->children);
    panda$core$Bit $tmp2367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2366, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2367.value);
    panda$collections$Array* $tmp2369 = (panda$collections$Array*) malloc(40);
    $tmp2369->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2369->refCount.value = 1;
    panda$collections$Array$init($tmp2369);
    children2368 = $tmp2369;
    panda$core$Object* $tmp2371 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2363->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2372 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2371));
    panda$collections$Array$add$panda$collections$Array$T(children2368, ((panda$core$Object*) $tmp2372));
    panda$core$UInt64 $tmp2373 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2373;
    baseId2374 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2376 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2376->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2376->refCount.value = 1;
    panda$core$Object* $tmp2378 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2368, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2379 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2368, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2376, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2378)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2379)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2374)), ((panda$collections$ListView*) children2368));
    base2375 = $tmp2376;
    panda$collections$Array$clear(children2368);
    panda$core$Object* $tmp2380 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2363->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2368, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2380)));
    panda$core$UInt64 $tmp2381 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2381;
    indexId2382 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2384 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2384->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2384->refCount.value = 1;
    panda$core$Object* $tmp2386 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2368, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2387 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2368, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2384, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2386)->offset, ((org$pandalanguage$pandac$IRNode*) $tmp2387)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2382)), ((panda$collections$ListView*) children2368));
    index2383 = $tmp2384;
    org$pandalanguage$pandac$IRNode* $tmp2389 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2389->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2389->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2389, ((panda$core$Int64) { 1028 }), base2375->offset, base2375->type, baseId2374);
    baseRef2388 = $tmp2389;
    org$pandalanguage$pandac$IRNode* $tmp2392 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2392->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2392->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2392, ((panda$core$Int64) { 1028 }), index2383->offset, index2383->type, indexId2382);
    indexRef2391 = $tmp2392;
    org$pandalanguage$pandac$IRNode* $tmp2395 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, baseRef2388, ((panda$core$Int64) { 101 }), indexRef2391);
    rhsIndex2394 = $tmp2395;
    if (((panda$core$Bit) { rhsIndex2394 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2397 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2398 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, rhsIndex2394, $tmp2397, p_right);
    value2396 = $tmp2398;
    if (((panda$core$Bit) { value2396 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2401 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2394->type);
    bool $tmp2400 = $tmp2401.value;
    if (!$tmp2400) goto $l2402;
    panda$core$Bit $tmp2403 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2400 = $tmp2403.value;
    $l2402:;
    panda$core$Bit $tmp2404 = { $tmp2400 };
    bool $tmp2399 = $tmp2404.value;
    if (!$tmp2399) goto $l2405;
    panda$core$Bit $tmp2406 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2394->type, value2396->type);
    $tmp2399 = $tmp2406.value;
    $l2405:;
    panda$core$Bit $tmp2407 = { $tmp2399 };
    if ($tmp2407.value) {
    {
        panda$collections$Array* $tmp2409 = (panda$collections$Array*) malloc(40);
        $tmp2409->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2409->refCount.value = 1;
        panda$collections$Array$init($tmp2409);
        org$pandalanguage$pandac$IRNode* $tmp2411 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2396, &$s2408, ((panda$collections$ListView*) $tmp2409), resolved2363->type);
        value2396 = $tmp2411;
        if (((panda$core$Bit) { value2396 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2368);
    panda$collections$Array$add$panda$collections$Array$T(children2368, ((panda$core$Object*) index2383));
    panda$collections$Array$add$panda$collections$Array$T(children2368, ((panda$core$Object*) value2396));
    org$pandalanguage$pandac$IRNode* $tmp2413 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2375, &$s2412, ((panda$collections$ListView*) children2368));
    return $tmp2413;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2414;
    org$pandalanguage$pandac$IRNode* right2415;
    panda$core$Int64 kind2439;
    org$pandalanguage$pandac$IRNode* resolved2446;
    panda$collections$Array* children2448;
    org$pandalanguage$pandac$IRNode* resolved2455;
    panda$collections$Array* children2457;
    org$pandalanguage$pandac$ClassDecl* cl2469;
    org$pandalanguage$pandac$ClassDecl* cl2486;
    org$pandalanguage$pandac$IRNode* finalLeft2502;
    org$pandalanguage$pandac$IRNode* finalRight2505;
    panda$collections$Array* children2508;
    panda$collections$Array* children2522;
    panda$collections$Array* children2534;
    org$pandalanguage$pandac$IRNode* reusedLeft2540;
    org$pandalanguage$pandac$ClassDecl* cl2557;
    panda$collections$ListView* parameters2559;
    org$pandalanguage$pandac$Symbol* methods2561;
    org$pandalanguage$pandac$Type* type2565;
    panda$collections$Array* types2566;
    org$pandalanguage$pandac$MethodDecl* m2570;
    panda$collections$Iterator* m$Iter2575;
    org$pandalanguage$pandac$MethodDecl* m2587;
    panda$collections$Array* children2598;
    panda$collections$Array* children2627;
    panda$collections$Array* children2643;
    org$pandalanguage$pandac$Type* resultType2666;
    org$pandalanguage$pandac$IRNode* result2670;
    org$pandalanguage$pandac$IRNode* resolved2673;
    org$pandalanguage$pandac$IRNode* target2679;
    left2414 = p_rawLeft;
    right2415 = p_rawRight;
    panda$core$Bit $tmp2416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2414->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2416.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2417 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2415);
        right2415 = $tmp2417;
        if (((panda$core$Bit) { right2415 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2418 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2414, right2415->type);
        if (((panda$core$Bit) { $tmp2418.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2419 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2414, right2415->type);
            left2414 = $tmp2419;
        }
        }
    }
    }
    panda$core$Bit $tmp2421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2415->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2420 = $tmp2421.value;
    if (!$tmp2420) goto $l2422;
    panda$core$Int64$nullable $tmp2423 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2415, left2414->type);
    $tmp2420 = ((panda$core$Bit) { $tmp2423.nonnull }).value;
    $l2422:;
    panda$core$Bit $tmp2424 = { $tmp2420 };
    if ($tmp2424.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2425 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2415, left2414->type);
        right2415 = $tmp2425;
    }
    }
    panda$core$Bit $tmp2429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2428 = $tmp2429.value;
    if ($tmp2428) goto $l2430;
    panda$core$Bit $tmp2431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2428 = $tmp2431.value;
    $l2430:;
    panda$core$Bit $tmp2432 = { $tmp2428 };
    bool $tmp2427 = $tmp2432.value;
    if ($tmp2427) goto $l2433;
    panda$core$Bit $tmp2434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2427 = $tmp2434.value;
    $l2433:;
    panda$core$Bit $tmp2435 = { $tmp2427 };
    bool $tmp2426 = $tmp2435.value;
    if ($tmp2426) goto $l2436;
    panda$core$Bit $tmp2437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2426 = $tmp2437.value;
    $l2436:;
    panda$core$Bit $tmp2438 = { $tmp2426 };
    if ($tmp2438.value) {
    {
        panda$core$Bit $tmp2441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2440 = $tmp2441.value;
        if ($tmp2440) goto $l2442;
        panda$core$Bit $tmp2443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2440 = $tmp2443.value;
        $l2442:;
        panda$core$Bit $tmp2444 = { $tmp2440 };
        if ($tmp2444.value) {
        {
            kind2439 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2439 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2414->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2445.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2447 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2415);
            resolved2446 = $tmp2447;
            if (((panda$core$Bit) { resolved2446 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2449 = (panda$collections$Array*) malloc(40);
            $tmp2449->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2449->refCount.value = 1;
            panda$collections$Array$init($tmp2449);
            children2448 = $tmp2449;
            panda$collections$Array$add$panda$collections$Array$T(children2448, ((panda$core$Object*) resolved2446));
            org$pandalanguage$pandac$IRNode* $tmp2451 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2451->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2451->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2453 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2451, kind2439, p_offset, $tmp2453, ((panda$collections$ListView*) children2448));
            return $tmp2451;
        }
        }
        panda$core$Bit $tmp2454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2415->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2454.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2456 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2414);
            resolved2455 = $tmp2456;
            if (((panda$core$Bit) { resolved2455 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2458 = (panda$collections$Array*) malloc(40);
            $tmp2458->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2458->refCount.value = 1;
            panda$collections$Array$init($tmp2458);
            children2457 = $tmp2458;
            panda$collections$Array$add$panda$collections$Array$T(children2457, ((panda$core$Object*) resolved2455));
            org$pandalanguage$pandac$IRNode* $tmp2460 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2460->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2460->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2462 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2460, kind2439, p_offset, $tmp2462, ((panda$collections$ListView*) children2457));
            return $tmp2460;
        }
        }
    }
    }
    panda$core$Bit $tmp2464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2463 = $tmp2464.value;
    if ($tmp2463) goto $l2465;
    panda$core$Bit $tmp2466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2463 = $tmp2466.value;
    $l2465:;
    panda$core$Bit $tmp2467 = { $tmp2463 };
    if ($tmp2467.value) {
    {
        panda$core$Bit $tmp2468 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2414->type);
        if ($tmp2468.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2470 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2414->type);
            cl2469 = $tmp2470;
            if (((panda$core$Bit) { cl2469 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2471 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2469);
            if ($tmp2471.value) {
            {
                panda$core$String* $tmp2473 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2472, $tmp2473);
                panda$core$String* $tmp2476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2474, &$s2475);
                panda$core$String* $tmp2477 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2476, ((panda$core$Object*) left2414->type));
                panda$core$String* $tmp2479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2477, &$s2478);
                panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2480, ((panda$core$Object*) right2415->type));
                panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2481, &$s2482);
                panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, $tmp2483);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2484);
            }
            }
        }
        }
        panda$core$Bit $tmp2485 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2415->type);
        if ($tmp2485.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2487 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2415->type);
            cl2486 = $tmp2487;
            if (((panda$core$Bit) { cl2486 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2488 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2486);
            if ($tmp2488.value) {
            {
                panda$core$String* $tmp2490 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2489, $tmp2490);
                panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2491, &$s2492);
                panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2493, ((panda$core$Object*) left2414->type));
                panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2494, &$s2495);
                panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2497, ((panda$core$Object*) right2415->type));
                panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, &$s2499);
                panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2496, $tmp2500);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2501);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2503 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2504 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2414, $tmp2503);
        finalLeft2502 = $tmp2504;
        if (((panda$core$Bit) { finalLeft2502 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2506 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2507 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2415, $tmp2506);
        finalRight2505 = $tmp2507;
        if (((panda$core$Bit) { finalRight2505 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2509 = (panda$collections$Array*) malloc(40);
        $tmp2509->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2509->refCount.value = 1;
        panda$collections$Array$init($tmp2509);
        children2508 = $tmp2509;
        panda$collections$Array$add$panda$collections$Array$T(children2508, ((panda$core$Object*) finalLeft2502));
        panda$collections$Array$add$panda$collections$Array$T(children2508, ((panda$core$Object*) finalRight2505));
        org$pandalanguage$pandac$IRNode* $tmp2511 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2511->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2511->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2513 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2511, ((panda$core$Int64) { 1023 }), p_offset, $tmp2513, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2508));
        return $tmp2511;
    }
    }
    panda$core$Bit $tmp2514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2514.value) {
    {
        panda$core$Bit $tmp2515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2414->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2515.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2516 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2414, p_op, right2415);
            return $tmp2516;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2517 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2414);
        left2414 = $tmp2517;
        if (((panda$core$Bit) { left2414 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2518 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2415, left2414->type);
        right2415 = $tmp2518;
        if (((panda$core$Bit) { right2415 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2519 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2414);
        panda$core$Bit $tmp2520 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2519);
        if ($tmp2520.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2414->offset, &$s2521);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2523 = (panda$collections$Array*) malloc(40);
        $tmp2523->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2523->refCount.value = 1;
        panda$collections$Array$init($tmp2523);
        children2522 = $tmp2523;
        panda$collections$Array$add$panda$collections$Array$T(children2522, ((panda$core$Object*) left2414));
        panda$collections$Array$add$panda$collections$Array$T(children2522, ((panda$core$Object*) right2415));
        org$pandalanguage$pandac$IRNode* $tmp2525 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2525->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2525->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2525, ((panda$core$Int64) { 1023 }), p_offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2522));
        return $tmp2525;
    }
    }
    panda$core$Bit $tmp2527 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2527.value) {
    {
        panda$core$Bit $tmp2528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2414->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2528.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2529 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2414, p_op, right2415);
            return $tmp2529;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2530 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2414);
        left2414 = $tmp2530;
        if (((panda$core$Bit) { left2414 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2531 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2414);
        panda$core$Bit $tmp2532 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2531);
        if ($tmp2532.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, left2414->offset, &$s2533);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2535 = (panda$collections$Array*) malloc(40);
        $tmp2535->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2535->refCount.value = 1;
        panda$collections$Array$init($tmp2535);
        children2534 = $tmp2535;
        panda$collections$Array$add$panda$collections$Array$T(children2534, ((panda$core$Object*) left2414));
        panda$core$UInt64 $tmp2537 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2537;
        org$pandalanguage$pandac$IRNode* $tmp2538 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2538->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2538->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2538, ((panda$core$Int64) { 1027 }), left2414->offset, left2414->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2534));
        left2414 = $tmp2538;
        org$pandalanguage$pandac$IRNode* $tmp2541 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2541->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2541->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2541, ((panda$core$Int64) { 1028 }), left2414->offset, left2414->type, self->reusedValueCount);
        reusedLeft2540 = $tmp2541;
        panda$core$Int64 $tmp2543 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2544 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, reusedLeft2540, $tmp2543, right2415);
        right2415 = $tmp2544;
        if (((panda$core$Bit) { right2415 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2546 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2414->type);
        bool $tmp2545 = $tmp2546.value;
        if (!$tmp2545) goto $l2547;
        panda$core$Bit $tmp2548 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2414->type, right2415->type);
        $tmp2545 = $tmp2548.value;
        $l2547:;
        panda$core$Bit $tmp2549 = { $tmp2545 };
        if ($tmp2549.value) {
        {
            panda$collections$Array* $tmp2551 = (panda$collections$Array*) malloc(40);
            $tmp2551->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2551->refCount.value = 1;
            panda$collections$Array$init($tmp2551);
            org$pandalanguage$pandac$IRNode* $tmp2553 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2415, &$s2550, ((panda$collections$ListView*) $tmp2551), left2414->type);
            right2415 = $tmp2553;
            if (((panda$core$Bit) { right2415 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2554 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2414, ((panda$core$Int64) { 73 }), right2415);
        return $tmp2554;
    }
    }
    panda$core$Bit $tmp2555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2555.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2556 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2414);
        left2414 = $tmp2556;
        if (((panda$core$Bit) { left2414 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2558 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2414->type);
        cl2557 = $tmp2558;
        if (((panda$core$Bit) { cl2557 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2560 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2414->type);
        parameters2559 = $tmp2560;
        org$pandalanguage$pandac$SymbolTable* $tmp2562 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2557);
        org$pandalanguage$pandac$Symbol* $tmp2564 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2562, &$s2563);
        methods2561 = $tmp2564;
        if (((panda$core$Bit) { methods2561 != NULL }).value) {
        {
            panda$collections$Array* $tmp2567 = (panda$collections$Array*) malloc(40);
            $tmp2567->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2567->refCount.value = 1;
            panda$collections$Array$init($tmp2567);
            types2566 = $tmp2567;
            panda$core$Bit $tmp2569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2561->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2569.value) {
            {
                m2570 = ((org$pandalanguage$pandac$MethodDecl*) methods2561);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2570);
                org$pandalanguage$pandac$MethodRef* $tmp2571 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2571->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2571->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2571, m2570, parameters2559);
                org$pandalanguage$pandac$Type* $tmp2573 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2571);
                panda$collections$Array$add$panda$collections$Array$T(types2566, ((panda$core$Object*) $tmp2573));
            }
            }
            else {
            {
                panda$core$Bit $tmp2574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2561->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2574.value);
                {
                    ITable* $tmp2576 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2561)->methods)->$class->itable;
                    while ($tmp2576->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2576 = $tmp2576->next;
                    }
                    $fn2578 $tmp2577 = $tmp2576->methods[0];
                    panda$collections$Iterator* $tmp2579 = $tmp2577(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2561)->methods));
                    m$Iter2575 = $tmp2579;
                    $l2580:;
                    ITable* $tmp2582 = m$Iter2575->$class->itable;
                    while ($tmp2582->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2582 = $tmp2582->next;
                    }
                    $fn2584 $tmp2583 = $tmp2582->methods[0];
                    panda$core$Bit $tmp2585 = $tmp2583(m$Iter2575);
                    panda$core$Bit $tmp2586 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2585);
                    if (!$tmp2586.value) goto $l2581;
                    {
                        ITable* $tmp2588 = m$Iter2575->$class->itable;
                        while ($tmp2588->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2588 = $tmp2588->next;
                        }
                        $fn2590 $tmp2589 = $tmp2588->methods[1];
                        panda$core$Object* $tmp2591 = $tmp2589(m$Iter2575);
                        m2587 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2591);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2587);
                        org$pandalanguage$pandac$MethodRef* $tmp2592 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2592->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2592->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2592, m2587, parameters2559);
                        org$pandalanguage$pandac$Type* $tmp2594 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2592);
                        panda$collections$Array$add$panda$collections$Array$T(types2566, ((panda$core$Object*) $tmp2594));
                    }
                    goto $l2580;
                    $l2581:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2595 = (org$pandalanguage$pandac$Type*) malloc(80);
            $tmp2595->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2595->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2595, ((panda$collections$ListView*) types2566));
            type2565 = $tmp2595;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2597 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2565 = $tmp2597;
        }
        }
        panda$collections$Array* $tmp2599 = (panda$collections$Array*) malloc(40);
        $tmp2599->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2599->refCount.value = 1;
        panda$collections$Array$init($tmp2599);
        children2598 = $tmp2599;
        panda$collections$Array$add$panda$collections$Array$T(children2598, ((panda$core$Object*) left2414));
        panda$collections$Array$add$panda$collections$Array$T(children2598, ((panda$core$Object*) right2415));
        org$pandalanguage$pandac$IRNode* $tmp2601 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2601->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2601->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2601, ((panda$core$Int64) { 1040 }), p_offset, type2565, ((panda$collections$ListView*) children2598));
        return $tmp2601;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2603 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2604 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2414->type, $tmp2603);
    if ($tmp2604.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2606 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2607 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2415->type, $tmp2606);
        bool $tmp2605 = $tmp2607.value;
        if (!$tmp2605) goto $l2608;
        panda$core$Bit $tmp2613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2612 = $tmp2613.value;
        if ($tmp2612) goto $l2614;
        panda$core$Bit $tmp2615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2612 = $tmp2615.value;
        $l2614:;
        panda$core$Bit $tmp2616 = { $tmp2612 };
        bool $tmp2611 = $tmp2616.value;
        if ($tmp2611) goto $l2617;
        panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2611 = $tmp2618.value;
        $l2617:;
        panda$core$Bit $tmp2619 = { $tmp2611 };
        bool $tmp2610 = $tmp2619.value;
        if ($tmp2610) goto $l2620;
        panda$core$Bit $tmp2621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2610 = $tmp2621.value;
        $l2620:;
        panda$core$Bit $tmp2622 = { $tmp2610 };
        bool $tmp2609 = $tmp2622.value;
        if ($tmp2609) goto $l2623;
        panda$core$Bit $tmp2624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2609 = $tmp2624.value;
        $l2623:;
        panda$core$Bit $tmp2625 = { $tmp2609 };
        $tmp2605 = $tmp2625.value;
        $l2608:;
        panda$core$Bit $tmp2626 = { $tmp2605 };
        if ($tmp2626.value) {
        {
            panda$collections$Array* $tmp2628 = (panda$collections$Array*) malloc(40);
            $tmp2628->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2628->refCount.value = 1;
            panda$collections$Array$init($tmp2628);
            children2627 = $tmp2628;
            panda$collections$Array$add$panda$collections$Array$T(children2627, ((panda$core$Object*) left2414));
            panda$collections$Array$add$panda$collections$Array$T(children2627, ((panda$core$Object*) right2415));
            org$pandalanguage$pandac$IRNode* $tmp2630 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2630->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2630->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2630, ((panda$core$Int64) { 1023 }), p_offset, left2414->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2627));
            return $tmp2630;
        }
        }
        panda$core$String* $tmp2633 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2632, $tmp2633);
        panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, &$s2635);
        panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2636, ((panda$core$Object*) left2414->type));
        panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2638);
        panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2639, ((panda$core$Object*) right2415->type));
        panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, &$s2641);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_offset, $tmp2642);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2644 = (panda$collections$Array*) malloc(40);
    $tmp2644->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2644->refCount.value = 1;
    panda$collections$Array$init($tmp2644);
    children2643 = $tmp2644;
    panda$core$Bit $tmp2648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2414->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2647 = $tmp2648.value;
    if ($tmp2647) goto $l2649;
    panda$core$Bit $tmp2650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2414->kind, ((panda$core$Int64) { 1032 }));
    $tmp2647 = $tmp2650.value;
    $l2649:;
    panda$core$Bit $tmp2651 = { $tmp2647 };
    bool $tmp2646 = $tmp2651.value;
    if (!$tmp2646) goto $l2652;
    panda$core$Bit $tmp2654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2415->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2653 = $tmp2654.value;
    if ($tmp2653) goto $l2655;
    panda$core$Bit $tmp2656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2415->kind, ((panda$core$Int64) { 1032 }));
    $tmp2653 = $tmp2656.value;
    $l2655:;
    panda$core$Bit $tmp2657 = { $tmp2653 };
    $tmp2646 = $tmp2657.value;
    $l2652:;
    panda$core$Bit $tmp2658 = { $tmp2646 };
    if ($tmp2658.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2659 = org$pandalanguage$pandac$Compiler$foldInts$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_offset, left2414, p_op, right2415);
        return $tmp2659;
    }
    }
    panda$core$Bit $tmp2661 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2414->type);
    bool $tmp2660 = $tmp2661.value;
    if (!$tmp2660) goto $l2662;
    panda$core$Int64$nullable $tmp2663 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2415, left2414->type);
    $tmp2660 = ((panda$core$Bit) { $tmp2663.nonnull }).value;
    $l2662:;
    panda$core$Bit $tmp2664 = { $tmp2660 };
    if ($tmp2664.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2665 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2415, left2414->type);
        right2415 = $tmp2665;
        PANDA_ASSERT(((panda$core$Bit) { right2415 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2643, ((panda$core$Object*) left2414));
        panda$collections$Array$add$panda$collections$Array$T(children2643, ((panda$core$Object*) right2415));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2667 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2666 = $tmp2667;
            }
            break;
            default:
            {
                resultType2666 = left2414->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2668 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2668->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2668->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2668, ((panda$core$Int64) { 1023 }), p_offset, resultType2666, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2643));
        return $tmp2668;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2643, ((panda$core$Object*) right2415));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2671 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2672 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2414, $tmp2671, ((panda$collections$ListView*) children2643));
    result2670 = $tmp2672;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2670 == NULL }).value) {
    {
        panda$collections$Array$clear(children2643);
        panda$collections$Array$add$panda$collections$Array$T(children2643, ((panda$core$Object*) left2414));
        org$pandalanguage$pandac$IRNode* $tmp2674 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2415);
        resolved2673 = $tmp2674;
        bool $tmp2675 = ((panda$core$Bit) { resolved2673 != NULL }).value;
        if (!$tmp2675) goto $l2676;
        panda$core$Bit $tmp2677 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2673->type);
        $tmp2675 = $tmp2677.value;
        $l2676:;
        panda$core$Bit $tmp2678 = { $tmp2675 };
        if ($tmp2678.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2643, ((panda$core$Object*) resolved2673));
            org$pandalanguage$pandac$IRNode* $tmp2680 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2680->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2680->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2682 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2680, ((panda$core$Int64) { 1001 }), resolved2673->offset, $tmp2682, resolved2673->type);
            target2679 = $tmp2680;
            panda$core$String* $tmp2683 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2684 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2679, $tmp2683, ((panda$collections$ListView*) children2643));
            result2670 = $tmp2684;
        }
        }
    }
    }
    return result2670;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2685;
    org$pandalanguage$pandac$IRNode* right2688;
    panda$core$Object* $tmp2686 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2687 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2686));
    left2685 = $tmp2687;
    if (((panda$core$Bit) { left2685 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2689 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2690 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2689));
    right2688 = $tmp2690;
    if (((panda$core$Bit) { right2688 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2691 = org$pandalanguage$pandac$Compiler$compileBinary$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->offset, left2685, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2688);
    return $tmp2691;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2695;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2692 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2692;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2693 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2694 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2693, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2694.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2695, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp2696 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_type->subtypes, $tmp2695);
            return ((panda$collections$ListView*) $tmp2696);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2697 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2698 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2697));
            return $tmp2698;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2699 = (panda$collections$Array*) malloc(40);
            $tmp2699->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2699->refCount.value = 1;
            panda$collections$Array$init($tmp2699);
            return ((panda$collections$ListView*) $tmp2699);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2701.value) {
        {
            panda$collections$ListView* $tmp2702 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2702;
        }
        }
        panda$collections$ListView* $tmp2703 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2703;
    }
    }
    panda$collections$Array* $tmp2704 = (panda$collections$Array*) malloc(40);
    $tmp2704->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2704->refCount.value = 1;
    panda$collections$Array$init($tmp2704);
    return ((panda$collections$ListView*) $tmp2704);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, panda$core$Int64 p_offset) {
    panda$core$String* name2707;
    org$pandalanguage$pandac$ClassDecl* cl2709;
    org$pandalanguage$pandac$Symbol* s2711;
    org$pandalanguage$pandac$MethodDecl* m2714;
    panda$collections$Iterator* test$Iter2719;
    org$pandalanguage$pandac$MethodDecl* test2731;
    org$pandalanguage$pandac$MethodRef* ref2743;
    panda$collections$Array* children2747;
    org$pandalanguage$pandac$IRNode* methodRef2750;
    panda$collections$Array* args2756;
    panda$collections$Array* children2765;
    panda$collections$Array* children2775;
    org$pandalanguage$pandac$IRNode* coerced2784;
    panda$collections$Array* children2787;
    panda$core$Bit $tmp2706 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2706.value) {
    {
        panda$core$String* $tmp2708 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2707 = $tmp2708;
        org$pandalanguage$pandac$ClassDecl* $tmp2710 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2709 = $tmp2710;
        if (((panda$core$Bit) { cl2709 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2712 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2709);
        org$pandalanguage$pandac$Symbol* $tmp2713 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2712, name2707);
        s2711 = $tmp2713;
        if (((panda$core$Bit) { s2711 != NULL }).value) {
        {
            m2714 = NULL;
            switch (s2711->kind.value) {
                case 204:
                {
                    m2714 = ((org$pandalanguage$pandac$MethodDecl*) s2711);
                    panda$core$Int64 $tmp2715 = panda$collections$Array$get_count$R$panda$core$Int64(m2714->parameters);
                    panda$core$Bit $tmp2716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2715, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2716.value);
                    panda$core$Bit $tmp2717 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2714->annotations);
                    panda$core$Bit $tmp2718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2717);
                    PANDA_ASSERT($tmp2718.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2720 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2711)->methods)->$class->itable;
                        while ($tmp2720->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2720 = $tmp2720->next;
                        }
                        $fn2722 $tmp2721 = $tmp2720->methods[0];
                        panda$collections$Iterator* $tmp2723 = $tmp2721(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2711)->methods));
                        test$Iter2719 = $tmp2723;
                        $l2724:;
                        ITable* $tmp2726 = test$Iter2719->$class->itable;
                        while ($tmp2726->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2726 = $tmp2726->next;
                        }
                        $fn2728 $tmp2727 = $tmp2726->methods[0];
                        panda$core$Bit $tmp2729 = $tmp2727(test$Iter2719);
                        panda$core$Bit $tmp2730 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2729);
                        if (!$tmp2730.value) goto $l2725;
                        {
                            ITable* $tmp2732 = test$Iter2719->$class->itable;
                            while ($tmp2732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2732 = $tmp2732->next;
                            }
                            $fn2734 $tmp2733 = $tmp2732->methods[1];
                            panda$core$Object* $tmp2735 = $tmp2733(test$Iter2719);
                            test2731 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2735);
                            panda$core$Bit $tmp2737 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2731->annotations);
                            panda$core$Bit $tmp2738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2737);
                            bool $tmp2736 = $tmp2738.value;
                            if (!$tmp2736) goto $l2739;
                            panda$core$Int64 $tmp2740 = panda$collections$Array$get_count$R$panda$core$Int64(test2731->parameters);
                            panda$core$Bit $tmp2741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2740, ((panda$core$Int64) { 0 }));
                            $tmp2736 = $tmp2741.value;
                            $l2739:;
                            panda$core$Bit $tmp2742 = { $tmp2736 };
                            if ($tmp2742.value) {
                            {
                                m2714 = test2731;
                                goto $l2725;
                            }
                            }
                        }
                        goto $l2724;
                        $l2725:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2714 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2714);
                org$pandalanguage$pandac$MethodRef* $tmp2744 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2744->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2744->refCount.value = 1;
                panda$collections$ListView* $tmp2746 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2744, m2714, $tmp2746);
                ref2743 = $tmp2744;
                panda$collections$Array* $tmp2748 = (panda$collections$Array*) malloc(40);
                $tmp2748->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2748->refCount.value = 1;
                panda$collections$Array$init($tmp2748);
                children2747 = $tmp2748;
                panda$collections$Array$add$panda$collections$Array$T(children2747, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2751 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2751->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2751->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2753 = (org$pandalanguage$pandac$Type*) malloc(80);
                $tmp2753->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2753->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2753, &$s2755, ((panda$core$Int64) { 16 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2751, ((panda$core$Int64) { 1002 }), p_offset, $tmp2753, ((panda$core$Object*) ref2743), ((panda$collections$ListView*) children2747));
                methodRef2750 = $tmp2751;
                panda$collections$Array* $tmp2757 = (panda$collections$Array*) malloc(40);
                $tmp2757->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2757->refCount.value = 1;
                panda$collections$Array$init($tmp2757);
                args2756 = $tmp2757;
                org$pandalanguage$pandac$IRNode* $tmp2759 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2750, ((panda$collections$ListView*) args2756));
                return $tmp2759;
            }
            }
        }
        }
    }
    }
    switch (p_op.value) {
        case 52:
        {
            switch (p_base->kind.value) {
                case 1004:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2760 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2760->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2760->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2760, ((panda$core$Int64) { 1032 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2760;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2762 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp2762->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2762->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2762, ((panda$core$Int64) { 1004 }), p_offset, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2762;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2764 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2764.value) {
                    {
                        panda$collections$Array* $tmp2766 = (panda$collections$Array*) malloc(40);
                        $tmp2766->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2766->refCount.value = 1;
                        panda$collections$Array$init($tmp2766);
                        children2765 = $tmp2766;
                        panda$collections$Array$add$panda$collections$Array$T(children2765, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2768 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                        $tmp2768->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2768->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2768, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2765));
                        return $tmp2768;
                    }
                    }
                }
            }
            panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2770, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, &$s2772);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2773);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2774 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2774.value) {
            {
                panda$collections$Array* $tmp2776 = (panda$collections$Array*) malloc(40);
                $tmp2776->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2776->refCount.value = 1;
                panda$collections$Array$init($tmp2776);
                children2775 = $tmp2776;
                panda$collections$Array$add$panda$collections$Array$T(children2775, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2778 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2778->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2778->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2778, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2775));
                return $tmp2778;
            }
            }
            else {
            {
                panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2780, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, &$s2782);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_base->offset, $tmp2783);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2785 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2786 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2785);
            coerced2784 = $tmp2786;
            if (((panda$core$Bit) { coerced2784 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2788 = (panda$collections$Array*) malloc(40);
            $tmp2788->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2788->refCount.value = 1;
            panda$collections$Array$init($tmp2788);
            children2787 = $tmp2788;
            panda$collections$Array$add$panda$collections$Array$T(children2787, ((panda$core$Object*) coerced2784));
            org$pandalanguage$pandac$IRNode* $tmp2790 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2790->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2790->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2790, ((panda$core$Int64) { 1041 }), p_base->offset, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2787));
            return $tmp2790;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_p) {
    org$pandalanguage$pandac$IRNode* base2795;
    panda$core$Bit $tmp2792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2792.value);
    panda$core$Int64 $tmp2793 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2793, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2794.value);
    panda$core$Object* $tmp2796 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2797 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2796));
    base2795 = $tmp2797;
    if (((panda$core$Bit) { base2795 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2798 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2795, p_p->offset);
    return $tmp2798;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2800;
    panda$collections$Array* args2803;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2806;
    org$pandalanguage$pandac$IRNode* arg2826;
    panda$core$Bit $tmp2799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2799.value);
    panda$core$Object* $tmp2801 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2802 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2801));
    m2800 = $tmp2802;
    if (((panda$core$Bit) { m2800 != NULL }).value) {
    {
        panda$collections$Array* $tmp2804 = (panda$collections$Array*) malloc(40);
        $tmp2804->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2804->refCount.value = 1;
        panda$collections$Array$init($tmp2804);
        args2803 = $tmp2804;
        panda$core$Int64 $tmp2807 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2806, ((panda$core$Int64) { 1 }), $tmp2807, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp2809 = $tmp2806.start.value;
        panda$core$Int64 i2808 = { $tmp2809 };
        int64_t $tmp2811 = $tmp2806.end.value;
        int64_t $tmp2812 = $tmp2806.step.value;
        bool $tmp2813 = $tmp2806.inclusive.value;
        bool $tmp2820 = $tmp2812 > 0;
        if ($tmp2820) goto $l2818; else goto $l2819;
        $l2818:;
        if ($tmp2813) goto $l2821; else goto $l2822;
        $l2821:;
        if ($tmp2809 <= $tmp2811) goto $l2814; else goto $l2816;
        $l2822:;
        if ($tmp2809 < $tmp2811) goto $l2814; else goto $l2816;
        $l2819:;
        if ($tmp2813) goto $l2823; else goto $l2824;
        $l2823:;
        if ($tmp2809 >= $tmp2811) goto $l2814; else goto $l2816;
        $l2824:;
        if ($tmp2809 > $tmp2811) goto $l2814; else goto $l2816;
        $l2814:;
        {
            panda$core$Object* $tmp2827 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2808);
            org$pandalanguage$pandac$IRNode* $tmp2828 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2827));
            arg2826 = $tmp2828;
            if (((panda$core$Bit) { arg2826 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2803, ((panda$core$Object*) arg2826));
        }
        $l2817:;
        if ($tmp2820) goto $l2830; else goto $l2831;
        $l2830:;
        int64_t $tmp2832 = $tmp2811 - i2808.value;
        if ($tmp2813) goto $l2833; else goto $l2834;
        $l2833:;
        if ($tmp2832 >= $tmp2812) goto $l2829; else goto $l2816;
        $l2834:;
        if ($tmp2832 > $tmp2812) goto $l2829; else goto $l2816;
        $l2831:;
        int64_t $tmp2836 = i2808.value - $tmp2811;
        if ($tmp2813) goto $l2837; else goto $l2838;
        $l2837:;
        if ($tmp2836 >= -$tmp2812) goto $l2829; else goto $l2816;
        $l2838:;
        if ($tmp2836 > -$tmp2812) goto $l2829; else goto $l2816;
        $l2829:;
        i2808.value += $tmp2812;
        goto $l2814;
        $l2816:;
        org$pandalanguage$pandac$IRNode* $tmp2840 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2800, ((panda$collections$ListView*) args2803));
        return $tmp2840;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2844;
    org$pandalanguage$pandac$ClassDecl* cl2853;
    panda$core$String* name2855;
    org$pandalanguage$pandac$ClassDecl* cl2863;
    org$pandalanguage$pandac$Symbol* s2876;
    panda$core$Bit $tmp2841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2841.value);
    panda$core$Int64 $tmp2842 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2842, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2843.value);
    panda$core$Object* $tmp2845 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2846 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2845));
    base2844 = $tmp2846;
    if (((panda$core$Bit) { base2844 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2848 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2844->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2847 = $tmp2848.value;
    if (!$tmp2847) goto $l2849;
    panda$core$Bit $tmp2850 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2844->kind, ((panda$core$Int64) { 1024 }));
    $tmp2847 = $tmp2850.value;
    $l2849:;
    panda$core$Bit $tmp2851 = { $tmp2847 };
    if ($tmp2851.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2852 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2844);
        base2844 = $tmp2852;
    }
    }
    if (((panda$core$Bit) { base2844 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2844->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2854 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2844->payload));
            cl2853 = $tmp2854;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2856, base2844->payload);
            panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, &$s2858);
            panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2859, p_d->payload);
            panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, &$s2861);
            name2855 = $tmp2862;
            org$pandalanguage$pandac$ClassDecl* $tmp2864 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2855);
            cl2863 = $tmp2864;
            if (((panda$core$Bit) { cl2863 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2865 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp2865->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2865->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2867 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2868 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2863);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2865, ((panda$core$Int64) { 1001 }), p_d->offset, $tmp2867, $tmp2868);
                return $tmp2865;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2869 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp2869->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2869->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2871 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2869, ((panda$core$Int64) { 1037 }), p_d->offset, $tmp2871, name2855);
            return $tmp2869;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp2872 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2872));
            panda$core$Object* $tmp2873 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp2874 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2873)->rawSuper);
            cl2853 = $tmp2874;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2875 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2844->type);
            cl2853 = $tmp2875;
        }
    }
    if (((panda$core$Bit) { cl2853 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2877 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2853);
    org$pandalanguage$pandac$Symbol* $tmp2878 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2877, ((panda$core$String*) p_d->payload));
    s2876 = $tmp2878;
    if (((panda$core$Bit) { s2876 == NULL }).value) {
    {
        panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2879, ((panda$core$Object*) base2844->type));
        panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2880, &$s2881);
        panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2883, p_d->payload);
        panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, &$s2885);
        panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, $tmp2886);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_d->offset, $tmp2887);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2888 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2853);
    org$pandalanguage$pandac$IRNode* $tmp2889 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->offset, base2844, s2876, $tmp2888);
    return $tmp2889;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s2891;
    panda$core$Bit $tmp2890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp2890.value);
    org$pandalanguage$pandac$Symbol* $tmp2892 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s2891 = $tmp2892;
    if (((panda$core$Bit) { s2891 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2893 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s2891 = ((org$pandalanguage$pandac$Symbol*) $tmp2893);
    }
    }
    if (((panda$core$Bit) { s2891 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2894 = org$pandalanguage$pandac$Compiler$symbolRef$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->offset, NULL, s2891, self->symbolTable);
        return $tmp2894;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2895 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2895->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2895->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2897 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2895, ((panda$core$Int64) { 1037 }), p_i->offset, $tmp2897, ((panda$core$String*) p_i->payload));
    return $tmp2895;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved2898;
    org$pandalanguage$pandac$Type* $tmp2899 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp2900 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp2899);
    resolved2898 = $tmp2900;
    if (((panda$core$Bit) { resolved2898 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2901 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2901->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2901->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2903 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2901, ((panda$core$Int64) { 1001 }), p_t->offset, $tmp2903, resolved2898);
    return $tmp2901;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start2911;
    org$pandalanguage$pandac$IRNode* end2919;
    org$pandalanguage$pandac$IRNode* step2927;
    panda$collections$Array* children2937;
    panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp2904 = $tmp2905.value;
    if ($tmp2904) goto $l2906;
    panda$core$Bit $tmp2907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp2904 = $tmp2907.value;
    $l2906:;
    panda$core$Bit $tmp2908 = { $tmp2904 };
    PANDA_ASSERT($tmp2908.value);
    panda$core$Int64 $tmp2909 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp2910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2909, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2910.value);
    panda$core$Object* $tmp2912 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2912)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2913.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2914 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2914->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2914->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2916 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2914, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2916);
        start2911 = $tmp2914;
    }
    }
    else {
    {
        panda$core$Object* $tmp2917 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2918 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2917));
        start2911 = $tmp2918;
        if (((panda$core$Bit) { start2911 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2920 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2920)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2921.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2922 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2922->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2922->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2924 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp2922, ((panda$core$Int64) { 1030 }), p_r->offset, $tmp2924);
        end2919 = $tmp2922;
    }
    }
    else {
    {
        panda$core$Object* $tmp2925 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp2926 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2925));
        end2919 = $tmp2926;
        if (((panda$core$Bit) { end2919 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp2928 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp2928)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp2929.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2930 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp2930->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2930->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2932 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2930, ((panda$core$Int64) { 1004 }), p_r->offset, $tmp2932, ((panda$core$UInt64) { 1 }));
        step2927 = $tmp2930;
    }
    }
    else {
    {
        panda$core$Object* $tmp2933 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp2934 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2933));
        org$pandalanguage$pandac$Type* $tmp2935 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2936 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2934, $tmp2935);
        step2927 = $tmp2936;
        if (((panda$core$Bit) { step2927 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp2938 = (panda$collections$Array*) malloc(40);
    $tmp2938->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2938->refCount.value = 1;
    panda$collections$Array$init($tmp2938);
    children2937 = $tmp2938;
    panda$collections$Array$add$panda$collections$Array$T(children2937, ((panda$core$Object*) start2911));
    panda$collections$Array$add$panda$collections$Array$T(children2937, ((panda$core$Object*) end2919));
    panda$collections$Array$add$panda$collections$Array$T(children2937, ((panda$core$Object*) step2927));
    org$pandalanguage$pandac$IRNode* $tmp2940 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2940->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2940->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2942 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp2942->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2942->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp2942, &$s2944, ((panda$core$Int64) { 17 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    panda$core$Bit $tmp2945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2940, ((panda$core$Int64) { 1031 }), p_r->offset, $tmp2942, ((panda$core$Object*) wrap_panda$core$Bit($tmp2945)), ((panda$collections$ListView*) children2937));
    return $tmp2940;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp2946 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp2946->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2946->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2948 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String($tmp2946, ((panda$core$Int64) { 1033 }), p_s->offset, $tmp2948, ((panda$core$String*) p_s->payload));
    return $tmp2946;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type2953;
    org$pandalanguage$pandac$ClassDecl* cl2954;
    panda$collections$Array* subtypes2961;
    panda$core$MutableString* name2965;
    panda$core$String* separator2969;
    panda$collections$Iterator* p$Iter2971;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p2983;
    panda$collections$Array* pType2988;
    panda$core$String* pName2991;
    panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp2949.value);
    panda$core$Object* $tmp2950 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp2951 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2950)->annotations);
    if ($tmp2951.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s2952);
        return NULL;
    }
    }
    panda$core$Object* $tmp2955 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl2954 = ((org$pandalanguage$pandac$ClassDecl*) $tmp2955);
    ITable* $tmp2956 = ((panda$collections$CollectionView*) cl2954->parameters)->$class->itable;
    while ($tmp2956->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2956 = $tmp2956->next;
    }
    $fn2958 $tmp2957 = $tmp2956->methods[0];
    panda$core$Int64 $tmp2959 = $tmp2957(((panda$collections$CollectionView*) cl2954->parameters));
    panda$core$Bit $tmp2960 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2959, ((panda$core$Int64) { 0 }));
    if ($tmp2960.value) {
    {
        panda$collections$Array* $tmp2962 = (panda$collections$Array*) malloc(40);
        $tmp2962->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2962->refCount.value = 1;
        panda$collections$Array$init($tmp2962);
        subtypes2961 = $tmp2962;
        org$pandalanguage$pandac$Type* $tmp2964 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2954);
        panda$collections$Array$add$panda$collections$Array$T(subtypes2961, ((panda$core$Object*) $tmp2964));
        panda$core$MutableString* $tmp2966 = (panda$core$MutableString*) malloc(40);
        $tmp2966->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp2966->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp2966, ((org$pandalanguage$pandac$Symbol*) cl2954)->name);
        name2965 = $tmp2966;
        panda$core$MutableString$append$panda$core$String(name2965, &$s2968);
        separator2969 = &$s2970;
        {
            ITable* $tmp2972 = ((panda$collections$Iterable*) cl2954->parameters)->$class->itable;
            while ($tmp2972->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp2972 = $tmp2972->next;
            }
            $fn2974 $tmp2973 = $tmp2972->methods[0];
            panda$collections$Iterator* $tmp2975 = $tmp2973(((panda$collections$Iterable*) cl2954->parameters));
            p$Iter2971 = $tmp2975;
            $l2976:;
            ITable* $tmp2978 = p$Iter2971->$class->itable;
            while ($tmp2978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2978 = $tmp2978->next;
            }
            $fn2980 $tmp2979 = $tmp2978->methods[0];
            panda$core$Bit $tmp2981 = $tmp2979(p$Iter2971);
            panda$core$Bit $tmp2982 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2981);
            if (!$tmp2982.value) goto $l2977;
            {
                ITable* $tmp2984 = p$Iter2971->$class->itable;
                while ($tmp2984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2984 = $tmp2984->next;
                }
                $fn2986 $tmp2985 = $tmp2984->methods[1];
                panda$core$Object* $tmp2987 = $tmp2985(p$Iter2971);
                p2983 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp2987);
                panda$collections$Array* $tmp2989 = (panda$collections$Array*) malloc(40);
                $tmp2989->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2989->refCount.value = 1;
                panda$collections$Array$init($tmp2989);
                pType2988 = $tmp2989;
                panda$collections$Array$add$panda$collections$Array$T(pType2988, ((panda$core$Object*) p2983->bound));
                panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2992, ((org$pandalanguage$pandac$Symbol*) cl2954)->name);
                panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, &$s2994);
                panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, ((org$pandalanguage$pandac$Symbol*) p2983)->name);
                panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, &$s2997);
                pName2991 = $tmp2998;
                panda$core$MutableString$append$panda$core$String(name2965, separator2969);
                panda$core$MutableString$append$panda$core$String(name2965, pName2991);
                org$pandalanguage$pandac$Type* $tmp2999 = (org$pandalanguage$pandac$Type*) malloc(80);
                $tmp2999->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2999->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp2999, p2983);
                panda$collections$Array$add$panda$collections$Array$T(subtypes2961, ((panda$core$Object*) $tmp2999));
                separator2969 = &$s3001;
            }
            goto $l2976;
            $l2977:;
        }
        panda$core$MutableString$append$panda$core$String(name2965, &$s3002);
        org$pandalanguage$pandac$Type* $tmp3003 = (org$pandalanguage$pandac$Type*) malloc(80);
        $tmp3003->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3003->refCount.value = 1;
        panda$core$String* $tmp3005 = panda$core$MutableString$convert$R$panda$core$String(name2965);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3003, $tmp3005, ((panda$core$Int64) { 21 }), p_s->offset, ((panda$collections$ListView*) subtypes2961), ((panda$core$Bit) { true }));
        type2953 = $tmp3003;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3006 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2954);
        type2953 = $tmp3006;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3007 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3007->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3007->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3007, ((panda$core$Int64) { 1025 }), p_s->offset, type2953);
    return $tmp3007;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3013;
    panda$core$Bit $tmp3009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3009.value);
    panda$core$Object* $tmp3010 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3011 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3010)->annotations);
    if ($tmp3011.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_s->offset, &$s3012);
        return NULL;
    }
    }
    panda$core$Object* $tmp3014 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3013 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3014);
    PANDA_ASSERT(cl3013->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3015 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3015->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3015, ((panda$core$Int64) { 1024 }), p_s->offset, cl3013->rawSuper);
    return $tmp3015;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3020;
    org$pandalanguage$pandac$Type* type3023;
    panda$core$Bit $tmp3017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3017.value);
    panda$core$Int64 $tmp3018 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3018, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3019.value);
    panda$core$Object* $tmp3021 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3022 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3021));
    value3020 = $tmp3022;
    if (((panda$core$Bit) { value3020 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3024 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3025 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3024));
    org$pandalanguage$pandac$Type* $tmp3026 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3025);
    type3023 = $tmp3026;
    if (((panda$core$Bit) { type3023 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3027 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3020, type3023);
    if (((panda$core$Bit) { $tmp3027.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3028 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3020, type3023);
        return $tmp3028;
    }
    }
    panda$core$Bit $tmp3029 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3020, type3023);
    if ($tmp3029.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3030 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$panda$core$Int64$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3020, p_c->offset, ((panda$core$Bit) { true }), type3023);
        return $tmp3030;
    }
    }
    else {
    {
        panda$core$String* $tmp3032 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3031, ((panda$core$Object*) value3020->type));
        panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3032, &$s3033);
        panda$core$String* $tmp3036 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3035, ((panda$core$Object*) type3023));
        panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3036, &$s3037);
        panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3034, $tmp3038);
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp3039);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3040.value);
    org$pandalanguage$pandac$IRNode* $tmp3041 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3041->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3041->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3043 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp3041, ((panda$core$Int64) { 1030 }), p_n->offset, $tmp3043);
    return $tmp3041;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3048;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3044 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3044;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3045 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3045->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3045->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3047 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3045, ((panda$core$Int64) { 1011 }), p_e->offset, $tmp3047, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3045;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3049 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3048 = $tmp3049;
            bool $tmp3050 = ((panda$core$Bit) { result3048 != NULL }).value;
            if (!$tmp3050) goto $l3051;
            org$pandalanguage$pandac$Type* $tmp3052 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3053 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3048->type, $tmp3052);
            $tmp3050 = $tmp3053.value;
            $l3051:;
            panda$core$Bit $tmp3054 = { $tmp3050 };
            if ($tmp3054.value) {
            {
                panda$core$Bit $tmp3055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3048->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3055.value);
                panda$core$String* $tmp3056 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3048->payload)->value);
                panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, result3048->offset, $tmp3058);
                return NULL;
            }
            }
            return result3048;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3059 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3059;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3060 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3060;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3061 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3061->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3061->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3063 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3061, ((panda$core$Int64) { 1004 }), p_e->offset, $tmp3063, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3061;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3064 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3064;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3065 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3065;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3066 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3066;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3067 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3067;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3068 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3068;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3069 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3069;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3070 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3070;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3071 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3071;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3073;
    panda$collections$Array* result3076;
    panda$collections$Iterator* stmt$Iter3079;
    org$pandalanguage$pandac$ASTNode* stmt3091;
    org$pandalanguage$pandac$IRNode* compiled3096;
    panda$core$Bit $tmp3072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3072.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3074 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3074->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3074->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3074, self->symbolTable);
    symbols3073 = $tmp3074;
    self->symbolTable = symbols3073;
    panda$collections$Array* $tmp3077 = (panda$collections$Array*) malloc(40);
    $tmp3077->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3077->refCount.value = 1;
    panda$collections$Array$init($tmp3077);
    result3076 = $tmp3077;
    {
        ITable* $tmp3080 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3080->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3080 = $tmp3080->next;
        }
        $fn3082 $tmp3081 = $tmp3080->methods[0];
        panda$collections$Iterator* $tmp3083 = $tmp3081(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3079 = $tmp3083;
        $l3084:;
        ITable* $tmp3086 = stmt$Iter3079->$class->itable;
        while ($tmp3086->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3086 = $tmp3086->next;
        }
        $fn3088 $tmp3087 = $tmp3086->methods[0];
        panda$core$Bit $tmp3089 = $tmp3087(stmt$Iter3079);
        panda$core$Bit $tmp3090 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3089);
        if (!$tmp3090.value) goto $l3085;
        {
            ITable* $tmp3092 = stmt$Iter3079->$class->itable;
            while ($tmp3092->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3092 = $tmp3092->next;
            }
            $fn3094 $tmp3093 = $tmp3092->methods[1];
            panda$core$Object* $tmp3095 = $tmp3093(stmt$Iter3079);
            stmt3091 = ((org$pandalanguage$pandac$ASTNode*) $tmp3095);
            org$pandalanguage$pandac$IRNode* $tmp3097 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3091);
            compiled3096 = $tmp3097;
            if (((panda$core$Bit) { compiled3096 == NULL }).value) {
            {
                panda$core$Object* $tmp3098 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3073->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3098);
                return NULL;
            }
            }
            panda$core$Bit $tmp3099 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3096->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp3099.value);
            panda$collections$Array$add$panda$collections$Array$T(result3076, ((panda$core$Object*) compiled3096));
        }
        goto $l3084;
        $l3085:;
    }
    panda$core$Object* $tmp3100 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3073->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3100);
    org$pandalanguage$pandac$IRNode* $tmp3101 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3101->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3101->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3101, ((panda$core$Int64) { 1000 }), p_b->offset, ((panda$collections$ListView*) result3076));
    return $tmp3101;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3111;
    org$pandalanguage$pandac$IRNode* ifTrue3116;
    panda$collections$Array* children3119;
    org$pandalanguage$pandac$IRNode* ifFalse3124;
    panda$core$Bit $tmp3103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3103.value);
    panda$core$Int64 $tmp3105 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3105, ((panda$core$Int64) { 2 }));
    bool $tmp3104 = $tmp3106.value;
    if ($tmp3104) goto $l3107;
    panda$core$Int64 $tmp3108 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3108, ((panda$core$Int64) { 3 }));
    $tmp3104 = $tmp3109.value;
    $l3107:;
    panda$core$Bit $tmp3110 = { $tmp3104 };
    PANDA_ASSERT($tmp3110.value);
    panda$core$Object* $tmp3112 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3113 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3112));
    org$pandalanguage$pandac$Type* $tmp3114 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3115 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3113, $tmp3114);
    test3111 = $tmp3115;
    if (((panda$core$Bit) { test3111 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3117 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3118 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3117));
    ifTrue3116 = $tmp3118;
    panda$collections$Array* $tmp3120 = (panda$collections$Array*) malloc(40);
    $tmp3120->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3120->refCount.value = 1;
    panda$collections$Array$init($tmp3120);
    children3119 = $tmp3120;
    panda$collections$Array$add$panda$collections$Array$T(children3119, ((panda$core$Object*) test3111));
    panda$collections$Array$add$panda$collections$Array$T(children3119, ((panda$core$Object*) ifTrue3116));
    panda$core$Int64 $tmp3122 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3122, ((panda$core$Int64) { 3 }));
    if ($tmp3123.value) {
    {
        panda$core$Object* $tmp3125 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3126 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3125));
        ifFalse3124 = $tmp3126;
        if (((panda$core$Bit) { ifFalse3124 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3119, ((panda$core$Object*) ifFalse3124));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3127 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3127->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3127->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3127, ((panda$core$Int64) { 1012 }), p_i->offset, ((panda$collections$ListView*) children3119));
    return $tmp3127;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3129;
    org$pandalanguage$pandac$IRNode* list3130;
    org$pandalanguage$pandac$Type* t3137;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3151;
    org$pandalanguage$pandac$IRNode* body3153;
    panda$collections$Array* children3155;
    panda$core$Bit $tmp3132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3131 = $tmp3132.value;
    if (!$tmp3131) goto $l3133;
    panda$core$Int64 $tmp3134 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3134, ((panda$core$Int64) { 1 }));
    $tmp3131 = $tmp3135.value;
    $l3133:;
    panda$core$Bit $tmp3136 = { $tmp3131 };
    if ($tmp3136.value) {
    {
        panda$core$Object* $tmp3138 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3139 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3138));
        org$pandalanguage$pandac$Type* $tmp3140 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3139);
        t3137 = $tmp3140;
        org$pandalanguage$pandac$Type* $tmp3141 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3137);
        org$pandalanguage$pandac$IRNode* $tmp3142 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3141);
        list3130 = $tmp3142;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3143 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3130 = $tmp3143;
    }
    }
    if (((panda$core$Bit) { list3130 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3130->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3144.value) {
    {
        panda$core$Object* $tmp3145 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3130->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3145)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3146.value);
        panda$core$Object* $tmp3147 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3130->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3148 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$Type*) $tmp3147)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3129 = ((org$pandalanguage$pandac$Type*) $tmp3148);
    }
    }
    else {
    {
        panda$core$Bit $tmp3149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3130->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3149.value);
        panda$core$Object* $tmp3150 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(list3130->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3129 = ((org$pandalanguage$pandac$Type*) $tmp3150);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3152 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3129);
    target3151 = $tmp3152;
    if (((panda$core$Bit) { target3151 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3151->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3154 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3153 = $tmp3154;
    if (((panda$core$Bit) { body3153 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3156 = (panda$collections$Array*) malloc(40);
    $tmp3156->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3156->refCount.value = 1;
    panda$collections$Array$init($tmp3156);
    children3155 = $tmp3156;
    panda$collections$Array$add$panda$collections$Array$T(children3155, ((panda$core$Object*) target3151->target));
    panda$collections$Array$add$panda$collections$Array$T(children3155, ((panda$core$Object*) list3130));
    panda$collections$Array$add$panda$collections$Array$T(children3155, ((panda$core$Object*) body3153));
    org$pandalanguage$pandac$IRNode* $tmp3158 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3158->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3158->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3158, ((panda$core$Int64) { 1029 }), p_offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3155));
    return $tmp3158;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3167;
    org$pandalanguage$pandac$Variable* targetVar3171;
    panda$collections$Array* subtypes3172;
    org$pandalanguage$pandac$Type* iterType3176;
    org$pandalanguage$pandac$Variable* iter3188;
    panda$collections$Array* statements3193;
    panda$collections$Array* declChildren3196;
    panda$collections$Array* varChildren3201;
    panda$collections$Array* whileChildren3208;
    org$pandalanguage$pandac$IRNode* done3211;
    org$pandalanguage$pandac$IRNode* notCall3218;
    panda$collections$Array* valueDeclChildren3223;
    org$pandalanguage$pandac$IRNode* next3228;
    panda$collections$Array* valueVarChildren3235;
    org$pandalanguage$pandac$IRNode* block3240;
    panda$collections$Array* blockChildren3242;
    panda$core$Bit $tmp3161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3160 = $tmp3161.value;
    if (!$tmp3160) goto $l3162;
    panda$core$Object* $tmp3163 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3164 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3165 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3163), $tmp3164);
    $tmp3160 = $tmp3165.value;
    $l3162:;
    panda$core$Bit $tmp3166 = { $tmp3160 };
    PANDA_ASSERT($tmp3166.value);
    panda$core$Object* $tmp3168 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3169 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3168));
    target3167 = $tmp3169;
    if (((panda$core$Bit) { target3167 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3167->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3170.value);
    targetVar3171 = ((org$pandalanguage$pandac$Variable*) target3167->target->payload);
    panda$collections$Array* $tmp3173 = (panda$collections$Array*) malloc(40);
    $tmp3173->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3173->refCount.value = 1;
    panda$collections$Array$init($tmp3173);
    subtypes3172 = $tmp3173;
    org$pandalanguage$pandac$Type* $tmp3175 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3172, ((panda$core$Object*) $tmp3175));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3172, ((panda$core$Object*) target3167->target->type));
    org$pandalanguage$pandac$Type* $tmp3177 = (org$pandalanguage$pandac$Type*) malloc(80);
    $tmp3177->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3177->refCount.value = 1;
    panda$core$Object* $tmp3180 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3172, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3179, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3180)));
    panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, &$s3182);
    panda$core$Object* $tmp3184 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3172, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3183, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3184)));
    panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3185, &$s3186);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3177, $tmp3187, ((panda$core$Int64) { 21 }), p_offset, ((panda$collections$ListView*) subtypes3172), ((panda$core$Bit) { true }));
    iterType3176 = $tmp3177;
    org$pandalanguage$pandac$Variable* $tmp3189 = (org$pandalanguage$pandac$Variable*) malloc(72);
    $tmp3189->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3189->refCount.value = 1;
    panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3171)->name, &$s3191);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3189, p_iterator->offset, ((panda$core$Int64) { 10001 }), $tmp3192, iterType3176);
    iter3188 = $tmp3189;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3188));
    panda$collections$Array* $tmp3194 = (panda$collections$Array*) malloc(40);
    $tmp3194->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3194->refCount.value = 1;
    panda$collections$Array$init($tmp3194);
    statements3193 = $tmp3194;
    panda$collections$Array* $tmp3197 = (panda$collections$Array*) malloc(40);
    $tmp3197->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3197->refCount.value = 1;
    panda$collections$Array$init($tmp3197);
    declChildren3196 = $tmp3197;
    org$pandalanguage$pandac$IRNode* $tmp3199 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3199->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3199->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3199, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3188->type, iter3188);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3196, ((panda$core$Object*) $tmp3199));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3196, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3202 = (panda$collections$Array*) malloc(40);
    $tmp3202->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3202->refCount.value = 1;
    panda$collections$Array$init($tmp3202);
    varChildren3201 = $tmp3202;
    org$pandalanguage$pandac$IRNode* $tmp3204 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3204->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3204->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3204, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3188)->offset, ((panda$collections$ListView*) declChildren3196));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3201, ((panda$core$Object*) $tmp3204));
    org$pandalanguage$pandac$IRNode* $tmp3206 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3206->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3206->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3206, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3188)->offset, ((panda$collections$ListView*) varChildren3201));
    panda$collections$Array$add$panda$collections$Array$T(statements3193, ((panda$core$Object*) $tmp3206));
    panda$collections$Array* $tmp3209 = (panda$collections$Array*) malloc(40);
    $tmp3209->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3209->refCount.value = 1;
    panda$collections$Array$init($tmp3209);
    whileChildren3208 = $tmp3209;
    org$pandalanguage$pandac$IRNode* $tmp3212 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3212->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3212->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3212, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3188)->offset, iter3188->type, iter3188);
    panda$collections$Array* $tmp3215 = (panda$collections$Array*) malloc(40);
    $tmp3215->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3215->refCount.value = 1;
    panda$collections$Array$init($tmp3215);
    org$pandalanguage$pandac$IRNode* $tmp3217 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3212, &$s3214, ((panda$collections$ListView*) $tmp3215), NULL);
    done3211 = $tmp3217;
    if (((panda$core$Bit) { done3211 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3220 = (panda$collections$Array*) malloc(40);
    $tmp3220->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3220->refCount.value = 1;
    panda$collections$Array$init($tmp3220);
    org$pandalanguage$pandac$IRNode* $tmp3222 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3211, &$s3219, ((panda$collections$ListView*) $tmp3220), NULL);
    notCall3218 = $tmp3222;
    if (((panda$core$Bit) { notCall3218 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3208, ((panda$core$Object*) notCall3218));
    panda$collections$Array* $tmp3224 = (panda$collections$Array*) malloc(40);
    $tmp3224->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3224->refCount.value = 1;
    panda$collections$Array$init($tmp3224);
    valueDeclChildren3223 = $tmp3224;
    org$pandalanguage$pandac$IRNode* $tmp3226 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3226->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3226->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3226, ((panda$core$Int64) { 1016 }), p_iterator->offset, targetVar3171->type, targetVar3171);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3223, ((panda$core$Object*) $tmp3226));
    org$pandalanguage$pandac$IRNode* $tmp3229 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3229->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3229->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3229, ((panda$core$Int64) { 1016 }), p_iterator->offset, iter3188->type, iter3188);
    panda$collections$Array* $tmp3232 = (panda$collections$Array*) malloc(40);
    $tmp3232->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3232->refCount.value = 1;
    panda$collections$Array$init($tmp3232);
    org$pandalanguage$pandac$IRNode* $tmp3234 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3229, &$s3231, ((panda$collections$ListView*) $tmp3232), NULL);
    next3228 = $tmp3234;
    PANDA_ASSERT(((panda$core$Bit) { next3228 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3223, ((panda$core$Object*) next3228));
    panda$collections$Array* $tmp3236 = (panda$collections$Array*) malloc(40);
    $tmp3236->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3236->refCount.value = 1;
    panda$collections$Array$init($tmp3236);
    valueVarChildren3235 = $tmp3236;
    org$pandalanguage$pandac$IRNode* $tmp3238 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3238->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3238->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3238, ((panda$core$Int64) { 1021 }), p_iterator->offset, ((panda$collections$ListView*) valueDeclChildren3223));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3235, ((panda$core$Object*) $tmp3238));
    org$pandalanguage$pandac$IRNode* $tmp3241 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3240 = $tmp3241;
    if (((panda$core$Bit) { block3240 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3243 = (panda$collections$Array*) malloc(40);
    $tmp3243->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3243->refCount.value = 1;
    panda$collections$Array$init($tmp3243);
    blockChildren3242 = $tmp3243;
    org$pandalanguage$pandac$IRNode* $tmp3245 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3245->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3245->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3245, ((panda$core$Int64) { 1018 }), p_iterator->offset, ((panda$collections$ListView*) valueVarChildren3235));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3242, ((panda$core$Object*) $tmp3245));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3242, ((panda$collections$CollectionView*) block3240->children));
    org$pandalanguage$pandac$IRNode* $tmp3247 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3247->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3247->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3247, ((panda$core$Int64) { 1000 }), block3240->offset, ((panda$collections$ListView*) blockChildren3242));
    block3240 = $tmp3247;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3208, ((panda$core$Object*) block3240));
    org$pandalanguage$pandac$IRNode* $tmp3249 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3249->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3249->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3249, ((panda$core$Int64) { 1013 }), p_iterator->offset, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3208));
    panda$collections$Array$add$panda$collections$Array$T(statements3193, ((panda$core$Object*) $tmp3249));
    org$pandalanguage$pandac$IRNode* $tmp3251 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3251->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3251->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3251, ((panda$core$Int64) { 1000 }), p_iterator->offset, ((panda$collections$ListView*) statements3193));
    return $tmp3251;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3256;
    org$pandalanguage$pandac$SymbolTable* symbols3259;
    org$pandalanguage$pandac$IRNode* result3262;
    panda$core$Bit found3272;
    panda$collections$Iterator* intf$Iter3273;
    org$pandalanguage$pandac$Type* intf3286;
    org$pandalanguage$pandac$IRNode* iterator3298;
    org$pandalanguage$pandac$IRNode* iterable3310;
    org$pandalanguage$pandac$IRNode* iterator3312;
    panda$core$Bit $tmp3253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3253.value);
    panda$core$Int64 $tmp3254 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3254, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3255.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3257 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3258 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3257));
    list3256 = $tmp3258;
    if (((panda$core$Bit) { list3256 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3260 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3260->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3260->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3260, self->symbolTable);
    symbols3259 = $tmp3260;
    self->symbolTable = symbols3259;
    panda$core$Bit $tmp3264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3256->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3263 = $tmp3264.value;
    if ($tmp3263) goto $l3265;
    panda$core$Bit $tmp3266 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3256->type);
    $tmp3263 = $tmp3266.value;
    $l3265:;
    panda$core$Bit $tmp3267 = { $tmp3263 };
    if ($tmp3267.value) {
    {
        panda$core$Object* $tmp3268 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3269 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3270 = org$pandalanguage$pandac$Compiler$compileRangeFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3268), list3256, ((org$pandalanguage$pandac$ASTNode*) $tmp3269));
        result3262 = $tmp3270;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3271 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3256);
        list3256 = $tmp3271;
        if (((panda$core$Bit) { list3256 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3272 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3274 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3256->type);
            ITable* $tmp3275 = ((panda$collections$Iterable*) $tmp3274)->$class->itable;
            while ($tmp3275->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3275 = $tmp3275->next;
            }
            $fn3277 $tmp3276 = $tmp3275->methods[0];
            panda$collections$Iterator* $tmp3278 = $tmp3276(((panda$collections$Iterable*) $tmp3274));
            intf$Iter3273 = $tmp3278;
            $l3279:;
            ITable* $tmp3281 = intf$Iter3273->$class->itable;
            while ($tmp3281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3281 = $tmp3281->next;
            }
            $fn3283 $tmp3282 = $tmp3281->methods[0];
            panda$core$Bit $tmp3284 = $tmp3282(intf$Iter3273);
            panda$core$Bit $tmp3285 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3284);
            if (!$tmp3285.value) goto $l3280;
            {
                ITable* $tmp3287 = intf$Iter3273->$class->itable;
                while ($tmp3287->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3287 = $tmp3287->next;
                }
                $fn3289 $tmp3288 = $tmp3287->methods[1];
                panda$core$Object* $tmp3290 = $tmp3288(intf$Iter3273);
                intf3286 = ((org$pandalanguage$pandac$Type*) $tmp3290);
                panda$core$Bit $tmp3292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3286->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3291 = $tmp3292.value;
                if (!$tmp3291) goto $l3293;
                panda$core$Object* $tmp3294 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3286->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3295 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3296 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3294), $tmp3295);
                $tmp3291 = $tmp3296.value;
                $l3293:;
                panda$core$Bit $tmp3297 = { $tmp3291 };
                if ($tmp3297.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3299 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3256, intf3286);
                    iterator3298 = $tmp3299;
                    panda$core$Object* $tmp3300 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3301 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3302 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3300), iterator3298, ((org$pandalanguage$pandac$ASTNode*) $tmp3301));
                    result3262 = $tmp3302;
                    found3272 = ((panda$core$Bit) { true });
                    goto $l3280;
                }
                }
                panda$core$Bit $tmp3304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3286->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3303 = $tmp3304.value;
                if (!$tmp3303) goto $l3305;
                panda$core$Object* $tmp3306 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(intf3286->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3307 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3308 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3306), $tmp3307);
                $tmp3303 = $tmp3308.value;
                $l3305:;
                panda$core$Bit $tmp3309 = { $tmp3303 };
                if ($tmp3309.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3311 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3256, intf3286);
                    iterable3310 = $tmp3311;
                    panda$collections$Array* $tmp3314 = (panda$collections$Array*) malloc(40);
                    $tmp3314->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3314->refCount.value = 1;
                    panda$collections$Array$init($tmp3314);
                    org$pandalanguage$pandac$IRNode* $tmp3316 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3310, &$s3313, ((panda$collections$ListView*) $tmp3314));
                    iterator3312 = $tmp3316;
                    panda$core$Object* $tmp3317 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3318 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3319 = org$pandalanguage$pandac$Compiler$compileIteratorFor$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->offset, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3317), iterator3312, ((org$pandalanguage$pandac$ASTNode*) $tmp3318));
                    result3262 = $tmp3319;
                    found3272 = ((panda$core$Bit) { true });
                    goto $l3280;
                }
                }
            }
            goto $l3279;
            $l3280:;
        }
        panda$core$Bit $tmp3320 = panda$core$Bit$$NOT$R$panda$core$Bit(found3272);
        if ($tmp3320.value) {
        {
            panda$core$String* $tmp3322 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3321, ((panda$core$Object*) list3256->type));
            panda$core$String* $tmp3324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3322, &$s3323);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, list3256->offset, $tmp3324);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3259->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3325);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3262;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3329;
    org$pandalanguage$pandac$IRNode* stmt3334;
    panda$collections$Array* children3337;
    panda$core$Bit $tmp3326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3326.value);
    panda$core$Int64 $tmp3327 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3327, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3328.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3330 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3331 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3330));
    org$pandalanguage$pandac$Type* $tmp3332 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3333 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3331, $tmp3332);
    test3329 = $tmp3333;
    if (((panda$core$Bit) { test3329 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3335 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3336 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3335));
    stmt3334 = $tmp3336;
    if (((panda$core$Bit) { stmt3334 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3338 = (panda$collections$Array*) malloc(40);
    $tmp3338->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3338->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3338, ((panda$core$Int64) { 2 }));
    children3337 = $tmp3338;
    panda$collections$Array$add$panda$collections$Array$T(children3337, ((panda$core$Object*) test3329));
    panda$collections$Array$add$panda$collections$Array$T(children3337, ((panda$core$Object*) stmt3334));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3340 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3340->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3340->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3340, ((panda$core$Int64) { 1013 }), p_w->offset, p_w->payload, ((panda$collections$ListView*) children3337));
    return $tmp3340;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3345;
    org$pandalanguage$pandac$IRNode* test3348;
    panda$collections$Array* children3353;
    panda$core$Bit $tmp3342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3342.value);
    panda$core$Int64 $tmp3343 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3343, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3344.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3346 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3347 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3346));
    stmt3345 = $tmp3347;
    if (((panda$core$Bit) { stmt3345 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3349 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3350 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3349));
    org$pandalanguage$pandac$Type* $tmp3351 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3352 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3350, $tmp3351);
    test3348 = $tmp3352;
    if (((panda$core$Bit) { test3348 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3354 = (panda$collections$Array*) malloc(40);
    $tmp3354->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3354->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3354, ((panda$core$Int64) { 2 }));
    children3353 = $tmp3354;
    panda$collections$Array$add$panda$collections$Array$T(children3353, ((panda$core$Object*) stmt3345));
    panda$collections$Array$add$panda$collections$Array$T(children3353, ((panda$core$Object*) test3348));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3356 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3356->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3356->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3356, ((panda$core$Int64) { 1014 }), p_d->offset, p_d->payload, ((panda$collections$ListView*) children3353));
    return $tmp3356;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3361;
    panda$collections$Array* children3364;
    panda$core$Bit $tmp3358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3358.value);
    panda$core$Int64 $tmp3359 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3359, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3360.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3362 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3363 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3362));
    stmt3361 = $tmp3363;
    if (((panda$core$Bit) { stmt3361 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3365 = (panda$collections$Array*) malloc(40);
    $tmp3365->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3365->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3365, ((panda$core$Int64) { 1 }));
    children3364 = $tmp3365;
    panda$collections$Array$add$panda$collections$Array$T(children3364, ((panda$core$Object*) stmt3361));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3367 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3367->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3367->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3367, ((panda$core$Int64) { 1015 }), p_l->offset, p_l->payload, ((panda$collections$ListView*) children3364));
    return $tmp3367;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3369;
    org$pandalanguage$pandac$Type* type3373;
    org$pandalanguage$pandac$Variable* v3384;
    value3369 = p_rawValue;
    bool $tmp3370 = ((panda$core$Bit) { value3369 == NULL }).value;
    if ($tmp3370) goto $l3371;
    $tmp3370 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3371:;
    panda$core$Bit $tmp3372 = { $tmp3370 };
    PANDA_ASSERT($tmp3372.value);
    switch (p_t->kind.value) {
        case 106:
        {
            panda$core$Int64 $tmp3374 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3374, ((panda$core$Int64) { 1 }));
            if ($tmp3375.value) {
            {
                panda$core$Object* $tmp3376 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3377 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3376));
                org$pandalanguage$pandac$Type* $tmp3378 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3377);
                type3373 = $tmp3378;
            }
            }
            else {
            if (((panda$core$Bit) { value3369 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3379 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3369);
                value3369 = $tmp3379;
                if (((panda$core$Bit) { value3369 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3380 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3369);
                type3373 = $tmp3380;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3373 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_t->offset, &$s3381);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3369 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3382 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3369, type3373);
                value3369 = $tmp3382;
                if (((panda$core$Bit) { value3369 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3383 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3369->type, type3373);
                PANDA_ASSERT($tmp3383.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3385 = (org$pandalanguage$pandac$Variable*) malloc(72);
            $tmp3385->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3385->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3385, p_t->offset, p_kind, ((panda$core$String*) p_t->payload), type3373);
            v3384 = $tmp3385;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3384));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3387 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3387->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3387->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3389 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp3389->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3389->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3389, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3384)->offset, v3384->type, v3384);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3387, $tmp3389, value3369);
            return $tmp3387;
        }
        break;
        case 153:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d, panda$core$Int64 p_varKind) {
    org$pandalanguage$pandac$IRNode* value3399;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3404;
    panda$collections$Array* children3407;
    org$pandalanguage$pandac$Variable* v3411;
    panda$core$Bit $tmp3391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3391.value);
    panda$core$Int64 $tmp3393 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3393, ((panda$core$Int64) { 1 }));
    bool $tmp3392 = $tmp3394.value;
    if ($tmp3392) goto $l3395;
    panda$core$Int64 $tmp3396 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3396, ((panda$core$Int64) { 2 }));
    $tmp3392 = $tmp3397.value;
    $l3395:;
    panda$core$Bit $tmp3398 = { $tmp3392 };
    PANDA_ASSERT($tmp3398.value);
    panda$core$Int64 $tmp3400 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3400, ((panda$core$Int64) { 2 }));
    if ($tmp3401.value) {
    {
        panda$core$Object* $tmp3402 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3403 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3402));
        value3399 = $tmp3403;
        if (((panda$core$Bit) { value3399 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3399 = NULL;
    }
    }
    panda$core$Object* $tmp3405 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3406 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3405), p_varKind, value3399, NULL);
    target3404 = $tmp3406;
    if (((panda$core$Bit) { target3404 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3408 = (panda$collections$Array*) malloc(40);
    $tmp3408->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3408->refCount.value = 1;
    panda$collections$Array$init($tmp3408);
    children3407 = $tmp3408;
    panda$collections$Array$add$panda$collections$Array$T(children3407, ((panda$core$Object*) target3404->target));
    if (((panda$core$Bit) { target3404->value != NULL }).value) {
    {
        panda$core$Bit $tmp3410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3404->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3410.value);
        v3411 = ((org$pandalanguage$pandac$Variable*) target3404->target->payload);
        v3411->initialValue = target3404->value;
        panda$collections$Array$add$panda$collections$Array$T(children3407, ((panda$core$Object*) target3404->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3412 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3412->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3412->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3412, ((panda$core$Int64) { 1021 }), p_d->offset, ((panda$collections$ListView*) children3407));
    return $tmp3412;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3415;
    panda$collections$Iterator* label$Iter3416;
    panda$core$String* label3428;
    panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3414.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3415 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3417 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3417->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3417 = $tmp3417->next;
            }
            $fn3419 $tmp3418 = $tmp3417->methods[0];
            panda$collections$Iterator* $tmp3420 = $tmp3418(((panda$collections$Iterable*) self->loops));
            label$Iter3416 = $tmp3420;
            $l3421:;
            ITable* $tmp3423 = label$Iter3416->$class->itable;
            while ($tmp3423->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3423 = $tmp3423->next;
            }
            $fn3425 $tmp3424 = $tmp3423->methods[0];
            panda$core$Bit $tmp3426 = $tmp3424(label$Iter3416);
            panda$core$Bit $tmp3427 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3426);
            if (!$tmp3427.value) goto $l3422;
            {
                ITable* $tmp3429 = label$Iter3416->$class->itable;
                while ($tmp3429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3429 = $tmp3429->next;
                }
                $fn3431 $tmp3430 = $tmp3429->methods[1];
                panda$core$Object* $tmp3432 = $tmp3430(label$Iter3416);
                label3428 = ((panda$core$String*) $tmp3432);
                bool $tmp3433 = ((panda$core$Bit) { label3428 != NULL }).value;
                if (!$tmp3433) goto $l3434;
                panda$core$Bit $tmp3435 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3428, ((panda$core$String*) p_b->payload));
                $tmp3433 = $tmp3435.value;
                $l3434:;
                panda$core$Bit $tmp3436 = { $tmp3433 };
                if ($tmp3436.value) {
                {
                    found3415 = ((panda$core$Bit) { true });
                    goto $l3422;
                }
                }
            }
            goto $l3421;
            $l3422:;
        }
        panda$core$Bit $tmp3437 = panda$core$Bit$$NOT$R$panda$core$Bit(found3415);
        if ($tmp3437.value) {
        {
            panda$core$String* $tmp3439 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3438, p_b->payload);
            panda$core$String* $tmp3441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3439, &$s3440);
            panda$core$String* $tmp3443 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3442, p_b->payload);
            panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3443, &$s3444);
            panda$core$String* $tmp3446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3441, $tmp3445);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, $tmp3446);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3447 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3447, ((panda$core$Int64) { 0 }));
    if ($tmp3448.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_b->offset, &$s3449);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3450 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3450->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3450->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3450, ((panda$core$Int64) { 1006 }), p_b->offset, ((panda$core$String*) p_b->payload));
    return $tmp3450;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3453;
    panda$collections$Iterator* label$Iter3454;
    panda$core$String* label3466;
    panda$core$Bit $tmp3452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3452.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3453 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3455 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3455->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3455 = $tmp3455->next;
            }
            $fn3457 $tmp3456 = $tmp3455->methods[0];
            panda$collections$Iterator* $tmp3458 = $tmp3456(((panda$collections$Iterable*) self->loops));
            label$Iter3454 = $tmp3458;
            $l3459:;
            ITable* $tmp3461 = label$Iter3454->$class->itable;
            while ($tmp3461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3461 = $tmp3461->next;
            }
            $fn3463 $tmp3462 = $tmp3461->methods[0];
            panda$core$Bit $tmp3464 = $tmp3462(label$Iter3454);
            panda$core$Bit $tmp3465 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3464);
            if (!$tmp3465.value) goto $l3460;
            {
                ITable* $tmp3467 = label$Iter3454->$class->itable;
                while ($tmp3467->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3467 = $tmp3467->next;
                }
                $fn3469 $tmp3468 = $tmp3467->methods[1];
                panda$core$Object* $tmp3470 = $tmp3468(label$Iter3454);
                label3466 = ((panda$core$String*) $tmp3470);
                bool $tmp3471 = ((panda$core$Bit) { label3466 != NULL }).value;
                if (!$tmp3471) goto $l3472;
                panda$core$Bit $tmp3473 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3466, ((panda$core$String*) p_c->payload));
                $tmp3471 = $tmp3473.value;
                $l3472:;
                panda$core$Bit $tmp3474 = { $tmp3471 };
                if ($tmp3474.value) {
                {
                    found3453 = ((panda$core$Bit) { true });
                    goto $l3460;
                }
                }
            }
            goto $l3459;
            $l3460:;
        }
        panda$core$Bit $tmp3475 = panda$core$Bit$$NOT$R$panda$core$Bit(found3453);
        if ($tmp3475.value) {
        {
            panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3476, p_c->payload);
            panda$core$String* $tmp3479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3477, &$s3478);
            panda$core$String* $tmp3481 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3480, p_c->payload);
            panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3481, &$s3482);
            panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3479, $tmp3483);
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, $tmp3484);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3485 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3485, ((panda$core$Int64) { 0 }));
    if ($tmp3486.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_c->offset, &$s3487);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3488 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3488->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3488->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$String($tmp3488, ((panda$core$Int64) { 1007 }), p_c->offset, ((panda$core$String*) p_c->payload));
    return $tmp3488;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3497;
    panda$collections$Array* children3502;
    panda$core$Bit $tmp3490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3490.value);
    panda$core$Int64 $tmp3491 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3491, ((panda$core$Int64) { 1 }));
    if ($tmp3492.value) {
    {
        panda$core$Object* $tmp3493 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3494 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3495 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3493)->returnType, $tmp3494);
        if ($tmp3495.value) {
        {
            org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3496);
            return NULL;
        }
        }
        panda$core$Object* $tmp3498 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3499 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3498));
        panda$core$Object* $tmp3500 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3501 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3499, ((org$pandalanguage$pandac$MethodDecl*) $tmp3500)->returnType);
        value3497 = $tmp3501;
        if (((panda$core$Bit) { value3497 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3503 = (panda$collections$Array*) malloc(40);
        $tmp3503->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3503->refCount.value = 1;
        panda$collections$Array$init($tmp3503);
        children3502 = $tmp3503;
        panda$collections$Array$add$panda$collections$Array$T(children3502, ((panda$core$Object*) value3497));
        org$pandalanguage$pandac$IRNode* $tmp3505 = (org$pandalanguage$pandac$IRNode*) malloc(56);
        $tmp3505->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3505->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3505, ((panda$core$Int64) { 1008 }), p_r->offset, ((panda$collections$ListView*) children3502));
        return $tmp3505;
    }
    }
    panda$core$Int64 $tmp3507 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3507, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3508.value);
    panda$core$Object* $tmp3509 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3510 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3511 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3509)->returnType, $tmp3510);
    if ($tmp3511.value) {
    {
        org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(self, p_r->offset, &$s3512);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3513 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3513->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3513->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64($tmp3513, ((panda$core$Int64) { 1008 }), p_r->offset);
    return $tmp3513;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3523;
    org$pandalanguage$pandac$ClassDecl* bit3528;
    org$pandalanguage$pandac$Symbol* value3531;
    panda$collections$Array* fieldChildren3534;
    panda$collections$Array* children3540;
    org$pandalanguage$pandac$IRNode* msg3545;
    panda$core$Bit $tmp3515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3515.value);
    panda$core$Int64 $tmp3517 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3517, ((panda$core$Int64) { 1 }));
    bool $tmp3516 = $tmp3518.value;
    if ($tmp3516) goto $l3519;
    panda$core$Int64 $tmp3520 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3520, ((panda$core$Int64) { 2 }));
    $tmp3516 = $tmp3521.value;
    $l3519:;
    panda$core$Bit $tmp3522 = { $tmp3516 };
    PANDA_ASSERT($tmp3522.value);
    panda$core$Object* $tmp3524 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3525 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3524));
    test3523 = $tmp3525;
    if (((panda$core$Bit) { test3523 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3526 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3527 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3523, $tmp3526);
    test3523 = $tmp3527;
    if (((panda$core$Bit) { test3523 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3529 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3530 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3529);
    bit3528 = $tmp3530;
    PANDA_ASSERT(((panda$core$Bit) { bit3528 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3533 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3528->symbolTable, &$s3532);
    value3531 = $tmp3533;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3531));
    panda$collections$Array* $tmp3535 = (panda$collections$Array*) malloc(40);
    $tmp3535->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3535->refCount.value = 1;
    panda$collections$Array$init($tmp3535);
    fieldChildren3534 = $tmp3535;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3534, ((panda$core$Object*) test3523));
    org$pandalanguage$pandac$IRNode* $tmp3537 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3537->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3537->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3539 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3537, ((panda$core$Int64) { 1026 }), p_a->offset, $tmp3539, ((panda$core$Object*) value3531), ((panda$collections$ListView*) fieldChildren3534));
    test3523 = $tmp3537;
    panda$collections$Array* $tmp3541 = (panda$collections$Array*) malloc(40);
    $tmp3541->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3541->refCount.value = 1;
    panda$collections$Array$init($tmp3541);
    children3540 = $tmp3541;
    panda$collections$Array$add$panda$collections$Array$T(children3540, ((panda$core$Object*) test3523));
    panda$core$Int64 $tmp3543 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3543, ((panda$core$Int64) { 2 }));
    if ($tmp3544.value) {
    {
        panda$core$Object* $tmp3546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3547 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3546));
        msg3545 = $tmp3547;
        if (((panda$core$Bit) { msg3545 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3548 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3549 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3545, $tmp3548);
        msg3545 = $tmp3549;
        if (((panda$core$Bit) { msg3545 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3540, ((panda$core$Object*) msg3545));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3550 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3550->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3550->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3550, ((panda$core$Int64) { 1034 }), p_a->offset, ((panda$collections$ListView*) children3540));
    return $tmp3550;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3565;
    panda$core$Int64 varKind3566;
    panda$collections$Array* decls3567;
    panda$collections$Iterator* astDecl$Iter3570;
    org$pandalanguage$pandac$ASTNode* astDecl3582;
    org$pandalanguage$pandac$IRNode* decl3587;
    panda$core$Bit $tmp3555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3554 = $tmp3555.value;
    if ($tmp3554) goto $l3556;
    panda$core$Bit $tmp3557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3554 = $tmp3557.value;
    $l3556:;
    panda$core$Bit $tmp3558 = { $tmp3554 };
    bool $tmp3553 = $tmp3558.value;
    if ($tmp3553) goto $l3559;
    panda$core$Bit $tmp3560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3553 = $tmp3560.value;
    $l3559:;
    panda$core$Bit $tmp3561 = { $tmp3553 };
    bool $tmp3552 = $tmp3561.value;
    if ($tmp3552) goto $l3562;
    panda$core$Bit $tmp3563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3552 = $tmp3563.value;
    $l3562:;
    panda$core$Bit $tmp3564 = { $tmp3552 };
    PANDA_ASSERT($tmp3564.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3565 = ((panda$core$Int64) { 1017 });
            varKind3566 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3565 = ((panda$core$Int64) { 1018 });
            varKind3566 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3565 = ((panda$core$Int64) { 1019 });
            varKind3566 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3565 = ((panda$core$Int64) { 1020 });
            varKind3566 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3568 = (panda$collections$Array*) malloc(40);
    $tmp3568->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3568->refCount.value = 1;
    panda$collections$Array$init($tmp3568);
    decls3567 = $tmp3568;
    {
        ITable* $tmp3571 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3571->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3571 = $tmp3571->next;
        }
        $fn3573 $tmp3572 = $tmp3571->methods[0];
        panda$collections$Iterator* $tmp3574 = $tmp3572(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3570 = $tmp3574;
        $l3575:;
        ITable* $tmp3577 = astDecl$Iter3570->$class->itable;
        while ($tmp3577->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3577 = $tmp3577->next;
        }
        $fn3579 $tmp3578 = $tmp3577->methods[0];
        panda$core$Bit $tmp3580 = $tmp3578(astDecl$Iter3570);
        panda$core$Bit $tmp3581 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3580);
        if (!$tmp3581.value) goto $l3576;
        {
            ITable* $tmp3583 = astDecl$Iter3570->$class->itable;
            while ($tmp3583->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3583 = $tmp3583->next;
            }
            $fn3585 $tmp3584 = $tmp3583->methods[1];
            panda$core$Object* $tmp3586 = $tmp3584(astDecl$Iter3570);
            astDecl3582 = ((org$pandalanguage$pandac$ASTNode*) $tmp3586);
            org$pandalanguage$pandac$IRNode* $tmp3588 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3582, varKind3566);
            decl3587 = $tmp3588;
            if (((panda$core$Bit) { decl3587 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3567, ((panda$core$Object*) decl3587));
        }
        goto $l3575;
        $l3576:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3589 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3589->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3589->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3589, nodeKind3565, p_v->offset, ((panda$collections$ListView*) decls3567));
    return $tmp3589;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3591;
    panda$collections$Array* callChildren3594;
    org$pandalanguage$pandac$IRNode* testValue3597;
    org$pandalanguage$pandac$IRNode* $tmp3592 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3592->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3592->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3592, ((panda$core$Int64) { 1016 }), p_test->offset, p_value->type, p_value);
    target3591 = $tmp3592;
    panda$collections$Array* $tmp3595 = (panda$collections$Array*) malloc(40);
    $tmp3595->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3595->refCount.value = 1;
    panda$collections$Array$init($tmp3595);
    callChildren3594 = $tmp3595;
    org$pandalanguage$pandac$IRNode* $tmp3598 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3597 = $tmp3598;
    if (((panda$core$Bit) { testValue3597 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3594, ((panda$core$Object*) testValue3597));
    org$pandalanguage$pandac$IRNode* $tmp3600 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3591, &$s3599, ((panda$collections$ListView*) callChildren3594));
    return $tmp3600;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3609;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3613;
    org$pandalanguage$pandac$IRNode* nextTest3634;
    panda$collections$Array* callChildren3638;
    panda$collections$Array* statements3656;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3659;
    org$pandalanguage$pandac$IRNode* statement3679;
    panda$collections$Array* children3694;
    panda$core$Bit $tmp3601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3601.value);
    panda$core$Int64 $tmp3602 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3603 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3602, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3603.value);
    panda$core$Object* $tmp3604 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3604)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3605.value);
    panda$core$Object* $tmp3606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3607 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3606)->children);
    panda$core$Bit $tmp3608 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3607, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3608.value);
    panda$core$Object* $tmp3610 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3611 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3610)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3612 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3611));
    test3609 = $tmp3612;
    if (((panda$core$Bit) { test3609 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3615 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3614)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3613, ((panda$core$Int64) { 1 }), $tmp3615, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3617 = $tmp3613.start.value;
    panda$core$Int64 i3616 = { $tmp3617 };
    int64_t $tmp3619 = $tmp3613.end.value;
    int64_t $tmp3620 = $tmp3613.step.value;
    bool $tmp3621 = $tmp3613.inclusive.value;
    bool $tmp3628 = $tmp3620 > 0;
    if ($tmp3628) goto $l3626; else goto $l3627;
    $l3626:;
    if ($tmp3621) goto $l3629; else goto $l3630;
    $l3629:;
    if ($tmp3617 <= $tmp3619) goto $l3622; else goto $l3624;
    $l3630:;
    if ($tmp3617 < $tmp3619) goto $l3622; else goto $l3624;
    $l3627:;
    if ($tmp3621) goto $l3631; else goto $l3632;
    $l3631:;
    if ($tmp3617 >= $tmp3619) goto $l3622; else goto $l3624;
    $l3632:;
    if ($tmp3617 > $tmp3619) goto $l3622; else goto $l3624;
    $l3622:;
    {
        panda$core$Object* $tmp3635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3635)->children, i3616);
        org$pandalanguage$pandac$IRNode* $tmp3637 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3636));
        nextTest3634 = $tmp3637;
        if (((panda$core$Bit) { nextTest3634 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3639 = (panda$collections$Array*) malloc(40);
        $tmp3639->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3639->refCount.value = 1;
        panda$collections$Array$init($tmp3639);
        callChildren3638 = $tmp3639;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3638, ((panda$core$Object*) nextTest3634));
        org$pandalanguage$pandac$IRNode* $tmp3642 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3609, &$s3641, ((panda$collections$ListView*) callChildren3638));
        test3609 = $tmp3642;
        if (((panda$core$Bit) { test3609 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3625:;
    if ($tmp3628) goto $l3644; else goto $l3645;
    $l3644:;
    int64_t $tmp3646 = $tmp3619 - i3616.value;
    if ($tmp3621) goto $l3647; else goto $l3648;
    $l3647:;
    if ($tmp3646 >= $tmp3620) goto $l3643; else goto $l3624;
    $l3648:;
    if ($tmp3646 > $tmp3620) goto $l3643; else goto $l3624;
    $l3645:;
    int64_t $tmp3650 = i3616.value - $tmp3619;
    if ($tmp3621) goto $l3651; else goto $l3652;
    $l3651:;
    if ($tmp3650 >= -$tmp3620) goto $l3643; else goto $l3624;
    $l3652:;
    if ($tmp3650 > -$tmp3620) goto $l3643; else goto $l3624;
    $l3643:;
    i3616.value += $tmp3620;
    goto $l3622;
    $l3624:;
    org$pandalanguage$pandac$SymbolTable* $tmp3654 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3654->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3654->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3654, self->symbolTable);
    self->symbolTable = $tmp3654;
    panda$collections$Array* $tmp3657 = (panda$collections$Array*) malloc(40);
    $tmp3657->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3657->refCount.value = 1;
    panda$collections$Array$init($tmp3657);
    statements3656 = $tmp3657;
    panda$core$Int64 $tmp3660 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3659, ((panda$core$Int64) { 1 }), $tmp3660, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3662 = $tmp3659.start.value;
    panda$core$Int64 i3661 = { $tmp3662 };
    int64_t $tmp3664 = $tmp3659.end.value;
    int64_t $tmp3665 = $tmp3659.step.value;
    bool $tmp3666 = $tmp3659.inclusive.value;
    bool $tmp3673 = $tmp3665 > 0;
    if ($tmp3673) goto $l3671; else goto $l3672;
    $l3671:;
    if ($tmp3666) goto $l3674; else goto $l3675;
    $l3674:;
    if ($tmp3662 <= $tmp3664) goto $l3667; else goto $l3669;
    $l3675:;
    if ($tmp3662 < $tmp3664) goto $l3667; else goto $l3669;
    $l3672:;
    if ($tmp3666) goto $l3676; else goto $l3677;
    $l3676:;
    if ($tmp3662 >= $tmp3664) goto $l3667; else goto $l3669;
    $l3677:;
    if ($tmp3662 > $tmp3664) goto $l3667; else goto $l3669;
    $l3667:;
    {
        panda$core$Object* $tmp3680 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3661);
        org$pandalanguage$pandac$IRNode* $tmp3681 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3680));
        statement3679 = $tmp3681;
        if (((panda$core$Bit) { statement3679 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3656, ((panda$core$Object*) statement3679));
    }
    $l3670:;
    if ($tmp3673) goto $l3683; else goto $l3684;
    $l3683:;
    int64_t $tmp3685 = $tmp3664 - i3661.value;
    if ($tmp3666) goto $l3686; else goto $l3687;
    $l3686:;
    if ($tmp3685 >= $tmp3665) goto $l3682; else goto $l3669;
    $l3687:;
    if ($tmp3685 > $tmp3665) goto $l3682; else goto $l3669;
    $l3684:;
    int64_t $tmp3689 = i3661.value - $tmp3664;
    if ($tmp3666) goto $l3690; else goto $l3691;
    $l3690:;
    if ($tmp3689 >= -$tmp3665) goto $l3682; else goto $l3669;
    $l3691:;
    if ($tmp3689 > -$tmp3665) goto $l3682; else goto $l3669;
    $l3682:;
    i3661.value += $tmp3665;
    goto $l3667;
    $l3669:;
    panda$core$Object* $tmp3693 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3693);
    panda$collections$Array* $tmp3695 = (panda$collections$Array*) malloc(40);
    $tmp3695->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3695->refCount.value = 1;
    panda$collections$Array$init($tmp3695);
    children3694 = $tmp3695;
    panda$collections$Array$add$panda$collections$Array$T(children3694, ((panda$core$Object*) test3609));
    org$pandalanguage$pandac$IRNode* $tmp3697 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3697->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3697->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3697, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements3656));
    panda$collections$Array$add$panda$collections$Array$T(children3694, ((panda$core$Object*) $tmp3697));
    org$pandalanguage$pandac$IRNode* $tmp3699 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3699->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3699->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3699, ((panda$core$Int64) { 1012 }), p_w->offset, ((panda$collections$ListView*) children3694));
    return $tmp3699;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3701;
    org$pandalanguage$pandac$Variable* valueVar3704;
    panda$collections$Array* declChildren3711;
    panda$collections$Array* varChildren3716;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3723;
    org$pandalanguage$pandac$ASTNode* c3743;
    org$pandalanguage$pandac$IRNode* w3745;
    panda$collections$Array* statements3747;
    panda$collections$Iterator* astStatement$Iter3750;
    org$pandalanguage$pandac$ASTNode* astStatement3762;
    org$pandalanguage$pandac$IRNode* stmt3767;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3782;
    panda$collections$Array* $tmp3702 = (panda$collections$Array*) malloc(40);
    $tmp3702->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3702->refCount.value = 1;
    panda$collections$Array$init($tmp3702);
    children3701 = $tmp3702;
    org$pandalanguage$pandac$Variable* $tmp3705 = (org$pandalanguage$pandac$Variable*) malloc(72);
    $tmp3705->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3705->refCount.value = 1;
    panda$core$String* $tmp3708 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3707, ((panda$core$Object*) wrap_panda$core$Int64(p_m->offset)));
    panda$core$String* $tmp3710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3708, &$s3709);
    org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3705, p_m->offset, ((panda$core$Int64) { 10001 }), $tmp3710, p_value->type);
    valueVar3704 = $tmp3705;
    panda$collections$Array* $tmp3712 = (panda$collections$Array*) malloc(40);
    $tmp3712->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3712->refCount.value = 1;
    panda$collections$Array$init($tmp3712);
    declChildren3711 = $tmp3712;
    org$pandalanguage$pandac$IRNode* $tmp3714 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3714->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3714->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3714, ((panda$core$Int64) { 1016 }), p_value->offset, valueVar3704->type, valueVar3704);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3711, ((panda$core$Object*) $tmp3714));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3711, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3717 = (panda$collections$Array*) malloc(40);
    $tmp3717->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3717->refCount.value = 1;
    panda$collections$Array$init($tmp3717);
    varChildren3716 = $tmp3717;
    org$pandalanguage$pandac$IRNode* $tmp3719 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3719->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3719->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3719, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3704)->offset, ((panda$collections$ListView*) declChildren3711));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3716, ((panda$core$Object*) $tmp3719));
    org$pandalanguage$pandac$IRNode* $tmp3721 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3721->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3721->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3721, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3704)->offset, ((panda$collections$ListView*) varChildren3716));
    panda$collections$Array$add$panda$collections$Array$T(children3701, ((panda$core$Object*) $tmp3721));
    panda$core$Int64 $tmp3724 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3723, ((panda$core$Int64) { 1 }), $tmp3724, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3726 = $tmp3723.start.value;
    panda$core$Int64 i3725 = { $tmp3726 };
    int64_t $tmp3728 = $tmp3723.end.value;
    int64_t $tmp3729 = $tmp3723.step.value;
    bool $tmp3730 = $tmp3723.inclusive.value;
    bool $tmp3737 = $tmp3729 > 0;
    if ($tmp3737) goto $l3735; else goto $l3736;
    $l3735:;
    if ($tmp3730) goto $l3738; else goto $l3739;
    $l3738:;
    if ($tmp3726 <= $tmp3728) goto $l3731; else goto $l3733;
    $l3739:;
    if ($tmp3726 < $tmp3728) goto $l3731; else goto $l3733;
    $l3736:;
    if ($tmp3730) goto $l3740; else goto $l3741;
    $l3740:;
    if ($tmp3726 >= $tmp3728) goto $l3731; else goto $l3733;
    $l3741:;
    if ($tmp3726 > $tmp3728) goto $l3731; else goto $l3733;
    $l3731:;
    {
        panda$core$Object* $tmp3744 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3725);
        c3743 = ((org$pandalanguage$pandac$ASTNode*) $tmp3744);
        switch (c3743->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3746 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3704, c3743);
                w3745 = $tmp3746;
                if (((panda$core$Bit) { w3745 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3701, ((panda$core$Object*) w3745));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3748 = (panda$collections$Array*) malloc(40);
                $tmp3748->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3748->refCount.value = 1;
                panda$collections$Array$init($tmp3748);
                statements3747 = $tmp3748;
                {
                    ITable* $tmp3751 = ((panda$collections$Iterable*) c3743->children)->$class->itable;
                    while ($tmp3751->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3751 = $tmp3751->next;
                    }
                    $fn3753 $tmp3752 = $tmp3751->methods[0];
                    panda$collections$Iterator* $tmp3754 = $tmp3752(((panda$collections$Iterable*) c3743->children));
                    astStatement$Iter3750 = $tmp3754;
                    $l3755:;
                    ITable* $tmp3757 = astStatement$Iter3750->$class->itable;
                    while ($tmp3757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3757 = $tmp3757->next;
                    }
                    $fn3759 $tmp3758 = $tmp3757->methods[0];
                    panda$core$Bit $tmp3760 = $tmp3758(astStatement$Iter3750);
                    panda$core$Bit $tmp3761 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3760);
                    if (!$tmp3761.value) goto $l3756;
                    {
                        ITable* $tmp3763 = astStatement$Iter3750->$class->itable;
                        while ($tmp3763->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3763 = $tmp3763->next;
                        }
                        $fn3765 $tmp3764 = $tmp3763->methods[1];
                        panda$core$Object* $tmp3766 = $tmp3764(astStatement$Iter3750);
                        astStatement3762 = ((org$pandalanguage$pandac$ASTNode*) $tmp3766);
                        org$pandalanguage$pandac$IRNode* $tmp3768 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3762);
                        stmt3767 = $tmp3768;
                        if (((panda$core$Bit) { stmt3767 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3747, ((panda$core$Object*) stmt3767));
                    }
                    goto $l3755;
                    $l3756:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3769 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                $tmp3769->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3769->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3769, ((panda$core$Int64) { 1000 }), c3743->offset, ((panda$collections$ListView*) statements3747));
                panda$collections$Array$add$panda$collections$Array$T(children3701, ((panda$core$Object*) $tmp3769));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3734:;
    if ($tmp3737) goto $l3772; else goto $l3773;
    $l3772:;
    int64_t $tmp3774 = $tmp3728 - i3725.value;
    if ($tmp3730) goto $l3775; else goto $l3776;
    $l3775:;
    if ($tmp3774 >= $tmp3729) goto $l3771; else goto $l3733;
    $l3776:;
    if ($tmp3774 > $tmp3729) goto $l3771; else goto $l3733;
    $l3773:;
    int64_t $tmp3778 = i3725.value - $tmp3728;
    if ($tmp3730) goto $l3779; else goto $l3780;
    $l3779:;
    if ($tmp3778 >= -$tmp3729) goto $l3771; else goto $l3733;
    $l3780:;
    if ($tmp3778 > -$tmp3729) goto $l3771; else goto $l3733;
    $l3771:;
    i3725.value += $tmp3729;
    goto $l3731;
    $l3733:;
    panda$core$Int64 $tmp3783 = panda$collections$Array$get_count$R$panda$core$Int64(children3701);
    panda$core$Int64 $tmp3784 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3783, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3782, $tmp3784, ((panda$core$Int64) { 1 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3786 = $tmp3782.start.value;
    panda$core$Int64 i3785 = { $tmp3786 };
    int64_t $tmp3788 = $tmp3782.end.value;
    int64_t $tmp3789 = $tmp3782.step.value;
    bool $tmp3790 = $tmp3782.inclusive.value;
    bool $tmp3797 = $tmp3789 > 0;
    if ($tmp3797) goto $l3795; else goto $l3796;
    $l3795:;
    if ($tmp3790) goto $l3798; else goto $l3799;
    $l3798:;
    if ($tmp3786 <= $tmp3788) goto $l3791; else goto $l3793;
    $l3799:;
    if ($tmp3786 < $tmp3788) goto $l3791; else goto $l3793;
    $l3796:;
    if ($tmp3790) goto $l3800; else goto $l3801;
    $l3800:;
    if ($tmp3786 >= $tmp3788) goto $l3791; else goto $l3793;
    $l3801:;
    if ($tmp3786 > $tmp3788) goto $l3791; else goto $l3793;
    $l3791:;
    {
        panda$core$Int64 $tmp3803 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3785, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3804 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3701, $tmp3803);
        panda$core$Bit $tmp3805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3804)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3805.value);
        panda$core$Int64 $tmp3806 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3785, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3807 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3701, $tmp3806);
        panda$core$Int64 $tmp3808 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3807)->children);
        panda$core$Bit $tmp3809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3808, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3809.value);
        panda$core$Int64 $tmp3810 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3785, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3811 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3701, $tmp3810);
        panda$core$Object* $tmp3812 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3701, i3785);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3811)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3812)));
        panda$core$Int64 $tmp3813 = panda$collections$Array$get_count$R$panda$core$Int64(children3701);
        panda$core$Int64 $tmp3814 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3813, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3701, $tmp3814);
    }
    $l3794:;
    if ($tmp3797) goto $l3816; else goto $l3817;
    $l3816:;
    int64_t $tmp3818 = $tmp3788 - i3785.value;
    if ($tmp3790) goto $l3819; else goto $l3820;
    $l3819:;
    if ($tmp3818 >= $tmp3789) goto $l3815; else goto $l3793;
    $l3820:;
    if ($tmp3818 > $tmp3789) goto $l3815; else goto $l3793;
    $l3817:;
    int64_t $tmp3822 = i3785.value - $tmp3788;
    if ($tmp3790) goto $l3823; else goto $l3824;
    $l3823:;
    if ($tmp3822 >= -$tmp3789) goto $l3815; else goto $l3793;
    $l3824:;
    if ($tmp3822 > -$tmp3789) goto $l3815; else goto $l3793;
    $l3815:;
    i3785.value += $tmp3789;
    goto $l3791;
    $l3793:;
    org$pandalanguage$pandac$IRNode* $tmp3826 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3826->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3826->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3826, ((panda$core$Int64) { 1000 }), p_m->offset, ((panda$collections$ListView*) children3701));
    return $tmp3826;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3836;
    panda$collections$Iterator* expr$Iter3839;
    org$pandalanguage$pandac$ASTNode* expr3852;
    org$pandalanguage$pandac$IRNode* compiled3857;
    panda$collections$Array* statements3862;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3865;
    org$pandalanguage$pandac$IRNode* statement3885;
    panda$core$Bit $tmp3828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3828.value);
    panda$core$Int64 $tmp3829 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3830 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3829, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3830.value);
    panda$core$Object* $tmp3831 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3831)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3832.value);
    panda$core$Object* $tmp3833 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3834 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3833)->children);
    panda$core$Bit $tmp3835 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3834, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3835.value);
    panda$collections$Array* $tmp3837 = (panda$collections$Array*) malloc(40);
    $tmp3837->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3837->refCount.value = 1;
    panda$collections$Array$init($tmp3837);
    children3836 = $tmp3837;
    {
        panda$core$Object* $tmp3840 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3841 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3840)->children)->$class->itable;
        while ($tmp3841->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3841 = $tmp3841->next;
        }
        $fn3843 $tmp3842 = $tmp3841->methods[0];
        panda$collections$Iterator* $tmp3844 = $tmp3842(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3840)->children));
        expr$Iter3839 = $tmp3844;
        $l3845:;
        ITable* $tmp3847 = expr$Iter3839->$class->itable;
        while ($tmp3847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3847 = $tmp3847->next;
        }
        $fn3849 $tmp3848 = $tmp3847->methods[0];
        panda$core$Bit $tmp3850 = $tmp3848(expr$Iter3839);
        panda$core$Bit $tmp3851 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3850);
        if (!$tmp3851.value) goto $l3846;
        {
            ITable* $tmp3853 = expr$Iter3839->$class->itable;
            while ($tmp3853->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3853 = $tmp3853->next;
            }
            $fn3855 $tmp3854 = $tmp3853->methods[1];
            panda$core$Object* $tmp3856 = $tmp3854(expr$Iter3839);
            expr3852 = ((org$pandalanguage$pandac$ASTNode*) $tmp3856);
            org$pandalanguage$pandac$IRNode* $tmp3858 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr3852);
            org$pandalanguage$pandac$IRNode* $tmp3859 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3858, p_type);
            compiled3857 = $tmp3859;
            if (((panda$core$Bit) { compiled3857 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3836, ((panda$core$Object*) compiled3857));
        }
        goto $l3845;
        $l3846:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3860 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3860->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3860->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3860, self->symbolTable);
    self->symbolTable = $tmp3860;
    panda$collections$Array* $tmp3863 = (panda$collections$Array*) malloc(40);
    $tmp3863->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3863->refCount.value = 1;
    panda$collections$Array$init($tmp3863);
    statements3862 = $tmp3863;
    panda$core$Int64 $tmp3866 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3865, ((panda$core$Int64) { 1 }), $tmp3866, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3868 = $tmp3865.start.value;
    panda$core$Int64 i3867 = { $tmp3868 };
    int64_t $tmp3870 = $tmp3865.end.value;
    int64_t $tmp3871 = $tmp3865.step.value;
    bool $tmp3872 = $tmp3865.inclusive.value;
    bool $tmp3879 = $tmp3871 > 0;
    if ($tmp3879) goto $l3877; else goto $l3878;
    $l3877:;
    if ($tmp3872) goto $l3880; else goto $l3881;
    $l3880:;
    if ($tmp3868 <= $tmp3870) goto $l3873; else goto $l3875;
    $l3881:;
    if ($tmp3868 < $tmp3870) goto $l3873; else goto $l3875;
    $l3878:;
    if ($tmp3872) goto $l3882; else goto $l3883;
    $l3882:;
    if ($tmp3868 >= $tmp3870) goto $l3873; else goto $l3875;
    $l3883:;
    if ($tmp3868 > $tmp3870) goto $l3873; else goto $l3875;
    $l3873:;
    {
        panda$core$Object* $tmp3886 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3867);
        org$pandalanguage$pandac$IRNode* $tmp3887 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3886));
        statement3885 = $tmp3887;
        if (((panda$core$Bit) { statement3885 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3862, ((panda$core$Object*) statement3885));
    }
    $l3876:;
    if ($tmp3879) goto $l3889; else goto $l3890;
    $l3889:;
    int64_t $tmp3891 = $tmp3870 - i3867.value;
    if ($tmp3872) goto $l3892; else goto $l3893;
    $l3892:;
    if ($tmp3891 >= $tmp3871) goto $l3888; else goto $l3875;
    $l3893:;
    if ($tmp3891 > $tmp3871) goto $l3888; else goto $l3875;
    $l3890:;
    int64_t $tmp3895 = i3867.value - $tmp3870;
    if ($tmp3872) goto $l3896; else goto $l3897;
    $l3896:;
    if ($tmp3895 >= -$tmp3871) goto $l3888; else goto $l3875;
    $l3897:;
    if ($tmp3895 > -$tmp3871) goto $l3888; else goto $l3875;
    $l3888:;
    i3867.value += $tmp3871;
    goto $l3873;
    $l3875:;
    panda$core$Object* $tmp3899 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3899);
    org$pandalanguage$pandac$IRNode* $tmp3900 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3900->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3900->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3900, ((panda$core$Int64) { 1000 }), p_w->offset, ((panda$collections$ListView*) statements3862));
    panda$collections$Array$add$panda$collections$Array$T(children3836, ((panda$core$Object*) $tmp3900));
    org$pandalanguage$pandac$IRNode* $tmp3902 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3902->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3902->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3902, ((panda$core$Int64) { 1042 }), p_w->offset, ((panda$collections$ListView*) children3836));
    return $tmp3902;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children3905;
    panda$collections$Array* statements3910;
    panda$collections$Iterator* s$Iter3913;
    org$pandalanguage$pandac$ASTNode* s3925;
    org$pandalanguage$pandac$IRNode* statement3930;
    panda$core$Bit $tmp3904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp3904.value);
    panda$collections$Array* $tmp3906 = (panda$collections$Array*) malloc(40);
    $tmp3906->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3906->refCount.value = 1;
    panda$collections$Array$init($tmp3906);
    children3905 = $tmp3906;
    org$pandalanguage$pandac$SymbolTable* $tmp3908 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3908->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3908->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3908, self->symbolTable);
    self->symbolTable = $tmp3908;
    panda$collections$Array* $tmp3911 = (panda$collections$Array*) malloc(40);
    $tmp3911->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3911->refCount.value = 1;
    panda$collections$Array$init($tmp3911);
    statements3910 = $tmp3911;
    {
        ITable* $tmp3914 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp3914->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3914 = $tmp3914->next;
        }
        $fn3916 $tmp3915 = $tmp3914->methods[0];
        panda$collections$Iterator* $tmp3917 = $tmp3915(((panda$collections$Iterable*) p_o->children));
        s$Iter3913 = $tmp3917;
        $l3918:;
        ITable* $tmp3920 = s$Iter3913->$class->itable;
        while ($tmp3920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3920 = $tmp3920->next;
        }
        $fn3922 $tmp3921 = $tmp3920->methods[0];
        panda$core$Bit $tmp3923 = $tmp3921(s$Iter3913);
        panda$core$Bit $tmp3924 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3923);
        if (!$tmp3924.value) goto $l3919;
        {
            ITable* $tmp3926 = s$Iter3913->$class->itable;
            while ($tmp3926->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3926 = $tmp3926->next;
            }
            $fn3928 $tmp3927 = $tmp3926->methods[1];
            panda$core$Object* $tmp3929 = $tmp3927(s$Iter3913);
            s3925 = ((org$pandalanguage$pandac$ASTNode*) $tmp3929);
            org$pandalanguage$pandac$IRNode* $tmp3931 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s3925);
            statement3930 = $tmp3931;
            if (((panda$core$Bit) { statement3930 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements3910, ((panda$core$Object*) statement3930));
        }
        goto $l3918;
        $l3919:;
    }
    panda$core$Object* $tmp3932 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3932);
    org$pandalanguage$pandac$IRNode* $tmp3933 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3933->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3933->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3933, ((panda$core$Int64) { 1000 }), p_o->offset, ((panda$collections$ListView*) statements3910));
    panda$collections$Array$add$panda$collections$Array$T(children3905, ((panda$core$Object*) $tmp3933));
    org$pandalanguage$pandac$IRNode* $tmp3935 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp3935->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3935->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3935, ((panda$core$Int64) { 1043 }), p_o->offset, ((panda$collections$ListView*) children3905));
    return $tmp3935;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f3944;
    org$pandalanguage$pandac$Variable* v3953;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp3938 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp3937 = $tmp3938.value;
            if (!$tmp3937) goto $l3939;
            panda$core$Object* $tmp3940 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3941 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3940)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp3942 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp3941));
            $tmp3937 = $tmp3942.value;
            $l3939:;
            panda$core$Bit $tmp3943 = { $tmp3937 };
            return $tmp3943;
        }
        break;
        case 1026:
        {
            f3944 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f3944->resolved.value);
            panda$core$Bit $tmp3947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f3944->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp3946 = $tmp3947.value;
            if (!$tmp3946) goto $l3948;
            $tmp3946 = ((panda$core$Bit) { f3944->value != NULL }).value;
            $l3948:;
            panda$core$Bit $tmp3949 = { $tmp3946 };
            bool $tmp3945 = $tmp3949.value;
            if (!$tmp3945) goto $l3950;
            panda$core$Bit $tmp3951 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f3944->value);
            $tmp3945 = $tmp3951.value;
            $l3950:;
            panda$core$Bit $tmp3952 = { $tmp3945 };
            return $tmp3952;
        }
        break;
        case 1016:
        {
            v3953 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp3955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v3953->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp3954 = $tmp3955.value;
            if ($tmp3954) goto $l3956;
            panda$core$Bit $tmp3959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v3953->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp3958 = $tmp3959.value;
            if (!$tmp3958) goto $l3960;
            $tmp3958 = ((panda$core$Bit) { v3953->initialValue != NULL }).value;
            $l3960:;
            panda$core$Bit $tmp3961 = { $tmp3958 };
            bool $tmp3957 = $tmp3961.value;
            if (!$tmp3957) goto $l3962;
            panda$core$Bit $tmp3963 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v3953->initialValue);
            $tmp3957 = $tmp3963.value;
            $l3962:;
            panda$core$Bit $tmp3964 = { $tmp3957 };
            $tmp3954 = $tmp3964.value;
            $l3956:;
            panda$core$Bit $tmp3965 = { $tmp3954 };
            return $tmp3965;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f3970;
    org$pandalanguage$pandac$Variable* v3972;
    panda$core$Bit $tmp3966 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp3966.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp3967 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3968 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3967)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp3969 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp3968));
            return $tmp3969;
        }
        break;
        case 1026:
        {
            f3970 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp3971 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f3970->value);
            return $tmp3971;
        }
        break;
        case 1016:
        {
            v3972 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp3973 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v3972->initialValue);
            return $tmp3973;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value3977;
    panda$collections$Array* children3984;
    panda$collections$Iterator* rawWhen$Iter3987;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3988;
    org$pandalanguage$pandac$ASTNode* rawWhen4001;
    org$pandalanguage$pandac$IRNode* o4007;
    org$pandalanguage$pandac$IRNode* w4009;
    panda$core$Bit $tmp3974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp3974.value);
    panda$core$Int64 $tmp3975 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp3976 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3975, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3976.value);
    panda$core$Object* $tmp3978 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3979 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3978));
    org$pandalanguage$pandac$IRNode* $tmp3980 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3979);
    value3977 = $tmp3980;
    if (((panda$core$Bit) { value3977 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3981 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value3977->type);
    panda$core$Bit $tmp3982 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3981);
    if ($tmp3982.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3983 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value3977);
        return $tmp3983;
    }
    }
    panda$collections$Array* $tmp3985 = (panda$collections$Array*) malloc(40);
    $tmp3985->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3985->refCount.value = 1;
    panda$collections$Array$init($tmp3985);
    children3984 = $tmp3985;
    panda$collections$Array$add$panda$collections$Array$T(children3984, ((panda$core$Object*) value3977));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3988, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp3989 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp3988);
        ITable* $tmp3990 = ((panda$collections$Iterable*) $tmp3989)->$class->itable;
        while ($tmp3990->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3990 = $tmp3990->next;
        }
        $fn3992 $tmp3991 = $tmp3990->methods[0];
        panda$collections$Iterator* $tmp3993 = $tmp3991(((panda$collections$Iterable*) $tmp3989));
        rawWhen$Iter3987 = $tmp3993;
        $l3994:;
        ITable* $tmp3996 = rawWhen$Iter3987->$class->itable;
        while ($tmp3996->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3996 = $tmp3996->next;
        }
        $fn3998 $tmp3997 = $tmp3996->methods[0];
        panda$core$Bit $tmp3999 = $tmp3997(rawWhen$Iter3987);
        panda$core$Bit $tmp4000 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3999);
        if (!$tmp4000.value) goto $l3995;
        {
            ITable* $tmp4002 = rawWhen$Iter3987->$class->itable;
            while ($tmp4002->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4002 = $tmp4002->next;
            }
            $fn4004 $tmp4003 = $tmp4002->methods[1];
            panda$core$Object* $tmp4005 = $tmp4003(rawWhen$Iter3987);
            rawWhen4001 = ((org$pandalanguage$pandac$ASTNode*) $tmp4005);
            panda$core$Bit $tmp4006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4001->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4006.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4008 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4001);
                o4007 = $tmp4008;
                if (((panda$core$Bit) { o4007 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3984, ((panda$core$Object*) o4007));
                goto $l3994;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4010 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value3977->type, rawWhen4001);
            w4009 = $tmp4010;
            if (((panda$core$Bit) { w4009 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4011 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w4009->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4012 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4011));
            panda$core$Bit $tmp4013 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4012);
            if ($tmp4013.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4014 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value3977);
                return $tmp4014;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3984, ((panda$core$Object*) w4009));
        }
        goto $l3994;
        $l3995:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4015 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp4015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4015->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4015, ((panda$core$Int64) { 1042 }), p_m->offset, ((panda$collections$ListView*) children3984));
    return $tmp4015;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4030;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4017 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4017;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4018 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4019 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4018);
            return $tmp4019;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4020 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4020;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4021 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4021;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4022 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4022;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4023 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4023;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4024 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4024;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4025 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4025;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4026 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4026;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4027 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4027;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4028 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4028;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4029 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4029;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4031 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4032 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4031);
            result4030 = $tmp4032;
            if (((panda$core$Bit) { result4030 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4033 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4030);
                result4030 = $tmp4033;
            }
            }
            return result4030;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4034 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4034;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4035;
    org$pandalanguage$pandac$SymbolTable* symbols4037;
    panda$collections$Iterator* p$Iter4040;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4052;
    panda$collections$Array* fieldInitializers4059;
    panda$collections$Iterator* f$Iter4063;
    org$pandalanguage$pandac$FieldDecl* f4076;
    panda$collections$Array* children4086;
    org$pandalanguage$pandac$IRNode* fieldRef4093;
    org$pandalanguage$pandac$IRNode* compiled4098;
    panda$collections$Array* children4102;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4035 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4036 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4036;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4038 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4038->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4038->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4038, self->symbolTable);
    symbols4037 = $tmp4038;
    {
        ITable* $tmp4041 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4041->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4041 = $tmp4041->next;
        }
        $fn4043 $tmp4042 = $tmp4041->methods[0];
        panda$collections$Iterator* $tmp4044 = $tmp4042(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4040 = $tmp4044;
        $l4045:;
        ITable* $tmp4047 = p$Iter4040->$class->itable;
        while ($tmp4047->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4047 = $tmp4047->next;
        }
        $fn4049 $tmp4048 = $tmp4047->methods[0];
        panda$core$Bit $tmp4050 = $tmp4048(p$Iter4040);
        panda$core$Bit $tmp4051 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4050);
        if (!$tmp4051.value) goto $l4046;
        {
            ITable* $tmp4053 = p$Iter4040->$class->itable;
            while ($tmp4053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4053 = $tmp4053->next;
            }
            $fn4055 $tmp4054 = $tmp4053->methods[1];
            panda$core$Object* $tmp4056 = $tmp4054(p$Iter4040);
            p4052 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4056);
            org$pandalanguage$pandac$Variable* $tmp4057 = (org$pandalanguage$pandac$Variable*) malloc(72);
            $tmp4057->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4057->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$panda$core$Int64$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4057, ((org$pandalanguage$pandac$Symbol*) p_m)->offset, ((panda$core$Int64) { 10001 }), p4052->name, p4052->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4037, ((org$pandalanguage$pandac$Symbol*) $tmp4057));
        }
        goto $l4045;
        $l4046:;
    }
    self->symbolTable = symbols4037;
    panda$collections$Array* $tmp4060 = (panda$collections$Array*) malloc(40);
    $tmp4060->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4060->refCount.value = 1;
    panda$collections$Array$init($tmp4060);
    fieldInitializers4059 = $tmp4060;
    panda$core$Bit $tmp4062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4062.value) {
    {
        {
            panda$core$Object* $tmp4064 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4065 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4064)->fields)->$class->itable;
            while ($tmp4065->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4065 = $tmp4065->next;
            }
            $fn4067 $tmp4066 = $tmp4065->methods[0];
            panda$collections$Iterator* $tmp4068 = $tmp4066(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4064)->fields));
            f$Iter4063 = $tmp4068;
            $l4069:;
            ITable* $tmp4071 = f$Iter4063->$class->itable;
            while ($tmp4071->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4071 = $tmp4071->next;
            }
            $fn4073 $tmp4072 = $tmp4071->methods[0];
            panda$core$Bit $tmp4074 = $tmp4072(f$Iter4063);
            panda$core$Bit $tmp4075 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4074);
            if (!$tmp4075.value) goto $l4070;
            {
                ITable* $tmp4077 = f$Iter4063->$class->itable;
                while ($tmp4077->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4077 = $tmp4077->next;
                }
                $fn4079 $tmp4078 = $tmp4077->methods[1];
                panda$core$Object* $tmp4080 = $tmp4078(f$Iter4063);
                f4076 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4080);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4076);
                panda$core$Bit $tmp4082 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4076->annotations);
                panda$core$Bit $tmp4083 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4082);
                bool $tmp4081 = $tmp4083.value;
                if (!$tmp4081) goto $l4084;
                $tmp4081 = ((panda$core$Bit) { f4076->value != NULL }).value;
                $l4084:;
                panda$core$Bit $tmp4085 = { $tmp4081 };
                if ($tmp4085.value) {
                {
                    panda$collections$Array* $tmp4087 = (panda$collections$Array*) malloc(40);
                    $tmp4087->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4087->refCount.value = 1;
                    panda$collections$Array$init($tmp4087);
                    children4086 = $tmp4087;
                    org$pandalanguage$pandac$IRNode* $tmp4089 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4089->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4089->refCount.value = 1;
                    panda$core$Object* $tmp4091 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4092 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4091));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp4089, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, $tmp4092);
                    panda$collections$Array$add$panda$collections$Array$T(children4086, ((panda$core$Object*) $tmp4089));
                    org$pandalanguage$pandac$IRNode* $tmp4094 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4094->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4094->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4094, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->offset, f4076->type, ((panda$core$Object*) f4076), ((panda$collections$ListView*) children4086));
                    fieldRef4093 = $tmp4094;
                    panda$collections$Array$clear(children4086);
                    panda$collections$Array$add$panda$collections$Array$T(children4086, ((panda$core$Object*) fieldRef4093));
                    panda$collections$Array$add$panda$collections$Array$T(children4086, ((panda$core$Object*) f4076->value));
                    org$pandalanguage$pandac$IRNode* $tmp4096 = (org$pandalanguage$pandac$IRNode*) malloc(56);
                    $tmp4096->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4096->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4096, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4076)->offset, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4086));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4059, ((panda$core$Object*) $tmp4096));
                }
                }
            }
            goto $l4069;
            $l4070:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4099 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4098 = $tmp4099;
    if (((panda$core$Bit) { compiled4098 != NULL }).value) {
    {
        panda$core$Int64 $tmp4100 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4059);
        panda$core$Bit $tmp4101 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4100, ((panda$core$Int64) { 0 }));
        if ($tmp4101.value) {
        {
            panda$collections$Array* $tmp4103 = (panda$collections$Array*) malloc(40);
            $tmp4103->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4103->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4103, ((panda$collections$ListView*) fieldInitializers4059));
            children4102 = $tmp4103;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4102, ((panda$collections$CollectionView*) compiled4098->children));
            org$pandalanguage$pandac$IRNode* $tmp4105 = (org$pandalanguage$pandac$IRNode*) malloc(56);
            $tmp4105->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4105->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4105, ((panda$core$Int64) { 1000 }), p_m->body->offset, ((panda$collections$ListView*) children4102));
            compiled4098 = $tmp4105;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4037) }).value);
    self->symbolTable = old4035;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4107 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4107.value) {
    {
        p_m->compiledBody = compiled4098;
    }
    }
    return compiled4098;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4108;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4109 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4108 = $tmp4109;
        if (((panda$core$Bit) { compiled4108 != NULL }).value) {
        {
            ITable* $tmp4110 = self->codeGenerator->$class->itable;
            while ($tmp4110->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4110 = $tmp4110->next;
            }
            $fn4112 $tmp4111 = $tmp4110->methods[3];
            $tmp4111(self->codeGenerator, p_m, compiled4108);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4113 = self->codeGenerator->$class->itable;
        while ($tmp4113->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4113 = $tmp4113->next;
        }
        $fn4115 $tmp4114 = $tmp4113->methods[2];
        $tmp4114(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4116;
    org$pandalanguage$pandac$ClassDecl* inner4128;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4117 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4117->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4117 = $tmp4117->next;
        }
        $fn4119 $tmp4118 = $tmp4117->methods[0];
        panda$collections$Iterator* $tmp4120 = $tmp4118(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4116 = $tmp4120;
        $l4121:;
        ITable* $tmp4123 = inner$Iter4116->$class->itable;
        while ($tmp4123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4123 = $tmp4123->next;
        }
        $fn4125 $tmp4124 = $tmp4123->methods[0];
        panda$core$Bit $tmp4126 = $tmp4124(inner$Iter4116);
        panda$core$Bit $tmp4127 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4126);
        if (!$tmp4127.value) goto $l4122;
        {
            ITable* $tmp4129 = inner$Iter4116->$class->itable;
            while ($tmp4129->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4129 = $tmp4129->next;
            }
            $fn4131 $tmp4130 = $tmp4129->methods[1];
            panda$core$Object* $tmp4132 = $tmp4130(inner$Iter4116);
            inner4128 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4132);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4128);
        }
        goto $l4121;
        $l4122:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4140;
    panda$collections$Iterator* m$Iter4145;
    org$pandalanguage$pandac$MethodDecl* m4157;
    org$pandalanguage$pandac$ClassDecl* next4167;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4133 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4133.value) {
    {
        ITable* $tmp4134 = self->codeGenerator->$class->itable;
        while ($tmp4134->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4134 = $tmp4134->next;
        }
        $fn4136 $tmp4135 = $tmp4134->methods[1];
        $tmp4135(self->codeGenerator, p_cl);
        ITable* $tmp4137 = self->codeGenerator->$class->itable;
        while ($tmp4137->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4137 = $tmp4137->next;
        }
        $fn4139 $tmp4138 = $tmp4137->methods[4];
        $tmp4138(self->codeGenerator, p_cl);
        return;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_cl->source));
    old4140 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4141 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4141;
    ITable* $tmp4142 = self->codeGenerator->$class->itable;
    while ($tmp4142->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4142 = $tmp4142->next;
    }
    $fn4144 $tmp4143 = $tmp4142->methods[1];
    $tmp4143(self->codeGenerator, p_cl);
    {
        ITable* $tmp4146 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4146->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4146 = $tmp4146->next;
        }
        $fn4148 $tmp4147 = $tmp4146->methods[0];
        panda$collections$Iterator* $tmp4149 = $tmp4147(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4145 = $tmp4149;
        $l4150:;
        ITable* $tmp4152 = m$Iter4145->$class->itable;
        while ($tmp4152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4152 = $tmp4152->next;
        }
        $fn4154 $tmp4153 = $tmp4152->methods[0];
        panda$core$Bit $tmp4155 = $tmp4153(m$Iter4145);
        panda$core$Bit $tmp4156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4155);
        if (!$tmp4156.value) goto $l4151;
        {
            ITable* $tmp4158 = m$Iter4145->$class->itable;
            while ($tmp4158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4158 = $tmp4158->next;
            }
            $fn4160 $tmp4159 = $tmp4158->methods[1];
            panda$core$Object* $tmp4161 = $tmp4159(m$Iter4145);
            m4157 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4161);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4157);
        }
        goto $l4150;
        $l4151:;
    }
    ITable* $tmp4162 = self->codeGenerator->$class->itable;
    while ($tmp4162->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4162 = $tmp4162->next;
    }
    $fn4164 $tmp4163 = $tmp4162->methods[4];
    $tmp4163(self->codeGenerator, p_cl);
    self->symbolTable = old4140;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4165 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4166 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4165, ((panda$core$Int64) { 0 }));
    if ($tmp4166.value) {
    {
        panda$core$Object* $tmp4168 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4167 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4168);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4167);
    }
    }
    panda$core$Int64 $tmp4169 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4169, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4170.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4171;
    org$pandalanguage$pandac$ASTNode* parsed4176;
    panda$collections$Iterator* cl$Iter4180;
    org$pandalanguage$pandac$ClassDecl* cl4192;
    panda$core$Object* $tmp4172 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4171 = ((panda$collections$ListView*) $tmp4172);
    if (((panda$core$Bit) { result4171 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentFile, ((panda$core$Object*) p_file));
        panda$core$String* $tmp4173 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4174 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4175) self->parser->$class->vtable[2])(self->parser, $tmp4173, $tmp4174);
        org$pandalanguage$pandac$ASTNode* $tmp4178 = (($fn4177) self->parser->$class->vtable[68])(self->parser);
        parsed4176 = $tmp4178;
        if (((panda$core$Bit) { parsed4176 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4179 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4176);
            result4171 = $tmp4179;
            {
                ITable* $tmp4181 = ((panda$collections$Iterable*) result4171)->$class->itable;
                while ($tmp4181->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4181 = $tmp4181->next;
                }
                $fn4183 $tmp4182 = $tmp4181->methods[0];
                panda$collections$Iterator* $tmp4184 = $tmp4182(((panda$collections$Iterable*) result4171));
                cl$Iter4180 = $tmp4184;
                $l4185:;
                ITable* $tmp4187 = cl$Iter4180->$class->itable;
                while ($tmp4187->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4187 = $tmp4187->next;
                }
                $fn4189 $tmp4188 = $tmp4187->methods[0];
                panda$core$Bit $tmp4190 = $tmp4188(cl$Iter4180);
                panda$core$Bit $tmp4191 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4190);
                if (!$tmp4191.value) goto $l4186;
                {
                    ITable* $tmp4193 = cl$Iter4180->$class->itable;
                    while ($tmp4193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4193 = $tmp4193->next;
                    }
                    $fn4195 $tmp4194 = $tmp4193->methods[1];
                    panda$core$Object* $tmp4196 = $tmp4194(cl$Iter4180);
                    cl4192 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4196);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4192)->name), ((panda$core$Object*) cl4192));
                }
                goto $l4185;
                $l4186:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4197 = (panda$collections$Array*) malloc(40);
            $tmp4197->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4197->refCount.value = 1;
            panda$collections$Array$init($tmp4197);
            result4171 = ((panda$collections$ListView*) $tmp4197);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4171));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentFile);
    }
    }
    return result4171;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4199;
    panda$collections$Iterator* cl$Iter4201;
    org$pandalanguage$pandac$ClassDecl* cl4213;
    panda$collections$ListView* $tmp4200 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4199 = $tmp4200;
    {
        ITable* $tmp4202 = ((panda$collections$Iterable*) classes4199)->$class->itable;
        while ($tmp4202->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4202 = $tmp4202->next;
        }
        $fn4204 $tmp4203 = $tmp4202->methods[0];
        panda$collections$Iterator* $tmp4205 = $tmp4203(((panda$collections$Iterable*) classes4199));
        cl$Iter4201 = $tmp4205;
        $l4206:;
        ITable* $tmp4208 = cl$Iter4201->$class->itable;
        while ($tmp4208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4208 = $tmp4208->next;
        }
        $fn4210 $tmp4209 = $tmp4208->methods[0];
        panda$core$Bit $tmp4211 = $tmp4209(cl$Iter4201);
        panda$core$Bit $tmp4212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4211);
        if (!$tmp4212.value) goto $l4207;
        {
            ITable* $tmp4214 = cl$Iter4201->$class->itable;
            while ($tmp4214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4214 = $tmp4214->next;
            }
            $fn4216 $tmp4215 = $tmp4214->methods[1];
            panda$core$Object* $tmp4217 = $tmp4215(cl$Iter4201);
            cl4213 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4217);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4213);
        }
        goto $l4206;
        $l4207:;
    }
}
org$pandalanguage$pandac$Position* org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset) {
    panda$io$InputStream* source4218;
    panda$core$Int64 line4221;
    panda$core$Int64 column4222;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4223;
    panda$core$Char8 $match$1229294242;
    panda$core$Char8 $tmp4245;
    panda$core$Char8 $tmp4248;
    panda$core$Object* $tmp4219 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$io$InputStream* $tmp4220 = panda$io$File$openInputStream$R$panda$io$InputStream(((panda$io$File*) $tmp4219));
    source4218 = $tmp4220;
    line4221 = ((panda$core$Int64) { 1 });
    column4222 = ((panda$core$Int64) { 1 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4223, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4225 = $tmp4223.start.value;
    panda$core$Int64 i4224 = { $tmp4225 };
    int64_t $tmp4227 = $tmp4223.end.value;
    int64_t $tmp4228 = $tmp4223.step.value;
    bool $tmp4229 = $tmp4223.inclusive.value;
    bool $tmp4236 = $tmp4228 > 0;
    if ($tmp4236) goto $l4234; else goto $l4235;
    $l4234:;
    if ($tmp4229) goto $l4237; else goto $l4238;
    $l4237:;
    if ($tmp4225 <= $tmp4227) goto $l4230; else goto $l4232;
    $l4238:;
    if ($tmp4225 < $tmp4227) goto $l4230; else goto $l4232;
    $l4235:;
    if ($tmp4229) goto $l4239; else goto $l4240;
    $l4239:;
    if ($tmp4225 >= $tmp4227) goto $l4230; else goto $l4232;
    $l4240:;
    if ($tmp4225 > $tmp4227) goto $l4230; else goto $l4232;
    $l4230:;
    {
        {
            panda$core$Char8$nullable $tmp4244 = (($fn4243) source4218->$class->vtable[10])(source4218);
            $match$1229294242 = ((panda$core$Char8) $tmp4244.value);
            panda$core$Char8$init$panda$core$UInt8(&$tmp4245, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp4246 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1229294242, $tmp4245);
            if ($tmp4246.value) {
            {
                panda$core$Int64 $tmp4247 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(line4221, ((panda$core$Int64) { 1 }));
                line4221 = $tmp4247;
                column4222 = ((panda$core$Int64) { 1 });
            }
            }
            else {
            panda$core$Char8$init$panda$core$UInt8(&$tmp4248, ((panda$core$UInt8) { 9 }));
            panda$core$Bit $tmp4249 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$1229294242, $tmp4248);
            if ($tmp4249.value) {
            {
                panda$core$Int64 $tmp4250 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(column4222, ((panda$core$Int64) { 4 }));
                panda$core$Int64 $tmp4251 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 4 }), $tmp4250);
                panda$core$Int64 $tmp4252 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4222, $tmp4251);
                column4222 = $tmp4252;
            }
            }
            else {
            {
                panda$core$Int64 $tmp4253 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(column4222, ((panda$core$Int64) { 1 }));
                column4222 = $tmp4253;
            }
            }
            }
        }
    }
    $l4233:;
    if ($tmp4236) goto $l4255; else goto $l4256;
    $l4255:;
    int64_t $tmp4257 = $tmp4227 - i4224.value;
    if ($tmp4229) goto $l4258; else goto $l4259;
    $l4258:;
    if ($tmp4257 >= $tmp4228) goto $l4254; else goto $l4232;
    $l4259:;
    if ($tmp4257 > $tmp4228) goto $l4254; else goto $l4232;
    $l4256:;
    int64_t $tmp4261 = i4224.value - $tmp4227;
    if ($tmp4229) goto $l4262; else goto $l4263;
    $l4262:;
    if ($tmp4261 >= -$tmp4228) goto $l4254; else goto $l4232;
    $l4263:;
    if ($tmp4261 > -$tmp4228) goto $l4254; else goto $l4232;
    $l4254:;
    i4224.value += $tmp4228;
    goto $l4230;
    $l4232:;
    (($fn4265) ((panda$core$Object*) source4218)->$class->vtable[1])(((panda$core$Object*) source4218));
    org$pandalanguage$pandac$Position* $tmp4266 = (org$pandalanguage$pandac$Position*) malloc(40);
    $tmp4266->$class = (panda$core$Class*) &org$pandalanguage$pandac$Position$class;
    $tmp4266->refCount.value = 1;
    panda$core$Object* $tmp4268 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentFile);
    panda$core$String* $tmp4269 = panda$io$File$name$R$panda$core$String(((panda$io$File*) $tmp4268));
    org$pandalanguage$pandac$Position$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp4266, $tmp4269, line4221, column4222);
    return $tmp4266;
}
void org$pandalanguage$pandac$Compiler$error$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_offset, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Position* $tmp4270 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self, p_offset);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, $tmp4270, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position* p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4271 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4271;
        panda$core$String* $tmp4273 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4272, ((panda$core$Object*) p_pos));
        panda$core$String* $tmp4275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4273, &$s4274);
        panda$core$String* $tmp4276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4275, p_msg);
        panda$core$String* $tmp4278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4276, &$s4277);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4278));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4279 = self->codeGenerator->$class->itable;
    while ($tmp4279->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4279 = $tmp4279->next;
    }
    $fn4281 $tmp4280 = $tmp4279->methods[5];
    $tmp4280(self->codeGenerator);
}

