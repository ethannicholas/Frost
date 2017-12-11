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
#include "org/pandalanguage/pandac/ClassDecl/Resolution.h"
#include "panda/collections/Key.h"
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
#include "panda/io/File.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn128)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn173)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn180)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn221)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn235)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn245)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn253)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn260)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn358)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn364)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn370)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn377)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn383)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn389)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn443)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn449)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn455)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn466)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn472)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn478)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn484)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn490)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn496)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn504)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn510)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn516)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn581)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn587)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn593)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn617)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn649)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn655)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn661)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn680)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn686)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn692)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn718)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn724)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn730)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn782)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn788)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn794)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn803)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn820)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn838)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn844)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn850)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn858)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn864)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn870)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn881)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn887)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn893)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn916)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn922)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn928)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn967)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn973)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn979)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn992)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn998)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1004)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1019)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1025)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1031)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1047)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1053)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1059)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1073)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1079)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1085)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1098)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1104)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1110)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1155)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1161)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1167)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1174)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1180)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1186)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1206)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1212)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1218)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1298)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1406)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1412)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1418)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1444)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1450)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1456)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1613)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1619)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1625)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1811)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1817)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1823)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1913)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1935)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1957)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1974)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1980)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1986)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1998)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2020)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2094)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2112)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2183)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2201)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2207)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2213)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2244)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2250)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2256)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2293)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2299)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2305)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2328)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2334)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2340)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2730)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2736)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2742)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2874)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2880)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2886)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2999)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3099)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3115)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3121)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3127)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3222)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3228)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3234)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3444)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3450)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3456)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3591)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3597)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3603)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3629)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3635)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3641)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3748)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3754)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3760)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3906)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3912)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3918)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3991)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3997)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4003)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4054)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4060)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4066)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4130)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4136)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4142)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4181)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4187)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4193)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4205)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4211)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4217)(panda$collections$Iterator*);
typedef void (*$fn4248)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4251)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4255)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4261)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4267)(panda$collections$Iterator*);
typedef void (*$fn4272)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4275)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4280)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4284)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4290)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4296)(panda$collections$Iterator*);
typedef void (*$fn4300)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4310)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4312)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4318)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4324)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4330)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4339)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4345)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4351)(panda$collections$Iterator*);
typedef void (*$fn4367)(org$pandalanguage$pandac$CodeGenerator*);

