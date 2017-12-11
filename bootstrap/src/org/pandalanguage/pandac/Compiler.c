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
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/collections/MapView.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/List.h"
#include "panda/collections/ListView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/Console.h"
#include "panda/collections/Key.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/io/File.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn21)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn123)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn171)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn178)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn219)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn233)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn243)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn251)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn258)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn356)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn362)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn368)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn375)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn381)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn387)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn441)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn447)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn453)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn464)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn470)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn476)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn482)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn488)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn494)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn502)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn508)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn514)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn578)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn584)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn590)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn614)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn646)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn652)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn658)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn674)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn680)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn686)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn712)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn718)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn724)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn776)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn782)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn788)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn797)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn814)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn832)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn838)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn844)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn852)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn858)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn864)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn875)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn881)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn887)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn910)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn916)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn922)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn961)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn967)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn973)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn986)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn992)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn998)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1013)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1019)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1025)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1040)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1046)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1052)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1066)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1072)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1078)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1091)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1097)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1103)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1148)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1160)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1167)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1173)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1179)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1199)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1205)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1211)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1291)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1399)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1405)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1411)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1437)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1443)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1449)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1606)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1612)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1618)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1804)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1810)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1816)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1906)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1928)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1950)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1967)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1973)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1979)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1991)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2013)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2087)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2105)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2176)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2194)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2200)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2206)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2237)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2243)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2249)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2286)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2292)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2298)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2321)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2327)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2333)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2723)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2729)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2735)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2867)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2873)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2879)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2992)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3092)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3108)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3114)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3120)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3215)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3221)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3227)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3437)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3443)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3449)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3584)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3590)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3596)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3622)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3628)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3634)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3741)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3747)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3753)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3899)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3905)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3911)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3984)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3990)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3996)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4047)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4053)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4059)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4123)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4135)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4174)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4180)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4186)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4198)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4204)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4210)(panda$collections$Iterator*);
typedef void (*$fn4243)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4246)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4250)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4256)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4262)(panda$collections$Iterator*);
typedef void (*$fn4267)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4270)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4275)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4279)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4285)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4291)(panda$collections$Iterator*);
typedef void (*$fn4295)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4305)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4307)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4313)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4319)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4325)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4334)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4340)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4346)(panda$collections$Iterator*);
typedef void (*$fn4362)(org$pandalanguage$pandac$CodeGenerator*);

static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x38", 12, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x31\x36", 13, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x33\x32", 13, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x36\x34", 13, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x38", 13, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x31\x36", 14, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x33\x32", 14, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x36\x34", 14, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x6E\x74", 3, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x41\x72\x72\x61\x79", 23, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E", 28, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x56\x69\x65\x77", 32, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x57\x72\x69\x74\x65\x72", 34, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x64\x65\x6E\x74\x69\x74\x79\x4D\x61\x70", 29, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65\x41\x72\x72\x61\x79", 32, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4B\x65\x79", 21, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74", 22, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x56\x69\x65\x77", 26, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x48\x61\x73\x68\x4D\x61\x70", 25, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70", 21, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x56\x69\x65\x77", 25, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x57\x72\x69\x74\x65\x72", 27, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x65\x74", 21, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x74\x61\x63\x6B", 23, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6F\x6D\x70\x61\x72\x61\x62\x6C\x65", 21, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x45\x71\x75\x61\x74\x61\x62\x6C\x65", 20, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65", 20, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4D\x75\x74\x61\x62\x6C\x65\x53\x74\x72\x69\x6E\x67", 24, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x69\x6D\x70\x6C\x65\x52\x61\x6E\x67\x65", 22, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72", 18, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20", 6, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x27", 19, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 9, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x65\x78\x74\x65\x6E\x64\x20\x63\x6C\x61\x73\x73\x20", 22, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73\x20\x27", 12, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6F\x66\x20\x63\x6C\x61\x73\x73\x20\x27", 12, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6F\x72\x65\x20\x61\x6E\x79\x20\x73\x75\x70\x65\x72\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x73", 33, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6D\x6F\x72\x65\x20\x74\x68\x61\x6E\x20\x6F\x6E\x65\x20\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73", 30, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 23, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 33, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20\x6D\x65\x74\x68\x6F\x64\x20", 45, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 26, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6F\x72\x20\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x61\x74\x63\x68\x20\x6F\x6E\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C\x20\x28", 38, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, NULL };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, NULL };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, NULL };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, NULL };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, NULL };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, NULL };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, NULL };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, NULL };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s2358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, NULL };
static panda$core$String $s2361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, NULL };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, NULL };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, NULL };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, NULL };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, NULL };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, NULL };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, NULL };
static panda$core$String $s2708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, NULL };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, NULL };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, NULL };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, NULL };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s3145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, NULL };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, NULL };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, NULL };
static panda$core$String $s3483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, NULL };
static panda$core$String $s3603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, NULL };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, NULL };
static panda$core$String $s3607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, NULL };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, NULL };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, NULL };
static panda$core$String $s3643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, NULL };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, NULL };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, NULL };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, NULL };
static panda$core$String $s3680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, NULL };
static panda$core$String $s3700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, NULL };
static panda$core$String $s3767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s3804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, NULL };
static panda$core$String $s3857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, NULL };
static panda$core$String $s3860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s4355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, NULL };
static panda$core$String $s4358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };

void org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$CodeGenerator* p_codeGenerator, org$pandalanguage$pandac$Compiler$Settings* p_settings) {
    org$pandalanguage$pandac$Position $tmp53;
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
    self->currentClass = $tmp7;
    panda$collections$Stack* $tmp9 = (panda$collections$Stack*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp9->refCount.value = 1;
    panda$collections$Stack$init($tmp9);
    self->currentMethod = $tmp9;
    panda$collections$Stack* $tmp11 = (panda$collections$Stack*) malloc(24);
    $tmp11->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp11->refCount.value = 1;
    panda$collections$Stack$init($tmp11);
    self->loops = $tmp11;
    self->reusedValueCount = ((panda$core$UInt64) { 0 });
    self->errorCount = ((panda$core$Int64) { 0 });
    self->reportErrors = ((panda$core$Bit) { true });
    self->settings = p_settings;
    org$pandalanguage$pandac$parser$Parser* $tmp13 = (org$pandalanguage$pandac$parser$Parser*) malloc(80);
    $tmp13->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Parser$class;
    $tmp13->refCount.value = 1;
    org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter($tmp13, ((org$pandalanguage$pandac$ErrorReporter*) self));
    self->parser = $tmp13;
    org$pandalanguage$pandac$Scanner* $tmp15 = (org$pandalanguage$pandac$Scanner*) malloc(24);
    $tmp15->$class = (panda$core$Class*) &org$pandalanguage$pandac$Scanner$class;
    $tmp15->refCount.value = 1;
    org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler($tmp15, self);
    self->scanner = $tmp15;
    org$pandalanguage$pandac$SymbolTable* $tmp17 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp17->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp17->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$Compiler($tmp17, self);
    self->root = $tmp17;
    self->symbolTable = self->root;
    self->codeGenerator = p_codeGenerator;
    ITable* $tmp19 = p_codeGenerator->$class->itable;
    while ($tmp19->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp19 = $tmp19->next;
    }
    $fn21 $tmp20 = $tmp19->methods[0];
    $tmp20(p_codeGenerator, self);
    org$pandalanguage$pandac$Type* $tmp22 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp22->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp22->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp22, &$s24, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp22));
    org$pandalanguage$pandac$Type* $tmp25 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp25->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp25->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp25, &$s27, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp25));
    org$pandalanguage$pandac$Type* $tmp28 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp28->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp28->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp28, &$s30, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp28));
    org$pandalanguage$pandac$Type* $tmp31 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp31->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp31->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp31, &$s33, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp31));
    org$pandalanguage$pandac$Type* $tmp34 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp34->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp34->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp34, &$s36, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp34));
    org$pandalanguage$pandac$Type* $tmp37 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp37->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp37->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp37, &$s39, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp37));
    org$pandalanguage$pandac$Type* $tmp40 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp40->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp40->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp40, &$s42, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp40));
    org$pandalanguage$pandac$Type* $tmp43 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp43->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp43->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp43, &$s45, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp43));
    org$pandalanguage$pandac$Type* $tmp46 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp46->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp46->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp46, &$s48, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp46));
    org$pandalanguage$pandac$Alias* $tmp49 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp49->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp49->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp53);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp49, &$s51, &$s52, $tmp53);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp49));
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s54);
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
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s108);
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp111;
    org$pandalanguage$pandac$Position $tmp116;
    org$pandalanguage$pandac$Alias* $tmp109 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp109->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp109->refCount.value = 1;
    panda$core$String$Index$nullable $tmp113 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s112);
    panda$core$String$Index $tmp114 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp113.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp111, ((panda$core$String$Index$nullable) { $tmp114, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp115 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp111);
    org$pandalanguage$pandac$Position$init(&$tmp116);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp109, $tmp115, p_name, $tmp116);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp109));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$String* alias119;
    org$pandalanguage$pandac$ClassDecl* result126;
    panda$core$String$Index$nullable idx130;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp135;
    org$pandalanguage$pandac$Symbol* rootAlias150;
    panda$core$String$Index$nullable index157;
    org$pandalanguage$pandac$ClassDecl* parent160;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp161;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp164;
    panda$core$Int64 $tmp117 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp118 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp117, ((panda$core$Int64) { 0 }));
    if ($tmp118.value) {
    {
        panda$core$Object* $tmp120 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        ITable* $tmp121 = ((org$pandalanguage$pandac$ClassDecl*) $tmp120)->aliases->$class->itable;
        while ($tmp121->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp121 = $tmp121->next;
        }
        $fn123 $tmp122 = $tmp121->methods[1];
        panda$core$Object* $tmp124 = $tmp122(((org$pandalanguage$pandac$ClassDecl*) $tmp120)->aliases, ((panda$core$Object*) p_name));
        alias119 = ((panda$core$String*) $tmp124);
        if (((panda$core$Bit) { alias119 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp125 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, alias119);
            return $tmp125;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp127 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
    result126 = $tmp127;
    panda$core$Int64 $tmp128 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp129 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp128, ((panda$core$Int64) { 0 }));
    if ($tmp129.value) {
    {
        if (((panda$core$Bit) { result126 == NULL }).value) {
        {
            panda$core$Object* $tmp131 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$core$String$Index$nullable $tmp133 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp131))->name, &$s132);
            idx130 = $tmp133;
            if (((panda$core$Bit) { idx130.nonnull }).value) {
            {
                panda$core$Object* $tmp134 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp135, ((panda$core$String$Index$nullable) { .nonnull = false }), idx130, ((panda$core$Bit) { true }));
                panda$core$String* $tmp136 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp134))->name, $tmp135);
                panda$core$String* $tmp137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp136, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp138 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp137);
                result126 = $tmp138;
            }
            }
        }
        }
        if (((panda$core$Bit) { result126 == NULL }).value) {
        {
            panda$core$Object* $tmp139 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl*) $tmp139))->name, &$s140);
            panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp141, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp143 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp142);
            result126 = $tmp143;
        }
        }
        bool $tmp144 = ((panda$core$Bit) { result126 == NULL }).value;
        if (!$tmp144) goto $l145;
        panda$core$Object* $tmp146 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        $tmp144 = ((panda$core$Bit) { ((org$pandalanguage$pandac$ClassDecl*) $tmp146)->owner != NULL }).value;
        $l145:;
        panda$core$Bit $tmp147 = { $tmp144 };
        if ($tmp147.value) {
        {
            panda$core$Object* $tmp148 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp148)->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp149 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
            result126 = $tmp149;
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result126 == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp151 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->root, p_name);
        rootAlias150 = $tmp151;
        bool $tmp152 = ((panda$core$Bit) { rootAlias150 != NULL }).value;
        if (!$tmp152) goto $l153;
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rootAlias150->kind, ((panda$core$Int64) { 200 }));
        $tmp152 = $tmp154.value;
        $l153:;
        panda$core$Bit $tmp155 = { $tmp152 };
        if ($tmp155.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp156 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Alias*) rootAlias150)->fullName);
            result126 = $tmp156;
        }
        }
    }
    }
    if (((panda$core$Bit) { result126 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp159 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s158);
        index157 = $tmp159;
        if (((panda$core$Bit) { index157.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp161, ((panda$core$String$Index$nullable) { .nonnull = false }), index157, ((panda$core$Bit) { false }));
            panda$core$String* $tmp162 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp161);
            org$pandalanguage$pandac$ClassDecl* $tmp163 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp162);
            parent160 = $tmp163;
            if (((panda$core$Bit) { parent160 != NULL }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp164, index157, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp165 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp164);
                panda$core$String* $tmp166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) parent160)->name, $tmp165);
                org$pandalanguage$pandac$ClassDecl* $tmp167 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp166);
                result126 = $tmp167;
            }
            }
        }
        }
    }
    }
    return result126;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 expectedCount168;
    panda$collections$ListView* foundTypes173;
    panda$core$Int64 foundCount175;
    panda$core$String* s181;
    org$pandalanguage$pandac$Type* object200;
    panda$core$Range$LTpanda$core$Int64$GT $tmp202;
    org$pandalanguage$pandac$Type* bound216;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    PANDA_ASSERT(p_type->resolved.value);
    ITable* $tmp169 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
    while ($tmp169->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp169 = $tmp169->next;
    }
    $fn171 $tmp170 = $tmp169->methods[0];
    panda$core$Int64 $tmp172 = $tmp170(((panda$collections$CollectionView*) p_cl->parameters));
    expectedCount168 = $tmp172;
    panda$collections$ListView* $tmp174 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type);
    foundTypes173 = $tmp174;
    ITable* $tmp176 = ((panda$collections$CollectionView*) foundTypes173)->$class->itable;
    while ($tmp176->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp176 = $tmp176->next;
    }
    $fn178 $tmp177 = $tmp176->methods[0];
    panda$core$Int64 $tmp179 = $tmp177(((panda$collections$CollectionView*) foundTypes173));
    foundCount175 = $tmp179;
    panda$core$Bit $tmp180 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(expectedCount168, foundCount175);
    if ($tmp180.value) {
    {
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expectedCount168, ((panda$core$Int64) { 1 }));
        if ($tmp182.value) {
        {
            s181 = &$s183;
        }
        }
        else {
        {
            s181 = &$s184;
        }
        }
        panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s185, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, &$s187);
        panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp188, ((panda$core$Object*) wrap_panda$core$Int64(expectedCount168)));
        panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s190);
        panda$core$String* $tmp192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, s181);
        panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp192, &$s193);
        panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s195, ((panda$core$Object*) wrap_panda$core$Int64(foundCount175)));
        panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s197);
        panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, $tmp198);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp199);
        return ((panda$core$Bit) { false });
    }
    }
    org$pandalanguage$pandac$Type* $tmp201 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    object200 = $tmp201;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp202, ((panda$core$Int64) { 0 }), expectedCount168, ((panda$core$Bit) { false }));
    int64_t $tmp204 = $tmp202.min.value;
    panda$core$Int64 i203 = { $tmp204 };
    int64_t $tmp206 = $tmp202.max.value;
    bool $tmp207 = $tmp202.inclusive.value;
    if ($tmp207) goto $l214; else goto $l215;
    $l214:;
    if ($tmp204 <= $tmp206) goto $l208; else goto $l210;
    $l215:;
    if ($tmp204 < $tmp206) goto $l208; else goto $l210;
    $l208:;
    {
        ITable* $tmp217 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp217->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp217 = $tmp217->next;
        }
        $fn219 $tmp218 = $tmp217->methods[0];
        panda$core$Object* $tmp220 = $tmp218(((panda$collections$ListView*) p_cl->parameters), i203);
        bound216 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp220)->bound;
        panda$core$Bit $tmp222 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(bound216, object200);
        bool $tmp221 = $tmp222.value;
        if ($tmp221) goto $l223;
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(bound216->typeKind, ((panda$core$Int64) { 11 }));
        bool $tmp224 = $tmp225.value;
        if (!$tmp224) goto $l226;
        panda$core$Object* $tmp227 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(bound216->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp228 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp227), object200);
        $tmp224 = $tmp228.value;
        $l226:;
        panda$core$Bit $tmp229 = { $tmp224 };
        $tmp221 = $tmp229.value;
        $l223:;
        panda$core$Bit $tmp230 = { $tmp221 };
        if ($tmp230.value) {
        {
            goto $l211;
        }
        }
        ITable* $tmp231 = foundTypes173->$class->itable;
        while ($tmp231->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp231 = $tmp231->next;
        }
        $fn233 $tmp232 = $tmp231->methods[0];
        panda$core$Object* $tmp234 = $tmp232(foundTypes173, i203);
        org$pandalanguage$pandac$Type* $tmp235 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, bound216);
        panda$core$Int64$nullable $tmp236 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp234), $tmp235);
        if (((panda$core$Bit) { !$tmp236.nonnull }).value) {
        {
            panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s237, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, &$s239);
            ITable* $tmp241 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp241->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp241 = $tmp241->next;
            }
            $fn243 $tmp242 = $tmp241->methods[0];
            panda$core$Object* $tmp244 = $tmp242(((panda$collections$ListView*) p_cl->parameters), i203);
            panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp244))->name);
            panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s246);
            ITable* $tmp249 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp249->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp249 = $tmp249->next;
            }
            $fn251 $tmp250 = $tmp249->methods[0];
            panda$core$Object* $tmp252 = $tmp250(((panda$collections$ListView*) p_cl->parameters), i203);
            panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s248, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp252)->bound));
            panda$core$String* $tmp255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, &$s254);
            ITable* $tmp256 = foundTypes173->$class->itable;
            while ($tmp256->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp256 = $tmp256->next;
            }
            $fn258 $tmp257 = $tmp256->methods[0];
            panda$core$Object* $tmp259 = $tmp257(foundTypes173, i203);
            panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp255, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp259)));
            panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp260, &$s261);
            panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, $tmp262);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp263);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l211:;
    int64_t $tmp265 = $tmp206 - i203.value;
    if ($tmp207) goto $l266; else goto $l267;
    $l266:;
    if ($tmp265 >= 1) goto $l264; else goto $l210;
    $l267:;
    if ($tmp265 > 1) goto $l264; else goto $l210;
    $l264:;
    i203.value += 1;
    goto $l208;
    $l210:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved270;
    org$pandalanguage$pandac$Type* result272;
    org$pandalanguage$pandac$Symbol* s276;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp280;
    panda$collections$Array* subtypes291;
    org$pandalanguage$pandac$Type* sub294;
    panda$collections$Array* subtypes304;
    org$pandalanguage$pandac$Type* base307;
    panda$core$MutableString* name310;
    panda$core$String* separator315;
    panda$core$Range$LTpanda$core$Int64$GT $tmp317;
    org$pandalanguage$pandac$Type* resolved332;
    org$pandalanguage$pandac$Type* result343;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp271 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved270 = $tmp271;
            if (((panda$core$Bit) { resolved270 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp273 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved270);
                result272 = $tmp273;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp274 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved270, result272);
                    panda$core$Bit $tmp275 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp274);
                    if ($tmp275.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result272;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp277 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s276 = $tmp277;
            if (((panda$core$Bit) { s276 != NULL }).value) {
            {
                switch (s276->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp278 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp278->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp278->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp278, ((org$pandalanguage$pandac$Alias*) s276)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp278;
                    }
                    break;
                    case 203:
                    {
                        gp280 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s276);
                        org$pandalanguage$pandac$ClassDecl* $tmp281 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp280->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp281);
                        org$pandalanguage$pandac$Type* $tmp282 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp282->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp282->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp282, gp280);
                        return $tmp282;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s276);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp284 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s276));
                        return $tmp284;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s285, ((panda$core$Object*) p_type));
            panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp286, &$s287);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp288);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp289 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp289, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp290.value);
            panda$collections$Array* $tmp292 = (panda$collections$Array*) malloc(40);
            $tmp292->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp292->refCount.value = 1;
            panda$collections$Array$init($tmp292);
            subtypes291 = $tmp292;
            panda$core$Object* $tmp295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp296 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp295));
            sub294 = $tmp296;
            if (((panda$core$Bit) { sub294 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes291, ((panda$core$Object*) sub294));
            org$pandalanguage$pandac$Type* $tmp297 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp297->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp297->refCount.value = 1;
            panda$core$Object* $tmp299 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes291, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp299))->name, &$s300);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp297, $tmp301, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes291), ((panda$core$Bit) { true }));
            return $tmp297;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp302 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp303 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp302, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp303.value);
            panda$collections$Array* $tmp305 = (panda$collections$Array*) malloc(40);
            $tmp305->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp305->refCount.value = 1;
            panda$collections$Array$init($tmp305);
            subtypes304 = $tmp305;
            panda$core$Object* $tmp308 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp309 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp308), ((panda$core$Bit) { false }));
            base307 = $tmp309;
            if (((panda$core$Bit) { base307 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes304, ((panda$core$Object*) base307));
            panda$core$MutableString* $tmp311 = (panda$core$MutableString*) malloc(40);
            $tmp311->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp311->refCount.value = 1;
            panda$core$Object* $tmp313 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes304, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp311, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp313))->name);
            name310 = $tmp311;
            panda$core$MutableString$append$panda$core$String(name310, &$s314);
            separator315 = &$s316;
            panda$core$Int64 $tmp318 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp317, ((panda$core$Int64) { 1 }), $tmp318, ((panda$core$Bit) { false }));
            int64_t $tmp320 = $tmp317.min.value;
            panda$core$Int64 i319 = { $tmp320 };
            int64_t $tmp322 = $tmp317.max.value;
            bool $tmp323 = $tmp317.inclusive.value;
            if ($tmp323) goto $l330; else goto $l331;
            $l330:;
            if ($tmp320 <= $tmp322) goto $l324; else goto $l326;
            $l331:;
            if ($tmp320 < $tmp322) goto $l324; else goto $l326;
            $l324:;
            {
                panda$core$Object* $tmp333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, i319);
                org$pandalanguage$pandac$Type* $tmp334 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp333));
                resolved332 = $tmp334;
                if (((panda$core$Bit) { resolved332 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes304, ((panda$core$Object*) resolved332));
                panda$core$MutableString$append$panda$core$String(name310, separator315);
                panda$core$MutableString$append$panda$core$String(name310, ((org$pandalanguage$pandac$Symbol*) resolved332)->name);
                separator315 = &$s335;
            }
            $l327:;
            int64_t $tmp337 = $tmp322 - i319.value;
            if ($tmp323) goto $l338; else goto $l339;
            $l338:;
            if ($tmp337 >= 1) goto $l336; else goto $l326;
            $l339:;
            if ($tmp337 > 1) goto $l336; else goto $l326;
            $l336:;
            i319.value += 1;
            goto $l324;
            $l326:;
            panda$core$MutableString$append$panda$core$String(name310, &$s342);
            org$pandalanguage$pandac$Type* $tmp344 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp344->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp344->refCount.value = 1;
            panda$core$String* $tmp346 = panda$core$MutableString$finish$R$panda$core$String(name310);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp344, $tmp346, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes304), ((panda$core$Bit) { true }));
            result343 = $tmp344;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp347 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result343->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp348 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp347));
                panda$core$Bit $tmp349 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp348, result343);
                panda$core$Bit $tmp350 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp349);
                if ($tmp350.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result343;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp351 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp351;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old352;
    panda$collections$Iterator* p$Iter353;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p365;
    org$pandalanguage$pandac$Type* resolved370;
    panda$collections$Iterator* rawS$Iter372;
    org$pandalanguage$pandac$Type* rawS384;
    org$pandalanguage$pandac$Type* s389;
    org$pandalanguage$pandac$ClassDecl* sClass391;
    panda$collections$Iterator* m$Iter438;
    org$pandalanguage$pandac$MethodDecl* m450;
    panda$collections$Iterator* intf$Iter461;
    org$pandalanguage$pandac$Type* intf473;
    panda$collections$Iterator* p$Iter479;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p491;
    org$pandalanguage$pandac$ClassDecl* cl496;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old352 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp354 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp354->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp354 = $tmp354->next;
        }
        $fn356 $tmp355 = $tmp354->methods[0];
        panda$collections$Iterator* $tmp357 = $tmp355(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter353 = $tmp357;
        $l358:;
        ITable* $tmp360 = p$Iter353->$class->itable;
        while ($tmp360->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp360 = $tmp360->next;
        }
        $fn362 $tmp361 = $tmp360->methods[0];
        panda$core$Bit $tmp363 = $tmp361(p$Iter353);
        panda$core$Bit $tmp364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp363);
        if (!$tmp364.value) goto $l359;
        {
            ITable* $tmp366 = p$Iter353->$class->itable;
            while ($tmp366->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp366 = $tmp366->next;
            }
            $fn368 $tmp367 = $tmp366->methods[1];
            panda$core$Object* $tmp369 = $tmp367(p$Iter353);
            p365 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp369);
            org$pandalanguage$pandac$Type* $tmp371 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p365->bound, ((panda$core$Bit) { false }));
            resolved370 = $tmp371;
            if (((panda$core$Bit) { resolved370 != NULL }).value) {
            {
                p365->bound = resolved370;
            }
            }
        }
        goto $l358;
        $l359:;
    }
    {
        ITable* $tmp373 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp373->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp373 = $tmp373->next;
        }
        $fn375 $tmp374 = $tmp373->methods[0];
        panda$collections$Iterator* $tmp376 = $tmp374(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter372 = $tmp376;
        $l377:;
        ITable* $tmp379 = rawS$Iter372->$class->itable;
        while ($tmp379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp379 = $tmp379->next;
        }
        $fn381 $tmp380 = $tmp379->methods[0];
        panda$core$Bit $tmp382 = $tmp380(rawS$Iter372);
        panda$core$Bit $tmp383 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp382);
        if (!$tmp383.value) goto $l378;
        {
            ITable* $tmp385 = rawS$Iter372->$class->itable;
            while ($tmp385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp385 = $tmp385->next;
            }
            $fn387 $tmp386 = $tmp385->methods[1];
            panda$core$Object* $tmp388 = $tmp386(rawS$Iter372);
            rawS384 = ((org$pandalanguage$pandac$Type*) $tmp388);
            org$pandalanguage$pandac$Type* $tmp390 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS384, ((panda$core$Bit) { false }));
            s389 = $tmp390;
            if (((panda$core$Bit) { s389 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp392 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s389);
                sClass391 = $tmp392;
                if (((panda$core$Bit) { sClass391 != NULL }).value) {
                {
                    panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass391->classKind, ((panda$core$Int64) { 5011 }));
                    if ($tmp393.value) {
                    {
                        panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind, ((panda$core$Int64) { 5012 }));
                        if ($tmp394.value) {
                        {
                            panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s395, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp396, &$s397);
                            panda$core$String* $tmp400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s399, ((org$pandalanguage$pandac$Symbol*) s389)->name);
                            panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp400, &$s401);
                            panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp398, $tmp402);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s389)->position, $tmp403);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s389;
                            panda$core$Int64 $tmp404 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp405 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp404, ((panda$core$Int64) { 0 }));
                            if ($tmp405.value) {
                            {
                                panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s406, ((panda$core$Object*) s389));
                                panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, &$s408);
                                panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp409, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp410, &$s411);
                                panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s389)->position, $tmp414);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s415, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp416, &$s417);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s389)->position, $tmp418);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass391->classKind, ((panda$core$Int64) { 5012 }));
                        PANDA_ASSERT($tmp419.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s389));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l377;
        $l378:;
    }
    bool $tmp420 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp420) goto $l421;
    panda$core$Bit $tmp423 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s422);
    $tmp420 = $tmp423.value;
    $l421:;
    panda$core$Bit $tmp424 = { $tmp420 };
    if ($tmp424.value) {
    {
        org$pandalanguage$pandac$Type* $tmp425 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp425;
    }
    }
    bool $tmp427 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp427) goto $l428;
    panda$core$Bit $tmp429 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp430 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp429);
    $tmp427 = $tmp430.value;
    $l428:;
    panda$core$Bit $tmp431 = { $tmp427 };
    bool $tmp426 = $tmp431.value;
    if (!$tmp426) goto $l432;
    panda$core$Bit $tmp434 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s433);
    $tmp426 = $tmp434.value;
    $l432:;
    panda$core$Bit $tmp435 = { $tmp426 };
    if ($tmp435.value) {
    {
        panda$core$Int64 $tmp436 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp437 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp436);
        p_cl->annotations->flags = $tmp437;
        {
            ITable* $tmp439 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp439->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp439 = $tmp439->next;
            }
            $fn441 $tmp440 = $tmp439->methods[0];
            panda$collections$Iterator* $tmp442 = $tmp440(((panda$collections$Iterable*) p_cl->methods));
            m$Iter438 = $tmp442;
            $l443:;
            ITable* $tmp445 = m$Iter438->$class->itable;
            while ($tmp445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp445 = $tmp445->next;
            }
            $fn447 $tmp446 = $tmp445->methods[0];
            panda$core$Bit $tmp448 = $tmp446(m$Iter438);
            panda$core$Bit $tmp449 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp448);
            if (!$tmp449.value) goto $l444;
            {
                ITable* $tmp451 = m$Iter438->$class->itable;
                while ($tmp451->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp451 = $tmp451->next;
                }
                $fn453 $tmp452 = $tmp451->methods[1];
                panda$core$Object* $tmp454 = $tmp452(m$Iter438);
                m450 = ((org$pandalanguage$pandac$MethodDecl*) $tmp454);
                panda$core$Int64 $tmp455 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp456 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m450->annotations->flags, $tmp455);
                m450->annotations->flags = $tmp456;
                panda$core$Bit $tmp457 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m450->annotations, m450->body);
                if ($tmp457.value) {
                {
                    panda$core$Int64 $tmp458 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp459 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m450->annotations->flags, $tmp458);
                    m450->annotations->flags = $tmp459;
                }
                }
            }
            goto $l443;
            $l444:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp460 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp460, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp462 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp462->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp462 = $tmp462->next;
        }
        $fn464 $tmp463 = $tmp462->methods[0];
        panda$collections$Iterator* $tmp465 = $tmp463(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter461 = $tmp465;
        $l466:;
        ITable* $tmp468 = intf$Iter461->$class->itable;
        while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp468 = $tmp468->next;
        }
        $fn470 $tmp469 = $tmp468->methods[0];
        panda$core$Bit $tmp471 = $tmp469(intf$Iter461);
        panda$core$Bit $tmp472 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp471);
        if (!$tmp472.value) goto $l467;
        {
            ITable* $tmp474 = intf$Iter461->$class->itable;
            while ($tmp474->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp474 = $tmp474->next;
            }
            $fn476 $tmp475 = $tmp474->methods[1];
            panda$core$Object* $tmp477 = $tmp475(intf$Iter461);
            intf473 = ((org$pandalanguage$pandac$Type*) $tmp477);
            org$pandalanguage$pandac$ClassDecl* $tmp478 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf473);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp478, intf473);
        }
        goto $l466;
        $l467:;
    }
    {
        ITable* $tmp480 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp480->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp480 = $tmp480->next;
        }
        $fn482 $tmp481 = $tmp480->methods[0];
        panda$collections$Iterator* $tmp483 = $tmp481(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter479 = $tmp483;
        $l484:;
        ITable* $tmp486 = p$Iter479->$class->itable;
        while ($tmp486->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp486 = $tmp486->next;
        }
        $fn488 $tmp487 = $tmp486->methods[0];
        panda$core$Bit $tmp489 = $tmp487(p$Iter479);
        panda$core$Bit $tmp490 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp489);
        if (!$tmp490.value) goto $l485;
        {
            ITable* $tmp492 = p$Iter479->$class->itable;
            while ($tmp492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp492 = $tmp492->next;
            }
            $fn494 $tmp493 = $tmp492->methods[1];
            panda$core$Object* $tmp495 = $tmp493(p$Iter479);
            p491 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp495);
            org$pandalanguage$pandac$ClassDecl* $tmp497 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p491->bound);
            cl496 = $tmp497;
            if (((panda$core$Bit) { cl496 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl496)->position, cl496, p491->bound);
            }
            }
        }
        goto $l484;
        $l485:;
    }
    self->symbolTable = old352;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old498;
    panda$collections$Iterator* p$Iter499;
    org$pandalanguage$pandac$MethodDecl$Parameter* p511;
    org$pandalanguage$pandac$MethodDecl* overridden518;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old498 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp500 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp500->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp500 = $tmp500->next;
        }
        $fn502 $tmp501 = $tmp500->methods[0];
        panda$collections$Iterator* $tmp503 = $tmp501(((panda$collections$Iterable*) p_m->parameters));
        p$Iter499 = $tmp503;
        $l504:;
        ITable* $tmp506 = p$Iter499->$class->itable;
        while ($tmp506->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp506 = $tmp506->next;
        }
        $fn508 $tmp507 = $tmp506->methods[0];
        panda$core$Bit $tmp509 = $tmp507(p$Iter499);
        panda$core$Bit $tmp510 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp509);
        if (!$tmp510.value) goto $l505;
        {
            ITable* $tmp512 = p$Iter499->$class->itable;
            while ($tmp512->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp512 = $tmp512->next;
            }
            $fn514 $tmp513 = $tmp512->methods[1];
            panda$core$Object* $tmp515 = $tmp513(p$Iter499);
            p511 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp515);
            org$pandalanguage$pandac$Type* $tmp516 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p511->type);
            p511->type = $tmp516;
        }
        goto $l504;
        $l505:;
    }
    org$pandalanguage$pandac$Type* $tmp517 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp517;
    p_m->resolved = ((panda$core$Bit) { true });
    org$pandalanguage$pandac$MethodDecl* $tmp519 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    overridden518 = $tmp519;
    if (((panda$core$Bit) { overridden518 != NULL }).value) {
    {
        panda$core$Bit $tmp520 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp521 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp520);
        if ($tmp521.value) {
        {
            panda$core$String* $tmp522 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp523 = panda$core$String$convert$R$panda$core$String($tmp522);
            panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp523, &$s524);
            panda$core$String* $tmp526 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden518);
            panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp525, $tmp526);
            panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, &$s528);
            panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp529, &$s530);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp531);
        }
        }
        panda$core$Bit $tmp533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 57 }));
        bool $tmp532 = $tmp533.value;
        if (!$tmp532) goto $l534;
        panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden518->methodKind, ((panda$core$Int64) { 58 }));
        $tmp532 = $tmp535.value;
        $l534:;
        panda$core$Bit $tmp536 = { $tmp532 };
        if ($tmp536.value) {
        {
            panda$core$String* $tmp537 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp538 = panda$core$String$convert$R$panda$core$String($tmp537);
            panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s539);
            panda$core$String* $tmp541 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden518);
            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, $tmp541);
            panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, &$s543);
            panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, &$s545);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp546);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp547 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    if ($tmp547.value) {
    {
        panda$core$String* $tmp548 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
        panda$core$String* $tmp549 = panda$core$String$convert$R$panda$core$String($tmp548);
        panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s550);
        panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, &$s552);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp553);
    }
    }
    }
    self->symbolTable = old498;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old554;
    org$pandalanguage$pandac$Type* resolved557;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old554 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp555 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp556 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp555);
    if ($tmp556.value) {
    {
        org$pandalanguage$pandac$Type* $tmp558 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved557 = $tmp558;
        if (((panda$core$Bit) { resolved557 != NULL }).value) {
        {
            p_f->type = resolved557;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp559 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp560 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp559, p_f->type);
                p_f->value = $tmp560;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old554;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s561);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old554;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp562 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp562;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old554;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp563 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp563;
    org$pandalanguage$pandac$IRNode* $tmp564 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp564;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old554;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$ListView* methods566;
    panda$collections$Array* args568;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp569;
    panda$collections$Array* best571;
    panda$core$Int64$nullable bestCost574;
    panda$collections$Iterator* m$Iter575;
    org$pandalanguage$pandac$MethodRef* m587;
    panda$core$Int64$nullable cost592;
    org$pandalanguage$pandac$IRNode* callTarget598;
    org$pandalanguage$pandac$IRNode* result604;
    panda$core$Bit $tmp565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1039 }));
    PANDA_ASSERT($tmp565.value);
    panda$core$Object* $tmp567 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    methods566 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp567)->payload);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp569, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$collections$Array* $tmp570 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp569);
    args568 = $tmp570;
    panda$collections$Array* $tmp572 = (panda$collections$Array*) malloc(40);
    $tmp572->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp572->refCount.value = 1;
    panda$collections$Array$init($tmp572);
    best571 = $tmp572;
    bestCost574 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp576 = ((panda$collections$Iterable*) methods566)->$class->itable;
        while ($tmp576->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp576 = $tmp576->next;
        }
        $fn578 $tmp577 = $tmp576->methods[0];
        panda$collections$Iterator* $tmp579 = $tmp577(((panda$collections$Iterable*) methods566));
        m$Iter575 = $tmp579;
        $l580:;
        ITable* $tmp582 = m$Iter575->$class->itable;
        while ($tmp582->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp582 = $tmp582->next;
        }
        $fn584 $tmp583 = $tmp582->methods[0];
        panda$core$Bit $tmp585 = $tmp583(m$Iter575);
        panda$core$Bit $tmp586 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp585);
        if (!$tmp586.value) goto $l581;
        {
            ITable* $tmp588 = m$Iter575->$class->itable;
            while ($tmp588->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp588 = $tmp588->next;
            }
            $fn590 $tmp589 = $tmp588->methods[1];
            panda$core$Object* $tmp591 = $tmp589(m$Iter575);
            m587 = ((org$pandalanguage$pandac$MethodRef*) $tmp591);
            panda$core$Int64$nullable $tmp593 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m587, ((panda$collections$ListView*) args568), p_target);
            cost592 = $tmp593;
            if (((panda$core$Bit) { !cost592.nonnull }).value) {
            {
                goto $l580;
            }
            }
            if (((panda$core$Bit) { !bestCost574.nonnull }).value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best571, ((panda$core$Object*) m587));
                bestCost574 = cost592;
                goto $l580;
            }
            }
            panda$core$Bit $tmp594 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost592.value), ((panda$core$Int64) bestCost574.value));
            if ($tmp594.value) {
            {
                panda$collections$Array$clear(best571);
                bestCost574 = cost592;
            }
            }
            panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost592.value), ((panda$core$Int64) bestCost574.value));
            if ($tmp595.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best571, ((panda$core$Object*) m587));
            }
            }
        }
        goto $l580;
        $l581:;
    }
    panda$core$Int64 $tmp596 = panda$collections$Array$get_count$R$panda$core$Int64(best571);
    panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp596, ((panda$core$Int64) { 1 }));
    if ($tmp597.value) {
    {
        panda$core$Object* $tmp599 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp600 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp599)->children);
        panda$core$Bit $tmp601 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp600, ((panda$core$Int64) { 0 }));
        if ($tmp601.value) {
        {
            panda$core$Object* $tmp602 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp603 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp602)->children, ((panda$core$Int64) { 0 }));
            callTarget598 = ((org$pandalanguage$pandac$IRNode*) $tmp603);
        }
        }
        else {
        {
            callTarget598 = NULL;
        }
        }
        panda$core$Object* $tmp605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best571, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp606 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget598, ((org$pandalanguage$pandac$MethodRef*) $tmp605), ((panda$collections$ListView*) args568));
        result604 = $tmp606;
        if (((panda$core$Bit) { p_target != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp607 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result604, p_target);
            result604 = $tmp607;
        }
        }
        return result604;
    }
    }
    panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s608, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_expr->position)));
    panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s610);
    ITable* $tmp612 = methods566->$class->itable;
    while ($tmp612->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp612 = $tmp612->next;
    }
    $fn614 $tmp613 = $tmp612->methods[0];
    panda$core$Object* $tmp615 = $tmp613(methods566, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp611, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp615)->value)->name);
    panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, &$s617);
    panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp618, ((panda$core$Object*) best571));
    panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, &$s620);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp621));
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s622);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp623 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp623;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s624);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp625 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp626 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp625);
            return $tmp626;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp627 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp627) goto $l628;
    panda$core$Bit $tmp630 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s629);
    $tmp627 = $tmp630.value;
    $l628:;
    panda$core$Bit $tmp631 = { $tmp627 };
    return $tmp631;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result632;
    org$pandalanguage$pandac$ClassDecl* s640;
    panda$collections$Iterator* f$Iter643;
    org$pandalanguage$pandac$FieldDecl* f655;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp633 = (panda$collections$Array*) malloc(40);
    $tmp633->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp633->refCount.value = 1;
    panda$collections$Array$init($tmp633);
    result632 = $tmp633;
    panda$core$Bit $tmp636 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp637 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp636);
    bool $tmp635 = $tmp637.value;
    if (!$tmp635) goto $l638;
    $tmp635 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l638:;
    panda$core$Bit $tmp639 = { $tmp635 };
    if ($tmp639.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp641 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s640 = $tmp641;
        if (((panda$core$Bit) { s640 != NULL }).value) {
        {
            panda$collections$ListView* $tmp642 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s640);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result632, ((panda$collections$CollectionView*) $tmp642));
        }
        }
    }
    }
    {
        ITable* $tmp644 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp644 = $tmp644->next;
        }
        $fn646 $tmp645 = $tmp644->methods[0];
        panda$collections$Iterator* $tmp647 = $tmp645(((panda$collections$Iterable*) p_cl->fields));
        f$Iter643 = $tmp647;
        $l648:;
        ITable* $tmp650 = f$Iter643->$class->itable;
        while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp650 = $tmp650->next;
        }
        $fn652 $tmp651 = $tmp650->methods[0];
        panda$core$Bit $tmp653 = $tmp651(f$Iter643);
        panda$core$Bit $tmp654 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp653);
        if (!$tmp654.value) goto $l649;
        {
            ITable* $tmp656 = f$Iter643->$class->itable;
            while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp656 = $tmp656->next;
            }
            $fn658 $tmp657 = $tmp656->methods[1];
            panda$core$Object* $tmp659 = $tmp657(f$Iter643);
            f655 = ((org$pandalanguage$pandac$FieldDecl*) $tmp659);
            panda$core$Bit $tmp660 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f655->annotations);
            panda$core$Bit $tmp661 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp660);
            if ($tmp661.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result632, ((panda$core$Object*) f655));
            }
            }
        }
        goto $l648;
        $l649:;
    }
    return ((panda$collections$ListView*) result632);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result662;
    panda$core$String* suffix664;
    panda$core$Bit found670;
    panda$collections$Iterator* dir$Iter671;
    panda$io$File* dir683;
    panda$io$File* f688;
    panda$core$Bit $tmp690;
    panda$core$String$Index$nullable index692;
    org$pandalanguage$pandac$ClassDecl* parent695;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp696;
    panda$core$Object* $tmp663 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result662 = ((org$pandalanguage$pandac$ClassDecl*) $tmp663);
    if (((panda$core$Bit) { result662 == NULL }).value) {
    {
        panda$core$String* $tmp667 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s665, &$s666);
        panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, &$s668);
        suffix664 = $tmp669;
        found670 = ((panda$core$Bit) { false });
        {
            ITable* $tmp672 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp672->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp672 = $tmp672->next;
            }
            $fn674 $tmp673 = $tmp672->methods[0];
            panda$collections$Iterator* $tmp675 = $tmp673(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter671 = $tmp675;
            $l676:;
            ITable* $tmp678 = dir$Iter671->$class->itable;
            while ($tmp678->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp678 = $tmp678->next;
            }
            $fn680 $tmp679 = $tmp678->methods[0];
            panda$core$Bit $tmp681 = $tmp679(dir$Iter671);
            panda$core$Bit $tmp682 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp681);
            if (!$tmp682.value) goto $l677;
            {
                ITable* $tmp684 = dir$Iter671->$class->itable;
                while ($tmp684->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp684 = $tmp684->next;
                }
                $fn686 $tmp685 = $tmp684->methods[1];
                panda$core$Object* $tmp687 = $tmp685(dir$Iter671);
                dir683 = ((panda$io$File*) $tmp687);
                panda$io$File* $tmp689 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir683, suffix664);
                f688 = $tmp689;
                panda$io$File$exists$R$panda$core$Bit(&$tmp690, f688);
                if ($tmp690.value) {
                {
                    found670 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f688);
                    panda$core$Object* $tmp691 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result662 = ((org$pandalanguage$pandac$ClassDecl*) $tmp691);
                }
                }
            }
            goto $l676;
            $l677:;
        }
    }
    }
    if (((panda$core$Bit) { result662 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp694 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s693);
        index692 = $tmp694;
        if (((panda$core$Bit) { index692.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp696, ((panda$core$String$Index$nullable) { .nonnull = false }), index692, ((panda$core$Bit) { false }));
            panda$core$String* $tmp697 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp696);
            org$pandalanguage$pandac$ClassDecl* $tmp698 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp697);
            parent695 = $tmp698;
            if (((panda$core$Bit) { parent695 != NULL }).value) {
            {
                panda$core$Object* $tmp699 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result662 = ((org$pandalanguage$pandac$ClassDecl*) $tmp699);
            }
            }
        }
        }
    }
    }
    return result662;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result700;
    panda$core$String* suffix702;
    panda$core$Bit found708;
    panda$collections$Iterator* dir$Iter709;
    panda$io$File* dir721;
    panda$io$File* f726;
    panda$core$Bit $tmp728;
    panda$core$Int64 oldErrorCount729;
    org$pandalanguage$pandac$Position $tmp735;
    panda$core$Object* $tmp701 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result700 = ((org$pandalanguage$pandac$ClassDecl*) $tmp701);
    if (((panda$core$Bit) { result700 == NULL }).value) {
    {
        panda$core$String* $tmp705 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s703, &$s704);
        panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp705, &$s706);
        suffix702 = $tmp707;
        found708 = ((panda$core$Bit) { false });
        {
            ITable* $tmp710 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp710->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp710 = $tmp710->next;
            }
            $fn712 $tmp711 = $tmp710->methods[0];
            panda$collections$Iterator* $tmp713 = $tmp711(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter709 = $tmp713;
            $l714:;
            ITable* $tmp716 = dir$Iter709->$class->itable;
            while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp716 = $tmp716->next;
            }
            $fn718 $tmp717 = $tmp716->methods[0];
            panda$core$Bit $tmp719 = $tmp717(dir$Iter709);
            panda$core$Bit $tmp720 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp719);
            if (!$tmp720.value) goto $l715;
            {
                ITable* $tmp722 = dir$Iter709->$class->itable;
                while ($tmp722->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp722 = $tmp722->next;
                }
                $fn724 $tmp723 = $tmp722->methods[1];
                panda$core$Object* $tmp725 = $tmp723(dir$Iter709);
                dir721 = ((panda$io$File*) $tmp725);
                panda$io$File* $tmp727 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir721, suffix702);
                f726 = $tmp727;
                panda$io$File$exists$R$panda$core$Bit(&$tmp728, f726);
                if ($tmp728.value) {
                {
                    found708 = ((panda$core$Bit) { true });
                    oldErrorCount729 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f726);
                    panda$core$Object* $tmp730 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result700 = ((org$pandalanguage$pandac$ClassDecl*) $tmp730);
                    bool $tmp731 = ((panda$core$Bit) { result700 == NULL }).value;
                    if (!$tmp731) goto $l732;
                    panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount729);
                    $tmp731 = $tmp733.value;
                    $l732:;
                    panda$core$Bit $tmp734 = { $tmp731 };
                    if ($tmp734.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp735, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s736, ((panda$core$Object*) f726));
                        panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp737, &$s738);
                        panda$core$String* $tmp740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, p_fullName);
                        panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp740, &$s741);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f726, $tmp735, $tmp742);
                    }
                    }
                }
                }
            }
            goto $l714;
            $l715:;
        }
        panda$core$Bit $tmp743 = panda$core$Bit$$NOT$R$panda$core$Bit(found708);
        if ($tmp743.value) {
        {
            panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s744, suffix702);
            panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, &$s746);
            panda$core$String* $tmp748 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp747, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp748, &$s749);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp750);
        }
        }
    }
    }
    return result700;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type754;
    org$pandalanguage$pandac$ClassDecl* result761;
    org$pandalanguage$pandac$Annotations* annotations763;
    panda$collections$Array* supertypes769;
    panda$collections$Iterator* intf$Iter773;
    org$pandalanguage$pandac$Type* intf785;
    panda$collections$HashMap* aliases791;
    panda$core$Range$LTpanda$core$Int64$GT $tmp794;
    panda$collections$Iterator* m$Iter829;
    org$pandalanguage$pandac$MethodDecl* m841;
    panda$collections$Array* parameters846;
    panda$collections$Iterator* p$Iter849;
    org$pandalanguage$pandac$MethodDecl$Parameter* p861;
    org$pandalanguage$pandac$MethodDecl* clone869;
    panda$collections$Iterator* f$Iter872;
    org$pandalanguage$pandac$FieldDecl* f884;
    org$pandalanguage$pandac$FieldDecl* clone889;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp752 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s751);
    panda$core$Bit $tmp753 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp752);
    PANDA_ASSERT($tmp753.value);
    org$pandalanguage$pandac$Type* $tmp755 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type754 = $tmp755;
    panda$core$Bit $tmp756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type754->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp756.value) {
    {
        panda$core$Object* $tmp757 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type754->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp758 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp757));
        return $tmp758;
    }
    }
    panda$core$Bit $tmp759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type754->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp759.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type754->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp760.value);
    panda$core$Object* $tmp762 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type754)->name));
    result761 = ((org$pandalanguage$pandac$ClassDecl*) $tmp762);
    if (((panda$core$Bit) { result761 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp764 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp764->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp764->refCount.value = 1;
        panda$core$Int64 $tmp766 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp767 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp766);
        panda$core$Int64 $tmp768 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp767);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp764, $tmp768);
        annotations763 = $tmp764;
        panda$collections$Array* $tmp770 = (panda$collections$Array*) malloc(40);
        $tmp770->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp770->refCount.value = 1;
        panda$collections$Array$init($tmp770);
        supertypes769 = $tmp770;
        org$pandalanguage$pandac$Type* $tmp772 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type754, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes769, ((panda$core$Object*) $tmp772));
        {
            ITable* $tmp774 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp774->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp774 = $tmp774->next;
            }
            $fn776 $tmp775 = $tmp774->methods[0];
            panda$collections$Iterator* $tmp777 = $tmp775(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter773 = $tmp777;
            $l778:;
            ITable* $tmp780 = intf$Iter773->$class->itable;
            while ($tmp780->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp780 = $tmp780->next;
            }
            $fn782 $tmp781 = $tmp780->methods[0];
            panda$core$Bit $tmp783 = $tmp781(intf$Iter773);
            panda$core$Bit $tmp784 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp783);
            if (!$tmp784.value) goto $l779;
            {
                ITable* $tmp786 = intf$Iter773->$class->itable;
                while ($tmp786->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp786 = $tmp786->next;
                }
                $fn788 $tmp787 = $tmp786->methods[1];
                panda$core$Object* $tmp789 = $tmp787(intf$Iter773);
                intf785 = ((org$pandalanguage$pandac$Type*) $tmp789);
                org$pandalanguage$pandac$Type* $tmp790 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type754, intf785);
                panda$collections$Array$add$panda$collections$Array$T(supertypes769, ((panda$core$Object*) $tmp790));
            }
            goto $l778;
            $l779:;
        }
        panda$collections$HashMap* $tmp792 = (panda$collections$HashMap*) malloc(56);
        $tmp792->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp792->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp792, p_cl->aliases);
        aliases791 = $tmp792;
        ITable* $tmp795 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp795->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp795 = $tmp795->next;
        }
        $fn797 $tmp796 = $tmp795->methods[0];
        panda$core$Int64 $tmp798 = $tmp796(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp794, ((panda$core$Int64) { 0 }), $tmp798, ((panda$core$Bit) { false }));
        int64_t $tmp800 = $tmp794.min.value;
        panda$core$Int64 i799 = { $tmp800 };
        int64_t $tmp802 = $tmp794.max.value;
        bool $tmp803 = $tmp794.inclusive.value;
        if ($tmp803) goto $l810; else goto $l811;
        $l810:;
        if ($tmp800 <= $tmp802) goto $l804; else goto $l806;
        $l811:;
        if ($tmp800 < $tmp802) goto $l804; else goto $l806;
        $l804:;
        {
            ITable* $tmp812 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp812->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp812 = $tmp812->next;
            }
            $fn814 $tmp813 = $tmp812->methods[0];
            panda$core$Object* $tmp815 = $tmp813(((panda$collections$ListView*) p_cl->parameters), i799);
            panda$core$Int64 $tmp816 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i799, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp817 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type754->subtypes, $tmp816);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases791, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp815))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp817))->name));
        }
        $l807:;
        int64_t $tmp819 = $tmp802 - i799.value;
        if ($tmp803) goto $l820; else goto $l821;
        $l820:;
        if ($tmp819 >= 1) goto $l818; else goto $l806;
        $l821:;
        if ($tmp819 > 1) goto $l818; else goto $l806;
        $l818:;
        i799.value += 1;
        goto $l804;
        $l806:;
        org$pandalanguage$pandac$ClassDecl* $tmp824 = (org$pandalanguage$pandac$ClassDecl*) malloc(185);
        $tmp824->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp824->refCount.value = 1;
        panda$collections$Array* $tmp826 = (panda$collections$Array*) malloc(40);
        $tmp826->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp826->refCount.value = 1;
        panda$collections$Array$init($tmp826);
        panda$core$Object* $tmp828 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp824, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases791), p_cl->doccomment, annotations763, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type754)->name, ((panda$collections$ListView*) supertypes769), $tmp826, ((org$pandalanguage$pandac$SymbolTable*) $tmp828));
        result761 = $tmp824;
        result761->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp830 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp830->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp830 = $tmp830->next;
            }
            $fn832 $tmp831 = $tmp830->methods[0];
            panda$collections$Iterator* $tmp833 = $tmp831(((panda$collections$Iterable*) p_cl->methods));
            m$Iter829 = $tmp833;
            $l834:;
            ITable* $tmp836 = m$Iter829->$class->itable;
            while ($tmp836->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp836 = $tmp836->next;
            }
            $fn838 $tmp837 = $tmp836->methods[0];
            panda$core$Bit $tmp839 = $tmp837(m$Iter829);
            panda$core$Bit $tmp840 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp839);
            if (!$tmp840.value) goto $l835;
            {
                ITable* $tmp842 = m$Iter829->$class->itable;
                while ($tmp842->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp842 = $tmp842->next;
                }
                $fn844 $tmp843 = $tmp842->methods[1];
                panda$core$Object* $tmp845 = $tmp843(m$Iter829);
                m841 = ((org$pandalanguage$pandac$MethodDecl*) $tmp845);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m841);
                panda$collections$Array* $tmp847 = (panda$collections$Array*) malloc(40);
                $tmp847->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp847->refCount.value = 1;
                panda$collections$Array$init($tmp847);
                parameters846 = $tmp847;
                {
                    ITable* $tmp850 = ((panda$collections$Iterable*) m841->parameters)->$class->itable;
                    while ($tmp850->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp850 = $tmp850->next;
                    }
                    $fn852 $tmp851 = $tmp850->methods[0];
                    panda$collections$Iterator* $tmp853 = $tmp851(((panda$collections$Iterable*) m841->parameters));
                    p$Iter849 = $tmp853;
                    $l854:;
                    ITable* $tmp856 = p$Iter849->$class->itable;
                    while ($tmp856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp856 = $tmp856->next;
                    }
                    $fn858 $tmp857 = $tmp856->methods[0];
                    panda$core$Bit $tmp859 = $tmp857(p$Iter849);
                    panda$core$Bit $tmp860 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp859);
                    if (!$tmp860.value) goto $l855;
                    {
                        ITable* $tmp862 = p$Iter849->$class->itable;
                        while ($tmp862->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp862 = $tmp862->next;
                        }
                        $fn864 $tmp863 = $tmp862->methods[1];
                        panda$core$Object* $tmp865 = $tmp863(p$Iter849);
                        p861 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp865);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp866 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp866->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp866->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp868 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type754, p861->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp866, p861->name, $tmp868);
                        panda$collections$Array$add$panda$collections$Array$T(parameters846, ((panda$core$Object*) $tmp866));
                    }
                    goto $l854;
                    $l855:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp870 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
                $tmp870->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp870->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp870, result761, ((org$pandalanguage$pandac$Symbol*) m841)->position, m841->doccomment, m841->annotations, m841->methodKind, ((org$pandalanguage$pandac$Symbol*) m841)->name, parameters846, m841->returnType, m841->body);
                clone869 = $tmp870;
                panda$collections$Array$add$panda$collections$Array$T(result761->methods, ((panda$core$Object*) clone869));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result761->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone869));
            }
            goto $l834;
            $l835:;
        }
        {
            ITable* $tmp873 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp873->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp873 = $tmp873->next;
            }
            $fn875 $tmp874 = $tmp873->methods[0];
            panda$collections$Iterator* $tmp876 = $tmp874(((panda$collections$Iterable*) p_cl->fields));
            f$Iter872 = $tmp876;
            $l877:;
            ITable* $tmp879 = f$Iter872->$class->itable;
            while ($tmp879->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp879 = $tmp879->next;
            }
            $fn881 $tmp880 = $tmp879->methods[0];
            panda$core$Bit $tmp882 = $tmp880(f$Iter872);
            panda$core$Bit $tmp883 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp882);
            if (!$tmp883.value) goto $l878;
            {
                ITable* $tmp885 = f$Iter872->$class->itable;
                while ($tmp885->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp885 = $tmp885->next;
                }
                $fn887 $tmp886 = $tmp885->methods[1];
                panda$core$Object* $tmp888 = $tmp886(f$Iter872);
                f884 = ((org$pandalanguage$pandac$FieldDecl*) $tmp888);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f884);
                org$pandalanguage$pandac$FieldDecl* $tmp890 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp890->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp890->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp892 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type754, f884->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp890, result761, ((org$pandalanguage$pandac$Symbol*) f884)->position, f884->doccomment, f884->annotations, f884->fieldKind, ((org$pandalanguage$pandac$Symbol*) f884)->name, $tmp892, f884->rawValue);
                clone889 = $tmp890;
                panda$collections$Array$add$panda$collections$Array$T(result761->fields, ((panda$core$Object*) clone889));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result761->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone889));
            }
            goto $l877;
            $l878:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result761)->name), ((panda$core$Object*) result761));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result761));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result761;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result893;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp894 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result893 = $tmp894;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp895 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp896 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp895));
            result893 = $tmp896;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp897 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp897;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp898 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result893->annotations);
    if ($tmp898.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp899 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result893, p_type);
        result893 = $tmp899;
    }
    }
    return result893;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl900;
    panda$collections$Set* result902;
    panda$collections$Iterator* intf$Iter907;
    org$pandalanguage$pandac$Type* intf919;
    org$pandalanguage$pandac$ClassDecl* $tmp901 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl900 = $tmp901;
    PANDA_ASSERT(((panda$core$Bit) { cl900 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl900);
    panda$collections$Set* $tmp903 = (panda$collections$Set*) malloc(24);
    $tmp903->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp903->refCount.value = 1;
    panda$collections$Set$init($tmp903);
    result902 = $tmp903;
    if (((panda$core$Bit) { cl900->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp905 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl900->rawSuper);
        panda$collections$Set* $tmp906 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp905);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result902, ((panda$collections$CollectionView*) $tmp906));
    }
    }
    {
        ITable* $tmp908 = ((panda$collections$Iterable*) cl900->rawInterfaces)->$class->itable;
        while ($tmp908->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp908 = $tmp908->next;
        }
        $fn910 $tmp909 = $tmp908->methods[0];
        panda$collections$Iterator* $tmp911 = $tmp909(((panda$collections$Iterable*) cl900->rawInterfaces));
        intf$Iter907 = $tmp911;
        $l912:;
        ITable* $tmp914 = intf$Iter907->$class->itable;
        while ($tmp914->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp914 = $tmp914->next;
        }
        $fn916 $tmp915 = $tmp914->methods[0];
        panda$core$Bit $tmp917 = $tmp915(intf$Iter907);
        panda$core$Bit $tmp918 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp917);
        if (!$tmp918.value) goto $l913;
        {
            ITable* $tmp920 = intf$Iter907->$class->itable;
            while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp920 = $tmp920->next;
            }
            $fn922 $tmp921 = $tmp920->methods[1];
            panda$core$Object* $tmp923 = $tmp921(intf$Iter907);
            intf919 = ((org$pandalanguage$pandac$Type*) $tmp923);
            org$pandalanguage$pandac$Type* $tmp924 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf919);
            panda$collections$Set* $tmp925 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp924);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result902, ((panda$collections$CollectionView*) $tmp925));
        }
        goto $l912;
        $l913:;
    }
    panda$core$Bit $tmp926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl900->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp926.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result902, ((panda$collections$Key*) p_t));
    }
    }
    return result902;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp932;
    panda$core$Bit $tmp927 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp927.value);
    panda$core$Bit $tmp928 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp928.value);
    panda$core$Int64 $tmp929 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp930 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp931 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp929, $tmp930);
    if ($tmp931.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp933 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp932, ((panda$core$Int64) { 0 }), $tmp933, ((panda$core$Bit) { false }));
    int64_t $tmp935 = $tmp932.min.value;
    panda$core$Int64 i934 = { $tmp935 };
    int64_t $tmp937 = $tmp932.max.value;
    bool $tmp938 = $tmp932.inclusive.value;
    if ($tmp938) goto $l945; else goto $l946;
    $l945:;
    if ($tmp935 <= $tmp937) goto $l939; else goto $l941;
    $l946:;
    if ($tmp935 < $tmp937) goto $l939; else goto $l941;
    $l939:;
    {
        panda$core$Object* $tmp947 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i934);
        panda$core$Object* $tmp948 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i934);
        panda$core$Bit $tmp949 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp947), ((org$pandalanguage$pandac$Type*) $tmp948));
        if ($tmp949.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l942:;
    int64_t $tmp951 = $tmp937 - i934.value;
    if ($tmp938) goto $l952; else goto $l953;
    $l952:;
    if ($tmp951 >= 1) goto $l950; else goto $l941;
    $l953:;
    if ($tmp951 > 1) goto $l950; else goto $l941;
    $l950:;
    i934.value += 1;
    goto $l939;
    $l941:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl956;
    panda$collections$Iterator* test$Iter958;
    org$pandalanguage$pandac$MethodDecl* test970;
    panda$collections$Iterator* raw$Iter983;
    org$pandalanguage$pandac$Type* raw995;
    org$pandalanguage$pandac$MethodDecl* result1000;
    org$pandalanguage$pandac$ClassDecl* $tmp957 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl956 = $tmp957;
    PANDA_ASSERT(((panda$core$Bit) { cl956 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl956);
    {
        ITable* $tmp959 = ((panda$collections$Iterable*) cl956->methods)->$class->itable;
        while ($tmp959->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp959 = $tmp959->next;
        }
        $fn961 $tmp960 = $tmp959->methods[0];
        panda$collections$Iterator* $tmp962 = $tmp960(((panda$collections$Iterable*) cl956->methods));
        test$Iter958 = $tmp962;
        $l963:;
        ITable* $tmp965 = test$Iter958->$class->itable;
        while ($tmp965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp965 = $tmp965->next;
        }
        $fn967 $tmp966 = $tmp965->methods[0];
        panda$core$Bit $tmp968 = $tmp966(test$Iter958);
        panda$core$Bit $tmp969 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp968);
        if (!$tmp969.value) goto $l964;
        {
            ITable* $tmp971 = test$Iter958->$class->itable;
            while ($tmp971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp971 = $tmp971->next;
            }
            $fn973 $tmp972 = $tmp971->methods[1];
            panda$core$Object* $tmp974 = $tmp972(test$Iter958);
            test970 = ((org$pandalanguage$pandac$MethodDecl*) $tmp974);
            panda$core$Bit $tmp975 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test970)->name, p_name);
            if ($tmp975.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test970);
                org$pandalanguage$pandac$Type* $tmp976 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test970);
                org$pandalanguage$pandac$Type* $tmp977 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp976);
                panda$core$Bit $tmp978 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp977, p_methodType);
                if ($tmp978.value) {
                {
                    return test970;
                }
                }
            }
            }
        }
        goto $l963;
        $l964:;
    }
    bool $tmp979 = p_checkInterfaces.value;
    if ($tmp979) goto $l980;
    panda$core$Bit $tmp981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl956->classKind, ((panda$core$Int64) { 5012 }));
    $tmp979 = $tmp981.value;
    $l980:;
    panda$core$Bit $tmp982 = { $tmp979 };
    if ($tmp982.value) {
    {
        {
            ITable* $tmp984 = ((panda$collections$Iterable*) cl956->rawInterfaces)->$class->itable;
            while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp984 = $tmp984->next;
            }
            $fn986 $tmp985 = $tmp984->methods[0];
            panda$collections$Iterator* $tmp987 = $tmp985(((panda$collections$Iterable*) cl956->rawInterfaces));
            raw$Iter983 = $tmp987;
            $l988:;
            ITable* $tmp990 = raw$Iter983->$class->itable;
            while ($tmp990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp990 = $tmp990->next;
            }
            $fn992 $tmp991 = $tmp990->methods[0];
            panda$core$Bit $tmp993 = $tmp991(raw$Iter983);
            panda$core$Bit $tmp994 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp993);
            if (!$tmp994.value) goto $l989;
            {
                ITable* $tmp996 = raw$Iter983->$class->itable;
                while ($tmp996->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp996 = $tmp996->next;
                }
                $fn998 $tmp997 = $tmp996->methods[1];
                panda$core$Object* $tmp999 = $tmp997(raw$Iter983);
                raw995 = ((org$pandalanguage$pandac$Type*) $tmp999);
                org$pandalanguage$pandac$Type* $tmp1001 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw995);
                org$pandalanguage$pandac$MethodDecl* $tmp1002 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1001, p_name, p_methodType, p_checkInterfaces);
                result1000 = $tmp1002;
                if (((panda$core$Bit) { result1000 != NULL }).value) {
                {
                    return result1000;
                }
                }
            }
            goto $l988;
            $l989:;
        }
    }
    }
    if (((panda$core$Bit) { cl956->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1003 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl956->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1004 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1003, p_name, p_methodType, p_checkInterfaces);
        return $tmp1004;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1006;
    org$pandalanguage$pandac$Type* owner1008;
    panda$collections$Iterator* raw$Iter1010;
    org$pandalanguage$pandac$Type* raw1022;
    org$pandalanguage$pandac$MethodDecl* result1027;
    panda$core$Bit $tmp1005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1005.value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1007 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1006 = $tmp1007;
    org$pandalanguage$pandac$Type* $tmp1009 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1008 = $tmp1009;
    {
        ITable* $tmp1011 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1011->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1011 = $tmp1011->next;
        }
        $fn1013 $tmp1012 = $tmp1011->methods[0];
        panda$collections$Iterator* $tmp1014 = $tmp1012(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1010 = $tmp1014;
        $l1015:;
        ITable* $tmp1017 = raw$Iter1010->$class->itable;
        while ($tmp1017->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1017 = $tmp1017->next;
        }
        $fn1019 $tmp1018 = $tmp1017->methods[0];
        panda$core$Bit $tmp1020 = $tmp1018(raw$Iter1010);
        panda$core$Bit $tmp1021 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1020);
        if (!$tmp1021.value) goto $l1016;
        {
            ITable* $tmp1023 = raw$Iter1010->$class->itable;
            while ($tmp1023->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1023 = $tmp1023->next;
            }
            $fn1025 $tmp1024 = $tmp1023->methods[1];
            panda$core$Object* $tmp1026 = $tmp1024(raw$Iter1010);
            raw1022 = ((org$pandalanguage$pandac$Type*) $tmp1026);
            org$pandalanguage$pandac$Type* $tmp1028 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1008, raw1022);
            org$pandalanguage$pandac$MethodDecl* $tmp1029 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1028, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1006, ((panda$core$Bit) { true }));
            result1027 = $tmp1029;
            if (((panda$core$Bit) { result1027 != NULL }).value) {
            {
                return result1027;
            }
            }
        }
        goto $l1015;
        $l1016:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1030 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1008, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1031 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1030, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1006, ((panda$core$Bit) { true }));
        return $tmp1031;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1032;
    panda$collections$Array* result1034;
    panda$collections$Iterator* m$Iter1037;
    org$pandalanguage$pandac$MethodDecl* m1049;
    org$pandalanguage$pandac$MethodDecl* found1054;
    org$pandalanguage$pandac$ClassDecl* $tmp1033 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1032 = $tmp1033;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1032 != NULL }).value);
    panda$collections$Array* $tmp1035 = (panda$collections$Array*) malloc(40);
    $tmp1035->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1035->refCount.value = 1;
    panda$collections$Array$init($tmp1035);
    result1034 = $tmp1035;
    {
        ITable* $tmp1038 = ((panda$collections$Iterable*) intfClass1032->methods)->$class->itable;
        while ($tmp1038->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1038 = $tmp1038->next;
        }
        $fn1040 $tmp1039 = $tmp1038->methods[0];
        panda$collections$Iterator* $tmp1041 = $tmp1039(((panda$collections$Iterable*) intfClass1032->methods));
        m$Iter1037 = $tmp1041;
        $l1042:;
        ITable* $tmp1044 = m$Iter1037->$class->itable;
        while ($tmp1044->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1044 = $tmp1044->next;
        }
        $fn1046 $tmp1045 = $tmp1044->methods[0];
        panda$core$Bit $tmp1047 = $tmp1045(m$Iter1037);
        panda$core$Bit $tmp1048 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1047);
        if (!$tmp1048.value) goto $l1043;
        {
            ITable* $tmp1050 = m$Iter1037->$class->itable;
            while ($tmp1050->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1050 = $tmp1050->next;
            }
            $fn1052 $tmp1051 = $tmp1050->methods[1];
            panda$core$Object* $tmp1053 = $tmp1051(m$Iter1037);
            m1049 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1053);
            org$pandalanguage$pandac$Type* $tmp1055 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1056 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1049);
            org$pandalanguage$pandac$Type* $tmp1057 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1056);
            org$pandalanguage$pandac$MethodDecl* $tmp1058 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1055, ((org$pandalanguage$pandac$Symbol*) m1049)->name, $tmp1057, ((panda$core$Bit) { false }));
            found1054 = $tmp1058;
            PANDA_ASSERT(((panda$core$Bit) { found1054 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1034, ((panda$core$Object*) found1054));
        }
        goto $l1042;
        $l1043:;
    }
    return ((panda$collections$ListView*) result1034);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1060;
    panda$collections$Iterator* rawIntf$Iter1063;
    org$pandalanguage$pandac$Type* rawIntf1075;
    org$pandalanguage$pandac$ClassDecl* intf1080;
    panda$core$Bit $tmp1059 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1059.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1061 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1060 = $tmp1061;
            if (((panda$core$Bit) { superCl1060 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1062 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1060);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1062));
            }
            }
        }
        }
        {
            ITable* $tmp1064 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1064->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1064 = $tmp1064->next;
            }
            $fn1066 $tmp1065 = $tmp1064->methods[0];
            panda$collections$Iterator* $tmp1067 = $tmp1065(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1063 = $tmp1067;
            $l1068:;
            ITable* $tmp1070 = rawIntf$Iter1063->$class->itable;
            while ($tmp1070->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1070 = $tmp1070->next;
            }
            $fn1072 $tmp1071 = $tmp1070->methods[0];
            panda$core$Bit $tmp1073 = $tmp1071(rawIntf$Iter1063);
            panda$core$Bit $tmp1074 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1073);
            if (!$tmp1074.value) goto $l1069;
            {
                ITable* $tmp1076 = rawIntf$Iter1063->$class->itable;
                while ($tmp1076->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1076 = $tmp1076->next;
                }
                $fn1078 $tmp1077 = $tmp1076->methods[1];
                panda$core$Object* $tmp1079 = $tmp1077(rawIntf$Iter1063);
                rawIntf1075 = ((org$pandalanguage$pandac$Type*) $tmp1079);
                org$pandalanguage$pandac$ClassDecl* $tmp1081 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1075);
                intf1080 = $tmp1081;
                if (((panda$core$Bit) { intf1080 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1082 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1080);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1082));
                }
                }
            }
            goto $l1068;
            $l1069:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1085;
    panda$collections$Iterator* derived$Iter1088;
    org$pandalanguage$pandac$MethodDecl* derived1100;
    panda$core$Bit found1110;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1111;
    org$pandalanguage$pandac$MethodDecl* base1126;
    panda$core$Int64 $tmp1083 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1083, ((panda$core$Int64) { 0 }));
    if ($tmp1084.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1086 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1085 = $tmp1086;
            if (((panda$core$Bit) { superCl1085 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1087 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1085);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1087));
        }
        }
        {
            ITable* $tmp1089 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1089->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1089 = $tmp1089->next;
            }
            $fn1091 $tmp1090 = $tmp1089->methods[0];
            panda$collections$Iterator* $tmp1092 = $tmp1090(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1088 = $tmp1092;
            $l1093:;
            ITable* $tmp1095 = derived$Iter1088->$class->itable;
            while ($tmp1095->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1095 = $tmp1095->next;
            }
            $fn1097 $tmp1096 = $tmp1095->methods[0];
            panda$core$Bit $tmp1098 = $tmp1096(derived$Iter1088);
            panda$core$Bit $tmp1099 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1098);
            if (!$tmp1099.value) goto $l1094;
            {
                ITable* $tmp1101 = derived$Iter1088->$class->itable;
                while ($tmp1101->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1101 = $tmp1101->next;
                }
                $fn1103 $tmp1102 = $tmp1101->methods[1];
                panda$core$Object* $tmp1104 = $tmp1102(derived$Iter1088);
                derived1100 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1104);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1100);
                panda$core$Bit $tmp1106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1100->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1105 = $tmp1106.value;
                if ($tmp1105) goto $l1107;
                panda$core$Bit $tmp1108 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1100->annotations);
                $tmp1105 = $tmp1108.value;
                $l1107:;
                panda$core$Bit $tmp1109 = { $tmp1105 };
                if ($tmp1109.value) {
                {
                    goto $l1093;
                }
                }
                found1110 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1112 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1111, ((panda$core$Int64) { 0 }), $tmp1112, ((panda$core$Bit) { false }));
                int64_t $tmp1114 = $tmp1111.min.value;
                panda$core$Int64 i1113 = { $tmp1114 };
                int64_t $tmp1116 = $tmp1111.max.value;
                bool $tmp1117 = $tmp1111.inclusive.value;
                if ($tmp1117) goto $l1124; else goto $l1125;
                $l1124:;
                if ($tmp1114 <= $tmp1116) goto $l1118; else goto $l1120;
                $l1125:;
                if ($tmp1114 < $tmp1116) goto $l1118; else goto $l1120;
                $l1118:;
                {
                    panda$core$Object* $tmp1127 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1113);
                    base1126 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1127);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1126);
                    panda$core$Bit $tmp1128 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1100, base1126);
                    if ($tmp1128.value) {
                    {
                        found1110 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1113, ((panda$core$Object*) derived1100));
                        goto $l1120;
                    }
                    }
                }
                $l1121:;
                int64_t $tmp1130 = $tmp1116 - i1113.value;
                if ($tmp1117) goto $l1131; else goto $l1132;
                $l1131:;
                if ($tmp1130 >= 1) goto $l1129; else goto $l1120;
                $l1132:;
                if ($tmp1130 > 1) goto $l1129; else goto $l1120;
                $l1129:;
                i1113.value += 1;
                goto $l1118;
                $l1120:;
                panda$core$Bit $tmp1135 = panda$core$Bit$$NOT$R$panda$core$Bit(found1110);
                if ($tmp1135.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1100));
                }
                }
            }
            goto $l1093;
            $l1094:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1136;
    org$pandalanguage$pandac$Symbol* s1139;
    panda$collections$Iterator* m$Iter1145;
    org$pandalanguage$pandac$MethodDecl* m1157;
    panda$collections$Iterator* p$Iter1164;
    org$pandalanguage$pandac$SymbolTable* p1176;
    panda$collections$Array* children1181;
    panda$collections$Array* types1193;
    panda$collections$Iterator* m$Iter1196;
    org$pandalanguage$pandac$MethodRef* m1208;
    panda$collections$Array* $tmp1137 = (panda$collections$Array*) malloc(40);
    $tmp1137->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1137->refCount.value = 1;
    panda$collections$Array$init($tmp1137);
    methods1136 = $tmp1137;
    org$pandalanguage$pandac$Symbol* $tmp1140 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1139 = $tmp1140;
    PANDA_ASSERT(((panda$core$Bit) { s1139 != NULL }).value);
    panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1139->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1141.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1139));
        org$pandalanguage$pandac$MethodRef* $tmp1142 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1142->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1142->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1142, ((org$pandalanguage$pandac$MethodDecl*) s1139), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1136, ((panda$core$Object*) $tmp1142));
    }
    }
    else {
    {
        panda$core$Bit $tmp1144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1139->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1144.value);
        {
            ITable* $tmp1146 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1139)->methods)->$class->itable;
            while ($tmp1146->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1146 = $tmp1146->next;
            }
            $fn1148 $tmp1147 = $tmp1146->methods[0];
            panda$collections$Iterator* $tmp1149 = $tmp1147(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1139)->methods));
            m$Iter1145 = $tmp1149;
            $l1150:;
            ITable* $tmp1152 = m$Iter1145->$class->itable;
            while ($tmp1152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1152 = $tmp1152->next;
            }
            $fn1154 $tmp1153 = $tmp1152->methods[0];
            panda$core$Bit $tmp1155 = $tmp1153(m$Iter1145);
            panda$core$Bit $tmp1156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1155);
            if (!$tmp1156.value) goto $l1151;
            {
                ITable* $tmp1158 = m$Iter1145->$class->itable;
                while ($tmp1158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1158 = $tmp1158->next;
                }
                $fn1160 $tmp1159 = $tmp1158->methods[1];
                panda$core$Object* $tmp1161 = $tmp1159(m$Iter1145);
                m1157 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1161);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1157);
                org$pandalanguage$pandac$MethodRef* $tmp1162 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1162->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1162->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1162, m1157, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1136, ((panda$core$Object*) $tmp1162));
            }
            goto $l1150;
            $l1151:;
        }
    }
    }
    {
        ITable* $tmp1165 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1165->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1165 = $tmp1165->next;
        }
        $fn1167 $tmp1166 = $tmp1165->methods[0];
        panda$collections$Iterator* $tmp1168 = $tmp1166(((panda$collections$Iterable*) p_st->parents));
        p$Iter1164 = $tmp1168;
        $l1169:;
        ITable* $tmp1171 = p$Iter1164->$class->itable;
        while ($tmp1171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1171 = $tmp1171->next;
        }
        $fn1173 $tmp1172 = $tmp1171->methods[0];
        panda$core$Bit $tmp1174 = $tmp1172(p$Iter1164);
        panda$core$Bit $tmp1175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1174);
        if (!$tmp1175.value) goto $l1170;
        {
            ITable* $tmp1177 = p$Iter1164->$class->itable;
            while ($tmp1177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1177 = $tmp1177->next;
            }
            $fn1179 $tmp1178 = $tmp1177->methods[1];
            panda$core$Object* $tmp1180 = $tmp1178(p$Iter1164);
            p1176 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1180);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1176, p_name, methods1136, p_types);
        }
        goto $l1169;
        $l1170:;
    }
    panda$collections$Array* $tmp1182 = (panda$collections$Array*) malloc(40);
    $tmp1182->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1182->refCount.value = 1;
    panda$collections$Array$init($tmp1182);
    children1181 = $tmp1182;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1181, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1184 = panda$collections$Array$get_count$R$panda$core$Int64(methods1136);
    panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1184, ((panda$core$Int64) { 1 }));
    if ($tmp1185.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1186 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1186->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1186->refCount.value = 1;
        panda$core$Object* $tmp1188 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1136, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1189 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1188));
        panda$core$Object* $tmp1190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1136, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1186, ((panda$core$Int64) { 1002 }), p_position, $tmp1189, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1190)), ((panda$collections$ListView*) children1181));
        return $tmp1186;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1191 = panda$collections$Array$get_count$R$panda$core$Int64(methods1136);
        panda$core$Bit $tmp1192 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1191, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1192.value);
        panda$collections$Array* $tmp1194 = (panda$collections$Array*) malloc(40);
        $tmp1194->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1194->refCount.value = 1;
        panda$collections$Array$init($tmp1194);
        types1193 = $tmp1194;
        {
            ITable* $tmp1197 = ((panda$collections$Iterable*) methods1136)->$class->itable;
            while ($tmp1197->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1197 = $tmp1197->next;
            }
            $fn1199 $tmp1198 = $tmp1197->methods[0];
            panda$collections$Iterator* $tmp1200 = $tmp1198(((panda$collections$Iterable*) methods1136));
            m$Iter1196 = $tmp1200;
            $l1201:;
            ITable* $tmp1203 = m$Iter1196->$class->itable;
            while ($tmp1203->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1203 = $tmp1203->next;
            }
            $fn1205 $tmp1204 = $tmp1203->methods[0];
            panda$core$Bit $tmp1206 = $tmp1204(m$Iter1196);
            panda$core$Bit $tmp1207 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1206);
            if (!$tmp1207.value) goto $l1202;
            {
                ITable* $tmp1209 = m$Iter1196->$class->itable;
                while ($tmp1209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1209 = $tmp1209->next;
                }
                $fn1211 $tmp1210 = $tmp1209->methods[1];
                panda$core$Object* $tmp1212 = $tmp1210(m$Iter1196);
                m1208 = ((org$pandalanguage$pandac$MethodRef*) $tmp1212);
                org$pandalanguage$pandac$Type* $tmp1213 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1208);
                panda$collections$Array$add$panda$collections$Array$T(types1193, ((panda$core$Object*) $tmp1213));
            }
            goto $l1201;
            $l1202:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1214 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1214->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1214->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1216 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1216->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1216->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1216, ((panda$collections$ListView*) types1193));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1214, ((panda$core$Int64) { 1003 }), p_position, $tmp1216, ((panda$core$Object*) methods1136), ((panda$collections$ListView*) children1181));
        return $tmp1214;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1218;
    org$pandalanguage$pandac$FieldDecl* f1234;
    panda$collections$Array* children1237;
    org$pandalanguage$pandac$Type* effectiveType1242;
    org$pandalanguage$pandac$IRNode* result1247;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1219 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1218 = $tmp1219;
            if (((panda$core$Bit) { cl1218 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1220 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1218);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1218, $tmp1220);
                org$pandalanguage$pandac$IRNode* $tmp1221 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1221->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1221->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1223 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1224 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1218);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1221, ((panda$core$Int64) { 1001 }), p_position, $tmp1223, $tmp1224);
                return $tmp1221;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1225 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1225);
            org$pandalanguage$pandac$IRNode* $tmp1226 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1226->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1226->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1228 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1229 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1226, ((panda$core$Int64) { 1001 }), p_position, $tmp1228, $tmp1229);
            return $tmp1226;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1230 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1231 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1230);
            return $tmp1231;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1232 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1232->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1232->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1232, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1232;
        }
        break;
        case 202:
        {
            f1234 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1234);
            org$pandalanguage$pandac$Type* $tmp1235 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1236 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1234->type, $tmp1235);
            if ($tmp1236.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1238 = (panda$collections$Array*) malloc(40);
            $tmp1238->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1238->refCount.value = 1;
            panda$collections$Array$init($tmp1238);
            children1237 = $tmp1238;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1240.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1241);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1243 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1234->type);
                effectiveType1242 = $tmp1243;
                panda$core$Bit $tmp1244 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1234->annotations);
                if ($tmp1244.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1237, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1245 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1234->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1246 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1245);
                    panda$collections$Array$add$panda$collections$Array$T(children1237, ((panda$core$Object*) $tmp1246));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1248 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1248->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1248->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1248, ((panda$core$Int64) { 1026 }), p_position, f1234->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1237));
                result1247 = $tmp1248;
                panda$core$Bit $tmp1250 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1242, result1247->type);
                if ($tmp1250.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1251 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1247, p_position, ((panda$core$Bit) { false }), effectiveType1242);
                    result1247 = $tmp1251;
                }
                }
                return result1247;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1252 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1252->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1252->refCount.value = 1;
                panda$core$Object* $tmp1254 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1255 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1254));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1252, ((panda$core$Int64) { 1025 }), p_position, $tmp1255);
                panda$collections$Array$add$panda$collections$Array$T(children1237, ((panda$core$Object*) $tmp1252));
                org$pandalanguage$pandac$IRNode* $tmp1256 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1256->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1256->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1256, ((panda$core$Int64) { 1026 }), p_position, f1234->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1237));
                return $tmp1256;
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
    panda$collections$HashMap* typeMap1264;
    org$pandalanguage$pandac$Type* base1267;
    org$pandalanguage$pandac$ClassDecl* cl1269;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1271;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1258 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1258, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1259.value);
            panda$core$Object* $tmp1260 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1261 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1260), p_raw);
            return $tmp1261;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1262 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1263 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1262, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1263.value);
            panda$collections$HashMap* $tmp1265 = (panda$collections$HashMap*) malloc(56);
            $tmp1265->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1265->refCount.value = 1;
            panda$collections$HashMap$init($tmp1265);
            typeMap1264 = $tmp1265;
            panda$core$Object* $tmp1268 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1267 = ((org$pandalanguage$pandac$Type*) $tmp1268);
            org$pandalanguage$pandac$ClassDecl* $tmp1270 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1267)->name);
            cl1269 = $tmp1270;
            PANDA_ASSERT(((panda$core$Bit) { cl1269 != NULL }).value);
            panda$core$Int64 $tmp1272 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1271, ((panda$core$Int64) { 1 }), $tmp1272, ((panda$core$Bit) { false }));
            int64_t $tmp1274 = $tmp1271.min.value;
            panda$core$Int64 i1273 = { $tmp1274 };
            int64_t $tmp1276 = $tmp1271.max.value;
            bool $tmp1277 = $tmp1271.inclusive.value;
            if ($tmp1277) goto $l1284; else goto $l1285;
            $l1284:;
            if ($tmp1274 <= $tmp1276) goto $l1278; else goto $l1280;
            $l1285:;
            if ($tmp1274 < $tmp1276) goto $l1278; else goto $l1280;
            $l1278:;
            {
                panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1269)->name, &$s1286);
                panda$core$Int64 $tmp1288 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1273, ((panda$core$Int64) { 1 }));
                ITable* $tmp1289 = ((panda$collections$ListView*) cl1269->parameters)->$class->itable;
                while ($tmp1289->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1289 = $tmp1289->next;
                }
                $fn1291 $tmp1290 = $tmp1289->methods[0];
                panda$core$Object* $tmp1292 = $tmp1290(((panda$collections$ListView*) cl1269->parameters), $tmp1288);
                panda$core$String* $tmp1293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1287, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1292))->name);
                panda$core$Object* $tmp1294 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1273);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1264, ((panda$collections$Key*) $tmp1293), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1294)));
            }
            $l1281:;
            int64_t $tmp1296 = $tmp1276 - i1273.value;
            if ($tmp1277) goto $l1297; else goto $l1298;
            $l1297:;
            if ($tmp1296 >= 1) goto $l1295; else goto $l1280;
            $l1298:;
            if ($tmp1296 > 1) goto $l1295; else goto $l1280;
            $l1295:;
            i1273.value += 1;
            goto $l1278;
            $l1280:;
            org$pandalanguage$pandac$Type* $tmp1301 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1264);
            return $tmp1301;
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
    org$pandalanguage$pandac$Type* $tmp1302 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1303 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1302);
    if ($tmp1303.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1304 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1304;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1305 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1306 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1305);
    if ($tmp1306.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1307 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1307;
    }
    }
    panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1308.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1309 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1309;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* step1336;
    panda$collections$Array* args1363;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1364;
    org$pandalanguage$pandac$IRNode* c1366;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Int64 $tmp1310 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1310, ((panda$core$Int64) { 2 }));
            if ($tmp1311.value) {
            {
                panda$core$Object* $tmp1312 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1312)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1313.value) {
                {
                    panda$core$Object* $tmp1314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1314)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1315.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1316 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1317 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1316);
                        org$pandalanguage$pandac$Type* $tmp1318 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1317);
                        return $tmp1318;
                    }
                    }
                    panda$core$Object* $tmp1319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp1320 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1319)->type);
                    org$pandalanguage$pandac$Type* $tmp1321 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1320);
                    org$pandalanguage$pandac$Type* $tmp1322 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1321);
                    return $tmp1322;
                }
                }
                panda$core$Object* $tmp1323 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1323)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1324.value) {
                {
                    panda$core$Object* $tmp1325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp1326 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1325)->type);
                    org$pandalanguage$pandac$Type* $tmp1327 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1326);
                    org$pandalanguage$pandac$Type* $tmp1328 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1327);
                    return $tmp1328;
                }
                }
                panda$core$Object* $tmp1329 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1330 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1329)->type);
                panda$core$Object* $tmp1331 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1332 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1331)->type);
                org$pandalanguage$pandac$Type* $tmp1333 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1330, $tmp1332);
                org$pandalanguage$pandac$Type* $tmp1334 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1333);
                org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1334);
                return $tmp1335;
            }
            }
            panda$core$Object* $tmp1337 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1338 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1337)->type);
            step1336 = $tmp1338;
            panda$core$Object* $tmp1339 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1339)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1340.value) {
            {
                panda$core$Object* $tmp1341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1341)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1342.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1343 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$Type* $tmp1344 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1343);
                    org$pandalanguage$pandac$Type* $tmp1345 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1344, step1336);
                    return $tmp1345;
                }
                }
                panda$core$Object* $tmp1346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1346)->type);
                org$pandalanguage$pandac$Type* $tmp1348 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1347);
                org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1348, step1336);
                return $tmp1349;
            }
            }
            panda$core$Object* $tmp1350 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1350)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1351.value) {
            {
                panda$core$Object* $tmp1352 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1353 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1352)->type);
                org$pandalanguage$pandac$Type* $tmp1354 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1353);
                org$pandalanguage$pandac$Type* $tmp1355 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1354, step1336);
                return $tmp1355;
            }
            }
            panda$core$Object* $tmp1356 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1357 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1356)->type);
            panda$core$Object* $tmp1358 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1359 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1358)->type);
            org$pandalanguage$pandac$Type* $tmp1360 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1357, $tmp1359);
            org$pandalanguage$pandac$Type* $tmp1361 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1360);
            org$pandalanguage$pandac$Type* $tmp1362 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1361, step1336);
            return $tmp1362;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1364, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1365 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1364);
            args1363 = $tmp1365;
            panda$core$Object* $tmp1367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1369 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1367), &$s1368, ((panda$collections$ListView*) args1363));
            c1366 = $tmp1369;
            if (((panda$core$Bit) { c1366 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1370 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1370;
            }
            }
            return c1366->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1371 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1371;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1382;
    panda$core$Int64$nullable result1386;
    panda$core$Int64$nullable best1395;
    panda$collections$Iterator* t$Iter1396;
    org$pandalanguage$pandac$Type* t1408;
    panda$core$Int64$nullable cost1413;
    org$pandalanguage$pandac$ClassDecl* cl1427;
    panda$core$Int64$nullable cost1429;
    panda$collections$Iterator* intf$Iter1434;
    org$pandalanguage$pandac$Type* intf1446;
    panda$core$Int64$nullable cost1451;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1372 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1372.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1373 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1374 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1373);
    if ($tmp1374.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1375.value) {
    {
        panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1376.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1377 = $tmp1378.value;
    if (!$tmp1377) goto $l1379;
    panda$core$Bit $tmp1380 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1377 = $tmp1380.value;
    $l1379:;
    panda$core$Bit $tmp1381 = { $tmp1377 };
    if ($tmp1381.value) {
    {
        panda$core$Object* $tmp1383 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1384 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1383), p_target);
        result1382 = $tmp1384;
        if (((panda$core$Bit) { !result1382.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1385 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1382.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1385, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1387 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1388 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1387));
            result1386 = $tmp1388;
            if (((panda$core$Bit) { !result1386.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1389 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1386.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1389, true });
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
            panda$core$Bit $tmp1390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1390.value) {
            {
                panda$core$Object* $tmp1391 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1392 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1391), p_target);
                return $tmp1392;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1393 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1394 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1393, p_target);
            return $tmp1394;
        }
        break;
        case 17:
        {
            best1395 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1397 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1397->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1397 = $tmp1397->next;
                }
                $fn1399 $tmp1398 = $tmp1397->methods[0];
                panda$collections$Iterator* $tmp1400 = $tmp1398(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1396 = $tmp1400;
                $l1401:;
                ITable* $tmp1403 = t$Iter1396->$class->itable;
                while ($tmp1403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1403 = $tmp1403->next;
                }
                $fn1405 $tmp1404 = $tmp1403->methods[0];
                panda$core$Bit $tmp1406 = $tmp1404(t$Iter1396);
                panda$core$Bit $tmp1407 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1406);
                if (!$tmp1407.value) goto $l1402;
                {
                    ITable* $tmp1409 = t$Iter1396->$class->itable;
                    while ($tmp1409->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1409 = $tmp1409->next;
                    }
                    $fn1411 $tmp1410 = $tmp1409->methods[1];
                    panda$core$Object* $tmp1412 = $tmp1410(t$Iter1396);
                    t1408 = ((org$pandalanguage$pandac$Type*) $tmp1412);
                    panda$core$Int64$nullable $tmp1414 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1408, p_target);
                    cost1413 = $tmp1414;
                    bool $tmp1415 = ((panda$core$Bit) { cost1413.nonnull }).value;
                    if (!$tmp1415) goto $l1416;
                    bool $tmp1417 = ((panda$core$Bit) { !best1395.nonnull }).value;
                    if ($tmp1417) goto $l1418;
                    panda$core$Bit $tmp1419 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1413.value), ((panda$core$Int64) best1395.value));
                    $tmp1417 = $tmp1419.value;
                    $l1418:;
                    panda$core$Bit $tmp1420 = { $tmp1417 };
                    $tmp1415 = $tmp1420.value;
                    $l1416:;
                    panda$core$Bit $tmp1421 = { $tmp1415 };
                    if ($tmp1421.value) {
                    {
                        best1395 = cost1413;
                    }
                    }
                }
                goto $l1401;
                $l1402:;
            }
            return best1395;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1422 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1422;
        }
        break;
    }
    panda$core$Bit $tmp1423 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1424 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1423);
    if ($tmp1424.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1425 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1426 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1425);
    if ($tmp1426.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1428 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1427 = $tmp1428;
    PANDA_ASSERT(((panda$core$Bit) { cl1427 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1427);
    if (((panda$core$Bit) { cl1427->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1430 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1427->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1431 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1430);
        panda$core$Int64$nullable $tmp1432 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1431, p_target);
        cost1429 = $tmp1432;
        if (((panda$core$Bit) { cost1429.nonnull }).value) {
        {
            panda$core$Int64 $tmp1433 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1429.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1433, true });
        }
        }
    }
    }
    {
        ITable* $tmp1435 = ((panda$collections$Iterable*) cl1427->rawInterfaces)->$class->itable;
        while ($tmp1435->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1435 = $tmp1435->next;
        }
        $fn1437 $tmp1436 = $tmp1435->methods[0];
        panda$collections$Iterator* $tmp1438 = $tmp1436(((panda$collections$Iterable*) cl1427->rawInterfaces));
        intf$Iter1434 = $tmp1438;
        $l1439:;
        ITable* $tmp1441 = intf$Iter1434->$class->itable;
        while ($tmp1441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1441 = $tmp1441->next;
        }
        $fn1443 $tmp1442 = $tmp1441->methods[0];
        panda$core$Bit $tmp1444 = $tmp1442(intf$Iter1434);
        panda$core$Bit $tmp1445 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1444);
        if (!$tmp1445.value) goto $l1440;
        {
            ITable* $tmp1447 = intf$Iter1434->$class->itable;
            while ($tmp1447->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1447 = $tmp1447->next;
            }
            $fn1449 $tmp1448 = $tmp1447->methods[1];
            panda$core$Object* $tmp1450 = $tmp1448(intf$Iter1434);
            intf1446 = ((org$pandalanguage$pandac$Type*) $tmp1450);
            org$pandalanguage$pandac$Type* $tmp1452 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1446);
            org$pandalanguage$pandac$Type* $tmp1453 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1452);
            panda$core$Int64$nullable $tmp1454 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1453, p_target);
            cost1451 = $tmp1454;
            if (((panda$core$Bit) { cost1451.nonnull }).value) {
            {
                panda$core$Int64 $tmp1455 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1451.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1455, true });
            }
            }
        }
        goto $l1439;
        $l1440:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1457 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1456 = $tmp1457.value;
    if (!$tmp1456) goto $l1458;
    panda$core$Bit $tmp1459 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1456 = $tmp1459.value;
    $l1458:;
    panda$core$Bit $tmp1460 = { $tmp1456 };
    if ($tmp1460.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1462 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1461 = $tmp1462.value;
    if (!$tmp1461) goto $l1463;
    panda$core$Bit $tmp1464 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1461 = $tmp1464.value;
    $l1463:;
    panda$core$Bit $tmp1465 = { $tmp1461 };
    if ($tmp1465.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1467 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1466 = $tmp1467.value;
    if (!$tmp1466) goto $l1468;
    panda$core$Bit $tmp1469 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1466 = $tmp1469.value;
    $l1468:;
    panda$core$Bit $tmp1470 = { $tmp1466 };
    if ($tmp1470.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1471 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1471.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1472 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1472.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1473 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1473.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1476;
    panda$core$Int64$nullable cost11549;
    panda$core$Int64$nullable cost21553;
    panda$core$Int64 cost1561;
    panda$core$Int64$nullable cost11575;
    panda$core$Int64$nullable cost21579;
    panda$core$Int64$nullable cost31584;
    panda$collections$Array* args1591;
    org$pandalanguage$pandac$ClassDecl* targetClass1601;
    panda$collections$Iterator* m$Iter1603;
    org$pandalanguage$pandac$MethodDecl* m1615;
    panda$core$Int64$nullable cost1624;
    panda$core$Bit $tmp1474 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1474.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1475.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1477 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1478 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1477));
            cost1476 = $tmp1478;
            if (((panda$core$Bit) { !cost1476.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1479.value) {
            {
                return cost1476;
            }
            }
            panda$core$Int64 $tmp1480 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1476.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1480, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1481 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1481;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1482.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1483 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1483.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1484 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1485 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1484, p_target);
                return $tmp1485;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1487 = $tmp1488.value;
            if (!$tmp1487) goto $l1489;
            panda$core$Int64 $tmp1490 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1491 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1490);
            panda$core$Int64 $tmp1492 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1493 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1491, $tmp1492);
            $tmp1487 = $tmp1493.value;
            $l1489:;
            panda$core$Bit $tmp1494 = { $tmp1487 };
            bool $tmp1486 = $tmp1494.value;
            if ($tmp1486) goto $l1495;
            panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1496 = $tmp1497.value;
            if (!$tmp1496) goto $l1498;
            panda$core$Int64 $tmp1499 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1500 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1501 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1499, $tmp1500);
            $tmp1496 = $tmp1501.value;
            $l1498:;
            panda$core$Bit $tmp1502 = { $tmp1496 };
            $tmp1486 = $tmp1502.value;
            $l1495:;
            panda$core$Bit $tmp1503 = { $tmp1486 };
            if ($tmp1503.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1504 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1505 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1504);
            if ($tmp1505.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1506 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1507 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1506, p_target);
                return $tmp1507;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1509 = $tmp1510.value;
            if (!$tmp1509) goto $l1511;
            panda$core$Int64 $tmp1512 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1513 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1512);
            panda$core$Int64 $tmp1514 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1513);
            panda$core$Int64 $tmp1515 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1516 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1514, $tmp1515);
            $tmp1509 = $tmp1516.value;
            $l1511:;
            panda$core$Bit $tmp1517 = { $tmp1509 };
            bool $tmp1508 = $tmp1517.value;
            if ($tmp1508) goto $l1518;
            panda$core$Bit $tmp1520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
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
            $tmp1508 = $tmp1527.value;
            $l1518:;
            panda$core$Bit $tmp1528 = { $tmp1508 };
            if ($tmp1528.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1529 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1530 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1529);
            if ($tmp1530.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1531 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1532 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1531, p_target);
                return $tmp1532;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1533 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1533.value) {
            {
                panda$core$Int64 $tmp1534 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1535 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1534, ((panda$core$Int64) { 2 }));
                if ($tmp1535.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1537)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1536 = $tmp1538.value;
                if (!$tmp1536) goto $l1539;
                panda$core$Object* $tmp1540 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1540)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1536 = $tmp1541.value;
                $l1539:;
                panda$core$Bit $tmp1542 = { $tmp1536 };
                if ($tmp1542.value) {
                {
                    panda$core$Object* $tmp1543 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1543)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1544.value) {
                    {
                        panda$core$Object* $tmp1545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1546 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1545)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1547 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1546));
                        if ($tmp1547.value) {
                        {
                            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
                        }
                        }
                        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1548.value);
                panda$core$Object* $tmp1550 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1552 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1550), ((org$pandalanguage$pandac$Type*) $tmp1551));
                cost11549 = $tmp1552;
                if (((panda$core$Bit) { !cost11549.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1554 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1555 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1556 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1554), ((org$pandalanguage$pandac$Type*) $tmp1555));
                cost21553 = $tmp1556;
                if (((panda$core$Bit) { !cost21553.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1557 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11549.value), ((panda$core$Int64) cost21553.value));
                return ((panda$core$Int64$nullable) { $tmp1557, true });
            }
            }
            panda$core$Bit $tmp1558 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1558.value) {
            {
                panda$core$Int64 $tmp1559 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1560 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1559, ((panda$core$Int64) { 3 }));
                if ($tmp1560.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1563 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1563)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1562 = $tmp1564.value;
                if (!$tmp1562) goto $l1565;
                panda$core$Object* $tmp1566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1566)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1562 = $tmp1567.value;
                $l1565:;
                panda$core$Bit $tmp1568 = { $tmp1562 };
                if ($tmp1568.value) {
                {
                    panda$core$Object* $tmp1569 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1569)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1570.value) {
                    {
                        panda$core$Object* $tmp1571 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1572 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1571)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1573 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1572));
                        if ($tmp1573.value) {
                        {
                            cost1561 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1561 = ((panda$core$Int64) { 1 });
                        }
                        }
                    }
                    }
                    else {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                }
                }
                else {
                {
                    panda$core$Bit $tmp1574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1574.value);
                    panda$core$Object* $tmp1576 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1577 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1578 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1576), ((org$pandalanguage$pandac$Type*) $tmp1577));
                    cost11575 = $tmp1578;
                    if (((panda$core$Bit) { !cost11575.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1580 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1581 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1582 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1580), ((org$pandalanguage$pandac$Type*) $tmp1581));
                    cost21579 = $tmp1582;
                    if (((panda$core$Bit) { !cost21579.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1583 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11575.value), ((panda$core$Int64) cost21579.value));
                    cost1561 = $tmp1583;
                }
                }
                panda$core$Object* $tmp1585 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1586 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1587 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1585), ((org$pandalanguage$pandac$Type*) $tmp1586));
                cost31584 = $tmp1587;
                if (((panda$core$Bit) { !cost31584.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1588 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(cost1561, ((panda$core$Int64) cost31584.value));
                return ((panda$core$Int64$nullable) { $tmp1588, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1589 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1590 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1589, p_target);
            return $tmp1590;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1592 = (panda$collections$Array*) malloc(40);
            $tmp1592->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1592->refCount.value = 1;
            panda$collections$Array$init($tmp1592);
            args1591 = $tmp1592;
            panda$core$Object* $tmp1594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1591, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1594)));
            panda$core$Object* $tmp1595 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1597 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1595), &$s1596, ((panda$collections$ListView*) args1591));
            panda$core$Int64$nullable $tmp1598 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1597, p_target);
            return $tmp1598;
        }
        break;
    }
    panda$core$Bit $tmp1599 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1600 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1599);
    if ($tmp1600.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1602 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1601 = $tmp1602;
    if (((panda$core$Bit) { targetClass1601 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1604 = ((panda$collections$Iterable*) targetClass1601->methods)->$class->itable;
        while ($tmp1604->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1604 = $tmp1604->next;
        }
        $fn1606 $tmp1605 = $tmp1604->methods[0];
        panda$collections$Iterator* $tmp1607 = $tmp1605(((panda$collections$Iterable*) targetClass1601->methods));
        m$Iter1603 = $tmp1607;
        $l1608:;
        ITable* $tmp1610 = m$Iter1603->$class->itable;
        while ($tmp1610->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1610 = $tmp1610->next;
        }
        $fn1612 $tmp1611 = $tmp1610->methods[0];
        panda$core$Bit $tmp1613 = $tmp1611(m$Iter1603);
        panda$core$Bit $tmp1614 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1613);
        if (!$tmp1614.value) goto $l1609;
        {
            ITable* $tmp1616 = m$Iter1603->$class->itable;
            while ($tmp1616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1616 = $tmp1616->next;
            }
            $fn1618 $tmp1617 = $tmp1616->methods[1];
            panda$core$Object* $tmp1619 = $tmp1617(m$Iter1603);
            m1615 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1619);
            panda$core$Bit $tmp1620 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1615->annotations);
            if ($tmp1620.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1615);
                panda$core$Bit $tmp1621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1615->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1621.value);
                panda$core$Int64 $tmp1622 = panda$collections$Array$get_count$R$panda$core$Int64(m1615->parameters);
                panda$core$Bit $tmp1623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1622, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1623.value);
                panda$core$Object* $tmp1625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1615->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1626 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1625)->type);
                cost1624 = $tmp1626;
                if (((panda$core$Bit) { cost1624.nonnull }).value) {
                {
                    return cost1624;
                }
                }
            }
            }
        }
        goto $l1608;
        $l1609:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1627 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1627;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1636;
    org$pandalanguage$pandac$IRNode* intermediate1641;
    org$pandalanguage$pandac$IRNode* coerced1669;
    org$pandalanguage$pandac$IRNode* coerced1690;
    org$pandalanguage$pandac$IRNode* varType1704;
    org$pandalanguage$pandac$Type* param1719;
    org$pandalanguage$pandac$IRNode* start1721;
    org$pandalanguage$pandac$IRNode* end1724;
    panda$collections$Array* args1727;
    org$pandalanguage$pandac$IRNode* target1733;
    org$pandalanguage$pandac$Type* endPoint1749;
    org$pandalanguage$pandac$IRNode* start1751;
    org$pandalanguage$pandac$IRNode* end1754;
    org$pandalanguage$pandac$IRNode* step1757;
    panda$collections$Array* args1761;
    org$pandalanguage$pandac$IRNode* target1767;
    panda$collections$Array* args1775;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1776;
    panda$collections$Array* children1788;
    org$pandalanguage$pandac$IRNode* intermediate1794;
    org$pandalanguage$pandac$ClassDecl* cl1799;
    panda$collections$Iterator* m$Iter1801;
    org$pandalanguage$pandac$MethodDecl* m1813;
    org$pandalanguage$pandac$IRNode* type1824;
    panda$collections$Array* args1829;
    panda$collections$Array* children1833;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1628 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1628.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1629 = $tmp1630.value;
    if (!$tmp1629) goto $l1631;
    panda$core$Bit $tmp1632 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1629 = $tmp1632.value;
    $l1631:;
    panda$core$Bit $tmp1633 = { $tmp1629 };
    if ($tmp1633.value) {
    {
        panda$core$Object* $tmp1634 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1635 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1634), p_target);
        if ($tmp1635.value) {
        {
            panda$collections$Array* $tmp1637 = (panda$collections$Array*) malloc(40);
            $tmp1637->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1637->refCount.value = 1;
            panda$collections$Array$init($tmp1637);
            children1636 = $tmp1637;
            panda$collections$Array$add$panda$collections$Array$T(children1636, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1639 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1639->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1639->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1639, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1636));
            return $tmp1639;
        }
        }
        panda$core$Object* $tmp1642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1643 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1642));
        intermediate1641 = $tmp1643;
        org$pandalanguage$pandac$IRNode* $tmp1644 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1641, p_target);
        return $tmp1644;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1645 = $tmp1646.value;
            if (!$tmp1645) goto $l1647;
            panda$core$Int64 $tmp1648 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1649 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1650 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1648, $tmp1649);
            $tmp1645 = $tmp1650.value;
            $l1647:;
            panda$core$Bit $tmp1651 = { $tmp1645 };
            if ($tmp1651.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1652 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1652->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1652->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1652, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1652;
            }
            }
            else {
            panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1654 = $tmp1655.value;
            if (!$tmp1654) goto $l1656;
            panda$core$Int64 $tmp1657 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1658 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1659 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1657, $tmp1658);
            $tmp1654 = $tmp1659.value;
            $l1656:;
            panda$core$Bit $tmp1660 = { $tmp1654 };
            if ($tmp1660.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1661 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1661->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1661->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1661, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1661;
            }
            }
            }
            panda$core$Bit $tmp1664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1663 = $tmp1664.value;
            if (!$tmp1663) goto $l1665;
            panda$core$Bit $tmp1666 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1667 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1666);
            $tmp1663 = $tmp1667.value;
            $l1665:;
            panda$core$Bit $tmp1668 = { $tmp1663 };
            if ($tmp1668.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1670 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1671 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1670);
                coerced1669 = $tmp1671;
                if (((panda$core$Bit) { coerced1669 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1672 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1669, p_target);
                return $tmp1672;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1673 = $tmp1674.value;
            if (!$tmp1673) goto $l1675;
            panda$core$Int64 $tmp1676 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1677 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1676);
            panda$core$Int64 $tmp1678 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1677);
            panda$core$Int64 $tmp1679 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1680 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1678, $tmp1679);
            $tmp1673 = $tmp1680.value;
            $l1675:;
            panda$core$Bit $tmp1681 = { $tmp1673 };
            if ($tmp1681.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1682 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1682->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1682->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1682, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1682;
            }
            }
            panda$core$Bit $tmp1685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1684 = $tmp1685.value;
            if (!$tmp1684) goto $l1686;
            panda$core$Bit $tmp1687 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1688 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1687);
            $tmp1684 = $tmp1688.value;
            $l1686:;
            panda$core$Bit $tmp1689 = { $tmp1684 };
            if ($tmp1689.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1691 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1692 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1691);
                coerced1690 = $tmp1692;
                if (((panda$core$Bit) { coerced1690 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1693 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1690, p_target);
                return $tmp1693;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1694 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1695 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1694);
            if ($tmp1695.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1696 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1696->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1696->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1696, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1696;
            }
            }
            panda$core$Bit $tmp1699 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1698 = $tmp1699.value;
            if (!$tmp1698) goto $l1700;
            org$pandalanguage$pandac$Type* $tmp1701 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1702 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1701);
            $tmp1698 = $tmp1702.value;
            $l1700:;
            panda$core$Bit $tmp1703 = { $tmp1698 };
            if ($tmp1703.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1705 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1706 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1705);
                varType1704 = $tmp1706;
                if (((panda$core$Bit) { varType1704 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1707 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1704, p_target);
                    return $tmp1707;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1708 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1708.value) {
            {
                panda$core$Int64 $tmp1709 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1710 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1709, ((panda$core$Int64) { 2 }));
                if ($tmp1710.value) {
                {
                    panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1711, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1712, &$s1713);
                    panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1714, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1715, &$s1716);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1717);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1718.value);
                panda$core$Object* $tmp1720 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1719 = ((org$pandalanguage$pandac$Type*) $tmp1720);
                panda$core$Object* $tmp1722 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1723 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1722), param1719);
                start1721 = $tmp1723;
                if (((panda$core$Bit) { start1721 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1725 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1726 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1725), param1719);
                end1724 = $tmp1726;
                if (((panda$core$Bit) { end1724 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1728 = (panda$collections$Array*) malloc(40);
                $tmp1728->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1728->refCount.value = 1;
                panda$collections$Array$init($tmp1728);
                args1727 = $tmp1728;
                panda$collections$Array$add$panda$collections$Array$T(args1727, ((panda$core$Object*) start1721));
                panda$collections$Array$add$panda$collections$Array$T(args1727, ((panda$core$Object*) end1724));
                org$pandalanguage$pandac$IRNode* $tmp1730 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1730->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1730->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1732 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1730, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1732, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1727, ((panda$core$Object*) $tmp1730));
                org$pandalanguage$pandac$IRNode* $tmp1734 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1734->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1734->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1736 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1734, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1736, p_target);
                target1733 = $tmp1734;
                org$pandalanguage$pandac$IRNode* $tmp1737 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1733, ((panda$collections$ListView*) args1727));
                return $tmp1737;
            }
            }
            else {
            panda$core$Bit $tmp1738 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1738.value) {
            {
                panda$core$Int64 $tmp1739 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1740 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1739, ((panda$core$Int64) { 3 }));
                if ($tmp1740.value) {
                {
                    panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1741, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1742, &$s1743);
                    panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1744, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1745, &$s1746);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1747);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1748.value);
                panda$core$Object* $tmp1750 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1749 = ((org$pandalanguage$pandac$Type*) $tmp1750);
                panda$core$Object* $tmp1752 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1753 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1752), endPoint1749);
                start1751 = $tmp1753;
                if (((panda$core$Bit) { start1751 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1755 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1756 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1755), endPoint1749);
                end1754 = $tmp1756;
                panda$core$Object* $tmp1758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1759 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1760 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1758), ((org$pandalanguage$pandac$Type*) $tmp1759));
                step1757 = $tmp1760;
                panda$collections$Array* $tmp1762 = (panda$collections$Array*) malloc(40);
                $tmp1762->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1762->refCount.value = 1;
                panda$collections$Array$init($tmp1762);
                args1761 = $tmp1762;
                panda$collections$Array$add$panda$collections$Array$T(args1761, ((panda$core$Object*) start1751));
                panda$collections$Array$add$panda$collections$Array$T(args1761, ((panda$core$Object*) end1754));
                panda$collections$Array$add$panda$collections$Array$T(args1761, ((panda$core$Object*) step1757));
                org$pandalanguage$pandac$IRNode* $tmp1764 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1764->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1764->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1766 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1764, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1766, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1761, ((panda$core$Object*) $tmp1764));
                org$pandalanguage$pandac$IRNode* $tmp1768 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1768->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1768->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1770 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1768, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1770, p_target);
                target1767 = $tmp1768;
                org$pandalanguage$pandac$IRNode* $tmp1771 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1767, ((panda$collections$ListView*) args1761));
                return $tmp1771;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1772 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1773 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1772, p_target);
                return $tmp1773;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp1774 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp1774;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1776, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1777 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1776);
            args1775 = $tmp1777;
            panda$core$Object* $tmp1778 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1780 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1778), &$s1779, ((panda$collections$ListView*) args1775), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1781 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1780, p_target);
            return $tmp1781;
        }
        break;
    }
    panda$core$Bit $tmp1782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1782.value) {
    {
        panda$core$Bit $tmp1783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1783.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1784 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1784->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1784->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1784, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1784;
        }
        }
        panda$core$Object* $tmp1786 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1787 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1786));
        if ($tmp1787.value) {
        {
            panda$collections$Array* $tmp1789 = (panda$collections$Array*) malloc(40);
            $tmp1789->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1789->refCount.value = 1;
            panda$collections$Array$init($tmp1789);
            children1788 = $tmp1789;
            panda$collections$Array$add$panda$collections$Array$T(children1788, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1791 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1791->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1791->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1791, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1788));
            return $tmp1791;
        }
        }
        panda$core$Bit $tmp1793 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1793.value) {
        {
            panda$core$Object* $tmp1795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1796 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1795));
            intermediate1794 = $tmp1796;
            org$pandalanguage$pandac$IRNode* $tmp1797 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1794, p_target);
            return $tmp1797;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1798 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1798.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1800 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1799 = $tmp1800;
        if (((panda$core$Bit) { cl1799 != NULL }).value) {
        {
            {
                ITable* $tmp1802 = ((panda$collections$Iterable*) cl1799->methods)->$class->itable;
                while ($tmp1802->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1802 = $tmp1802->next;
                }
                $fn1804 $tmp1803 = $tmp1802->methods[0];
                panda$collections$Iterator* $tmp1805 = $tmp1803(((panda$collections$Iterable*) cl1799->methods));
                m$Iter1801 = $tmp1805;
                $l1806:;
                ITable* $tmp1808 = m$Iter1801->$class->itable;
                while ($tmp1808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1808 = $tmp1808->next;
                }
                $fn1810 $tmp1809 = $tmp1808->methods[0];
                panda$core$Bit $tmp1811 = $tmp1809(m$Iter1801);
                panda$core$Bit $tmp1812 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1811);
                if (!$tmp1812.value) goto $l1807;
                {
                    ITable* $tmp1814 = m$Iter1801->$class->itable;
                    while ($tmp1814->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1814 = $tmp1814->next;
                    }
                    $fn1816 $tmp1815 = $tmp1814->methods[1];
                    panda$core$Object* $tmp1817 = $tmp1815(m$Iter1801);
                    m1813 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1817);
                    panda$core$Bit $tmp1818 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1813->annotations);
                    if ($tmp1818.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1813);
                        panda$core$Bit $tmp1819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1813->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1819.value);
                        panda$core$Int64 $tmp1820 = panda$collections$Array$get_count$R$panda$core$Int64(m1813->parameters);
                        panda$core$Bit $tmp1821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1820, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1821.value);
                        panda$core$Object* $tmp1822 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1813->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1823 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1822)->type);
                        if (((panda$core$Bit) { $tmp1823.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1825 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1825->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1825->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1827 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1828 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1799);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1825, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1827, $tmp1828);
                            type1824 = $tmp1825;
                            panda$collections$Array* $tmp1830 = (panda$collections$Array*) malloc(40);
                            $tmp1830->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1830->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1830, ((panda$core$Int64) { 1 }));
                            args1829 = $tmp1830;
                            panda$collections$Array$add$panda$collections$Array$T(args1829, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1832 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1824, ((panda$collections$ListView*) args1829));
                            return $tmp1832;
                        }
                        }
                    }
                    }
                }
                goto $l1806;
                $l1807:;
            }
        }
        }
        panda$collections$Array* $tmp1834 = (panda$collections$Array*) malloc(40);
        $tmp1834->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1834->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1834, ((panda$core$Int64) { 1 }));
        children1833 = $tmp1834;
        panda$collections$Array$add$panda$collections$Array$T(children1833, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1836 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1836->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1836->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1836, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1833));
        return $tmp1836;
    }
    }
    panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1838, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1839, &$s1840);
    panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1841, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, &$s1843);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1844);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1845;
    org$pandalanguage$pandac$IRNode* $tmp1846 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1845 = $tmp1846;
    bool $tmp1847 = ((panda$core$Bit) { result1845 == NULL }).value;
    if ($tmp1847) goto $l1848;
    panda$core$Bit $tmp1849 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1845->type, p_target);
    $tmp1847 = $tmp1849.value;
    $l1848:;
    panda$core$Bit $tmp1850 = { $tmp1847 };
    PANDA_ASSERT($tmp1850.value);
    return result1845;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1852 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1851 = $tmp1852.value;
    if (!$tmp1851) goto $l1853;
    panda$core$Bit $tmp1854 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1851 = $tmp1854.value;
    $l1853:;
    panda$core$Bit $tmp1855 = { $tmp1851 };
    if ($tmp1855.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1856 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1856.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1858 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1857 = $tmp1858.value;
    if (!$tmp1857) goto $l1859;
    panda$core$Bit $tmp1860 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1857 = $tmp1860.value;
    $l1859:;
    panda$core$Bit $tmp1861 = { $tmp1857 };
    if ($tmp1861.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1862.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1863 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1863.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1865;
    org$pandalanguage$pandac$IRNode* resolved1872;
    panda$core$Int64$nullable $tmp1864 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1864.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1866 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1865 = $tmp1866;
    panda$core$Bit $tmp1868 = panda$core$Bit$$NOT$R$panda$core$Bit(result1865);
    bool $tmp1867 = $tmp1868.value;
    if (!$tmp1867) goto $l1869;
    panda$core$Bit $tmp1870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1867 = $tmp1870.value;
    $l1869:;
    panda$core$Bit $tmp1871 = { $tmp1867 };
    if ($tmp1871.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1873 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1872 = $tmp1873;
        if (((panda$core$Bit) { resolved1872 != NULL }).value) {
        {
            panda$core$Bit $tmp1874 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1872, p_target);
            result1865 = $tmp1874;
        }
        }
    }
    }
    return result1865;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1895;
    panda$collections$Array* children1898;
    panda$core$Bit $tmp1875 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1875.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1876 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1877 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1876);
    PANDA_ASSERT($tmp1877.value);
    bool $tmp1878 = p_isExplicit.value;
    if (!$tmp1878) goto $l1879;
    panda$core$Bit $tmp1880 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1881 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1880);
    $tmp1878 = $tmp1881.value;
    $l1879:;
    panda$core$Bit $tmp1882 = { $tmp1878 };
    if ($tmp1882.value) {
    {
        panda$core$String* $tmp1884 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1883, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1884, &$s1885);
        panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1887, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, &$s1889);
        panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1886, $tmp1890);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1891);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1892 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1892;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1893 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1893.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1894 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1894;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1896 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1895 = $tmp1896;
            if (((panda$core$Bit) { resolved1895 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1897 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1895, p_position, p_isExplicit, p_target);
                return $tmp1897;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1899 = (panda$collections$Array*) malloc(40);
    $tmp1899->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1899->refCount.value = 1;
    panda$collections$Array$init($tmp1899);
    children1898 = $tmp1899;
    panda$collections$Array$add$panda$collections$Array$T(children1898, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1901 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1901->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1901->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1901, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1898));
    return $tmp1901;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1909;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1910;
    panda$core$Int64$nullable cost1925;
    panda$core$Int64$nullable cost1939;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1903 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1904 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1904->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1904 = $tmp1904->next;
    }
    $fn1906 $tmp1905 = $tmp1904->methods[0];
    panda$core$Int64 $tmp1907 = $tmp1905(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1908 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1903, $tmp1907);
    if ($tmp1908.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1909 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1911 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1910, ((panda$core$Int64) { 0 }), $tmp1911, ((panda$core$Bit) { false }));
    int64_t $tmp1913 = $tmp1910.min.value;
    panda$core$Int64 i1912 = { $tmp1913 };
    int64_t $tmp1915 = $tmp1910.max.value;
    bool $tmp1916 = $tmp1910.inclusive.value;
    if ($tmp1916) goto $l1923; else goto $l1924;
    $l1923:;
    if ($tmp1913 <= $tmp1915) goto $l1917; else goto $l1919;
    $l1924:;
    if ($tmp1913 < $tmp1915) goto $l1917; else goto $l1919;
    $l1917:;
    {
        ITable* $tmp1926 = p_args->$class->itable;
        while ($tmp1926->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1926 = $tmp1926->next;
        }
        $fn1928 $tmp1927 = $tmp1926->methods[0];
        panda$core$Object* $tmp1929 = $tmp1927(p_args, i1912);
        org$pandalanguage$pandac$Type* $tmp1930 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1912);
        panda$core$Int64$nullable $tmp1931 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1929), $tmp1930);
        cost1925 = $tmp1931;
        if (((panda$core$Bit) { !cost1925.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1932 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1909, ((panda$core$Int64) cost1925.value));
        result1909 = $tmp1932;
    }
    $l1920:;
    int64_t $tmp1934 = $tmp1915 - i1912.value;
    if ($tmp1916) goto $l1935; else goto $l1936;
    $l1935:;
    if ($tmp1934 >= 1) goto $l1933; else goto $l1919;
    $l1936:;
    if ($tmp1934 > 1) goto $l1933; else goto $l1919;
    $l1933:;
    i1912.value += 1;
    goto $l1917;
    $l1919:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1940 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1941 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1940, p_expectedReturn);
        cost1939 = $tmp1941;
        if (((panda$core$Bit) { !cost1939.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1942 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1909, ((panda$core$Int64) cost1939.value));
        result1909 = $tmp1942;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1945 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1946 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1945);
    bool $tmp1944 = $tmp1946.value;
    if (!$tmp1944) goto $l1947;
    ITable* $tmp1948 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1948->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1948 = $tmp1948->next;
    }
    $fn1950 $tmp1949 = $tmp1948->methods[0];
    panda$core$Int64 $tmp1951 = $tmp1949(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1951, ((panda$core$Int64) { 1 }));
    $tmp1944 = $tmp1952.value;
    $l1947:;
    panda$core$Bit $tmp1953 = { $tmp1944 };
    bool $tmp1943 = $tmp1953.value;
    if (!$tmp1943) goto $l1954;
    panda$core$Object* $tmp1955 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1956 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1957 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1955)->type, $tmp1956);
    $tmp1943 = $tmp1957.value;
    $l1954:;
    panda$core$Bit $tmp1958 = { $tmp1943 };
    if ($tmp1958.value) {
    {
        panda$core$Int64 $tmp1959 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1909, ((panda$core$Int64) { 1 }));
        result1909 = $tmp1959;
    }
    }
    return ((panda$core$Int64$nullable) { result1909, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1960;
    panda$core$Int64$nullable best1963;
    panda$collections$Iterator* m$Iter1964;
    org$pandalanguage$pandac$MethodRef* m1976;
    panda$core$Int64$nullable cost1981;
    panda$collections$Array* $tmp1961 = (panda$collections$Array*) malloc(40);
    $tmp1961->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1961->refCount.value = 1;
    panda$collections$Array$init($tmp1961);
    result1960 = $tmp1961;
    best1963 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1965 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1965->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1965 = $tmp1965->next;
        }
        $fn1967 $tmp1966 = $tmp1965->methods[0];
        panda$collections$Iterator* $tmp1968 = $tmp1966(((panda$collections$Iterable*) p_methods));
        m$Iter1964 = $tmp1968;
        $l1969:;
        ITable* $tmp1971 = m$Iter1964->$class->itable;
        while ($tmp1971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1971 = $tmp1971->next;
        }
        $fn1973 $tmp1972 = $tmp1971->methods[0];
        panda$core$Bit $tmp1974 = $tmp1972(m$Iter1964);
        panda$core$Bit $tmp1975 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1974);
        if (!$tmp1975.value) goto $l1970;
        {
            ITable* $tmp1977 = m$Iter1964->$class->itable;
            while ($tmp1977->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1977 = $tmp1977->next;
            }
            $fn1979 $tmp1978 = $tmp1977->methods[1];
            panda$core$Object* $tmp1980 = $tmp1978(m$Iter1964);
            m1976 = ((org$pandalanguage$pandac$MethodRef*) $tmp1980);
            panda$core$Int64$nullable $tmp1982 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1976, p_args, p_expectedReturn);
            cost1981 = $tmp1982;
            if (((panda$core$Bit) { !cost1981.nonnull }).value) {
            {
                goto $l1969;
            }
            }
            bool $tmp1983 = ((panda$core$Bit) { !best1963.nonnull }).value;
            if ($tmp1983) goto $l1984;
            panda$core$Bit $tmp1985 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1981.value), ((panda$core$Int64) best1963.value));
            $tmp1983 = $tmp1985.value;
            $l1984:;
            panda$core$Bit $tmp1986 = { $tmp1983 };
            if ($tmp1986.value) {
            {
                panda$collections$Array$clear(result1960);
                best1963 = cost1981;
            }
            }
            panda$core$Bit $tmp1987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1981.value), ((panda$core$Int64) best1963.value));
            if ($tmp1987.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1960, ((panda$core$Object*) m1976));
            }
            }
        }
        goto $l1969;
        $l1970:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1960));
    return best1963;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s1994;
    panda$collections$Array* finalArgs2019;
    org$pandalanguage$pandac$IRNode* selfNode2055;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2084;
    org$pandalanguage$pandac$IRNode* coerced2102;
    org$pandalanguage$pandac$IRNode* result2117;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1988 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1989 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1989->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1989 = $tmp1989->next;
    }
    $fn1991 $tmp1990 = $tmp1989->methods[0];
    panda$core$Int64 $tmp1992 = $tmp1990(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1993 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1988, $tmp1992);
    if ($tmp1993.value) {
    {
        panda$core$Int64 $tmp1995 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1995, ((panda$core$Int64) { 1 }));
        if ($tmp1996.value) {
        {
            s1994 = &$s1997;
        }
        }
        else {
        {
            s1994 = &$s1998;
        }
        }
        panda$core$String* $tmp1999 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2000 = panda$core$String$convert$R$panda$core$String($tmp1999);
        panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2000, &$s2001);
        panda$core$Int64 $tmp2003 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2004 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2002, ((panda$core$Object*) wrap_panda$core$Int64($tmp2003)));
        panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2004, &$s2005);
        panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2006, s1994);
        panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, &$s2008);
        ITable* $tmp2011 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2011->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2011 = $tmp2011->next;
        }
        $fn2013 $tmp2012 = $tmp2011->methods[0];
        panda$core$Int64 $tmp2014 = $tmp2012(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2010, ((panda$core$Object*) wrap_panda$core$Int64($tmp2014)));
        panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, &$s2016);
        panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2009, $tmp2017);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2018);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2020 = (panda$collections$Array*) malloc(40);
    $tmp2020->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2020->refCount.value = 1;
    panda$collections$Array$init($tmp2020);
    finalArgs2019 = $tmp2020;
    bool $tmp2023 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2023) goto $l2024;
    panda$core$Bit $tmp2025 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2023 = $tmp2025.value;
    $l2024:;
    panda$core$Bit $tmp2026 = { $tmp2023 };
    bool $tmp2022 = $tmp2026.value;
    if (!$tmp2022) goto $l2027;
    panda$core$Bit $tmp2028 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2029 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2028);
    $tmp2022 = $tmp2029.value;
    $l2027:;
    panda$core$Bit $tmp2030 = { $tmp2022 };
    if ($tmp2030.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2031 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2032 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2031);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2019, ((panda$core$Object*) $tmp2032));
    }
    }
    panda$core$Bit $tmp2033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2033.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2034 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2034)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2035.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2036 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2036->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2036->refCount.value = 1;
                panda$core$Object* $tmp2038 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2039 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2038));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2036, ((panda$core$Int64) { 1025 }), p_position, $tmp2039);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2019, ((panda$core$Object*) $tmp2036));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2040);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2043 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2042 = $tmp2043.value;
        if (!$tmp2042) goto $l2044;
        panda$core$Bit $tmp2045 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2042 = $tmp2045.value;
        $l2044:;
        panda$core$Bit $tmp2046 = { $tmp2042 };
        bool $tmp2041 = $tmp2046.value;
        if (!$tmp2041) goto $l2047;
        panda$core$Bit $tmp2048 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2041 = $tmp2048.value;
        $l2047:;
        panda$core$Bit $tmp2049 = { $tmp2041 };
        if ($tmp2049.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2050);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2052 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2051 = $tmp2052.value;
    if (!$tmp2051) goto $l2053;
    $tmp2051 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2053:;
    panda$core$Bit $tmp2054 = { $tmp2051 };
    if ($tmp2054.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2056 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2056->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2056->refCount.value = 1;
        panda$core$Object* $tmp2058 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2059 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2058));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2056, ((panda$core$Int64) { 1025 }), p_position, $tmp2059);
        selfNode2055 = $tmp2056;
        org$pandalanguage$pandac$Type* $tmp2060 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2061 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2055, $tmp2060);
        selfNode2055 = $tmp2061;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2055 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2019, ((panda$core$Object*) selfNode2055));
        panda$core$Object* $tmp2062 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2063 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2062));
        panda$core$Bit $tmp2064 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2063);
        if ($tmp2064.value) {
        {
            panda$core$String* $tmp2066 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2065, $tmp2066);
            panda$core$String* $tmp2069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, &$s2068);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2069);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2072 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2073 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2072);
    bool $tmp2071 = $tmp2073.value;
    if (!$tmp2071) goto $l2074;
    $tmp2071 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2074:;
    panda$core$Bit $tmp2075 = { $tmp2071 };
    bool $tmp2070 = $tmp2075.value;
    if (!$tmp2070) goto $l2076;
    panda$core$Bit $tmp2077 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2070 = $tmp2077.value;
    $l2076:;
    panda$core$Bit $tmp2078 = { $tmp2070 };
    if ($tmp2078.value) {
    {
        panda$core$String* $tmp2080 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2079, $tmp2080);
        panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2081, &$s2082);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2083);
    }
    }
    }
    }
    ITable* $tmp2085 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2085->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2085 = $tmp2085->next;
    }
    $fn2087 $tmp2086 = $tmp2085->methods[0];
    panda$core$Int64 $tmp2088 = $tmp2086(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2084, ((panda$core$Int64) { 0 }), $tmp2088, ((panda$core$Bit) { false }));
    int64_t $tmp2090 = $tmp2084.min.value;
    panda$core$Int64 i2089 = { $tmp2090 };
    int64_t $tmp2092 = $tmp2084.max.value;
    bool $tmp2093 = $tmp2084.inclusive.value;
    if ($tmp2093) goto $l2100; else goto $l2101;
    $l2100:;
    if ($tmp2090 <= $tmp2092) goto $l2094; else goto $l2096;
    $l2101:;
    if ($tmp2090 < $tmp2092) goto $l2094; else goto $l2096;
    $l2094:;
    {
        ITable* $tmp2103 = p_args->$class->itable;
        while ($tmp2103->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2103 = $tmp2103->next;
        }
        $fn2105 $tmp2104 = $tmp2103->methods[0];
        panda$core$Object* $tmp2106 = $tmp2104(p_args, i2089);
        org$pandalanguage$pandac$Type* $tmp2107 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2089);
        org$pandalanguage$pandac$IRNode* $tmp2108 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2106), $tmp2107);
        coerced2102 = $tmp2108;
        if (((panda$core$Bit) { coerced2102 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2109 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2089);
        org$pandalanguage$pandac$IRNode* $tmp2110 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2102, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2109)->type);
        coerced2102 = $tmp2110;
        if (((panda$core$Bit) { coerced2102 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2019, ((panda$core$Object*) coerced2102));
    }
    $l2097:;
    int64_t $tmp2112 = $tmp2092 - i2089.value;
    if ($tmp2093) goto $l2113; else goto $l2114;
    $l2113:;
    if ($tmp2112 >= 1) goto $l2111; else goto $l2096;
    $l2114:;
    if ($tmp2112 > 1) goto $l2111; else goto $l2096;
    $l2111:;
    i2089.value += 1;
    goto $l2094;
    $l2096:;
    panda$core$Bit $tmp2119 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2118);
    if ($tmp2119.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2120 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2120->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2120->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2122 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2120, ((panda$core$Int64) { 1005 }), p_position, $tmp2122, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2019));
        result2117 = $tmp2120;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2123 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2123->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2123->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2123, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2019));
        result2117 = $tmp2123;
        org$pandalanguage$pandac$Type* $tmp2125 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2126 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2117, p_position, ((panda$core$Bit) { false }), $tmp2125);
        result2117 = $tmp2126;
    }
    }
    return result2117;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2127 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2127;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2128;
    org$pandalanguage$pandac$ClassDecl* cl2130;
    org$pandalanguage$pandac$Symbol* s2134;
    org$pandalanguage$pandac$IRNode* ref2156;
    org$pandalanguage$pandac$IRNode* $tmp2129 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2128 = $tmp2129;
    if (((panda$core$Bit) { resolved2128 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2128->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2131.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2132 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2128->payload));
        cl2130 = $tmp2132;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2133 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2128->type);
        cl2130 = $tmp2133;
    }
    }
    if (((panda$core$Bit) { cl2130 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2135 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2130);
    org$pandalanguage$pandac$Symbol* $tmp2136 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2135, p_name);
    s2134 = $tmp2136;
    if (((panda$core$Bit) { s2134 == NULL }).value) {
    {
        panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2137, ((org$pandalanguage$pandac$Symbol*) cl2130)->name);
        panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2138, &$s2139);
        panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, p_name);
        panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, &$s2142);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2143);
        return NULL;
    }
    }
    panda$core$Bit $tmp2145 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2134->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2144 = $tmp2145.value;
    if (!$tmp2144) goto $l2146;
    panda$core$Bit $tmp2147 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2134->kind, ((panda$core$Int64) { 205 }));
    $tmp2144 = $tmp2147.value;
    $l2146:;
    panda$core$Bit $tmp2148 = { $tmp2144 };
    if ($tmp2148.value) {
    {
        panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2149, ((org$pandalanguage$pandac$Symbol*) cl2130)->name);
        panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
        panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, p_name);
        panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2155);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2157 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2130);
    org$pandalanguage$pandac$IRNode* $tmp2158 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2134, $tmp2157);
    ref2156 = $tmp2158;
    if (((panda$core$Bit) { ref2156 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2159 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2156, p_args, p_expectedType);
    return $tmp2159;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2160 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2160;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2161;
    panda$collections$Array* methods2168;
    org$pandalanguage$pandac$MethodDecl* first2173;
    panda$core$MutableString* msg2178;
    panda$core$String* separator2189;
    panda$collections$Iterator* a$Iter2191;
    org$pandalanguage$pandac$IRNode* a2203;
    org$pandalanguage$pandac$IRNode* target2217;
    panda$collections$Array* children2225;
    panda$collections$Array* types2231;
    panda$collections$Iterator* m$Iter2234;
    org$pandalanguage$pandac$MethodRef* m2246;
    org$pandalanguage$pandac$IRNode* target2256;
    org$pandalanguage$pandac$IRNode* initCall2259;
    panda$collections$Array* children2263;
    org$pandalanguage$pandac$IRNode* resolved2268;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2162 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2162, ((panda$core$Int64) { 0 }));
            if ($tmp2163.value) {
            {
                target2161 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2164 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2164, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2165.value);
                panda$core$Object* $tmp2166 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2161 = ((org$pandalanguage$pandac$IRNode*) $tmp2166);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2167 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2161, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2167;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2169 = (panda$collections$Array*) malloc(40);
            $tmp2169->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2169->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2169, ((panda$collections$ListView*) p_m->payload));
            methods2168 = $tmp2169;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2168, p_args, p_expectedType);
            panda$core$Int64 $tmp2171 = panda$collections$Array$get_count$R$panda$core$Int64(methods2168);
            panda$core$Bit $tmp2172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2171, ((panda$core$Int64) { 0 }));
            if ($tmp2172.value) {
            {
                ITable* $tmp2174 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2174->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2174 = $tmp2174->next;
                }
                $fn2176 $tmp2175 = $tmp2174->methods[0];
                panda$core$Object* $tmp2177 = $tmp2175(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2173 = ((org$pandalanguage$pandac$MethodRef*) $tmp2177)->value;
                panda$core$MutableString* $tmp2179 = (panda$core$MutableString*) malloc(40);
                $tmp2179->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2179->refCount.value = 1;
                panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2181, ((org$pandalanguage$pandac$Symbol*) first2173->owner)->name);
                panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, &$s2183);
                panda$core$String* $tmp2185 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2173)->name);
                panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, &$s2186);
                panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2184, $tmp2187);
                panda$core$MutableString$init$panda$core$String($tmp2179, $tmp2188);
                msg2178 = $tmp2179;
                separator2189 = &$s2190;
                {
                    ITable* $tmp2192 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2192->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2192 = $tmp2192->next;
                    }
                    $fn2194 $tmp2193 = $tmp2192->methods[0];
                    panda$collections$Iterator* $tmp2195 = $tmp2193(((panda$collections$Iterable*) p_args));
                    a$Iter2191 = $tmp2195;
                    $l2196:;
                    ITable* $tmp2198 = a$Iter2191->$class->itable;
                    while ($tmp2198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2198 = $tmp2198->next;
                    }
                    $fn2200 $tmp2199 = $tmp2198->methods[0];
                    panda$core$Bit $tmp2201 = $tmp2199(a$Iter2191);
                    panda$core$Bit $tmp2202 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2201);
                    if (!$tmp2202.value) goto $l2197;
                    {
                        ITable* $tmp2204 = a$Iter2191->$class->itable;
                        while ($tmp2204->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2204 = $tmp2204->next;
                        }
                        $fn2206 $tmp2205 = $tmp2204->methods[1];
                        panda$core$Object* $tmp2207 = $tmp2205(a$Iter2191);
                        a2203 = ((org$pandalanguage$pandac$IRNode*) $tmp2207);
                        panda$core$MutableString$append$panda$core$String(msg2178, separator2189);
                        panda$core$MutableString$append$panda$core$Object(msg2178, ((panda$core$Object*) a2203->type));
                        separator2189 = &$s2208;
                    }
                    goto $l2196;
                    $l2197:;
                }
                panda$core$MutableString$append$panda$core$String(msg2178, &$s2209);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2210, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, &$s2212);
                    panda$core$MutableString$append$panda$core$String(msg2178, $tmp2213);
                }
                }
                panda$core$String* $tmp2214 = panda$core$MutableString$finish$R$panda$core$String(msg2178);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2214);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2215 = panda$collections$Array$get_count$R$panda$core$Int64(methods2168);
            panda$core$Bit $tmp2216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2215, ((panda$core$Int64) { 1 }));
            if ($tmp2216.value) {
            {
                panda$core$Int64 $tmp2218 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2218, ((panda$core$Int64) { 1 }));
                if ($tmp2219.value) {
                {
                    panda$core$Object* $tmp2220 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2217 = ((org$pandalanguage$pandac$IRNode*) $tmp2220);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2221 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2221, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2222.value);
                    target2217 = NULL;
                }
                }
                panda$core$Object* $tmp2223 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2168, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2224 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2217, ((org$pandalanguage$pandac$MethodRef*) $tmp2223), p_args);
                return $tmp2224;
            }
            }
            panda$collections$Array* $tmp2226 = (panda$collections$Array*) malloc(40);
            $tmp2226->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2226->refCount.value = 1;
            panda$collections$Array$init($tmp2226);
            children2225 = $tmp2226;
            org$pandalanguage$pandac$IRNode* $tmp2228 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2228->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2228->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2230 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2228, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2230, ((panda$core$Object*) methods2168), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2225, ((panda$core$Object*) $tmp2228));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2225, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2232 = (panda$collections$Array*) malloc(40);
            $tmp2232->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2232->refCount.value = 1;
            panda$collections$Array$init($tmp2232);
            types2231 = $tmp2232;
            {
                ITable* $tmp2235 = ((panda$collections$Iterable*) methods2168)->$class->itable;
                while ($tmp2235->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2235 = $tmp2235->next;
                }
                $fn2237 $tmp2236 = $tmp2235->methods[0];
                panda$collections$Iterator* $tmp2238 = $tmp2236(((panda$collections$Iterable*) methods2168));
                m$Iter2234 = $tmp2238;
                $l2239:;
                ITable* $tmp2241 = m$Iter2234->$class->itable;
                while ($tmp2241->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2241 = $tmp2241->next;
                }
                $fn2243 $tmp2242 = $tmp2241->methods[0];
                panda$core$Bit $tmp2244 = $tmp2242(m$Iter2234);
                panda$core$Bit $tmp2245 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2244);
                if (!$tmp2245.value) goto $l2240;
                {
                    ITable* $tmp2247 = m$Iter2234->$class->itable;
                    while ($tmp2247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2247 = $tmp2247->next;
                    }
                    $fn2249 $tmp2248 = $tmp2247->methods[1];
                    panda$core$Object* $tmp2250 = $tmp2248(m$Iter2234);
                    m2246 = ((org$pandalanguage$pandac$MethodRef*) $tmp2250);
                    org$pandalanguage$pandac$Type* $tmp2251 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2246);
                    panda$collections$Array$add$panda$collections$Array$T(types2231, ((panda$core$Object*) $tmp2251));
                }
                goto $l2239;
                $l2240:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2252 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2252->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2252->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2254 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2254->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2254->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2254, ((panda$collections$ListView*) types2231));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2252, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2254, ((panda$collections$ListView*) children2225));
            return $tmp2252;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2257 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2257->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2257->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2257, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2256 = $tmp2257;
            org$pandalanguage$pandac$IRNode* $tmp2261 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2256, &$s2260, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2262 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2261);
            initCall2259 = $tmp2262;
            if (((panda$core$Bit) { initCall2259 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2264 = (panda$collections$Array*) malloc(40);
            $tmp2264->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2264->refCount.value = 1;
            panda$collections$Array$init($tmp2264);
            children2263 = $tmp2264;
            panda$collections$Array$add$panda$collections$Array$T(children2263, ((panda$core$Object*) initCall2259));
            org$pandalanguage$pandac$IRNode* $tmp2266 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2266->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2266->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2266, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2263));
            return $tmp2266;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2269 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2268 = $tmp2269;
            if (((panda$core$Bit) { resolved2268 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2270, ((panda$core$Object*) resolved2268->type));
            panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2271, &$s2272);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2268->position, $tmp2273);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2274;
    panda$core$MutableString* typeName2277;
    panda$core$String* separator2281;
    panda$collections$Iterator* p$Iter2283;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2295;
    panda$core$Int64 kind2301;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2275 = (panda$collections$Array*) malloc(40);
    $tmp2275->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2275->refCount.value = 1;
    panda$collections$Array$init($tmp2275);
    subtypes2274 = $tmp2275;
    panda$core$MutableString* $tmp2278 = (panda$core$MutableString*) malloc(40);
    $tmp2278->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2278->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2278, &$s2280);
    typeName2277 = $tmp2278;
    separator2281 = &$s2282;
    {
        ITable* $tmp2284 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2284->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2284 = $tmp2284->next;
        }
        $fn2286 $tmp2285 = $tmp2284->methods[0];
        panda$collections$Iterator* $tmp2287 = $tmp2285(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2283 = $tmp2287;
        $l2288:;
        ITable* $tmp2290 = p$Iter2283->$class->itable;
        while ($tmp2290->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2290 = $tmp2290->next;
        }
        $fn2292 $tmp2291 = $tmp2290->methods[0];
        panda$core$Bit $tmp2293 = $tmp2291(p$Iter2283);
        panda$core$Bit $tmp2294 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2293);
        if (!$tmp2294.value) goto $l2289;
        {
            ITable* $tmp2296 = p$Iter2283->$class->itable;
            while ($tmp2296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2296 = $tmp2296->next;
            }
            $fn2298 $tmp2297 = $tmp2296->methods[1];
            panda$core$Object* $tmp2299 = $tmp2297(p$Iter2283);
            p2295 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2299);
            panda$core$MutableString$append$panda$core$String(typeName2277, separator2281);
            panda$core$MutableString$append$panda$core$String(typeName2277, ((org$pandalanguage$pandac$Symbol*) p2295->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2274, ((panda$core$Object*) p2295->type));
            separator2281 = &$s2300;
        }
        goto $l2288;
        $l2289:;
    }
    panda$core$Bit $tmp2302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2302.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2277, &$s2303);
        kind2301 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2277, &$s2304);
        kind2301 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2274, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2305 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2306 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2305);
    if ($tmp2306.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2277, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2277, &$s2307);
    org$pandalanguage$pandac$Type* $tmp2308 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2308->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2308->refCount.value = 1;
    panda$core$String* $tmp2310 = panda$core$MutableString$finish$R$panda$core$String(typeName2277);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2308, $tmp2310, kind2301, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2274), ((panda$core$Bit) { true }));
    return $tmp2308;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2311;
    panda$core$MutableString* typeName2314;
    panda$collections$Iterator* p$Iter2318;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2330;
    panda$core$Int64 kind2336;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2312 = (panda$collections$Array*) malloc(40);
    $tmp2312->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2312->refCount.value = 1;
    panda$collections$Array$init($tmp2312);
    subtypes2311 = $tmp2312;
    panda$core$MutableString* $tmp2315 = (panda$core$MutableString*) malloc(40);
    $tmp2315->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2315->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2315, &$s2317);
    typeName2314 = $tmp2315;
    panda$core$MutableString$append$panda$core$String(typeName2314, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2311, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2319 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2319->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2319 = $tmp2319->next;
        }
        $fn2321 $tmp2320 = $tmp2319->methods[0];
        panda$collections$Iterator* $tmp2322 = $tmp2320(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2318 = $tmp2322;
        $l2323:;
        ITable* $tmp2325 = p$Iter2318->$class->itable;
        while ($tmp2325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2325 = $tmp2325->next;
        }
        $fn2327 $tmp2326 = $tmp2325->methods[0];
        panda$core$Bit $tmp2328 = $tmp2326(p$Iter2318);
        panda$core$Bit $tmp2329 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2328);
        if (!$tmp2329.value) goto $l2324;
        {
            ITable* $tmp2331 = p$Iter2318->$class->itable;
            while ($tmp2331->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2331 = $tmp2331->next;
            }
            $fn2333 $tmp2332 = $tmp2331->methods[1];
            panda$core$Object* $tmp2334 = $tmp2332(p$Iter2318);
            p2330 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2334);
            panda$core$MutableString$append$panda$core$String(typeName2314, &$s2335);
            panda$core$MutableString$append$panda$core$String(typeName2314, ((org$pandalanguage$pandac$Symbol*) p2330->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2311, ((panda$core$Object*) p2330->type));
        }
        goto $l2323;
        $l2324:;
    }
    panda$core$Bit $tmp2337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2337.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2314, &$s2338);
        kind2336 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2314, &$s2339);
        kind2336 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2311, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2340 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2341 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2340);
    if ($tmp2341.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2314, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2314, &$s2342);
    org$pandalanguage$pandac$Type* $tmp2343 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2343->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2343->refCount.value = 1;
    panda$core$String* $tmp2345 = panda$core$MutableString$finish$R$panda$core$String(typeName2314);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2343, $tmp2345, kind2336, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2311), ((panda$core$Bit) { true }));
    return $tmp2343;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2346;
    org$pandalanguage$pandac$MethodDecl* $tmp2347 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2346 = $tmp2347;
    if (((panda$core$Bit) { inherited2346 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2348 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2348;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2349 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2346);
    return $tmp2349;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2350 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2351 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2350);
    return $tmp2351;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2352;
    org$pandalanguage$pandac$MethodDecl* $tmp2353 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2352 = $tmp2353;
    if (((panda$core$Bit) { inherited2352 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2354 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2354;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2355 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2352, p_selfType);
    return $tmp2355;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2356;
        }
        break;
        case 52:
        {
            return &$s2357;
        }
        break;
        case 53:
        {
            return &$s2358;
        }
        break;
        case 54:
        {
            return &$s2359;
        }
        break;
        case 55:
        {
            return &$s2360;
        }
        break;
        case 56:
        {
            return &$s2361;
        }
        break;
        case 57:
        {
            return &$s2362;
        }
        break;
        case 58:
        {
            return &$s2363;
        }
        break;
        case 59:
        {
            return &$s2364;
        }
        break;
        case 63:
        {
            return &$s2365;
        }
        break;
        case 62:
        {
            return &$s2366;
        }
        break;
        case 65:
        {
            return &$s2367;
        }
        break;
        case 64:
        {
            return &$s2368;
        }
        break;
        case 68:
        {
            return &$s2369;
        }
        break;
        case 69:
        {
            return &$s2370;
        }
        break;
        case 66:
        {
            return &$s2371;
        }
        break;
        case 67:
        {
            return &$s2372;
        }
        break;
        case 70:
        {
            return &$s2373;
        }
        break;
        case 71:
        {
            return &$s2374;
        }
        break;
        case 49:
        {
            return &$s2375;
        }
        break;
        case 50:
        {
            return &$s2376;
        }
        break;
        case 72:
        {
            return &$s2377;
        }
        break;
        case 1:
        {
            return &$s2378;
        }
        break;
        case 101:
        {
            return &$s2379;
        }
        break;
        case 73:
        {
            return &$s2380;
        }
        break;
        case 60:
        {
            return &$s2381;
        }
        break;
        case 61:
        {
            return &$s2382;
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
            panda$core$Int64 $tmp2383 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2383, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2384.value);
            panda$core$Bit $tmp2385 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2385.value) {
            {
                panda$core$Object* $tmp2386 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2387 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2386));
                return $tmp2387;
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
            panda$core$Object* $tmp2388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2389 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2388));
            return $tmp2389;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2415;
    panda$core$Int64 r2417;
    panda$core$Bit $tmp2391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2390 = $tmp2391.value;
    if ($tmp2390) goto $l2392;
    panda$core$Bit $tmp2393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2390 = $tmp2393.value;
    $l2392:;
    panda$core$Bit $tmp2394 = { $tmp2390 };
    PANDA_ASSERT($tmp2394.value);
    panda$core$Bit $tmp2396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2395 = $tmp2396.value;
    if ($tmp2395) goto $l2397;
    panda$core$Bit $tmp2398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2395 = $tmp2398.value;
    $l2397:;
    panda$core$Bit $tmp2399 = { $tmp2395 };
    PANDA_ASSERT($tmp2399.value);
    panda$core$Bit $tmp2402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2401 = $tmp2402.value;
    if ($tmp2401) goto $l2403;
    panda$core$UInt64 $tmp2405 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2406 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2405);
    bool $tmp2404 = $tmp2406.value;
    if (!$tmp2404) goto $l2407;
    panda$core$Bit $tmp2408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2404 = $tmp2408.value;
    $l2407:;
    panda$core$Bit $tmp2409 = { $tmp2404 };
    $tmp2401 = $tmp2409.value;
    $l2403:;
    panda$core$Bit $tmp2410 = { $tmp2401 };
    bool $tmp2400 = $tmp2410.value;
    if ($tmp2400) goto $l2411;
    panda$core$UInt64 $tmp2412 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2413 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2412);
    $tmp2400 = $tmp2413.value;
    $l2411:;
    panda$core$Bit $tmp2414 = { $tmp2400 };
    if ($tmp2414.value) {
    {
        panda$core$Int64 $tmp2416 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2415 = $tmp2416;
        panda$core$Int64 $tmp2418 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2417 = $tmp2418;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2419 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2419->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2419->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2421 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2422 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2415, r2417);
                panda$core$UInt64 $tmp2423 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2422);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2419, ((panda$core$Int64) { 1004 }), p_position, $tmp2421, $tmp2423);
                return $tmp2419;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2424 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2424->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2424->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2426 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2427 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2415, r2417);
                panda$core$UInt64 $tmp2428 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2427);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2424, ((panda$core$Int64) { 1004 }), p_position, $tmp2426, $tmp2428);
                return $tmp2424;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2429 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2429->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2429->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2431 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2432 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2415, r2417);
                panda$core$UInt64 $tmp2433 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2432);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2429, ((panda$core$Int64) { 1004 }), p_position, $tmp2431, $tmp2433);
                return $tmp2429;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2434 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2434->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2434->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2436 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2437 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2415, r2417);
                panda$core$UInt64 $tmp2438 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2437);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2434, ((panda$core$Int64) { 1004 }), p_position, $tmp2436, $tmp2438);
                return $tmp2434;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2439 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2439->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2439->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2441 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2442 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2415, r2417);
                panda$core$UInt64 $tmp2443 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2442);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2439, ((panda$core$Int64) { 1004 }), p_position, $tmp2441, $tmp2443);
                return $tmp2439;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2444 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2444->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2444->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2446 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2415, r2417);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2444, ((panda$core$Int64) { 1011 }), p_position, $tmp2446, $tmp2447);
                return $tmp2444;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2448 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2448->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2448->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2450 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2451 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2415, r2417);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2448, ((panda$core$Int64) { 1011 }), p_position, $tmp2450, $tmp2451);
                return $tmp2448;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2452 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2452->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2452->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2454 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2455 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2415, r2417);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2452, ((panda$core$Int64) { 1011 }), p_position, $tmp2454, $tmp2455);
                return $tmp2452;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2456 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2456->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2456->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2458 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2459 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2415, r2417);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2456, ((panda$core$Int64) { 1011 }), p_position, $tmp2458, $tmp2459);
                return $tmp2456;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2460 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2460->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2460->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2462 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2463 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2415, r2417);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2460, ((panda$core$Int64) { 1011 }), p_position, $tmp2462, $tmp2463);
                return $tmp2460;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2464 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2464->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2464->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2466 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2467 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2415, r2417);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2464, ((panda$core$Int64) { 1011 }), p_position, $tmp2466, $tmp2467);
                return $tmp2464;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2468 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2468->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2468->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2470 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2471 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2415, r2417);
                panda$core$UInt64 $tmp2472 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2471);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2468, ((panda$core$Int64) { 1004 }), p_position, $tmp2470, $tmp2472);
                return $tmp2468;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2473 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2473->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2473->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2475 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2476 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2415, r2417);
                panda$core$UInt64 $tmp2477 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2476);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2473, ((panda$core$Int64) { 1004 }), p_position, $tmp2475, $tmp2477);
                return $tmp2473;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2478 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2478->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2478->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2480 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2481 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2415, r2417);
                panda$core$UInt64 $tmp2482 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2481);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2478, ((panda$core$Int64) { 1004 }), p_position, $tmp2480, $tmp2482);
                return $tmp2478;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2483 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2483->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2483->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2485 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2486 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2415, r2417);
                panda$core$UInt64 $tmp2487 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2486);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2483, ((panda$core$Int64) { 1004 }), p_position, $tmp2485, $tmp2487);
                return $tmp2483;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2488 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2488->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2488->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2490 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2491 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2415, r2417);
                panda$core$UInt64 $tmp2492 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2491);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2488, ((panda$core$Int64) { 1004 }), p_position, $tmp2490, $tmp2492);
                return $tmp2488;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2493);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2494.value) {
    {
        panda$core$Object* $tmp2495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2495);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2500;
    org$pandalanguage$pandac$IRNode* resolved2508;
    panda$collections$Array* children2513;
    panda$core$UInt64 baseId2519;
    org$pandalanguage$pandac$IRNode* base2520;
    panda$core$UInt64 indexId2527;
    org$pandalanguage$pandac$IRNode* index2528;
    org$pandalanguage$pandac$IRNode* baseRef2533;
    org$pandalanguage$pandac$IRNode* indexRef2536;
    org$pandalanguage$pandac$IRNode* rhsIndex2539;
    org$pandalanguage$pandac$IRNode* value2541;
    panda$core$Bit $tmp2496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2496.value);
    panda$core$Int64 $tmp2497 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2497, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2498.value);
    panda$core$Bit $tmp2499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2499.value) {
    {
        panda$collections$Array* $tmp2501 = (panda$collections$Array*) malloc(40);
        $tmp2501->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2501->refCount.value = 1;
        panda$collections$Array$init($tmp2501);
        args2500 = $tmp2501;
        panda$core$Object* $tmp2503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2500, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2503)));
        panda$collections$Array$add$panda$collections$Array$T(args2500, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2504 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2506 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2504), &$s2505, ((panda$collections$ListView*) args2500));
        return $tmp2506;
    }
    }
    panda$core$Bit $tmp2507 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2507.value);
    org$pandalanguage$pandac$IRNode* $tmp2509 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2508 = $tmp2509;
    if (((panda$core$Bit) { resolved2508 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2510 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2508);
    resolved2508 = $tmp2510;
    panda$core$Int64 $tmp2511 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2508->children);
    panda$core$Bit $tmp2512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2511, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2512.value);
    panda$collections$Array* $tmp2514 = (panda$collections$Array*) malloc(40);
    $tmp2514->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2514->refCount.value = 1;
    panda$collections$Array$init($tmp2514);
    children2513 = $tmp2514;
    panda$core$Object* $tmp2516 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2508->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2517 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2516));
    panda$collections$Array$add$panda$collections$Array$T(children2513, ((panda$core$Object*) $tmp2517));
    panda$core$UInt64 $tmp2518 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2518;
    baseId2519 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2521 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2521->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2521->refCount.value = 1;
    panda$core$Object* $tmp2523 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2513, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2524 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2513, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2521, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2523)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2524)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2519)), ((panda$collections$ListView*) children2513));
    base2520 = $tmp2521;
    panda$collections$Array$clear(children2513);
    panda$core$Object* $tmp2525 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2508->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2513, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2525)));
    panda$core$UInt64 $tmp2526 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2526;
    indexId2527 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2529 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2529->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2529->refCount.value = 1;
    panda$core$Object* $tmp2531 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2513, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2513, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2529, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2531)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2532)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2527)), ((panda$collections$ListView*) children2513));
    index2528 = $tmp2529;
    org$pandalanguage$pandac$IRNode* $tmp2534 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2534->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2534->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2534, ((panda$core$Int64) { 1028 }), base2520->position, base2520->type, baseId2519);
    baseRef2533 = $tmp2534;
    org$pandalanguage$pandac$IRNode* $tmp2537 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2537->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2537->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2537, ((panda$core$Int64) { 1028 }), index2528->position, index2528->type, indexId2527);
    indexRef2536 = $tmp2537;
    org$pandalanguage$pandac$IRNode* $tmp2540 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2533, ((panda$core$Int64) { 101 }), indexRef2536);
    rhsIndex2539 = $tmp2540;
    if (((panda$core$Bit) { rhsIndex2539 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2542 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2543 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2539, $tmp2542, p_right);
    value2541 = $tmp2543;
    if (((panda$core$Bit) { value2541 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2546 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2539->type);
    bool $tmp2545 = $tmp2546.value;
    if (!$tmp2545) goto $l2547;
    panda$core$Bit $tmp2548 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2545 = $tmp2548.value;
    $l2547:;
    panda$core$Bit $tmp2549 = { $tmp2545 };
    bool $tmp2544 = $tmp2549.value;
    if (!$tmp2544) goto $l2550;
    panda$core$Bit $tmp2551 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2539->type, value2541->type);
    $tmp2544 = $tmp2551.value;
    $l2550:;
    panda$core$Bit $tmp2552 = { $tmp2544 };
    if ($tmp2552.value) {
    {
        panda$collections$Array* $tmp2554 = (panda$collections$Array*) malloc(40);
        $tmp2554->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2554->refCount.value = 1;
        panda$collections$Array$init($tmp2554);
        org$pandalanguage$pandac$IRNode* $tmp2556 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2541, &$s2553, ((panda$collections$ListView*) $tmp2554), resolved2508->type);
        value2541 = $tmp2556;
        if (((panda$core$Bit) { value2541 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2513);
    panda$collections$Array$add$panda$collections$Array$T(children2513, ((panda$core$Object*) index2528));
    panda$collections$Array$add$panda$collections$Array$T(children2513, ((panda$core$Object*) value2541));
    org$pandalanguage$pandac$IRNode* $tmp2558 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2520, &$s2557, ((panda$collections$ListView*) children2513));
    return $tmp2558;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2559;
    org$pandalanguage$pandac$IRNode* right2560;
    panda$core$Int64 kind2584;
    org$pandalanguage$pandac$IRNode* resolved2591;
    panda$collections$Array* children2593;
    org$pandalanguage$pandac$IRNode* resolved2600;
    panda$collections$Array* children2602;
    org$pandalanguage$pandac$ClassDecl* cl2614;
    org$pandalanguage$pandac$ClassDecl* cl2631;
    org$pandalanguage$pandac$IRNode* finalLeft2647;
    org$pandalanguage$pandac$IRNode* finalRight2650;
    panda$collections$Array* children2653;
    panda$collections$Array* children2667;
    panda$collections$Array* children2679;
    org$pandalanguage$pandac$IRNode* reusedLeft2685;
    org$pandalanguage$pandac$ClassDecl* cl2702;
    panda$collections$ListView* parameters2704;
    org$pandalanguage$pandac$Symbol* methods2706;
    org$pandalanguage$pandac$Type* type2710;
    panda$collections$Array* types2711;
    org$pandalanguage$pandac$MethodDecl* m2715;
    panda$collections$Iterator* m$Iter2720;
    org$pandalanguage$pandac$MethodDecl* m2732;
    panda$collections$Array* children2743;
    panda$collections$Array* children2772;
    panda$collections$Array* children2788;
    org$pandalanguage$pandac$Type* resultType2811;
    org$pandalanguage$pandac$IRNode* result2815;
    org$pandalanguage$pandac$IRNode* resolved2818;
    org$pandalanguage$pandac$IRNode* target2824;
    left2559 = p_rawLeft;
    right2560 = p_rawRight;
    panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2559->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2561.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2562 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2560);
        right2560 = $tmp2562;
        if (((panda$core$Bit) { right2560 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2563 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2559, right2560->type);
        if (((panda$core$Bit) { $tmp2563.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2564 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2559, right2560->type);
            left2559 = $tmp2564;
        }
        }
    }
    }
    panda$core$Bit $tmp2566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2560->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2565 = $tmp2566.value;
    if (!$tmp2565) goto $l2567;
    panda$core$Int64$nullable $tmp2568 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2560, left2559->type);
    $tmp2565 = ((panda$core$Bit) { $tmp2568.nonnull }).value;
    $l2567:;
    panda$core$Bit $tmp2569 = { $tmp2565 };
    if ($tmp2569.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2570 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2560, left2559->type);
        right2560 = $tmp2570;
    }
    }
    panda$core$Bit $tmp2574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2573 = $tmp2574.value;
    if ($tmp2573) goto $l2575;
    panda$core$Bit $tmp2576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2573 = $tmp2576.value;
    $l2575:;
    panda$core$Bit $tmp2577 = { $tmp2573 };
    bool $tmp2572 = $tmp2577.value;
    if ($tmp2572) goto $l2578;
    panda$core$Bit $tmp2579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2572 = $tmp2579.value;
    $l2578:;
    panda$core$Bit $tmp2580 = { $tmp2572 };
    bool $tmp2571 = $tmp2580.value;
    if ($tmp2571) goto $l2581;
    panda$core$Bit $tmp2582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2571 = $tmp2582.value;
    $l2581:;
    panda$core$Bit $tmp2583 = { $tmp2571 };
    if ($tmp2583.value) {
    {
        panda$core$Bit $tmp2586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2585 = $tmp2586.value;
        if ($tmp2585) goto $l2587;
        panda$core$Bit $tmp2588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2585 = $tmp2588.value;
        $l2587:;
        panda$core$Bit $tmp2589 = { $tmp2585 };
        if ($tmp2589.value) {
        {
            kind2584 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2584 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2559->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2590.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2592 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2560);
            resolved2591 = $tmp2592;
            if (((panda$core$Bit) { resolved2591 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2594 = (panda$collections$Array*) malloc(40);
            $tmp2594->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2594->refCount.value = 1;
            panda$collections$Array$init($tmp2594);
            children2593 = $tmp2594;
            panda$collections$Array$add$panda$collections$Array$T(children2593, ((panda$core$Object*) resolved2591));
            org$pandalanguage$pandac$IRNode* $tmp2596 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2596->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2596->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2598 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2596, kind2584, p_position, $tmp2598, ((panda$collections$ListView*) children2593));
            return $tmp2596;
        }
        }
        panda$core$Bit $tmp2599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2560->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2599.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2601 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2559);
            resolved2600 = $tmp2601;
            if (((panda$core$Bit) { resolved2600 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2603 = (panda$collections$Array*) malloc(40);
            $tmp2603->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2603->refCount.value = 1;
            panda$collections$Array$init($tmp2603);
            children2602 = $tmp2603;
            panda$collections$Array$add$panda$collections$Array$T(children2602, ((panda$core$Object*) resolved2600));
            org$pandalanguage$pandac$IRNode* $tmp2605 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2605->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2605->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2607 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2605, kind2584, p_position, $tmp2607, ((panda$collections$ListView*) children2602));
            return $tmp2605;
        }
        }
    }
    }
    panda$core$Bit $tmp2609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2608 = $tmp2609.value;
    if ($tmp2608) goto $l2610;
    panda$core$Bit $tmp2611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2608 = $tmp2611.value;
    $l2610:;
    panda$core$Bit $tmp2612 = { $tmp2608 };
    if ($tmp2612.value) {
    {
        panda$core$Bit $tmp2613 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2559->type);
        if ($tmp2613.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2615 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2559->type);
            cl2614 = $tmp2615;
            if (((panda$core$Bit) { cl2614 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2616 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2614);
            if ($tmp2616.value) {
            {
                panda$core$String* $tmp2618 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2617, $tmp2618);
                panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, &$s2620);
                panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2621, ((panda$core$Object*) left2559->type));
                panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2623);
                panda$core$String* $tmp2626 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2625, ((panda$core$Object*) right2560->type));
                panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2626, &$s2627);
                panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2624, $tmp2628);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2629);
            }
            }
        }
        }
        panda$core$Bit $tmp2630 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2560->type);
        if ($tmp2630.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2632 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2560->type);
            cl2631 = $tmp2632;
            if (((panda$core$Bit) { cl2631 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2633 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2631);
            if ($tmp2633.value) {
            {
                panda$core$String* $tmp2635 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2634, $tmp2635);
                panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2636, &$s2637);
                panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2638, ((panda$core$Object*) left2559->type));
                panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, &$s2640);
                panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2642, ((panda$core$Object*) right2560->type));
                panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2643, &$s2644);
                panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, $tmp2645);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2646);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2648 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2649 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2559, $tmp2648);
        finalLeft2647 = $tmp2649;
        if (((panda$core$Bit) { finalLeft2647 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2651 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2652 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2560, $tmp2651);
        finalRight2650 = $tmp2652;
        if (((panda$core$Bit) { finalRight2650 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2654 = (panda$collections$Array*) malloc(40);
        $tmp2654->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2654->refCount.value = 1;
        panda$collections$Array$init($tmp2654);
        children2653 = $tmp2654;
        panda$collections$Array$add$panda$collections$Array$T(children2653, ((panda$core$Object*) finalLeft2647));
        panda$collections$Array$add$panda$collections$Array$T(children2653, ((panda$core$Object*) finalRight2650));
        org$pandalanguage$pandac$IRNode* $tmp2656 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2656->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2656->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2658 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2656, ((panda$core$Int64) { 1023 }), p_position, $tmp2658, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2653));
        return $tmp2656;
    }
    }
    panda$core$Bit $tmp2659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2659.value) {
    {
        panda$core$Bit $tmp2660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2559->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2660.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2661 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2559, p_op, right2560);
            return $tmp2661;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2662 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2559);
        left2559 = $tmp2662;
        if (((panda$core$Bit) { left2559 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2663 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2560, left2559->type);
        right2560 = $tmp2663;
        if (((panda$core$Bit) { right2560 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2664 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2559);
        panda$core$Bit $tmp2665 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2664);
        if ($tmp2665.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2559->position, &$s2666);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2668 = (panda$collections$Array*) malloc(40);
        $tmp2668->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2668->refCount.value = 1;
        panda$collections$Array$init($tmp2668);
        children2667 = $tmp2668;
        panda$collections$Array$add$panda$collections$Array$T(children2667, ((panda$core$Object*) left2559));
        panda$collections$Array$add$panda$collections$Array$T(children2667, ((panda$core$Object*) right2560));
        org$pandalanguage$pandac$IRNode* $tmp2670 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2670->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2670->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2670, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2667));
        return $tmp2670;
    }
    }
    panda$core$Bit $tmp2672 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2672.value) {
    {
        panda$core$Bit $tmp2673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2559->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2673.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2674 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2559, p_op, right2560);
            return $tmp2674;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2675 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2559);
        left2559 = $tmp2675;
        if (((panda$core$Bit) { left2559 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2676 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2559);
        panda$core$Bit $tmp2677 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2676);
        if ($tmp2677.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2559->position, &$s2678);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2680 = (panda$collections$Array*) malloc(40);
        $tmp2680->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2680->refCount.value = 1;
        panda$collections$Array$init($tmp2680);
        children2679 = $tmp2680;
        panda$collections$Array$add$panda$collections$Array$T(children2679, ((panda$core$Object*) left2559));
        panda$core$UInt64 $tmp2682 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2682;
        org$pandalanguage$pandac$IRNode* $tmp2683 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2683->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2683->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2683, ((panda$core$Int64) { 1027 }), left2559->position, left2559->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2679));
        left2559 = $tmp2683;
        org$pandalanguage$pandac$IRNode* $tmp2686 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2686->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2686->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2686, ((panda$core$Int64) { 1028 }), left2559->position, left2559->type, self->reusedValueCount);
        reusedLeft2685 = $tmp2686;
        panda$core$Int64 $tmp2688 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2689 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2685, $tmp2688, right2560);
        right2560 = $tmp2689;
        if (((panda$core$Bit) { right2560 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2691 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2559->type);
        bool $tmp2690 = $tmp2691.value;
        if (!$tmp2690) goto $l2692;
        panda$core$Bit $tmp2693 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2559->type, right2560->type);
        $tmp2690 = $tmp2693.value;
        $l2692:;
        panda$core$Bit $tmp2694 = { $tmp2690 };
        if ($tmp2694.value) {
        {
            panda$collections$Array* $tmp2696 = (panda$collections$Array*) malloc(40);
            $tmp2696->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2696->refCount.value = 1;
            panda$collections$Array$init($tmp2696);
            org$pandalanguage$pandac$IRNode* $tmp2698 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2560, &$s2695, ((panda$collections$ListView*) $tmp2696), left2559->type);
            right2560 = $tmp2698;
            if (((panda$core$Bit) { right2560 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2699 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2559, ((panda$core$Int64) { 73 }), right2560);
        return $tmp2699;
    }
    }
    panda$core$Bit $tmp2700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2700.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2701 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2559);
        left2559 = $tmp2701;
        if (((panda$core$Bit) { left2559 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2703 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2559->type);
        cl2702 = $tmp2703;
        if (((panda$core$Bit) { cl2702 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2705 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2559->type);
        parameters2704 = $tmp2705;
        org$pandalanguage$pandac$SymbolTable* $tmp2707 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2702);
        org$pandalanguage$pandac$Symbol* $tmp2709 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2707, &$s2708);
        methods2706 = $tmp2709;
        if (((panda$core$Bit) { methods2706 != NULL }).value) {
        {
            panda$collections$Array* $tmp2712 = (panda$collections$Array*) malloc(40);
            $tmp2712->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2712->refCount.value = 1;
            panda$collections$Array$init($tmp2712);
            types2711 = $tmp2712;
            panda$core$Bit $tmp2714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2706->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2714.value) {
            {
                m2715 = ((org$pandalanguage$pandac$MethodDecl*) methods2706);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2715);
                org$pandalanguage$pandac$MethodRef* $tmp2716 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2716->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2716->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2716, m2715, parameters2704);
                org$pandalanguage$pandac$Type* $tmp2718 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2716);
                panda$collections$Array$add$panda$collections$Array$T(types2711, ((panda$core$Object*) $tmp2718));
            }
            }
            else {
            {
                panda$core$Bit $tmp2719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2706->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2719.value);
                {
                    ITable* $tmp2721 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2706)->methods)->$class->itable;
                    while ($tmp2721->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2721 = $tmp2721->next;
                    }
                    $fn2723 $tmp2722 = $tmp2721->methods[0];
                    panda$collections$Iterator* $tmp2724 = $tmp2722(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2706)->methods));
                    m$Iter2720 = $tmp2724;
                    $l2725:;
                    ITable* $tmp2727 = m$Iter2720->$class->itable;
                    while ($tmp2727->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2727 = $tmp2727->next;
                    }
                    $fn2729 $tmp2728 = $tmp2727->methods[0];
                    panda$core$Bit $tmp2730 = $tmp2728(m$Iter2720);
                    panda$core$Bit $tmp2731 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2730);
                    if (!$tmp2731.value) goto $l2726;
                    {
                        ITable* $tmp2733 = m$Iter2720->$class->itable;
                        while ($tmp2733->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2733 = $tmp2733->next;
                        }
                        $fn2735 $tmp2734 = $tmp2733->methods[1];
                        panda$core$Object* $tmp2736 = $tmp2734(m$Iter2720);
                        m2732 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2736);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2732);
                        org$pandalanguage$pandac$MethodRef* $tmp2737 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2737->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2737->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2737, m2732, parameters2704);
                        org$pandalanguage$pandac$Type* $tmp2739 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2737);
                        panda$collections$Array$add$panda$collections$Array$T(types2711, ((panda$core$Object*) $tmp2739));
                    }
                    goto $l2725;
                    $l2726:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2740 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2740->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2740->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2740, ((panda$collections$ListView*) types2711));
            type2710 = $tmp2740;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2742 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2710 = $tmp2742;
        }
        }
        panda$collections$Array* $tmp2744 = (panda$collections$Array*) malloc(40);
        $tmp2744->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2744->refCount.value = 1;
        panda$collections$Array$init($tmp2744);
        children2743 = $tmp2744;
        panda$collections$Array$add$panda$collections$Array$T(children2743, ((panda$core$Object*) left2559));
        panda$collections$Array$add$panda$collections$Array$T(children2743, ((panda$core$Object*) right2560));
        org$pandalanguage$pandac$IRNode* $tmp2746 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2746->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2746->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2746, ((panda$core$Int64) { 1040 }), p_position, type2710, ((panda$collections$ListView*) children2743));
        return $tmp2746;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2748 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2749 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2559->type, $tmp2748);
    if ($tmp2749.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2751 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2752 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2560->type, $tmp2751);
        bool $tmp2750 = $tmp2752.value;
        if (!$tmp2750) goto $l2753;
        panda$core$Bit $tmp2758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2757 = $tmp2758.value;
        if ($tmp2757) goto $l2759;
        panda$core$Bit $tmp2760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2757 = $tmp2760.value;
        $l2759:;
        panda$core$Bit $tmp2761 = { $tmp2757 };
        bool $tmp2756 = $tmp2761.value;
        if ($tmp2756) goto $l2762;
        panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2756 = $tmp2763.value;
        $l2762:;
        panda$core$Bit $tmp2764 = { $tmp2756 };
        bool $tmp2755 = $tmp2764.value;
        if ($tmp2755) goto $l2765;
        panda$core$Bit $tmp2766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2755 = $tmp2766.value;
        $l2765:;
        panda$core$Bit $tmp2767 = { $tmp2755 };
        bool $tmp2754 = $tmp2767.value;
        if ($tmp2754) goto $l2768;
        panda$core$Bit $tmp2769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2754 = $tmp2769.value;
        $l2768:;
        panda$core$Bit $tmp2770 = { $tmp2754 };
        $tmp2750 = $tmp2770.value;
        $l2753:;
        panda$core$Bit $tmp2771 = { $tmp2750 };
        if ($tmp2771.value) {
        {
            panda$collections$Array* $tmp2773 = (panda$collections$Array*) malloc(40);
            $tmp2773->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2773->refCount.value = 1;
            panda$collections$Array$init($tmp2773);
            children2772 = $tmp2773;
            panda$collections$Array$add$panda$collections$Array$T(children2772, ((panda$core$Object*) left2559));
            panda$collections$Array$add$panda$collections$Array$T(children2772, ((panda$core$Object*) right2560));
            org$pandalanguage$pandac$IRNode* $tmp2775 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2775->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2775->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2775, ((panda$core$Int64) { 1023 }), p_position, left2559->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2772));
            return $tmp2775;
        }
        }
        panda$core$String* $tmp2778 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2777, $tmp2778);
        panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, &$s2780);
        panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2781, ((panda$core$Object*) left2559->type));
        panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, &$s2783);
        panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2784, ((panda$core$Object*) right2560->type));
        panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, &$s2786);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2787);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2789 = (panda$collections$Array*) malloc(40);
    $tmp2789->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2789->refCount.value = 1;
    panda$collections$Array$init($tmp2789);
    children2788 = $tmp2789;
    panda$core$Bit $tmp2793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2559->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2792 = $tmp2793.value;
    if ($tmp2792) goto $l2794;
    panda$core$Bit $tmp2795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2559->kind, ((panda$core$Int64) { 1032 }));
    $tmp2792 = $tmp2795.value;
    $l2794:;
    panda$core$Bit $tmp2796 = { $tmp2792 };
    bool $tmp2791 = $tmp2796.value;
    if (!$tmp2791) goto $l2797;
    panda$core$Bit $tmp2799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2560->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2798 = $tmp2799.value;
    if ($tmp2798) goto $l2800;
    panda$core$Bit $tmp2801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2560->kind, ((panda$core$Int64) { 1032 }));
    $tmp2798 = $tmp2801.value;
    $l2800:;
    panda$core$Bit $tmp2802 = { $tmp2798 };
    $tmp2791 = $tmp2802.value;
    $l2797:;
    panda$core$Bit $tmp2803 = { $tmp2791 };
    if ($tmp2803.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2804 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2559, p_op, right2560);
        return $tmp2804;
    }
    }
    panda$core$Bit $tmp2806 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2559->type);
    bool $tmp2805 = $tmp2806.value;
    if (!$tmp2805) goto $l2807;
    panda$core$Int64$nullable $tmp2808 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2560, left2559->type);
    $tmp2805 = ((panda$core$Bit) { $tmp2808.nonnull }).value;
    $l2807:;
    panda$core$Bit $tmp2809 = { $tmp2805 };
    if ($tmp2809.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2810 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2560, left2559->type);
        right2560 = $tmp2810;
        PANDA_ASSERT(((panda$core$Bit) { right2560 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2788, ((panda$core$Object*) left2559));
        panda$collections$Array$add$panda$collections$Array$T(children2788, ((panda$core$Object*) right2560));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2812 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2811 = $tmp2812;
            }
            break;
            default:
            {
                resultType2811 = left2559->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2813 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2813->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2813->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2813, ((panda$core$Int64) { 1023 }), p_position, resultType2811, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2788));
        return $tmp2813;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2788, ((panda$core$Object*) right2560));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2816 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2817 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2559, $tmp2816, ((panda$collections$ListView*) children2788));
    result2815 = $tmp2817;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2815 == NULL }).value) {
    {
        panda$collections$Array$clear(children2788);
        panda$collections$Array$add$panda$collections$Array$T(children2788, ((panda$core$Object*) left2559));
        org$pandalanguage$pandac$IRNode* $tmp2819 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2560);
        resolved2818 = $tmp2819;
        bool $tmp2820 = ((panda$core$Bit) { resolved2818 != NULL }).value;
        if (!$tmp2820) goto $l2821;
        panda$core$Bit $tmp2822 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2818->type);
        $tmp2820 = $tmp2822.value;
        $l2821:;
        panda$core$Bit $tmp2823 = { $tmp2820 };
        if ($tmp2823.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2788, ((panda$core$Object*) resolved2818));
            org$pandalanguage$pandac$IRNode* $tmp2825 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2825->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2825->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2827 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2825, ((panda$core$Int64) { 1001 }), resolved2818->position, $tmp2827, resolved2818->type);
            target2824 = $tmp2825;
            panda$core$String* $tmp2828 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2829 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2824, $tmp2828, ((panda$collections$ListView*) children2788));
            result2815 = $tmp2829;
        }
        }
    }
    }
    return result2815;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2830;
    org$pandalanguage$pandac$IRNode* right2833;
    panda$core$Object* $tmp2831 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2832 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2831));
    left2830 = $tmp2832;
    if (((panda$core$Bit) { left2830 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2834 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2835 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2834));
    right2833 = $tmp2835;
    if (((panda$core$Bit) { right2833 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2836 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2830, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2833);
    return $tmp2836;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2840;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2837 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2837;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2838 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2839 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2838, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2839.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2840, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp2841 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp2840);
            return ((panda$collections$ListView*) $tmp2841);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2842 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2843 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2842));
            return $tmp2843;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2844 = (panda$collections$Array*) malloc(40);
            $tmp2844->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2844->refCount.value = 1;
            panda$collections$Array$init($tmp2844);
            return ((panda$collections$ListView*) $tmp2844);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2846.value) {
        {
            panda$collections$ListView* $tmp2847 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2847;
        }
        }
        panda$collections$ListView* $tmp2848 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2848;
    }
    }
    panda$collections$Array* $tmp2849 = (panda$collections$Array*) malloc(40);
    $tmp2849->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2849->refCount.value = 1;
    panda$collections$Array$init($tmp2849);
    return ((panda$collections$ListView*) $tmp2849);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2852;
    org$pandalanguage$pandac$ClassDecl* cl2854;
    org$pandalanguage$pandac$Symbol* s2856;
    org$pandalanguage$pandac$MethodDecl* m2859;
    panda$collections$Iterator* test$Iter2864;
    org$pandalanguage$pandac$MethodDecl* test2876;
    org$pandalanguage$pandac$MethodRef* ref2888;
    panda$collections$Array* children2892;
    org$pandalanguage$pandac$IRNode* methodRef2895;
    org$pandalanguage$pandac$Position $tmp2901;
    panda$collections$Array* args2902;
    panda$collections$Array* children2911;
    panda$collections$Array* children2921;
    org$pandalanguage$pandac$IRNode* coerced2930;
    panda$collections$Array* children2933;
    panda$core$Bit $tmp2851 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2851.value) {
    {
        panda$core$String* $tmp2853 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2852 = $tmp2853;
        org$pandalanguage$pandac$ClassDecl* $tmp2855 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2854 = $tmp2855;
        if (((panda$core$Bit) { cl2854 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2857 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2854);
        org$pandalanguage$pandac$Symbol* $tmp2858 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2857, name2852);
        s2856 = $tmp2858;
        if (((panda$core$Bit) { s2856 != NULL }).value) {
        {
            m2859 = NULL;
            switch (s2856->kind.value) {
                case 204:
                {
                    m2859 = ((org$pandalanguage$pandac$MethodDecl*) s2856);
                    panda$core$Int64 $tmp2860 = panda$collections$Array$get_count$R$panda$core$Int64(m2859->parameters);
                    panda$core$Bit $tmp2861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2860, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2861.value);
                    panda$core$Bit $tmp2862 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2859->annotations);
                    panda$core$Bit $tmp2863 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2862);
                    PANDA_ASSERT($tmp2863.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2865 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2856)->methods)->$class->itable;
                        while ($tmp2865->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2865 = $tmp2865->next;
                        }
                        $fn2867 $tmp2866 = $tmp2865->methods[0];
                        panda$collections$Iterator* $tmp2868 = $tmp2866(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2856)->methods));
                        test$Iter2864 = $tmp2868;
                        $l2869:;
                        ITable* $tmp2871 = test$Iter2864->$class->itable;
                        while ($tmp2871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2871 = $tmp2871->next;
                        }
                        $fn2873 $tmp2872 = $tmp2871->methods[0];
                        panda$core$Bit $tmp2874 = $tmp2872(test$Iter2864);
                        panda$core$Bit $tmp2875 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2874);
                        if (!$tmp2875.value) goto $l2870;
                        {
                            ITable* $tmp2877 = test$Iter2864->$class->itable;
                            while ($tmp2877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2877 = $tmp2877->next;
                            }
                            $fn2879 $tmp2878 = $tmp2877->methods[1];
                            panda$core$Object* $tmp2880 = $tmp2878(test$Iter2864);
                            test2876 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2880);
                            panda$core$Bit $tmp2882 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2876->annotations);
                            panda$core$Bit $tmp2883 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2882);
                            bool $tmp2881 = $tmp2883.value;
                            if (!$tmp2881) goto $l2884;
                            panda$core$Int64 $tmp2885 = panda$collections$Array$get_count$R$panda$core$Int64(test2876->parameters);
                            panda$core$Bit $tmp2886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2885, ((panda$core$Int64) { 0 }));
                            $tmp2881 = $tmp2886.value;
                            $l2884:;
                            panda$core$Bit $tmp2887 = { $tmp2881 };
                            if ($tmp2887.value) {
                            {
                                m2859 = test2876;
                                goto $l2870;
                            }
                            }
                        }
                        goto $l2869;
                        $l2870:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2859 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2859);
                org$pandalanguage$pandac$MethodRef* $tmp2889 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2889->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2889->refCount.value = 1;
                panda$collections$ListView* $tmp2891 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2889, m2859, $tmp2891);
                ref2888 = $tmp2889;
                panda$collections$Array* $tmp2893 = (panda$collections$Array*) malloc(40);
                $tmp2893->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2893->refCount.value = 1;
                panda$collections$Array$init($tmp2893);
                children2892 = $tmp2893;
                panda$collections$Array$add$panda$collections$Array$T(children2892, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2896 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2896->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2896->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2898 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp2898->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2898->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2901);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp2898, &$s2900, ((panda$core$Int64) { 16 }), $tmp2901, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2896, ((panda$core$Int64) { 1002 }), p_position, $tmp2898, ((panda$core$Object*) ref2888), ((panda$collections$ListView*) children2892));
                methodRef2895 = $tmp2896;
                panda$collections$Array* $tmp2903 = (panda$collections$Array*) malloc(40);
                $tmp2903->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2903->refCount.value = 1;
                panda$collections$Array$init($tmp2903);
                args2902 = $tmp2903;
                org$pandalanguage$pandac$IRNode* $tmp2905 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2895, ((panda$collections$ListView*) args2902));
                return $tmp2905;
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
                    org$pandalanguage$pandac$IRNode* $tmp2906 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2906->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2906->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2906, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2906;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2908 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2908->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2908->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2908, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2908;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2910 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2910.value) {
                    {
                        panda$collections$Array* $tmp2912 = (panda$collections$Array*) malloc(40);
                        $tmp2912->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2912->refCount.value = 1;
                        panda$collections$Array$init($tmp2912);
                        children2911 = $tmp2912;
                        panda$collections$Array$add$panda$collections$Array$T(children2911, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2914 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp2914->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2914->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2914, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2911));
                        return $tmp2914;
                    }
                    }
                }
            }
            panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2916, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, &$s2918);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2919);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2920 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2920.value) {
            {
                panda$collections$Array* $tmp2922 = (panda$collections$Array*) malloc(40);
                $tmp2922->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2922->refCount.value = 1;
                panda$collections$Array$init($tmp2922);
                children2921 = $tmp2922;
                panda$collections$Array$add$panda$collections$Array$T(children2921, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2924 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2924->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2924->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2924, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2921));
                return $tmp2924;
            }
            }
            else {
            {
                panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2926, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, &$s2928);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2929);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2931 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2932 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2931);
            coerced2930 = $tmp2932;
            if (((panda$core$Bit) { coerced2930 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2934 = (panda$collections$Array*) malloc(40);
            $tmp2934->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2934->refCount.value = 1;
            panda$collections$Array$init($tmp2934);
            children2933 = $tmp2934;
            panda$collections$Array$add$panda$collections$Array$T(children2933, ((panda$core$Object*) coerced2930));
            org$pandalanguage$pandac$IRNode* $tmp2936 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2936->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2936->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2936, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2933));
            return $tmp2936;
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
    org$pandalanguage$pandac$IRNode* base2941;
    panda$core$Bit $tmp2938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2938.value);
    panda$core$Int64 $tmp2939 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2939, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2940.value);
    panda$core$Object* $tmp2942 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2943 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2942));
    base2941 = $tmp2943;
    if (((panda$core$Bit) { base2941 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2944 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2941, p_p->position);
    return $tmp2944;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2946;
    panda$collections$Array* args2949;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2952;
    org$pandalanguage$pandac$IRNode* arg2967;
    panda$core$Bit $tmp2945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2945.value);
    panda$core$Object* $tmp2947 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2948 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2947));
    m2946 = $tmp2948;
    if (((panda$core$Bit) { m2946 != NULL }).value) {
    {
        panda$collections$Array* $tmp2950 = (panda$collections$Array*) malloc(40);
        $tmp2950->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2950->refCount.value = 1;
        panda$collections$Array$init($tmp2950);
        args2949 = $tmp2950;
        panda$core$Int64 $tmp2953 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2952, ((panda$core$Int64) { 1 }), $tmp2953, ((panda$core$Bit) { false }));
        int64_t $tmp2955 = $tmp2952.min.value;
        panda$core$Int64 i2954 = { $tmp2955 };
        int64_t $tmp2957 = $tmp2952.max.value;
        bool $tmp2958 = $tmp2952.inclusive.value;
        if ($tmp2958) goto $l2965; else goto $l2966;
        $l2965:;
        if ($tmp2955 <= $tmp2957) goto $l2959; else goto $l2961;
        $l2966:;
        if ($tmp2955 < $tmp2957) goto $l2959; else goto $l2961;
        $l2959:;
        {
            panda$core$Object* $tmp2968 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2954);
            org$pandalanguage$pandac$IRNode* $tmp2969 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2968));
            arg2967 = $tmp2969;
            if (((panda$core$Bit) { arg2967 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2949, ((panda$core$Object*) arg2967));
        }
        $l2962:;
        int64_t $tmp2971 = $tmp2957 - i2954.value;
        if ($tmp2958) goto $l2972; else goto $l2973;
        $l2972:;
        if ($tmp2971 >= 1) goto $l2970; else goto $l2961;
        $l2973:;
        if ($tmp2971 > 1) goto $l2970; else goto $l2961;
        $l2970:;
        i2954.value += 1;
        goto $l2959;
        $l2961:;
        org$pandalanguage$pandac$IRNode* $tmp2976 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2946, ((panda$collections$ListView*) args2949));
        return $tmp2976;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2980;
    org$pandalanguage$pandac$ClassDecl* cl2989;
    panda$core$String* name2991;
    org$pandalanguage$pandac$ClassDecl* cl2999;
    org$pandalanguage$pandac$Symbol* s3012;
    panda$core$Bit $tmp2977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2977.value);
    panda$core$Int64 $tmp2978 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2978, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2979.value);
    panda$core$Object* $tmp2981 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2982 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2981));
    base2980 = $tmp2982;
    if (((panda$core$Bit) { base2980 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2984 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2980->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2983 = $tmp2984.value;
    if (!$tmp2983) goto $l2985;
    panda$core$Bit $tmp2986 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2980->kind, ((panda$core$Int64) { 1024 }));
    $tmp2983 = $tmp2986.value;
    $l2985:;
    panda$core$Bit $tmp2987 = { $tmp2983 };
    if ($tmp2987.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2988 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2980);
        base2980 = $tmp2988;
    }
    }
    if (((panda$core$Bit) { base2980 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2980->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2990 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2980->payload));
            cl2989 = $tmp2990;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp2993 = (($fn2992) base2980->payload->$class->vtable[0])(base2980->payload);
            panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, &$s2994);
            panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2995, p_d->payload);
            panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, &$s2997);
            name2991 = $tmp2998;
            org$pandalanguage$pandac$ClassDecl* $tmp3000 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2991);
            cl2999 = $tmp3000;
            if (((panda$core$Bit) { cl2999 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3001 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3001->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3001->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3003 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3004 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2999);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3001, ((panda$core$Int64) { 1001 }), p_d->position, $tmp3003, $tmp3004);
                return $tmp3001;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3005 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3005->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3005->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3007 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3005, ((panda$core$Int64) { 1037 }), p_d->position, $tmp3007, name2991);
            return $tmp3005;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3008 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3008));
            panda$core$Object* $tmp3009 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3010 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3009)->rawSuper);
            cl2989 = $tmp3010;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3011 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2980->type);
            cl2989 = $tmp3011;
        }
    }
    if (((panda$core$Bit) { cl2989 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3013 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2989);
    org$pandalanguage$pandac$Symbol* $tmp3014 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3013, ((panda$core$String*) p_d->payload));
    s3012 = $tmp3014;
    if (((panda$core$Bit) { s3012 == NULL }).value) {
    {
        panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3015, ((panda$core$Object*) base2980->type));
        panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
        panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3019, p_d->payload);
        panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, &$s3021);
        panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, $tmp3022);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_d->position, $tmp3023);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3024 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2989);
    org$pandalanguage$pandac$IRNode* $tmp3025 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base2980, s3012, $tmp3024);
    return $tmp3025;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3027;
    panda$core$Bit $tmp3026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3026.value);
    org$pandalanguage$pandac$Symbol* $tmp3028 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3027 = $tmp3028;
    if (((panda$core$Bit) { s3027 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3029 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3027 = ((org$pandalanguage$pandac$Symbol*) $tmp3029);
    }
    }
    if (((panda$core$Bit) { s3027 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3030 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3027, self->symbolTable);
        return $tmp3030;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3031 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3031->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3031->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3033 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3031, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3033, ((panda$core$String*) p_i->payload));
    return $tmp3031;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3034;
    org$pandalanguage$pandac$Type* $tmp3035 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3036 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3035);
    resolved3034 = $tmp3036;
    if (((panda$core$Bit) { resolved3034 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3037 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3037->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3037->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3039 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3037, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3039, resolved3034);
    return $tmp3037;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3047;
    org$pandalanguage$pandac$IRNode* end3055;
    org$pandalanguage$pandac$IRNode* step3063;
    panda$collections$Array* children3070;
    org$pandalanguage$pandac$Position $tmp3078;
    panda$core$Bit $tmp3041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3040 = $tmp3041.value;
    if ($tmp3040) goto $l3042;
    panda$core$Bit $tmp3043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3040 = $tmp3043.value;
    $l3042:;
    panda$core$Bit $tmp3044 = { $tmp3040 };
    PANDA_ASSERT($tmp3044.value);
    panda$core$Int64 $tmp3045 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3045, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3046.value);
    panda$core$Object* $tmp3048 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3048)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3049.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3050 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3050->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3050->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3052 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3050, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3052);
        start3047 = $tmp3050;
    }
    }
    else {
    {
        panda$core$Object* $tmp3053 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3054 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3053));
        start3047 = $tmp3054;
        if (((panda$core$Bit) { start3047 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3056 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3056)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3057.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3058 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3058->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3058->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3060 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3058, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3060);
        end3055 = $tmp3058;
    }
    }
    else {
    {
        panda$core$Object* $tmp3061 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3062 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3061));
        end3055 = $tmp3062;
        if (((panda$core$Bit) { end3055 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3064 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3064)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3065.value) {
    {
        step3063 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3066 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3067 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3066));
        org$pandalanguage$pandac$Type* $tmp3068 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3069 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3067, $tmp3068);
        step3063 = $tmp3069;
        if (((panda$core$Bit) { step3063 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3071 = (panda$collections$Array*) malloc(40);
    $tmp3071->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3071->refCount.value = 1;
    panda$collections$Array$init($tmp3071);
    children3070 = $tmp3071;
    panda$collections$Array$add$panda$collections$Array$T(children3070, ((panda$core$Object*) start3047));
    panda$collections$Array$add$panda$collections$Array$T(children3070, ((panda$core$Object*) end3055));
    if (((panda$core$Bit) { step3063 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3070, ((panda$core$Object*) step3063));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3073 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3073->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3073->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3075 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3075->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3075->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3078);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3075, &$s3077, ((panda$core$Int64) { 17 }), $tmp3078, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3073, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3075, ((panda$core$Object*) wrap_panda$core$Bit($tmp3079)), ((panda$collections$ListView*) children3070));
    return $tmp3073;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3080 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3080->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3080->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3082 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3080, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3082, ((panda$core$String*) p_s->payload));
    return $tmp3080;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3087;
    org$pandalanguage$pandac$ClassDecl* cl3088;
    panda$collections$Array* subtypes3095;
    panda$core$MutableString* name3099;
    panda$core$String* separator3103;
    panda$collections$Iterator* p$Iter3105;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3117;
    panda$collections$Array* pType3122;
    panda$core$String* pName3125;
    panda$core$Bit $tmp3083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3083.value);
    panda$core$Object* $tmp3084 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3085 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3084)->annotations);
    if ($tmp3085.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3086);
        return NULL;
    }
    }
    panda$core$Object* $tmp3089 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3088 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3089);
    ITable* $tmp3090 = ((panda$collections$CollectionView*) cl3088->parameters)->$class->itable;
    while ($tmp3090->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3090 = $tmp3090->next;
    }
    $fn3092 $tmp3091 = $tmp3090->methods[0];
    panda$core$Int64 $tmp3093 = $tmp3091(((panda$collections$CollectionView*) cl3088->parameters));
    panda$core$Bit $tmp3094 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3093, ((panda$core$Int64) { 0 }));
    if ($tmp3094.value) {
    {
        panda$collections$Array* $tmp3096 = (panda$collections$Array*) malloc(40);
        $tmp3096->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3096->refCount.value = 1;
        panda$collections$Array$init($tmp3096);
        subtypes3095 = $tmp3096;
        org$pandalanguage$pandac$Type* $tmp3098 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3088);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3095, ((panda$core$Object*) $tmp3098));
        panda$core$MutableString* $tmp3100 = (panda$core$MutableString*) malloc(40);
        $tmp3100->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3100->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3100, ((org$pandalanguage$pandac$Symbol*) cl3088)->name);
        name3099 = $tmp3100;
        panda$core$MutableString$append$panda$core$String(name3099, &$s3102);
        separator3103 = &$s3104;
        {
            ITable* $tmp3106 = ((panda$collections$Iterable*) cl3088->parameters)->$class->itable;
            while ($tmp3106->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3106 = $tmp3106->next;
            }
            $fn3108 $tmp3107 = $tmp3106->methods[0];
            panda$collections$Iterator* $tmp3109 = $tmp3107(((panda$collections$Iterable*) cl3088->parameters));
            p$Iter3105 = $tmp3109;
            $l3110:;
            ITable* $tmp3112 = p$Iter3105->$class->itable;
            while ($tmp3112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3112 = $tmp3112->next;
            }
            $fn3114 $tmp3113 = $tmp3112->methods[0];
            panda$core$Bit $tmp3115 = $tmp3113(p$Iter3105);
            panda$core$Bit $tmp3116 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3115);
            if (!$tmp3116.value) goto $l3111;
            {
                ITable* $tmp3118 = p$Iter3105->$class->itable;
                while ($tmp3118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3118 = $tmp3118->next;
                }
                $fn3120 $tmp3119 = $tmp3118->methods[1];
                panda$core$Object* $tmp3121 = $tmp3119(p$Iter3105);
                p3117 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3121);
                panda$collections$Array* $tmp3123 = (panda$collections$Array*) malloc(40);
                $tmp3123->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3123->refCount.value = 1;
                panda$collections$Array$init($tmp3123);
                pType3122 = $tmp3123;
                panda$collections$Array$add$panda$collections$Array$T(pType3122, ((panda$core$Object*) p3117->bound));
                panda$core$String* $tmp3126 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3088)->name);
                panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, &$s3127);
                panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, ((org$pandalanguage$pandac$Symbol*) p3117)->name);
                panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, &$s3130);
                pName3125 = $tmp3131;
                panda$core$MutableString$append$panda$core$String(name3099, separator3103);
                panda$core$MutableString$append$panda$core$String(name3099, pName3125);
                org$pandalanguage$pandac$Type* $tmp3132 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3132->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3132->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3132, p3117);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3095, ((panda$core$Object*) $tmp3132));
                separator3103 = &$s3134;
            }
            goto $l3110;
            $l3111:;
        }
        panda$core$MutableString$append$panda$core$String(name3099, &$s3135);
        org$pandalanguage$pandac$Type* $tmp3136 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3136->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3136->refCount.value = 1;
        panda$core$String* $tmp3138 = panda$core$MutableString$finish$R$panda$core$String(name3099);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3136, $tmp3138, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3095), ((panda$core$Bit) { true }));
        type3087 = $tmp3136;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3139 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3088);
        type3087 = $tmp3139;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3140 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3140->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3140->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3140, ((panda$core$Int64) { 1025 }), p_s->position, type3087);
    return $tmp3140;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3146;
    panda$core$Bit $tmp3142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3142.value);
    panda$core$Object* $tmp3143 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3144 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3143)->annotations);
    if ($tmp3144.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3145);
        return NULL;
    }
    }
    panda$core$Object* $tmp3147 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3146 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3147);
    PANDA_ASSERT(cl3146->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3148 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3148->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3148->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3148, ((panda$core$Int64) { 1024 }), p_s->position, cl3146->rawSuper);
    return $tmp3148;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3153;
    org$pandalanguage$pandac$Type* type3156;
    panda$core$Bit $tmp3150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3150.value);
    panda$core$Int64 $tmp3151 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3151, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3152.value);
    panda$core$Object* $tmp3154 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3155 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3154));
    value3153 = $tmp3155;
    if (((panda$core$Bit) { value3153 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3157 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3158 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3157));
    org$pandalanguage$pandac$Type* $tmp3159 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3158);
    type3156 = $tmp3159;
    if (((panda$core$Bit) { type3156 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3160 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3153, type3156);
    if (((panda$core$Bit) { $tmp3160.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3161 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3153, type3156);
        return $tmp3161;
    }
    }
    panda$core$Bit $tmp3162 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3153, type3156);
    if ($tmp3162.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3163 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3153, p_c->position, ((panda$core$Bit) { true }), type3156);
        return $tmp3163;
    }
    }
    else {
    {
        panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3164, ((panda$core$Object*) value3153->type));
        panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, &$s3166);
        panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3168, ((panda$core$Object*) type3156));
        panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, &$s3170);
        panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, $tmp3171);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3172);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3173.value);
    org$pandalanguage$pandac$IRNode* $tmp3174 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3174->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3174->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3176 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3174, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3176);
    return $tmp3174;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3181;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3177 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3177;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3178 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3178->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3178->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3180 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3178, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3180, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3178;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3182 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3181 = $tmp3182;
            bool $tmp3183 = ((panda$core$Bit) { result3181 != NULL }).value;
            if (!$tmp3183) goto $l3184;
            org$pandalanguage$pandac$Type* $tmp3185 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3186 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3181->type, $tmp3185);
            $tmp3183 = $tmp3186.value;
            $l3184:;
            panda$core$Bit $tmp3187 = { $tmp3183 };
            if ($tmp3187.value) {
            {
                panda$core$Bit $tmp3188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3181->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3188.value);
                panda$core$String* $tmp3189 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3181->payload)->value);
                panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3189, &$s3190);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3181->position, $tmp3191);
                return NULL;
            }
            }
            return result3181;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3192 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3192;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3193 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3193;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3194 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3194->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3194->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3196 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3194, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3196, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3194;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3197 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3197;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3198 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3198;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3199 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3199;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3200 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3200;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3201 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3201;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3202 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3202;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3203 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3203;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3204 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3204;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3206;
    panda$collections$Array* result3209;
    panda$collections$Iterator* stmt$Iter3212;
    org$pandalanguage$pandac$ASTNode* stmt3224;
    org$pandalanguage$pandac$IRNode* compiled3229;
    panda$core$Bit $tmp3205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3205.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3207 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3207->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3207->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3207, self->symbolTable);
    symbols3206 = $tmp3207;
    self->symbolTable = symbols3206;
    panda$collections$Array* $tmp3210 = (panda$collections$Array*) malloc(40);
    $tmp3210->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3210->refCount.value = 1;
    panda$collections$Array$init($tmp3210);
    result3209 = $tmp3210;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3213 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3213->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3213 = $tmp3213->next;
            }
            $fn3215 $tmp3214 = $tmp3213->methods[0];
            panda$collections$Iterator* $tmp3216 = $tmp3214(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3212 = $tmp3216;
            $l3217:;
            ITable* $tmp3219 = stmt$Iter3212->$class->itable;
            while ($tmp3219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3219 = $tmp3219->next;
            }
            $fn3221 $tmp3220 = $tmp3219->methods[0];
            panda$core$Bit $tmp3222 = $tmp3220(stmt$Iter3212);
            panda$core$Bit $tmp3223 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3222);
            if (!$tmp3223.value) goto $l3218;
            {
                ITable* $tmp3225 = stmt$Iter3212->$class->itable;
                while ($tmp3225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3225 = $tmp3225->next;
                }
                $fn3227 $tmp3226 = $tmp3225->methods[1];
                panda$core$Object* $tmp3228 = $tmp3226(stmt$Iter3212);
                stmt3224 = ((org$pandalanguage$pandac$ASTNode*) $tmp3228);
                org$pandalanguage$pandac$IRNode* $tmp3230 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3224);
                compiled3229 = $tmp3230;
                if (((panda$core$Bit) { compiled3229 == NULL }).value) {
                {
                    panda$core$Object* $tmp3231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3206->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3231);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3232 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3229->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3232.value);
                panda$collections$Array$add$panda$collections$Array$T(result3209, ((panda$core$Object*) compiled3229));
            }
            goto $l3217;
            $l3218:;
        }
    }
    }
    panda$core$Object* $tmp3233 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3206->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3233);
    org$pandalanguage$pandac$IRNode* $tmp3234 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3234->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3234->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3234, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3209));
    return $tmp3234;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3244;
    org$pandalanguage$pandac$IRNode* ifTrue3249;
    panda$collections$Array* children3252;
    org$pandalanguage$pandac$IRNode* ifFalse3257;
    panda$core$Bit $tmp3236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3236.value);
    panda$core$Int64 $tmp3238 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3238, ((panda$core$Int64) { 2 }));
    bool $tmp3237 = $tmp3239.value;
    if ($tmp3237) goto $l3240;
    panda$core$Int64 $tmp3241 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3241, ((panda$core$Int64) { 3 }));
    $tmp3237 = $tmp3242.value;
    $l3240:;
    panda$core$Bit $tmp3243 = { $tmp3237 };
    PANDA_ASSERT($tmp3243.value);
    panda$core$Object* $tmp3245 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3246 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3245));
    org$pandalanguage$pandac$Type* $tmp3247 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3248 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3246, $tmp3247);
    test3244 = $tmp3248;
    if (((panda$core$Bit) { test3244 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3250 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3251 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3250));
    ifTrue3249 = $tmp3251;
    if (((panda$core$Bit) { ifTrue3249 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3253 = (panda$collections$Array*) malloc(40);
    $tmp3253->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3253->refCount.value = 1;
    panda$collections$Array$init($tmp3253);
    children3252 = $tmp3253;
    panda$collections$Array$add$panda$collections$Array$T(children3252, ((panda$core$Object*) test3244));
    panda$collections$Array$add$panda$collections$Array$T(children3252, ((panda$core$Object*) ifTrue3249));
    panda$core$Int64 $tmp3255 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3255, ((panda$core$Int64) { 3 }));
    if ($tmp3256.value) {
    {
        panda$core$Object* $tmp3258 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3259 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3258));
        ifFalse3257 = $tmp3259;
        if (((panda$core$Bit) { ifFalse3257 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3252, ((panda$core$Object*) ifFalse3257));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3260 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3260->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3260->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3260, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3252));
    return $tmp3260;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3262;
    org$pandalanguage$pandac$IRNode* list3263;
    org$pandalanguage$pandac$Type* t3275;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3308;
    org$pandalanguage$pandac$IRNode* body3310;
    panda$collections$Array* children3312;
    panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3265 = $tmp3266.value;
    if (!$tmp3265) goto $l3267;
    $tmp3265 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3267:;
    panda$core$Bit $tmp3268 = { $tmp3265 };
    bool $tmp3264 = $tmp3268.value;
    if (!$tmp3264) goto $l3269;
    panda$core$Int64 $tmp3270 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3271 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3270, ((panda$core$Int64) { 0 }));
    $tmp3264 = $tmp3271.value;
    $l3269:;
    panda$core$Bit $tmp3272 = { $tmp3264 };
    if ($tmp3272.value) {
    {
        panda$core$Int64 $tmp3273 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3273, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3274.value);
        panda$core$Object* $tmp3276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3277 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3276));
        org$pandalanguage$pandac$Type* $tmp3278 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3277);
        t3275 = $tmp3278;
        panda$core$Bit $tmp3279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3279.value) {
        {
            panda$core$Int64 $tmp3280 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3280, ((panda$core$Int64) { 2 }));
            if ($tmp3281.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3282 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3275);
                org$pandalanguage$pandac$IRNode* $tmp3283 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3282);
                list3263 = $tmp3283;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3284 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3284, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3285.value);
                org$pandalanguage$pandac$Type* $tmp3286 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3287 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3275, $tmp3286);
                org$pandalanguage$pandac$IRNode* $tmp3288 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3287);
                list3263 = $tmp3288;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3289 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3289.value) {
        {
            panda$core$Object* $tmp3290 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3291 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3275, ((org$pandalanguage$pandac$Type*) $tmp3290));
            org$pandalanguage$pandac$IRNode* $tmp3292 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3291);
            list3263 = $tmp3292;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3293 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3275);
        panda$core$Int64$nullable $tmp3294 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3293);
        if (((panda$core$Bit) { $tmp3294.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3295 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3275);
            org$pandalanguage$pandac$IRNode* $tmp3296 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3295);
            list3263 = $tmp3296;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3297 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3298 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3275, $tmp3297);
            org$pandalanguage$pandac$IRNode* $tmp3299 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3298);
            list3263 = $tmp3299;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3300 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3263 = $tmp3300;
    }
    }
    if (((panda$core$Bit) { list3263 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3263->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3301.value) {
    {
        panda$core$Object* $tmp3302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3263->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3302)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3303.value);
        panda$core$Object* $tmp3304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3263->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3304)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3262 = ((org$pandalanguage$pandac$Type*) $tmp3305);
    }
    }
    else {
    {
        panda$core$Bit $tmp3306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3263->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3306.value);
        panda$core$Object* $tmp3307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3263->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3262 = ((org$pandalanguage$pandac$Type*) $tmp3307);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3309 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3262);
    target3308 = $tmp3309;
    if (((panda$core$Bit) { target3308 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3308->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3311 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3310 = $tmp3311;
    if (((panda$core$Bit) { body3310 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3313 = (panda$collections$Array*) malloc(40);
    $tmp3313->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3313->refCount.value = 1;
    panda$collections$Array$init($tmp3313);
    children3312 = $tmp3313;
    panda$collections$Array$add$panda$collections$Array$T(children3312, ((panda$core$Object*) target3308->target));
    panda$collections$Array$add$panda$collections$Array$T(children3312, ((panda$core$Object*) list3263));
    panda$collections$Array$add$panda$collections$Array$T(children3312, ((panda$core$Object*) body3310));
    org$pandalanguage$pandac$IRNode* $tmp3315 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3315->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3315->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3315, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3312));
    return $tmp3315;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3324;
    org$pandalanguage$pandac$Variable* targetVar3328;
    panda$collections$Array* subtypes3329;
    org$pandalanguage$pandac$Type* iterType3333;
    org$pandalanguage$pandac$Variable* iter3344;
    panda$collections$Array* statements3349;
    panda$collections$Array* declChildren3352;
    panda$collections$Array* varChildren3357;
    panda$collections$Array* whileChildren3364;
    org$pandalanguage$pandac$IRNode* done3367;
    org$pandalanguage$pandac$IRNode* notCall3374;
    panda$collections$Array* valueDeclChildren3379;
    org$pandalanguage$pandac$IRNode* next3384;
    panda$collections$Array* valueVarChildren3391;
    org$pandalanguage$pandac$IRNode* block3396;
    panda$collections$Array* blockChildren3398;
    panda$core$Bit $tmp3318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3317 = $tmp3318.value;
    if (!$tmp3317) goto $l3319;
    panda$core$Object* $tmp3320 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3321 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3322 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3320), $tmp3321);
    $tmp3317 = $tmp3322.value;
    $l3319:;
    panda$core$Bit $tmp3323 = { $tmp3317 };
    PANDA_ASSERT($tmp3323.value);
    panda$core$Object* $tmp3325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3326 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3325));
    target3324 = $tmp3326;
    if (((panda$core$Bit) { target3324 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3324->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3327.value);
    targetVar3328 = ((org$pandalanguage$pandac$Variable*) target3324->target->payload);
    panda$collections$Array* $tmp3330 = (panda$collections$Array*) malloc(40);
    $tmp3330->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3330->refCount.value = 1;
    panda$collections$Array$init($tmp3330);
    subtypes3329 = $tmp3330;
    org$pandalanguage$pandac$Type* $tmp3332 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3329, ((panda$core$Object*) $tmp3332));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3329, ((panda$core$Object*) target3324->target->type));
    org$pandalanguage$pandac$Type* $tmp3334 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3334->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3334->refCount.value = 1;
    panda$core$Object* $tmp3336 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3329, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3337 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3336));
    panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, &$s3338);
    panda$core$Object* $tmp3340 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3329, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3339, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3340)));
    panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3334, $tmp3343, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3329), ((panda$core$Bit) { true }));
    iterType3333 = $tmp3334;
    org$pandalanguage$pandac$Variable* $tmp3345 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3345->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3345->refCount.value = 1;
    panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3328)->name, &$s3347);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3345, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3348, iterType3333);
    iter3344 = $tmp3345;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3344));
    panda$collections$Array* $tmp3350 = (panda$collections$Array*) malloc(40);
    $tmp3350->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3350->refCount.value = 1;
    panda$collections$Array$init($tmp3350);
    statements3349 = $tmp3350;
    panda$collections$Array* $tmp3353 = (panda$collections$Array*) malloc(40);
    $tmp3353->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3353->refCount.value = 1;
    panda$collections$Array$init($tmp3353);
    declChildren3352 = $tmp3353;
    org$pandalanguage$pandac$IRNode* $tmp3355 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3355->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3355->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3355, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3344->type, iter3344);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3352, ((panda$core$Object*) $tmp3355));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3352, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3358 = (panda$collections$Array*) malloc(40);
    $tmp3358->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3358->refCount.value = 1;
    panda$collections$Array$init($tmp3358);
    varChildren3357 = $tmp3358;
    org$pandalanguage$pandac$IRNode* $tmp3360 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3360->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3360->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3360, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3344)->position, ((panda$collections$ListView*) declChildren3352));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3357, ((panda$core$Object*) $tmp3360));
    org$pandalanguage$pandac$IRNode* $tmp3362 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3362->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3362->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3362, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3344)->position, ((panda$collections$ListView*) varChildren3357));
    panda$collections$Array$add$panda$collections$Array$T(statements3349, ((panda$core$Object*) $tmp3362));
    panda$collections$Array* $tmp3365 = (panda$collections$Array*) malloc(40);
    $tmp3365->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3365->refCount.value = 1;
    panda$collections$Array$init($tmp3365);
    whileChildren3364 = $tmp3365;
    org$pandalanguage$pandac$IRNode* $tmp3368 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3368->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3368->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3368, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3344)->position, iter3344->type, iter3344);
    panda$collections$Array* $tmp3371 = (panda$collections$Array*) malloc(40);
    $tmp3371->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3371->refCount.value = 1;
    panda$collections$Array$init($tmp3371);
    org$pandalanguage$pandac$IRNode* $tmp3373 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3368, &$s3370, ((panda$collections$ListView*) $tmp3371), NULL);
    done3367 = $tmp3373;
    if (((panda$core$Bit) { done3367 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3376 = (panda$collections$Array*) malloc(40);
    $tmp3376->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3376->refCount.value = 1;
    panda$collections$Array$init($tmp3376);
    org$pandalanguage$pandac$IRNode* $tmp3378 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3367, &$s3375, ((panda$collections$ListView*) $tmp3376), NULL);
    notCall3374 = $tmp3378;
    if (((panda$core$Bit) { notCall3374 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3364, ((panda$core$Object*) notCall3374));
    panda$collections$Array* $tmp3380 = (panda$collections$Array*) malloc(40);
    $tmp3380->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3380->refCount.value = 1;
    panda$collections$Array$init($tmp3380);
    valueDeclChildren3379 = $tmp3380;
    org$pandalanguage$pandac$IRNode* $tmp3382 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3382->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3382->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3382, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3328->type, targetVar3328);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3379, ((panda$core$Object*) $tmp3382));
    org$pandalanguage$pandac$IRNode* $tmp3385 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3385->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3385->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3385, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3344->type, iter3344);
    panda$collections$Array* $tmp3388 = (panda$collections$Array*) malloc(40);
    $tmp3388->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3388->refCount.value = 1;
    panda$collections$Array$init($tmp3388);
    org$pandalanguage$pandac$IRNode* $tmp3390 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3385, &$s3387, ((panda$collections$ListView*) $tmp3388), NULL);
    next3384 = $tmp3390;
    PANDA_ASSERT(((panda$core$Bit) { next3384 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3379, ((panda$core$Object*) next3384));
    panda$collections$Array* $tmp3392 = (panda$collections$Array*) malloc(40);
    $tmp3392->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3392->refCount.value = 1;
    panda$collections$Array$init($tmp3392);
    valueVarChildren3391 = $tmp3392;
    org$pandalanguage$pandac$IRNode* $tmp3394 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3394->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3394->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3394, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3379));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3391, ((panda$core$Object*) $tmp3394));
    org$pandalanguage$pandac$IRNode* $tmp3397 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3396 = $tmp3397;
    if (((panda$core$Bit) { block3396 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3399 = (panda$collections$Array*) malloc(40);
    $tmp3399->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3399->refCount.value = 1;
    panda$collections$Array$init($tmp3399);
    blockChildren3398 = $tmp3399;
    org$pandalanguage$pandac$IRNode* $tmp3401 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3401->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3401->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3401, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3391));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3398, ((panda$core$Object*) $tmp3401));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3398, ((panda$collections$CollectionView*) block3396->children));
    org$pandalanguage$pandac$IRNode* $tmp3403 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3403->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3403->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3403, ((panda$core$Int64) { 1000 }), block3396->position, ((panda$collections$ListView*) blockChildren3398));
    block3396 = $tmp3403;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3364, ((panda$core$Object*) block3396));
    org$pandalanguage$pandac$IRNode* $tmp3405 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3405->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3405->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3405, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3364));
    panda$collections$Array$add$panda$collections$Array$T(statements3349, ((panda$core$Object*) $tmp3405));
    org$pandalanguage$pandac$IRNode* $tmp3407 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3407->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3407->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3407, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3349));
    return $tmp3407;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3412;
    org$pandalanguage$pandac$SymbolTable* symbols3415;
    org$pandalanguage$pandac$IRNode* result3418;
    panda$core$Bit found3432;
    panda$collections$Iterator* intf$Iter3433;
    org$pandalanguage$pandac$Type* intf3446;
    org$pandalanguage$pandac$IRNode* iterator3458;
    org$pandalanguage$pandac$IRNode* iterable3470;
    org$pandalanguage$pandac$IRNode* iterator3472;
    panda$core$Bit $tmp3409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3409.value);
    panda$core$Int64 $tmp3410 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3410, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3411.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3413 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3414 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3413));
    list3412 = $tmp3414;
    if (((panda$core$Bit) { list3412 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3416 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3416->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3416->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3416, self->symbolTable);
    symbols3415 = $tmp3416;
    self->symbolTable = symbols3415;
    panda$core$Bit $tmp3421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3412->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3420 = $tmp3421.value;
    if ($tmp3420) goto $l3422;
    panda$core$Bit $tmp3423 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3412->type);
    $tmp3420 = $tmp3423.value;
    $l3422:;
    panda$core$Bit $tmp3424 = { $tmp3420 };
    bool $tmp3419 = $tmp3424.value;
    if ($tmp3419) goto $l3425;
    panda$core$Bit $tmp3426 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3412->type);
    $tmp3419 = $tmp3426.value;
    $l3425:;
    panda$core$Bit $tmp3427 = { $tmp3419 };
    if ($tmp3427.value) {
    {
        panda$core$Object* $tmp3428 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3429 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3430 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3428), list3412, ((org$pandalanguage$pandac$ASTNode*) $tmp3429));
        result3418 = $tmp3430;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3431 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3412);
        list3412 = $tmp3431;
        if (((panda$core$Bit) { list3412 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3432 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3434 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3412->type);
            ITable* $tmp3435 = ((panda$collections$Iterable*) $tmp3434)->$class->itable;
            while ($tmp3435->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3435 = $tmp3435->next;
            }
            $fn3437 $tmp3436 = $tmp3435->methods[0];
            panda$collections$Iterator* $tmp3438 = $tmp3436(((panda$collections$Iterable*) $tmp3434));
            intf$Iter3433 = $tmp3438;
            $l3439:;
            ITable* $tmp3441 = intf$Iter3433->$class->itable;
            while ($tmp3441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3441 = $tmp3441->next;
            }
            $fn3443 $tmp3442 = $tmp3441->methods[0];
            panda$core$Bit $tmp3444 = $tmp3442(intf$Iter3433);
            panda$core$Bit $tmp3445 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3444);
            if (!$tmp3445.value) goto $l3440;
            {
                ITable* $tmp3447 = intf$Iter3433->$class->itable;
                while ($tmp3447->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3447 = $tmp3447->next;
                }
                $fn3449 $tmp3448 = $tmp3447->methods[1];
                panda$core$Object* $tmp3450 = $tmp3448(intf$Iter3433);
                intf3446 = ((org$pandalanguage$pandac$Type*) $tmp3450);
                panda$core$Bit $tmp3452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3446->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3451 = $tmp3452.value;
                if (!$tmp3451) goto $l3453;
                panda$core$Object* $tmp3454 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3446->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3455 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3456 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3454), $tmp3455);
                $tmp3451 = $tmp3456.value;
                $l3453:;
                panda$core$Bit $tmp3457 = { $tmp3451 };
                if ($tmp3457.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3459 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3412, intf3446);
                    iterator3458 = $tmp3459;
                    panda$core$Object* $tmp3460 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3461 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3462 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3460), iterator3458, ((org$pandalanguage$pandac$ASTNode*) $tmp3461));
                    result3418 = $tmp3462;
                    found3432 = ((panda$core$Bit) { true });
                    goto $l3440;
                }
                }
                panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3446->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3463 = $tmp3464.value;
                if (!$tmp3463) goto $l3465;
                panda$core$Object* $tmp3466 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3446->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3467 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3468 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3466), $tmp3467);
                $tmp3463 = $tmp3468.value;
                $l3465:;
                panda$core$Bit $tmp3469 = { $tmp3463 };
                if ($tmp3469.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3471 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3412, intf3446);
                    iterable3470 = $tmp3471;
                    panda$collections$Array* $tmp3474 = (panda$collections$Array*) malloc(40);
                    $tmp3474->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3474->refCount.value = 1;
                    panda$collections$Array$init($tmp3474);
                    org$pandalanguage$pandac$IRNode* $tmp3476 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3470, &$s3473, ((panda$collections$ListView*) $tmp3474));
                    iterator3472 = $tmp3476;
                    panda$core$Object* $tmp3477 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3478 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3479 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3477), iterator3472, ((org$pandalanguage$pandac$ASTNode*) $tmp3478));
                    result3418 = $tmp3479;
                    found3432 = ((panda$core$Bit) { true });
                    goto $l3440;
                }
                }
            }
            goto $l3439;
            $l3440:;
        }
        panda$core$Bit $tmp3480 = panda$core$Bit$$NOT$R$panda$core$Bit(found3432);
        if ($tmp3480.value) {
        {
            panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3481, ((panda$core$Object*) list3412->type));
            panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3482, &$s3483);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3412->position, $tmp3484);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3485 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3415->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3485);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3418;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3489;
    org$pandalanguage$pandac$IRNode* stmt3494;
    panda$collections$Array* children3497;
    panda$core$Bit $tmp3486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3486.value);
    panda$core$Int64 $tmp3487 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3487, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3488.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3490 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3491 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3490));
    org$pandalanguage$pandac$Type* $tmp3492 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3493 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3491, $tmp3492);
    test3489 = $tmp3493;
    if (((panda$core$Bit) { test3489 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3495 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3496 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3495));
    stmt3494 = $tmp3496;
    if (((panda$core$Bit) { stmt3494 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3498 = (panda$collections$Array*) malloc(40);
    $tmp3498->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3498->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3498, ((panda$core$Int64) { 2 }));
    children3497 = $tmp3498;
    panda$collections$Array$add$panda$collections$Array$T(children3497, ((panda$core$Object*) test3489));
    panda$collections$Array$add$panda$collections$Array$T(children3497, ((panda$core$Object*) stmt3494));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3500 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3500->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3500->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3500, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3497));
    return $tmp3500;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3505;
    org$pandalanguage$pandac$IRNode* test3508;
    panda$collections$Array* children3513;
    panda$core$Bit $tmp3502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3502.value);
    panda$core$Int64 $tmp3503 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3503, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3504.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3506 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3507 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3506));
    stmt3505 = $tmp3507;
    if (((panda$core$Bit) { stmt3505 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3509 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3510 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3509));
    org$pandalanguage$pandac$Type* $tmp3511 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3512 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3510, $tmp3511);
    test3508 = $tmp3512;
    if (((panda$core$Bit) { test3508 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3514 = (panda$collections$Array*) malloc(40);
    $tmp3514->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3514->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3514, ((panda$core$Int64) { 2 }));
    children3513 = $tmp3514;
    panda$collections$Array$add$panda$collections$Array$T(children3513, ((panda$core$Object*) stmt3505));
    panda$collections$Array$add$panda$collections$Array$T(children3513, ((panda$core$Object*) test3508));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3516 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3516->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3516->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3516, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3513));
    return $tmp3516;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3521;
    panda$collections$Array* children3524;
    panda$core$Bit $tmp3518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3518.value);
    panda$core$Int64 $tmp3519 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3519, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3520.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3522 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3523 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3522));
    stmt3521 = $tmp3523;
    if (((panda$core$Bit) { stmt3521 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3525 = (panda$collections$Array*) malloc(40);
    $tmp3525->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3525->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3525, ((panda$core$Int64) { 1 }));
    children3524 = $tmp3525;
    panda$collections$Array$add$panda$collections$Array$T(children3524, ((panda$core$Object*) stmt3521));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3527 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3527->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3527->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3527, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3524));
    return $tmp3527;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3529;
    org$pandalanguage$pandac$Type* type3533;
    org$pandalanguage$pandac$Variable* v3549;
    value3529 = p_rawValue;
    bool $tmp3530 = ((panda$core$Bit) { value3529 == NULL }).value;
    if ($tmp3530) goto $l3531;
    $tmp3530 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3531:;
    panda$core$Bit $tmp3532 = { $tmp3530 };
    PANDA_ASSERT($tmp3532.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3534 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3534) goto $l3535;
            panda$core$Int64 $tmp3536 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3537 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3536, ((panda$core$Int64) { 0 }));
            $tmp3534 = $tmp3537.value;
            $l3535:;
            panda$core$Bit $tmp3538 = { $tmp3534 };
            if ($tmp3538.value) {
            {
                panda$core$Int64 $tmp3539 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3539, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3540.value);
                panda$core$Object* $tmp3541 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3542 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3541));
                org$pandalanguage$pandac$Type* $tmp3543 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3542);
                type3533 = $tmp3543;
            }
            }
            else {
            if (((panda$core$Bit) { value3529 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3544 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3529);
                value3529 = $tmp3544;
                if (((panda$core$Bit) { value3529 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3545 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3529);
                type3533 = $tmp3545;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3533 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3546);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3529 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3547 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3529, type3533);
                value3529 = $tmp3547;
                if (((panda$core$Bit) { value3529 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3548 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3529->type, type3533);
                PANDA_ASSERT($tmp3548.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3550 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3550->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3550->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3550, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3533);
            v3549 = $tmp3550;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3549));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3552 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3552->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3552->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3554 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3554->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3554->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3554, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3549)->position, v3549->type, v3549);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3552, $tmp3554, value3529);
            return $tmp3552;
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
    org$pandalanguage$pandac$IRNode* value3564;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3569;
    panda$collections$Array* children3572;
    org$pandalanguage$pandac$Variable* v3576;
    panda$core$Bit $tmp3556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3556.value);
    panda$core$Int64 $tmp3558 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3558, ((panda$core$Int64) { 1 }));
    bool $tmp3557 = $tmp3559.value;
    if ($tmp3557) goto $l3560;
    panda$core$Int64 $tmp3561 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3561, ((panda$core$Int64) { 2 }));
    $tmp3557 = $tmp3562.value;
    $l3560:;
    panda$core$Bit $tmp3563 = { $tmp3557 };
    PANDA_ASSERT($tmp3563.value);
    panda$core$Int64 $tmp3565 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3565, ((panda$core$Int64) { 2 }));
    if ($tmp3566.value) {
    {
        panda$core$Object* $tmp3567 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3568 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3567));
        value3564 = $tmp3568;
        if (((panda$core$Bit) { value3564 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3564 = NULL;
    }
    }
    panda$core$Object* $tmp3570 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3571 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3570), p_varKind, value3564, NULL);
    target3569 = $tmp3571;
    if (((panda$core$Bit) { target3569 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3573 = (panda$collections$Array*) malloc(40);
    $tmp3573->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3573->refCount.value = 1;
    panda$collections$Array$init($tmp3573);
    children3572 = $tmp3573;
    panda$collections$Array$add$panda$collections$Array$T(children3572, ((panda$core$Object*) target3569->target));
    if (((panda$core$Bit) { target3569->value != NULL }).value) {
    {
        panda$core$Bit $tmp3575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3569->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3575.value);
        v3576 = ((org$pandalanguage$pandac$Variable*) target3569->target->payload);
        v3576->initialValue = target3569->value;
        panda$collections$Array$add$panda$collections$Array$T(children3572, ((panda$core$Object*) target3569->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3577 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3577->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3577->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3577, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3572));
    return $tmp3577;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3580;
    panda$collections$Iterator* label$Iter3581;
    panda$core$String* label3593;
    panda$core$Bit $tmp3579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3579.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3580 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3582 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3582->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3582 = $tmp3582->next;
            }
            $fn3584 $tmp3583 = $tmp3582->methods[0];
            panda$collections$Iterator* $tmp3585 = $tmp3583(((panda$collections$Iterable*) self->loops));
            label$Iter3581 = $tmp3585;
            $l3586:;
            ITable* $tmp3588 = label$Iter3581->$class->itable;
            while ($tmp3588->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3588 = $tmp3588->next;
            }
            $fn3590 $tmp3589 = $tmp3588->methods[0];
            panda$core$Bit $tmp3591 = $tmp3589(label$Iter3581);
            panda$core$Bit $tmp3592 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3591);
            if (!$tmp3592.value) goto $l3587;
            {
                ITable* $tmp3594 = label$Iter3581->$class->itable;
                while ($tmp3594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3594 = $tmp3594->next;
                }
                $fn3596 $tmp3595 = $tmp3594->methods[1];
                panda$core$Object* $tmp3597 = $tmp3595(label$Iter3581);
                label3593 = ((panda$core$String*) $tmp3597);
                bool $tmp3598 = ((panda$core$Bit) { label3593 != NULL }).value;
                if (!$tmp3598) goto $l3599;
                panda$core$Bit $tmp3600 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3593, ((panda$core$String*) p_b->payload));
                $tmp3598 = $tmp3600.value;
                $l3599:;
                panda$core$Bit $tmp3601 = { $tmp3598 };
                if ($tmp3601.value) {
                {
                    found3580 = ((panda$core$Bit) { true });
                    goto $l3587;
                }
                }
            }
            goto $l3586;
            $l3587:;
        }
        panda$core$Bit $tmp3602 = panda$core$Bit$$NOT$R$panda$core$Bit(found3580);
        if ($tmp3602.value) {
        {
            panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3603, p_b->payload);
            panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3604, &$s3605);
            panda$core$String* $tmp3608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3607, p_b->payload);
            panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3608, &$s3609);
            panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3606, $tmp3610);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3611);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3612 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3612, ((panda$core$Int64) { 0 }));
    if ($tmp3613.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3614);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3615 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3615->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3615->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3615, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3615;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3618;
    panda$collections$Iterator* label$Iter3619;
    panda$core$String* label3631;
    panda$core$Bit $tmp3617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3617.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3618 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3620 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3620->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3620 = $tmp3620->next;
            }
            $fn3622 $tmp3621 = $tmp3620->methods[0];
            panda$collections$Iterator* $tmp3623 = $tmp3621(((panda$collections$Iterable*) self->loops));
            label$Iter3619 = $tmp3623;
            $l3624:;
            ITable* $tmp3626 = label$Iter3619->$class->itable;
            while ($tmp3626->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3626 = $tmp3626->next;
            }
            $fn3628 $tmp3627 = $tmp3626->methods[0];
            panda$core$Bit $tmp3629 = $tmp3627(label$Iter3619);
            panda$core$Bit $tmp3630 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3629);
            if (!$tmp3630.value) goto $l3625;
            {
                ITable* $tmp3632 = label$Iter3619->$class->itable;
                while ($tmp3632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3632 = $tmp3632->next;
                }
                $fn3634 $tmp3633 = $tmp3632->methods[1];
                panda$core$Object* $tmp3635 = $tmp3633(label$Iter3619);
                label3631 = ((panda$core$String*) $tmp3635);
                bool $tmp3636 = ((panda$core$Bit) { label3631 != NULL }).value;
                if (!$tmp3636) goto $l3637;
                panda$core$Bit $tmp3638 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3631, ((panda$core$String*) p_c->payload));
                $tmp3636 = $tmp3638.value;
                $l3637:;
                panda$core$Bit $tmp3639 = { $tmp3636 };
                if ($tmp3639.value) {
                {
                    found3618 = ((panda$core$Bit) { true });
                    goto $l3625;
                }
                }
            }
            goto $l3624;
            $l3625:;
        }
        panda$core$Bit $tmp3640 = panda$core$Bit$$NOT$R$panda$core$Bit(found3618);
        if ($tmp3640.value) {
        {
            panda$core$String* $tmp3642 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3641, p_c->payload);
            panda$core$String* $tmp3644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3642, &$s3643);
            panda$core$String* $tmp3646 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3645, p_c->payload);
            panda$core$String* $tmp3648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3646, &$s3647);
            panda$core$String* $tmp3649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3644, $tmp3648);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3649);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3650 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3650, ((panda$core$Int64) { 0 }));
    if ($tmp3651.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3652);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3653 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3653->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3653->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3653, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3653;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3667;
    panda$collections$Array* children3672;
    panda$core$Bit $tmp3655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3655.value);
    bool $tmp3656 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3656) goto $l3657;
    panda$core$Int64 $tmp3658 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3659 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3658, ((panda$core$Int64) { 0 }));
    $tmp3656 = $tmp3659.value;
    $l3657:;
    panda$core$Bit $tmp3660 = { $tmp3656 };
    if ($tmp3660.value) {
    {
        panda$core$Int64 $tmp3661 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3661, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3662.value);
        panda$core$Object* $tmp3663 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3664 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3665 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3663)->returnType, $tmp3664);
        if ($tmp3665.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3666);
            return NULL;
        }
        }
        panda$core$Object* $tmp3668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3669 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3668));
        panda$core$Object* $tmp3670 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3671 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3669, ((org$pandalanguage$pandac$MethodDecl*) $tmp3670)->returnType);
        value3667 = $tmp3671;
        if (((panda$core$Bit) { value3667 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3673 = (panda$collections$Array*) malloc(40);
        $tmp3673->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3673->refCount.value = 1;
        panda$collections$Array$init($tmp3673);
        children3672 = $tmp3673;
        panda$collections$Array$add$panda$collections$Array$T(children3672, ((panda$core$Object*) value3667));
        org$pandalanguage$pandac$IRNode* $tmp3675 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3675->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3675->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3675, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3672));
        return $tmp3675;
    }
    }
    panda$core$Object* $tmp3677 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3678 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3679 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3677)->returnType, $tmp3678);
    if ($tmp3679.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3680);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3681 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3681->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3681->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3681, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3681;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3691;
    org$pandalanguage$pandac$ClassDecl* bit3696;
    org$pandalanguage$pandac$Symbol* value3699;
    panda$collections$Array* fieldChildren3702;
    panda$collections$Array* children3708;
    org$pandalanguage$pandac$IRNode* msg3713;
    panda$core$Bit $tmp3683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3683.value);
    panda$core$Int64 $tmp3685 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3685, ((panda$core$Int64) { 1 }));
    bool $tmp3684 = $tmp3686.value;
    if ($tmp3684) goto $l3687;
    panda$core$Int64 $tmp3688 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3688, ((panda$core$Int64) { 2 }));
    $tmp3684 = $tmp3689.value;
    $l3687:;
    panda$core$Bit $tmp3690 = { $tmp3684 };
    PANDA_ASSERT($tmp3690.value);
    panda$core$Object* $tmp3692 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3693 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3692));
    test3691 = $tmp3693;
    if (((panda$core$Bit) { test3691 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3694 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3695 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3691, $tmp3694);
    test3691 = $tmp3695;
    if (((panda$core$Bit) { test3691 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3697 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3698 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3697);
    bit3696 = $tmp3698;
    PANDA_ASSERT(((panda$core$Bit) { bit3696 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3701 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3696->symbolTable, &$s3700);
    value3699 = $tmp3701;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3699));
    panda$collections$Array* $tmp3703 = (panda$collections$Array*) malloc(40);
    $tmp3703->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3703->refCount.value = 1;
    panda$collections$Array$init($tmp3703);
    fieldChildren3702 = $tmp3703;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3702, ((panda$core$Object*) test3691));
    org$pandalanguage$pandac$IRNode* $tmp3705 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3705->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3705->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3707 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3705, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3707, ((panda$core$Object*) value3699), ((panda$collections$ListView*) fieldChildren3702));
    test3691 = $tmp3705;
    panda$collections$Array* $tmp3709 = (panda$collections$Array*) malloc(40);
    $tmp3709->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3709->refCount.value = 1;
    panda$collections$Array$init($tmp3709);
    children3708 = $tmp3709;
    panda$collections$Array$add$panda$collections$Array$T(children3708, ((panda$core$Object*) test3691));
    panda$core$Int64 $tmp3711 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3711, ((panda$core$Int64) { 2 }));
    if ($tmp3712.value) {
    {
        panda$core$Object* $tmp3714 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3715 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3714));
        msg3713 = $tmp3715;
        if (((panda$core$Bit) { msg3713 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3716 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3717 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3713, $tmp3716);
        msg3713 = $tmp3717;
        if (((panda$core$Bit) { msg3713 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3708, ((panda$core$Object*) msg3713));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3718 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3718->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3718->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3718, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3708));
    return $tmp3718;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3733;
    panda$core$Int64 varKind3734;
    panda$collections$Array* decls3735;
    panda$collections$Iterator* astDecl$Iter3738;
    org$pandalanguage$pandac$ASTNode* astDecl3750;
    org$pandalanguage$pandac$IRNode* decl3755;
    panda$core$Bit $tmp3723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3722 = $tmp3723.value;
    if ($tmp3722) goto $l3724;
    panda$core$Bit $tmp3725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3722 = $tmp3725.value;
    $l3724:;
    panda$core$Bit $tmp3726 = { $tmp3722 };
    bool $tmp3721 = $tmp3726.value;
    if ($tmp3721) goto $l3727;
    panda$core$Bit $tmp3728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3721 = $tmp3728.value;
    $l3727:;
    panda$core$Bit $tmp3729 = { $tmp3721 };
    bool $tmp3720 = $tmp3729.value;
    if ($tmp3720) goto $l3730;
    panda$core$Bit $tmp3731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3720 = $tmp3731.value;
    $l3730:;
    panda$core$Bit $tmp3732 = { $tmp3720 };
    PANDA_ASSERT($tmp3732.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3733 = ((panda$core$Int64) { 1017 });
            varKind3734 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3733 = ((panda$core$Int64) { 1018 });
            varKind3734 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3733 = ((panda$core$Int64) { 1019 });
            varKind3734 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3733 = ((panda$core$Int64) { 1020 });
            varKind3734 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3736 = (panda$collections$Array*) malloc(40);
    $tmp3736->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3736->refCount.value = 1;
    panda$collections$Array$init($tmp3736);
    decls3735 = $tmp3736;
    {
        ITable* $tmp3739 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3739->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3739 = $tmp3739->next;
        }
        $fn3741 $tmp3740 = $tmp3739->methods[0];
        panda$collections$Iterator* $tmp3742 = $tmp3740(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3738 = $tmp3742;
        $l3743:;
        ITable* $tmp3745 = astDecl$Iter3738->$class->itable;
        while ($tmp3745->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3745 = $tmp3745->next;
        }
        $fn3747 $tmp3746 = $tmp3745->methods[0];
        panda$core$Bit $tmp3748 = $tmp3746(astDecl$Iter3738);
        panda$core$Bit $tmp3749 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3748);
        if (!$tmp3749.value) goto $l3744;
        {
            ITable* $tmp3751 = astDecl$Iter3738->$class->itable;
            while ($tmp3751->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3751 = $tmp3751->next;
            }
            $fn3753 $tmp3752 = $tmp3751->methods[1];
            panda$core$Object* $tmp3754 = $tmp3752(astDecl$Iter3738);
            astDecl3750 = ((org$pandalanguage$pandac$ASTNode*) $tmp3754);
            org$pandalanguage$pandac$IRNode* $tmp3756 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3750, varKind3734);
            decl3755 = $tmp3756;
            if (((panda$core$Bit) { decl3755 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3735, ((panda$core$Object*) decl3755));
        }
        goto $l3743;
        $l3744:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3757 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3757->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3757->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3757, nodeKind3733, p_v->position, ((panda$collections$ListView*) decls3735));
    return $tmp3757;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3759;
    panda$collections$Array* callChildren3762;
    org$pandalanguage$pandac$IRNode* testValue3765;
    org$pandalanguage$pandac$IRNode* $tmp3760 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3760->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3760->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3760, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3759 = $tmp3760;
    panda$collections$Array* $tmp3763 = (panda$collections$Array*) malloc(40);
    $tmp3763->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3763->refCount.value = 1;
    panda$collections$Array$init($tmp3763);
    callChildren3762 = $tmp3763;
    org$pandalanguage$pandac$IRNode* $tmp3766 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3765 = $tmp3766;
    if (((panda$core$Bit) { testValue3765 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3762, ((panda$core$Object*) testValue3765));
    org$pandalanguage$pandac$IRNode* $tmp3768 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3759, &$s3767, ((panda$collections$ListView*) callChildren3762));
    return $tmp3768;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3777;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3781;
    org$pandalanguage$pandac$IRNode* nextTest3797;
    panda$collections$Array* callChildren3801;
    panda$collections$Array* statements3814;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3817;
    org$pandalanguage$pandac$IRNode* statement3832;
    panda$collections$Array* children3842;
    panda$core$Bit $tmp3769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3769.value);
    panda$core$Int64 $tmp3770 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3771 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3770, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3771.value);
    panda$core$Object* $tmp3772 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3772)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3773.value);
    panda$core$Object* $tmp3774 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3775 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3774)->children);
    panda$core$Bit $tmp3776 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3775, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3776.value);
    panda$core$Object* $tmp3778 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3779 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3778)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3780 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3779));
    test3777 = $tmp3780;
    if (((panda$core$Bit) { test3777 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3782 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3783 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3782)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3781, ((panda$core$Int64) { 1 }), $tmp3783, ((panda$core$Bit) { false }));
    int64_t $tmp3785 = $tmp3781.min.value;
    panda$core$Int64 i3784 = { $tmp3785 };
    int64_t $tmp3787 = $tmp3781.max.value;
    bool $tmp3788 = $tmp3781.inclusive.value;
    if ($tmp3788) goto $l3795; else goto $l3796;
    $l3795:;
    if ($tmp3785 <= $tmp3787) goto $l3789; else goto $l3791;
    $l3796:;
    if ($tmp3785 < $tmp3787) goto $l3789; else goto $l3791;
    $l3789:;
    {
        panda$core$Object* $tmp3798 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3799 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3798)->children, i3784);
        org$pandalanguage$pandac$IRNode* $tmp3800 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3799));
        nextTest3797 = $tmp3800;
        if (((panda$core$Bit) { nextTest3797 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3802 = (panda$collections$Array*) malloc(40);
        $tmp3802->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3802->refCount.value = 1;
        panda$collections$Array$init($tmp3802);
        callChildren3801 = $tmp3802;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3801, ((panda$core$Object*) nextTest3797));
        org$pandalanguage$pandac$IRNode* $tmp3805 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3777, &$s3804, ((panda$collections$ListView*) callChildren3801));
        test3777 = $tmp3805;
        if (((panda$core$Bit) { test3777 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3792:;
    int64_t $tmp3807 = $tmp3787 - i3784.value;
    if ($tmp3788) goto $l3808; else goto $l3809;
    $l3808:;
    if ($tmp3807 >= 1) goto $l3806; else goto $l3791;
    $l3809:;
    if ($tmp3807 > 1) goto $l3806; else goto $l3791;
    $l3806:;
    i3784.value += 1;
    goto $l3789;
    $l3791:;
    org$pandalanguage$pandac$SymbolTable* $tmp3812 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3812->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3812->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3812, self->symbolTable);
    self->symbolTable = $tmp3812;
    panda$collections$Array* $tmp3815 = (panda$collections$Array*) malloc(40);
    $tmp3815->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3815->refCount.value = 1;
    panda$collections$Array$init($tmp3815);
    statements3814 = $tmp3815;
    panda$core$Int64 $tmp3818 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3817, ((panda$core$Int64) { 1 }), $tmp3818, ((panda$core$Bit) { false }));
    int64_t $tmp3820 = $tmp3817.min.value;
    panda$core$Int64 i3819 = { $tmp3820 };
    int64_t $tmp3822 = $tmp3817.max.value;
    bool $tmp3823 = $tmp3817.inclusive.value;
    if ($tmp3823) goto $l3830; else goto $l3831;
    $l3830:;
    if ($tmp3820 <= $tmp3822) goto $l3824; else goto $l3826;
    $l3831:;
    if ($tmp3820 < $tmp3822) goto $l3824; else goto $l3826;
    $l3824:;
    {
        panda$core$Object* $tmp3833 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3819);
        org$pandalanguage$pandac$IRNode* $tmp3834 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3833));
        statement3832 = $tmp3834;
        if (((panda$core$Bit) { statement3832 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3814, ((panda$core$Object*) statement3832));
    }
    $l3827:;
    int64_t $tmp3836 = $tmp3822 - i3819.value;
    if ($tmp3823) goto $l3837; else goto $l3838;
    $l3837:;
    if ($tmp3836 >= 1) goto $l3835; else goto $l3826;
    $l3838:;
    if ($tmp3836 > 1) goto $l3835; else goto $l3826;
    $l3835:;
    i3819.value += 1;
    goto $l3824;
    $l3826:;
    panda$core$Object* $tmp3841 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3841);
    panda$collections$Array* $tmp3843 = (panda$collections$Array*) malloc(40);
    $tmp3843->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3843->refCount.value = 1;
    panda$collections$Array$init($tmp3843);
    children3842 = $tmp3843;
    panda$collections$Array$add$panda$collections$Array$T(children3842, ((panda$core$Object*) test3777));
    org$pandalanguage$pandac$IRNode* $tmp3845 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3845->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3845->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3845, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3814));
    panda$collections$Array$add$panda$collections$Array$T(children3842, ((panda$core$Object*) $tmp3845));
    org$pandalanguage$pandac$IRNode* $tmp3847 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3847->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3847->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3847, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3842));
    return $tmp3847;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3849;
    org$pandalanguage$pandac$Variable* valueVar3852;
    panda$collections$Array* declChildren3862;
    panda$collections$Array* varChildren3867;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3874;
    org$pandalanguage$pandac$ASTNode* c3889;
    org$pandalanguage$pandac$IRNode* w3891;
    panda$collections$Array* statements3893;
    panda$collections$Iterator* astStatement$Iter3896;
    org$pandalanguage$pandac$ASTNode* astStatement3908;
    org$pandalanguage$pandac$IRNode* stmt3913;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp3923;
    panda$collections$Array* $tmp3850 = (panda$collections$Array*) malloc(40);
    $tmp3850->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3850->refCount.value = 1;
    panda$collections$Array$init($tmp3850);
    children3849 = $tmp3850;
    org$pandalanguage$pandac$Variable* $tmp3853 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3853->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3853->refCount.value = 1;
    panda$core$String* $tmp3856 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3855, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3856, &$s3857);
    panda$core$String* $tmp3859 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3858, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3859, &$s3860);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3853, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3861, p_value->type);
    valueVar3852 = $tmp3853;
    panda$collections$Array* $tmp3863 = (panda$collections$Array*) malloc(40);
    $tmp3863->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3863->refCount.value = 1;
    panda$collections$Array$init($tmp3863);
    declChildren3862 = $tmp3863;
    org$pandalanguage$pandac$IRNode* $tmp3865 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3865->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3865->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3865, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3852->type, valueVar3852);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3862, ((panda$core$Object*) $tmp3865));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3862, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3868 = (panda$collections$Array*) malloc(40);
    $tmp3868->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3868->refCount.value = 1;
    panda$collections$Array$init($tmp3868);
    varChildren3867 = $tmp3868;
    org$pandalanguage$pandac$IRNode* $tmp3870 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3870->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3870->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3870, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3852)->position, ((panda$collections$ListView*) declChildren3862));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3867, ((panda$core$Object*) $tmp3870));
    org$pandalanguage$pandac$IRNode* $tmp3872 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3872->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3872->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3872, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3852)->position, ((panda$collections$ListView*) varChildren3867));
    panda$collections$Array$add$panda$collections$Array$T(children3849, ((panda$core$Object*) $tmp3872));
    panda$core$Int64 $tmp3875 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3874, ((panda$core$Int64) { 1 }), $tmp3875, ((panda$core$Bit) { false }));
    int64_t $tmp3877 = $tmp3874.min.value;
    panda$core$Int64 i3876 = { $tmp3877 };
    int64_t $tmp3879 = $tmp3874.max.value;
    bool $tmp3880 = $tmp3874.inclusive.value;
    if ($tmp3880) goto $l3887; else goto $l3888;
    $l3887:;
    if ($tmp3877 <= $tmp3879) goto $l3881; else goto $l3883;
    $l3888:;
    if ($tmp3877 < $tmp3879) goto $l3881; else goto $l3883;
    $l3881:;
    {
        panda$core$Object* $tmp3890 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3876);
        c3889 = ((org$pandalanguage$pandac$ASTNode*) $tmp3890);
        switch (c3889->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3892 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3852, c3889);
                w3891 = $tmp3892;
                if (((panda$core$Bit) { w3891 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3849, ((panda$core$Object*) w3891));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3894 = (panda$collections$Array*) malloc(40);
                $tmp3894->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3894->refCount.value = 1;
                panda$collections$Array$init($tmp3894);
                statements3893 = $tmp3894;
                {
                    ITable* $tmp3897 = ((panda$collections$Iterable*) c3889->children)->$class->itable;
                    while ($tmp3897->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3897 = $tmp3897->next;
                    }
                    $fn3899 $tmp3898 = $tmp3897->methods[0];
                    panda$collections$Iterator* $tmp3900 = $tmp3898(((panda$collections$Iterable*) c3889->children));
                    astStatement$Iter3896 = $tmp3900;
                    $l3901:;
                    ITable* $tmp3903 = astStatement$Iter3896->$class->itable;
                    while ($tmp3903->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3903 = $tmp3903->next;
                    }
                    $fn3905 $tmp3904 = $tmp3903->methods[0];
                    panda$core$Bit $tmp3906 = $tmp3904(astStatement$Iter3896);
                    panda$core$Bit $tmp3907 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3906);
                    if (!$tmp3907.value) goto $l3902;
                    {
                        ITable* $tmp3909 = astStatement$Iter3896->$class->itable;
                        while ($tmp3909->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3909 = $tmp3909->next;
                        }
                        $fn3911 $tmp3910 = $tmp3909->methods[1];
                        panda$core$Object* $tmp3912 = $tmp3910(astStatement$Iter3896);
                        astStatement3908 = ((org$pandalanguage$pandac$ASTNode*) $tmp3912);
                        org$pandalanguage$pandac$IRNode* $tmp3914 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3908);
                        stmt3913 = $tmp3914;
                        if (((panda$core$Bit) { stmt3913 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3893, ((panda$core$Object*) stmt3913));
                    }
                    goto $l3901;
                    $l3902:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3915 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3915->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3915->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3915, ((panda$core$Int64) { 1000 }), c3889->position, ((panda$collections$ListView*) statements3893));
                panda$collections$Array$add$panda$collections$Array$T(children3849, ((panda$core$Object*) $tmp3915));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3884:;
    int64_t $tmp3918 = $tmp3879 - i3876.value;
    if ($tmp3880) goto $l3919; else goto $l3920;
    $l3919:;
    if ($tmp3918 >= 1) goto $l3917; else goto $l3883;
    $l3920:;
    if ($tmp3918 > 1) goto $l3917; else goto $l3883;
    $l3917:;
    i3876.value += 1;
    goto $l3881;
    $l3883:;
    panda$core$Int64 $tmp3924 = panda$collections$Array$get_count$R$panda$core$Int64(children3849);
    panda$core$Int64 $tmp3925 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3924, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3923, $tmp3925, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp3927 = $tmp3923.start.value;
    panda$core$Int64 i3926 = { $tmp3927 };
    int64_t $tmp3929 = $tmp3923.end.value;
    int64_t $tmp3930 = $tmp3923.step.value;
    bool $tmp3931 = $tmp3923.inclusive.value;
    bool $tmp3938 = $tmp3930 > 0;
    if ($tmp3938) goto $l3936; else goto $l3937;
    $l3936:;
    if ($tmp3931) goto $l3939; else goto $l3940;
    $l3939:;
    if ($tmp3927 <= $tmp3929) goto $l3932; else goto $l3934;
    $l3940:;
    if ($tmp3927 < $tmp3929) goto $l3932; else goto $l3934;
    $l3937:;
    if ($tmp3931) goto $l3941; else goto $l3942;
    $l3941:;
    if ($tmp3927 >= $tmp3929) goto $l3932; else goto $l3934;
    $l3942:;
    if ($tmp3927 > $tmp3929) goto $l3932; else goto $l3934;
    $l3932:;
    {
        panda$core$Int64 $tmp3944 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3926, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3945 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3849, $tmp3944);
        panda$core$Bit $tmp3946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3945)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3946.value);
        panda$core$Int64 $tmp3947 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3926, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3948 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3849, $tmp3947);
        panda$core$Int64 $tmp3949 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3948)->children);
        panda$core$Bit $tmp3950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3949, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3950.value);
        panda$core$Int64 $tmp3951 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3926, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3952 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3849, $tmp3951);
        panda$core$Object* $tmp3953 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3849, i3926);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3952)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3953)));
        panda$core$Int64 $tmp3954 = panda$collections$Array$get_count$R$panda$core$Int64(children3849);
        panda$core$Int64 $tmp3955 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3954, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3849, $tmp3955);
    }
    $l3935:;
    if ($tmp3938) goto $l3957; else goto $l3958;
    $l3957:;
    int64_t $tmp3959 = $tmp3929 - i3926.value;
    if ($tmp3931) goto $l3960; else goto $l3961;
    $l3960:;
    if ($tmp3959 >= $tmp3930) goto $l3956; else goto $l3934;
    $l3961:;
    if ($tmp3959 > $tmp3930) goto $l3956; else goto $l3934;
    $l3958:;
    int64_t $tmp3963 = i3926.value - $tmp3929;
    if ($tmp3931) goto $l3964; else goto $l3965;
    $l3964:;
    if ($tmp3963 >= -$tmp3930) goto $l3956; else goto $l3934;
    $l3965:;
    if ($tmp3963 > -$tmp3930) goto $l3956; else goto $l3934;
    $l3956:;
    i3926.value += $tmp3930;
    goto $l3932;
    $l3934:;
    org$pandalanguage$pandac$IRNode* $tmp3967 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3967->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3967->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3967, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3849));
    return $tmp3967;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3977;
    panda$collections$Iterator* expr$Iter3980;
    org$pandalanguage$pandac$ASTNode* expr3993;
    org$pandalanguage$pandac$IRNode* compiled3998;
    panda$collections$Array* statements4003;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4006;
    org$pandalanguage$pandac$IRNode* statement4021;
    panda$core$Bit $tmp3969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3969.value);
    panda$core$Int64 $tmp3970 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3971 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3970, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3971.value);
    panda$core$Object* $tmp3972 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3972)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3973.value);
    panda$core$Object* $tmp3974 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3975 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3974)->children);
    panda$core$Bit $tmp3976 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3975, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3976.value);
    panda$collections$Array* $tmp3978 = (panda$collections$Array*) malloc(40);
    $tmp3978->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3978->refCount.value = 1;
    panda$collections$Array$init($tmp3978);
    children3977 = $tmp3978;
    {
        panda$core$Object* $tmp3981 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3982 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3981)->children)->$class->itable;
        while ($tmp3982->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3982 = $tmp3982->next;
        }
        $fn3984 $tmp3983 = $tmp3982->methods[0];
        panda$collections$Iterator* $tmp3985 = $tmp3983(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3981)->children));
        expr$Iter3980 = $tmp3985;
        $l3986:;
        ITable* $tmp3988 = expr$Iter3980->$class->itable;
        while ($tmp3988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3988 = $tmp3988->next;
        }
        $fn3990 $tmp3989 = $tmp3988->methods[0];
        panda$core$Bit $tmp3991 = $tmp3989(expr$Iter3980);
        panda$core$Bit $tmp3992 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3991);
        if (!$tmp3992.value) goto $l3987;
        {
            ITable* $tmp3994 = expr$Iter3980->$class->itable;
            while ($tmp3994->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3994 = $tmp3994->next;
            }
            $fn3996 $tmp3995 = $tmp3994->methods[1];
            panda$core$Object* $tmp3997 = $tmp3995(expr$Iter3980);
            expr3993 = ((org$pandalanguage$pandac$ASTNode*) $tmp3997);
            org$pandalanguage$pandac$IRNode* $tmp3999 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr3993);
            org$pandalanguage$pandac$IRNode* $tmp4000 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3999, p_type);
            compiled3998 = $tmp4000;
            if (((panda$core$Bit) { compiled3998 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3977, ((panda$core$Object*) compiled3998));
        }
        goto $l3986;
        $l3987:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4001 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4001->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4001->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4001, self->symbolTable);
    self->symbolTable = $tmp4001;
    panda$collections$Array* $tmp4004 = (panda$collections$Array*) malloc(40);
    $tmp4004->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4004->refCount.value = 1;
    panda$collections$Array$init($tmp4004);
    statements4003 = $tmp4004;
    panda$core$Int64 $tmp4007 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4006, ((panda$core$Int64) { 1 }), $tmp4007, ((panda$core$Bit) { false }));
    int64_t $tmp4009 = $tmp4006.min.value;
    panda$core$Int64 i4008 = { $tmp4009 };
    int64_t $tmp4011 = $tmp4006.max.value;
    bool $tmp4012 = $tmp4006.inclusive.value;
    if ($tmp4012) goto $l4019; else goto $l4020;
    $l4019:;
    if ($tmp4009 <= $tmp4011) goto $l4013; else goto $l4015;
    $l4020:;
    if ($tmp4009 < $tmp4011) goto $l4013; else goto $l4015;
    $l4013:;
    {
        panda$core$Object* $tmp4022 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4008);
        org$pandalanguage$pandac$IRNode* $tmp4023 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4022));
        statement4021 = $tmp4023;
        if (((panda$core$Bit) { statement4021 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4003, ((panda$core$Object*) statement4021));
    }
    $l4016:;
    int64_t $tmp4025 = $tmp4011 - i4008.value;
    if ($tmp4012) goto $l4026; else goto $l4027;
    $l4026:;
    if ($tmp4025 >= 1) goto $l4024; else goto $l4015;
    $l4027:;
    if ($tmp4025 > 1) goto $l4024; else goto $l4015;
    $l4024:;
    i4008.value += 1;
    goto $l4013;
    $l4015:;
    panda$core$Object* $tmp4030 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4030);
    org$pandalanguage$pandac$IRNode* $tmp4031 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4031->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4031->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4031, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4003));
    panda$collections$Array$add$panda$collections$Array$T(children3977, ((panda$core$Object*) $tmp4031));
    org$pandalanguage$pandac$IRNode* $tmp4033 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4033->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4033->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4033, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children3977));
    return $tmp4033;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4036;
    panda$collections$Array* statements4041;
    panda$collections$Iterator* s$Iter4044;
    org$pandalanguage$pandac$ASTNode* s4056;
    org$pandalanguage$pandac$IRNode* statement4061;
    panda$core$Bit $tmp4035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4035.value);
    panda$collections$Array* $tmp4037 = (panda$collections$Array*) malloc(40);
    $tmp4037->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4037->refCount.value = 1;
    panda$collections$Array$init($tmp4037);
    children4036 = $tmp4037;
    org$pandalanguage$pandac$SymbolTable* $tmp4039 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4039->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4039->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4039, self->symbolTable);
    self->symbolTable = $tmp4039;
    panda$collections$Array* $tmp4042 = (panda$collections$Array*) malloc(40);
    $tmp4042->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4042->refCount.value = 1;
    panda$collections$Array$init($tmp4042);
    statements4041 = $tmp4042;
    {
        ITable* $tmp4045 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4045->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4045 = $tmp4045->next;
        }
        $fn4047 $tmp4046 = $tmp4045->methods[0];
        panda$collections$Iterator* $tmp4048 = $tmp4046(((panda$collections$Iterable*) p_o->children));
        s$Iter4044 = $tmp4048;
        $l4049:;
        ITable* $tmp4051 = s$Iter4044->$class->itable;
        while ($tmp4051->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4051 = $tmp4051->next;
        }
        $fn4053 $tmp4052 = $tmp4051->methods[0];
        panda$core$Bit $tmp4054 = $tmp4052(s$Iter4044);
        panda$core$Bit $tmp4055 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4054);
        if (!$tmp4055.value) goto $l4050;
        {
            ITable* $tmp4057 = s$Iter4044->$class->itable;
            while ($tmp4057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4057 = $tmp4057->next;
            }
            $fn4059 $tmp4058 = $tmp4057->methods[1];
            panda$core$Object* $tmp4060 = $tmp4058(s$Iter4044);
            s4056 = ((org$pandalanguage$pandac$ASTNode*) $tmp4060);
            org$pandalanguage$pandac$IRNode* $tmp4062 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4056);
            statement4061 = $tmp4062;
            if (((panda$core$Bit) { statement4061 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4041, ((panda$core$Object*) statement4061));
        }
        goto $l4049;
        $l4050:;
    }
    panda$core$Object* $tmp4063 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4063);
    org$pandalanguage$pandac$IRNode* $tmp4064 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4064->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4064->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4064, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4041));
    panda$collections$Array$add$panda$collections$Array$T(children4036, ((panda$core$Object*) $tmp4064));
    org$pandalanguage$pandac$IRNode* $tmp4066 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4066->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4066->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4066, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4036));
    return $tmp4066;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4075;
    org$pandalanguage$pandac$Variable* v4084;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4069 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4068 = $tmp4069.value;
            if (!$tmp4068) goto $l4070;
            panda$core$Object* $tmp4071 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4072 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4071)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4073 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4072));
            $tmp4068 = $tmp4073.value;
            $l4070:;
            panda$core$Bit $tmp4074 = { $tmp4068 };
            return $tmp4074;
        }
        break;
        case 1026:
        {
            f4075 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4075->resolved.value);
            panda$core$Bit $tmp4078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4075->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4077 = $tmp4078.value;
            if (!$tmp4077) goto $l4079;
            $tmp4077 = ((panda$core$Bit) { f4075->value != NULL }).value;
            $l4079:;
            panda$core$Bit $tmp4080 = { $tmp4077 };
            bool $tmp4076 = $tmp4080.value;
            if (!$tmp4076) goto $l4081;
            panda$core$Bit $tmp4082 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4075->value);
            $tmp4076 = $tmp4082.value;
            $l4081:;
            panda$core$Bit $tmp4083 = { $tmp4076 };
            return $tmp4083;
        }
        break;
        case 1016:
        {
            v4084 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4084->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4085 = $tmp4086.value;
            if ($tmp4085) goto $l4087;
            panda$core$Bit $tmp4090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4084->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4089 = $tmp4090.value;
            if (!$tmp4089) goto $l4091;
            $tmp4089 = ((panda$core$Bit) { v4084->initialValue != NULL }).value;
            $l4091:;
            panda$core$Bit $tmp4092 = { $tmp4089 };
            bool $tmp4088 = $tmp4092.value;
            if (!$tmp4088) goto $l4093;
            panda$core$Bit $tmp4094 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4084->initialValue);
            $tmp4088 = $tmp4094.value;
            $l4093:;
            panda$core$Bit $tmp4095 = { $tmp4088 };
            $tmp4085 = $tmp4095.value;
            $l4087:;
            panda$core$Bit $tmp4096 = { $tmp4085 };
            return $tmp4096;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4101;
    org$pandalanguage$pandac$Variable* v4103;
    panda$core$Bit $tmp4097 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4097.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4098 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4099 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4098)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4100 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4099));
            return $tmp4100;
        }
        break;
        case 1026:
        {
            f4101 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4102 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4101->value);
            return $tmp4102;
        }
        break;
        case 1016:
        {
            v4103 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4104 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4103->initialValue);
            return $tmp4104;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4108;
    panda$collections$Array* children4115;
    panda$collections$Iterator* rawWhen$Iter4118;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4119;
    org$pandalanguage$pandac$ASTNode* rawWhen4132;
    org$pandalanguage$pandac$IRNode* o4138;
    org$pandalanguage$pandac$IRNode* w4140;
    panda$core$Bit $tmp4105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4105.value);
    panda$core$Int64 $tmp4106 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4107 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4106, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4107.value);
    panda$core$Object* $tmp4109 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4110 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4109));
    org$pandalanguage$pandac$IRNode* $tmp4111 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4110);
    value4108 = $tmp4111;
    if (((panda$core$Bit) { value4108 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4112 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4108->type);
    panda$core$Bit $tmp4113 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4112);
    if ($tmp4113.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4114 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4108);
        return $tmp4114;
    }
    }
    panda$collections$Array* $tmp4116 = (panda$collections$Array*) malloc(40);
    $tmp4116->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4116->refCount.value = 1;
    panda$collections$Array$init($tmp4116);
    children4115 = $tmp4116;
    panda$collections$Array$add$panda$collections$Array$T(children4115, ((panda$core$Object*) value4108));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4119, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4120 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4119);
        ITable* $tmp4121 = ((panda$collections$Iterable*) $tmp4120)->$class->itable;
        while ($tmp4121->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4121 = $tmp4121->next;
        }
        $fn4123 $tmp4122 = $tmp4121->methods[0];
        panda$collections$Iterator* $tmp4124 = $tmp4122(((panda$collections$Iterable*) $tmp4120));
        rawWhen$Iter4118 = $tmp4124;
        $l4125:;
        ITable* $tmp4127 = rawWhen$Iter4118->$class->itable;
        while ($tmp4127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4127 = $tmp4127->next;
        }
        $fn4129 $tmp4128 = $tmp4127->methods[0];
        panda$core$Bit $tmp4130 = $tmp4128(rawWhen$Iter4118);
        panda$core$Bit $tmp4131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4130);
        if (!$tmp4131.value) goto $l4126;
        {
            ITable* $tmp4133 = rawWhen$Iter4118->$class->itable;
            while ($tmp4133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4133 = $tmp4133->next;
            }
            $fn4135 $tmp4134 = $tmp4133->methods[1];
            panda$core$Object* $tmp4136 = $tmp4134(rawWhen$Iter4118);
            rawWhen4132 = ((org$pandalanguage$pandac$ASTNode*) $tmp4136);
            panda$core$Bit $tmp4137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4132->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4137.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4139 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4132);
                o4138 = $tmp4139;
                if (((panda$core$Bit) { o4138 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4115, ((panda$core$Object*) o4138));
                goto $l4125;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4141 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4108->type, rawWhen4132);
            w4140 = $tmp4141;
            if (((panda$core$Bit) { w4140 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4142 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w4140->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4143 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4142));
            panda$core$Bit $tmp4144 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4143);
            if ($tmp4144.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4145 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4108);
                return $tmp4145;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4115, ((panda$core$Object*) w4140));
        }
        goto $l4125;
        $l4126:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4146 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4146->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4146->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4146, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4115));
    return $tmp4146;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4161;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4148 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4148;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4149 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4150 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4149);
            return $tmp4150;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4151 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4151;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4152 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4152;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4153 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4153;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4154 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4154;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4155 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4155;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4156 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4156;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4157 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4157;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4158 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4158;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4159 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4159;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4160 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4160;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4162 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4163 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4162);
            result4161 = $tmp4163;
            if (((panda$core$Bit) { result4161 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4164 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4161);
                result4161 = $tmp4164;
            }
            }
            return result4161;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4165 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4165;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4166;
    org$pandalanguage$pandac$SymbolTable* symbols4168;
    panda$collections$Iterator* p$Iter4171;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4183;
    panda$collections$Array* fieldInitializers4190;
    panda$collections$Iterator* f$Iter4194;
    org$pandalanguage$pandac$FieldDecl* f4207;
    panda$collections$Array* children4217;
    org$pandalanguage$pandac$IRNode* fieldRef4224;
    org$pandalanguage$pandac$IRNode* compiled4229;
    panda$collections$Array* children4233;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4166 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4167 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4167;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4169 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4169->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4169->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4169, self->symbolTable);
    symbols4168 = $tmp4169;
    {
        ITable* $tmp4172 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4172->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4172 = $tmp4172->next;
        }
        $fn4174 $tmp4173 = $tmp4172->methods[0];
        panda$collections$Iterator* $tmp4175 = $tmp4173(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4171 = $tmp4175;
        $l4176:;
        ITable* $tmp4178 = p$Iter4171->$class->itable;
        while ($tmp4178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4178 = $tmp4178->next;
        }
        $fn4180 $tmp4179 = $tmp4178->methods[0];
        panda$core$Bit $tmp4181 = $tmp4179(p$Iter4171);
        panda$core$Bit $tmp4182 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4181);
        if (!$tmp4182.value) goto $l4177;
        {
            ITable* $tmp4184 = p$Iter4171->$class->itable;
            while ($tmp4184->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4184 = $tmp4184->next;
            }
            $fn4186 $tmp4185 = $tmp4184->methods[1];
            panda$core$Object* $tmp4187 = $tmp4185(p$Iter4171);
            p4183 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4187);
            org$pandalanguage$pandac$Variable* $tmp4188 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4188->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4188->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4188, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4183->name, p4183->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4168, ((org$pandalanguage$pandac$Symbol*) $tmp4188));
        }
        goto $l4176;
        $l4177:;
    }
    self->symbolTable = symbols4168;
    panda$collections$Array* $tmp4191 = (panda$collections$Array*) malloc(40);
    $tmp4191->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4191->refCount.value = 1;
    panda$collections$Array$init($tmp4191);
    fieldInitializers4190 = $tmp4191;
    panda$core$Bit $tmp4193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4193.value) {
    {
        {
            panda$core$Object* $tmp4195 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4196 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4195)->fields)->$class->itable;
            while ($tmp4196->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4196 = $tmp4196->next;
            }
            $fn4198 $tmp4197 = $tmp4196->methods[0];
            panda$collections$Iterator* $tmp4199 = $tmp4197(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4195)->fields));
            f$Iter4194 = $tmp4199;
            $l4200:;
            ITable* $tmp4202 = f$Iter4194->$class->itable;
            while ($tmp4202->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4202 = $tmp4202->next;
            }
            $fn4204 $tmp4203 = $tmp4202->methods[0];
            panda$core$Bit $tmp4205 = $tmp4203(f$Iter4194);
            panda$core$Bit $tmp4206 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4205);
            if (!$tmp4206.value) goto $l4201;
            {
                ITable* $tmp4208 = f$Iter4194->$class->itable;
                while ($tmp4208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4208 = $tmp4208->next;
                }
                $fn4210 $tmp4209 = $tmp4208->methods[1];
                panda$core$Object* $tmp4211 = $tmp4209(f$Iter4194);
                f4207 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4211);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4207);
                panda$core$Bit $tmp4213 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4207->annotations);
                panda$core$Bit $tmp4214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4213);
                bool $tmp4212 = $tmp4214.value;
                if (!$tmp4212) goto $l4215;
                $tmp4212 = ((panda$core$Bit) { f4207->value != NULL }).value;
                $l4215:;
                panda$core$Bit $tmp4216 = { $tmp4212 };
                if ($tmp4216.value) {
                {
                    panda$collections$Array* $tmp4218 = (panda$collections$Array*) malloc(40);
                    $tmp4218->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4218->refCount.value = 1;
                    panda$collections$Array$init($tmp4218);
                    children4217 = $tmp4218;
                    org$pandalanguage$pandac$IRNode* $tmp4220 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4220->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4220->refCount.value = 1;
                    panda$core$Object* $tmp4222 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4223 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4222));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4220, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4223);
                    panda$collections$Array$add$panda$collections$Array$T(children4217, ((panda$core$Object*) $tmp4220));
                    org$pandalanguage$pandac$IRNode* $tmp4225 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4225->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4225->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4225, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4207->type, ((panda$core$Object*) f4207), ((panda$collections$ListView*) children4217));
                    fieldRef4224 = $tmp4225;
                    panda$collections$Array$clear(children4217);
                    panda$collections$Array$add$panda$collections$Array$T(children4217, ((panda$core$Object*) fieldRef4224));
                    panda$collections$Array$add$panda$collections$Array$T(children4217, ((panda$core$Object*) f4207->value));
                    org$pandalanguage$pandac$IRNode* $tmp4227 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4227->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4227->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4227, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4207)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4217));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4190, ((panda$core$Object*) $tmp4227));
                }
                }
            }
            goto $l4200;
            $l4201:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4230 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4229 = $tmp4230;
    if (((panda$core$Bit) { compiled4229 != NULL }).value) {
    {
        panda$core$Int64 $tmp4231 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4190);
        panda$core$Bit $tmp4232 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4231, ((panda$core$Int64) { 0 }));
        if ($tmp4232.value) {
        {
            panda$collections$Array* $tmp4234 = (panda$collections$Array*) malloc(40);
            $tmp4234->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4234->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4234, ((panda$collections$ListView*) fieldInitializers4190));
            children4233 = $tmp4234;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4233, ((panda$collections$CollectionView*) compiled4229->children));
            org$pandalanguage$pandac$IRNode* $tmp4236 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4236->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4236->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4236, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4233));
            compiled4229 = $tmp4236;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4168) }).value);
    self->symbolTable = old4166;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4238 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4238.value) {
    {
        p_m->compiledBody = compiled4229;
    }
    }
    return compiled4229;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4239;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4240 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4239 = $tmp4240;
        if (((panda$core$Bit) { compiled4239 != NULL }).value) {
        {
            ITable* $tmp4241 = self->codeGenerator->$class->itable;
            while ($tmp4241->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4241 = $tmp4241->next;
            }
            $fn4243 $tmp4242 = $tmp4241->methods[3];
            $tmp4242(self->codeGenerator, p_m, compiled4239);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4244 = self->codeGenerator->$class->itable;
        while ($tmp4244->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4244 = $tmp4244->next;
        }
        $fn4246 $tmp4245 = $tmp4244->methods[2];
        $tmp4245(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4247;
    org$pandalanguage$pandac$ClassDecl* inner4259;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4248 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4248->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4248 = $tmp4248->next;
        }
        $fn4250 $tmp4249 = $tmp4248->methods[0];
        panda$collections$Iterator* $tmp4251 = $tmp4249(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4247 = $tmp4251;
        $l4252:;
        ITable* $tmp4254 = inner$Iter4247->$class->itable;
        while ($tmp4254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4254 = $tmp4254->next;
        }
        $fn4256 $tmp4255 = $tmp4254->methods[0];
        panda$core$Bit $tmp4257 = $tmp4255(inner$Iter4247);
        panda$core$Bit $tmp4258 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4257);
        if (!$tmp4258.value) goto $l4253;
        {
            ITable* $tmp4260 = inner$Iter4247->$class->itable;
            while ($tmp4260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4260 = $tmp4260->next;
            }
            $fn4262 $tmp4261 = $tmp4260->methods[1];
            panda$core$Object* $tmp4263 = $tmp4261(inner$Iter4247);
            inner4259 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4263);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4259);
        }
        goto $l4252;
        $l4253:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4271;
    panda$collections$Iterator* m$Iter4276;
    org$pandalanguage$pandac$MethodDecl* m4288;
    org$pandalanguage$pandac$ClassDecl* next4298;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4264 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4264.value) {
    {
        ITable* $tmp4265 = self->codeGenerator->$class->itable;
        while ($tmp4265->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4265 = $tmp4265->next;
        }
        $fn4267 $tmp4266 = $tmp4265->methods[1];
        $tmp4266(self->codeGenerator, p_cl);
        ITable* $tmp4268 = self->codeGenerator->$class->itable;
        while ($tmp4268->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4268 = $tmp4268->next;
        }
        $fn4270 $tmp4269 = $tmp4268->methods[4];
        $tmp4269(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4271 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4272 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4272;
    ITable* $tmp4273 = self->codeGenerator->$class->itable;
    while ($tmp4273->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4273 = $tmp4273->next;
    }
    $fn4275 $tmp4274 = $tmp4273->methods[1];
    $tmp4274(self->codeGenerator, p_cl);
    {
        ITable* $tmp4277 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4277->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4277 = $tmp4277->next;
        }
        $fn4279 $tmp4278 = $tmp4277->methods[0];
        panda$collections$Iterator* $tmp4280 = $tmp4278(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4276 = $tmp4280;
        $l4281:;
        ITable* $tmp4283 = m$Iter4276->$class->itable;
        while ($tmp4283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4283 = $tmp4283->next;
        }
        $fn4285 $tmp4284 = $tmp4283->methods[0];
        panda$core$Bit $tmp4286 = $tmp4284(m$Iter4276);
        panda$core$Bit $tmp4287 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4286);
        if (!$tmp4287.value) goto $l4282;
        {
            ITable* $tmp4289 = m$Iter4276->$class->itable;
            while ($tmp4289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4289 = $tmp4289->next;
            }
            $fn4291 $tmp4290 = $tmp4289->methods[1];
            panda$core$Object* $tmp4292 = $tmp4290(m$Iter4276);
            m4288 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4292);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4288);
        }
        goto $l4281;
        $l4282:;
    }
    ITable* $tmp4293 = self->codeGenerator->$class->itable;
    while ($tmp4293->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4293 = $tmp4293->next;
    }
    $fn4295 $tmp4294 = $tmp4293->methods[4];
    $tmp4294(self->codeGenerator, p_cl);
    self->symbolTable = old4271;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4296 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4297 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4296, ((panda$core$Int64) { 0 }));
    if ($tmp4297.value) {
    {
        panda$core$Object* $tmp4299 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4298 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4299);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4298);
    }
    }
    panda$core$Int64 $tmp4300 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4300, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4301.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4302;
    org$pandalanguage$pandac$ASTNode* parsed4306;
    panda$collections$Iterator* cl$Iter4310;
    org$pandalanguage$pandac$ClassDecl* cl4322;
    panda$core$Object* $tmp4303 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4302 = ((panda$collections$ListView*) $tmp4303);
    if (((panda$core$Bit) { result4302 == NULL }).value) {
    {
        panda$core$String* $tmp4304 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4305) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4304);
        org$pandalanguage$pandac$ASTNode* $tmp4308 = (($fn4307) self->parser->$class->vtable[67])(self->parser);
        parsed4306 = $tmp4308;
        if (((panda$core$Bit) { parsed4306 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4309 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4306);
            result4302 = $tmp4309;
            {
                ITable* $tmp4311 = ((panda$collections$Iterable*) result4302)->$class->itable;
                while ($tmp4311->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4311 = $tmp4311->next;
                }
                $fn4313 $tmp4312 = $tmp4311->methods[0];
                panda$collections$Iterator* $tmp4314 = $tmp4312(((panda$collections$Iterable*) result4302));
                cl$Iter4310 = $tmp4314;
                $l4315:;
                ITable* $tmp4317 = cl$Iter4310->$class->itable;
                while ($tmp4317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4317 = $tmp4317->next;
                }
                $fn4319 $tmp4318 = $tmp4317->methods[0];
                panda$core$Bit $tmp4320 = $tmp4318(cl$Iter4310);
                panda$core$Bit $tmp4321 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4320);
                if (!$tmp4321.value) goto $l4316;
                {
                    ITable* $tmp4323 = cl$Iter4310->$class->itable;
                    while ($tmp4323->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4323 = $tmp4323->next;
                    }
                    $fn4325 $tmp4324 = $tmp4323->methods[1];
                    panda$core$Object* $tmp4326 = $tmp4324(cl$Iter4310);
                    cl4322 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4326);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4322)->name), ((panda$core$Object*) cl4322));
                }
                goto $l4315;
                $l4316:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4327 = (panda$collections$Array*) malloc(40);
            $tmp4327->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4327->refCount.value = 1;
            panda$collections$Array$init($tmp4327);
            result4302 = ((panda$collections$ListView*) $tmp4327);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4302));
    }
    }
    return result4302;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4329;
    panda$collections$Iterator* cl$Iter4331;
    org$pandalanguage$pandac$ClassDecl* cl4343;
    panda$collections$ListView* $tmp4330 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4329 = $tmp4330;
    {
        ITable* $tmp4332 = ((panda$collections$Iterable*) classes4329)->$class->itable;
        while ($tmp4332->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4332 = $tmp4332->next;
        }
        $fn4334 $tmp4333 = $tmp4332->methods[0];
        panda$collections$Iterator* $tmp4335 = $tmp4333(((panda$collections$Iterable*) classes4329));
        cl$Iter4331 = $tmp4335;
        $l4336:;
        ITable* $tmp4338 = cl$Iter4331->$class->itable;
        while ($tmp4338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4338 = $tmp4338->next;
        }
        $fn4340 $tmp4339 = $tmp4338->methods[0];
        panda$core$Bit $tmp4341 = $tmp4339(cl$Iter4331);
        panda$core$Bit $tmp4342 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4341);
        if (!$tmp4342.value) goto $l4337;
        {
            ITable* $tmp4344 = cl$Iter4331->$class->itable;
            while ($tmp4344->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4344 = $tmp4344->next;
            }
            $fn4346 $tmp4345 = $tmp4344->methods[1];
            panda$core$Object* $tmp4347 = $tmp4345(cl$Iter4331);
            cl4343 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4347);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4343);
        }
        goto $l4336;
        $l4337:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4348 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4348)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4349 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4349;
        panda$core$String* $tmp4350 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4351 = panda$core$String$convert$R$panda$core$String($tmp4350);
        panda$core$String* $tmp4353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4351, &$s4352);
        panda$core$String* $tmp4354 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4353, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4354, &$s4355);
        panda$core$String* $tmp4357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4356, p_msg);
        panda$core$String* $tmp4359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4357, &$s4358);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4359));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4360 = self->codeGenerator->$class->itable;
    while ($tmp4360->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4360 = $tmp4360->next;
    }
    $fn4362 $tmp4361 = $tmp4360->methods[5];
    $tmp4361(self->codeGenerator);
}