static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x38", 12, 1929924061332732634, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x31\x36", 13, -7991854616199072395, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x33\x32", 13, -7991854616199072197, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x69\x6E\x74\x36\x34", 13, -7991854616199071892, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x38", 13, -7991854614955553525, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x31\x36", 14, 4479423132709364426, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x33\x32", 14, 4479423132709364624, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6C\x74\x69\x6E\x5F\x75\x69\x6E\x74\x36\x34", 14, 4479423132709364929, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x6E\x74", 3, 1786200, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E", 28, 2859598962617493300, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x56\x69\x65\x77", 32, 608517271074877699, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x43\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x57\x72\x69\x74\x65\x72", 34, -9068070593840742067, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x64\x65\x6E\x74\x69\x74\x79\x4D\x61\x70", 29, -1297284844070118424, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x62\x6C\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x49\x74\x65\x72\x61\x74\x6F\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4B\x65\x79", 21, -4500515327555727959, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74", 22, 6616553759611337156, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4C\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, -5808190217954538403, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x48\x61\x73\x68\x4D\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70", 21, -4500515327555707970, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x56\x69\x65\x77", 25, -7657589288547845907, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x4D\x61\x70\x57\x72\x69\x74\x65\x72", 27, 6892819694825741479, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x65\x74", 21, -4500515327555646356, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x6C\x6C\x65\x63\x74\x69\x6F\x6E\x73\x2E\x53\x74\x61\x63\x6B", 23, 4189143067940765470, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6C\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x6F\x6D\x70\x61\x72\x61\x62\x6C\x65", 21, -5254568576296725552, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x45\x71\x75\x61\x74\x61\x62\x6C\x65", 20, 3987957135724734002, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6D\x6D\x75\x74\x61\x62\x6C\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4D\x75\x74\x61\x62\x6C\x65\x53\x74\x72\x69\x6E\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x50\x61\x6E\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x69\x6D\x70\x6C\x65\x52\x61\x6E\x67\x65", 22, -5809978584159753927, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x79\x73\x74\x65\x6D", 17, -1766462930141263461, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x52\x61\x6E\x64\x6F\x6D", 17, -791852923676021540, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x6D\x61\x74\x68\x2E\x58\x6F\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6C\x75\x73", 26, 215641961116556169, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x43\x6F\x6E\x73\x6F\x6C\x65", 16, 2336552278051400340, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x46\x69\x6C\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x64\x65\x6E\x74\x65\x64\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 29, 1042140495667569485, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 20, -2955417606099851271, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4C\x69\x6E\x65\x4E\x75\x6D\x62\x65\x72\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 30, 6529214259521028726, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 26, -2754778238192978458, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4D\x65\x6D\x6F\x72\x79\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 27, -1871907680230610725, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x4F\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 21, -3689739765115213222, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x69\x6F\x2E\x50\x75\x73\x68\x62\x61\x63\x6B\x49\x6E\x70\x75\x74\x53\x74\x72\x65\x61\x6D", 28, -1415712807475310042, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72", 18, 754488464303810091, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1527396680240, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20", 6, 2145222783673, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x27", 19, -7104957698969262010, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 9, 2306627197047234467, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, 1254433276954177894, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 2825576507357767077, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x65\x78\x74\x65\x6E\x64\x20\x63\x6C\x61\x73\x73\x20", 22, -8406128752343392811, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73\x20\x27", 12, 3706067405940886645, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6F\x66\x20\x63\x6C\x61\x73\x73\x20\x27", 12, -633030867692887714, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6F\x72\x65\x20\x61\x6E\x79\x20\x73\x75\x70\x65\x72\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x73", 33, 4787050402069409712, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6D\x6F\x72\x65\x20\x74\x68\x61\x6E\x20\x6F\x6E\x65\x20\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73", 30, -759923653827872275, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 27, -5223536864783252703, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 37, 7193225585860914176, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20", 38, -6085226934842474132, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 33, -5331763662845728394, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 5735293162260763604, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6F\x72\x20\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x61\x74\x63\x68\x20\x6F\x6E\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, -6710647184408424492, NULL };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, -1301083486074551925, NULL };
static panda$core$String $s2023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 16423, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1373156, NULL };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 9019145596080302696, NULL };
static panda$core$String $s2512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 17378158564789264, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, -2978468964078965078, NULL };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, -1293962867859660245, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, -5420382528200372370, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 7885269545242335118, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 149654778879689, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s3648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s3687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s3707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s3811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s3862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 196, NULL };
static panda$core$String $s3867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s4360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$CodeGenerator* p_codeGenerator, org$pandalanguage$pandac$Compiler$Settings* p_settings) {
    org$pandalanguage$pandac$Position $tmp55;
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
    panda$collections$HashMap* $tmp13 = (panda$collections$HashMap*) malloc(56);
    $tmp13->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp13->refCount.value = 1;
    panda$collections$HashMap$init($tmp13);
    self->existenceCache = $tmp13;
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
    org$pandalanguage$pandac$Type* $tmp24 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp24->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp24->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp24, &$s26, ((panda$core$Int64) { 19 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp24));
    org$pandalanguage$pandac$Type* $tmp27 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp27->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp27->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp27, &$s29, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp27));
    org$pandalanguage$pandac$Type* $tmp30 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp30->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp30->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp30, &$s32, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 16 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp30));
    org$pandalanguage$pandac$Type* $tmp33 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp33->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp33->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp33, &$s35, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp33));
    org$pandalanguage$pandac$Type* $tmp36 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp36->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp36->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp36, &$s38, ((panda$core$Int64) { 12 }), ((panda$core$Int64) { 64 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp36));
    org$pandalanguage$pandac$Type* $tmp39 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp39->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp39->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp39, &$s41, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp39));
    org$pandalanguage$pandac$Type* $tmp42 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp42->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp42->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp42, &$s44, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 16 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp42));
    org$pandalanguage$pandac$Type* $tmp45 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp45->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp45->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp45, &$s47, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp45));
    org$pandalanguage$pandac$Type* $tmp48 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp48->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp48->refCount.value = 1;
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp48, &$s50, ((panda$core$Int64) { 13 }), ((panda$core$Int64) { 64 }));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp48));
    org$pandalanguage$pandac$Alias* $tmp51 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp51->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp51->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp55);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp51, &$s53, &$s54, $tmp55);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp51));
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
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s109);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s110);
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp113;
    org$pandalanguage$pandac$Position $tmp118;
    org$pandalanguage$pandac$Alias* $tmp111 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp111->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp111->refCount.value = 1;
    panda$core$String$Index$nullable $tmp115 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s114);
    panda$core$String$Index $tmp116 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp115.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp113, ((panda$core$String$Index$nullable) { $tmp116, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp117 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp113);
    org$pandalanguage$pandac$Position$init(&$tmp118);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp111, $tmp117, p_name, $tmp118);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp111));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* current119;
    org$pandalanguage$pandac$ClassDecl$Resolution* result123;
    panda$core$String* alias125;
    org$pandalanguage$pandac$ClassDecl* result133;
    panda$core$String$Index$nullable idx135;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp138;
    org$pandalanguage$pandac$Symbol* rootAlias150;
    panda$core$String$Index$nullable index157;
    org$pandalanguage$pandac$ClassDecl* parent160;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp161;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp164;
    panda$core$Int64 $tmp120 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp121 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp120, ((panda$core$Int64) { 0 }));
    if ($tmp121.value) {
    {
        panda$core$Object* $tmp122 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        current119 = ((org$pandalanguage$pandac$ClassDecl*) $tmp122);
    }
    }
    else {
    {
        current119 = NULL;
    }
    }
    if (((panda$core$Bit) { current119 != NULL }).value) {
    {
        panda$core$Object* $tmp124 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(current119->classResolutionCache, ((panda$collections$Key*) p_name));
        result123 = ((org$pandalanguage$pandac$ClassDecl$Resolution*) $tmp124);
        if (((panda$core$Bit) { result123 != NULL }).value) {
        {
            return result123->value;
        }
        }
        ITable* $tmp126 = current119->aliases->$class->itable;
        while ($tmp126->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp126 = $tmp126->next;
        }
        $fn128 $tmp127 = $tmp126->methods[1];
        panda$core$Object* $tmp129 = $tmp127(current119->aliases, ((panda$core$Object*) p_name));
        alias125 = ((panda$core$String*) $tmp129);
        if (((panda$core$Bit) { alias125 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl$Resolution* $tmp130 = (org$pandalanguage$pandac$ClassDecl$Resolution*) malloc(24);
            $tmp130->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Resolution$class;
            $tmp130->refCount.value = 1;
            org$pandalanguage$pandac$ClassDecl* $tmp132 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, alias125);
            org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q($tmp130, $tmp132);
            result123 = $tmp130;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(current119->classResolutionCache, ((panda$collections$Key*) p_name), ((panda$core$Object*) result123));
            return result123->value;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp134 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
    result133 = $tmp134;
    if (((panda$core$Bit) { current119 != NULL }).value) {
    {
        if (((panda$core$Bit) { result133 == NULL }).value) {
        {
            panda$core$String$Index$nullable $tmp137 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) current119)->name, &$s136);
            idx135 = $tmp137;
            if (((panda$core$Bit) { idx135.nonnull }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp138, ((panda$core$String$Index$nullable) { .nonnull = false }), idx135, ((panda$core$Bit) { true }));
                panda$core$String* $tmp139 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) current119)->name, $tmp138);
                panda$core$String* $tmp140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp139, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp141 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp140);
                result133 = $tmp141;
            }
            }
        }
        }
        if (((panda$core$Bit) { result133 == NULL }).value) {
        {
            panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) current119)->name, &$s142);
            panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp145 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp144);
            result133 = $tmp145;
        }
        }
        bool $tmp146 = ((panda$core$Bit) { result133 == NULL }).value;
        if (!$tmp146) goto $l147;
        $tmp146 = ((panda$core$Bit) { current119->owner != NULL }).value;
        $l147:;
        panda$core$Bit $tmp148 = { $tmp146 };
        if ($tmp148.value) {
        {
            panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) current119->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp149 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
            result133 = $tmp149;
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result133 == NULL }).value) {
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
            result133 = $tmp156;
        }
        }
    }
    }
    if (((panda$core$Bit) { result133 == NULL }).value) {
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
                result133 = $tmp167;
            }
            }
        }
        }
    }
    }
    if (((panda$core$Bit) { current119 != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl$Resolution* $tmp168 = (org$pandalanguage$pandac$ClassDecl$Resolution*) malloc(24);
        $tmp168->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Resolution$class;
        $tmp168->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q($tmp168, result133);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(current119->classResolutionCache, ((panda$collections$Key*) p_name), ((panda$core$Object*) $tmp168));
    }
    }
    return result133;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 expectedCount170;
    panda$collections$ListView* foundTypes175;
    panda$core$Int64 foundCount177;
    panda$core$String* s183;
    org$pandalanguage$pandac$Type* object202;
    panda$core$Range$LTpanda$core$Int64$GT $tmp204;
    org$pandalanguage$pandac$Type* bound218;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    PANDA_ASSERT(p_type->resolved.value);
    ITable* $tmp171 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
    while ($tmp171->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp171 = $tmp171->next;
    }
    $fn173 $tmp172 = $tmp171->methods[0];
    panda$core$Int64 $tmp174 = $tmp172(((panda$collections$CollectionView*) p_cl->parameters));
    expectedCount170 = $tmp174;
    panda$collections$ListView* $tmp176 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type);
    foundTypes175 = $tmp176;
    ITable* $tmp178 = ((panda$collections$CollectionView*) foundTypes175)->$class->itable;
    while ($tmp178->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp178 = $tmp178->next;
    }
    $fn180 $tmp179 = $tmp178->methods[0];
    panda$core$Int64 $tmp181 = $tmp179(((panda$collections$CollectionView*) foundTypes175));
    foundCount177 = $tmp181;
    panda$core$Bit $tmp182 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(expectedCount170, foundCount177);
    if ($tmp182.value) {
    {
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expectedCount170, ((panda$core$Int64) { 1 }));
        if ($tmp184.value) {
        {
            s183 = &$s185;
        }
        }
        else {
        {
            s183 = &$s186;
        }
        }
        panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s187, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, &$s189);
        panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp190, ((panda$core$Object*) wrap_panda$core$Int64(expectedCount170)));
        panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, &$s192);
        panda$core$String* $tmp194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp193, s183);
        panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp194, &$s195);
        panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s197, ((panda$core$Object*) wrap_panda$core$Int64(foundCount177)));
        panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp198, &$s199);
        panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, $tmp200);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp201);
        return ((panda$core$Bit) { false });
    }
    }
    org$pandalanguage$pandac$Type* $tmp203 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    object202 = $tmp203;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp204, ((panda$core$Int64) { 0 }), expectedCount170, ((panda$core$Bit) { false }));
    int64_t $tmp206 = $tmp204.min.value;
    panda$core$Int64 i205 = { $tmp206 };
    int64_t $tmp208 = $tmp204.max.value;
    bool $tmp209 = $tmp204.inclusive.value;
    if ($tmp209) goto $l216; else goto $l217;
    $l216:;
    if ($tmp206 <= $tmp208) goto $l210; else goto $l212;
    $l217:;
    if ($tmp206 < $tmp208) goto $l210; else goto $l212;
    $l210:;
    {
        ITable* $tmp219 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp219->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp219 = $tmp219->next;
        }
        $fn221 $tmp220 = $tmp219->methods[0];
        panda$core$Object* $tmp222 = $tmp220(((panda$collections$ListView*) p_cl->parameters), i205);
        bound218 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp222)->bound;
        panda$core$Bit $tmp224 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(bound218, object202);
        bool $tmp223 = $tmp224.value;
        if ($tmp223) goto $l225;
        panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(bound218->typeKind, ((panda$core$Int64) { 11 }));
        bool $tmp226 = $tmp227.value;
        if (!$tmp226) goto $l228;
        panda$core$Object* $tmp229 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(bound218->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp230 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp229), object202);
        $tmp226 = $tmp230.value;
        $l228:;
        panda$core$Bit $tmp231 = { $tmp226 };
        $tmp223 = $tmp231.value;
        $l225:;
        panda$core$Bit $tmp232 = { $tmp223 };
        if ($tmp232.value) {
        {
            goto $l213;
        }
        }
        ITable* $tmp233 = foundTypes175->$class->itable;
        while ($tmp233->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp233 = $tmp233->next;
        }
        $fn235 $tmp234 = $tmp233->methods[0];
        panda$core$Object* $tmp236 = $tmp234(foundTypes175, i205);
        org$pandalanguage$pandac$Type* $tmp237 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, bound218);
        panda$core$Int64$nullable $tmp238 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp236), $tmp237);
        if (((panda$core$Bit) { !$tmp238.nonnull }).value) {
        {
            panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s239, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s241);
            ITable* $tmp243 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp243->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp243 = $tmp243->next;
            }
            $fn245 $tmp244 = $tmp243->methods[0];
            panda$core$Object* $tmp246 = $tmp244(((panda$collections$ListView*) p_cl->parameters), i205);
            panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp246))->name);
            panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s248);
            ITable* $tmp251 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp251->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp251 = $tmp251->next;
            }
            $fn253 $tmp252 = $tmp251->methods[0];
            panda$core$Object* $tmp254 = $tmp252(((panda$collections$ListView*) p_cl->parameters), i205);
            panda$core$String* $tmp255 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s250, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp254)->bound));
            panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, &$s256);
            ITable* $tmp258 = foundTypes175->$class->itable;
            while ($tmp258->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp258 = $tmp258->next;
            }
            $fn260 $tmp259 = $tmp258->methods[0];
            panda$core$Object* $tmp261 = $tmp259(foundTypes175, i205);
            panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp257, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp261)));
            panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, &$s263);
            panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp249, $tmp264);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp265);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l213:;
    int64_t $tmp267 = $tmp208 - i205.value;
    if ($tmp209) goto $l268; else goto $l269;
    $l268:;
    if ($tmp267 >= 1) goto $l266; else goto $l212;
    $l269:;
    if ($tmp267 > 1) goto $l266; else goto $l212;
    $l266:;
    i205.value += 1;
    goto $l210;
    $l212:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved272;
    org$pandalanguage$pandac$Type* result274;
    org$pandalanguage$pandac$Symbol* s278;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp282;
    panda$collections$Array* subtypes293;
    org$pandalanguage$pandac$Type* sub296;
    panda$collections$Array* subtypes306;
    org$pandalanguage$pandac$Type* base309;
    panda$core$MutableString* name312;
    panda$core$String* separator317;
    panda$core$Range$LTpanda$core$Int64$GT $tmp319;
    org$pandalanguage$pandac$Type* resolved334;
    org$pandalanguage$pandac$Type* result345;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp273 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved272 = $tmp273;
            if (((panda$core$Bit) { resolved272 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp275 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved272);
                result274 = $tmp275;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp276 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved272, result274);
                    panda$core$Bit $tmp277 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp276);
                    if ($tmp277.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result274;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp279 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s278 = $tmp279;
            if (((panda$core$Bit) { s278 != NULL }).value) {
            {
                switch (s278->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp280 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp280->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp280->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp280, ((org$pandalanguage$pandac$Alias*) s278)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp280;
                    }
                    break;
                    case 203:
                    {
                        gp282 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s278);
                        org$pandalanguage$pandac$ClassDecl* $tmp283 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp282->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp283);
                        org$pandalanguage$pandac$Type* $tmp284 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp284->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp284->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp284, gp282);
                        return $tmp284;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s278);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp286 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s278));
                        return $tmp286;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s287, ((panda$core$Object*) p_type));
            panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, &$s289);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp290);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp291 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp291, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp292.value);
            panda$collections$Array* $tmp294 = (panda$collections$Array*) malloc(40);
            $tmp294->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp294->refCount.value = 1;
            panda$collections$Array$init($tmp294);
            subtypes293 = $tmp294;
            panda$core$Object* $tmp297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp298 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp297));
            sub296 = $tmp298;
            if (((panda$core$Bit) { sub296 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes293, ((panda$core$Object*) sub296));
            org$pandalanguage$pandac$Type* $tmp299 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp299->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp299->refCount.value = 1;
            panda$core$Object* $tmp301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes293, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp301))->name, &$s302);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp299, $tmp303, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes293), ((panda$core$Bit) { true }));
            return $tmp299;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp304 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp305 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp304, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp305.value);
            panda$collections$Array* $tmp307 = (panda$collections$Array*) malloc(40);
            $tmp307->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp307->refCount.value = 1;
            panda$collections$Array$init($tmp307);
            subtypes306 = $tmp307;
            panda$core$Object* $tmp310 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp311 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp310), ((panda$core$Bit) { false }));
            base309 = $tmp311;
            if (((panda$core$Bit) { base309 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes306, ((panda$core$Object*) base309));
            panda$core$MutableString* $tmp313 = (panda$core$MutableString*) malloc(40);
            $tmp313->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp313->refCount.value = 1;
            panda$core$Object* $tmp315 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes306, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp313, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp315))->name);
            name312 = $tmp313;
            panda$core$MutableString$append$panda$core$String(name312, &$s316);
            separator317 = &$s318;
            panda$core$Int64 $tmp320 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp319, ((panda$core$Int64) { 1 }), $tmp320, ((panda$core$Bit) { false }));
            int64_t $tmp322 = $tmp319.min.value;
            panda$core$Int64 i321 = { $tmp322 };
            int64_t $tmp324 = $tmp319.max.value;
            bool $tmp325 = $tmp319.inclusive.value;
            if ($tmp325) goto $l332; else goto $l333;
            $l332:;
            if ($tmp322 <= $tmp324) goto $l326; else goto $l328;
            $l333:;
            if ($tmp322 < $tmp324) goto $l326; else goto $l328;
            $l326:;
            {
                panda$core$Object* $tmp335 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, i321);
                org$pandalanguage$pandac$Type* $tmp336 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp335));
                resolved334 = $tmp336;
                if (((panda$core$Bit) { resolved334 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes306, ((panda$core$Object*) resolved334));
                panda$core$MutableString$append$panda$core$String(name312, separator317);
                panda$core$MutableString$append$panda$core$String(name312, ((org$pandalanguage$pandac$Symbol*) resolved334)->name);
                separator317 = &$s337;
            }
            $l329:;
            int64_t $tmp339 = $tmp324 - i321.value;
            if ($tmp325) goto $l340; else goto $l341;
            $l340:;
            if ($tmp339 >= 1) goto $l338; else goto $l328;
            $l341:;
            if ($tmp339 > 1) goto $l338; else goto $l328;
            $l338:;
            i321.value += 1;
            goto $l326;
            $l328:;
            panda$core$MutableString$append$panda$core$String(name312, &$s344);
            org$pandalanguage$pandac$Type* $tmp346 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp346->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp346->refCount.value = 1;
            panda$core$String* $tmp348 = panda$core$MutableString$finish$R$panda$core$String(name312);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp346, $tmp348, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes306), ((panda$core$Bit) { true }));
            result345 = $tmp346;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result345->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp350 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp349));
                panda$core$Bit $tmp351 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp350, result345);
                panda$core$Bit $tmp352 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp351);
                if ($tmp352.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result345;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp353 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp353;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old354;
    panda$collections$Iterator* p$Iter355;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p367;
    org$pandalanguage$pandac$Type* resolved372;
    panda$collections$Iterator* rawS$Iter374;
    org$pandalanguage$pandac$Type* rawS386;
    org$pandalanguage$pandac$Type* s391;
    org$pandalanguage$pandac$ClassDecl* sClass393;
    panda$collections$Iterator* m$Iter440;
    org$pandalanguage$pandac$MethodDecl* m452;
    panda$collections$Iterator* intf$Iter463;
    org$pandalanguage$pandac$Type* intf475;
    panda$collections$Iterator* p$Iter481;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p493;
    org$pandalanguage$pandac$ClassDecl* cl498;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old354 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp356 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp356->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp356 = $tmp356->next;
        }
        $fn358 $tmp357 = $tmp356->methods[0];
        panda$collections$Iterator* $tmp359 = $tmp357(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter355 = $tmp359;
        $l360:;
        ITable* $tmp362 = p$Iter355->$class->itable;
        while ($tmp362->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp362 = $tmp362->next;
        }
        $fn364 $tmp363 = $tmp362->methods[0];
        panda$core$Bit $tmp365 = $tmp363(p$Iter355);
        panda$core$Bit $tmp366 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp365);
        if (!$tmp366.value) goto $l361;
        {
            ITable* $tmp368 = p$Iter355->$class->itable;
            while ($tmp368->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp368 = $tmp368->next;
            }
            $fn370 $tmp369 = $tmp368->methods[1];
            panda$core$Object* $tmp371 = $tmp369(p$Iter355);
            p367 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp371);
            org$pandalanguage$pandac$Type* $tmp373 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p367->bound, ((panda$core$Bit) { false }));
            resolved372 = $tmp373;
            if (((panda$core$Bit) { resolved372 != NULL }).value) {
            {
                p367->bound = resolved372;
            }
            }
        }
        goto $l360;
        $l361:;
    }
    {
        ITable* $tmp375 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp375 = $tmp375->next;
        }
        $fn377 $tmp376 = $tmp375->methods[0];
        panda$collections$Iterator* $tmp378 = $tmp376(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter374 = $tmp378;
        $l379:;
        ITable* $tmp381 = rawS$Iter374->$class->itable;
        while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp381 = $tmp381->next;
        }
        $fn383 $tmp382 = $tmp381->methods[0];
        panda$core$Bit $tmp384 = $tmp382(rawS$Iter374);
        panda$core$Bit $tmp385 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp384);
        if (!$tmp385.value) goto $l380;
        {
            ITable* $tmp387 = rawS$Iter374->$class->itable;
            while ($tmp387->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp387 = $tmp387->next;
            }
            $fn389 $tmp388 = $tmp387->methods[1];
            panda$core$Object* $tmp390 = $tmp388(rawS$Iter374);
            rawS386 = ((org$pandalanguage$pandac$Type*) $tmp390);
            org$pandalanguage$pandac$Type* $tmp392 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS386, ((panda$core$Bit) { false }));
            s391 = $tmp392;
            if (((panda$core$Bit) { s391 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp394 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s391);
                sClass393 = $tmp394;
                if (((panda$core$Bit) { sClass393 != NULL }).value) {
                {
                    panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass393->classKind, ((panda$core$Int64) { 5011 }));
                    if ($tmp395.value) {
                    {
                        panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind, ((panda$core$Int64) { 5012 }));
                        if ($tmp396.value) {
                        {
                            panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s397, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp398, &$s399);
                            panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s401, ((org$pandalanguage$pandac$Symbol*) s391)->name);
                            panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, &$s403);
                            panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp400, $tmp404);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s391)->position, $tmp405);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s391;
                            panda$core$Int64 $tmp406 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp407 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp406, ((panda$core$Int64) { 0 }));
                            if ($tmp407.value) {
                            {
                                panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s408, ((panda$core$Object*) s391));
                                panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp409, &$s410);
                                panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp411, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
                                panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp414, &$s415);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s391)->position, $tmp416);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s417, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp418, &$s419);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s391)->position, $tmp420);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass393->classKind, ((panda$core$Int64) { 5012 }));
                        PANDA_ASSERT($tmp421.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s391));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l379;
        $l380:;
    }
    bool $tmp422 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp422) goto $l423;
    panda$core$Bit $tmp425 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s424);
    $tmp422 = $tmp425.value;
    $l423:;
    panda$core$Bit $tmp426 = { $tmp422 };
    if ($tmp426.value) {
    {
        org$pandalanguage$pandac$Type* $tmp427 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp427;
    }
    }
    bool $tmp429 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp429) goto $l430;
    panda$core$Bit $tmp431 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp432 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp431);
    $tmp429 = $tmp432.value;
    $l430:;
    panda$core$Bit $tmp433 = { $tmp429 };
    bool $tmp428 = $tmp433.value;
    if (!$tmp428) goto $l434;
    panda$core$Bit $tmp436 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s435);
    $tmp428 = $tmp436.value;
    $l434:;
    panda$core$Bit $tmp437 = { $tmp428 };
    if ($tmp437.value) {
    {
        panda$core$Int64 $tmp438 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp439 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp438);
        p_cl->annotations->flags = $tmp439;
        {
            ITable* $tmp441 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp441->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp441 = $tmp441->next;
            }
            $fn443 $tmp442 = $tmp441->methods[0];
            panda$collections$Iterator* $tmp444 = $tmp442(((panda$collections$Iterable*) p_cl->methods));
            m$Iter440 = $tmp444;
            $l445:;
            ITable* $tmp447 = m$Iter440->$class->itable;
            while ($tmp447->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp447 = $tmp447->next;
            }
            $fn449 $tmp448 = $tmp447->methods[0];
            panda$core$Bit $tmp450 = $tmp448(m$Iter440);
            panda$core$Bit $tmp451 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp450);
            if (!$tmp451.value) goto $l446;
            {
                ITable* $tmp453 = m$Iter440->$class->itable;
                while ($tmp453->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp453 = $tmp453->next;
                }
                $fn455 $tmp454 = $tmp453->methods[1];
                panda$core$Object* $tmp456 = $tmp454(m$Iter440);
                m452 = ((org$pandalanguage$pandac$MethodDecl*) $tmp456);
                panda$core$Int64 $tmp457 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp458 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m452->annotations->flags, $tmp457);
                m452->annotations->flags = $tmp458;
                panda$core$Bit $tmp459 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m452->annotations, m452->body);
                if ($tmp459.value) {
                {
                    panda$core$Int64 $tmp460 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp461 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m452->annotations->flags, $tmp460);
                    m452->annotations->flags = $tmp461;
                }
                }
            }
            goto $l445;
            $l446:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp462 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp462, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp464 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp464->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp464 = $tmp464->next;
        }
        $fn466 $tmp465 = $tmp464->methods[0];
        panda$collections$Iterator* $tmp467 = $tmp465(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter463 = $tmp467;
        $l468:;
        ITable* $tmp470 = intf$Iter463->$class->itable;
        while ($tmp470->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp470 = $tmp470->next;
        }
        $fn472 $tmp471 = $tmp470->methods[0];
        panda$core$Bit $tmp473 = $tmp471(intf$Iter463);
        panda$core$Bit $tmp474 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp473);
        if (!$tmp474.value) goto $l469;
        {
            ITable* $tmp476 = intf$Iter463->$class->itable;
            while ($tmp476->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp476 = $tmp476->next;
            }
            $fn478 $tmp477 = $tmp476->methods[1];
            panda$core$Object* $tmp479 = $tmp477(intf$Iter463);
            intf475 = ((org$pandalanguage$pandac$Type*) $tmp479);
            org$pandalanguage$pandac$ClassDecl* $tmp480 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf475);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp480, intf475);
        }
        goto $l468;
        $l469:;
    }
    {
        ITable* $tmp482 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp482->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp482 = $tmp482->next;
        }
        $fn484 $tmp483 = $tmp482->methods[0];
        panda$collections$Iterator* $tmp485 = $tmp483(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter481 = $tmp485;
        $l486:;
        ITable* $tmp488 = p$Iter481->$class->itable;
        while ($tmp488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp488 = $tmp488->next;
        }
        $fn490 $tmp489 = $tmp488->methods[0];
        panda$core$Bit $tmp491 = $tmp489(p$Iter481);
        panda$core$Bit $tmp492 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp491);
        if (!$tmp492.value) goto $l487;
        {
            ITable* $tmp494 = p$Iter481->$class->itable;
            while ($tmp494->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp494 = $tmp494->next;
            }
            $fn496 $tmp495 = $tmp494->methods[1];
            panda$core$Object* $tmp497 = $tmp495(p$Iter481);
            p493 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp497);
            org$pandalanguage$pandac$ClassDecl* $tmp499 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p493->bound);
            cl498 = $tmp499;
            if (((panda$core$Bit) { cl498 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl498)->position, cl498, p493->bound);
            }
            }
        }
        goto $l486;
        $l487:;
    }
    self->symbolTable = old354;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old500;
    panda$collections$Iterator* p$Iter501;
    org$pandalanguage$pandac$MethodDecl$Parameter* p513;
    org$pandalanguage$pandac$MethodDecl* overridden521;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old500 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp502 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp502->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp502 = $tmp502->next;
        }
        $fn504 $tmp503 = $tmp502->methods[0];
        panda$collections$Iterator* $tmp505 = $tmp503(((panda$collections$Iterable*) p_m->parameters));
        p$Iter501 = $tmp505;
        $l506:;
        ITable* $tmp508 = p$Iter501->$class->itable;
        while ($tmp508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp508 = $tmp508->next;
        }
        $fn510 $tmp509 = $tmp508->methods[0];
        panda$core$Bit $tmp511 = $tmp509(p$Iter501);
        panda$core$Bit $tmp512 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp511);
        if (!$tmp512.value) goto $l507;
        {
            ITable* $tmp514 = p$Iter501->$class->itable;
            while ($tmp514->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp514 = $tmp514->next;
            }
            $fn516 $tmp515 = $tmp514->methods[1];
            panda$core$Object* $tmp517 = $tmp515(p$Iter501);
            p513 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp517);
            org$pandalanguage$pandac$Type* $tmp518 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p513->type);
            p513->type = $tmp518;
        }
        goto $l506;
        $l507:;
    }
    org$pandalanguage$pandac$Type* $tmp519 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp519;
    p_m->resolved = ((panda$core$Bit) { true });
    panda$core$Bit $tmp520 = panda$core$Bit$$NOT$R$panda$core$Bit(p_m->owner->external);
    if ($tmp520.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp522 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
        overridden521 = $tmp522;
        if (((panda$core$Bit) { overridden521 != NULL }).value) {
        {
            panda$core$Bit $tmp523 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
            panda$core$Bit $tmp524 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp523);
            if ($tmp524.value) {
            {
                panda$core$String* $tmp525 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp526 = panda$core$String$convert$R$panda$core$String($tmp525);
                panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp526, &$s527);
                panda$core$String* $tmp529 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden521);
                panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp528, $tmp529);
                panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s531);
                panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, &$s533);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp534);
            }
            }
            panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 57 }));
            bool $tmp535 = $tmp536.value;
            if (!$tmp535) goto $l537;
            panda$core$Bit $tmp538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden521->methodKind, ((panda$core$Int64) { 58 }));
            $tmp535 = $tmp538.value;
            $l537:;
            panda$core$Bit $tmp539 = { $tmp535 };
            if ($tmp539.value) {
            {
                panda$core$String* $tmp540 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp541 = panda$core$String$convert$R$panda$core$String($tmp540);
                panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s542);
                panda$core$String* $tmp544 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden521);
                panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp543, $tmp544);
                panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s546);
                panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s548);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp549);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp550 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        if ($tmp550.value) {
        {
            panda$core$String* $tmp551 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp552 = panda$core$String$convert$R$panda$core$String($tmp551);
            panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s553);
            panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, &$s555);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp556);
        }
        }
        }
    }
    }
    self->symbolTable = old500;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old557;
    org$pandalanguage$pandac$Type* resolved560;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old557 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp558 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp559 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp558);
    if ($tmp559.value) {
    {
        org$pandalanguage$pandac$Type* $tmp561 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved560 = $tmp561;
        if (((panda$core$Bit) { resolved560 != NULL }).value) {
        {
            p_f->type = resolved560;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp562 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp563 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp562, p_f->type);
                p_f->value = $tmp563;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old557;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s564);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old557;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp565 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp565;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old557;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp566 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp566;
    org$pandalanguage$pandac$IRNode* $tmp567 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp567;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old557;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$ListView* methods569;
    panda$collections$Array* args571;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp572;
    panda$collections$Array* best574;
    panda$core$Int64$nullable bestCost577;
    panda$collections$Iterator* m$Iter578;
    org$pandalanguage$pandac$MethodRef* m590;
    panda$core$Int64$nullable cost595;
    org$pandalanguage$pandac$IRNode* callTarget601;
    org$pandalanguage$pandac$IRNode* result607;
    panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1039 }));
    PANDA_ASSERT($tmp568.value);
    panda$core$Object* $tmp570 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    methods569 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp570)->payload);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp572, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$collections$Array* $tmp573 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp572);
    args571 = $tmp573;
    panda$collections$Array* $tmp575 = (panda$collections$Array*) malloc(40);
    $tmp575->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp575->refCount.value = 1;
    panda$collections$Array$init($tmp575);
    best574 = $tmp575;
    bestCost577 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp579 = ((panda$collections$Iterable*) methods569)->$class->itable;
        while ($tmp579->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp579 = $tmp579->next;
        }
        $fn581 $tmp580 = $tmp579->methods[0];
        panda$collections$Iterator* $tmp582 = $tmp580(((panda$collections$Iterable*) methods569));
        m$Iter578 = $tmp582;
        $l583:;
        ITable* $tmp585 = m$Iter578->$class->itable;
        while ($tmp585->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp585 = $tmp585->next;
        }
        $fn587 $tmp586 = $tmp585->methods[0];
        panda$core$Bit $tmp588 = $tmp586(m$Iter578);
        panda$core$Bit $tmp589 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp588);
        if (!$tmp589.value) goto $l584;
        {
            ITable* $tmp591 = m$Iter578->$class->itable;
            while ($tmp591->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp591 = $tmp591->next;
            }
            $fn593 $tmp592 = $tmp591->methods[1];
            panda$core$Object* $tmp594 = $tmp592(m$Iter578);
            m590 = ((org$pandalanguage$pandac$MethodRef*) $tmp594);
            panda$core$Int64$nullable $tmp596 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m590, ((panda$collections$ListView*) args571), p_target);
            cost595 = $tmp596;
            if (((panda$core$Bit) { !cost595.nonnull }).value) {
            {
                goto $l583;
            }
            }
            if (((panda$core$Bit) { !bestCost577.nonnull }).value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best574, ((panda$core$Object*) m590));
                bestCost577 = cost595;
                goto $l583;
            }
            }
            panda$core$Bit $tmp597 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost595.value), ((panda$core$Int64) bestCost577.value));
            if ($tmp597.value) {
            {
                panda$collections$Array$clear(best574);
                bestCost577 = cost595;
            }
            }
            panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost595.value), ((panda$core$Int64) bestCost577.value));
            if ($tmp598.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best574, ((panda$core$Object*) m590));
            }
            }
        }
        goto $l583;
        $l584:;
    }
    panda$core$Int64 $tmp599 = panda$collections$Array$get_count$R$panda$core$Int64(best574);
    panda$core$Bit $tmp600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp599, ((panda$core$Int64) { 1 }));
    if ($tmp600.value) {
    {
        panda$core$Object* $tmp602 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp603 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp602)->children);
        panda$core$Bit $tmp604 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp603, ((panda$core$Int64) { 0 }));
        if ($tmp604.value) {
        {
            panda$core$Object* $tmp605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp606 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp605)->children, ((panda$core$Int64) { 0 }));
            callTarget601 = ((org$pandalanguage$pandac$IRNode*) $tmp606);
        }
        }
        else {
        {
            callTarget601 = NULL;
        }
        }
        panda$core$Object* $tmp608 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best574, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp609 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget601, ((org$pandalanguage$pandac$MethodRef*) $tmp608), ((panda$collections$ListView*) args571));
        result607 = $tmp609;
        if (((panda$core$Bit) { p_target != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp610 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result607, p_target);
            result607 = $tmp610;
        }
        }
        return result607;
    }
    }
    panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s611, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_expr->position)));
    panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp612, &$s613);
    ITable* $tmp615 = methods569->$class->itable;
    while ($tmp615->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp615 = $tmp615->next;
    }
    $fn617 $tmp616 = $tmp615->methods[0];
    panda$core$Object* $tmp618 = $tmp616(methods569, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp614, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp618)->value)->name);
    panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, &$s620);
    panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp621, ((panda$core$Object*) best574));
    panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp622, &$s623);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp624));
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s625);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp626 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp626;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s627);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp628 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp629 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp628);
            return $tmp629;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp630 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp630) goto $l631;
    panda$core$Bit $tmp633 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s632);
    $tmp630 = $tmp633.value;
    $l631:;
    panda$core$Bit $tmp634 = { $tmp630 };
    return $tmp634;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result635;
    org$pandalanguage$pandac$ClassDecl* s643;
    panda$collections$Iterator* f$Iter646;
    org$pandalanguage$pandac$FieldDecl* f658;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp636 = (panda$collections$Array*) malloc(40);
    $tmp636->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp636->refCount.value = 1;
    panda$collections$Array$init($tmp636);
    result635 = $tmp636;
    panda$core$Bit $tmp639 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp640 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp639);
    bool $tmp638 = $tmp640.value;
    if (!$tmp638) goto $l641;
    $tmp638 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l641:;
    panda$core$Bit $tmp642 = { $tmp638 };
    if ($tmp642.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp644 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s643 = $tmp644;
        if (((panda$core$Bit) { s643 != NULL }).value) {
        {
            panda$collections$ListView* $tmp645 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s643);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result635, ((panda$collections$CollectionView*) $tmp645));
        }
        }
    }
    }
    {
        ITable* $tmp647 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp647->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp647 = $tmp647->next;
        }
        $fn649 $tmp648 = $tmp647->methods[0];
        panda$collections$Iterator* $tmp650 = $tmp648(((panda$collections$Iterable*) p_cl->fields));
        f$Iter646 = $tmp650;
        $l651:;
        ITable* $tmp653 = f$Iter646->$class->itable;
        while ($tmp653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp653 = $tmp653->next;
        }
        $fn655 $tmp654 = $tmp653->methods[0];
        panda$core$Bit $tmp656 = $tmp654(f$Iter646);
        panda$core$Bit $tmp657 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp656);
        if (!$tmp657.value) goto $l652;
        {
            ITable* $tmp659 = f$Iter646->$class->itable;
            while ($tmp659->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp659 = $tmp659->next;
            }
            $fn661 $tmp660 = $tmp659->methods[1];
            panda$core$Object* $tmp662 = $tmp660(f$Iter646);
            f658 = ((org$pandalanguage$pandac$FieldDecl*) $tmp662);
            panda$core$Bit $tmp663 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f658->annotations);
            panda$core$Bit $tmp664 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp663);
            if ($tmp664.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result635, ((panda$core$Object*) f658));
            }
            }
        }
        goto $l651;
        $l652:;
    }
    return ((panda$collections$ListView*) result635);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result665;
    panda$core$Bit $tmp667;
    panda$core$Object* $tmp666 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result665 = ($tmp666 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp666)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result665.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp667, p_f);
        result665 = ((panda$core$Bit$nullable) { $tmp667, true });
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) result665.value))));
    }
    }
    return ((panda$core$Bit) result665.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result668;
    panda$core$String* suffix670;
    panda$core$Bit found676;
    panda$collections$Iterator* dir$Iter677;
    panda$io$File* dir689;
    panda$io$File* f694;
    panda$core$String$Index$nullable index698;
    org$pandalanguage$pandac$ClassDecl* parent701;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp702;
    panda$core$Object* $tmp669 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result668 = ((org$pandalanguage$pandac$ClassDecl*) $tmp669);
    if (((panda$core$Bit) { result668 == NULL }).value) {
    {
        panda$core$String* $tmp673 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s671, &$s672);
        panda$core$String* $tmp675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp673, &$s674);
        suffix670 = $tmp675;
        found676 = ((panda$core$Bit) { false });
        {
            ITable* $tmp678 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp678->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp678 = $tmp678->next;
            }
            $fn680 $tmp679 = $tmp678->methods[0];
            panda$collections$Iterator* $tmp681 = $tmp679(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter677 = $tmp681;
            $l682:;
            ITable* $tmp684 = dir$Iter677->$class->itable;
            while ($tmp684->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp684 = $tmp684->next;
            }
            $fn686 $tmp685 = $tmp684->methods[0];
            panda$core$Bit $tmp687 = $tmp685(dir$Iter677);
            panda$core$Bit $tmp688 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp687);
            if (!$tmp688.value) goto $l683;
            {
                ITable* $tmp690 = dir$Iter677->$class->itable;
                while ($tmp690->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp690 = $tmp690->next;
                }
                $fn692 $tmp691 = $tmp690->methods[1];
                panda$core$Object* $tmp693 = $tmp691(dir$Iter677);
                dir689 = ((panda$io$File*) $tmp693);
                panda$io$File* $tmp695 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir689, suffix670);
                f694 = $tmp695;
                panda$core$Bit $tmp696 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f694);
                if ($tmp696.value) {
                {
                    found676 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f694);
                    panda$core$Object* $tmp697 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result668 = ((org$pandalanguage$pandac$ClassDecl*) $tmp697);
                }
                }
            }
            goto $l682;
            $l683:;
        }
    }
    }
    if (((panda$core$Bit) { result668 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp700 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s699);
        index698 = $tmp700;
        if (((panda$core$Bit) { index698.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp702, ((panda$core$String$Index$nullable) { .nonnull = false }), index698, ((panda$core$Bit) { false }));
            panda$core$String* $tmp703 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp702);
            org$pandalanguage$pandac$ClassDecl* $tmp704 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp703);
            parent701 = $tmp704;
            if (((panda$core$Bit) { parent701 != NULL }).value) {
            {
                panda$core$Object* $tmp705 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result668 = ((org$pandalanguage$pandac$ClassDecl*) $tmp705);
            }
            }
        }
        }
    }
    }
    return result668;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result706;
    panda$core$String* suffix708;
    panda$core$Bit found714;
    panda$collections$Iterator* dir$Iter715;
    panda$io$File* dir727;
    panda$io$File* f732;
    panda$core$Int64 oldErrorCount735;
    org$pandalanguage$pandac$Position $tmp741;
    panda$core$Object* $tmp707 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result706 = ((org$pandalanguage$pandac$ClassDecl*) $tmp707);
    if (((panda$core$Bit) { result706 == NULL }).value) {
    {
        panda$core$String* $tmp711 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s709, &$s710);
        panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp711, &$s712);
        suffix708 = $tmp713;
        found714 = ((panda$core$Bit) { false });
        {
            ITable* $tmp716 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp716 = $tmp716->next;
            }
            $fn718 $tmp717 = $tmp716->methods[0];
            panda$collections$Iterator* $tmp719 = $tmp717(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter715 = $tmp719;
            $l720:;
            ITable* $tmp722 = dir$Iter715->$class->itable;
            while ($tmp722->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp722 = $tmp722->next;
            }
            $fn724 $tmp723 = $tmp722->methods[0];
            panda$core$Bit $tmp725 = $tmp723(dir$Iter715);
            panda$core$Bit $tmp726 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp725);
            if (!$tmp726.value) goto $l721;
            {
                ITable* $tmp728 = dir$Iter715->$class->itable;
                while ($tmp728->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp728 = $tmp728->next;
                }
                $fn730 $tmp729 = $tmp728->methods[1];
                panda$core$Object* $tmp731 = $tmp729(dir$Iter715);
                dir727 = ((panda$io$File*) $tmp731);
                panda$io$File* $tmp733 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir727, suffix708);
                f732 = $tmp733;
                panda$core$Bit $tmp734 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f732);
                if ($tmp734.value) {
                {
                    found714 = ((panda$core$Bit) { true });
                    oldErrorCount735 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f732);
                    panda$core$Object* $tmp736 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result706 = ((org$pandalanguage$pandac$ClassDecl*) $tmp736);
                    bool $tmp737 = ((panda$core$Bit) { result706 == NULL }).value;
                    if (!$tmp737) goto $l738;
                    panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount735);
                    $tmp737 = $tmp739.value;
                    $l738:;
                    panda$core$Bit $tmp740 = { $tmp737 };
                    if ($tmp740.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp741, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s742, ((panda$core$Object*) f732));
                        panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp743, &$s744);
                        panda$core$String* $tmp746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, p_fullName);
                        panda$core$String* $tmp748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp746, &$s747);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f732, $tmp741, $tmp748);
                    }
                    }
                }
                }
            }
            goto $l720;
            $l721:;
        }
        panda$core$Bit $tmp749 = panda$core$Bit$$NOT$R$panda$core$Bit(found714);
        if ($tmp749.value) {
        {
            panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s750, suffix708);
            panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, &$s752);
            panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp753, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp754, &$s755);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp756);
        }
        }
    }
    }
    return result706;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type760;
    org$pandalanguage$pandac$ClassDecl* result767;
    org$pandalanguage$pandac$Annotations* annotations769;
    panda$collections$Array* supertypes775;
    panda$collections$Iterator* intf$Iter779;
    org$pandalanguage$pandac$Type* intf791;
    panda$collections$HashMap* aliases797;
    panda$core$Range$LTpanda$core$Int64$GT $tmp800;
    panda$collections$Iterator* m$Iter835;
    org$pandalanguage$pandac$MethodDecl* m847;
    panda$collections$Array* parameters852;
    panda$collections$Iterator* p$Iter855;
    org$pandalanguage$pandac$MethodDecl$Parameter* p867;
    org$pandalanguage$pandac$MethodDecl* clone875;
    panda$collections$Iterator* f$Iter878;
    org$pandalanguage$pandac$FieldDecl* f890;
    org$pandalanguage$pandac$FieldDecl* clone895;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp758 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s757);
    panda$core$Bit $tmp759 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp758);
    PANDA_ASSERT($tmp759.value);
    org$pandalanguage$pandac$Type* $tmp761 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type760 = $tmp761;
    panda$core$Bit $tmp762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type760->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp762.value) {
    {
        panda$core$Object* $tmp763 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type760->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp764 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp763));
        return $tmp764;
    }
    }
    panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type760->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp765.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type760->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp766.value);
    panda$core$Object* $tmp768 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type760)->name));
    result767 = ((org$pandalanguage$pandac$ClassDecl*) $tmp768);
    if (((panda$core$Bit) { result767 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp770 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp770->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp770->refCount.value = 1;
        panda$core$Int64 $tmp772 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp773 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp772);
        panda$core$Int64 $tmp774 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp773);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp770, $tmp774);
        annotations769 = $tmp770;
        panda$collections$Array* $tmp776 = (panda$collections$Array*) malloc(40);
        $tmp776->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp776->refCount.value = 1;
        panda$collections$Array$init($tmp776);
        supertypes775 = $tmp776;
        org$pandalanguage$pandac$Type* $tmp778 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type760, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes775, ((panda$core$Object*) $tmp778));
        {
            ITable* $tmp780 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp780->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp780 = $tmp780->next;
            }
            $fn782 $tmp781 = $tmp780->methods[0];
            panda$collections$Iterator* $tmp783 = $tmp781(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter779 = $tmp783;
            $l784:;
            ITable* $tmp786 = intf$Iter779->$class->itable;
            while ($tmp786->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp786 = $tmp786->next;
            }
            $fn788 $tmp787 = $tmp786->methods[0];
            panda$core$Bit $tmp789 = $tmp787(intf$Iter779);
            panda$core$Bit $tmp790 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp789);
            if (!$tmp790.value) goto $l785;
            {
                ITable* $tmp792 = intf$Iter779->$class->itable;
                while ($tmp792->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp792 = $tmp792->next;
                }
                $fn794 $tmp793 = $tmp792->methods[1];
                panda$core$Object* $tmp795 = $tmp793(intf$Iter779);
                intf791 = ((org$pandalanguage$pandac$Type*) $tmp795);
                org$pandalanguage$pandac$Type* $tmp796 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type760, intf791);
                panda$collections$Array$add$panda$collections$Array$T(supertypes775, ((panda$core$Object*) $tmp796));
            }
            goto $l784;
            $l785:;
        }
        panda$collections$HashMap* $tmp798 = (panda$collections$HashMap*) malloc(56);
        $tmp798->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp798->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp798, p_cl->aliases);
        aliases797 = $tmp798;
        ITable* $tmp801 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp801->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp801 = $tmp801->next;
        }
        $fn803 $tmp802 = $tmp801->methods[0];
        panda$core$Int64 $tmp804 = $tmp802(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp800, ((panda$core$Int64) { 0 }), $tmp804, ((panda$core$Bit) { false }));
        int64_t $tmp806 = $tmp800.min.value;
        panda$core$Int64 i805 = { $tmp806 };
        int64_t $tmp808 = $tmp800.max.value;
        bool $tmp809 = $tmp800.inclusive.value;
        if ($tmp809) goto $l816; else goto $l817;
        $l816:;
        if ($tmp806 <= $tmp808) goto $l810; else goto $l812;
        $l817:;
        if ($tmp806 < $tmp808) goto $l810; else goto $l812;
        $l810:;
        {
            ITable* $tmp818 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp818->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp818 = $tmp818->next;
            }
            $fn820 $tmp819 = $tmp818->methods[0];
            panda$core$Object* $tmp821 = $tmp819(((panda$collections$ListView*) p_cl->parameters), i805);
            panda$core$Int64 $tmp822 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i805, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp823 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type760->subtypes, $tmp822);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases797, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp821))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp823))->name));
        }
        $l813:;
        int64_t $tmp825 = $tmp808 - i805.value;
        if ($tmp809) goto $l826; else goto $l827;
        $l826:;
        if ($tmp825 >= 1) goto $l824; else goto $l812;
        $l827:;
        if ($tmp825 > 1) goto $l824; else goto $l812;
        $l824:;
        i805.value += 1;
        goto $l810;
        $l812:;
        org$pandalanguage$pandac$ClassDecl* $tmp830 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
        $tmp830->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp830->refCount.value = 1;
        panda$collections$Array* $tmp832 = (panda$collections$Array*) malloc(40);
        $tmp832->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp832->refCount.value = 1;
        panda$collections$Array$init($tmp832);
        panda$core$Object* $tmp834 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp830, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases797), p_cl->doccomment, annotations769, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type760)->name, ((panda$collections$ListView*) supertypes775), $tmp832, ((org$pandalanguage$pandac$SymbolTable*) $tmp834));
        result767 = $tmp830;
        result767->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp836 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp836->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp836 = $tmp836->next;
            }
            $fn838 $tmp837 = $tmp836->methods[0];
            panda$collections$Iterator* $tmp839 = $tmp837(((panda$collections$Iterable*) p_cl->methods));
            m$Iter835 = $tmp839;
            $l840:;
            ITable* $tmp842 = m$Iter835->$class->itable;
            while ($tmp842->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp842 = $tmp842->next;
            }
            $fn844 $tmp843 = $tmp842->methods[0];
            panda$core$Bit $tmp845 = $tmp843(m$Iter835);
            panda$core$Bit $tmp846 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp845);
            if (!$tmp846.value) goto $l841;
            {
                ITable* $tmp848 = m$Iter835->$class->itable;
                while ($tmp848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp848 = $tmp848->next;
                }
                $fn850 $tmp849 = $tmp848->methods[1];
                panda$core$Object* $tmp851 = $tmp849(m$Iter835);
                m847 = ((org$pandalanguage$pandac$MethodDecl*) $tmp851);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m847);
                panda$collections$Array* $tmp853 = (panda$collections$Array*) malloc(40);
                $tmp853->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp853->refCount.value = 1;
                panda$collections$Array$init($tmp853);
                parameters852 = $tmp853;
                {
                    ITable* $tmp856 = ((panda$collections$Iterable*) m847->parameters)->$class->itable;
                    while ($tmp856->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp856 = $tmp856->next;
                    }
                    $fn858 $tmp857 = $tmp856->methods[0];
                    panda$collections$Iterator* $tmp859 = $tmp857(((panda$collections$Iterable*) m847->parameters));
                    p$Iter855 = $tmp859;
                    $l860:;
                    ITable* $tmp862 = p$Iter855->$class->itable;
                    while ($tmp862->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp862 = $tmp862->next;
                    }
                    $fn864 $tmp863 = $tmp862->methods[0];
                    panda$core$Bit $tmp865 = $tmp863(p$Iter855);
                    panda$core$Bit $tmp866 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp865);
                    if (!$tmp866.value) goto $l861;
                    {
                        ITable* $tmp868 = p$Iter855->$class->itable;
                        while ($tmp868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp868 = $tmp868->next;
                        }
                        $fn870 $tmp869 = $tmp868->methods[1];
                        panda$core$Object* $tmp871 = $tmp869(p$Iter855);
                        p867 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp871);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp872 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp872->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp872->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp874 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type760, p867->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp872, p867->name, $tmp874);
                        panda$collections$Array$add$panda$collections$Array$T(parameters852, ((panda$core$Object*) $tmp872));
                    }
                    goto $l860;
                    $l861:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp876 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
                $tmp876->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp876->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp876, result767, ((org$pandalanguage$pandac$Symbol*) m847)->position, m847->doccomment, m847->annotations, m847->methodKind, ((org$pandalanguage$pandac$Symbol*) m847)->name, parameters852, m847->returnType, m847->body);
                clone875 = $tmp876;
                panda$collections$Array$add$panda$collections$Array$T(result767->methods, ((panda$core$Object*) clone875));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result767->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone875));
            }
            goto $l840;
            $l841:;
        }
        {
            ITable* $tmp879 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp879->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp879 = $tmp879->next;
            }
            $fn881 $tmp880 = $tmp879->methods[0];
            panda$collections$Iterator* $tmp882 = $tmp880(((panda$collections$Iterable*) p_cl->fields));
            f$Iter878 = $tmp882;
            $l883:;
            ITable* $tmp885 = f$Iter878->$class->itable;
            while ($tmp885->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp885 = $tmp885->next;
            }
            $fn887 $tmp886 = $tmp885->methods[0];
            panda$core$Bit $tmp888 = $tmp886(f$Iter878);
            panda$core$Bit $tmp889 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp888);
            if (!$tmp889.value) goto $l884;
            {
                ITable* $tmp891 = f$Iter878->$class->itable;
                while ($tmp891->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp891 = $tmp891->next;
                }
                $fn893 $tmp892 = $tmp891->methods[1];
                panda$core$Object* $tmp894 = $tmp892(f$Iter878);
                f890 = ((org$pandalanguage$pandac$FieldDecl*) $tmp894);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f890);
                org$pandalanguage$pandac$FieldDecl* $tmp896 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp896->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp896->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp898 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type760, f890->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp896, result767, ((org$pandalanguage$pandac$Symbol*) f890)->position, f890->doccomment, f890->annotations, f890->fieldKind, ((org$pandalanguage$pandac$Symbol*) f890)->name, $tmp898, f890->rawValue);
                clone895 = $tmp896;
                panda$collections$Array$add$panda$collections$Array$T(result767->fields, ((panda$core$Object*) clone895));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result767->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone895));
            }
            goto $l883;
            $l884:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result767)->name), ((panda$core$Object*) result767));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result767));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result767;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result899;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp900 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result899 = $tmp900;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp901 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp902 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp901));
            result899 = $tmp902;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp903 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp903;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp904 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result899->annotations);
    if ($tmp904.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp905 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result899, p_type);
        result899 = $tmp905;
    }
    }
    return result899;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl906;
    panda$collections$Set* result908;
    panda$collections$Iterator* intf$Iter913;
    org$pandalanguage$pandac$Type* intf925;
    org$pandalanguage$pandac$ClassDecl* $tmp907 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl906 = $tmp907;
    PANDA_ASSERT(((panda$core$Bit) { cl906 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl906);
    panda$collections$Set* $tmp909 = (panda$collections$Set*) malloc(24);
    $tmp909->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp909->refCount.value = 1;
    panda$collections$Set$init($tmp909);
    result908 = $tmp909;
    if (((panda$core$Bit) { cl906->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp911 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl906->rawSuper);
        panda$collections$Set* $tmp912 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp911);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result908, ((panda$collections$CollectionView*) $tmp912));
    }
    }
    {
        ITable* $tmp914 = ((panda$collections$Iterable*) cl906->rawInterfaces)->$class->itable;
        while ($tmp914->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp914 = $tmp914->next;
        }
        $fn916 $tmp915 = $tmp914->methods[0];
        panda$collections$Iterator* $tmp917 = $tmp915(((panda$collections$Iterable*) cl906->rawInterfaces));
        intf$Iter913 = $tmp917;
        $l918:;
        ITable* $tmp920 = intf$Iter913->$class->itable;
        while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp920 = $tmp920->next;
        }
        $fn922 $tmp921 = $tmp920->methods[0];
        panda$core$Bit $tmp923 = $tmp921(intf$Iter913);
        panda$core$Bit $tmp924 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp923);
        if (!$tmp924.value) goto $l919;
        {
            ITable* $tmp926 = intf$Iter913->$class->itable;
            while ($tmp926->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp926 = $tmp926->next;
            }
            $fn928 $tmp927 = $tmp926->methods[1];
            panda$core$Object* $tmp929 = $tmp927(intf$Iter913);
            intf925 = ((org$pandalanguage$pandac$Type*) $tmp929);
            org$pandalanguage$pandac$Type* $tmp930 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf925);
            panda$collections$Set* $tmp931 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp930);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result908, ((panda$collections$CollectionView*) $tmp931));
        }
        goto $l918;
        $l919:;
    }
    panda$core$Bit $tmp932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl906->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp932.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result908, ((panda$collections$Key*) p_t));
    }
    }
    return result908;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp938;
    panda$core$Bit $tmp933 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp933.value);
    panda$core$Bit $tmp934 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp934.value);
    panda$core$Int64 $tmp935 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp936 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp937 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp935, $tmp936);
    if ($tmp937.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp939 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp938, ((panda$core$Int64) { 0 }), $tmp939, ((panda$core$Bit) { false }));
    int64_t $tmp941 = $tmp938.min.value;
    panda$core$Int64 i940 = { $tmp941 };
    int64_t $tmp943 = $tmp938.max.value;
    bool $tmp944 = $tmp938.inclusive.value;
    if ($tmp944) goto $l951; else goto $l952;
    $l951:;
    if ($tmp941 <= $tmp943) goto $l945; else goto $l947;
    $l952:;
    if ($tmp941 < $tmp943) goto $l945; else goto $l947;
    $l945:;
    {
        panda$core$Object* $tmp953 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i940);
        panda$core$Object* $tmp954 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i940);
        panda$core$Bit $tmp955 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp953), ((org$pandalanguage$pandac$Type*) $tmp954));
        if ($tmp955.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l948:;
    int64_t $tmp957 = $tmp943 - i940.value;
    if ($tmp944) goto $l958; else goto $l959;
    $l958:;
    if ($tmp957 >= 1) goto $l956; else goto $l947;
    $l959:;
    if ($tmp957 > 1) goto $l956; else goto $l947;
    $l956:;
    i940.value += 1;
    goto $l945;
    $l947:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl962;
    panda$collections$Iterator* test$Iter964;
    org$pandalanguage$pandac$MethodDecl* test976;
    panda$collections$Iterator* raw$Iter989;
    org$pandalanguage$pandac$Type* raw1001;
    org$pandalanguage$pandac$MethodDecl* result1006;
    org$pandalanguage$pandac$ClassDecl* $tmp963 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl962 = $tmp963;
    PANDA_ASSERT(((panda$core$Bit) { cl962 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl962);
    {
        ITable* $tmp965 = ((panda$collections$Iterable*) cl962->methods)->$class->itable;
        while ($tmp965->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp965 = $tmp965->next;
        }
        $fn967 $tmp966 = $tmp965->methods[0];
        panda$collections$Iterator* $tmp968 = $tmp966(((panda$collections$Iterable*) cl962->methods));
        test$Iter964 = $tmp968;
        $l969:;
        ITable* $tmp971 = test$Iter964->$class->itable;
        while ($tmp971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp971 = $tmp971->next;
        }
        $fn973 $tmp972 = $tmp971->methods[0];
        panda$core$Bit $tmp974 = $tmp972(test$Iter964);
        panda$core$Bit $tmp975 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp974);
        if (!$tmp975.value) goto $l970;
        {
            ITable* $tmp977 = test$Iter964->$class->itable;
            while ($tmp977->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp977 = $tmp977->next;
            }
            $fn979 $tmp978 = $tmp977->methods[1];
            panda$core$Object* $tmp980 = $tmp978(test$Iter964);
            test976 = ((org$pandalanguage$pandac$MethodDecl*) $tmp980);
            panda$core$Bit $tmp981 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test976)->name, p_name);
            if ($tmp981.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test976);
                org$pandalanguage$pandac$Type* $tmp982 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test976);
                org$pandalanguage$pandac$Type* $tmp983 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp982);
                panda$core$Bit $tmp984 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp983, p_methodType);
                if ($tmp984.value) {
                {
                    return test976;
                }
                }
            }
            }
        }
        goto $l969;
        $l970:;
    }
    bool $tmp985 = p_checkInterfaces.value;
    if ($tmp985) goto $l986;
    panda$core$Bit $tmp987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl962->classKind, ((panda$core$Int64) { 5012 }));
    $tmp985 = $tmp987.value;
    $l986:;
    panda$core$Bit $tmp988 = { $tmp985 };
    if ($tmp988.value) {
    {
        {
            ITable* $tmp990 = ((panda$collections$Iterable*) cl962->rawInterfaces)->$class->itable;
            while ($tmp990->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp990 = $tmp990->next;
            }
            $fn992 $tmp991 = $tmp990->methods[0];
            panda$collections$Iterator* $tmp993 = $tmp991(((panda$collections$Iterable*) cl962->rawInterfaces));
            raw$Iter989 = $tmp993;
            $l994:;
            ITable* $tmp996 = raw$Iter989->$class->itable;
            while ($tmp996->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp996 = $tmp996->next;
            }
            $fn998 $tmp997 = $tmp996->methods[0];
            panda$core$Bit $tmp999 = $tmp997(raw$Iter989);
            panda$core$Bit $tmp1000 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp999);
            if (!$tmp1000.value) goto $l995;
            {
                ITable* $tmp1002 = raw$Iter989->$class->itable;
                while ($tmp1002->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1002 = $tmp1002->next;
                }
                $fn1004 $tmp1003 = $tmp1002->methods[1];
                panda$core$Object* $tmp1005 = $tmp1003(raw$Iter989);
                raw1001 = ((org$pandalanguage$pandac$Type*) $tmp1005);
                org$pandalanguage$pandac$Type* $tmp1007 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw1001);
                org$pandalanguage$pandac$MethodDecl* $tmp1008 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1007, p_name, p_methodType, p_checkInterfaces);
                result1006 = $tmp1008;
                if (((panda$core$Bit) { result1006 != NULL }).value) {
                {
                    return result1006;
                }
                }
            }
            goto $l994;
            $l995:;
        }
    }
    }
    if (((panda$core$Bit) { cl962->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1009 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl962->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1010 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1009, p_name, p_methodType, p_checkInterfaces);
        return $tmp1010;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1012;
    org$pandalanguage$pandac$Type* owner1014;
    panda$collections$Iterator* raw$Iter1016;
    org$pandalanguage$pandac$Type* raw1028;
    org$pandalanguage$pandac$MethodDecl* result1033;
    org$pandalanguage$pandac$MethodDecl* result1036;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    panda$core$Bit $tmp1011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1011.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1013 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1012 = $tmp1013;
    org$pandalanguage$pandac$Type* $tmp1015 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1014 = $tmp1015;
    {
        ITable* $tmp1017 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1017->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1017 = $tmp1017->next;
        }
        $fn1019 $tmp1018 = $tmp1017->methods[0];
        panda$collections$Iterator* $tmp1020 = $tmp1018(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1016 = $tmp1020;
        $l1021:;
        ITable* $tmp1023 = raw$Iter1016->$class->itable;
        while ($tmp1023->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1023 = $tmp1023->next;
        }
        $fn1025 $tmp1024 = $tmp1023->methods[0];
        panda$core$Bit $tmp1026 = $tmp1024(raw$Iter1016);
        panda$core$Bit $tmp1027 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1026);
        if (!$tmp1027.value) goto $l1022;
        {
            ITable* $tmp1029 = raw$Iter1016->$class->itable;
            while ($tmp1029->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1029 = $tmp1029->next;
            }
            $fn1031 $tmp1030 = $tmp1029->methods[1];
            panda$core$Object* $tmp1032 = $tmp1030(raw$Iter1016);
            raw1028 = ((org$pandalanguage$pandac$Type*) $tmp1032);
            org$pandalanguage$pandac$Type* $tmp1034 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1014, raw1028);
            org$pandalanguage$pandac$MethodDecl* $tmp1035 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1034, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1012, ((panda$core$Bit) { true }));
            result1033 = $tmp1035;
            if (((panda$core$Bit) { result1033 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1033;
                return result1033;
            }
            }
        }
        goto $l1021;
        $l1022:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1037 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1014, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1038 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1037, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1012, ((panda$core$Bit) { true }));
        result1036 = $tmp1038;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1036;
        return result1036;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1039;
    panda$collections$Array* result1041;
    panda$collections$Iterator* m$Iter1044;
    org$pandalanguage$pandac$MethodDecl* m1056;
    org$pandalanguage$pandac$MethodDecl* found1061;
    org$pandalanguage$pandac$ClassDecl* $tmp1040 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1039 = $tmp1040;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1039 != NULL }).value);
    panda$collections$Array* $tmp1042 = (panda$collections$Array*) malloc(40);
    $tmp1042->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1042->refCount.value = 1;
    panda$collections$Array$init($tmp1042);
    result1041 = $tmp1042;
    {
        ITable* $tmp1045 = ((panda$collections$Iterable*) intfClass1039->methods)->$class->itable;
        while ($tmp1045->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1045 = $tmp1045->next;
        }
        $fn1047 $tmp1046 = $tmp1045->methods[0];
        panda$collections$Iterator* $tmp1048 = $tmp1046(((panda$collections$Iterable*) intfClass1039->methods));
        m$Iter1044 = $tmp1048;
        $l1049:;
        ITable* $tmp1051 = m$Iter1044->$class->itable;
        while ($tmp1051->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1051 = $tmp1051->next;
        }
        $fn1053 $tmp1052 = $tmp1051->methods[0];
        panda$core$Bit $tmp1054 = $tmp1052(m$Iter1044);
        panda$core$Bit $tmp1055 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1054);
        if (!$tmp1055.value) goto $l1050;
        {
            ITable* $tmp1057 = m$Iter1044->$class->itable;
            while ($tmp1057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1057 = $tmp1057->next;
            }
            $fn1059 $tmp1058 = $tmp1057->methods[1];
            panda$core$Object* $tmp1060 = $tmp1058(m$Iter1044);
            m1056 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1060);
            org$pandalanguage$pandac$Type* $tmp1062 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1063 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1056);
            org$pandalanguage$pandac$Type* $tmp1064 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1063);
            org$pandalanguage$pandac$MethodDecl* $tmp1065 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1062, ((org$pandalanguage$pandac$Symbol*) m1056)->name, $tmp1064, ((panda$core$Bit) { false }));
            found1061 = $tmp1065;
            PANDA_ASSERT(((panda$core$Bit) { found1061 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1041, ((panda$core$Object*) found1061));
        }
        goto $l1049;
        $l1050:;
    }
    return ((panda$collections$ListView*) result1041);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1067;
    panda$collections$Iterator* rawIntf$Iter1070;
    org$pandalanguage$pandac$Type* rawIntf1082;
    org$pandalanguage$pandac$ClassDecl* intf1087;
    panda$core$Bit $tmp1066 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1066.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1068 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1067 = $tmp1068;
            if (((panda$core$Bit) { superCl1067 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1069 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1067);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1069));
            }
            }
        }
        }
        {
            ITable* $tmp1071 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1071->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1071 = $tmp1071->next;
            }
            $fn1073 $tmp1072 = $tmp1071->methods[0];
            panda$collections$Iterator* $tmp1074 = $tmp1072(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1070 = $tmp1074;
            $l1075:;
            ITable* $tmp1077 = rawIntf$Iter1070->$class->itable;
            while ($tmp1077->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1077 = $tmp1077->next;
            }
            $fn1079 $tmp1078 = $tmp1077->methods[0];
            panda$core$Bit $tmp1080 = $tmp1078(rawIntf$Iter1070);
            panda$core$Bit $tmp1081 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1080);
            if (!$tmp1081.value) goto $l1076;
            {
                ITable* $tmp1083 = rawIntf$Iter1070->$class->itable;
                while ($tmp1083->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1083 = $tmp1083->next;
                }
                $fn1085 $tmp1084 = $tmp1083->methods[1];
                panda$core$Object* $tmp1086 = $tmp1084(rawIntf$Iter1070);
                rawIntf1082 = ((org$pandalanguage$pandac$Type*) $tmp1086);
                org$pandalanguage$pandac$ClassDecl* $tmp1088 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1082);
                intf1087 = $tmp1088;
                if (((panda$core$Bit) { intf1087 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1089 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1087);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1089));
                }
                }
            }
            goto $l1075;
            $l1076:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1092;
    panda$collections$Iterator* derived$Iter1095;
    org$pandalanguage$pandac$MethodDecl* derived1107;
    panda$core$Bit found1117;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1118;
    org$pandalanguage$pandac$MethodDecl* base1133;
    panda$core$Int64 $tmp1090 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1090, ((panda$core$Int64) { 0 }));
    if ($tmp1091.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1093 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1092 = $tmp1093;
            if (((panda$core$Bit) { superCl1092 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1094 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1092);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1094));
        }
        }
        {
            ITable* $tmp1096 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1096->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1096 = $tmp1096->next;
            }
            $fn1098 $tmp1097 = $tmp1096->methods[0];
            panda$collections$Iterator* $tmp1099 = $tmp1097(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1095 = $tmp1099;
            $l1100:;
            ITable* $tmp1102 = derived$Iter1095->$class->itable;
            while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1102 = $tmp1102->next;
            }
            $fn1104 $tmp1103 = $tmp1102->methods[0];
            panda$core$Bit $tmp1105 = $tmp1103(derived$Iter1095);
            panda$core$Bit $tmp1106 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1105);
            if (!$tmp1106.value) goto $l1101;
            {
                ITable* $tmp1108 = derived$Iter1095->$class->itable;
                while ($tmp1108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1108 = $tmp1108->next;
                }
                $fn1110 $tmp1109 = $tmp1108->methods[1];
                panda$core$Object* $tmp1111 = $tmp1109(derived$Iter1095);
                derived1107 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1111);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1107);
                panda$core$Bit $tmp1113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1107->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1112 = $tmp1113.value;
                if ($tmp1112) goto $l1114;
                panda$core$Bit $tmp1115 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1107->annotations);
                $tmp1112 = $tmp1115.value;
                $l1114:;
                panda$core$Bit $tmp1116 = { $tmp1112 };
                if ($tmp1116.value) {
                {
                    goto $l1100;
                }
                }
                found1117 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1119 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1118, ((panda$core$Int64) { 0 }), $tmp1119, ((panda$core$Bit) { false }));
                int64_t $tmp1121 = $tmp1118.min.value;
                panda$core$Int64 i1120 = { $tmp1121 };
                int64_t $tmp1123 = $tmp1118.max.value;
                bool $tmp1124 = $tmp1118.inclusive.value;
                if ($tmp1124) goto $l1131; else goto $l1132;
                $l1131:;
                if ($tmp1121 <= $tmp1123) goto $l1125; else goto $l1127;
                $l1132:;
                if ($tmp1121 < $tmp1123) goto $l1125; else goto $l1127;
                $l1125:;
                {
                    panda$core$Object* $tmp1134 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1120);
                    base1133 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1134);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1133);
                    panda$core$Bit $tmp1135 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1107, base1133);
                    if ($tmp1135.value) {
                    {
                        found1117 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1120, ((panda$core$Object*) derived1107));
                        goto $l1127;
                    }
                    }
                }
                $l1128:;
                int64_t $tmp1137 = $tmp1123 - i1120.value;
                if ($tmp1124) goto $l1138; else goto $l1139;
                $l1138:;
                if ($tmp1137 >= 1) goto $l1136; else goto $l1127;
                $l1139:;
                if ($tmp1137 > 1) goto $l1136; else goto $l1127;
                $l1136:;
                i1120.value += 1;
                goto $l1125;
                $l1127:;
                panda$core$Bit $tmp1142 = panda$core$Bit$$NOT$R$panda$core$Bit(found1117);
                if ($tmp1142.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1107));
                }
                }
            }
            goto $l1100;
            $l1101:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1143;
    org$pandalanguage$pandac$Symbol* s1146;
    panda$collections$Iterator* m$Iter1152;
    org$pandalanguage$pandac$MethodDecl* m1164;
    panda$collections$Iterator* p$Iter1171;
    org$pandalanguage$pandac$SymbolTable* p1183;
    panda$collections$Array* children1188;
    panda$collections$Array* types1200;
    panda$collections$Iterator* m$Iter1203;
    org$pandalanguage$pandac$MethodRef* m1215;
    panda$collections$Array* $tmp1144 = (panda$collections$Array*) malloc(40);
    $tmp1144->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1144->refCount.value = 1;
    panda$collections$Array$init($tmp1144);
    methods1143 = $tmp1144;
    org$pandalanguage$pandac$Symbol* $tmp1147 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1146 = $tmp1147;
    PANDA_ASSERT(((panda$core$Bit) { s1146 != NULL }).value);
    panda$core$Bit $tmp1148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1146->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1148.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1146));
        org$pandalanguage$pandac$MethodRef* $tmp1149 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1149->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1149->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1149, ((org$pandalanguage$pandac$MethodDecl*) s1146), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1143, ((panda$core$Object*) $tmp1149));
    }
    }
    else {
    {
        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1146->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1151.value);
        {
            ITable* $tmp1153 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1146)->methods)->$class->itable;
            while ($tmp1153->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1153 = $tmp1153->next;
            }
            $fn1155 $tmp1154 = $tmp1153->methods[0];
            panda$collections$Iterator* $tmp1156 = $tmp1154(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1146)->methods));
            m$Iter1152 = $tmp1156;
            $l1157:;
            ITable* $tmp1159 = m$Iter1152->$class->itable;
            while ($tmp1159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1159 = $tmp1159->next;
            }
            $fn1161 $tmp1160 = $tmp1159->methods[0];
            panda$core$Bit $tmp1162 = $tmp1160(m$Iter1152);
            panda$core$Bit $tmp1163 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1162);
            if (!$tmp1163.value) goto $l1158;
            {
                ITable* $tmp1165 = m$Iter1152->$class->itable;
                while ($tmp1165->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1165 = $tmp1165->next;
                }
                $fn1167 $tmp1166 = $tmp1165->methods[1];
                panda$core$Object* $tmp1168 = $tmp1166(m$Iter1152);
                m1164 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1168);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1164);
                org$pandalanguage$pandac$MethodRef* $tmp1169 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1169->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1169->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1169, m1164, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1143, ((panda$core$Object*) $tmp1169));
            }
            goto $l1157;
            $l1158:;
        }
    }
    }
    {
        ITable* $tmp1172 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1172->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1172 = $tmp1172->next;
        }
        $fn1174 $tmp1173 = $tmp1172->methods[0];
        panda$collections$Iterator* $tmp1175 = $tmp1173(((panda$collections$Iterable*) p_st->parents));
        p$Iter1171 = $tmp1175;
        $l1176:;
        ITable* $tmp1178 = p$Iter1171->$class->itable;
        while ($tmp1178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1178 = $tmp1178->next;
        }
        $fn1180 $tmp1179 = $tmp1178->methods[0];
        panda$core$Bit $tmp1181 = $tmp1179(p$Iter1171);
        panda$core$Bit $tmp1182 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1181);
        if (!$tmp1182.value) goto $l1177;
        {
            ITable* $tmp1184 = p$Iter1171->$class->itable;
            while ($tmp1184->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1184 = $tmp1184->next;
            }
            $fn1186 $tmp1185 = $tmp1184->methods[1];
            panda$core$Object* $tmp1187 = $tmp1185(p$Iter1171);
            p1183 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1187);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1183, p_name, methods1143, p_types);
        }
        goto $l1176;
        $l1177:;
    }
    panda$collections$Array* $tmp1189 = (panda$collections$Array*) malloc(40);
    $tmp1189->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1189->refCount.value = 1;
    panda$collections$Array$init($tmp1189);
    children1188 = $tmp1189;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1188, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1191 = panda$collections$Array$get_count$R$panda$core$Int64(methods1143);
    panda$core$Bit $tmp1192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1191, ((panda$core$Int64) { 1 }));
    if ($tmp1192.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1193 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1193->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1193->refCount.value = 1;
        panda$core$Object* $tmp1195 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1143, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1196 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1195));
        panda$core$Object* $tmp1197 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1143, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1193, ((panda$core$Int64) { 1002 }), p_position, $tmp1196, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1197)), ((panda$collections$ListView*) children1188));
        return $tmp1193;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1198 = panda$collections$Array$get_count$R$panda$core$Int64(methods1143);
        panda$core$Bit $tmp1199 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1198, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1199.value);
        panda$collections$Array* $tmp1201 = (panda$collections$Array*) malloc(40);
        $tmp1201->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1201->refCount.value = 1;
        panda$collections$Array$init($tmp1201);
        types1200 = $tmp1201;
        {
            ITable* $tmp1204 = ((panda$collections$Iterable*) methods1143)->$class->itable;
            while ($tmp1204->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1204 = $tmp1204->next;
            }
            $fn1206 $tmp1205 = $tmp1204->methods[0];
            panda$collections$Iterator* $tmp1207 = $tmp1205(((panda$collections$Iterable*) methods1143));
            m$Iter1203 = $tmp1207;
            $l1208:;
            ITable* $tmp1210 = m$Iter1203->$class->itable;
            while ($tmp1210->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1210 = $tmp1210->next;
            }
            $fn1212 $tmp1211 = $tmp1210->methods[0];
            panda$core$Bit $tmp1213 = $tmp1211(m$Iter1203);
            panda$core$Bit $tmp1214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1213);
            if (!$tmp1214.value) goto $l1209;
            {
                ITable* $tmp1216 = m$Iter1203->$class->itable;
                while ($tmp1216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1216 = $tmp1216->next;
                }
                $fn1218 $tmp1217 = $tmp1216->methods[1];
                panda$core$Object* $tmp1219 = $tmp1217(m$Iter1203);
                m1215 = ((org$pandalanguage$pandac$MethodRef*) $tmp1219);
                org$pandalanguage$pandac$Type* $tmp1220 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1215);
                panda$collections$Array$add$panda$collections$Array$T(types1200, ((panda$core$Object*) $tmp1220));
            }
            goto $l1208;
            $l1209:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1221 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1221->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1221->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1223 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1223->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1223->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1223, ((panda$collections$ListView*) types1200));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1221, ((panda$core$Int64) { 1003 }), p_position, $tmp1223, ((panda$core$Object*) methods1143), ((panda$collections$ListView*) children1188));
        return $tmp1221;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1225;
    org$pandalanguage$pandac$FieldDecl* f1241;
    panda$collections$Array* children1244;
    org$pandalanguage$pandac$Type* effectiveType1249;
    org$pandalanguage$pandac$IRNode* result1254;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1226 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1225 = $tmp1226;
            if (((panda$core$Bit) { cl1225 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1227 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1225);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1225, $tmp1227);
                org$pandalanguage$pandac$IRNode* $tmp1228 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1228->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1228->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1230 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1231 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1225);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1228, ((panda$core$Int64) { 1001 }), p_position, $tmp1230, $tmp1231);
                return $tmp1228;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1232 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1232);
            org$pandalanguage$pandac$IRNode* $tmp1233 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1233->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1233->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1235 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1236 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1233, ((panda$core$Int64) { 1001 }), p_position, $tmp1235, $tmp1236);
            return $tmp1233;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1237 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1238 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1237);
            return $tmp1238;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1239 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1239->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1239->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1239, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1239;
        }
        break;
        case 202:
        {
            f1241 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1241);
            org$pandalanguage$pandac$Type* $tmp1242 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1243 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1241->type, $tmp1242);
            if ($tmp1243.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1245 = (panda$collections$Array*) malloc(40);
            $tmp1245->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1245->refCount.value = 1;
            panda$collections$Array$init($tmp1245);
            children1244 = $tmp1245;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1247.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1248);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1250 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1241->type);
                effectiveType1249 = $tmp1250;
                panda$core$Bit $tmp1251 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1241->annotations);
                if ($tmp1251.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1244, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1252 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1241->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1253 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1252);
                    panda$collections$Array$add$panda$collections$Array$T(children1244, ((panda$core$Object*) $tmp1253));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1255 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1255->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1255->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1255, ((panda$core$Int64) { 1026 }), p_position, f1241->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1244));
                result1254 = $tmp1255;
                panda$core$Bit $tmp1257 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1249, result1254->type);
                if ($tmp1257.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1258 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1254, p_position, ((panda$core$Bit) { false }), effectiveType1249);
                    result1254 = $tmp1258;
                }
                }
                return result1254;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1259 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1259->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1259->refCount.value = 1;
                panda$core$Object* $tmp1261 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1262 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1261));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1259, ((panda$core$Int64) { 1025 }), p_position, $tmp1262);
                panda$collections$Array$add$panda$collections$Array$T(children1244, ((panda$core$Object*) $tmp1259));
                org$pandalanguage$pandac$IRNode* $tmp1263 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1263->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1263->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1263, ((panda$core$Int64) { 1026 }), p_position, f1241->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1244));
                return $tmp1263;
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
    panda$collections$HashMap* typeMap1271;
    org$pandalanguage$pandac$Type* base1274;
    org$pandalanguage$pandac$ClassDecl* cl1276;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1278;
    switch (p_raw->typeKind.value) {
        case 10:
        case 12:
        case 13:
        case 19:
        {
            return p_raw;
        }
        break;
    }
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1265 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1265, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1266.value);
            panda$core$Object* $tmp1267 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1268 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1267), p_raw);
            return $tmp1268;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1269 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1270 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1269, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1270.value);
            panda$collections$HashMap* $tmp1272 = (panda$collections$HashMap*) malloc(56);
            $tmp1272->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1272->refCount.value = 1;
            panda$collections$HashMap$init($tmp1272);
            typeMap1271 = $tmp1272;
            panda$core$Object* $tmp1275 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1274 = ((org$pandalanguage$pandac$Type*) $tmp1275);
            org$pandalanguage$pandac$ClassDecl* $tmp1277 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1274)->name);
            cl1276 = $tmp1277;
            PANDA_ASSERT(((panda$core$Bit) { cl1276 != NULL }).value);
            panda$core$Int64 $tmp1279 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1278, ((panda$core$Int64) { 1 }), $tmp1279, ((panda$core$Bit) { false }));
            int64_t $tmp1281 = $tmp1278.min.value;
            panda$core$Int64 i1280 = { $tmp1281 };
            int64_t $tmp1283 = $tmp1278.max.value;
            bool $tmp1284 = $tmp1278.inclusive.value;
            if ($tmp1284) goto $l1291; else goto $l1292;
            $l1291:;
            if ($tmp1281 <= $tmp1283) goto $l1285; else goto $l1287;
            $l1292:;
            if ($tmp1281 < $tmp1283) goto $l1285; else goto $l1287;
            $l1285:;
            {
                panda$core$String* $tmp1294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1276)->name, &$s1293);
                panda$core$Int64 $tmp1295 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1280, ((panda$core$Int64) { 1 }));
                ITable* $tmp1296 = ((panda$collections$ListView*) cl1276->parameters)->$class->itable;
                while ($tmp1296->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1296 = $tmp1296->next;
                }
                $fn1298 $tmp1297 = $tmp1296->methods[0];
                panda$core$Object* $tmp1299 = $tmp1297(((panda$collections$ListView*) cl1276->parameters), $tmp1295);
                panda$core$String* $tmp1300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1294, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1299))->name);
                panda$core$Object* $tmp1301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1280);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1271, ((panda$collections$Key*) $tmp1300), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1301)));
            }
            $l1288:;
            int64_t $tmp1303 = $tmp1283 - i1280.value;
            if ($tmp1284) goto $l1304; else goto $l1305;
            $l1304:;
            if ($tmp1303 >= 1) goto $l1302; else goto $l1287;
            $l1305:;
            if ($tmp1303 > 1) goto $l1302; else goto $l1287;
            $l1302:;
            i1280.value += 1;
            goto $l1285;
            $l1287:;
            org$pandalanguage$pandac$Type* $tmp1308 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1271);
            return $tmp1308;
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
    org$pandalanguage$pandac$Type* $tmp1309 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1310 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1309);
    if ($tmp1310.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1311 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1311;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1312 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1313 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1312);
    if ($tmp1313.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1314 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1314;
    }
    }
    panda$core$Bit $tmp1315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1315.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1316 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1316;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* step1343;
    panda$collections$Array* args1370;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1371;
    org$pandalanguage$pandac$IRNode* c1373;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Int64 $tmp1317 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1317, ((panda$core$Int64) { 2 }));
            if ($tmp1318.value) {
            {
                panda$core$Object* $tmp1319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1319)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1320.value) {
                {
                    panda$core$Object* $tmp1321 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1321)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1322.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1323 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1324 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1323);
                        org$pandalanguage$pandac$Type* $tmp1325 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1324);
                        return $tmp1325;
                    }
                    }
                    panda$core$Object* $tmp1326 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp1327 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1326)->type);
                    org$pandalanguage$pandac$Type* $tmp1328 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1327);
                    org$pandalanguage$pandac$Type* $tmp1329 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1328);
                    return $tmp1329;
                }
                }
                panda$core$Object* $tmp1330 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1330)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1331.value) {
                {
                    panda$core$Object* $tmp1332 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp1333 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1332)->type);
                    org$pandalanguage$pandac$Type* $tmp1334 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1333);
                    org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1334);
                    return $tmp1335;
                }
                }
                panda$core$Object* $tmp1336 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1337 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1336)->type);
                panda$core$Object* $tmp1338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1339 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1338)->type);
                org$pandalanguage$pandac$Type* $tmp1340 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1337, $tmp1339);
                org$pandalanguage$pandac$Type* $tmp1341 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1340);
                org$pandalanguage$pandac$Type* $tmp1342 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1341);
                return $tmp1342;
            }
            }
            panda$core$Object* $tmp1344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1345 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1344)->type);
            step1343 = $tmp1345;
            panda$core$Object* $tmp1346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1346)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1347.value) {
            {
                panda$core$Object* $tmp1348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1348)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1349.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$Type* $tmp1351 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1350);
                    org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1351, step1343);
                    return $tmp1352;
                }
                }
                panda$core$Object* $tmp1353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1354 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1353)->type);
                org$pandalanguage$pandac$Type* $tmp1355 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1354);
                org$pandalanguage$pandac$Type* $tmp1356 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1355, step1343);
                return $tmp1356;
            }
            }
            panda$core$Object* $tmp1357 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1357)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1358.value) {
            {
                panda$core$Object* $tmp1359 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1360 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1359)->type);
                org$pandalanguage$pandac$Type* $tmp1361 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1360);
                org$pandalanguage$pandac$Type* $tmp1362 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1361, step1343);
                return $tmp1362;
            }
            }
            panda$core$Object* $tmp1363 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1364 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1363)->type);
            panda$core$Object* $tmp1365 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1366 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1365)->type);
            org$pandalanguage$pandac$Type* $tmp1367 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1364, $tmp1366);
            org$pandalanguage$pandac$Type* $tmp1368 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1367);
            org$pandalanguage$pandac$Type* $tmp1369 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1368, step1343);
            return $tmp1369;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1371, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1372 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1371);
            args1370 = $tmp1372;
            panda$core$Object* $tmp1374 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1376 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1374), &$s1375, ((panda$collections$ListView*) args1370));
            c1373 = $tmp1376;
            if (((panda$core$Bit) { c1373 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1377 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1377;
            }
            }
            return c1373->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1378 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1378;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1389;
    panda$core$Int64$nullable result1393;
    panda$core$Int64$nullable best1402;
    panda$collections$Iterator* t$Iter1403;
    org$pandalanguage$pandac$Type* t1415;
    panda$core$Int64$nullable cost1420;
    org$pandalanguage$pandac$ClassDecl* cl1434;
    panda$core$Int64$nullable cost1436;
    panda$collections$Iterator* intf$Iter1441;
    org$pandalanguage$pandac$Type* intf1453;
    panda$core$Int64$nullable cost1458;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1379 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1379.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1380 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1381 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1380);
    if ($tmp1381.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1382.value) {
    {
        panda$core$Bit $tmp1383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1383.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1384 = $tmp1385.value;
    if (!$tmp1384) goto $l1386;
    panda$core$Bit $tmp1387 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1384 = $tmp1387.value;
    $l1386:;
    panda$core$Bit $tmp1388 = { $tmp1384 };
    if ($tmp1388.value) {
    {
        panda$core$Object* $tmp1390 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1391 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1390), p_target);
        result1389 = $tmp1391;
        if (((panda$core$Bit) { !result1389.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1392 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1389.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1392, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1394 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1395 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1394));
            result1393 = $tmp1395;
            if (((panda$core$Bit) { !result1393.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1396 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1393.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1396, true });
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
            panda$core$Bit $tmp1397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1397.value) {
            {
                panda$core$Object* $tmp1398 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1399 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1398), p_target);
                return $tmp1399;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1400 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1401 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1400, p_target);
            return $tmp1401;
        }
        break;
        case 17:
        {
            best1402 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1404 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1404->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1404 = $tmp1404->next;
                }
                $fn1406 $tmp1405 = $tmp1404->methods[0];
                panda$collections$Iterator* $tmp1407 = $tmp1405(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1403 = $tmp1407;
                $l1408:;
                ITable* $tmp1410 = t$Iter1403->$class->itable;
                while ($tmp1410->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1410 = $tmp1410->next;
                }
                $fn1412 $tmp1411 = $tmp1410->methods[0];
                panda$core$Bit $tmp1413 = $tmp1411(t$Iter1403);
                panda$core$Bit $tmp1414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1413);
                if (!$tmp1414.value) goto $l1409;
                {
                    ITable* $tmp1416 = t$Iter1403->$class->itable;
                    while ($tmp1416->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1416 = $tmp1416->next;
                    }
                    $fn1418 $tmp1417 = $tmp1416->methods[1];
                    panda$core$Object* $tmp1419 = $tmp1417(t$Iter1403);
                    t1415 = ((org$pandalanguage$pandac$Type*) $tmp1419);
                    panda$core$Int64$nullable $tmp1421 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1415, p_target);
                    cost1420 = $tmp1421;
                    bool $tmp1422 = ((panda$core$Bit) { cost1420.nonnull }).value;
                    if (!$tmp1422) goto $l1423;
                    bool $tmp1424 = ((panda$core$Bit) { !best1402.nonnull }).value;
                    if ($tmp1424) goto $l1425;
                    panda$core$Bit $tmp1426 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1420.value), ((panda$core$Int64) best1402.value));
                    $tmp1424 = $tmp1426.value;
                    $l1425:;
                    panda$core$Bit $tmp1427 = { $tmp1424 };
                    $tmp1422 = $tmp1427.value;
                    $l1423:;
                    panda$core$Bit $tmp1428 = { $tmp1422 };
                    if ($tmp1428.value) {
                    {
                        best1402 = cost1420;
                    }
                    }
                }
                goto $l1408;
                $l1409:;
            }
            return best1402;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1429 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1429;
        }
        break;
    }
    panda$core$Bit $tmp1430 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1431 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1430);
    if ($tmp1431.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1432 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1432);
    if ($tmp1433.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1435 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1434 = $tmp1435;
    PANDA_ASSERT(((panda$core$Bit) { cl1434 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1434);
    if (((panda$core$Bit) { cl1434->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1437 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1434->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1438 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1437);
        panda$core$Int64$nullable $tmp1439 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1438, p_target);
        cost1436 = $tmp1439;
        if (((panda$core$Bit) { cost1436.nonnull }).value) {
        {
            panda$core$Int64 $tmp1440 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1436.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1440, true });
        }
        }
    }
    }
    {
        ITable* $tmp1442 = ((panda$collections$Iterable*) cl1434->rawInterfaces)->$class->itable;
        while ($tmp1442->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1442 = $tmp1442->next;
        }
        $fn1444 $tmp1443 = $tmp1442->methods[0];
        panda$collections$Iterator* $tmp1445 = $tmp1443(((panda$collections$Iterable*) cl1434->rawInterfaces));
        intf$Iter1441 = $tmp1445;
        $l1446:;
        ITable* $tmp1448 = intf$Iter1441->$class->itable;
        while ($tmp1448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1448 = $tmp1448->next;
        }
        $fn1450 $tmp1449 = $tmp1448->methods[0];
        panda$core$Bit $tmp1451 = $tmp1449(intf$Iter1441);
        panda$core$Bit $tmp1452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1451);
        if (!$tmp1452.value) goto $l1447;
        {
            ITable* $tmp1454 = intf$Iter1441->$class->itable;
            while ($tmp1454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1454 = $tmp1454->next;
            }
            $fn1456 $tmp1455 = $tmp1454->methods[1];
            panda$core$Object* $tmp1457 = $tmp1455(intf$Iter1441);
            intf1453 = ((org$pandalanguage$pandac$Type*) $tmp1457);
            org$pandalanguage$pandac$Type* $tmp1459 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1453);
            org$pandalanguage$pandac$Type* $tmp1460 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1459);
            panda$core$Int64$nullable $tmp1461 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1460, p_target);
            cost1458 = $tmp1461;
            if (((panda$core$Bit) { cost1458.nonnull }).value) {
            {
                panda$core$Int64 $tmp1462 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1458.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1462, true });
            }
            }
        }
        goto $l1446;
        $l1447:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1464 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1463 = $tmp1464.value;
    if (!$tmp1463) goto $l1465;
    panda$core$Bit $tmp1466 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1463 = $tmp1466.value;
    $l1465:;
    panda$core$Bit $tmp1467 = { $tmp1463 };
    if ($tmp1467.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1469 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1468 = $tmp1469.value;
    if (!$tmp1468) goto $l1470;
    panda$core$Bit $tmp1471 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1468 = $tmp1471.value;
    $l1470:;
    panda$core$Bit $tmp1472 = { $tmp1468 };
    if ($tmp1472.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1474 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1473 = $tmp1474.value;
    if (!$tmp1473) goto $l1475;
    panda$core$Bit $tmp1476 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1473 = $tmp1476.value;
    $l1475:;
    panda$core$Bit $tmp1477 = { $tmp1473 };
    if ($tmp1477.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1478 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1478.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1479 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1479.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1480 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1480.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1483;
    panda$core$Int64$nullable cost11556;
    panda$core$Int64$nullable cost21560;
    panda$core$Int64 cost1568;
    panda$core$Int64$nullable cost11582;
    panda$core$Int64$nullable cost21586;
    panda$core$Int64$nullable cost31591;
    panda$collections$Array* args1598;
    org$pandalanguage$pandac$ClassDecl* targetClass1608;
    panda$collections$Iterator* m$Iter1610;
    org$pandalanguage$pandac$MethodDecl* m1622;
    panda$core$Int64$nullable cost1631;
    panda$core$Bit $tmp1481 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1481.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1482.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1484 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1485 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1484));
            cost1483 = $tmp1485;
            if (((panda$core$Bit) { !cost1483.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1486.value) {
            {
                return cost1483;
            }
            }
            panda$core$Int64 $tmp1487 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1483.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1487, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1488 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1488;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1489.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1490 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1490.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1491 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1492 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1491, p_target);
                return $tmp1492;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1494 = $tmp1495.value;
            if (!$tmp1494) goto $l1496;
            panda$core$Int64 $tmp1497 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1498 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1497);
            panda$core$Int64 $tmp1499 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1500 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1498, $tmp1499);
            $tmp1494 = $tmp1500.value;
            $l1496:;
            panda$core$Bit $tmp1501 = { $tmp1494 };
            bool $tmp1493 = $tmp1501.value;
            if ($tmp1493) goto $l1502;
            panda$core$Bit $tmp1504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1503 = $tmp1504.value;
            if (!$tmp1503) goto $l1505;
            panda$core$Int64 $tmp1506 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1507 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1508 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1506, $tmp1507);
            $tmp1503 = $tmp1508.value;
            $l1505:;
            panda$core$Bit $tmp1509 = { $tmp1503 };
            $tmp1493 = $tmp1509.value;
            $l1502:;
            panda$core$Bit $tmp1510 = { $tmp1493 };
            if ($tmp1510.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1511 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1512 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1511);
            if ($tmp1512.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1513 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1514 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1513, p_target);
                return $tmp1514;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1516 = $tmp1517.value;
            if (!$tmp1516) goto $l1518;
            panda$core$Int64 $tmp1519 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1520 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1519);
            panda$core$Int64 $tmp1521 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1520);
            panda$core$Int64 $tmp1522 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1523 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1521, $tmp1522);
            $tmp1516 = $tmp1523.value;
            $l1518:;
            panda$core$Bit $tmp1524 = { $tmp1516 };
            bool $tmp1515 = $tmp1524.value;
            if ($tmp1515) goto $l1525;
            panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1526 = $tmp1527.value;
            if (!$tmp1526) goto $l1528;
            panda$core$Int64 $tmp1529 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1530 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1529);
            panda$core$Int64 $tmp1531 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1530);
            panda$core$Int64 $tmp1532 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1533 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1531, $tmp1532);
            $tmp1526 = $tmp1533.value;
            $l1528:;
            panda$core$Bit $tmp1534 = { $tmp1526 };
            $tmp1515 = $tmp1534.value;
            $l1525:;
            panda$core$Bit $tmp1535 = { $tmp1515 };
            if ($tmp1535.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1536 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1537 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1536);
            if ($tmp1537.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1538 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1539 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1538, p_target);
                return $tmp1539;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1540 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1540.value) {
            {
                panda$core$Int64 $tmp1541 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1542 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1541, ((panda$core$Int64) { 2 }));
                if ($tmp1542.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1544 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1544)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1543 = $tmp1545.value;
                if (!$tmp1543) goto $l1546;
                panda$core$Object* $tmp1547 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1547)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1543 = $tmp1548.value;
                $l1546:;
                panda$core$Bit $tmp1549 = { $tmp1543 };
                if ($tmp1549.value) {
                {
                    panda$core$Object* $tmp1550 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1550)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1551.value) {
                    {
                        panda$core$Object* $tmp1552 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1552)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1554 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1553));
                        if ($tmp1554.value) {
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
                panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1555.value);
                panda$core$Object* $tmp1557 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1558 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1559 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1557), ((org$pandalanguage$pandac$Type*) $tmp1558));
                cost11556 = $tmp1559;
                if (((panda$core$Bit) { !cost11556.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1562 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1563 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1561), ((org$pandalanguage$pandac$Type*) $tmp1562));
                cost21560 = $tmp1563;
                if (((panda$core$Bit) { !cost21560.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1564 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11556.value), ((panda$core$Int64) cost21560.value));
                return ((panda$core$Int64$nullable) { $tmp1564, true });
            }
            }
            panda$core$Bit $tmp1565 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1565.value) {
            {
                panda$core$Int64 $tmp1566 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1567 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1566, ((panda$core$Int64) { 3 }));
                if ($tmp1567.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1570 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1570)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1569 = $tmp1571.value;
                if (!$tmp1569) goto $l1572;
                panda$core$Object* $tmp1573 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1573)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1569 = $tmp1574.value;
                $l1572:;
                panda$core$Bit $tmp1575 = { $tmp1569 };
                if ($tmp1575.value) {
                {
                    panda$core$Object* $tmp1576 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1576)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1577.value) {
                    {
                        panda$core$Object* $tmp1578 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1579 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1578)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1580 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1579));
                        if ($tmp1580.value) {
                        {
                            cost1568 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1568 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1581.value);
                    panda$core$Object* $tmp1583 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1584 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1585 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1583), ((org$pandalanguage$pandac$Type*) $tmp1584));
                    cost11582 = $tmp1585;
                    if (((panda$core$Bit) { !cost11582.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1587 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1588 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1589 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1587), ((org$pandalanguage$pandac$Type*) $tmp1588));
                    cost21586 = $tmp1589;
                    if (((panda$core$Bit) { !cost21586.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1590 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11582.value), ((panda$core$Int64) cost21586.value));
                    cost1568 = $tmp1590;
                }
                }
                panda$core$Object* $tmp1592 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1593 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1594 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1592), ((org$pandalanguage$pandac$Type*) $tmp1593));
                cost31591 = $tmp1594;
                if (((panda$core$Bit) { !cost31591.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1595 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(cost1568, ((panda$core$Int64) cost31591.value));
                return ((panda$core$Int64$nullable) { $tmp1595, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1596 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1597 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1596, p_target);
            return $tmp1597;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1599 = (panda$collections$Array*) malloc(40);
            $tmp1599->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1599->refCount.value = 1;
            panda$collections$Array$init($tmp1599);
            args1598 = $tmp1599;
            panda$core$Object* $tmp1601 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1598, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1601)));
            panda$core$Object* $tmp1602 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1604 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1602), &$s1603, ((panda$collections$ListView*) args1598));
            panda$core$Int64$nullable $tmp1605 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1604, p_target);
            return $tmp1605;
        }
        break;
    }
    panda$core$Bit $tmp1606 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1607 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1606);
    if ($tmp1607.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1609 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1608 = $tmp1609;
    if (((panda$core$Bit) { targetClass1608 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1611 = ((panda$collections$Iterable*) targetClass1608->methods)->$class->itable;
        while ($tmp1611->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1611 = $tmp1611->next;
        }
        $fn1613 $tmp1612 = $tmp1611->methods[0];
        panda$collections$Iterator* $tmp1614 = $tmp1612(((panda$collections$Iterable*) targetClass1608->methods));
        m$Iter1610 = $tmp1614;
        $l1615:;
        ITable* $tmp1617 = m$Iter1610->$class->itable;
        while ($tmp1617->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1617 = $tmp1617->next;
        }
        $fn1619 $tmp1618 = $tmp1617->methods[0];
        panda$core$Bit $tmp1620 = $tmp1618(m$Iter1610);
        panda$core$Bit $tmp1621 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1620);
        if (!$tmp1621.value) goto $l1616;
        {
            ITable* $tmp1623 = m$Iter1610->$class->itable;
            while ($tmp1623->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1623 = $tmp1623->next;
            }
            $fn1625 $tmp1624 = $tmp1623->methods[1];
            panda$core$Object* $tmp1626 = $tmp1624(m$Iter1610);
            m1622 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1626);
            panda$core$Bit $tmp1627 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1622->annotations);
            if ($tmp1627.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1622);
                panda$core$Bit $tmp1628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1622->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1628.value);
                panda$core$Int64 $tmp1629 = panda$collections$Array$get_count$R$panda$core$Int64(m1622->parameters);
                panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1629, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1630.value);
                panda$core$Object* $tmp1632 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1622->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1633 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1632)->type);
                cost1631 = $tmp1633;
                if (((panda$core$Bit) { cost1631.nonnull }).value) {
                {
                    return cost1631;
                }
                }
            }
            }
        }
        goto $l1615;
        $l1616:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1634 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1634;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1643;
    org$pandalanguage$pandac$IRNode* intermediate1648;
    org$pandalanguage$pandac$IRNode* coerced1676;
    org$pandalanguage$pandac$IRNode* coerced1697;
    org$pandalanguage$pandac$IRNode* varType1711;
    org$pandalanguage$pandac$Type* param1726;
    org$pandalanguage$pandac$IRNode* start1728;
    org$pandalanguage$pandac$IRNode* end1731;
    panda$collections$Array* args1734;
    org$pandalanguage$pandac$IRNode* target1740;
    org$pandalanguage$pandac$Type* endPoint1756;
    org$pandalanguage$pandac$IRNode* start1758;
    org$pandalanguage$pandac$IRNode* end1761;
    org$pandalanguage$pandac$IRNode* step1764;
    panda$collections$Array* args1768;
    org$pandalanguage$pandac$IRNode* target1774;
    panda$collections$Array* args1782;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1783;
    panda$collections$Array* children1795;
    org$pandalanguage$pandac$IRNode* intermediate1801;
    org$pandalanguage$pandac$ClassDecl* cl1806;
    panda$collections$Iterator* m$Iter1808;
    org$pandalanguage$pandac$MethodDecl* m1820;
    org$pandalanguage$pandac$IRNode* type1831;
    panda$collections$Array* args1836;
    panda$collections$Array* children1840;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1635 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1635.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1636 = $tmp1637.value;
    if (!$tmp1636) goto $l1638;
    panda$core$Bit $tmp1639 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1636 = $tmp1639.value;
    $l1638:;
    panda$core$Bit $tmp1640 = { $tmp1636 };
    if ($tmp1640.value) {
    {
        panda$core$Object* $tmp1641 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1642 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1641), p_target);
        if ($tmp1642.value) {
        {
            panda$collections$Array* $tmp1644 = (panda$collections$Array*) malloc(40);
            $tmp1644->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1644->refCount.value = 1;
            panda$collections$Array$init($tmp1644);
            children1643 = $tmp1644;
            panda$collections$Array$add$panda$collections$Array$T(children1643, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1646 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1646->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1646->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1646, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1643));
            return $tmp1646;
        }
        }
        panda$core$Object* $tmp1649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1650 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1649));
        intermediate1648 = $tmp1650;
        org$pandalanguage$pandac$IRNode* $tmp1651 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1648, p_target);
        return $tmp1651;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1652 = $tmp1653.value;
            if (!$tmp1652) goto $l1654;
            panda$core$Int64 $tmp1655 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1656 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1657 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1655, $tmp1656);
            $tmp1652 = $tmp1657.value;
            $l1654:;
            panda$core$Bit $tmp1658 = { $tmp1652 };
            if ($tmp1658.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1659 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1659->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1659->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1659, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1659;
            }
            }
            else {
            panda$core$Bit $tmp1662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1661 = $tmp1662.value;
            if (!$tmp1661) goto $l1663;
            panda$core$Int64 $tmp1664 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1665 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1666 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1664, $tmp1665);
            $tmp1661 = $tmp1666.value;
            $l1663:;
            panda$core$Bit $tmp1667 = { $tmp1661 };
            if ($tmp1667.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1668 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1668->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1668->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1668, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1668;
            }
            }
            }
            panda$core$Bit $tmp1671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1670 = $tmp1671.value;
            if (!$tmp1670) goto $l1672;
            panda$core$Bit $tmp1673 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1674 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1673);
            $tmp1670 = $tmp1674.value;
            $l1672:;
            panda$core$Bit $tmp1675 = { $tmp1670 };
            if ($tmp1675.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1677 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1678 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1677);
                coerced1676 = $tmp1678;
                if (((panda$core$Bit) { coerced1676 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1679 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1676, p_target);
                return $tmp1679;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1680 = $tmp1681.value;
            if (!$tmp1680) goto $l1682;
            panda$core$Int64 $tmp1683 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1684 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1683);
            panda$core$Int64 $tmp1685 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1684);
            panda$core$Int64 $tmp1686 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1687 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1685, $tmp1686);
            $tmp1680 = $tmp1687.value;
            $l1682:;
            panda$core$Bit $tmp1688 = { $tmp1680 };
            if ($tmp1688.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1689 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1689->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1689->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1689, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1689;
            }
            }
            panda$core$Bit $tmp1692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1691 = $tmp1692.value;
            if (!$tmp1691) goto $l1693;
            panda$core$Bit $tmp1694 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1695 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1694);
            $tmp1691 = $tmp1695.value;
            $l1693:;
            panda$core$Bit $tmp1696 = { $tmp1691 };
            if ($tmp1696.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1698 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1699 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1698);
                coerced1697 = $tmp1699;
                if (((panda$core$Bit) { coerced1697 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1700 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1697, p_target);
                return $tmp1700;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1701 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1702 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1701);
            if ($tmp1702.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1703 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1703->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1703->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1703, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1703;
            }
            }
            panda$core$Bit $tmp1706 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1705 = $tmp1706.value;
            if (!$tmp1705) goto $l1707;
            org$pandalanguage$pandac$Type* $tmp1708 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1709 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1708);
            $tmp1705 = $tmp1709.value;
            $l1707:;
            panda$core$Bit $tmp1710 = { $tmp1705 };
            if ($tmp1710.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1712 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1713 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1712);
                varType1711 = $tmp1713;
                if (((panda$core$Bit) { varType1711 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1714 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1711, p_target);
                    return $tmp1714;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1715 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1715.value) {
            {
                panda$core$Int64 $tmp1716 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1717 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1716, ((panda$core$Int64) { 2 }));
                if ($tmp1717.value) {
                {
                    panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1718, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, &$s1720);
                    panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1721, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1722, &$s1723);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1724);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1725.value);
                panda$core$Object* $tmp1727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1726 = ((org$pandalanguage$pandac$Type*) $tmp1727);
                panda$core$Object* $tmp1729 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1730 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1729), param1726);
                start1728 = $tmp1730;
                if (((panda$core$Bit) { start1728 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1732 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1733 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1732), param1726);
                end1731 = $tmp1733;
                if (((panda$core$Bit) { end1731 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1735 = (panda$collections$Array*) malloc(40);
                $tmp1735->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1735->refCount.value = 1;
                panda$collections$Array$init($tmp1735);
                args1734 = $tmp1735;
                panda$collections$Array$add$panda$collections$Array$T(args1734, ((panda$core$Object*) start1728));
                panda$collections$Array$add$panda$collections$Array$T(args1734, ((panda$core$Object*) end1731));
                org$pandalanguage$pandac$IRNode* $tmp1737 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1737->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1737->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1739 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1737, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1739, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1734, ((panda$core$Object*) $tmp1737));
                org$pandalanguage$pandac$IRNode* $tmp1741 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1741->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1741->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1743 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1741, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1743, p_target);
                target1740 = $tmp1741;
                org$pandalanguage$pandac$IRNode* $tmp1744 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1740, ((panda$collections$ListView*) args1734));
                return $tmp1744;
            }
            }
            else {
            panda$core$Bit $tmp1745 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1745.value) {
            {
                panda$core$Int64 $tmp1746 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1747 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1746, ((panda$core$Int64) { 3 }));
                if ($tmp1747.value) {
                {
                    panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1748, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1749, &$s1750);
                    panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1751, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1752, &$s1753);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1754);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1755.value);
                panda$core$Object* $tmp1757 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1756 = ((org$pandalanguage$pandac$Type*) $tmp1757);
                panda$core$Object* $tmp1759 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1760 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1759), endPoint1756);
                start1758 = $tmp1760;
                if (((panda$core$Bit) { start1758 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1762 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1763 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1762), endPoint1756);
                end1761 = $tmp1763;
                panda$core$Object* $tmp1765 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1766 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1767 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1765), ((org$pandalanguage$pandac$Type*) $tmp1766));
                step1764 = $tmp1767;
                panda$collections$Array* $tmp1769 = (panda$collections$Array*) malloc(40);
                $tmp1769->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1769->refCount.value = 1;
                panda$collections$Array$init($tmp1769);
                args1768 = $tmp1769;
                panda$collections$Array$add$panda$collections$Array$T(args1768, ((panda$core$Object*) start1758));
                panda$collections$Array$add$panda$collections$Array$T(args1768, ((panda$core$Object*) end1761));
                panda$collections$Array$add$panda$collections$Array$T(args1768, ((panda$core$Object*) step1764));
                org$pandalanguage$pandac$IRNode* $tmp1771 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1771->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1771->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1773 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1771, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1773, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1768, ((panda$core$Object*) $tmp1771));
                org$pandalanguage$pandac$IRNode* $tmp1775 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1775->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1775->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1777 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1775, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1777, p_target);
                target1774 = $tmp1775;
                org$pandalanguage$pandac$IRNode* $tmp1778 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1774, ((panda$collections$ListView*) args1768));
                return $tmp1778;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1779 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1780 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1779, p_target);
                return $tmp1780;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp1781 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp1781;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1783, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1784 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1783);
            args1782 = $tmp1784;
            panda$core$Object* $tmp1785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1787 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1785), &$s1786, ((panda$collections$ListView*) args1782), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1788 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1787, p_target);
            return $tmp1788;
        }
        break;
    }
    panda$core$Bit $tmp1789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1789.value) {
    {
        panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1790.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1791 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1791->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1791->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1791, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1791;
        }
        }
        panda$core$Object* $tmp1793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1794 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1793));
        if ($tmp1794.value) {
        {
            panda$collections$Array* $tmp1796 = (panda$collections$Array*) malloc(40);
            $tmp1796->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1796->refCount.value = 1;
            panda$collections$Array$init($tmp1796);
            children1795 = $tmp1796;
            panda$collections$Array$add$panda$collections$Array$T(children1795, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1798 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1798->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1798->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1798, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1795));
            return $tmp1798;
        }
        }
        panda$core$Bit $tmp1800 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1800.value) {
        {
            panda$core$Object* $tmp1802 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1803 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1802));
            intermediate1801 = $tmp1803;
            org$pandalanguage$pandac$IRNode* $tmp1804 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1801, p_target);
            return $tmp1804;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1805 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1805.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1807 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1806 = $tmp1807;
        if (((panda$core$Bit) { cl1806 != NULL }).value) {
        {
            {
                ITable* $tmp1809 = ((panda$collections$Iterable*) cl1806->methods)->$class->itable;
                while ($tmp1809->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1809 = $tmp1809->next;
                }
                $fn1811 $tmp1810 = $tmp1809->methods[0];
                panda$collections$Iterator* $tmp1812 = $tmp1810(((panda$collections$Iterable*) cl1806->methods));
                m$Iter1808 = $tmp1812;
                $l1813:;
                ITable* $tmp1815 = m$Iter1808->$class->itable;
                while ($tmp1815->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1815 = $tmp1815->next;
                }
                $fn1817 $tmp1816 = $tmp1815->methods[0];
                panda$core$Bit $tmp1818 = $tmp1816(m$Iter1808);
                panda$core$Bit $tmp1819 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1818);
                if (!$tmp1819.value) goto $l1814;
                {
                    ITable* $tmp1821 = m$Iter1808->$class->itable;
                    while ($tmp1821->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1821 = $tmp1821->next;
                    }
                    $fn1823 $tmp1822 = $tmp1821->methods[1];
                    panda$core$Object* $tmp1824 = $tmp1822(m$Iter1808);
                    m1820 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1824);
                    panda$core$Bit $tmp1825 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1820->annotations);
                    if ($tmp1825.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1820);
                        panda$core$Bit $tmp1826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1820->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1826.value);
                        panda$core$Int64 $tmp1827 = panda$collections$Array$get_count$R$panda$core$Int64(m1820->parameters);
                        panda$core$Bit $tmp1828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1827, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1828.value);
                        panda$core$Object* $tmp1829 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1820->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1830 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1829)->type);
                        if (((panda$core$Bit) { $tmp1830.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1832 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1832->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1832->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1834 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1835 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1806);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1832, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1834, $tmp1835);
                            type1831 = $tmp1832;
                            panda$collections$Array* $tmp1837 = (panda$collections$Array*) malloc(40);
                            $tmp1837->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1837->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1837, ((panda$core$Int64) { 1 }));
                            args1836 = $tmp1837;
                            panda$collections$Array$add$panda$collections$Array$T(args1836, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1839 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1831, ((panda$collections$ListView*) args1836));
                            return $tmp1839;
                        }
                        }
                    }
                    }
                }
                goto $l1813;
                $l1814:;
            }
        }
        }
        panda$collections$Array* $tmp1841 = (panda$collections$Array*) malloc(40);
        $tmp1841->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1841->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1841, ((panda$core$Int64) { 1 }));
        children1840 = $tmp1841;
        panda$collections$Array$add$panda$collections$Array$T(children1840, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1843 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1843->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1843->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1843, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1840));
        return $tmp1843;
    }
    }
    panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1845, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1846, &$s1847);
    panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1848, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, &$s1850);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1851);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1852;
    org$pandalanguage$pandac$IRNode* $tmp1853 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1852 = $tmp1853;
    bool $tmp1854 = ((panda$core$Bit) { result1852 == NULL }).value;
    if ($tmp1854) goto $l1855;
    panda$core$Bit $tmp1856 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1852->type, p_target);
    $tmp1854 = $tmp1856.value;
    $l1855:;
    panda$core$Bit $tmp1857 = { $tmp1854 };
    PANDA_ASSERT($tmp1857.value);
    return result1852;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1859 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1858 = $tmp1859.value;
    if (!$tmp1858) goto $l1860;
    panda$core$Bit $tmp1861 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1858 = $tmp1861.value;
    $l1860:;
    panda$core$Bit $tmp1862 = { $tmp1858 };
    if ($tmp1862.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1863 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1863.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1865 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1864 = $tmp1865.value;
    if (!$tmp1864) goto $l1866;
    panda$core$Bit $tmp1867 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1864 = $tmp1867.value;
    $l1866:;
    panda$core$Bit $tmp1868 = { $tmp1864 };
    if ($tmp1868.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1869.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1870 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1870.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1872;
    org$pandalanguage$pandac$IRNode* resolved1879;
    panda$core$Int64$nullable $tmp1871 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1871.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1873 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1872 = $tmp1873;
    panda$core$Bit $tmp1875 = panda$core$Bit$$NOT$R$panda$core$Bit(result1872);
    bool $tmp1874 = $tmp1875.value;
    if (!$tmp1874) goto $l1876;
    panda$core$Bit $tmp1877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1874 = $tmp1877.value;
    $l1876:;
    panda$core$Bit $tmp1878 = { $tmp1874 };
    if ($tmp1878.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1880 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1879 = $tmp1880;
        if (((panda$core$Bit) { resolved1879 != NULL }).value) {
        {
            panda$core$Bit $tmp1881 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1879, p_target);
            result1872 = $tmp1881;
        }
        }
    }
    }
    return result1872;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1902;
    panda$collections$Array* children1905;
    panda$core$Bit $tmp1882 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1882.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1883 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1884 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1883);
    PANDA_ASSERT($tmp1884.value);
    bool $tmp1885 = p_isExplicit.value;
    if (!$tmp1885) goto $l1886;
    panda$core$Bit $tmp1887 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1888 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1887);
    $tmp1885 = $tmp1888.value;
    $l1886:;
    panda$core$Bit $tmp1889 = { $tmp1885 };
    if ($tmp1889.value) {
    {
        panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1890, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, &$s1892);
        panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1894, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, &$s1896);
        panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, $tmp1897);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1898);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1899 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1899;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1900 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1900.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1901 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1901;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1903 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1902 = $tmp1903;
            if (((panda$core$Bit) { resolved1902 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1904 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1902, p_position, p_isExplicit, p_target);
                return $tmp1904;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1906 = (panda$collections$Array*) malloc(40);
    $tmp1906->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1906->refCount.value = 1;
    panda$collections$Array$init($tmp1906);
    children1905 = $tmp1906;
    panda$collections$Array$add$panda$collections$Array$T(children1905, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1908 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1908->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1908->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1908, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1905));
    return $tmp1908;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1916;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1917;
    panda$core$Int64$nullable cost1932;
    panda$core$Int64$nullable cost1946;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1910 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1911 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1911->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1911 = $tmp1911->next;
    }
    $fn1913 $tmp1912 = $tmp1911->methods[0];
    panda$core$Int64 $tmp1914 = $tmp1912(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1915 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1910, $tmp1914);
    if ($tmp1915.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1916 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1918 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1917, ((panda$core$Int64) { 0 }), $tmp1918, ((panda$core$Bit) { false }));
    int64_t $tmp1920 = $tmp1917.min.value;
    panda$core$Int64 i1919 = { $tmp1920 };
    int64_t $tmp1922 = $tmp1917.max.value;
    bool $tmp1923 = $tmp1917.inclusive.value;
    if ($tmp1923) goto $l1930; else goto $l1931;
    $l1930:;
    if ($tmp1920 <= $tmp1922) goto $l1924; else goto $l1926;
    $l1931:;
    if ($tmp1920 < $tmp1922) goto $l1924; else goto $l1926;
    $l1924:;
    {
        ITable* $tmp1933 = p_args->$class->itable;
        while ($tmp1933->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1933 = $tmp1933->next;
        }
        $fn1935 $tmp1934 = $tmp1933->methods[0];
        panda$core$Object* $tmp1936 = $tmp1934(p_args, i1919);
        org$pandalanguage$pandac$Type* $tmp1937 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1919);
        panda$core$Int64$nullable $tmp1938 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1936), $tmp1937);
        cost1932 = $tmp1938;
        if (((panda$core$Bit) { !cost1932.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1939 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1916, ((panda$core$Int64) cost1932.value));
        result1916 = $tmp1939;
    }
    $l1927:;
    int64_t $tmp1941 = $tmp1922 - i1919.value;
    if ($tmp1923) goto $l1942; else goto $l1943;
    $l1942:;
    if ($tmp1941 >= 1) goto $l1940; else goto $l1926;
    $l1943:;
    if ($tmp1941 > 1) goto $l1940; else goto $l1926;
    $l1940:;
    i1919.value += 1;
    goto $l1924;
    $l1926:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1947 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1948 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1947, p_expectedReturn);
        cost1946 = $tmp1948;
        if (((panda$core$Bit) { !cost1946.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1949 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1916, ((panda$core$Int64) cost1946.value));
        result1916 = $tmp1949;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1952 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1953 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1952);
    bool $tmp1951 = $tmp1953.value;
    if (!$tmp1951) goto $l1954;
    ITable* $tmp1955 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1955->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1955 = $tmp1955->next;
    }
    $fn1957 $tmp1956 = $tmp1955->methods[0];
    panda$core$Int64 $tmp1958 = $tmp1956(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1958, ((panda$core$Int64) { 1 }));
    $tmp1951 = $tmp1959.value;
    $l1954:;
    panda$core$Bit $tmp1960 = { $tmp1951 };
    bool $tmp1950 = $tmp1960.value;
    if (!$tmp1950) goto $l1961;
    panda$core$Object* $tmp1962 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1963 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1964 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1962)->type, $tmp1963);
    $tmp1950 = $tmp1964.value;
    $l1961:;
    panda$core$Bit $tmp1965 = { $tmp1950 };
    if ($tmp1965.value) {
    {
        panda$core$Int64 $tmp1966 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1916, ((panda$core$Int64) { 1 }));
        result1916 = $tmp1966;
    }
    }
    return ((panda$core$Int64$nullable) { result1916, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1967;
    panda$core$Int64$nullable best1970;
    panda$collections$Iterator* m$Iter1971;
    org$pandalanguage$pandac$MethodRef* m1983;
    panda$core$Int64$nullable cost1988;
    panda$collections$Array* $tmp1968 = (panda$collections$Array*) malloc(40);
    $tmp1968->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1968->refCount.value = 1;
    panda$collections$Array$init($tmp1968);
    result1967 = $tmp1968;
    best1970 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1972 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1972->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1972 = $tmp1972->next;
        }
        $fn1974 $tmp1973 = $tmp1972->methods[0];
        panda$collections$Iterator* $tmp1975 = $tmp1973(((panda$collections$Iterable*) p_methods));
        m$Iter1971 = $tmp1975;
        $l1976:;
        ITable* $tmp1978 = m$Iter1971->$class->itable;
        while ($tmp1978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1978 = $tmp1978->next;
        }
        $fn1980 $tmp1979 = $tmp1978->methods[0];
        panda$core$Bit $tmp1981 = $tmp1979(m$Iter1971);
        panda$core$Bit $tmp1982 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1981);
        if (!$tmp1982.value) goto $l1977;
        {
            ITable* $tmp1984 = m$Iter1971->$class->itable;
            while ($tmp1984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1984 = $tmp1984->next;
            }
            $fn1986 $tmp1985 = $tmp1984->methods[1];
            panda$core$Object* $tmp1987 = $tmp1985(m$Iter1971);
            m1983 = ((org$pandalanguage$pandac$MethodRef*) $tmp1987);
            panda$core$Int64$nullable $tmp1989 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1983, p_args, p_expectedReturn);
            cost1988 = $tmp1989;
            if (((panda$core$Bit) { !cost1988.nonnull }).value) {
            {
                goto $l1976;
            }
            }
            bool $tmp1990 = ((panda$core$Bit) { !best1970.nonnull }).value;
            if ($tmp1990) goto $l1991;
            panda$core$Bit $tmp1992 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1988.value), ((panda$core$Int64) best1970.value));
            $tmp1990 = $tmp1992.value;
            $l1991:;
            panda$core$Bit $tmp1993 = { $tmp1990 };
            if ($tmp1993.value) {
            {
                panda$collections$Array$clear(result1967);
                best1970 = cost1988;
            }
            }
            panda$core$Bit $tmp1994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1988.value), ((panda$core$Int64) best1970.value));
            if ($tmp1994.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1967, ((panda$core$Object*) m1983));
            }
            }
        }
        goto $l1976;
        $l1977:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1967));
    return best1970;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s2001;
    panda$collections$Array* finalArgs2026;
    org$pandalanguage$pandac$IRNode* selfNode2062;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2091;
    org$pandalanguage$pandac$IRNode* coerced2109;
    org$pandalanguage$pandac$IRNode* result2124;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1995 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1996 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1996->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1996 = $tmp1996->next;
    }
    $fn1998 $tmp1997 = $tmp1996->methods[0];
    panda$core$Int64 $tmp1999 = $tmp1997(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2000 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1995, $tmp1999);
    if ($tmp2000.value) {
    {
        panda$core$Int64 $tmp2002 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2002, ((panda$core$Int64) { 1 }));
        if ($tmp2003.value) {
        {
            s2001 = &$s2004;
        }
        }
        else {
        {
            s2001 = &$s2005;
        }
        }
        panda$core$String* $tmp2006 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2007 = panda$core$String$convert$R$panda$core$String($tmp2006);
        panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, &$s2008);
        panda$core$Int64 $tmp2010 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2009, ((panda$core$Object*) wrap_panda$core$Int64($tmp2010)));
        panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, &$s2012);
        panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, s2001);
        panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, &$s2015);
        ITable* $tmp2018 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2018->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2018 = $tmp2018->next;
        }
        $fn2020 $tmp2019 = $tmp2018->methods[0];
        panda$core$Int64 $tmp2021 = $tmp2019(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2017, ((panda$core$Object*) wrap_panda$core$Int64($tmp2021)));
        panda$core$String* $tmp2024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2022, &$s2023);
        panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, $tmp2024);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2025);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2027 = (panda$collections$Array*) malloc(40);
    $tmp2027->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2027->refCount.value = 1;
    panda$collections$Array$init($tmp2027);
    finalArgs2026 = $tmp2027;
    bool $tmp2030 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2030) goto $l2031;
    panda$core$Bit $tmp2032 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2030 = $tmp2032.value;
    $l2031:;
    panda$core$Bit $tmp2033 = { $tmp2030 };
    bool $tmp2029 = $tmp2033.value;
    if (!$tmp2029) goto $l2034;
    panda$core$Bit $tmp2035 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2035);
    $tmp2029 = $tmp2036.value;
    $l2034:;
    panda$core$Bit $tmp2037 = { $tmp2029 };
    if ($tmp2037.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2038 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2039 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2038);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2026, ((panda$core$Object*) $tmp2039));
    }
    }
    panda$core$Bit $tmp2040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2040.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2041 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2041)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2042.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2043 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2043->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2043->refCount.value = 1;
                panda$core$Object* $tmp2045 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2046 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2045));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2043, ((panda$core$Int64) { 1025 }), p_position, $tmp2046);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2026, ((panda$core$Object*) $tmp2043));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2047);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2050 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2049 = $tmp2050.value;
        if (!$tmp2049) goto $l2051;
        panda$core$Bit $tmp2052 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2049 = $tmp2052.value;
        $l2051:;
        panda$core$Bit $tmp2053 = { $tmp2049 };
        bool $tmp2048 = $tmp2053.value;
        if (!$tmp2048) goto $l2054;
        panda$core$Bit $tmp2055 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2048 = $tmp2055.value;
        $l2054:;
        panda$core$Bit $tmp2056 = { $tmp2048 };
        if ($tmp2056.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2057);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2059 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2058 = $tmp2059.value;
    if (!$tmp2058) goto $l2060;
    $tmp2058 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2060:;
    panda$core$Bit $tmp2061 = { $tmp2058 };
    if ($tmp2061.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2063 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2063->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2063->refCount.value = 1;
        panda$core$Object* $tmp2065 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2066 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2065));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2063, ((panda$core$Int64) { 1025 }), p_position, $tmp2066);
        selfNode2062 = $tmp2063;
        org$pandalanguage$pandac$Type* $tmp2067 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2068 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2062, $tmp2067);
        selfNode2062 = $tmp2068;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2062 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2026, ((panda$core$Object*) selfNode2062));
        panda$core$Object* $tmp2069 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2070 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2069));
        panda$core$Bit $tmp2071 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2070);
        if ($tmp2071.value) {
        {
            panda$core$String* $tmp2073 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2072, $tmp2073);
            panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, &$s2075);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2076);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2079 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2080 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2079);
    bool $tmp2078 = $tmp2080.value;
    if (!$tmp2078) goto $l2081;
    $tmp2078 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2081:;
    panda$core$Bit $tmp2082 = { $tmp2078 };
    bool $tmp2077 = $tmp2082.value;
    if (!$tmp2077) goto $l2083;
    panda$core$Bit $tmp2084 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2077 = $tmp2084.value;
    $l2083:;
    panda$core$Bit $tmp2085 = { $tmp2077 };
    if ($tmp2085.value) {
    {
        panda$core$String* $tmp2087 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2086, $tmp2087);
        panda$core$String* $tmp2090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2088, &$s2089);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2090);
    }
    }
    }
    }
    ITable* $tmp2092 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2092->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2092 = $tmp2092->next;
    }
    $fn2094 $tmp2093 = $tmp2092->methods[0];
    panda$core$Int64 $tmp2095 = $tmp2093(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2091, ((panda$core$Int64) { 0 }), $tmp2095, ((panda$core$Bit) { false }));
    int64_t $tmp2097 = $tmp2091.min.value;
    panda$core$Int64 i2096 = { $tmp2097 };
    int64_t $tmp2099 = $tmp2091.max.value;
    bool $tmp2100 = $tmp2091.inclusive.value;
    if ($tmp2100) goto $l2107; else goto $l2108;
    $l2107:;
    if ($tmp2097 <= $tmp2099) goto $l2101; else goto $l2103;
    $l2108:;
    if ($tmp2097 < $tmp2099) goto $l2101; else goto $l2103;
    $l2101:;
    {
        ITable* $tmp2110 = p_args->$class->itable;
        while ($tmp2110->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2110 = $tmp2110->next;
        }
        $fn2112 $tmp2111 = $tmp2110->methods[0];
        panda$core$Object* $tmp2113 = $tmp2111(p_args, i2096);
        org$pandalanguage$pandac$Type* $tmp2114 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2096);
        org$pandalanguage$pandac$IRNode* $tmp2115 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2113), $tmp2114);
        coerced2109 = $tmp2115;
        if (((panda$core$Bit) { coerced2109 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2116 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2096);
        org$pandalanguage$pandac$IRNode* $tmp2117 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2109, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2116)->type);
        coerced2109 = $tmp2117;
        if (((panda$core$Bit) { coerced2109 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2026, ((panda$core$Object*) coerced2109));
    }
    $l2104:;
    int64_t $tmp2119 = $tmp2099 - i2096.value;
    if ($tmp2100) goto $l2120; else goto $l2121;
    $l2120:;
    if ($tmp2119 >= 1) goto $l2118; else goto $l2103;
    $l2121:;
    if ($tmp2119 > 1) goto $l2118; else goto $l2103;
    $l2118:;
    i2096.value += 1;
    goto $l2101;
    $l2103:;
    panda$core$Bit $tmp2126 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2125);
    if ($tmp2126.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2127 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2127->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2127->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2129 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2127, ((panda$core$Int64) { 1005 }), p_position, $tmp2129, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2026));
        result2124 = $tmp2127;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2130 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2130->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2130->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2130, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2026));
        result2124 = $tmp2130;
        org$pandalanguage$pandac$Type* $tmp2132 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2133 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2124, p_position, ((panda$core$Bit) { false }), $tmp2132);
        result2124 = $tmp2133;
    }
    }
    return result2124;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2134 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2134;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2135;
    org$pandalanguage$pandac$ClassDecl* cl2137;
    org$pandalanguage$pandac$Symbol* s2141;
    org$pandalanguage$pandac$IRNode* ref2163;
    org$pandalanguage$pandac$IRNode* $tmp2136 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2135 = $tmp2136;
    if (((panda$core$Bit) { resolved2135 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2135->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2138.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2139 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2135->payload));
        cl2137 = $tmp2139;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2140 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2135->type);
        cl2137 = $tmp2140;
    }
    }
    if (((panda$core$Bit) { cl2137 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2142 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2137);
    org$pandalanguage$pandac$Symbol* $tmp2143 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2142, p_name);
    s2141 = $tmp2143;
    if (((panda$core$Bit) { s2141 == NULL }).value) {
    {
        panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2144, ((org$pandalanguage$pandac$Symbol*) cl2137)->name);
        panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, &$s2146);
        panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, p_name);
        panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2148, &$s2149);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2150);
        return NULL;
    }
    }
    panda$core$Bit $tmp2152 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2141->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2151 = $tmp2152.value;
    if (!$tmp2151) goto $l2153;
    panda$core$Bit $tmp2154 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2141->kind, ((panda$core$Int64) { 205 }));
    $tmp2151 = $tmp2154.value;
    $l2153:;
    panda$core$Bit $tmp2155 = { $tmp2151 };
    if ($tmp2155.value) {
    {
        panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2156, ((org$pandalanguage$pandac$Symbol*) cl2137)->name);
        panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2158);
        panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, p_name);
        panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, &$s2161);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2162);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2164 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2137);
    org$pandalanguage$pandac$IRNode* $tmp2165 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2141, $tmp2164);
    ref2163 = $tmp2165;
    if (((panda$core$Bit) { ref2163 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2166 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2163, p_args, p_expectedType);
    return $tmp2166;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2167 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2167;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2168;
    panda$collections$Array* methods2175;
    org$pandalanguage$pandac$MethodDecl* first2180;
    panda$core$MutableString* msg2185;
    panda$core$String* separator2196;
    panda$collections$Iterator* a$Iter2198;
    org$pandalanguage$pandac$IRNode* a2210;
    org$pandalanguage$pandac$IRNode* target2224;
    panda$collections$Array* children2232;
    panda$collections$Array* types2238;
    panda$collections$Iterator* m$Iter2241;
    org$pandalanguage$pandac$MethodRef* m2253;
    org$pandalanguage$pandac$IRNode* target2263;
    org$pandalanguage$pandac$IRNode* initCall2266;
    panda$collections$Array* children2270;
    org$pandalanguage$pandac$IRNode* resolved2275;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2169 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2169, ((panda$core$Int64) { 0 }));
            if ($tmp2170.value) {
            {
                target2168 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2171 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2171, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2172.value);
                panda$core$Object* $tmp2173 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2168 = ((org$pandalanguage$pandac$IRNode*) $tmp2173);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2174 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2168, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2174;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2176 = (panda$collections$Array*) malloc(40);
            $tmp2176->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2176->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2176, ((panda$collections$ListView*) p_m->payload));
            methods2175 = $tmp2176;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2175, p_args, p_expectedType);
            panda$core$Int64 $tmp2178 = panda$collections$Array$get_count$R$panda$core$Int64(methods2175);
            panda$core$Bit $tmp2179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2178, ((panda$core$Int64) { 0 }));
            if ($tmp2179.value) {
            {
                ITable* $tmp2181 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2181->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2181 = $tmp2181->next;
                }
                $fn2183 $tmp2182 = $tmp2181->methods[0];
                panda$core$Object* $tmp2184 = $tmp2182(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2180 = ((org$pandalanguage$pandac$MethodRef*) $tmp2184)->value;
                panda$core$MutableString* $tmp2186 = (panda$core$MutableString*) malloc(40);
                $tmp2186->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2186->refCount.value = 1;
                panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2188, ((org$pandalanguage$pandac$Symbol*) first2180->owner)->name);
                panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2190);
                panda$core$String* $tmp2192 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2180)->name);
                panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, &$s2193);
                panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, $tmp2194);
                panda$core$MutableString$init$panda$core$String($tmp2186, $tmp2195);
                msg2185 = $tmp2186;
                separator2196 = &$s2197;
                {
                    ITable* $tmp2199 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2199->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2199 = $tmp2199->next;
                    }
                    $fn2201 $tmp2200 = $tmp2199->methods[0];
                    panda$collections$Iterator* $tmp2202 = $tmp2200(((panda$collections$Iterable*) p_args));
                    a$Iter2198 = $tmp2202;
                    $l2203:;
                    ITable* $tmp2205 = a$Iter2198->$class->itable;
                    while ($tmp2205->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2205 = $tmp2205->next;
                    }
                    $fn2207 $tmp2206 = $tmp2205->methods[0];
                    panda$core$Bit $tmp2208 = $tmp2206(a$Iter2198);
                    panda$core$Bit $tmp2209 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2208);
                    if (!$tmp2209.value) goto $l2204;
                    {
                        ITable* $tmp2211 = a$Iter2198->$class->itable;
                        while ($tmp2211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2211 = $tmp2211->next;
                        }
                        $fn2213 $tmp2212 = $tmp2211->methods[1];
                        panda$core$Object* $tmp2214 = $tmp2212(a$Iter2198);
                        a2210 = ((org$pandalanguage$pandac$IRNode*) $tmp2214);
                        panda$core$MutableString$append$panda$core$String(msg2185, separator2196);
                        panda$core$MutableString$append$panda$core$Object(msg2185, ((panda$core$Object*) a2210->type));
                        separator2196 = &$s2215;
                    }
                    goto $l2203;
                    $l2204:;
                }
                panda$core$MutableString$append$panda$core$String(msg2185, &$s2216);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2217, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, &$s2219);
                    panda$core$MutableString$append$panda$core$String(msg2185, $tmp2220);
                }
                }
                panda$core$String* $tmp2221 = panda$core$MutableString$finish$R$panda$core$String(msg2185);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2221);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2222 = panda$collections$Array$get_count$R$panda$core$Int64(methods2175);
            panda$core$Bit $tmp2223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2222, ((panda$core$Int64) { 1 }));
            if ($tmp2223.value) {
            {
                panda$core$Int64 $tmp2225 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2225, ((panda$core$Int64) { 1 }));
                if ($tmp2226.value) {
                {
                    panda$core$Object* $tmp2227 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2224 = ((org$pandalanguage$pandac$IRNode*) $tmp2227);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2228 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2228, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2229.value);
                    target2224 = NULL;
                }
                }
                panda$core$Object* $tmp2230 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2175, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2231 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2224, ((org$pandalanguage$pandac$MethodRef*) $tmp2230), p_args);
                return $tmp2231;
            }
            }
            panda$collections$Array* $tmp2233 = (panda$collections$Array*) malloc(40);
            $tmp2233->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2233->refCount.value = 1;
            panda$collections$Array$init($tmp2233);
            children2232 = $tmp2233;
            org$pandalanguage$pandac$IRNode* $tmp2235 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2235->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2235->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2237 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2235, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2237, ((panda$core$Object*) methods2175), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2232, ((panda$core$Object*) $tmp2235));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2232, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2239 = (panda$collections$Array*) malloc(40);
            $tmp2239->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2239->refCount.value = 1;
            panda$collections$Array$init($tmp2239);
            types2238 = $tmp2239;
            {
                ITable* $tmp2242 = ((panda$collections$Iterable*) methods2175)->$class->itable;
                while ($tmp2242->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2242 = $tmp2242->next;
                }
                $fn2244 $tmp2243 = $tmp2242->methods[0];
                panda$collections$Iterator* $tmp2245 = $tmp2243(((panda$collections$Iterable*) methods2175));
                m$Iter2241 = $tmp2245;
                $l2246:;
                ITable* $tmp2248 = m$Iter2241->$class->itable;
                while ($tmp2248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2248 = $tmp2248->next;
                }
                $fn2250 $tmp2249 = $tmp2248->methods[0];
                panda$core$Bit $tmp2251 = $tmp2249(m$Iter2241);
                panda$core$Bit $tmp2252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2251);
                if (!$tmp2252.value) goto $l2247;
                {
                    ITable* $tmp2254 = m$Iter2241->$class->itable;
                    while ($tmp2254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2254 = $tmp2254->next;
                    }
                    $fn2256 $tmp2255 = $tmp2254->methods[1];
                    panda$core$Object* $tmp2257 = $tmp2255(m$Iter2241);
                    m2253 = ((org$pandalanguage$pandac$MethodRef*) $tmp2257);
                    org$pandalanguage$pandac$Type* $tmp2258 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2253);
                    panda$collections$Array$add$panda$collections$Array$T(types2238, ((panda$core$Object*) $tmp2258));
                }
                goto $l2246;
                $l2247:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2259 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2259->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2259->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2261 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2261->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2261->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2261, ((panda$collections$ListView*) types2238));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2259, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2261, ((panda$collections$ListView*) children2232));
            return $tmp2259;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2264 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2264->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2264->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2264, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2263 = $tmp2264;
            org$pandalanguage$pandac$IRNode* $tmp2268 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2263, &$s2267, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2269 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2268);
            initCall2266 = $tmp2269;
            if (((panda$core$Bit) { initCall2266 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2271 = (panda$collections$Array*) malloc(40);
            $tmp2271->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2271->refCount.value = 1;
            panda$collections$Array$init($tmp2271);
            children2270 = $tmp2271;
            panda$collections$Array$add$panda$collections$Array$T(children2270, ((panda$core$Object*) initCall2266));
            org$pandalanguage$pandac$IRNode* $tmp2273 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2273->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2273->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2273, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2270));
            return $tmp2273;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2276 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2275 = $tmp2276;
            if (((panda$core$Bit) { resolved2275 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2277, ((panda$core$Object*) resolved2275->type));
            panda$core$String* $tmp2280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2278, &$s2279);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2275->position, $tmp2280);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2281;
    panda$core$MutableString* typeName2284;
    panda$core$String* separator2288;
    panda$collections$Iterator* p$Iter2290;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2302;
    panda$core$Int64 kind2308;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2282 = (panda$collections$Array*) malloc(40);
    $tmp2282->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2282->refCount.value = 1;
    panda$collections$Array$init($tmp2282);
    subtypes2281 = $tmp2282;
    panda$core$MutableString* $tmp2285 = (panda$core$MutableString*) malloc(40);
    $tmp2285->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2285->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2285, &$s2287);
    typeName2284 = $tmp2285;
    separator2288 = &$s2289;
    {
        ITable* $tmp2291 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2291->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2291 = $tmp2291->next;
        }
        $fn2293 $tmp2292 = $tmp2291->methods[0];
        panda$collections$Iterator* $tmp2294 = $tmp2292(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2290 = $tmp2294;
        $l2295:;
        ITable* $tmp2297 = p$Iter2290->$class->itable;
        while ($tmp2297->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2297 = $tmp2297->next;
        }
        $fn2299 $tmp2298 = $tmp2297->methods[0];
        panda$core$Bit $tmp2300 = $tmp2298(p$Iter2290);
        panda$core$Bit $tmp2301 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2300);
        if (!$tmp2301.value) goto $l2296;
        {
            ITable* $tmp2303 = p$Iter2290->$class->itable;
            while ($tmp2303->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2303 = $tmp2303->next;
            }
            $fn2305 $tmp2304 = $tmp2303->methods[1];
            panda$core$Object* $tmp2306 = $tmp2304(p$Iter2290);
            p2302 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2306);
            panda$core$MutableString$append$panda$core$String(typeName2284, separator2288);
            panda$core$MutableString$append$panda$core$String(typeName2284, ((org$pandalanguage$pandac$Symbol*) p2302->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2281, ((panda$core$Object*) p2302->type));
            separator2288 = &$s2307;
        }
        goto $l2295;
        $l2296:;
    }
    panda$core$Bit $tmp2309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2309.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2284, &$s2310);
        kind2308 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2284, &$s2311);
        kind2308 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2281, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2312 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2313 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2312);
    if ($tmp2313.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2284, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2284, &$s2314);
    org$pandalanguage$pandac$Type* $tmp2315 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2315->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2315->refCount.value = 1;
    panda$core$String* $tmp2317 = panda$core$MutableString$finish$R$panda$core$String(typeName2284);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2315, $tmp2317, kind2308, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2281), ((panda$core$Bit) { true }));
    return $tmp2315;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2318;
    panda$core$MutableString* typeName2321;
    panda$collections$Iterator* p$Iter2325;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2337;
    panda$core$Int64 kind2343;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2319 = (panda$collections$Array*) malloc(40);
    $tmp2319->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2319->refCount.value = 1;
    panda$collections$Array$init($tmp2319);
    subtypes2318 = $tmp2319;
    panda$core$MutableString* $tmp2322 = (panda$core$MutableString*) malloc(40);
    $tmp2322->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2322->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2322, &$s2324);
    typeName2321 = $tmp2322;
    panda$core$MutableString$append$panda$core$String(typeName2321, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2318, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2326 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2326->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2326 = $tmp2326->next;
        }
        $fn2328 $tmp2327 = $tmp2326->methods[0];
        panda$collections$Iterator* $tmp2329 = $tmp2327(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2325 = $tmp2329;
        $l2330:;
        ITable* $tmp2332 = p$Iter2325->$class->itable;
        while ($tmp2332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2332 = $tmp2332->next;
        }
        $fn2334 $tmp2333 = $tmp2332->methods[0];
        panda$core$Bit $tmp2335 = $tmp2333(p$Iter2325);
        panda$core$Bit $tmp2336 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2335);
        if (!$tmp2336.value) goto $l2331;
        {
            ITable* $tmp2338 = p$Iter2325->$class->itable;
            while ($tmp2338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2338 = $tmp2338->next;
            }
            $fn2340 $tmp2339 = $tmp2338->methods[1];
            panda$core$Object* $tmp2341 = $tmp2339(p$Iter2325);
            p2337 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2341);
            panda$core$MutableString$append$panda$core$String(typeName2321, &$s2342);
            panda$core$MutableString$append$panda$core$String(typeName2321, ((org$pandalanguage$pandac$Symbol*) p2337->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2318, ((panda$core$Object*) p2337->type));
        }
        goto $l2330;
        $l2331:;
    }
    panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2344.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2321, &$s2345);
        kind2343 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2321, &$s2346);
        kind2343 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2318, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2347 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2348 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2347);
    if ($tmp2348.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2321, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2321, &$s2349);
    org$pandalanguage$pandac$Type* $tmp2350 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2350->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2350->refCount.value = 1;
    panda$core$String* $tmp2352 = panda$core$MutableString$finish$R$panda$core$String(typeName2321);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2350, $tmp2352, kind2343, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2318), ((panda$core$Bit) { true }));
    return $tmp2350;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2353;
    org$pandalanguage$pandac$MethodDecl* $tmp2354 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2353 = $tmp2354;
    if (((panda$core$Bit) { inherited2353 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2355 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2355;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2356 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2353);
    return $tmp2356;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2357 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2358 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2357);
    return $tmp2358;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2359;
    org$pandalanguage$pandac$MethodDecl* $tmp2360 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2359 = $tmp2360;
    if (((panda$core$Bit) { inherited2359 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2361 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2361;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2362 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2359, p_selfType);
    return $tmp2362;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2363;
        }
        break;
        case 52:
        {
            return &$s2364;
        }
        break;
        case 53:
        {
            return &$s2365;
        }
        break;
        case 54:
        {
            return &$s2366;
        }
        break;
        case 55:
        {
            return &$s2367;
        }
        break;
        case 56:
        {
            return &$s2368;
        }
        break;
        case 57:
        {
            return &$s2369;
        }
        break;
        case 58:
        {
            return &$s2370;
        }
        break;
        case 59:
        {
            return &$s2371;
        }
        break;
        case 63:
        {
            return &$s2372;
        }
        break;
        case 62:
        {
            return &$s2373;
        }
        break;
        case 65:
        {
            return &$s2374;
        }
        break;
        case 64:
        {
            return &$s2375;
        }
        break;
        case 68:
        {
            return &$s2376;
        }
        break;
        case 69:
        {
            return &$s2377;
        }
        break;
        case 66:
        {
            return &$s2378;
        }
        break;
        case 67:
        {
            return &$s2379;
        }
        break;
        case 70:
        {
            return &$s2380;
        }
        break;
        case 71:
        {
            return &$s2381;
        }
        break;
        case 49:
        {
            return &$s2382;
        }
        break;
        case 50:
        {
            return &$s2383;
        }
        break;
        case 72:
        {
            return &$s2384;
        }
        break;
        case 1:
        {
            return &$s2385;
        }
        break;
        case 101:
        {
            return &$s2386;
        }
        break;
        case 73:
        {
            return &$s2387;
        }
        break;
        case 60:
        {
            return &$s2388;
        }
        break;
        case 61:
        {
            return &$s2389;
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
            panda$core$Int64 $tmp2390 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2390, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2391.value);
            panda$core$Bit $tmp2392 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2392.value) {
            {
                panda$core$Object* $tmp2393 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2394 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2393));
                return $tmp2394;
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
            panda$core$Object* $tmp2395 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2396 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2395));
            return $tmp2396;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2422;
    panda$core$Int64 r2424;
    panda$core$Bit $tmp2398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2397 = $tmp2398.value;
    if ($tmp2397) goto $l2399;
    panda$core$Bit $tmp2400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2397 = $tmp2400.value;
    $l2399:;
    panda$core$Bit $tmp2401 = { $tmp2397 };
    PANDA_ASSERT($tmp2401.value);
    panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2402 = $tmp2403.value;
    if ($tmp2402) goto $l2404;
    panda$core$Bit $tmp2405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2402 = $tmp2405.value;
    $l2404:;
    panda$core$Bit $tmp2406 = { $tmp2402 };
    PANDA_ASSERT($tmp2406.value);
    panda$core$Bit $tmp2409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2408 = $tmp2409.value;
    if ($tmp2408) goto $l2410;
    panda$core$UInt64 $tmp2412 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2413 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2412);
    bool $tmp2411 = $tmp2413.value;
    if (!$tmp2411) goto $l2414;
    panda$core$Bit $tmp2415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2411 = $tmp2415.value;
    $l2414:;
    panda$core$Bit $tmp2416 = { $tmp2411 };
    $tmp2408 = $tmp2416.value;
    $l2410:;
    panda$core$Bit $tmp2417 = { $tmp2408 };
    bool $tmp2407 = $tmp2417.value;
    if ($tmp2407) goto $l2418;
    panda$core$UInt64 $tmp2419 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2420 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2419);
    $tmp2407 = $tmp2420.value;
    $l2418:;
    panda$core$Bit $tmp2421 = { $tmp2407 };
    if ($tmp2421.value) {
    {
        panda$core$Int64 $tmp2423 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2422 = $tmp2423;
        panda$core$Int64 $tmp2425 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2424 = $tmp2425;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2426 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2426->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2426->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2428 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2429 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2422, r2424);
                panda$core$UInt64 $tmp2430 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2429);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2426, ((panda$core$Int64) { 1004 }), p_position, $tmp2428, $tmp2430);
                return $tmp2426;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2431 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2431->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2431->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2433 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2434 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2422, r2424);
                panda$core$UInt64 $tmp2435 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2434);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2431, ((panda$core$Int64) { 1004 }), p_position, $tmp2433, $tmp2435);
                return $tmp2431;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2436 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2436->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2436->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2438 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2439 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2422, r2424);
                panda$core$UInt64 $tmp2440 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2439);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2436, ((panda$core$Int64) { 1004 }), p_position, $tmp2438, $tmp2440);
                return $tmp2436;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2441 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2441->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2441->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2443 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2444 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2422, r2424);
                panda$core$UInt64 $tmp2445 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2444);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2441, ((panda$core$Int64) { 1004 }), p_position, $tmp2443, $tmp2445);
                return $tmp2441;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2446 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2446->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2446->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2448 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2449 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2422, r2424);
                panda$core$UInt64 $tmp2450 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2449);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2446, ((panda$core$Int64) { 1004 }), p_position, $tmp2448, $tmp2450);
                return $tmp2446;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2451 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2451->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2451->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2453 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2422, r2424);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2451, ((panda$core$Int64) { 1011 }), p_position, $tmp2453, $tmp2454);
                return $tmp2451;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2455 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2455->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2455->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2457 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2458 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2422, r2424);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2455, ((panda$core$Int64) { 1011 }), p_position, $tmp2457, $tmp2458);
                return $tmp2455;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2459 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2459->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2459->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2461 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2462 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2422, r2424);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2459, ((panda$core$Int64) { 1011 }), p_position, $tmp2461, $tmp2462);
                return $tmp2459;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2463 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2463->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2463->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2465 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2466 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2422, r2424);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2463, ((panda$core$Int64) { 1011 }), p_position, $tmp2465, $tmp2466);
                return $tmp2463;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2467 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2467->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2467->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2469 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2470 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2422, r2424);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2467, ((panda$core$Int64) { 1011 }), p_position, $tmp2469, $tmp2470);
                return $tmp2467;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2471 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2471->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2471->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2473 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2474 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2422, r2424);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2471, ((panda$core$Int64) { 1011 }), p_position, $tmp2473, $tmp2474);
                return $tmp2471;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2475 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2475->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2475->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2477 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2478 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2422, r2424);
                panda$core$UInt64 $tmp2479 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2478);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2475, ((panda$core$Int64) { 1004 }), p_position, $tmp2477, $tmp2479);
                return $tmp2475;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2480 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2480->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2480->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2482 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2483 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2422, r2424);
                panda$core$UInt64 $tmp2484 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2483);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2480, ((panda$core$Int64) { 1004 }), p_position, $tmp2482, $tmp2484);
                return $tmp2480;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2485 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2485->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2485->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2487 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2488 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2422, r2424);
                panda$core$UInt64 $tmp2489 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2488);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2485, ((panda$core$Int64) { 1004 }), p_position, $tmp2487, $tmp2489);
                return $tmp2485;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2490 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2490->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2490->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2492 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2493 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2422, r2424);
                panda$core$UInt64 $tmp2494 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2493);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2490, ((panda$core$Int64) { 1004 }), p_position, $tmp2492, $tmp2494);
                return $tmp2490;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2495 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2495->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2495->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2497 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2498 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2422, r2424);
                panda$core$UInt64 $tmp2499 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2498);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2495, ((panda$core$Int64) { 1004 }), p_position, $tmp2497, $tmp2499);
                return $tmp2495;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2500);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2501.value) {
    {
        panda$core$Object* $tmp2502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2502);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2507;
    org$pandalanguage$pandac$IRNode* resolved2515;
    panda$collections$Array* children2520;
    panda$core$UInt64 baseId2526;
    org$pandalanguage$pandac$IRNode* base2527;
    panda$core$UInt64 indexId2534;
    org$pandalanguage$pandac$IRNode* index2535;
    org$pandalanguage$pandac$IRNode* baseRef2540;
    org$pandalanguage$pandac$IRNode* indexRef2543;
    org$pandalanguage$pandac$IRNode* rhsIndex2546;
    org$pandalanguage$pandac$IRNode* value2548;
    panda$core$Bit $tmp2503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2503.value);
    panda$core$Int64 $tmp2504 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2504, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2505.value);
    panda$core$Bit $tmp2506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2506.value) {
    {
        panda$collections$Array* $tmp2508 = (panda$collections$Array*) malloc(40);
        $tmp2508->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2508->refCount.value = 1;
        panda$collections$Array$init($tmp2508);
        args2507 = $tmp2508;
        panda$core$Object* $tmp2510 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2507, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2510)));
        panda$collections$Array$add$panda$collections$Array$T(args2507, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2511 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2513 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2511), &$s2512, ((panda$collections$ListView*) args2507));
        return $tmp2513;
    }
    }
    panda$core$Bit $tmp2514 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2514.value);
    org$pandalanguage$pandac$IRNode* $tmp2516 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2515 = $tmp2516;
    if (((panda$core$Bit) { resolved2515 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2517 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2515);
    resolved2515 = $tmp2517;
    panda$core$Int64 $tmp2518 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2515->children);
    panda$core$Bit $tmp2519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2518, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2519.value);
    panda$collections$Array* $tmp2521 = (panda$collections$Array*) malloc(40);
    $tmp2521->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2521->refCount.value = 1;
    panda$collections$Array$init($tmp2521);
    children2520 = $tmp2521;
    panda$core$Object* $tmp2523 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2515->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2524 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2523));
    panda$collections$Array$add$panda$collections$Array$T(children2520, ((panda$core$Object*) $tmp2524));
    panda$core$UInt64 $tmp2525 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2525;
    baseId2526 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2528 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2528->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2528->refCount.value = 1;
    panda$core$Object* $tmp2530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2520, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2531 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2520, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2528, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2530)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2531)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2526)), ((panda$collections$ListView*) children2520));
    base2527 = $tmp2528;
    panda$collections$Array$clear(children2520);
    panda$core$Object* $tmp2532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2515->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2520, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2532)));
    panda$core$UInt64 $tmp2533 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2533;
    indexId2534 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2536 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2536->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2536->refCount.value = 1;
    panda$core$Object* $tmp2538 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2520, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2520, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2536, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2538)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2539)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2534)), ((panda$collections$ListView*) children2520));
    index2535 = $tmp2536;
    org$pandalanguage$pandac$IRNode* $tmp2541 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2541->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2541->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2541, ((panda$core$Int64) { 1028 }), base2527->position, base2527->type, baseId2526);
    baseRef2540 = $tmp2541;
    org$pandalanguage$pandac$IRNode* $tmp2544 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2544->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2544->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2544, ((panda$core$Int64) { 1028 }), index2535->position, index2535->type, indexId2534);
    indexRef2543 = $tmp2544;
    org$pandalanguage$pandac$IRNode* $tmp2547 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2540, ((panda$core$Int64) { 101 }), indexRef2543);
    rhsIndex2546 = $tmp2547;
    if (((panda$core$Bit) { rhsIndex2546 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2549 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2550 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2546, $tmp2549, p_right);
    value2548 = $tmp2550;
    if (((panda$core$Bit) { value2548 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2553 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2546->type);
    bool $tmp2552 = $tmp2553.value;
    if (!$tmp2552) goto $l2554;
    panda$core$Bit $tmp2555 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2552 = $tmp2555.value;
    $l2554:;
    panda$core$Bit $tmp2556 = { $tmp2552 };
    bool $tmp2551 = $tmp2556.value;
    if (!$tmp2551) goto $l2557;
    panda$core$Bit $tmp2558 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2546->type, value2548->type);
    $tmp2551 = $tmp2558.value;
    $l2557:;
    panda$core$Bit $tmp2559 = { $tmp2551 };
    if ($tmp2559.value) {
    {
        panda$collections$Array* $tmp2561 = (panda$collections$Array*) malloc(40);
        $tmp2561->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2561->refCount.value = 1;
        panda$collections$Array$init($tmp2561);
        org$pandalanguage$pandac$IRNode* $tmp2563 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2548, &$s2560, ((panda$collections$ListView*) $tmp2561), resolved2515->type);
        value2548 = $tmp2563;
        if (((panda$core$Bit) { value2548 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2520);
    panda$collections$Array$add$panda$collections$Array$T(children2520, ((panda$core$Object*) index2535));
    panda$collections$Array$add$panda$collections$Array$T(children2520, ((panda$core$Object*) value2548));
    org$pandalanguage$pandac$IRNode* $tmp2565 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2527, &$s2564, ((panda$collections$ListView*) children2520));
    return $tmp2565;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2566;
    org$pandalanguage$pandac$IRNode* right2567;
    panda$core$Int64 kind2591;
    org$pandalanguage$pandac$IRNode* resolved2598;
    panda$collections$Array* children2600;
    org$pandalanguage$pandac$IRNode* resolved2607;
    panda$collections$Array* children2609;
    org$pandalanguage$pandac$ClassDecl* cl2621;
    org$pandalanguage$pandac$ClassDecl* cl2638;
    org$pandalanguage$pandac$IRNode* finalLeft2654;
    org$pandalanguage$pandac$IRNode* finalRight2657;
    panda$collections$Array* children2660;
    panda$collections$Array* children2674;
    panda$collections$Array* children2686;
    org$pandalanguage$pandac$IRNode* reusedLeft2692;
    org$pandalanguage$pandac$ClassDecl* cl2709;
    panda$collections$ListView* parameters2711;
    org$pandalanguage$pandac$Symbol* methods2713;
    org$pandalanguage$pandac$Type* type2717;
    panda$collections$Array* types2718;
    org$pandalanguage$pandac$MethodDecl* m2722;
    panda$collections$Iterator* m$Iter2727;
    org$pandalanguage$pandac$MethodDecl* m2739;
    panda$collections$Array* children2750;
    panda$collections$Array* children2779;
    panda$collections$Array* children2795;
    org$pandalanguage$pandac$Type* resultType2818;
    org$pandalanguage$pandac$IRNode* result2822;
    org$pandalanguage$pandac$IRNode* resolved2825;
    org$pandalanguage$pandac$IRNode* target2831;
    left2566 = p_rawLeft;
    right2567 = p_rawRight;
    panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2566->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2568.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2569 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2567);
        right2567 = $tmp2569;
        if (((panda$core$Bit) { right2567 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2570 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2566, right2567->type);
        if (((panda$core$Bit) { $tmp2570.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2571 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2566, right2567->type);
            left2566 = $tmp2571;
        }
        }
    }
    }
    panda$core$Bit $tmp2573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2567->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2572 = $tmp2573.value;
    if (!$tmp2572) goto $l2574;
    panda$core$Int64$nullable $tmp2575 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2567, left2566->type);
    $tmp2572 = ((panda$core$Bit) { $tmp2575.nonnull }).value;
    $l2574:;
    panda$core$Bit $tmp2576 = { $tmp2572 };
    if ($tmp2576.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2577 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2567, left2566->type);
        right2567 = $tmp2577;
    }
    }
    panda$core$Bit $tmp2581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2580 = $tmp2581.value;
    if ($tmp2580) goto $l2582;
    panda$core$Bit $tmp2583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2580 = $tmp2583.value;
    $l2582:;
    panda$core$Bit $tmp2584 = { $tmp2580 };
    bool $tmp2579 = $tmp2584.value;
    if ($tmp2579) goto $l2585;
    panda$core$Bit $tmp2586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2579 = $tmp2586.value;
    $l2585:;
    panda$core$Bit $tmp2587 = { $tmp2579 };
    bool $tmp2578 = $tmp2587.value;
    if ($tmp2578) goto $l2588;
    panda$core$Bit $tmp2589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2578 = $tmp2589.value;
    $l2588:;
    panda$core$Bit $tmp2590 = { $tmp2578 };
    if ($tmp2590.value) {
    {
        panda$core$Bit $tmp2593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2592 = $tmp2593.value;
        if ($tmp2592) goto $l2594;
        panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2592 = $tmp2595.value;
        $l2594:;
        panda$core$Bit $tmp2596 = { $tmp2592 };
        if ($tmp2596.value) {
        {
            kind2591 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2591 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2566->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2597.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2599 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2567);
            resolved2598 = $tmp2599;
            if (((panda$core$Bit) { resolved2598 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2601 = (panda$collections$Array*) malloc(40);
            $tmp2601->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2601->refCount.value = 1;
            panda$collections$Array$init($tmp2601);
            children2600 = $tmp2601;
            panda$collections$Array$add$panda$collections$Array$T(children2600, ((panda$core$Object*) resolved2598));
            org$pandalanguage$pandac$IRNode* $tmp2603 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2603->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2603->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2605 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2603, kind2591, p_position, $tmp2605, ((panda$collections$ListView*) children2600));
            return $tmp2603;
        }
        }
        panda$core$Bit $tmp2606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2567->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2606.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2608 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2566);
            resolved2607 = $tmp2608;
            if (((panda$core$Bit) { resolved2607 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2610 = (panda$collections$Array*) malloc(40);
            $tmp2610->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2610->refCount.value = 1;
            panda$collections$Array$init($tmp2610);
            children2609 = $tmp2610;
            panda$collections$Array$add$panda$collections$Array$T(children2609, ((panda$core$Object*) resolved2607));
            org$pandalanguage$pandac$IRNode* $tmp2612 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2612->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2612->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2614 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2612, kind2591, p_position, $tmp2614, ((panda$collections$ListView*) children2609));
            return $tmp2612;
        }
        }
    }
    }
    panda$core$Bit $tmp2616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2615 = $tmp2616.value;
    if ($tmp2615) goto $l2617;
    panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2615 = $tmp2618.value;
    $l2617:;
    panda$core$Bit $tmp2619 = { $tmp2615 };
    if ($tmp2619.value) {
    {
        panda$core$Bit $tmp2620 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2566->type);
        if ($tmp2620.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2622 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2566->type);
            cl2621 = $tmp2622;
            if (((panda$core$Bit) { cl2621 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2623 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2621);
            if ($tmp2623.value) {
            {
                panda$core$String* $tmp2625 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2624, $tmp2625);
                panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2626, &$s2627);
                panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2628, ((panda$core$Object*) left2566->type));
                panda$core$String* $tmp2631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, &$s2630);
                panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2632, ((panda$core$Object*) right2567->type));
                panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, &$s2634);
                panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2631, $tmp2635);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2636);
            }
            }
        }
        }
        panda$core$Bit $tmp2637 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2567->type);
        if ($tmp2637.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2639 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2567->type);
            cl2638 = $tmp2639;
            if (((panda$core$Bit) { cl2638 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2640 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2638);
            if ($tmp2640.value) {
            {
                panda$core$String* $tmp2642 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2641, $tmp2642);
                panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2643, &$s2644);
                panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2645, ((panda$core$Object*) left2566->type));
                panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, &$s2647);
                panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2649, ((panda$core$Object*) right2567->type));
                panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, &$s2651);
                panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, $tmp2652);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2653);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2655 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2656 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2566, $tmp2655);
        finalLeft2654 = $tmp2656;
        if (((panda$core$Bit) { finalLeft2654 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2658 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2659 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2567, $tmp2658);
        finalRight2657 = $tmp2659;
        if (((panda$core$Bit) { finalRight2657 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2661 = (panda$collections$Array*) malloc(40);
        $tmp2661->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2661->refCount.value = 1;
        panda$collections$Array$init($tmp2661);
        children2660 = $tmp2661;
        panda$collections$Array$add$panda$collections$Array$T(children2660, ((panda$core$Object*) finalLeft2654));
        panda$collections$Array$add$panda$collections$Array$T(children2660, ((panda$core$Object*) finalRight2657));
        org$pandalanguage$pandac$IRNode* $tmp2663 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2663->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2663->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2665 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2663, ((panda$core$Int64) { 1023 }), p_position, $tmp2665, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2660));
        return $tmp2663;
    }
    }
    panda$core$Bit $tmp2666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2666.value) {
    {
        panda$core$Bit $tmp2667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2566->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2667.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2668 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2566, p_op, right2567);
            return $tmp2668;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2669 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2566);
        left2566 = $tmp2669;
        if (((panda$core$Bit) { left2566 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2670 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2567, left2566->type);
        right2567 = $tmp2670;
        if (((panda$core$Bit) { right2567 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2671 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2566);
        panda$core$Bit $tmp2672 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2671);
        if ($tmp2672.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2566->position, &$s2673);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2675 = (panda$collections$Array*) malloc(40);
        $tmp2675->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2675->refCount.value = 1;
        panda$collections$Array$init($tmp2675);
        children2674 = $tmp2675;
        panda$collections$Array$add$panda$collections$Array$T(children2674, ((panda$core$Object*) left2566));
        panda$collections$Array$add$panda$collections$Array$T(children2674, ((panda$core$Object*) right2567));
        org$pandalanguage$pandac$IRNode* $tmp2677 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2677->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2677->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2677, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2674));
        return $tmp2677;
    }
    }
    panda$core$Bit $tmp2679 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2679.value) {
    {
        panda$core$Bit $tmp2680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2566->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2680.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2681 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2566, p_op, right2567);
            return $tmp2681;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2682 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2566);
        left2566 = $tmp2682;
        if (((panda$core$Bit) { left2566 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2683 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2566);
        panda$core$Bit $tmp2684 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2683);
        if ($tmp2684.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2566->position, &$s2685);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2687 = (panda$collections$Array*) malloc(40);
        $tmp2687->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2687->refCount.value = 1;
        panda$collections$Array$init($tmp2687);
        children2686 = $tmp2687;
        panda$collections$Array$add$panda$collections$Array$T(children2686, ((panda$core$Object*) left2566));
        panda$core$UInt64 $tmp2689 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2689;
        org$pandalanguage$pandac$IRNode* $tmp2690 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2690->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2690->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2690, ((panda$core$Int64) { 1027 }), left2566->position, left2566->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2686));
        left2566 = $tmp2690;
        org$pandalanguage$pandac$IRNode* $tmp2693 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2693->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2693->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2693, ((panda$core$Int64) { 1028 }), left2566->position, left2566->type, self->reusedValueCount);
        reusedLeft2692 = $tmp2693;
        panda$core$Int64 $tmp2695 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2696 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2692, $tmp2695, right2567);
        right2567 = $tmp2696;
        if (((panda$core$Bit) { right2567 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2698 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2566->type);
        bool $tmp2697 = $tmp2698.value;
        if (!$tmp2697) goto $l2699;
        panda$core$Bit $tmp2700 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2566->type, right2567->type);
        $tmp2697 = $tmp2700.value;
        $l2699:;
        panda$core$Bit $tmp2701 = { $tmp2697 };
        if ($tmp2701.value) {
        {
            panda$collections$Array* $tmp2703 = (panda$collections$Array*) malloc(40);
            $tmp2703->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2703->refCount.value = 1;
            panda$collections$Array$init($tmp2703);
            org$pandalanguage$pandac$IRNode* $tmp2705 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2567, &$s2702, ((panda$collections$ListView*) $tmp2703), left2566->type);
            right2567 = $tmp2705;
            if (((panda$core$Bit) { right2567 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2706 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2566, ((panda$core$Int64) { 73 }), right2567);
        return $tmp2706;
    }
    }
    panda$core$Bit $tmp2707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2707.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2708 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2566);
        left2566 = $tmp2708;
        if (((panda$core$Bit) { left2566 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2710 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2566->type);
        cl2709 = $tmp2710;
        if (((panda$core$Bit) { cl2709 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2712 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2566->type);
        parameters2711 = $tmp2712;
        org$pandalanguage$pandac$SymbolTable* $tmp2714 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2709);
        org$pandalanguage$pandac$Symbol* $tmp2716 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2714, &$s2715);
        methods2713 = $tmp2716;
        if (((panda$core$Bit) { methods2713 != NULL }).value) {
        {
            panda$collections$Array* $tmp2719 = (panda$collections$Array*) malloc(40);
            $tmp2719->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2719->refCount.value = 1;
            panda$collections$Array$init($tmp2719);
            types2718 = $tmp2719;
            panda$core$Bit $tmp2721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2713->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2721.value) {
            {
                m2722 = ((org$pandalanguage$pandac$MethodDecl*) methods2713);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2722);
                org$pandalanguage$pandac$MethodRef* $tmp2723 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2723->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2723->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2723, m2722, parameters2711);
                org$pandalanguage$pandac$Type* $tmp2725 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2723);
                panda$collections$Array$add$panda$collections$Array$T(types2718, ((panda$core$Object*) $tmp2725));
            }
            }
            else {
            {
                panda$core$Bit $tmp2726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2713->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2726.value);
                {
                    ITable* $tmp2728 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2713)->methods)->$class->itable;
                    while ($tmp2728->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2728 = $tmp2728->next;
                    }
                    $fn2730 $tmp2729 = $tmp2728->methods[0];
                    panda$collections$Iterator* $tmp2731 = $tmp2729(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2713)->methods));
                    m$Iter2727 = $tmp2731;
                    $l2732:;
                    ITable* $tmp2734 = m$Iter2727->$class->itable;
                    while ($tmp2734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2734 = $tmp2734->next;
                    }
                    $fn2736 $tmp2735 = $tmp2734->methods[0];
                    panda$core$Bit $tmp2737 = $tmp2735(m$Iter2727);
                    panda$core$Bit $tmp2738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2737);
                    if (!$tmp2738.value) goto $l2733;
                    {
                        ITable* $tmp2740 = m$Iter2727->$class->itable;
                        while ($tmp2740->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2740 = $tmp2740->next;
                        }
                        $fn2742 $tmp2741 = $tmp2740->methods[1];
                        panda$core$Object* $tmp2743 = $tmp2741(m$Iter2727);
                        m2739 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2743);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2739);
                        org$pandalanguage$pandac$MethodRef* $tmp2744 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2744->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2744->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2744, m2739, parameters2711);
                        org$pandalanguage$pandac$Type* $tmp2746 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2744);
                        panda$collections$Array$add$panda$collections$Array$T(types2718, ((panda$core$Object*) $tmp2746));
                    }
                    goto $l2732;
                    $l2733:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2747 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2747->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2747->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2747, ((panda$collections$ListView*) types2718));
            type2717 = $tmp2747;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2749 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2717 = $tmp2749;
        }
        }
        panda$collections$Array* $tmp2751 = (panda$collections$Array*) malloc(40);
        $tmp2751->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2751->refCount.value = 1;
        panda$collections$Array$init($tmp2751);
        children2750 = $tmp2751;
        panda$collections$Array$add$panda$collections$Array$T(children2750, ((panda$core$Object*) left2566));
        panda$collections$Array$add$panda$collections$Array$T(children2750, ((panda$core$Object*) right2567));
        org$pandalanguage$pandac$IRNode* $tmp2753 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2753->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2753->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2753, ((panda$core$Int64) { 1040 }), p_position, type2717, ((panda$collections$ListView*) children2750));
        return $tmp2753;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2755 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2756 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2566->type, $tmp2755);
    if ($tmp2756.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2758 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2759 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2567->type, $tmp2758);
        bool $tmp2757 = $tmp2759.value;
        if (!$tmp2757) goto $l2760;
        panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2764 = $tmp2765.value;
        if ($tmp2764) goto $l2766;
        panda$core$Bit $tmp2767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2764 = $tmp2767.value;
        $l2766:;
        panda$core$Bit $tmp2768 = { $tmp2764 };
        bool $tmp2763 = $tmp2768.value;
        if ($tmp2763) goto $l2769;
        panda$core$Bit $tmp2770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2763 = $tmp2770.value;
        $l2769:;
        panda$core$Bit $tmp2771 = { $tmp2763 };
        bool $tmp2762 = $tmp2771.value;
        if ($tmp2762) goto $l2772;
        panda$core$Bit $tmp2773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2762 = $tmp2773.value;
        $l2772:;
        panda$core$Bit $tmp2774 = { $tmp2762 };
        bool $tmp2761 = $tmp2774.value;
        if ($tmp2761) goto $l2775;
        panda$core$Bit $tmp2776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2761 = $tmp2776.value;
        $l2775:;
        panda$core$Bit $tmp2777 = { $tmp2761 };
        $tmp2757 = $tmp2777.value;
        $l2760:;
        panda$core$Bit $tmp2778 = { $tmp2757 };
        if ($tmp2778.value) {
        {
            panda$collections$Array* $tmp2780 = (panda$collections$Array*) malloc(40);
            $tmp2780->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2780->refCount.value = 1;
            panda$collections$Array$init($tmp2780);
            children2779 = $tmp2780;
            panda$collections$Array$add$panda$collections$Array$T(children2779, ((panda$core$Object*) left2566));
            panda$collections$Array$add$panda$collections$Array$T(children2779, ((panda$core$Object*) right2567));
            org$pandalanguage$pandac$IRNode* $tmp2782 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2782->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2782->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2782, ((panda$core$Int64) { 1023 }), p_position, left2566->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2779));
            return $tmp2782;
        }
        }
        panda$core$String* $tmp2785 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2784, $tmp2785);
        panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2786, &$s2787);
        panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2788, ((panda$core$Object*) left2566->type));
        panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, &$s2790);
        panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2791, ((panda$core$Object*) right2567->type));
        panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, &$s2793);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2794);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2796 = (panda$collections$Array*) malloc(40);
    $tmp2796->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2796->refCount.value = 1;
    panda$collections$Array$init($tmp2796);
    children2795 = $tmp2796;
    panda$core$Bit $tmp2800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2566->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2799 = $tmp2800.value;
    if ($tmp2799) goto $l2801;
    panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2566->kind, ((panda$core$Int64) { 1032 }));
    $tmp2799 = $tmp2802.value;
    $l2801:;
    panda$core$Bit $tmp2803 = { $tmp2799 };
    bool $tmp2798 = $tmp2803.value;
    if (!$tmp2798) goto $l2804;
    panda$core$Bit $tmp2806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2567->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2805 = $tmp2806.value;
    if ($tmp2805) goto $l2807;
    panda$core$Bit $tmp2808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2567->kind, ((panda$core$Int64) { 1032 }));
    $tmp2805 = $tmp2808.value;
    $l2807:;
    panda$core$Bit $tmp2809 = { $tmp2805 };
    $tmp2798 = $tmp2809.value;
    $l2804:;
    panda$core$Bit $tmp2810 = { $tmp2798 };
    if ($tmp2810.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2811 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2566, p_op, right2567);
        return $tmp2811;
    }
    }
    panda$core$Bit $tmp2813 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2566->type);
    bool $tmp2812 = $tmp2813.value;
    if (!$tmp2812) goto $l2814;
    panda$core$Int64$nullable $tmp2815 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2567, left2566->type);
    $tmp2812 = ((panda$core$Bit) { $tmp2815.nonnull }).value;
    $l2814:;
    panda$core$Bit $tmp2816 = { $tmp2812 };
    if ($tmp2816.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2817 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2567, left2566->type);
        right2567 = $tmp2817;
        PANDA_ASSERT(((panda$core$Bit) { right2567 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2795, ((panda$core$Object*) left2566));
        panda$collections$Array$add$panda$collections$Array$T(children2795, ((panda$core$Object*) right2567));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2819 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2818 = $tmp2819;
            }
            break;
            default:
            {
                resultType2818 = left2566->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2820 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2820->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2820->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2820, ((panda$core$Int64) { 1023 }), p_position, resultType2818, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2795));
        return $tmp2820;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2795, ((panda$core$Object*) right2567));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2823 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2824 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2566, $tmp2823, ((panda$collections$ListView*) children2795));
    result2822 = $tmp2824;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2822 == NULL }).value) {
    {
        panda$collections$Array$clear(children2795);
        panda$collections$Array$add$panda$collections$Array$T(children2795, ((panda$core$Object*) left2566));
        org$pandalanguage$pandac$IRNode* $tmp2826 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2567);
        resolved2825 = $tmp2826;
        bool $tmp2827 = ((panda$core$Bit) { resolved2825 != NULL }).value;
        if (!$tmp2827) goto $l2828;
        panda$core$Bit $tmp2829 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2825->type);
        $tmp2827 = $tmp2829.value;
        $l2828:;
        panda$core$Bit $tmp2830 = { $tmp2827 };
        if ($tmp2830.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2795, ((panda$core$Object*) resolved2825));
            org$pandalanguage$pandac$IRNode* $tmp2832 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2832->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2832->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2834 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2832, ((panda$core$Int64) { 1001 }), resolved2825->position, $tmp2834, resolved2825->type);
            target2831 = $tmp2832;
            panda$core$String* $tmp2835 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2836 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2831, $tmp2835, ((panda$collections$ListView*) children2795));
            result2822 = $tmp2836;
        }
        }
    }
    }
    return result2822;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2837;
    org$pandalanguage$pandac$IRNode* right2840;
    panda$core$Object* $tmp2838 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2839 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2838));
    left2837 = $tmp2839;
    if (((panda$core$Bit) { left2837 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2841 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2842 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2841));
    right2840 = $tmp2842;
    if (((panda$core$Bit) { right2840 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2843 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2837, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2840);
    return $tmp2843;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2847;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2844 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2844;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2845 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2846 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2845, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2846.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2847, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp2848 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp2847);
            return ((panda$collections$ListView*) $tmp2848);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2849 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2850 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2849));
            return $tmp2850;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2851 = (panda$collections$Array*) malloc(40);
            $tmp2851->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2851->refCount.value = 1;
            panda$collections$Array$init($tmp2851);
            return ((panda$collections$ListView*) $tmp2851);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2853.value) {
        {
            panda$collections$ListView* $tmp2854 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2854;
        }
        }
        panda$collections$ListView* $tmp2855 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2855;
    }
    }
    panda$collections$Array* $tmp2856 = (panda$collections$Array*) malloc(40);
    $tmp2856->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2856->refCount.value = 1;
    panda$collections$Array$init($tmp2856);
    return ((panda$collections$ListView*) $tmp2856);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2859;
    org$pandalanguage$pandac$ClassDecl* cl2861;
    org$pandalanguage$pandac$Symbol* s2863;
    org$pandalanguage$pandac$MethodDecl* m2866;
    panda$collections$Iterator* test$Iter2871;
    org$pandalanguage$pandac$MethodDecl* test2883;
    org$pandalanguage$pandac$MethodRef* ref2895;
    panda$collections$Array* children2899;
    org$pandalanguage$pandac$IRNode* methodRef2902;
    org$pandalanguage$pandac$Position $tmp2908;
    panda$collections$Array* args2909;
    panda$collections$Array* children2918;
    panda$collections$Array* children2928;
    org$pandalanguage$pandac$IRNode* coerced2937;
    panda$collections$Array* children2940;
    panda$core$Bit $tmp2858 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2858.value) {
    {
        panda$core$String* $tmp2860 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2859 = $tmp2860;
        org$pandalanguage$pandac$ClassDecl* $tmp2862 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2861 = $tmp2862;
        if (((panda$core$Bit) { cl2861 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2864 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2861);
        org$pandalanguage$pandac$Symbol* $tmp2865 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2864, name2859);
        s2863 = $tmp2865;
        if (((panda$core$Bit) { s2863 != NULL }).value) {
        {
            m2866 = NULL;
            switch (s2863->kind.value) {
                case 204:
                {
                    m2866 = ((org$pandalanguage$pandac$MethodDecl*) s2863);
                    panda$core$Int64 $tmp2867 = panda$collections$Array$get_count$R$panda$core$Int64(m2866->parameters);
                    panda$core$Bit $tmp2868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2867, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2868.value);
                    panda$core$Bit $tmp2869 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2866->annotations);
                    panda$core$Bit $tmp2870 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2869);
                    PANDA_ASSERT($tmp2870.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2872 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2863)->methods)->$class->itable;
                        while ($tmp2872->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2872 = $tmp2872->next;
                        }
                        $fn2874 $tmp2873 = $tmp2872->methods[0];
                        panda$collections$Iterator* $tmp2875 = $tmp2873(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2863)->methods));
                        test$Iter2871 = $tmp2875;
                        $l2876:;
                        ITable* $tmp2878 = test$Iter2871->$class->itable;
                        while ($tmp2878->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2878 = $tmp2878->next;
                        }
                        $fn2880 $tmp2879 = $tmp2878->methods[0];
                        panda$core$Bit $tmp2881 = $tmp2879(test$Iter2871);
                        panda$core$Bit $tmp2882 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2881);
                        if (!$tmp2882.value) goto $l2877;
                        {
                            ITable* $tmp2884 = test$Iter2871->$class->itable;
                            while ($tmp2884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2884 = $tmp2884->next;
                            }
                            $fn2886 $tmp2885 = $tmp2884->methods[1];
                            panda$core$Object* $tmp2887 = $tmp2885(test$Iter2871);
                            test2883 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2887);
                            panda$core$Bit $tmp2889 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2883->annotations);
                            panda$core$Bit $tmp2890 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2889);
                            bool $tmp2888 = $tmp2890.value;
                            if (!$tmp2888) goto $l2891;
                            panda$core$Int64 $tmp2892 = panda$collections$Array$get_count$R$panda$core$Int64(test2883->parameters);
                            panda$core$Bit $tmp2893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2892, ((panda$core$Int64) { 0 }));
                            $tmp2888 = $tmp2893.value;
                            $l2891:;
                            panda$core$Bit $tmp2894 = { $tmp2888 };
                            if ($tmp2894.value) {
                            {
                                m2866 = test2883;
                                goto $l2877;
                            }
                            }
                        }
                        goto $l2876;
                        $l2877:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2866 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2866);
                org$pandalanguage$pandac$MethodRef* $tmp2896 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2896->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2896->refCount.value = 1;
                panda$collections$ListView* $tmp2898 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2896, m2866, $tmp2898);
                ref2895 = $tmp2896;
                panda$collections$Array* $tmp2900 = (panda$collections$Array*) malloc(40);
                $tmp2900->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2900->refCount.value = 1;
                panda$collections$Array$init($tmp2900);
                children2899 = $tmp2900;
                panda$collections$Array$add$panda$collections$Array$T(children2899, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2903 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2903->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2903->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2905 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp2905->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2905->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2908);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp2905, &$s2907, ((panda$core$Int64) { 16 }), $tmp2908, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2903, ((panda$core$Int64) { 1002 }), p_position, $tmp2905, ((panda$core$Object*) ref2895), ((panda$collections$ListView*) children2899));
                methodRef2902 = $tmp2903;
                panda$collections$Array* $tmp2910 = (panda$collections$Array*) malloc(40);
                $tmp2910->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2910->refCount.value = 1;
                panda$collections$Array$init($tmp2910);
                args2909 = $tmp2910;
                org$pandalanguage$pandac$IRNode* $tmp2912 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2902, ((panda$collections$ListView*) args2909));
                return $tmp2912;
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
                    org$pandalanguage$pandac$IRNode* $tmp2913 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2913->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2913->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2913, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2913;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2915 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2915->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2915->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2915, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2915;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2917 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2917.value) {
                    {
                        panda$collections$Array* $tmp2919 = (panda$collections$Array*) malloc(40);
                        $tmp2919->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2919->refCount.value = 1;
                        panda$collections$Array$init($tmp2919);
                        children2918 = $tmp2919;
                        panda$collections$Array$add$panda$collections$Array$T(children2918, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2921 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp2921->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2921->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2921, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2918));
                        return $tmp2921;
                    }
                    }
                }
            }
            panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2923, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, &$s2925);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2926);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2927 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2927.value) {
            {
                panda$collections$Array* $tmp2929 = (panda$collections$Array*) malloc(40);
                $tmp2929->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2929->refCount.value = 1;
                panda$collections$Array$init($tmp2929);
                children2928 = $tmp2929;
                panda$collections$Array$add$panda$collections$Array$T(children2928, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2931 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2931->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2931->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2931, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2928));
                return $tmp2931;
            }
            }
            else {
            {
                panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2933, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, &$s2935);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2936);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2938 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2939 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2938);
            coerced2937 = $tmp2939;
            if (((panda$core$Bit) { coerced2937 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2941 = (panda$collections$Array*) malloc(40);
            $tmp2941->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2941->refCount.value = 1;
            panda$collections$Array$init($tmp2941);
            children2940 = $tmp2941;
            panda$collections$Array$add$panda$collections$Array$T(children2940, ((panda$core$Object*) coerced2937));
            org$pandalanguage$pandac$IRNode* $tmp2943 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2943->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2943->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2943, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2940));
            return $tmp2943;
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
    org$pandalanguage$pandac$IRNode* base2948;
    panda$core$Bit $tmp2945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2945.value);
    panda$core$Int64 $tmp2946 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2946, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2947.value);
    panda$core$Object* $tmp2949 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2950 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2949));
    base2948 = $tmp2950;
    if (((panda$core$Bit) { base2948 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2951 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2948, p_p->position);
    return $tmp2951;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2953;
    panda$collections$Array* args2956;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2959;
    org$pandalanguage$pandac$IRNode* arg2974;
    panda$core$Bit $tmp2952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2952.value);
    panda$core$Object* $tmp2954 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2955 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2954));
    m2953 = $tmp2955;
    if (((panda$core$Bit) { m2953 != NULL }).value) {
    {
        panda$collections$Array* $tmp2957 = (panda$collections$Array*) malloc(40);
        $tmp2957->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2957->refCount.value = 1;
        panda$collections$Array$init($tmp2957);
        args2956 = $tmp2957;
        panda$core$Int64 $tmp2960 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2959, ((panda$core$Int64) { 1 }), $tmp2960, ((panda$core$Bit) { false }));
        int64_t $tmp2962 = $tmp2959.min.value;
        panda$core$Int64 i2961 = { $tmp2962 };
        int64_t $tmp2964 = $tmp2959.max.value;
        bool $tmp2965 = $tmp2959.inclusive.value;
        if ($tmp2965) goto $l2972; else goto $l2973;
        $l2972:;
        if ($tmp2962 <= $tmp2964) goto $l2966; else goto $l2968;
        $l2973:;
        if ($tmp2962 < $tmp2964) goto $l2966; else goto $l2968;
        $l2966:;
        {
            panda$core$Object* $tmp2975 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2961);
            org$pandalanguage$pandac$IRNode* $tmp2976 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2975));
            arg2974 = $tmp2976;
            if (((panda$core$Bit) { arg2974 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2956, ((panda$core$Object*) arg2974));
        }
        $l2969:;
        int64_t $tmp2978 = $tmp2964 - i2961.value;
        if ($tmp2965) goto $l2979; else goto $l2980;
        $l2979:;
        if ($tmp2978 >= 1) goto $l2977; else goto $l2968;
        $l2980:;
        if ($tmp2978 > 1) goto $l2977; else goto $l2968;
        $l2977:;
        i2961.value += 1;
        goto $l2966;
        $l2968:;
        org$pandalanguage$pandac$IRNode* $tmp2983 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2953, ((panda$collections$ListView*) args2956));
        return $tmp2983;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2987;
    org$pandalanguage$pandac$ClassDecl* cl2996;
    panda$core$String* name2998;
    org$pandalanguage$pandac$ClassDecl* cl3006;
    org$pandalanguage$pandac$Symbol* s3019;
    panda$core$Bit $tmp2984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2984.value);
    panda$core$Int64 $tmp2985 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2985, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2986.value);
    panda$core$Object* $tmp2988 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2989 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2988));
    base2987 = $tmp2989;
    if (((panda$core$Bit) { base2987 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2991 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2987->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2990 = $tmp2991.value;
    if (!$tmp2990) goto $l2992;
    panda$core$Bit $tmp2993 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2987->kind, ((panda$core$Int64) { 1024 }));
    $tmp2990 = $tmp2993.value;
    $l2992:;
    panda$core$Bit $tmp2994 = { $tmp2990 };
    if ($tmp2994.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2995 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2987);
        base2987 = $tmp2995;
    }
    }
    if (((panda$core$Bit) { base2987 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2987->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2997 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2987->payload));
            cl2996 = $tmp2997;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3000 = (($fn2999) base2987->payload->$class->vtable[0])(base2987->payload);
            panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, &$s3001);
            panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3002, p_d->payload);
            panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, &$s3004);
            name2998 = $tmp3005;
            org$pandalanguage$pandac$ClassDecl* $tmp3007 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2998);
            cl3006 = $tmp3007;
            if (((panda$core$Bit) { cl3006 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3008 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3008->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3008->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3010 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3011 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3006);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3008, ((panda$core$Int64) { 1001 }), p_d->position, $tmp3010, $tmp3011);
                return $tmp3008;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3012 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3012->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3012->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3014 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3012, ((panda$core$Int64) { 1037 }), p_d->position, $tmp3014, name2998);
            return $tmp3012;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3015 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3015));
            panda$core$Object* $tmp3016 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3017 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3016)->rawSuper);
            cl2996 = $tmp3017;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3018 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2987->type);
            cl2996 = $tmp3018;
        }
    }
    if (((panda$core$Bit) { cl2996 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3020 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2996);
    org$pandalanguage$pandac$Symbol* $tmp3021 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3020, ((panda$core$String*) p_d->payload));
    s3019 = $tmp3021;
    if (((panda$core$Bit) { s3019 == NULL }).value) {
    {
        panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3022, ((panda$core$Object*) base2987->type));
        panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3023, &$s3024);
        panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3026, p_d->payload);
        panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, &$s3028);
        panda$core$String* $tmp3030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, $tmp3029);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_d->position, $tmp3030);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3031 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2996);
    org$pandalanguage$pandac$IRNode* $tmp3032 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base2987, s3019, $tmp3031);
    return $tmp3032;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3034;
    panda$core$Bit $tmp3033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3033.value);
    org$pandalanguage$pandac$Symbol* $tmp3035 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3034 = $tmp3035;
    if (((panda$core$Bit) { s3034 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3036 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3034 = ((org$pandalanguage$pandac$Symbol*) $tmp3036);
    }
    }
    if (((panda$core$Bit) { s3034 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3037 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3034, self->symbolTable);
        return $tmp3037;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3038 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3038->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3038->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3040 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3038, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3040, ((panda$core$String*) p_i->payload));
    return $tmp3038;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3041;
    org$pandalanguage$pandac$Type* $tmp3042 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3043 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3042);
    resolved3041 = $tmp3043;
    if (((panda$core$Bit) { resolved3041 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3044 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3044->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3044->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3046 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3044, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3046, resolved3041);
    return $tmp3044;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3054;
    org$pandalanguage$pandac$IRNode* end3062;
    org$pandalanguage$pandac$IRNode* step3070;
    panda$collections$Array* children3077;
    org$pandalanguage$pandac$Position $tmp3085;
    panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3047 = $tmp3048.value;
    if ($tmp3047) goto $l3049;
    panda$core$Bit $tmp3050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3047 = $tmp3050.value;
    $l3049:;
    panda$core$Bit $tmp3051 = { $tmp3047 };
    PANDA_ASSERT($tmp3051.value);
    panda$core$Int64 $tmp3052 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3052, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3053.value);
    panda$core$Object* $tmp3055 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3055)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3056.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3057 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3057->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3057->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3059 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3057, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3059);
        start3054 = $tmp3057;
    }
    }
    else {
    {
        panda$core$Object* $tmp3060 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3061 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3060));
        start3054 = $tmp3061;
        if (((panda$core$Bit) { start3054 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3063 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3063)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3064.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3065 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3065->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3065->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3067 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3065, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3067);
        end3062 = $tmp3065;
    }
    }
    else {
    {
        panda$core$Object* $tmp3068 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3069 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3068));
        end3062 = $tmp3069;
        if (((panda$core$Bit) { end3062 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3071 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3071)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3072.value) {
    {
        step3070 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3073 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3074 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3073));
        org$pandalanguage$pandac$Type* $tmp3075 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3076 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3074, $tmp3075);
        step3070 = $tmp3076;
        if (((panda$core$Bit) { step3070 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3078 = (panda$collections$Array*) malloc(40);
    $tmp3078->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3078->refCount.value = 1;
    panda$collections$Array$init($tmp3078);
    children3077 = $tmp3078;
    panda$collections$Array$add$panda$collections$Array$T(children3077, ((panda$core$Object*) start3054));
    panda$collections$Array$add$panda$collections$Array$T(children3077, ((panda$core$Object*) end3062));
    if (((panda$core$Bit) { step3070 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3077, ((panda$core$Object*) step3070));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3080 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3080->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3080->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3082 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3082->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3082->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3085);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3082, &$s3084, ((panda$core$Int64) { 17 }), $tmp3085, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3080, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3082, ((panda$core$Object*) wrap_panda$core$Bit($tmp3086)), ((panda$collections$ListView*) children3077));
    return $tmp3080;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3087 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3087->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3087->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3089 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3087, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3089, ((panda$core$String*) p_s->payload));
    return $tmp3087;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3094;
    org$pandalanguage$pandac$ClassDecl* cl3095;
    panda$collections$Array* subtypes3102;
    panda$core$MutableString* name3106;
    panda$core$String* separator3110;
    panda$collections$Iterator* p$Iter3112;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3124;
    panda$collections$Array* pType3129;
    panda$core$String* pName3132;
    panda$core$Bit $tmp3090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3090.value);
    panda$core$Object* $tmp3091 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3092 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3091)->annotations);
    if ($tmp3092.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3093);
        return NULL;
    }
    }
    panda$core$Object* $tmp3096 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3095 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3096);
    ITable* $tmp3097 = ((panda$collections$CollectionView*) cl3095->parameters)->$class->itable;
    while ($tmp3097->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3097 = $tmp3097->next;
    }
    $fn3099 $tmp3098 = $tmp3097->methods[0];
    panda$core$Int64 $tmp3100 = $tmp3098(((panda$collections$CollectionView*) cl3095->parameters));
    panda$core$Bit $tmp3101 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3100, ((panda$core$Int64) { 0 }));
    if ($tmp3101.value) {
    {
        panda$collections$Array* $tmp3103 = (panda$collections$Array*) malloc(40);
        $tmp3103->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3103->refCount.value = 1;
        panda$collections$Array$init($tmp3103);
        subtypes3102 = $tmp3103;
        org$pandalanguage$pandac$Type* $tmp3105 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3095);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3102, ((panda$core$Object*) $tmp3105));
        panda$core$MutableString* $tmp3107 = (panda$core$MutableString*) malloc(40);
        $tmp3107->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3107->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3107, ((org$pandalanguage$pandac$Symbol*) cl3095)->name);
        name3106 = $tmp3107;
        panda$core$MutableString$append$panda$core$String(name3106, &$s3109);
        separator3110 = &$s3111;
        {
            ITable* $tmp3113 = ((panda$collections$Iterable*) cl3095->parameters)->$class->itable;
            while ($tmp3113->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3113 = $tmp3113->next;
            }
            $fn3115 $tmp3114 = $tmp3113->methods[0];
            panda$collections$Iterator* $tmp3116 = $tmp3114(((panda$collections$Iterable*) cl3095->parameters));
            p$Iter3112 = $tmp3116;
            $l3117:;
            ITable* $tmp3119 = p$Iter3112->$class->itable;
            while ($tmp3119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3119 = $tmp3119->next;
            }
            $fn3121 $tmp3120 = $tmp3119->methods[0];
            panda$core$Bit $tmp3122 = $tmp3120(p$Iter3112);
            panda$core$Bit $tmp3123 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3122);
            if (!$tmp3123.value) goto $l3118;
            {
                ITable* $tmp3125 = p$Iter3112->$class->itable;
                while ($tmp3125->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3125 = $tmp3125->next;
                }
                $fn3127 $tmp3126 = $tmp3125->methods[1];
                panda$core$Object* $tmp3128 = $tmp3126(p$Iter3112);
                p3124 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3128);
                panda$collections$Array* $tmp3130 = (panda$collections$Array*) malloc(40);
                $tmp3130->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3130->refCount.value = 1;
                panda$collections$Array$init($tmp3130);
                pType3129 = $tmp3130;
                panda$collections$Array$add$panda$collections$Array$T(pType3129, ((panda$core$Object*) p3124->bound));
                panda$core$String* $tmp3133 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3095)->name);
                panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3133, &$s3134);
                panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, ((org$pandalanguage$pandac$Symbol*) p3124)->name);
                panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3137);
                pName3132 = $tmp3138;
                panda$core$MutableString$append$panda$core$String(name3106, separator3110);
                panda$core$MutableString$append$panda$core$String(name3106, pName3132);
                org$pandalanguage$pandac$Type* $tmp3139 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3139->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3139->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3139, p3124);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3102, ((panda$core$Object*) $tmp3139));
                separator3110 = &$s3141;
            }
            goto $l3117;
            $l3118:;
        }
        panda$core$MutableString$append$panda$core$String(name3106, &$s3142);
        org$pandalanguage$pandac$Type* $tmp3143 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3143->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3143->refCount.value = 1;
        panda$core$String* $tmp3145 = panda$core$MutableString$finish$R$panda$core$String(name3106);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3143, $tmp3145, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3102), ((panda$core$Bit) { true }));
        type3094 = $tmp3143;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3146 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3095);
        type3094 = $tmp3146;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3147 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3147->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3147->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3147, ((panda$core$Int64) { 1025 }), p_s->position, type3094);
    return $tmp3147;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3153;
    panda$core$Bit $tmp3149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3149.value);
    panda$core$Object* $tmp3150 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3151 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3150)->annotations);
    if ($tmp3151.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3152);
        return NULL;
    }
    }
    panda$core$Object* $tmp3154 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3153 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3154);
    PANDA_ASSERT(cl3153->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3155 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3155->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3155->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3155, ((panda$core$Int64) { 1024 }), p_s->position, cl3153->rawSuper);
    return $tmp3155;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3160;
    org$pandalanguage$pandac$Type* type3163;
    panda$core$Bit $tmp3157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3157.value);
    panda$core$Int64 $tmp3158 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3158, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3159.value);
    panda$core$Object* $tmp3161 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3162 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3161));
    value3160 = $tmp3162;
    if (((panda$core$Bit) { value3160 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3164 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3165 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3164));
    org$pandalanguage$pandac$Type* $tmp3166 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3165);
    type3163 = $tmp3166;
    if (((panda$core$Bit) { type3163 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3167 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3160, type3163);
    if (((panda$core$Bit) { $tmp3167.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3168 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3160, type3163);
        return $tmp3168;
    }
    }
    panda$core$Bit $tmp3169 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3160, type3163);
    if ($tmp3169.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3170 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3160, p_c->position, ((panda$core$Bit) { true }), type3163);
        return $tmp3170;
    }
    }
    else {
    {
        panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3171, ((panda$core$Object*) value3160->type));
        panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, &$s3173);
        panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3175, ((panda$core$Object*) type3163));
        panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
        panda$core$String* $tmp3179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, $tmp3178);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3179);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3180.value);
    org$pandalanguage$pandac$IRNode* $tmp3181 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3181->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3181->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3183 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3181, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3183);
    return $tmp3181;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3188;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3184 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3184;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3185 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3185->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3185->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3187 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3185, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3187, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3185;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3189 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3188 = $tmp3189;
            bool $tmp3190 = ((panda$core$Bit) { result3188 != NULL }).value;
            if (!$tmp3190) goto $l3191;
            org$pandalanguage$pandac$Type* $tmp3192 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3193 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3188->type, $tmp3192);
            $tmp3190 = $tmp3193.value;
            $l3191:;
            panda$core$Bit $tmp3194 = { $tmp3190 };
            if ($tmp3194.value) {
            {
                panda$core$Bit $tmp3195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3188->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3195.value);
                panda$core$String* $tmp3196 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3188->payload)->value);
                panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, &$s3197);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3188->position, $tmp3198);
                return NULL;
            }
            }
            return result3188;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3199 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3199;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3200 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3200;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3201 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3201->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3201->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3203 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3201, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3203, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3201;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3204 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3204;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3205 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3205;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3206 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3206;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3207 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3207;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3208 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3208;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3209 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3209;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3210 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3210;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3211 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3211;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3213;
    panda$collections$Array* result3216;
    panda$collections$Iterator* stmt$Iter3219;
    org$pandalanguage$pandac$ASTNode* stmt3231;
    org$pandalanguage$pandac$IRNode* compiled3236;
    panda$core$Bit $tmp3212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3212.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3214 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3214->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3214->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3214, self->symbolTable);
    symbols3213 = $tmp3214;
    self->symbolTable = symbols3213;
    panda$collections$Array* $tmp3217 = (panda$collections$Array*) malloc(40);
    $tmp3217->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3217->refCount.value = 1;
    panda$collections$Array$init($tmp3217);
    result3216 = $tmp3217;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3220 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3220->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3220 = $tmp3220->next;
            }
            $fn3222 $tmp3221 = $tmp3220->methods[0];
            panda$collections$Iterator* $tmp3223 = $tmp3221(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3219 = $tmp3223;
            $l3224:;
            ITable* $tmp3226 = stmt$Iter3219->$class->itable;
            while ($tmp3226->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3226 = $tmp3226->next;
            }
            $fn3228 $tmp3227 = $tmp3226->methods[0];
            panda$core$Bit $tmp3229 = $tmp3227(stmt$Iter3219);
            panda$core$Bit $tmp3230 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3229);
            if (!$tmp3230.value) goto $l3225;
            {
                ITable* $tmp3232 = stmt$Iter3219->$class->itable;
                while ($tmp3232->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3232 = $tmp3232->next;
                }
                $fn3234 $tmp3233 = $tmp3232->methods[1];
                panda$core$Object* $tmp3235 = $tmp3233(stmt$Iter3219);
                stmt3231 = ((org$pandalanguage$pandac$ASTNode*) $tmp3235);
                org$pandalanguage$pandac$IRNode* $tmp3237 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3231);
                compiled3236 = $tmp3237;
                if (((panda$core$Bit) { compiled3236 == NULL }).value) {
                {
                    panda$core$Object* $tmp3238 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3213->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3238);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3239 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3236->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3239.value);
                panda$collections$Array$add$panda$collections$Array$T(result3216, ((panda$core$Object*) compiled3236));
            }
            goto $l3224;
            $l3225:;
        }
    }
    }
    panda$core$Object* $tmp3240 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3213->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3240);
    org$pandalanguage$pandac$IRNode* $tmp3241 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3241->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3241->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3241, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3216));
    return $tmp3241;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3251;
    org$pandalanguage$pandac$IRNode* ifTrue3256;
    panda$collections$Array* children3259;
    org$pandalanguage$pandac$IRNode* ifFalse3264;
    panda$core$Bit $tmp3243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3243.value);
    panda$core$Int64 $tmp3245 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3245, ((panda$core$Int64) { 2 }));
    bool $tmp3244 = $tmp3246.value;
    if ($tmp3244) goto $l3247;
    panda$core$Int64 $tmp3248 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3248, ((panda$core$Int64) { 3 }));
    $tmp3244 = $tmp3249.value;
    $l3247:;
    panda$core$Bit $tmp3250 = { $tmp3244 };
    PANDA_ASSERT($tmp3250.value);
    panda$core$Object* $tmp3252 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3253 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3252));
    org$pandalanguage$pandac$Type* $tmp3254 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3255 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3253, $tmp3254);
    test3251 = $tmp3255;
    if (((panda$core$Bit) { test3251 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3257 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3258 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3257));
    ifTrue3256 = $tmp3258;
    if (((panda$core$Bit) { ifTrue3256 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3260 = (panda$collections$Array*) malloc(40);
    $tmp3260->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3260->refCount.value = 1;
    panda$collections$Array$init($tmp3260);
    children3259 = $tmp3260;
    panda$collections$Array$add$panda$collections$Array$T(children3259, ((panda$core$Object*) test3251));
    panda$collections$Array$add$panda$collections$Array$T(children3259, ((panda$core$Object*) ifTrue3256));
    panda$core$Int64 $tmp3262 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3262, ((panda$core$Int64) { 3 }));
    if ($tmp3263.value) {
    {
        panda$core$Object* $tmp3265 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3266 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3265));
        ifFalse3264 = $tmp3266;
        if (((panda$core$Bit) { ifFalse3264 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3259, ((panda$core$Object*) ifFalse3264));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3267 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3267->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3267->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3267, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3259));
    return $tmp3267;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3269;
    org$pandalanguage$pandac$IRNode* list3270;
    org$pandalanguage$pandac$Type* t3282;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3315;
    org$pandalanguage$pandac$IRNode* body3317;
    panda$collections$Array* children3319;
    panda$core$Bit $tmp3273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3272 = $tmp3273.value;
    if (!$tmp3272) goto $l3274;
    $tmp3272 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3274:;
    panda$core$Bit $tmp3275 = { $tmp3272 };
    bool $tmp3271 = $tmp3275.value;
    if (!$tmp3271) goto $l3276;
    panda$core$Int64 $tmp3277 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3278 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3277, ((panda$core$Int64) { 0 }));
    $tmp3271 = $tmp3278.value;
    $l3276:;
    panda$core$Bit $tmp3279 = { $tmp3271 };
    if ($tmp3279.value) {
    {
        panda$core$Int64 $tmp3280 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3280, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3281.value);
        panda$core$Object* $tmp3283 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3284 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3283));
        org$pandalanguage$pandac$Type* $tmp3285 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3284);
        t3282 = $tmp3285;
        panda$core$Bit $tmp3286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3286.value) {
        {
            panda$core$Int64 $tmp3287 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3287, ((panda$core$Int64) { 2 }));
            if ($tmp3288.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3289 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3282);
                org$pandalanguage$pandac$IRNode* $tmp3290 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3289);
                list3270 = $tmp3290;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3291 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3291, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3292.value);
                org$pandalanguage$pandac$Type* $tmp3293 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3294 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3282, $tmp3293);
                org$pandalanguage$pandac$IRNode* $tmp3295 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3294);
                list3270 = $tmp3295;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3296 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3296.value) {
        {
            panda$core$Object* $tmp3297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3298 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3282, ((org$pandalanguage$pandac$Type*) $tmp3297));
            org$pandalanguage$pandac$IRNode* $tmp3299 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3298);
            list3270 = $tmp3299;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3300 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3282);
        panda$core$Int64$nullable $tmp3301 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3300);
        if (((panda$core$Bit) { $tmp3301.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3302 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3282);
            org$pandalanguage$pandac$IRNode* $tmp3303 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3302);
            list3270 = $tmp3303;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3304 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3305 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3282, $tmp3304);
            org$pandalanguage$pandac$IRNode* $tmp3306 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3305);
            list3270 = $tmp3306;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3307 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3270 = $tmp3307;
    }
    }
    if (((panda$core$Bit) { list3270 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3270->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3308.value) {
    {
        panda$core$Object* $tmp3309 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3270->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3309)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3310.value);
        panda$core$Object* $tmp3311 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3270->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3312 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3311)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3269 = ((org$pandalanguage$pandac$Type*) $tmp3312);
    }
    }
    else {
    {
        panda$core$Bit $tmp3313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3270->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3313.value);
        panda$core$Object* $tmp3314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3270->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3269 = ((org$pandalanguage$pandac$Type*) $tmp3314);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3316 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3269);
    target3315 = $tmp3316;
    if (((panda$core$Bit) { target3315 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3315->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3318 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3317 = $tmp3318;
    if (((panda$core$Bit) { body3317 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3320 = (panda$collections$Array*) malloc(40);
    $tmp3320->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3320->refCount.value = 1;
    panda$collections$Array$init($tmp3320);
    children3319 = $tmp3320;
    panda$collections$Array$add$panda$collections$Array$T(children3319, ((panda$core$Object*) target3315->target));
    panda$collections$Array$add$panda$collections$Array$T(children3319, ((panda$core$Object*) list3270));
    panda$collections$Array$add$panda$collections$Array$T(children3319, ((panda$core$Object*) body3317));
    org$pandalanguage$pandac$IRNode* $tmp3322 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3322->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3322->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3322, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3319));
    return $tmp3322;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3331;
    org$pandalanguage$pandac$Variable* targetVar3335;
    panda$collections$Array* subtypes3336;
    org$pandalanguage$pandac$Type* iterType3340;
    org$pandalanguage$pandac$Variable* iter3351;
    panda$collections$Array* statements3356;
    panda$collections$Array* declChildren3359;
    panda$collections$Array* varChildren3364;
    panda$collections$Array* whileChildren3371;
    org$pandalanguage$pandac$IRNode* done3374;
    org$pandalanguage$pandac$IRNode* notCall3381;
    panda$collections$Array* valueDeclChildren3386;
    org$pandalanguage$pandac$IRNode* next3391;
    panda$collections$Array* valueVarChildren3398;
    org$pandalanguage$pandac$IRNode* block3403;
    panda$collections$Array* blockChildren3405;
    panda$core$Bit $tmp3325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3324 = $tmp3325.value;
    if (!$tmp3324) goto $l3326;
    panda$core$Object* $tmp3327 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3328 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3329 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3327), $tmp3328);
    $tmp3324 = $tmp3329.value;
    $l3326:;
    panda$core$Bit $tmp3330 = { $tmp3324 };
    PANDA_ASSERT($tmp3330.value);
    panda$core$Object* $tmp3332 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3333 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3332));
    target3331 = $tmp3333;
    if (((panda$core$Bit) { target3331 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3331->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3334.value);
    targetVar3335 = ((org$pandalanguage$pandac$Variable*) target3331->target->payload);
    panda$collections$Array* $tmp3337 = (panda$collections$Array*) malloc(40);
    $tmp3337->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3337->refCount.value = 1;
    panda$collections$Array$init($tmp3337);
    subtypes3336 = $tmp3337;
    org$pandalanguage$pandac$Type* $tmp3339 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3336, ((panda$core$Object*) $tmp3339));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3336, ((panda$core$Object*) target3331->target->type));
    org$pandalanguage$pandac$Type* $tmp3341 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3341->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3341->refCount.value = 1;
    panda$core$Object* $tmp3343 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3336, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3344 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3343));
    panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, &$s3345);
    panda$core$Object* $tmp3347 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3336, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3346, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3347)));
    panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, &$s3349);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3341, $tmp3350, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3336), ((panda$core$Bit) { true }));
    iterType3340 = $tmp3341;
    org$pandalanguage$pandac$Variable* $tmp3352 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3352->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3352->refCount.value = 1;
    panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3335)->name, &$s3354);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3352, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3355, iterType3340);
    iter3351 = $tmp3352;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3351));
    panda$collections$Array* $tmp3357 = (panda$collections$Array*) malloc(40);
    $tmp3357->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3357->refCount.value = 1;
    panda$collections$Array$init($tmp3357);
    statements3356 = $tmp3357;
    panda$collections$Array* $tmp3360 = (panda$collections$Array*) malloc(40);
    $tmp3360->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3360->refCount.value = 1;
    panda$collections$Array$init($tmp3360);
    declChildren3359 = $tmp3360;
    org$pandalanguage$pandac$IRNode* $tmp3362 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3362->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3362->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3362, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3351->type, iter3351);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3359, ((panda$core$Object*) $tmp3362));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3359, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3365 = (panda$collections$Array*) malloc(40);
    $tmp3365->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3365->refCount.value = 1;
    panda$collections$Array$init($tmp3365);
    varChildren3364 = $tmp3365;
    org$pandalanguage$pandac$IRNode* $tmp3367 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3367->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3367->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3367, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3351)->position, ((panda$collections$ListView*) declChildren3359));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3364, ((panda$core$Object*) $tmp3367));
    org$pandalanguage$pandac$IRNode* $tmp3369 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3369->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3369->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3369, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3351)->position, ((panda$collections$ListView*) varChildren3364));
    panda$collections$Array$add$panda$collections$Array$T(statements3356, ((panda$core$Object*) $tmp3369));
    panda$collections$Array* $tmp3372 = (panda$collections$Array*) malloc(40);
    $tmp3372->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3372->refCount.value = 1;
    panda$collections$Array$init($tmp3372);
    whileChildren3371 = $tmp3372;
    org$pandalanguage$pandac$IRNode* $tmp3375 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3375->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3375->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3375, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3351)->position, iter3351->type, iter3351);
    panda$collections$Array* $tmp3378 = (panda$collections$Array*) malloc(40);
    $tmp3378->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3378->refCount.value = 1;
    panda$collections$Array$init($tmp3378);
    org$pandalanguage$pandac$IRNode* $tmp3380 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3375, &$s3377, ((panda$collections$ListView*) $tmp3378), NULL);
    done3374 = $tmp3380;
    if (((panda$core$Bit) { done3374 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3383 = (panda$collections$Array*) malloc(40);
    $tmp3383->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3383->refCount.value = 1;
    panda$collections$Array$init($tmp3383);
    org$pandalanguage$pandac$IRNode* $tmp3385 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3374, &$s3382, ((panda$collections$ListView*) $tmp3383), NULL);
    notCall3381 = $tmp3385;
    if (((panda$core$Bit) { notCall3381 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3371, ((panda$core$Object*) notCall3381));
    panda$collections$Array* $tmp3387 = (panda$collections$Array*) malloc(40);
    $tmp3387->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3387->refCount.value = 1;
    panda$collections$Array$init($tmp3387);
    valueDeclChildren3386 = $tmp3387;
    org$pandalanguage$pandac$IRNode* $tmp3389 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3389->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3389->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3389, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3335->type, targetVar3335);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3386, ((panda$core$Object*) $tmp3389));
    org$pandalanguage$pandac$IRNode* $tmp3392 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3392->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3392->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3392, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3351->type, iter3351);
    panda$collections$Array* $tmp3395 = (panda$collections$Array*) malloc(40);
    $tmp3395->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3395->refCount.value = 1;
    panda$collections$Array$init($tmp3395);
    org$pandalanguage$pandac$IRNode* $tmp3397 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3392, &$s3394, ((panda$collections$ListView*) $tmp3395), NULL);
    next3391 = $tmp3397;
    PANDA_ASSERT(((panda$core$Bit) { next3391 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3386, ((panda$core$Object*) next3391));
    panda$collections$Array* $tmp3399 = (panda$collections$Array*) malloc(40);
    $tmp3399->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3399->refCount.value = 1;
    panda$collections$Array$init($tmp3399);
    valueVarChildren3398 = $tmp3399;
    org$pandalanguage$pandac$IRNode* $tmp3401 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3401->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3401->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3401, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3386));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3398, ((panda$core$Object*) $tmp3401));
    org$pandalanguage$pandac$IRNode* $tmp3404 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3403 = $tmp3404;
    if (((panda$core$Bit) { block3403 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3406 = (panda$collections$Array*) malloc(40);
    $tmp3406->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3406->refCount.value = 1;
    panda$collections$Array$init($tmp3406);
    blockChildren3405 = $tmp3406;
    org$pandalanguage$pandac$IRNode* $tmp3408 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3408->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3408->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3408, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3398));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3405, ((panda$core$Object*) $tmp3408));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3405, ((panda$collections$CollectionView*) block3403->children));
    org$pandalanguage$pandac$IRNode* $tmp3410 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3410->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3410->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3410, ((panda$core$Int64) { 1000 }), block3403->position, ((panda$collections$ListView*) blockChildren3405));
    block3403 = $tmp3410;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3371, ((panda$core$Object*) block3403));
    org$pandalanguage$pandac$IRNode* $tmp3412 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3412->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3412->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3412, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3371));
    panda$collections$Array$add$panda$collections$Array$T(statements3356, ((panda$core$Object*) $tmp3412));
    org$pandalanguage$pandac$IRNode* $tmp3414 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3414->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3414->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3414, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3356));
    return $tmp3414;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3419;
    org$pandalanguage$pandac$SymbolTable* symbols3422;
    org$pandalanguage$pandac$IRNode* result3425;
    panda$core$Bit found3439;
    panda$collections$Iterator* intf$Iter3440;
    org$pandalanguage$pandac$Type* intf3453;
    org$pandalanguage$pandac$IRNode* iterator3465;
    org$pandalanguage$pandac$IRNode* iterable3477;
    org$pandalanguage$pandac$IRNode* iterator3479;
    panda$core$Bit $tmp3416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3416.value);
    panda$core$Int64 $tmp3417 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3417, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3418.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3420 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3421 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3420));
    list3419 = $tmp3421;
    if (((panda$core$Bit) { list3419 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3423 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3423->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3423->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3423, self->symbolTable);
    symbols3422 = $tmp3423;
    self->symbolTable = symbols3422;
    panda$core$Bit $tmp3428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3419->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3427 = $tmp3428.value;
    if ($tmp3427) goto $l3429;
    panda$core$Bit $tmp3430 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3419->type);
    $tmp3427 = $tmp3430.value;
    $l3429:;
    panda$core$Bit $tmp3431 = { $tmp3427 };
    bool $tmp3426 = $tmp3431.value;
    if ($tmp3426) goto $l3432;
    panda$core$Bit $tmp3433 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3419->type);
    $tmp3426 = $tmp3433.value;
    $l3432:;
    panda$core$Bit $tmp3434 = { $tmp3426 };
    if ($tmp3434.value) {
    {
        panda$core$Object* $tmp3435 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3436 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3437 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3435), list3419, ((org$pandalanguage$pandac$ASTNode*) $tmp3436));
        result3425 = $tmp3437;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3438 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3419);
        list3419 = $tmp3438;
        if (((panda$core$Bit) { list3419 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3439 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3441 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3419->type);
            ITable* $tmp3442 = ((panda$collections$Iterable*) $tmp3441)->$class->itable;
            while ($tmp3442->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3442 = $tmp3442->next;
            }
            $fn3444 $tmp3443 = $tmp3442->methods[0];
            panda$collections$Iterator* $tmp3445 = $tmp3443(((panda$collections$Iterable*) $tmp3441));
            intf$Iter3440 = $tmp3445;
            $l3446:;
            ITable* $tmp3448 = intf$Iter3440->$class->itable;
            while ($tmp3448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3448 = $tmp3448->next;
            }
            $fn3450 $tmp3449 = $tmp3448->methods[0];
            panda$core$Bit $tmp3451 = $tmp3449(intf$Iter3440);
            panda$core$Bit $tmp3452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3451);
            if (!$tmp3452.value) goto $l3447;
            {
                ITable* $tmp3454 = intf$Iter3440->$class->itable;
                while ($tmp3454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3454 = $tmp3454->next;
                }
                $fn3456 $tmp3455 = $tmp3454->methods[1];
                panda$core$Object* $tmp3457 = $tmp3455(intf$Iter3440);
                intf3453 = ((org$pandalanguage$pandac$Type*) $tmp3457);
                panda$core$Bit $tmp3459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3453->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3458 = $tmp3459.value;
                if (!$tmp3458) goto $l3460;
                panda$core$Object* $tmp3461 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3453->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3462 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3463 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3461), $tmp3462);
                $tmp3458 = $tmp3463.value;
                $l3460:;
                panda$core$Bit $tmp3464 = { $tmp3458 };
                if ($tmp3464.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3466 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3419, intf3453);
                    iterator3465 = $tmp3466;
                    panda$core$Object* $tmp3467 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3468 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3469 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3467), iterator3465, ((org$pandalanguage$pandac$ASTNode*) $tmp3468));
                    result3425 = $tmp3469;
                    found3439 = ((panda$core$Bit) { true });
                    goto $l3447;
                }
                }
                panda$core$Bit $tmp3471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3453->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3470 = $tmp3471.value;
                if (!$tmp3470) goto $l3472;
                panda$core$Object* $tmp3473 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3453->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3474 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3475 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3473), $tmp3474);
                $tmp3470 = $tmp3475.value;
                $l3472:;
                panda$core$Bit $tmp3476 = { $tmp3470 };
                if ($tmp3476.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3478 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3419, intf3453);
                    iterable3477 = $tmp3478;
                    panda$collections$Array* $tmp3481 = (panda$collections$Array*) malloc(40);
                    $tmp3481->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3481->refCount.value = 1;
                    panda$collections$Array$init($tmp3481);
                    org$pandalanguage$pandac$IRNode* $tmp3483 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3477, &$s3480, ((panda$collections$ListView*) $tmp3481));
                    iterator3479 = $tmp3483;
                    panda$core$Object* $tmp3484 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3485 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3486 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3484), iterator3479, ((org$pandalanguage$pandac$ASTNode*) $tmp3485));
                    result3425 = $tmp3486;
                    found3439 = ((panda$core$Bit) { true });
                    goto $l3447;
                }
                }
            }
            goto $l3446;
            $l3447:;
        }
        panda$core$Bit $tmp3487 = panda$core$Bit$$NOT$R$panda$core$Bit(found3439);
        if ($tmp3487.value) {
        {
            panda$core$String* $tmp3489 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3488, ((panda$core$Object*) list3419->type));
            panda$core$String* $tmp3491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3489, &$s3490);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3419->position, $tmp3491);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3492 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3422->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3492);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3425;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3496;
    org$pandalanguage$pandac$IRNode* stmt3501;
    panda$collections$Array* children3504;
    panda$core$Bit $tmp3493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3493.value);
    panda$core$Int64 $tmp3494 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3494, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3495.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3498 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3497));
    org$pandalanguage$pandac$Type* $tmp3499 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3500 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3498, $tmp3499);
    test3496 = $tmp3500;
    if (((panda$core$Bit) { test3496 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3502 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3503 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3502));
    stmt3501 = $tmp3503;
    if (((panda$core$Bit) { stmt3501 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3505 = (panda$collections$Array*) malloc(40);
    $tmp3505->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3505->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3505, ((panda$core$Int64) { 2 }));
    children3504 = $tmp3505;
    panda$collections$Array$add$panda$collections$Array$T(children3504, ((panda$core$Object*) test3496));
    panda$collections$Array$add$panda$collections$Array$T(children3504, ((panda$core$Object*) stmt3501));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3507 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3507->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3507->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3507, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3504));
    return $tmp3507;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3512;
    org$pandalanguage$pandac$IRNode* test3515;
    panda$collections$Array* children3520;
    panda$core$Bit $tmp3509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3509.value);
    panda$core$Int64 $tmp3510 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3510, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3511.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3513 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3514 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3513));
    stmt3512 = $tmp3514;
    if (((panda$core$Bit) { stmt3512 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3516 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3517 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3516));
    org$pandalanguage$pandac$Type* $tmp3518 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3519 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3517, $tmp3518);
    test3515 = $tmp3519;
    if (((panda$core$Bit) { test3515 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3521 = (panda$collections$Array*) malloc(40);
    $tmp3521->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3521->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3521, ((panda$core$Int64) { 2 }));
    children3520 = $tmp3521;
    panda$collections$Array$add$panda$collections$Array$T(children3520, ((panda$core$Object*) stmt3512));
    panda$collections$Array$add$panda$collections$Array$T(children3520, ((panda$core$Object*) test3515));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3523 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3523->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3523->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3523, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3520));
    return $tmp3523;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3528;
    panda$collections$Array* children3531;
    panda$core$Bit $tmp3525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3525.value);
    panda$core$Int64 $tmp3526 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3526, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3527.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3529 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3530 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3529));
    stmt3528 = $tmp3530;
    if (((panda$core$Bit) { stmt3528 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3532 = (panda$collections$Array*) malloc(40);
    $tmp3532->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3532->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3532, ((panda$core$Int64) { 1 }));
    children3531 = $tmp3532;
    panda$collections$Array$add$panda$collections$Array$T(children3531, ((panda$core$Object*) stmt3528));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3534 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3534->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3534->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3534, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3531));
    return $tmp3534;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3536;
    org$pandalanguage$pandac$Type* type3540;
    org$pandalanguage$pandac$Variable* v3556;
    value3536 = p_rawValue;
    bool $tmp3537 = ((panda$core$Bit) { value3536 == NULL }).value;
    if ($tmp3537) goto $l3538;
    $tmp3537 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3538:;
    panda$core$Bit $tmp3539 = { $tmp3537 };
    PANDA_ASSERT($tmp3539.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3541 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3541) goto $l3542;
            panda$core$Int64 $tmp3543 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3544 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3543, ((panda$core$Int64) { 0 }));
            $tmp3541 = $tmp3544.value;
            $l3542:;
            panda$core$Bit $tmp3545 = { $tmp3541 };
            if ($tmp3545.value) {
            {
                panda$core$Int64 $tmp3546 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3546, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3547.value);
                panda$core$Object* $tmp3548 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3549 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3548));
                org$pandalanguage$pandac$Type* $tmp3550 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3549);
                type3540 = $tmp3550;
            }
            }
            else {
            if (((panda$core$Bit) { value3536 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3551 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3536);
                value3536 = $tmp3551;
                if (((panda$core$Bit) { value3536 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3552 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3536);
                type3540 = $tmp3552;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3540 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3553);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3536 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3554 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3536, type3540);
                value3536 = $tmp3554;
                if (((panda$core$Bit) { value3536 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3555 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3536->type, type3540);
                PANDA_ASSERT($tmp3555.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3557 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3557->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3557->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3557, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3540);
            v3556 = $tmp3557;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3556));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3559 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3559->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3559->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3561 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3561->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3561->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3561, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3556)->position, v3556->type, v3556);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3559, $tmp3561, value3536);
            return $tmp3559;
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
    org$pandalanguage$pandac$IRNode* value3571;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3576;
    panda$collections$Array* children3579;
    org$pandalanguage$pandac$Variable* v3583;
    panda$core$Bit $tmp3563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3563.value);
    panda$core$Int64 $tmp3565 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3565, ((panda$core$Int64) { 1 }));
    bool $tmp3564 = $tmp3566.value;
    if ($tmp3564) goto $l3567;
    panda$core$Int64 $tmp3568 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3568, ((panda$core$Int64) { 2 }));
    $tmp3564 = $tmp3569.value;
    $l3567:;
    panda$core$Bit $tmp3570 = { $tmp3564 };
    PANDA_ASSERT($tmp3570.value);
    panda$core$Int64 $tmp3572 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3572, ((panda$core$Int64) { 2 }));
    if ($tmp3573.value) {
    {
        panda$core$Object* $tmp3574 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3575 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3574));
        value3571 = $tmp3575;
        if (((panda$core$Bit) { value3571 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3571 = NULL;
    }
    }
    panda$core$Object* $tmp3577 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3578 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3577), p_varKind, value3571, NULL);
    target3576 = $tmp3578;
    if (((panda$core$Bit) { target3576 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3580 = (panda$collections$Array*) malloc(40);
    $tmp3580->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3580->refCount.value = 1;
    panda$collections$Array$init($tmp3580);
    children3579 = $tmp3580;
    panda$collections$Array$add$panda$collections$Array$T(children3579, ((panda$core$Object*) target3576->target));
    if (((panda$core$Bit) { target3576->value != NULL }).value) {
    {
        panda$core$Bit $tmp3582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3576->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3582.value);
        v3583 = ((org$pandalanguage$pandac$Variable*) target3576->target->payload);
        v3583->initialValue = target3576->value;
        panda$collections$Array$add$panda$collections$Array$T(children3579, ((panda$core$Object*) target3576->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3584 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3584->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3584->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3584, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3579));
    return $tmp3584;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3587;
    panda$collections$Iterator* label$Iter3588;
    panda$core$String* label3600;
    panda$core$Bit $tmp3586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3586.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3587 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3589 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3589->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3589 = $tmp3589->next;
            }
            $fn3591 $tmp3590 = $tmp3589->methods[0];
            panda$collections$Iterator* $tmp3592 = $tmp3590(((panda$collections$Iterable*) self->loops));
            label$Iter3588 = $tmp3592;
            $l3593:;
            ITable* $tmp3595 = label$Iter3588->$class->itable;
            while ($tmp3595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3595 = $tmp3595->next;
            }
            $fn3597 $tmp3596 = $tmp3595->methods[0];
            panda$core$Bit $tmp3598 = $tmp3596(label$Iter3588);
            panda$core$Bit $tmp3599 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3598);
            if (!$tmp3599.value) goto $l3594;
            {
                ITable* $tmp3601 = label$Iter3588->$class->itable;
                while ($tmp3601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3601 = $tmp3601->next;
                }
                $fn3603 $tmp3602 = $tmp3601->methods[1];
                panda$core$Object* $tmp3604 = $tmp3602(label$Iter3588);
                label3600 = ((panda$core$String*) $tmp3604);
                bool $tmp3605 = ((panda$core$Bit) { label3600 != NULL }).value;
                if (!$tmp3605) goto $l3606;
                panda$core$Bit $tmp3607 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3600, ((panda$core$String*) p_b->payload));
                $tmp3605 = $tmp3607.value;
                $l3606:;
                panda$core$Bit $tmp3608 = { $tmp3605 };
                if ($tmp3608.value) {
                {
                    found3587 = ((panda$core$Bit) { true });
                    goto $l3594;
                }
                }
            }
            goto $l3593;
            $l3594:;
        }
        panda$core$Bit $tmp3609 = panda$core$Bit$$NOT$R$panda$core$Bit(found3587);
        if ($tmp3609.value) {
        {
            panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3610, p_b->payload);
            panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, &$s3612);
            panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3614, p_b->payload);
            panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, &$s3616);
            panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, $tmp3617);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3618);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3619 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3619, ((panda$core$Int64) { 0 }));
    if ($tmp3620.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3621);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3622 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3622->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3622->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3622, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3622;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3625;
    panda$collections$Iterator* label$Iter3626;
    panda$core$String* label3638;
    panda$core$Bit $tmp3624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3624.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3625 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3627 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3627->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3627 = $tmp3627->next;
            }
            $fn3629 $tmp3628 = $tmp3627->methods[0];
            panda$collections$Iterator* $tmp3630 = $tmp3628(((panda$collections$Iterable*) self->loops));
            label$Iter3626 = $tmp3630;
            $l3631:;
            ITable* $tmp3633 = label$Iter3626->$class->itable;
            while ($tmp3633->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3633 = $tmp3633->next;
            }
            $fn3635 $tmp3634 = $tmp3633->methods[0];
            panda$core$Bit $tmp3636 = $tmp3634(label$Iter3626);
            panda$core$Bit $tmp3637 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3636);
            if (!$tmp3637.value) goto $l3632;
            {
                ITable* $tmp3639 = label$Iter3626->$class->itable;
                while ($tmp3639->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3639 = $tmp3639->next;
                }
                $fn3641 $tmp3640 = $tmp3639->methods[1];
                panda$core$Object* $tmp3642 = $tmp3640(label$Iter3626);
                label3638 = ((panda$core$String*) $tmp3642);
                bool $tmp3643 = ((panda$core$Bit) { label3638 != NULL }).value;
                if (!$tmp3643) goto $l3644;
                panda$core$Bit $tmp3645 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3638, ((panda$core$String*) p_c->payload));
                $tmp3643 = $tmp3645.value;
                $l3644:;
                panda$core$Bit $tmp3646 = { $tmp3643 };
                if ($tmp3646.value) {
                {
                    found3625 = ((panda$core$Bit) { true });
                    goto $l3632;
                }
                }
            }
            goto $l3631;
            $l3632:;
        }
        panda$core$Bit $tmp3647 = panda$core$Bit$$NOT$R$panda$core$Bit(found3625);
        if ($tmp3647.value) {
        {
            panda$core$String* $tmp3649 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3648, p_c->payload);
            panda$core$String* $tmp3651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3649, &$s3650);
            panda$core$String* $tmp3653 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3652, p_c->payload);
            panda$core$String* $tmp3655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3653, &$s3654);
            panda$core$String* $tmp3656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3651, $tmp3655);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3656);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3657 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3657, ((panda$core$Int64) { 0 }));
    if ($tmp3658.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3659);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3660 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3660->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3660->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3660, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3660;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3674;
    panda$collections$Array* children3679;
    panda$core$Bit $tmp3662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3662.value);
    bool $tmp3663 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3663) goto $l3664;
    panda$core$Int64 $tmp3665 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3666 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3665, ((panda$core$Int64) { 0 }));
    $tmp3663 = $tmp3666.value;
    $l3664:;
    panda$core$Bit $tmp3667 = { $tmp3663 };
    if ($tmp3667.value) {
    {
        panda$core$Int64 $tmp3668 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3668, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3669.value);
        panda$core$Object* $tmp3670 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3671 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3672 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3670)->returnType, $tmp3671);
        if ($tmp3672.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3673);
            return NULL;
        }
        }
        panda$core$Object* $tmp3675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3676 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3675));
        panda$core$Object* $tmp3677 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3678 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3676, ((org$pandalanguage$pandac$MethodDecl*) $tmp3677)->returnType);
        value3674 = $tmp3678;
        if (((panda$core$Bit) { value3674 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3680 = (panda$collections$Array*) malloc(40);
        $tmp3680->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3680->refCount.value = 1;
        panda$collections$Array$init($tmp3680);
        children3679 = $tmp3680;
        panda$collections$Array$add$panda$collections$Array$T(children3679, ((panda$core$Object*) value3674));
        org$pandalanguage$pandac$IRNode* $tmp3682 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3682->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3682->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3682, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3679));
        return $tmp3682;
    }
    }
    panda$core$Object* $tmp3684 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3685 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3686 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3684)->returnType, $tmp3685);
    if ($tmp3686.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3687);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3688 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3688->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3688->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3688, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3688;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3698;
    org$pandalanguage$pandac$ClassDecl* bit3703;
    org$pandalanguage$pandac$Symbol* value3706;
    panda$collections$Array* fieldChildren3709;
    panda$collections$Array* children3715;
    org$pandalanguage$pandac$IRNode* msg3720;
    panda$core$Bit $tmp3690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3690.value);
    panda$core$Int64 $tmp3692 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3692, ((panda$core$Int64) { 1 }));
    bool $tmp3691 = $tmp3693.value;
    if ($tmp3691) goto $l3694;
    panda$core$Int64 $tmp3695 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3695, ((panda$core$Int64) { 2 }));
    $tmp3691 = $tmp3696.value;
    $l3694:;
    panda$core$Bit $tmp3697 = { $tmp3691 };
    PANDA_ASSERT($tmp3697.value);
    panda$core$Object* $tmp3699 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3700 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3699));
    test3698 = $tmp3700;
    if (((panda$core$Bit) { test3698 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3701 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3702 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3698, $tmp3701);
    test3698 = $tmp3702;
    if (((panda$core$Bit) { test3698 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3704 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3705 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3704);
    bit3703 = $tmp3705;
    PANDA_ASSERT(((panda$core$Bit) { bit3703 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3708 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3703->symbolTable, &$s3707);
    value3706 = $tmp3708;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3706));
    panda$collections$Array* $tmp3710 = (panda$collections$Array*) malloc(40);
    $tmp3710->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3710->refCount.value = 1;
    panda$collections$Array$init($tmp3710);
    fieldChildren3709 = $tmp3710;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3709, ((panda$core$Object*) test3698));
    org$pandalanguage$pandac$IRNode* $tmp3712 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3712->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3712->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3714 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3712, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3714, ((panda$core$Object*) value3706), ((panda$collections$ListView*) fieldChildren3709));
    test3698 = $tmp3712;
    panda$collections$Array* $tmp3716 = (panda$collections$Array*) malloc(40);
    $tmp3716->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3716->refCount.value = 1;
    panda$collections$Array$init($tmp3716);
    children3715 = $tmp3716;
    panda$collections$Array$add$panda$collections$Array$T(children3715, ((panda$core$Object*) test3698));
    panda$core$Int64 $tmp3718 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3718, ((panda$core$Int64) { 2 }));
    if ($tmp3719.value) {
    {
        panda$core$Object* $tmp3721 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3722 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3721));
        msg3720 = $tmp3722;
        if (((panda$core$Bit) { msg3720 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3723 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3724 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3720, $tmp3723);
        msg3720 = $tmp3724;
        if (((panda$core$Bit) { msg3720 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3715, ((panda$core$Object*) msg3720));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3725 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3725->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3725->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3725, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3715));
    return $tmp3725;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3740;
    panda$core$Int64 varKind3741;
    panda$collections$Array* decls3742;
    panda$collections$Iterator* astDecl$Iter3745;
    org$pandalanguage$pandac$ASTNode* astDecl3757;
    org$pandalanguage$pandac$IRNode* decl3762;
    panda$core$Bit $tmp3730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3729 = $tmp3730.value;
    if ($tmp3729) goto $l3731;
    panda$core$Bit $tmp3732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3729 = $tmp3732.value;
    $l3731:;
    panda$core$Bit $tmp3733 = { $tmp3729 };
    bool $tmp3728 = $tmp3733.value;
    if ($tmp3728) goto $l3734;
    panda$core$Bit $tmp3735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3728 = $tmp3735.value;
    $l3734:;
    panda$core$Bit $tmp3736 = { $tmp3728 };
    bool $tmp3727 = $tmp3736.value;
    if ($tmp3727) goto $l3737;
    panda$core$Bit $tmp3738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3727 = $tmp3738.value;
    $l3737:;
    panda$core$Bit $tmp3739 = { $tmp3727 };
    PANDA_ASSERT($tmp3739.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3740 = ((panda$core$Int64) { 1017 });
            varKind3741 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3740 = ((panda$core$Int64) { 1018 });
            varKind3741 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3740 = ((panda$core$Int64) { 1019 });
            varKind3741 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3740 = ((panda$core$Int64) { 1020 });
            varKind3741 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3743 = (panda$collections$Array*) malloc(40);
    $tmp3743->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3743->refCount.value = 1;
    panda$collections$Array$init($tmp3743);
    decls3742 = $tmp3743;
    {
        ITable* $tmp3746 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3746->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3746 = $tmp3746->next;
        }
        $fn3748 $tmp3747 = $tmp3746->methods[0];
        panda$collections$Iterator* $tmp3749 = $tmp3747(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3745 = $tmp3749;
        $l3750:;
        ITable* $tmp3752 = astDecl$Iter3745->$class->itable;
        while ($tmp3752->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3752 = $tmp3752->next;
        }
        $fn3754 $tmp3753 = $tmp3752->methods[0];
        panda$core$Bit $tmp3755 = $tmp3753(astDecl$Iter3745);
        panda$core$Bit $tmp3756 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3755);
        if (!$tmp3756.value) goto $l3751;
        {
            ITable* $tmp3758 = astDecl$Iter3745->$class->itable;
            while ($tmp3758->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3758 = $tmp3758->next;
            }
            $fn3760 $tmp3759 = $tmp3758->methods[1];
            panda$core$Object* $tmp3761 = $tmp3759(astDecl$Iter3745);
            astDecl3757 = ((org$pandalanguage$pandac$ASTNode*) $tmp3761);
            org$pandalanguage$pandac$IRNode* $tmp3763 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3757, varKind3741);
            decl3762 = $tmp3763;
            if (((panda$core$Bit) { decl3762 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3742, ((panda$core$Object*) decl3762));
        }
        goto $l3750;
        $l3751:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3764 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3764->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3764->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3764, nodeKind3740, p_v->position, ((panda$collections$ListView*) decls3742));
    return $tmp3764;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3766;
    panda$collections$Array* callChildren3769;
    org$pandalanguage$pandac$IRNode* testValue3772;
    org$pandalanguage$pandac$IRNode* $tmp3767 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3767->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3767->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3767, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3766 = $tmp3767;
    panda$collections$Array* $tmp3770 = (panda$collections$Array*) malloc(40);
    $tmp3770->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3770->refCount.value = 1;
    panda$collections$Array$init($tmp3770);
    callChildren3769 = $tmp3770;
    org$pandalanguage$pandac$IRNode* $tmp3773 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3772 = $tmp3773;
    if (((panda$core$Bit) { testValue3772 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3769, ((panda$core$Object*) testValue3772));
    org$pandalanguage$pandac$IRNode* $tmp3775 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3766, &$s3774, ((panda$collections$ListView*) callChildren3769));
    return $tmp3775;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3784;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3788;
    org$pandalanguage$pandac$IRNode* nextTest3804;
    panda$collections$Array* callChildren3808;
    panda$collections$Array* statements3821;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3824;
    org$pandalanguage$pandac$IRNode* statement3839;
    panda$collections$Array* children3849;
    panda$core$Bit $tmp3776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3776.value);
    panda$core$Int64 $tmp3777 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3778 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3777, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3778.value);
    panda$core$Object* $tmp3779 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3779)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3780.value);
    panda$core$Object* $tmp3781 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3782 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3781)->children);
    panda$core$Bit $tmp3783 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3782, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3783.value);
    panda$core$Object* $tmp3785 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3786 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3785)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3787 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3786));
    test3784 = $tmp3787;
    if (((panda$core$Bit) { test3784 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3789 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3790 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3789)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3788, ((panda$core$Int64) { 1 }), $tmp3790, ((panda$core$Bit) { false }));
    int64_t $tmp3792 = $tmp3788.min.value;
    panda$core$Int64 i3791 = { $tmp3792 };
    int64_t $tmp3794 = $tmp3788.max.value;
    bool $tmp3795 = $tmp3788.inclusive.value;
    if ($tmp3795) goto $l3802; else goto $l3803;
    $l3802:;
    if ($tmp3792 <= $tmp3794) goto $l3796; else goto $l3798;
    $l3803:;
    if ($tmp3792 < $tmp3794) goto $l3796; else goto $l3798;
    $l3796:;
    {
        panda$core$Object* $tmp3805 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3806 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3805)->children, i3791);
        org$pandalanguage$pandac$IRNode* $tmp3807 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3806));
        nextTest3804 = $tmp3807;
        if (((panda$core$Bit) { nextTest3804 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3809 = (panda$collections$Array*) malloc(40);
        $tmp3809->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3809->refCount.value = 1;
        panda$collections$Array$init($tmp3809);
        callChildren3808 = $tmp3809;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3808, ((panda$core$Object*) nextTest3804));
        org$pandalanguage$pandac$IRNode* $tmp3812 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3784, &$s3811, ((panda$collections$ListView*) callChildren3808));
        test3784 = $tmp3812;
        if (((panda$core$Bit) { test3784 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3799:;
    int64_t $tmp3814 = $tmp3794 - i3791.value;
    if ($tmp3795) goto $l3815; else goto $l3816;
    $l3815:;
    if ($tmp3814 >= 1) goto $l3813; else goto $l3798;
    $l3816:;
    if ($tmp3814 > 1) goto $l3813; else goto $l3798;
    $l3813:;
    i3791.value += 1;
    goto $l3796;
    $l3798:;
    org$pandalanguage$pandac$SymbolTable* $tmp3819 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3819->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3819->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3819, self->symbolTable);
    self->symbolTable = $tmp3819;
    panda$collections$Array* $tmp3822 = (panda$collections$Array*) malloc(40);
    $tmp3822->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3822->refCount.value = 1;
    panda$collections$Array$init($tmp3822);
    statements3821 = $tmp3822;
    panda$core$Int64 $tmp3825 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3824, ((panda$core$Int64) { 1 }), $tmp3825, ((panda$core$Bit) { false }));
    int64_t $tmp3827 = $tmp3824.min.value;
    panda$core$Int64 i3826 = { $tmp3827 };
    int64_t $tmp3829 = $tmp3824.max.value;
    bool $tmp3830 = $tmp3824.inclusive.value;
    if ($tmp3830) goto $l3837; else goto $l3838;
    $l3837:;
    if ($tmp3827 <= $tmp3829) goto $l3831; else goto $l3833;
    $l3838:;
    if ($tmp3827 < $tmp3829) goto $l3831; else goto $l3833;
    $l3831:;
    {
        panda$core$Object* $tmp3840 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3826);
        org$pandalanguage$pandac$IRNode* $tmp3841 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3840));
        statement3839 = $tmp3841;
        if (((panda$core$Bit) { statement3839 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3821, ((panda$core$Object*) statement3839));
    }
    $l3834:;
    int64_t $tmp3843 = $tmp3829 - i3826.value;
    if ($tmp3830) goto $l3844; else goto $l3845;
    $l3844:;
    if ($tmp3843 >= 1) goto $l3842; else goto $l3833;
    $l3845:;
    if ($tmp3843 > 1) goto $l3842; else goto $l3833;
    $l3842:;
    i3826.value += 1;
    goto $l3831;
    $l3833:;
    panda$core$Object* $tmp3848 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3848);
    panda$collections$Array* $tmp3850 = (panda$collections$Array*) malloc(40);
    $tmp3850->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3850->refCount.value = 1;
    panda$collections$Array$init($tmp3850);
    children3849 = $tmp3850;
    panda$collections$Array$add$panda$collections$Array$T(children3849, ((panda$core$Object*) test3784));
    org$pandalanguage$pandac$IRNode* $tmp3852 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3852->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3852->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3852, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3821));
    panda$collections$Array$add$panda$collections$Array$T(children3849, ((panda$core$Object*) $tmp3852));
    org$pandalanguage$pandac$IRNode* $tmp3854 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3854->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3854->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3854, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3849));
    return $tmp3854;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3856;
    org$pandalanguage$pandac$Variable* valueVar3859;
    panda$collections$Array* declChildren3869;
    panda$collections$Array* varChildren3874;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3881;
    org$pandalanguage$pandac$ASTNode* c3896;
    org$pandalanguage$pandac$IRNode* w3898;
    panda$collections$Array* statements3900;
    panda$collections$Iterator* astStatement$Iter3903;
    org$pandalanguage$pandac$ASTNode* astStatement3915;
    org$pandalanguage$pandac$IRNode* stmt3920;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp3930;
    panda$collections$Array* $tmp3857 = (panda$collections$Array*) malloc(40);
    $tmp3857->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3857->refCount.value = 1;
    panda$collections$Array$init($tmp3857);
    children3856 = $tmp3857;
    org$pandalanguage$pandac$Variable* $tmp3860 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3860->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3860->refCount.value = 1;
    panda$core$String* $tmp3863 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3862, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3863, &$s3864);
    panda$core$String* $tmp3866 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3865, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3866, &$s3867);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3860, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3868, p_value->type);
    valueVar3859 = $tmp3860;
    panda$collections$Array* $tmp3870 = (panda$collections$Array*) malloc(40);
    $tmp3870->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3870->refCount.value = 1;
    panda$collections$Array$init($tmp3870);
    declChildren3869 = $tmp3870;
    org$pandalanguage$pandac$IRNode* $tmp3872 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3872->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3872->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3872, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3859->type, valueVar3859);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3869, ((panda$core$Object*) $tmp3872));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3869, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3875 = (panda$collections$Array*) malloc(40);
    $tmp3875->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3875->refCount.value = 1;
    panda$collections$Array$init($tmp3875);
    varChildren3874 = $tmp3875;
    org$pandalanguage$pandac$IRNode* $tmp3877 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3877->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3877->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3877, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3859)->position, ((panda$collections$ListView*) declChildren3869));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3874, ((panda$core$Object*) $tmp3877));
    org$pandalanguage$pandac$IRNode* $tmp3879 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3879->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3879->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3879, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3859)->position, ((panda$collections$ListView*) varChildren3874));
    panda$collections$Array$add$panda$collections$Array$T(children3856, ((panda$core$Object*) $tmp3879));
    panda$core$Int64 $tmp3882 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3881, ((panda$core$Int64) { 1 }), $tmp3882, ((panda$core$Bit) { false }));
    int64_t $tmp3884 = $tmp3881.min.value;
    panda$core$Int64 i3883 = { $tmp3884 };
    int64_t $tmp3886 = $tmp3881.max.value;
    bool $tmp3887 = $tmp3881.inclusive.value;
    if ($tmp3887) goto $l3894; else goto $l3895;
    $l3894:;
    if ($tmp3884 <= $tmp3886) goto $l3888; else goto $l3890;
    $l3895:;
    if ($tmp3884 < $tmp3886) goto $l3888; else goto $l3890;
    $l3888:;
    {
        panda$core$Object* $tmp3897 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3883);
        c3896 = ((org$pandalanguage$pandac$ASTNode*) $tmp3897);
        switch (c3896->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3899 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3859, c3896);
                w3898 = $tmp3899;
                if (((panda$core$Bit) { w3898 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3856, ((panda$core$Object*) w3898));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3901 = (panda$collections$Array*) malloc(40);
                $tmp3901->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3901->refCount.value = 1;
                panda$collections$Array$init($tmp3901);
                statements3900 = $tmp3901;
                {
                    ITable* $tmp3904 = ((panda$collections$Iterable*) c3896->children)->$class->itable;
                    while ($tmp3904->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3904 = $tmp3904->next;
                    }
                    $fn3906 $tmp3905 = $tmp3904->methods[0];
                    panda$collections$Iterator* $tmp3907 = $tmp3905(((panda$collections$Iterable*) c3896->children));
                    astStatement$Iter3903 = $tmp3907;
                    $l3908:;
                    ITable* $tmp3910 = astStatement$Iter3903->$class->itable;
                    while ($tmp3910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3910 = $tmp3910->next;
                    }
                    $fn3912 $tmp3911 = $tmp3910->methods[0];
                    panda$core$Bit $tmp3913 = $tmp3911(astStatement$Iter3903);
                    panda$core$Bit $tmp3914 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3913);
                    if (!$tmp3914.value) goto $l3909;
                    {
                        ITable* $tmp3916 = astStatement$Iter3903->$class->itable;
                        while ($tmp3916->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3916 = $tmp3916->next;
                        }
                        $fn3918 $tmp3917 = $tmp3916->methods[1];
                        panda$core$Object* $tmp3919 = $tmp3917(astStatement$Iter3903);
                        astStatement3915 = ((org$pandalanguage$pandac$ASTNode*) $tmp3919);
                        org$pandalanguage$pandac$IRNode* $tmp3921 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3915);
                        stmt3920 = $tmp3921;
                        if (((panda$core$Bit) { stmt3920 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3900, ((panda$core$Object*) stmt3920));
                    }
                    goto $l3908;
                    $l3909:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3922 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3922->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3922->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3922, ((panda$core$Int64) { 1000 }), c3896->position, ((panda$collections$ListView*) statements3900));
                panda$collections$Array$add$panda$collections$Array$T(children3856, ((panda$core$Object*) $tmp3922));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3891:;
    int64_t $tmp3925 = $tmp3886 - i3883.value;
    if ($tmp3887) goto $l3926; else goto $l3927;
    $l3926:;
    if ($tmp3925 >= 1) goto $l3924; else goto $l3890;
    $l3927:;
    if ($tmp3925 > 1) goto $l3924; else goto $l3890;
    $l3924:;
    i3883.value += 1;
    goto $l3888;
    $l3890:;
    panda$core$Int64 $tmp3931 = panda$collections$Array$get_count$R$panda$core$Int64(children3856);
    panda$core$Int64 $tmp3932 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3931, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3930, $tmp3932, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp3934 = $tmp3930.start.value;
    panda$core$Int64 i3933 = { $tmp3934 };
    int64_t $tmp3936 = $tmp3930.end.value;
    int64_t $tmp3937 = $tmp3930.step.value;
    bool $tmp3938 = $tmp3930.inclusive.value;
    bool $tmp3945 = $tmp3937 > 0;
    if ($tmp3945) goto $l3943; else goto $l3944;
    $l3943:;
    if ($tmp3938) goto $l3946; else goto $l3947;
    $l3946:;
    if ($tmp3934 <= $tmp3936) goto $l3939; else goto $l3941;
    $l3947:;
    if ($tmp3934 < $tmp3936) goto $l3939; else goto $l3941;
    $l3944:;
    if ($tmp3938) goto $l3948; else goto $l3949;
    $l3948:;
    if ($tmp3934 >= $tmp3936) goto $l3939; else goto $l3941;
    $l3949:;
    if ($tmp3934 > $tmp3936) goto $l3939; else goto $l3941;
    $l3939:;
    {
        panda$core$Int64 $tmp3951 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3933, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3952 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3856, $tmp3951);
        panda$core$Bit $tmp3953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3952)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3953.value);
        panda$core$Int64 $tmp3954 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3933, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3955 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3856, $tmp3954);
        panda$core$Int64 $tmp3956 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3955)->children);
        panda$core$Bit $tmp3957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3956, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3957.value);
        panda$core$Int64 $tmp3958 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3933, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3959 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3856, $tmp3958);
        panda$core$Object* $tmp3960 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3856, i3933);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3959)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3960)));
        panda$core$Int64 $tmp3961 = panda$collections$Array$get_count$R$panda$core$Int64(children3856);
        panda$core$Int64 $tmp3962 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3961, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3856, $tmp3962);
    }
    $l3942:;
    if ($tmp3945) goto $l3964; else goto $l3965;
    $l3964:;
    int64_t $tmp3966 = $tmp3936 - i3933.value;
    if ($tmp3938) goto $l3967; else goto $l3968;
    $l3967:;
    if ($tmp3966 >= $tmp3937) goto $l3963; else goto $l3941;
    $l3968:;
    if ($tmp3966 > $tmp3937) goto $l3963; else goto $l3941;
    $l3965:;
    int64_t $tmp3970 = i3933.value - $tmp3936;
    if ($tmp3938) goto $l3971; else goto $l3972;
    $l3971:;
    if ($tmp3970 >= -$tmp3937) goto $l3963; else goto $l3941;
    $l3972:;
    if ($tmp3970 > -$tmp3937) goto $l3963; else goto $l3941;
    $l3963:;
    i3933.value += $tmp3937;
    goto $l3939;
    $l3941:;
    org$pandalanguage$pandac$IRNode* $tmp3974 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3974->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3974->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3974, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3856));
    return $tmp3974;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3984;
    panda$collections$Iterator* expr$Iter3987;
    org$pandalanguage$pandac$ASTNode* expr4000;
    org$pandalanguage$pandac$IRNode* compiled4005;
    panda$collections$Array* statements4010;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4013;
    org$pandalanguage$pandac$IRNode* statement4028;
    panda$core$Bit $tmp3976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3976.value);
    panda$core$Int64 $tmp3977 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3978 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3977, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3978.value);
    panda$core$Object* $tmp3979 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3979)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3980.value);
    panda$core$Object* $tmp3981 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3982 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3981)->children);
    panda$core$Bit $tmp3983 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3982, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3983.value);
    panda$collections$Array* $tmp3985 = (panda$collections$Array*) malloc(40);
    $tmp3985->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3985->refCount.value = 1;
    panda$collections$Array$init($tmp3985);
    children3984 = $tmp3985;
    {
        panda$core$Object* $tmp3988 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3989 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3988)->children)->$class->itable;
        while ($tmp3989->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3989 = $tmp3989->next;
        }
        $fn3991 $tmp3990 = $tmp3989->methods[0];
        panda$collections$Iterator* $tmp3992 = $tmp3990(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3988)->children));
        expr$Iter3987 = $tmp3992;
        $l3993:;
        ITable* $tmp3995 = expr$Iter3987->$class->itable;
        while ($tmp3995->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3995 = $tmp3995->next;
        }
        $fn3997 $tmp3996 = $tmp3995->methods[0];
        panda$core$Bit $tmp3998 = $tmp3996(expr$Iter3987);
        panda$core$Bit $tmp3999 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3998);
        if (!$tmp3999.value) goto $l3994;
        {
            ITable* $tmp4001 = expr$Iter3987->$class->itable;
            while ($tmp4001->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4001 = $tmp4001->next;
            }
            $fn4003 $tmp4002 = $tmp4001->methods[1];
            panda$core$Object* $tmp4004 = $tmp4002(expr$Iter3987);
            expr4000 = ((org$pandalanguage$pandac$ASTNode*) $tmp4004);
            org$pandalanguage$pandac$IRNode* $tmp4006 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4000);
            org$pandalanguage$pandac$IRNode* $tmp4007 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4006, p_type);
            compiled4005 = $tmp4007;
            if (((panda$core$Bit) { compiled4005 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3984, ((panda$core$Object*) compiled4005));
        }
        goto $l3993;
        $l3994:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4008 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4008->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4008->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4008, self->symbolTable);
    self->symbolTable = $tmp4008;
    panda$collections$Array* $tmp4011 = (panda$collections$Array*) malloc(40);
    $tmp4011->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4011->refCount.value = 1;
    panda$collections$Array$init($tmp4011);
    statements4010 = $tmp4011;
    panda$core$Int64 $tmp4014 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4013, ((panda$core$Int64) { 1 }), $tmp4014, ((panda$core$Bit) { false }));
    int64_t $tmp4016 = $tmp4013.min.value;
    panda$core$Int64 i4015 = { $tmp4016 };
    int64_t $tmp4018 = $tmp4013.max.value;
    bool $tmp4019 = $tmp4013.inclusive.value;
    if ($tmp4019) goto $l4026; else goto $l4027;
    $l4026:;
    if ($tmp4016 <= $tmp4018) goto $l4020; else goto $l4022;
    $l4027:;
    if ($tmp4016 < $tmp4018) goto $l4020; else goto $l4022;
    $l4020:;
    {
        panda$core$Object* $tmp4029 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4015);
        org$pandalanguage$pandac$IRNode* $tmp4030 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4029));
        statement4028 = $tmp4030;
        if (((panda$core$Bit) { statement4028 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4010, ((panda$core$Object*) statement4028));
    }
    $l4023:;
    int64_t $tmp4032 = $tmp4018 - i4015.value;
    if ($tmp4019) goto $l4033; else goto $l4034;
    $l4033:;
    if ($tmp4032 >= 1) goto $l4031; else goto $l4022;
    $l4034:;
    if ($tmp4032 > 1) goto $l4031; else goto $l4022;
    $l4031:;
    i4015.value += 1;
    goto $l4020;
    $l4022:;
    panda$core$Object* $tmp4037 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4037);
    org$pandalanguage$pandac$IRNode* $tmp4038 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4038->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4038->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4038, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4010));
    panda$collections$Array$add$panda$collections$Array$T(children3984, ((panda$core$Object*) $tmp4038));
    org$pandalanguage$pandac$IRNode* $tmp4040 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4040->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4040->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4040, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children3984));
    return $tmp4040;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4043;
    panda$collections$Array* statements4048;
    panda$collections$Iterator* s$Iter4051;
    org$pandalanguage$pandac$ASTNode* s4063;
    org$pandalanguage$pandac$IRNode* statement4068;
    panda$core$Bit $tmp4042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4042.value);
    panda$collections$Array* $tmp4044 = (panda$collections$Array*) malloc(40);
    $tmp4044->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4044->refCount.value = 1;
    panda$collections$Array$init($tmp4044);
    children4043 = $tmp4044;
    org$pandalanguage$pandac$SymbolTable* $tmp4046 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4046->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4046->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4046, self->symbolTable);
    self->symbolTable = $tmp4046;
    panda$collections$Array* $tmp4049 = (panda$collections$Array*) malloc(40);
    $tmp4049->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4049->refCount.value = 1;
    panda$collections$Array$init($tmp4049);
    statements4048 = $tmp4049;
    {
        ITable* $tmp4052 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4052->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4052 = $tmp4052->next;
        }
        $fn4054 $tmp4053 = $tmp4052->methods[0];
        panda$collections$Iterator* $tmp4055 = $tmp4053(((panda$collections$Iterable*) p_o->children));
        s$Iter4051 = $tmp4055;
        $l4056:;
        ITable* $tmp4058 = s$Iter4051->$class->itable;
        while ($tmp4058->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4058 = $tmp4058->next;
        }
        $fn4060 $tmp4059 = $tmp4058->methods[0];
        panda$core$Bit $tmp4061 = $tmp4059(s$Iter4051);
        panda$core$Bit $tmp4062 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4061);
        if (!$tmp4062.value) goto $l4057;
        {
            ITable* $tmp4064 = s$Iter4051->$class->itable;
            while ($tmp4064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4064 = $tmp4064->next;
            }
            $fn4066 $tmp4065 = $tmp4064->methods[1];
            panda$core$Object* $tmp4067 = $tmp4065(s$Iter4051);
            s4063 = ((org$pandalanguage$pandac$ASTNode*) $tmp4067);
            org$pandalanguage$pandac$IRNode* $tmp4069 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4063);
            statement4068 = $tmp4069;
            if (((panda$core$Bit) { statement4068 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4048, ((panda$core$Object*) statement4068));
        }
        goto $l4056;
        $l4057:;
    }
    panda$core$Object* $tmp4070 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4070);
    org$pandalanguage$pandac$IRNode* $tmp4071 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4071->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4071->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4071, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4048));
    panda$collections$Array$add$panda$collections$Array$T(children4043, ((panda$core$Object*) $tmp4071));
    org$pandalanguage$pandac$IRNode* $tmp4073 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4073->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4073->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4073, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4043));
    return $tmp4073;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4082;
    org$pandalanguage$pandac$Variable* v4091;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4076 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4075 = $tmp4076.value;
            if (!$tmp4075) goto $l4077;
            panda$core$Object* $tmp4078 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4079 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4078)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4080 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4079));
            $tmp4075 = $tmp4080.value;
            $l4077:;
            panda$core$Bit $tmp4081 = { $tmp4075 };
            return $tmp4081;
        }
        break;
        case 1026:
        {
            f4082 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4082->resolved.value);
            panda$core$Bit $tmp4085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4082->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4084 = $tmp4085.value;
            if (!$tmp4084) goto $l4086;
            $tmp4084 = ((panda$core$Bit) { f4082->value != NULL }).value;
            $l4086:;
            panda$core$Bit $tmp4087 = { $tmp4084 };
            bool $tmp4083 = $tmp4087.value;
            if (!$tmp4083) goto $l4088;
            panda$core$Bit $tmp4089 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4082->value);
            $tmp4083 = $tmp4089.value;
            $l4088:;
            panda$core$Bit $tmp4090 = { $tmp4083 };
            return $tmp4090;
        }
        break;
        case 1016:
        {
            v4091 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4091->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4092 = $tmp4093.value;
            if ($tmp4092) goto $l4094;
            panda$core$Bit $tmp4097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4091->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4096 = $tmp4097.value;
            if (!$tmp4096) goto $l4098;
            $tmp4096 = ((panda$core$Bit) { v4091->initialValue != NULL }).value;
            $l4098:;
            panda$core$Bit $tmp4099 = { $tmp4096 };
            bool $tmp4095 = $tmp4099.value;
            if (!$tmp4095) goto $l4100;
            panda$core$Bit $tmp4101 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4091->initialValue);
            $tmp4095 = $tmp4101.value;
            $l4100:;
            panda$core$Bit $tmp4102 = { $tmp4095 };
            $tmp4092 = $tmp4102.value;
            $l4094:;
            panda$core$Bit $tmp4103 = { $tmp4092 };
            return $tmp4103;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4108;
    org$pandalanguage$pandac$Variable* v4110;
    panda$core$Bit $tmp4104 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4104.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4105 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4106 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4105)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4107 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4106));
            return $tmp4107;
        }
        break;
        case 1026:
        {
            f4108 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4109 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4108->value);
            return $tmp4109;
        }
        break;
        case 1016:
        {
            v4110 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4111 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4110->initialValue);
            return $tmp4111;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4115;
    panda$collections$Array* children4122;
    panda$collections$Iterator* rawWhen$Iter4125;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4126;
    org$pandalanguage$pandac$ASTNode* rawWhen4139;
    org$pandalanguage$pandac$IRNode* o4145;
    org$pandalanguage$pandac$IRNode* w4147;
    panda$core$Bit $tmp4112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4112.value);
    panda$core$Int64 $tmp4113 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4114 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4113, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4114.value);
    panda$core$Object* $tmp4116 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4117 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4116));
    org$pandalanguage$pandac$IRNode* $tmp4118 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4117);
    value4115 = $tmp4118;
    if (((panda$core$Bit) { value4115 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4119 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4115->type);
    panda$core$Bit $tmp4120 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4119);
    if ($tmp4120.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4121 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4115);
        return $tmp4121;
    }
    }
    panda$collections$Array* $tmp4123 = (panda$collections$Array*) malloc(40);
    $tmp4123->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4123->refCount.value = 1;
    panda$collections$Array$init($tmp4123);
    children4122 = $tmp4123;
    panda$collections$Array$add$panda$collections$Array$T(children4122, ((panda$core$Object*) value4115));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4126, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4127 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4126);
        ITable* $tmp4128 = ((panda$collections$Iterable*) $tmp4127)->$class->itable;
        while ($tmp4128->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4128 = $tmp4128->next;
        }
        $fn4130 $tmp4129 = $tmp4128->methods[0];
        panda$collections$Iterator* $tmp4131 = $tmp4129(((panda$collections$Iterable*) $tmp4127));
        rawWhen$Iter4125 = $tmp4131;
        $l4132:;
        ITable* $tmp4134 = rawWhen$Iter4125->$class->itable;
        while ($tmp4134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4134 = $tmp4134->next;
        }
        $fn4136 $tmp4135 = $tmp4134->methods[0];
        panda$core$Bit $tmp4137 = $tmp4135(rawWhen$Iter4125);
        panda$core$Bit $tmp4138 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4137);
        if (!$tmp4138.value) goto $l4133;
        {
            ITable* $tmp4140 = rawWhen$Iter4125->$class->itable;
            while ($tmp4140->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4140 = $tmp4140->next;
            }
            $fn4142 $tmp4141 = $tmp4140->methods[1];
            panda$core$Object* $tmp4143 = $tmp4141(rawWhen$Iter4125);
            rawWhen4139 = ((org$pandalanguage$pandac$ASTNode*) $tmp4143);
            panda$core$Bit $tmp4144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4139->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4144.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4146 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4139);
                o4145 = $tmp4146;
                if (((panda$core$Bit) { o4145 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4122, ((panda$core$Object*) o4145));
                goto $l4132;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4148 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4115->type, rawWhen4139);
            w4147 = $tmp4148;
            if (((panda$core$Bit) { w4147 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4149 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w4147->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4150 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4149));
            panda$core$Bit $tmp4151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4150);
            if ($tmp4151.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4152 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4115);
                return $tmp4152;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4122, ((panda$core$Object*) w4147));
        }
        goto $l4132;
        $l4133:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4153 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4153->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4153->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4153, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4122));
    return $tmp4153;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4168;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4155 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4155;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4156 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4157 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4156);
            return $tmp4157;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4158 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4158;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4159 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4159;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4160 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4160;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4161 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4161;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4162 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4162;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4163 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4163;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4164 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4164;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4165 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4165;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4166 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4166;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4167 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4167;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4169 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4170 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4169);
            result4168 = $tmp4170;
            if (((panda$core$Bit) { result4168 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4171 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4168);
                result4168 = $tmp4171;
            }
            }
            return result4168;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4172 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4172;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4173;
    org$pandalanguage$pandac$SymbolTable* symbols4175;
    panda$collections$Iterator* p$Iter4178;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4190;
    panda$collections$Array* fieldInitializers4197;
    panda$collections$Iterator* f$Iter4201;
    org$pandalanguage$pandac$FieldDecl* f4214;
    panda$collections$Array* children4224;
    org$pandalanguage$pandac$IRNode* fieldRef4231;
    org$pandalanguage$pandac$IRNode* compiled4236;
    panda$collections$Array* children4238;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4173 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4174 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4174;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4176 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4176->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4176->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4176, self->symbolTable);
    symbols4175 = $tmp4176;
    {
        ITable* $tmp4179 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4179->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4179 = $tmp4179->next;
        }
        $fn4181 $tmp4180 = $tmp4179->methods[0];
        panda$collections$Iterator* $tmp4182 = $tmp4180(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4178 = $tmp4182;
        $l4183:;
        ITable* $tmp4185 = p$Iter4178->$class->itable;
        while ($tmp4185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4185 = $tmp4185->next;
        }
        $fn4187 $tmp4186 = $tmp4185->methods[0];
        panda$core$Bit $tmp4188 = $tmp4186(p$Iter4178);
        panda$core$Bit $tmp4189 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4188);
        if (!$tmp4189.value) goto $l4184;
        {
            ITable* $tmp4191 = p$Iter4178->$class->itable;
            while ($tmp4191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4191 = $tmp4191->next;
            }
            $fn4193 $tmp4192 = $tmp4191->methods[1];
            panda$core$Object* $tmp4194 = $tmp4192(p$Iter4178);
            p4190 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4194);
            org$pandalanguage$pandac$Variable* $tmp4195 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4195->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4195->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4195, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4190->name, p4190->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4175, ((org$pandalanguage$pandac$Symbol*) $tmp4195));
        }
        goto $l4183;
        $l4184:;
    }
    self->symbolTable = symbols4175;
    fieldInitializers4197 = NULL;
    panda$core$Bit $tmp4198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4198.value) {
    {
        panda$collections$Array* $tmp4199 = (panda$collections$Array*) malloc(40);
        $tmp4199->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4199->refCount.value = 1;
        panda$collections$Array$init($tmp4199);
        fieldInitializers4197 = $tmp4199;
        {
            panda$core$Object* $tmp4202 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4203 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4202)->fields)->$class->itable;
            while ($tmp4203->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4203 = $tmp4203->next;
            }
            $fn4205 $tmp4204 = $tmp4203->methods[0];
            panda$collections$Iterator* $tmp4206 = $tmp4204(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4202)->fields));
            f$Iter4201 = $tmp4206;
            $l4207:;
            ITable* $tmp4209 = f$Iter4201->$class->itable;
            while ($tmp4209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4209 = $tmp4209->next;
            }
            $fn4211 $tmp4210 = $tmp4209->methods[0];
            panda$core$Bit $tmp4212 = $tmp4210(f$Iter4201);
            panda$core$Bit $tmp4213 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4212);
            if (!$tmp4213.value) goto $l4208;
            {
                ITable* $tmp4215 = f$Iter4201->$class->itable;
                while ($tmp4215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4215 = $tmp4215->next;
                }
                $fn4217 $tmp4216 = $tmp4215->methods[1];
                panda$core$Object* $tmp4218 = $tmp4216(f$Iter4201);
                f4214 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4218);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4214);
                panda$core$Bit $tmp4220 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4214->annotations);
                panda$core$Bit $tmp4221 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4220);
                bool $tmp4219 = $tmp4221.value;
                if (!$tmp4219) goto $l4222;
                $tmp4219 = ((panda$core$Bit) { f4214->value != NULL }).value;
                $l4222:;
                panda$core$Bit $tmp4223 = { $tmp4219 };
                if ($tmp4223.value) {
                {
                    panda$collections$Array* $tmp4225 = (panda$collections$Array*) malloc(40);
                    $tmp4225->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4225->refCount.value = 1;
                    panda$collections$Array$init($tmp4225);
                    children4224 = $tmp4225;
                    org$pandalanguage$pandac$IRNode* $tmp4227 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4227->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4227->refCount.value = 1;
                    panda$core$Object* $tmp4229 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4230 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4229));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4227, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4230);
                    panda$collections$Array$add$panda$collections$Array$T(children4224, ((panda$core$Object*) $tmp4227));
                    org$pandalanguage$pandac$IRNode* $tmp4232 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4232->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4232->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4232, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4214->type, ((panda$core$Object*) f4214), ((panda$collections$ListView*) children4224));
                    fieldRef4231 = $tmp4232;
                    panda$collections$Array$clear(children4224);
                    panda$collections$Array$add$panda$collections$Array$T(children4224, ((panda$core$Object*) fieldRef4231));
                    panda$collections$Array$add$panda$collections$Array$T(children4224, ((panda$core$Object*) f4214->value));
                    org$pandalanguage$pandac$IRNode* $tmp4234 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4234->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4234->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4234, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4214)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4224));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4197, ((panda$core$Object*) $tmp4234));
                }
                }
            }
            goto $l4207;
            $l4208:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4237 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4236 = $tmp4237;
    if (((panda$core$Bit) { compiled4236 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4197 != NULL }).value) {
        {
            panda$collections$Array* $tmp4239 = (panda$collections$Array*) malloc(40);
            $tmp4239->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4239->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4239, ((panda$collections$ListView*) fieldInitializers4197));
            children4238 = $tmp4239;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4238, ((panda$collections$CollectionView*) compiled4236->children));
            org$pandalanguage$pandac$IRNode* $tmp4241 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4241->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4241->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4241, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4238));
            compiled4236 = $tmp4241;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4175) }).value);
    self->symbolTable = old4173;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4243 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4243.value) {
    {
        p_m->compiledBody = compiled4236;
    }
    }
    return compiled4236;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4244;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4245 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4244 = $tmp4245;
        if (((panda$core$Bit) { compiled4244 != NULL }).value) {
        {
            ITable* $tmp4246 = self->codeGenerator->$class->itable;
            while ($tmp4246->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4246 = $tmp4246->next;
            }
            $fn4248 $tmp4247 = $tmp4246->methods[3];
            $tmp4247(self->codeGenerator, p_m, compiled4244);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4249 = self->codeGenerator->$class->itable;
        while ($tmp4249->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4249 = $tmp4249->next;
        }
        $fn4251 $tmp4250 = $tmp4249->methods[2];
        $tmp4250(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4252;
    org$pandalanguage$pandac$ClassDecl* inner4264;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4253 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4253->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4253 = $tmp4253->next;
        }
        $fn4255 $tmp4254 = $tmp4253->methods[0];
        panda$collections$Iterator* $tmp4256 = $tmp4254(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4252 = $tmp4256;
        $l4257:;
        ITable* $tmp4259 = inner$Iter4252->$class->itable;
        while ($tmp4259->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4259 = $tmp4259->next;
        }
        $fn4261 $tmp4260 = $tmp4259->methods[0];
        panda$core$Bit $tmp4262 = $tmp4260(inner$Iter4252);
        panda$core$Bit $tmp4263 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4262);
        if (!$tmp4263.value) goto $l4258;
        {
            ITable* $tmp4265 = inner$Iter4252->$class->itable;
            while ($tmp4265->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4265 = $tmp4265->next;
            }
            $fn4267 $tmp4266 = $tmp4265->methods[1];
            panda$core$Object* $tmp4268 = $tmp4266(inner$Iter4252);
            inner4264 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4268);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4264);
        }
        goto $l4257;
        $l4258:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4276;
    panda$collections$Iterator* m$Iter4281;
    org$pandalanguage$pandac$MethodDecl* m4293;
    org$pandalanguage$pandac$ClassDecl* next4303;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4269 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4269.value) {
    {
        ITable* $tmp4270 = self->codeGenerator->$class->itable;
        while ($tmp4270->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4270 = $tmp4270->next;
        }
        $fn4272 $tmp4271 = $tmp4270->methods[1];
        $tmp4271(self->codeGenerator, p_cl);
        ITable* $tmp4273 = self->codeGenerator->$class->itable;
        while ($tmp4273->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4273 = $tmp4273->next;
        }
        $fn4275 $tmp4274 = $tmp4273->methods[4];
        $tmp4274(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4276 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4277 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4277;
    ITable* $tmp4278 = self->codeGenerator->$class->itable;
    while ($tmp4278->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4278 = $tmp4278->next;
    }
    $fn4280 $tmp4279 = $tmp4278->methods[1];
    $tmp4279(self->codeGenerator, p_cl);
    {
        ITable* $tmp4282 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4282->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4282 = $tmp4282->next;
        }
        $fn4284 $tmp4283 = $tmp4282->methods[0];
        panda$collections$Iterator* $tmp4285 = $tmp4283(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4281 = $tmp4285;
        $l4286:;
        ITable* $tmp4288 = m$Iter4281->$class->itable;
        while ($tmp4288->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4288 = $tmp4288->next;
        }
        $fn4290 $tmp4289 = $tmp4288->methods[0];
        panda$core$Bit $tmp4291 = $tmp4289(m$Iter4281);
        panda$core$Bit $tmp4292 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4291);
        if (!$tmp4292.value) goto $l4287;
        {
            ITable* $tmp4294 = m$Iter4281->$class->itable;
            while ($tmp4294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4294 = $tmp4294->next;
            }
            $fn4296 $tmp4295 = $tmp4294->methods[1];
            panda$core$Object* $tmp4297 = $tmp4295(m$Iter4281);
            m4293 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4297);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4293);
        }
        goto $l4286;
        $l4287:;
    }
    ITable* $tmp4298 = self->codeGenerator->$class->itable;
    while ($tmp4298->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4298 = $tmp4298->next;
    }
    $fn4300 $tmp4299 = $tmp4298->methods[4];
    $tmp4299(self->codeGenerator, p_cl);
    self->symbolTable = old4276;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4301 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4302 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4301, ((panda$core$Int64) { 0 }));
    if ($tmp4302.value) {
    {
        panda$core$Object* $tmp4304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4303 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4304);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4303);
    }
    }
    panda$core$Int64 $tmp4305 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4305, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4306.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4307;
    org$pandalanguage$pandac$ASTNode* parsed4311;
    panda$collections$Iterator* cl$Iter4315;
    org$pandalanguage$pandac$ClassDecl* cl4327;
    panda$core$Object* $tmp4308 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4307 = ((panda$collections$ListView*) $tmp4308);
    if (((panda$core$Bit) { result4307 == NULL }).value) {
    {
        panda$core$String* $tmp4309 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4310) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4309);
        org$pandalanguage$pandac$ASTNode* $tmp4313 = (($fn4312) self->parser->$class->vtable[67])(self->parser);
        parsed4311 = $tmp4313;
        if (((panda$core$Bit) { parsed4311 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4314 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4311);
            result4307 = $tmp4314;
            {
                ITable* $tmp4316 = ((panda$collections$Iterable*) result4307)->$class->itable;
                while ($tmp4316->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4316 = $tmp4316->next;
                }
                $fn4318 $tmp4317 = $tmp4316->methods[0];
                panda$collections$Iterator* $tmp4319 = $tmp4317(((panda$collections$Iterable*) result4307));
                cl$Iter4315 = $tmp4319;
                $l4320:;
                ITable* $tmp4322 = cl$Iter4315->$class->itable;
                while ($tmp4322->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4322 = $tmp4322->next;
                }
                $fn4324 $tmp4323 = $tmp4322->methods[0];
                panda$core$Bit $tmp4325 = $tmp4323(cl$Iter4315);
                panda$core$Bit $tmp4326 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4325);
                if (!$tmp4326.value) goto $l4321;
                {
                    ITable* $tmp4328 = cl$Iter4315->$class->itable;
                    while ($tmp4328->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4328 = $tmp4328->next;
                    }
                    $fn4330 $tmp4329 = $tmp4328->methods[1];
                    panda$core$Object* $tmp4331 = $tmp4329(cl$Iter4315);
                    cl4327 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4331);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4327)->name), ((panda$core$Object*) cl4327));
                }
                goto $l4320;
                $l4321:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4332 = (panda$collections$Array*) malloc(40);
            $tmp4332->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4332->refCount.value = 1;
            panda$collections$Array$init($tmp4332);
            result4307 = ((panda$collections$ListView*) $tmp4332);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4307));
    }
    }
    return result4307;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4334;
    panda$collections$Iterator* cl$Iter4336;
    org$pandalanguage$pandac$ClassDecl* cl4348;
    panda$collections$ListView* $tmp4335 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4334 = $tmp4335;
    {
        ITable* $tmp4337 = ((panda$collections$Iterable*) classes4334)->$class->itable;
        while ($tmp4337->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4337 = $tmp4337->next;
        }
        $fn4339 $tmp4338 = $tmp4337->methods[0];
        panda$collections$Iterator* $tmp4340 = $tmp4338(((panda$collections$Iterable*) classes4334));
        cl$Iter4336 = $tmp4340;
        $l4341:;
        ITable* $tmp4343 = cl$Iter4336->$class->itable;
        while ($tmp4343->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4343 = $tmp4343->next;
        }
        $fn4345 $tmp4344 = $tmp4343->methods[0];
        panda$core$Bit $tmp4346 = $tmp4344(cl$Iter4336);
        panda$core$Bit $tmp4347 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4346);
        if (!$tmp4347.value) goto $l4342;
        {
            ITable* $tmp4349 = cl$Iter4336->$class->itable;
            while ($tmp4349->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4349 = $tmp4349->next;
            }
            $fn4351 $tmp4350 = $tmp4349->methods[1];
            panda$core$Object* $tmp4352 = $tmp4350(cl$Iter4336);
            cl4348 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4352);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4348);
        }
        goto $l4341;
        $l4342:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4353 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4353)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4354 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4354;
        panda$core$String* $tmp4355 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4356 = panda$core$String$convert$R$panda$core$String($tmp4355);
        panda$core$String* $tmp4358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4356, &$s4357);
        panda$core$String* $tmp4359 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4358, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4359, &$s4360);
        panda$core$String* $tmp4362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4361, p_msg);
        panda$core$String* $tmp4364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4362, &$s4363);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4364));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4365 = self->codeGenerator->$class->itable;
    while ($tmp4365->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4365 = $tmp4365->next;
    }
    $fn4367 $tmp4366 = $tmp4365->methods[5];
    $tmp4366(self->codeGenerator);
}

