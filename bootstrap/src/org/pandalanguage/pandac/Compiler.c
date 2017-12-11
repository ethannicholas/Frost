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
typedef panda$collections$Iterator* (*$fn580)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn586)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn592)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn616)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn648)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn654)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn660)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn679)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn685)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn691)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn717)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn723)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn729)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn781)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn787)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn793)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn802)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn819)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn837)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn843)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn849)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn857)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn863)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn869)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn880)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn886)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn892)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn915)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn921)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn927)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn966)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn972)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn978)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn991)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn997)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1003)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1018)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1024)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1030)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1045)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1051)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1057)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1071)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1077)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1083)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1096)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1102)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1108)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1159)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1165)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1172)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1178)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1184)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1204)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1210)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1216)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1296)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1404)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1410)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1416)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1442)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1448)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1454)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1611)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1617)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1623)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1809)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1815)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1821)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1911)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1933)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1955)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1972)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1978)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1984)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1996)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2018)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2092)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2110)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2181)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2199)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2205)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2211)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2242)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2248)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2254)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2291)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2303)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2326)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2332)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2338)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2728)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2734)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2740)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2872)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2878)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2884)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2997)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3097)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3113)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3125)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3220)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3226)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3232)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3442)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3448)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3454)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3589)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3595)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3601)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3627)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3633)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3639)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3746)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3752)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3758)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3904)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3910)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3916)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3989)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3995)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4001)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4052)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4058)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4064)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4128)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4134)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4140)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4179)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4191)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4203)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4209)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4215)(panda$collections$Iterator*);
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
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1527396680240, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 23, -496662036601839294, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, 1527396680240, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 33, 332652909562405593, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20\x6D\x65\x74\x68\x6F\x64\x20", 45, -2532818095386045823, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 26, -4360466638692044115, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, 5735293162260763604, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6F\x72\x20\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x61\x74\x63\x68\x20\x6F\x6E\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, -6710647184408424492, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, 5687166824689512368, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, -1301083486074551925, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, 146931305, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, 14839819243, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 22849, NULL };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 23053, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 16423, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, 1373156, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, 9019145596080302696, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, 1432616, NULL };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, -4891466264852316840, NULL };
static panda$core$String $s2700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, 17378158564789264, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, -2978468964078965078, NULL };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, -1293962867859660245, NULL };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, -5420382528200372370, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, 7885269545242335118, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s3352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s3608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, 149654778879689, NULL };
static panda$core$String $s3610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s3648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, 16098, NULL };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s3671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s3685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s3705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s3809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s3860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s3862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, 196, NULL };
static panda$core$String $s3865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
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
    org$pandalanguage$pandac$MethodDecl* overridden520;
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
    org$pandalanguage$pandac$MethodDecl* $tmp521 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    overridden520 = $tmp521;
    if (((panda$core$Bit) { overridden520 != NULL }).value) {
    {
        panda$core$Bit $tmp522 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp523 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp522);
        if ($tmp523.value) {
        {
            panda$core$String* $tmp524 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp525 = panda$core$String$convert$R$panda$core$String($tmp524);
            panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp525, &$s526);
            panda$core$String* $tmp528 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden520);
            panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, $tmp528);
            panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp529, &$s530);
            panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp531, &$s532);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp533);
        }
        }
        panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 57 }));
        bool $tmp534 = $tmp535.value;
        if (!$tmp534) goto $l536;
        panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden520->methodKind, ((panda$core$Int64) { 58 }));
        $tmp534 = $tmp537.value;
        $l536:;
        panda$core$Bit $tmp538 = { $tmp534 };
        if ($tmp538.value) {
        {
            panda$core$String* $tmp539 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp540 = panda$core$String$convert$R$panda$core$String($tmp539);
            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s541);
            panda$core$String* $tmp543 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden520);
            panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, $tmp543);
            panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, &$s545);
            panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s547);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp548);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp549 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    if ($tmp549.value) {
    {
        panda$core$String* $tmp550 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
        panda$core$String* $tmp551 = panda$core$String$convert$R$panda$core$String($tmp550);
        panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, &$s552);
        panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, &$s554);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp555);
    }
    }
    }
    self->symbolTable = old500;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old556;
    org$pandalanguage$pandac$Type* resolved559;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old556 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp557 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp558 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp557);
    if ($tmp558.value) {
    {
        org$pandalanguage$pandac$Type* $tmp560 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved559 = $tmp560;
        if (((panda$core$Bit) { resolved559 != NULL }).value) {
        {
            p_f->type = resolved559;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp561 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp562 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp561, p_f->type);
                p_f->value = $tmp562;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old556;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s563);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old556;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp564 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp564;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old556;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp565 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp565;
    org$pandalanguage$pandac$IRNode* $tmp566 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp566;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old556;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$ListView* methods568;
    panda$collections$Array* args570;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp571;
    panda$collections$Array* best573;
    panda$core$Int64$nullable bestCost576;
    panda$collections$Iterator* m$Iter577;
    org$pandalanguage$pandac$MethodRef* m589;
    panda$core$Int64$nullable cost594;
    org$pandalanguage$pandac$IRNode* callTarget600;
    org$pandalanguage$pandac$IRNode* result606;
    panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1039 }));
    PANDA_ASSERT($tmp567.value);
    panda$core$Object* $tmp569 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    methods568 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp569)->payload);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp571, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$collections$Array* $tmp572 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp571);
    args570 = $tmp572;
    panda$collections$Array* $tmp574 = (panda$collections$Array*) malloc(40);
    $tmp574->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp574->refCount.value = 1;
    panda$collections$Array$init($tmp574);
    best573 = $tmp574;
    bestCost576 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp578 = ((panda$collections$Iterable*) methods568)->$class->itable;
        while ($tmp578->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp578 = $tmp578->next;
        }
        $fn580 $tmp579 = $tmp578->methods[0];
        panda$collections$Iterator* $tmp581 = $tmp579(((panda$collections$Iterable*) methods568));
        m$Iter577 = $tmp581;
        $l582:;
        ITable* $tmp584 = m$Iter577->$class->itable;
        while ($tmp584->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp584 = $tmp584->next;
        }
        $fn586 $tmp585 = $tmp584->methods[0];
        panda$core$Bit $tmp587 = $tmp585(m$Iter577);
        panda$core$Bit $tmp588 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp587);
        if (!$tmp588.value) goto $l583;
        {
            ITable* $tmp590 = m$Iter577->$class->itable;
            while ($tmp590->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp590 = $tmp590->next;
            }
            $fn592 $tmp591 = $tmp590->methods[1];
            panda$core$Object* $tmp593 = $tmp591(m$Iter577);
            m589 = ((org$pandalanguage$pandac$MethodRef*) $tmp593);
            panda$core$Int64$nullable $tmp595 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m589, ((panda$collections$ListView*) args570), p_target);
            cost594 = $tmp595;
            if (((panda$core$Bit) { !cost594.nonnull }).value) {
            {
                goto $l582;
            }
            }
            if (((panda$core$Bit) { !bestCost576.nonnull }).value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best573, ((panda$core$Object*) m589));
                bestCost576 = cost594;
                goto $l582;
            }
            }
            panda$core$Bit $tmp596 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost594.value), ((panda$core$Int64) bestCost576.value));
            if ($tmp596.value) {
            {
                panda$collections$Array$clear(best573);
                bestCost576 = cost594;
            }
            }
            panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost594.value), ((panda$core$Int64) bestCost576.value));
            if ($tmp597.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best573, ((panda$core$Object*) m589));
            }
            }
        }
        goto $l582;
        $l583:;
    }
    panda$core$Int64 $tmp598 = panda$collections$Array$get_count$R$panda$core$Int64(best573);
    panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp598, ((panda$core$Int64) { 1 }));
    if ($tmp599.value) {
    {
        panda$core$Object* $tmp601 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp602 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp601)->children);
        panda$core$Bit $tmp603 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp602, ((panda$core$Int64) { 0 }));
        if ($tmp603.value) {
        {
            panda$core$Object* $tmp604 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp604)->children, ((panda$core$Int64) { 0 }));
            callTarget600 = ((org$pandalanguage$pandac$IRNode*) $tmp605);
        }
        }
        else {
        {
            callTarget600 = NULL;
        }
        }
        panda$core$Object* $tmp607 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best573, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp608 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget600, ((org$pandalanguage$pandac$MethodRef*) $tmp607), ((panda$collections$ListView*) args570));
        result606 = $tmp608;
        if (((panda$core$Bit) { p_target != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp609 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result606, p_target);
            result606 = $tmp609;
        }
        }
        return result606;
    }
    }
    panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s610, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_expr->position)));
    panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp611, &$s612);
    ITable* $tmp614 = methods568->$class->itable;
    while ($tmp614->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp614 = $tmp614->next;
    }
    $fn616 $tmp615 = $tmp614->methods[0];
    panda$core$Object* $tmp617 = $tmp615(methods568, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp613, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp617)->value)->name);
    panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, &$s619);
    panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp620, ((panda$core$Object*) best573));
    panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp621, &$s622);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp623));
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s624);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp625 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp625;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s626);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp627 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp628 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp627);
            return $tmp628;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp629 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp629) goto $l630;
    panda$core$Bit $tmp632 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s631);
    $tmp629 = $tmp632.value;
    $l630:;
    panda$core$Bit $tmp633 = { $tmp629 };
    return $tmp633;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result634;
    org$pandalanguage$pandac$ClassDecl* s642;
    panda$collections$Iterator* f$Iter645;
    org$pandalanguage$pandac$FieldDecl* f657;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp635 = (panda$collections$Array*) malloc(40);
    $tmp635->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp635->refCount.value = 1;
    panda$collections$Array$init($tmp635);
    result634 = $tmp635;
    panda$core$Bit $tmp638 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp639 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp638);
    bool $tmp637 = $tmp639.value;
    if (!$tmp637) goto $l640;
    $tmp637 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l640:;
    panda$core$Bit $tmp641 = { $tmp637 };
    if ($tmp641.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp643 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s642 = $tmp643;
        if (((panda$core$Bit) { s642 != NULL }).value) {
        {
            panda$collections$ListView* $tmp644 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s642);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result634, ((panda$collections$CollectionView*) $tmp644));
        }
        }
    }
    }
    {
        ITable* $tmp646 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp646->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp646 = $tmp646->next;
        }
        $fn648 $tmp647 = $tmp646->methods[0];
        panda$collections$Iterator* $tmp649 = $tmp647(((panda$collections$Iterable*) p_cl->fields));
        f$Iter645 = $tmp649;
        $l650:;
        ITable* $tmp652 = f$Iter645->$class->itable;
        while ($tmp652->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp652 = $tmp652->next;
        }
        $fn654 $tmp653 = $tmp652->methods[0];
        panda$core$Bit $tmp655 = $tmp653(f$Iter645);
        panda$core$Bit $tmp656 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp655);
        if (!$tmp656.value) goto $l651;
        {
            ITable* $tmp658 = f$Iter645->$class->itable;
            while ($tmp658->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp658 = $tmp658->next;
            }
            $fn660 $tmp659 = $tmp658->methods[1];
            panda$core$Object* $tmp661 = $tmp659(f$Iter645);
            f657 = ((org$pandalanguage$pandac$FieldDecl*) $tmp661);
            panda$core$Bit $tmp662 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f657->annotations);
            panda$core$Bit $tmp663 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp662);
            if ($tmp663.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result634, ((panda$core$Object*) f657));
            }
            }
        }
        goto $l650;
        $l651:;
    }
    return ((panda$collections$ListView*) result634);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result664;
    panda$core$Bit $tmp666;
    panda$core$Object* $tmp665 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result664 = ($tmp665 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp665)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result664.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp666, p_f);
        result664 = ((panda$core$Bit$nullable) { $tmp666, true });
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) result664.value))));
    }
    }
    return ((panda$core$Bit) result664.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result667;
    panda$core$String* suffix669;
    panda$core$Bit found675;
    panda$collections$Iterator* dir$Iter676;
    panda$io$File* dir688;
    panda$io$File* f693;
    panda$core$String$Index$nullable index697;
    org$pandalanguage$pandac$ClassDecl* parent700;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp701;
    panda$core$Object* $tmp668 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result667 = ((org$pandalanguage$pandac$ClassDecl*) $tmp668);
    if (((panda$core$Bit) { result667 == NULL }).value) {
    {
        panda$core$String* $tmp672 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s670, &$s671);
        panda$core$String* $tmp674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp672, &$s673);
        suffix669 = $tmp674;
        found675 = ((panda$core$Bit) { false });
        {
            ITable* $tmp677 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp677->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp677 = $tmp677->next;
            }
            $fn679 $tmp678 = $tmp677->methods[0];
            panda$collections$Iterator* $tmp680 = $tmp678(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter676 = $tmp680;
            $l681:;
            ITable* $tmp683 = dir$Iter676->$class->itable;
            while ($tmp683->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp683 = $tmp683->next;
            }
            $fn685 $tmp684 = $tmp683->methods[0];
            panda$core$Bit $tmp686 = $tmp684(dir$Iter676);
            panda$core$Bit $tmp687 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp686);
            if (!$tmp687.value) goto $l682;
            {
                ITable* $tmp689 = dir$Iter676->$class->itable;
                while ($tmp689->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp689 = $tmp689->next;
                }
                $fn691 $tmp690 = $tmp689->methods[1];
                panda$core$Object* $tmp692 = $tmp690(dir$Iter676);
                dir688 = ((panda$io$File*) $tmp692);
                panda$io$File* $tmp694 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir688, suffix669);
                f693 = $tmp694;
                panda$core$Bit $tmp695 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f693);
                if ($tmp695.value) {
                {
                    found675 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f693);
                    panda$core$Object* $tmp696 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result667 = ((org$pandalanguage$pandac$ClassDecl*) $tmp696);
                }
                }
            }
            goto $l681;
            $l682:;
        }
    }
    }
    if (((panda$core$Bit) { result667 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp699 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s698);
        index697 = $tmp699;
        if (((panda$core$Bit) { index697.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp701, ((panda$core$String$Index$nullable) { .nonnull = false }), index697, ((panda$core$Bit) { false }));
            panda$core$String* $tmp702 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp701);
            org$pandalanguage$pandac$ClassDecl* $tmp703 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp702);
            parent700 = $tmp703;
            if (((panda$core$Bit) { parent700 != NULL }).value) {
            {
                panda$core$Object* $tmp704 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result667 = ((org$pandalanguage$pandac$ClassDecl*) $tmp704);
            }
            }
        }
        }
    }
    }
    return result667;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result705;
    panda$core$String* suffix707;
    panda$core$Bit found713;
    panda$collections$Iterator* dir$Iter714;
    panda$io$File* dir726;
    panda$io$File* f731;
    panda$core$Int64 oldErrorCount734;
    org$pandalanguage$pandac$Position $tmp740;
    panda$core$Object* $tmp706 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result705 = ((org$pandalanguage$pandac$ClassDecl*) $tmp706);
    if (((panda$core$Bit) { result705 == NULL }).value) {
    {
        panda$core$String* $tmp710 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s708, &$s709);
        panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp710, &$s711);
        suffix707 = $tmp712;
        found713 = ((panda$core$Bit) { false });
        {
            ITable* $tmp715 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp715->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp715 = $tmp715->next;
            }
            $fn717 $tmp716 = $tmp715->methods[0];
            panda$collections$Iterator* $tmp718 = $tmp716(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter714 = $tmp718;
            $l719:;
            ITable* $tmp721 = dir$Iter714->$class->itable;
            while ($tmp721->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp721 = $tmp721->next;
            }
            $fn723 $tmp722 = $tmp721->methods[0];
            panda$core$Bit $tmp724 = $tmp722(dir$Iter714);
            panda$core$Bit $tmp725 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp724);
            if (!$tmp725.value) goto $l720;
            {
                ITable* $tmp727 = dir$Iter714->$class->itable;
                while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp727 = $tmp727->next;
                }
                $fn729 $tmp728 = $tmp727->methods[1];
                panda$core$Object* $tmp730 = $tmp728(dir$Iter714);
                dir726 = ((panda$io$File*) $tmp730);
                panda$io$File* $tmp732 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir726, suffix707);
                f731 = $tmp732;
                panda$core$Bit $tmp733 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f731);
                if ($tmp733.value) {
                {
                    found713 = ((panda$core$Bit) { true });
                    oldErrorCount734 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f731);
                    panda$core$Object* $tmp735 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result705 = ((org$pandalanguage$pandac$ClassDecl*) $tmp735);
                    bool $tmp736 = ((panda$core$Bit) { result705 == NULL }).value;
                    if (!$tmp736) goto $l737;
                    panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount734);
                    $tmp736 = $tmp738.value;
                    $l737:;
                    panda$core$Bit $tmp739 = { $tmp736 };
                    if ($tmp739.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp740, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s741, ((panda$core$Object*) f731));
                        panda$core$String* $tmp744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp742, &$s743);
                        panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp744, p_fullName);
                        panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, &$s746);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f731, $tmp740, $tmp747);
                    }
                    }
                }
                }
            }
            goto $l719;
            $l720:;
        }
        panda$core$Bit $tmp748 = panda$core$Bit$$NOT$R$panda$core$Bit(found713);
        if ($tmp748.value) {
        {
            panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s749, suffix707);
            panda$core$String* $tmp752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp750, &$s751);
            panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp752, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp753, &$s754);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp755);
        }
        }
    }
    }
    return result705;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type759;
    org$pandalanguage$pandac$ClassDecl* result766;
    org$pandalanguage$pandac$Annotations* annotations768;
    panda$collections$Array* supertypes774;
    panda$collections$Iterator* intf$Iter778;
    org$pandalanguage$pandac$Type* intf790;
    panda$collections$HashMap* aliases796;
    panda$core$Range$LTpanda$core$Int64$GT $tmp799;
    panda$collections$Iterator* m$Iter834;
    org$pandalanguage$pandac$MethodDecl* m846;
    panda$collections$Array* parameters851;
    panda$collections$Iterator* p$Iter854;
    org$pandalanguage$pandac$MethodDecl$Parameter* p866;
    org$pandalanguage$pandac$MethodDecl* clone874;
    panda$collections$Iterator* f$Iter877;
    org$pandalanguage$pandac$FieldDecl* f889;
    org$pandalanguage$pandac$FieldDecl* clone894;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp757 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s756);
    panda$core$Bit $tmp758 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp757);
    PANDA_ASSERT($tmp758.value);
    org$pandalanguage$pandac$Type* $tmp760 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type759 = $tmp760;
    panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type759->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp761.value) {
    {
        panda$core$Object* $tmp762 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type759->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp763 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp762));
        return $tmp763;
    }
    }
    panda$core$Bit $tmp764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type759->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp764.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type759->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp765.value);
    panda$core$Object* $tmp767 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type759)->name));
    result766 = ((org$pandalanguage$pandac$ClassDecl*) $tmp767);
    if (((panda$core$Bit) { result766 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp769 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp769->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp769->refCount.value = 1;
        panda$core$Int64 $tmp771 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp772 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp771);
        panda$core$Int64 $tmp773 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp772);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp769, $tmp773);
        annotations768 = $tmp769;
        panda$collections$Array* $tmp775 = (panda$collections$Array*) malloc(40);
        $tmp775->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp775->refCount.value = 1;
        panda$collections$Array$init($tmp775);
        supertypes774 = $tmp775;
        org$pandalanguage$pandac$Type* $tmp777 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type759, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes774, ((panda$core$Object*) $tmp777));
        {
            ITable* $tmp779 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp779->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp779 = $tmp779->next;
            }
            $fn781 $tmp780 = $tmp779->methods[0];
            panda$collections$Iterator* $tmp782 = $tmp780(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter778 = $tmp782;
            $l783:;
            ITable* $tmp785 = intf$Iter778->$class->itable;
            while ($tmp785->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp785 = $tmp785->next;
            }
            $fn787 $tmp786 = $tmp785->methods[0];
            panda$core$Bit $tmp788 = $tmp786(intf$Iter778);
            panda$core$Bit $tmp789 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp788);
            if (!$tmp789.value) goto $l784;
            {
                ITable* $tmp791 = intf$Iter778->$class->itable;
                while ($tmp791->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp791 = $tmp791->next;
                }
                $fn793 $tmp792 = $tmp791->methods[1];
                panda$core$Object* $tmp794 = $tmp792(intf$Iter778);
                intf790 = ((org$pandalanguage$pandac$Type*) $tmp794);
                org$pandalanguage$pandac$Type* $tmp795 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type759, intf790);
                panda$collections$Array$add$panda$collections$Array$T(supertypes774, ((panda$core$Object*) $tmp795));
            }
            goto $l783;
            $l784:;
        }
        panda$collections$HashMap* $tmp797 = (panda$collections$HashMap*) malloc(56);
        $tmp797->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp797->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp797, p_cl->aliases);
        aliases796 = $tmp797;
        ITable* $tmp800 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp800->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp800 = $tmp800->next;
        }
        $fn802 $tmp801 = $tmp800->methods[0];
        panda$core$Int64 $tmp803 = $tmp801(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp799, ((panda$core$Int64) { 0 }), $tmp803, ((panda$core$Bit) { false }));
        int64_t $tmp805 = $tmp799.min.value;
        panda$core$Int64 i804 = { $tmp805 };
        int64_t $tmp807 = $tmp799.max.value;
        bool $tmp808 = $tmp799.inclusive.value;
        if ($tmp808) goto $l815; else goto $l816;
        $l815:;
        if ($tmp805 <= $tmp807) goto $l809; else goto $l811;
        $l816:;
        if ($tmp805 < $tmp807) goto $l809; else goto $l811;
        $l809:;
        {
            ITable* $tmp817 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp817->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp817 = $tmp817->next;
            }
            $fn819 $tmp818 = $tmp817->methods[0];
            panda$core$Object* $tmp820 = $tmp818(((panda$collections$ListView*) p_cl->parameters), i804);
            panda$core$Int64 $tmp821 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i804, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp822 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type759->subtypes, $tmp821);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases796, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp820))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp822))->name));
        }
        $l812:;
        int64_t $tmp824 = $tmp807 - i804.value;
        if ($tmp808) goto $l825; else goto $l826;
        $l825:;
        if ($tmp824 >= 1) goto $l823; else goto $l811;
        $l826:;
        if ($tmp824 > 1) goto $l823; else goto $l811;
        $l823:;
        i804.value += 1;
        goto $l809;
        $l811:;
        org$pandalanguage$pandac$ClassDecl* $tmp829 = (org$pandalanguage$pandac$ClassDecl*) malloc(193);
        $tmp829->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp829->refCount.value = 1;
        panda$collections$Array* $tmp831 = (panda$collections$Array*) malloc(40);
        $tmp831->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp831->refCount.value = 1;
        panda$collections$Array$init($tmp831);
        panda$core$Object* $tmp833 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp829, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases796), p_cl->doccomment, annotations768, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type759)->name, ((panda$collections$ListView*) supertypes774), $tmp831, ((org$pandalanguage$pandac$SymbolTable*) $tmp833));
        result766 = $tmp829;
        result766->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp835 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp835->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp835 = $tmp835->next;
            }
            $fn837 $tmp836 = $tmp835->methods[0];
            panda$collections$Iterator* $tmp838 = $tmp836(((panda$collections$Iterable*) p_cl->methods));
            m$Iter834 = $tmp838;
            $l839:;
            ITable* $tmp841 = m$Iter834->$class->itable;
            while ($tmp841->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp841 = $tmp841->next;
            }
            $fn843 $tmp842 = $tmp841->methods[0];
            panda$core$Bit $tmp844 = $tmp842(m$Iter834);
            panda$core$Bit $tmp845 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp844);
            if (!$tmp845.value) goto $l840;
            {
                ITable* $tmp847 = m$Iter834->$class->itable;
                while ($tmp847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp847 = $tmp847->next;
                }
                $fn849 $tmp848 = $tmp847->methods[1];
                panda$core$Object* $tmp850 = $tmp848(m$Iter834);
                m846 = ((org$pandalanguage$pandac$MethodDecl*) $tmp850);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m846);
                panda$collections$Array* $tmp852 = (panda$collections$Array*) malloc(40);
                $tmp852->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp852->refCount.value = 1;
                panda$collections$Array$init($tmp852);
                parameters851 = $tmp852;
                {
                    ITable* $tmp855 = ((panda$collections$Iterable*) m846->parameters)->$class->itable;
                    while ($tmp855->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp855 = $tmp855->next;
                    }
                    $fn857 $tmp856 = $tmp855->methods[0];
                    panda$collections$Iterator* $tmp858 = $tmp856(((panda$collections$Iterable*) m846->parameters));
                    p$Iter854 = $tmp858;
                    $l859:;
                    ITable* $tmp861 = p$Iter854->$class->itable;
                    while ($tmp861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp861 = $tmp861->next;
                    }
                    $fn863 $tmp862 = $tmp861->methods[0];
                    panda$core$Bit $tmp864 = $tmp862(p$Iter854);
                    panda$core$Bit $tmp865 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp864);
                    if (!$tmp865.value) goto $l860;
                    {
                        ITable* $tmp867 = p$Iter854->$class->itable;
                        while ($tmp867->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp867 = $tmp867->next;
                        }
                        $fn869 $tmp868 = $tmp867->methods[1];
                        panda$core$Object* $tmp870 = $tmp868(p$Iter854);
                        p866 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp870);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp871 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp871->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp871->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp873 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type759, p866->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp871, p866->name, $tmp873);
                        panda$collections$Array$add$panda$collections$Array$T(parameters851, ((panda$core$Object*) $tmp871));
                    }
                    goto $l859;
                    $l860:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp875 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
                $tmp875->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp875->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp875, result766, ((org$pandalanguage$pandac$Symbol*) m846)->position, m846->doccomment, m846->annotations, m846->methodKind, ((org$pandalanguage$pandac$Symbol*) m846)->name, parameters851, m846->returnType, m846->body);
                clone874 = $tmp875;
                panda$collections$Array$add$panda$collections$Array$T(result766->methods, ((panda$core$Object*) clone874));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result766->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone874));
            }
            goto $l839;
            $l840:;
        }
        {
            ITable* $tmp878 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp878->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp878 = $tmp878->next;
            }
            $fn880 $tmp879 = $tmp878->methods[0];
            panda$collections$Iterator* $tmp881 = $tmp879(((panda$collections$Iterable*) p_cl->fields));
            f$Iter877 = $tmp881;
            $l882:;
            ITable* $tmp884 = f$Iter877->$class->itable;
            while ($tmp884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp884 = $tmp884->next;
            }
            $fn886 $tmp885 = $tmp884->methods[0];
            panda$core$Bit $tmp887 = $tmp885(f$Iter877);
            panda$core$Bit $tmp888 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp887);
            if (!$tmp888.value) goto $l883;
            {
                ITable* $tmp890 = f$Iter877->$class->itable;
                while ($tmp890->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp890 = $tmp890->next;
                }
                $fn892 $tmp891 = $tmp890->methods[1];
                panda$core$Object* $tmp893 = $tmp891(f$Iter877);
                f889 = ((org$pandalanguage$pandac$FieldDecl*) $tmp893);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f889);
                org$pandalanguage$pandac$FieldDecl* $tmp895 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp895->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp895->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp897 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type759, f889->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp895, result766, ((org$pandalanguage$pandac$Symbol*) f889)->position, f889->doccomment, f889->annotations, f889->fieldKind, ((org$pandalanguage$pandac$Symbol*) f889)->name, $tmp897, f889->rawValue);
                clone894 = $tmp895;
                panda$collections$Array$add$panda$collections$Array$T(result766->fields, ((panda$core$Object*) clone894));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result766->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone894));
            }
            goto $l882;
            $l883:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result766)->name), ((panda$core$Object*) result766));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result766));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result766;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result898;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp899 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result898 = $tmp899;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp901 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp900));
            result898 = $tmp901;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp902 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp902;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp903 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result898->annotations);
    if ($tmp903.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp904 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result898, p_type);
        result898 = $tmp904;
    }
    }
    return result898;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl905;
    panda$collections$Set* result907;
    panda$collections$Iterator* intf$Iter912;
    org$pandalanguage$pandac$Type* intf924;
    org$pandalanguage$pandac$ClassDecl* $tmp906 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl905 = $tmp906;
    PANDA_ASSERT(((panda$core$Bit) { cl905 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl905);
    panda$collections$Set* $tmp908 = (panda$collections$Set*) malloc(24);
    $tmp908->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp908->refCount.value = 1;
    panda$collections$Set$init($tmp908);
    result907 = $tmp908;
    if (((panda$core$Bit) { cl905->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp910 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl905->rawSuper);
        panda$collections$Set* $tmp911 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp910);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result907, ((panda$collections$CollectionView*) $tmp911));
    }
    }
    {
        ITable* $tmp913 = ((panda$collections$Iterable*) cl905->rawInterfaces)->$class->itable;
        while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp913 = $tmp913->next;
        }
        $fn915 $tmp914 = $tmp913->methods[0];
        panda$collections$Iterator* $tmp916 = $tmp914(((panda$collections$Iterable*) cl905->rawInterfaces));
        intf$Iter912 = $tmp916;
        $l917:;
        ITable* $tmp919 = intf$Iter912->$class->itable;
        while ($tmp919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp919 = $tmp919->next;
        }
        $fn921 $tmp920 = $tmp919->methods[0];
        panda$core$Bit $tmp922 = $tmp920(intf$Iter912);
        panda$core$Bit $tmp923 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp922);
        if (!$tmp923.value) goto $l918;
        {
            ITable* $tmp925 = intf$Iter912->$class->itable;
            while ($tmp925->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp925 = $tmp925->next;
            }
            $fn927 $tmp926 = $tmp925->methods[1];
            panda$core$Object* $tmp928 = $tmp926(intf$Iter912);
            intf924 = ((org$pandalanguage$pandac$Type*) $tmp928);
            org$pandalanguage$pandac$Type* $tmp929 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf924);
            panda$collections$Set* $tmp930 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp929);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result907, ((panda$collections$CollectionView*) $tmp930));
        }
        goto $l917;
        $l918:;
    }
    panda$core$Bit $tmp931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl905->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp931.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result907, ((panda$collections$Key*) p_t));
    }
    }
    return result907;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp937;
    panda$core$Bit $tmp932 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp932.value);
    panda$core$Bit $tmp933 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp933.value);
    panda$core$Int64 $tmp934 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp935 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp936 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp934, $tmp935);
    if ($tmp936.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp938 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp937, ((panda$core$Int64) { 0 }), $tmp938, ((panda$core$Bit) { false }));
    int64_t $tmp940 = $tmp937.min.value;
    panda$core$Int64 i939 = { $tmp940 };
    int64_t $tmp942 = $tmp937.max.value;
    bool $tmp943 = $tmp937.inclusive.value;
    if ($tmp943) goto $l950; else goto $l951;
    $l950:;
    if ($tmp940 <= $tmp942) goto $l944; else goto $l946;
    $l951:;
    if ($tmp940 < $tmp942) goto $l944; else goto $l946;
    $l944:;
    {
        panda$core$Object* $tmp952 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i939);
        panda$core$Object* $tmp953 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i939);
        panda$core$Bit $tmp954 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp952), ((org$pandalanguage$pandac$Type*) $tmp953));
        if ($tmp954.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l947:;
    int64_t $tmp956 = $tmp942 - i939.value;
    if ($tmp943) goto $l957; else goto $l958;
    $l957:;
    if ($tmp956 >= 1) goto $l955; else goto $l946;
    $l958:;
    if ($tmp956 > 1) goto $l955; else goto $l946;
    $l955:;
    i939.value += 1;
    goto $l944;
    $l946:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl961;
    panda$collections$Iterator* test$Iter963;
    org$pandalanguage$pandac$MethodDecl* test975;
    panda$collections$Iterator* raw$Iter988;
    org$pandalanguage$pandac$Type* raw1000;
    org$pandalanguage$pandac$MethodDecl* result1005;
    org$pandalanguage$pandac$ClassDecl* $tmp962 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl961 = $tmp962;
    PANDA_ASSERT(((panda$core$Bit) { cl961 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl961);
    {
        ITable* $tmp964 = ((panda$collections$Iterable*) cl961->methods)->$class->itable;
        while ($tmp964->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp964 = $tmp964->next;
        }
        $fn966 $tmp965 = $tmp964->methods[0];
        panda$collections$Iterator* $tmp967 = $tmp965(((panda$collections$Iterable*) cl961->methods));
        test$Iter963 = $tmp967;
        $l968:;
        ITable* $tmp970 = test$Iter963->$class->itable;
        while ($tmp970->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp970 = $tmp970->next;
        }
        $fn972 $tmp971 = $tmp970->methods[0];
        panda$core$Bit $tmp973 = $tmp971(test$Iter963);
        panda$core$Bit $tmp974 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp973);
        if (!$tmp974.value) goto $l969;
        {
            ITable* $tmp976 = test$Iter963->$class->itable;
            while ($tmp976->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp976 = $tmp976->next;
            }
            $fn978 $tmp977 = $tmp976->methods[1];
            panda$core$Object* $tmp979 = $tmp977(test$Iter963);
            test975 = ((org$pandalanguage$pandac$MethodDecl*) $tmp979);
            panda$core$Bit $tmp980 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test975)->name, p_name);
            if ($tmp980.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test975);
                org$pandalanguage$pandac$Type* $tmp981 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test975);
                org$pandalanguage$pandac$Type* $tmp982 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp981);
                panda$core$Bit $tmp983 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp982, p_methodType);
                if ($tmp983.value) {
                {
                    return test975;
                }
                }
            }
            }
        }
        goto $l968;
        $l969:;
    }
    bool $tmp984 = p_checkInterfaces.value;
    if ($tmp984) goto $l985;
    panda$core$Bit $tmp986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl961->classKind, ((panda$core$Int64) { 5012 }));
    $tmp984 = $tmp986.value;
    $l985:;
    panda$core$Bit $tmp987 = { $tmp984 };
    if ($tmp987.value) {
    {
        {
            ITable* $tmp989 = ((panda$collections$Iterable*) cl961->rawInterfaces)->$class->itable;
            while ($tmp989->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp989 = $tmp989->next;
            }
            $fn991 $tmp990 = $tmp989->methods[0];
            panda$collections$Iterator* $tmp992 = $tmp990(((panda$collections$Iterable*) cl961->rawInterfaces));
            raw$Iter988 = $tmp992;
            $l993:;
            ITable* $tmp995 = raw$Iter988->$class->itable;
            while ($tmp995->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp995 = $tmp995->next;
            }
            $fn997 $tmp996 = $tmp995->methods[0];
            panda$core$Bit $tmp998 = $tmp996(raw$Iter988);
            panda$core$Bit $tmp999 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp998);
            if (!$tmp999.value) goto $l994;
            {
                ITable* $tmp1001 = raw$Iter988->$class->itable;
                while ($tmp1001->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1001 = $tmp1001->next;
                }
                $fn1003 $tmp1002 = $tmp1001->methods[1];
                panda$core$Object* $tmp1004 = $tmp1002(raw$Iter988);
                raw1000 = ((org$pandalanguage$pandac$Type*) $tmp1004);
                org$pandalanguage$pandac$Type* $tmp1006 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw1000);
                org$pandalanguage$pandac$MethodDecl* $tmp1007 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1006, p_name, p_methodType, p_checkInterfaces);
                result1005 = $tmp1007;
                if (((panda$core$Bit) { result1005 != NULL }).value) {
                {
                    return result1005;
                }
                }
            }
            goto $l993;
            $l994:;
        }
    }
    }
    if (((panda$core$Bit) { cl961->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1008 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl961->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1009 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1008, p_name, p_methodType, p_checkInterfaces);
        return $tmp1009;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1011;
    org$pandalanguage$pandac$Type* owner1013;
    panda$collections$Iterator* raw$Iter1015;
    org$pandalanguage$pandac$Type* raw1027;
    org$pandalanguage$pandac$MethodDecl* result1032;
    panda$core$Bit $tmp1010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1010.value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1012 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1011 = $tmp1012;
    org$pandalanguage$pandac$Type* $tmp1014 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1013 = $tmp1014;
    {
        ITable* $tmp1016 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1016->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1016 = $tmp1016->next;
        }
        $fn1018 $tmp1017 = $tmp1016->methods[0];
        panda$collections$Iterator* $tmp1019 = $tmp1017(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1015 = $tmp1019;
        $l1020:;
        ITable* $tmp1022 = raw$Iter1015->$class->itable;
        while ($tmp1022->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1022 = $tmp1022->next;
        }
        $fn1024 $tmp1023 = $tmp1022->methods[0];
        panda$core$Bit $tmp1025 = $tmp1023(raw$Iter1015);
        panda$core$Bit $tmp1026 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1025);
        if (!$tmp1026.value) goto $l1021;
        {
            ITable* $tmp1028 = raw$Iter1015->$class->itable;
            while ($tmp1028->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1028 = $tmp1028->next;
            }
            $fn1030 $tmp1029 = $tmp1028->methods[1];
            panda$core$Object* $tmp1031 = $tmp1029(raw$Iter1015);
            raw1027 = ((org$pandalanguage$pandac$Type*) $tmp1031);
            org$pandalanguage$pandac$Type* $tmp1033 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1013, raw1027);
            org$pandalanguage$pandac$MethodDecl* $tmp1034 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1033, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1011, ((panda$core$Bit) { true }));
            result1032 = $tmp1034;
            if (((panda$core$Bit) { result1032 != NULL }).value) {
            {
                return result1032;
            }
            }
        }
        goto $l1020;
        $l1021:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1035 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1013, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1036 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1035, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1011, ((panda$core$Bit) { true }));
        return $tmp1036;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1037;
    panda$collections$Array* result1039;
    panda$collections$Iterator* m$Iter1042;
    org$pandalanguage$pandac$MethodDecl* m1054;
    org$pandalanguage$pandac$MethodDecl* found1059;
    org$pandalanguage$pandac$ClassDecl* $tmp1038 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1037 = $tmp1038;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1037 != NULL }).value);
    panda$collections$Array* $tmp1040 = (panda$collections$Array*) malloc(40);
    $tmp1040->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1040->refCount.value = 1;
    panda$collections$Array$init($tmp1040);
    result1039 = $tmp1040;
    {
        ITable* $tmp1043 = ((panda$collections$Iterable*) intfClass1037->methods)->$class->itable;
        while ($tmp1043->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1043 = $tmp1043->next;
        }
        $fn1045 $tmp1044 = $tmp1043->methods[0];
        panda$collections$Iterator* $tmp1046 = $tmp1044(((panda$collections$Iterable*) intfClass1037->methods));
        m$Iter1042 = $tmp1046;
        $l1047:;
        ITable* $tmp1049 = m$Iter1042->$class->itable;
        while ($tmp1049->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1049 = $tmp1049->next;
        }
        $fn1051 $tmp1050 = $tmp1049->methods[0];
        panda$core$Bit $tmp1052 = $tmp1050(m$Iter1042);
        panda$core$Bit $tmp1053 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1052);
        if (!$tmp1053.value) goto $l1048;
        {
            ITable* $tmp1055 = m$Iter1042->$class->itable;
            while ($tmp1055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1055 = $tmp1055->next;
            }
            $fn1057 $tmp1056 = $tmp1055->methods[1];
            panda$core$Object* $tmp1058 = $tmp1056(m$Iter1042);
            m1054 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1058);
            org$pandalanguage$pandac$Type* $tmp1060 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1061 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1054);
            org$pandalanguage$pandac$Type* $tmp1062 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1061);
            org$pandalanguage$pandac$MethodDecl* $tmp1063 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1060, ((org$pandalanguage$pandac$Symbol*) m1054)->name, $tmp1062, ((panda$core$Bit) { false }));
            found1059 = $tmp1063;
            PANDA_ASSERT(((panda$core$Bit) { found1059 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1039, ((panda$core$Object*) found1059));
        }
        goto $l1047;
        $l1048:;
    }
    return ((panda$collections$ListView*) result1039);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1065;
    panda$collections$Iterator* rawIntf$Iter1068;
    org$pandalanguage$pandac$Type* rawIntf1080;
    org$pandalanguage$pandac$ClassDecl* intf1085;
    panda$core$Bit $tmp1064 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1064.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1066 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1065 = $tmp1066;
            if (((panda$core$Bit) { superCl1065 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1067 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1065);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1067));
            }
            }
        }
        }
        {
            ITable* $tmp1069 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1069->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1069 = $tmp1069->next;
            }
            $fn1071 $tmp1070 = $tmp1069->methods[0];
            panda$collections$Iterator* $tmp1072 = $tmp1070(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1068 = $tmp1072;
            $l1073:;
            ITable* $tmp1075 = rawIntf$Iter1068->$class->itable;
            while ($tmp1075->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1075 = $tmp1075->next;
            }
            $fn1077 $tmp1076 = $tmp1075->methods[0];
            panda$core$Bit $tmp1078 = $tmp1076(rawIntf$Iter1068);
            panda$core$Bit $tmp1079 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1078);
            if (!$tmp1079.value) goto $l1074;
            {
                ITable* $tmp1081 = rawIntf$Iter1068->$class->itable;
                while ($tmp1081->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1081 = $tmp1081->next;
                }
                $fn1083 $tmp1082 = $tmp1081->methods[1];
                panda$core$Object* $tmp1084 = $tmp1082(rawIntf$Iter1068);
                rawIntf1080 = ((org$pandalanguage$pandac$Type*) $tmp1084);
                org$pandalanguage$pandac$ClassDecl* $tmp1086 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1080);
                intf1085 = $tmp1086;
                if (((panda$core$Bit) { intf1085 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1087 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1085);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1087));
                }
                }
            }
            goto $l1073;
            $l1074:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1090;
    panda$collections$Iterator* derived$Iter1093;
    org$pandalanguage$pandac$MethodDecl* derived1105;
    panda$core$Bit found1115;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1116;
    org$pandalanguage$pandac$MethodDecl* base1131;
    panda$core$Int64 $tmp1088 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1088, ((panda$core$Int64) { 0 }));
    if ($tmp1089.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1091 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1090 = $tmp1091;
            if (((panda$core$Bit) { superCl1090 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1092 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1090);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1092));
        }
        }
        {
            ITable* $tmp1094 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1094->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1094 = $tmp1094->next;
            }
            $fn1096 $tmp1095 = $tmp1094->methods[0];
            panda$collections$Iterator* $tmp1097 = $tmp1095(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1093 = $tmp1097;
            $l1098:;
            ITable* $tmp1100 = derived$Iter1093->$class->itable;
            while ($tmp1100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1100 = $tmp1100->next;
            }
            $fn1102 $tmp1101 = $tmp1100->methods[0];
            panda$core$Bit $tmp1103 = $tmp1101(derived$Iter1093);
            panda$core$Bit $tmp1104 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1103);
            if (!$tmp1104.value) goto $l1099;
            {
                ITable* $tmp1106 = derived$Iter1093->$class->itable;
                while ($tmp1106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1106 = $tmp1106->next;
                }
                $fn1108 $tmp1107 = $tmp1106->methods[1];
                panda$core$Object* $tmp1109 = $tmp1107(derived$Iter1093);
                derived1105 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1109);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1105);
                panda$core$Bit $tmp1111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1105->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1110 = $tmp1111.value;
                if ($tmp1110) goto $l1112;
                panda$core$Bit $tmp1113 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1105->annotations);
                $tmp1110 = $tmp1113.value;
                $l1112:;
                panda$core$Bit $tmp1114 = { $tmp1110 };
                if ($tmp1114.value) {
                {
                    goto $l1098;
                }
                }
                found1115 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1117 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1116, ((panda$core$Int64) { 0 }), $tmp1117, ((panda$core$Bit) { false }));
                int64_t $tmp1119 = $tmp1116.min.value;
                panda$core$Int64 i1118 = { $tmp1119 };
                int64_t $tmp1121 = $tmp1116.max.value;
                bool $tmp1122 = $tmp1116.inclusive.value;
                if ($tmp1122) goto $l1129; else goto $l1130;
                $l1129:;
                if ($tmp1119 <= $tmp1121) goto $l1123; else goto $l1125;
                $l1130:;
                if ($tmp1119 < $tmp1121) goto $l1123; else goto $l1125;
                $l1123:;
                {
                    panda$core$Object* $tmp1132 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1118);
                    base1131 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1132);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1131);
                    panda$core$Bit $tmp1133 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1105, base1131);
                    if ($tmp1133.value) {
                    {
                        found1115 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1118, ((panda$core$Object*) derived1105));
                        goto $l1125;
                    }
                    }
                }
                $l1126:;
                int64_t $tmp1135 = $tmp1121 - i1118.value;
                if ($tmp1122) goto $l1136; else goto $l1137;
                $l1136:;
                if ($tmp1135 >= 1) goto $l1134; else goto $l1125;
                $l1137:;
                if ($tmp1135 > 1) goto $l1134; else goto $l1125;
                $l1134:;
                i1118.value += 1;
                goto $l1123;
                $l1125:;
                panda$core$Bit $tmp1140 = panda$core$Bit$$NOT$R$panda$core$Bit(found1115);
                if ($tmp1140.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1105));
                }
                }
            }
            goto $l1098;
            $l1099:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1141;
    org$pandalanguage$pandac$Symbol* s1144;
    panda$collections$Iterator* m$Iter1150;
    org$pandalanguage$pandac$MethodDecl* m1162;
    panda$collections$Iterator* p$Iter1169;
    org$pandalanguage$pandac$SymbolTable* p1181;
    panda$collections$Array* children1186;
    panda$collections$Array* types1198;
    panda$collections$Iterator* m$Iter1201;
    org$pandalanguage$pandac$MethodRef* m1213;
    panda$collections$Array* $tmp1142 = (panda$collections$Array*) malloc(40);
    $tmp1142->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1142->refCount.value = 1;
    panda$collections$Array$init($tmp1142);
    methods1141 = $tmp1142;
    org$pandalanguage$pandac$Symbol* $tmp1145 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1144 = $tmp1145;
    PANDA_ASSERT(((panda$core$Bit) { s1144 != NULL }).value);
    panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1144->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1146.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1144));
        org$pandalanguage$pandac$MethodRef* $tmp1147 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1147->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1147->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1147, ((org$pandalanguage$pandac$MethodDecl*) s1144), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1141, ((panda$core$Object*) $tmp1147));
    }
    }
    else {
    {
        panda$core$Bit $tmp1149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1144->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1149.value);
        {
            ITable* $tmp1151 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1144)->methods)->$class->itable;
            while ($tmp1151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1151 = $tmp1151->next;
            }
            $fn1153 $tmp1152 = $tmp1151->methods[0];
            panda$collections$Iterator* $tmp1154 = $tmp1152(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1144)->methods));
            m$Iter1150 = $tmp1154;
            $l1155:;
            ITable* $tmp1157 = m$Iter1150->$class->itable;
            while ($tmp1157->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1157 = $tmp1157->next;
            }
            $fn1159 $tmp1158 = $tmp1157->methods[0];
            panda$core$Bit $tmp1160 = $tmp1158(m$Iter1150);
            panda$core$Bit $tmp1161 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1160);
            if (!$tmp1161.value) goto $l1156;
            {
                ITable* $tmp1163 = m$Iter1150->$class->itable;
                while ($tmp1163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1163 = $tmp1163->next;
                }
                $fn1165 $tmp1164 = $tmp1163->methods[1];
                panda$core$Object* $tmp1166 = $tmp1164(m$Iter1150);
                m1162 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1166);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1162);
                org$pandalanguage$pandac$MethodRef* $tmp1167 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1167->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1167->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1167, m1162, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1141, ((panda$core$Object*) $tmp1167));
            }
            goto $l1155;
            $l1156:;
        }
    }
    }
    {
        ITable* $tmp1170 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1170->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1170 = $tmp1170->next;
        }
        $fn1172 $tmp1171 = $tmp1170->methods[0];
        panda$collections$Iterator* $tmp1173 = $tmp1171(((panda$collections$Iterable*) p_st->parents));
        p$Iter1169 = $tmp1173;
        $l1174:;
        ITable* $tmp1176 = p$Iter1169->$class->itable;
        while ($tmp1176->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1176 = $tmp1176->next;
        }
        $fn1178 $tmp1177 = $tmp1176->methods[0];
        panda$core$Bit $tmp1179 = $tmp1177(p$Iter1169);
        panda$core$Bit $tmp1180 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1179);
        if (!$tmp1180.value) goto $l1175;
        {
            ITable* $tmp1182 = p$Iter1169->$class->itable;
            while ($tmp1182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1182 = $tmp1182->next;
            }
            $fn1184 $tmp1183 = $tmp1182->methods[1];
            panda$core$Object* $tmp1185 = $tmp1183(p$Iter1169);
            p1181 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1185);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1181, p_name, methods1141, p_types);
        }
        goto $l1174;
        $l1175:;
    }
    panda$collections$Array* $tmp1187 = (panda$collections$Array*) malloc(40);
    $tmp1187->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1187->refCount.value = 1;
    panda$collections$Array$init($tmp1187);
    children1186 = $tmp1187;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1186, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1189 = panda$collections$Array$get_count$R$panda$core$Int64(methods1141);
    panda$core$Bit $tmp1190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1189, ((panda$core$Int64) { 1 }));
    if ($tmp1190.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1191 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1191->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1191->refCount.value = 1;
        panda$core$Object* $tmp1193 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1141, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1194 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1193));
        panda$core$Object* $tmp1195 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1141, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1191, ((panda$core$Int64) { 1002 }), p_position, $tmp1194, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1195)), ((panda$collections$ListView*) children1186));
        return $tmp1191;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1196 = panda$collections$Array$get_count$R$panda$core$Int64(methods1141);
        panda$core$Bit $tmp1197 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1196, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1197.value);
        panda$collections$Array* $tmp1199 = (panda$collections$Array*) malloc(40);
        $tmp1199->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1199->refCount.value = 1;
        panda$collections$Array$init($tmp1199);
        types1198 = $tmp1199;
        {
            ITable* $tmp1202 = ((panda$collections$Iterable*) methods1141)->$class->itable;
            while ($tmp1202->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1202 = $tmp1202->next;
            }
            $fn1204 $tmp1203 = $tmp1202->methods[0];
            panda$collections$Iterator* $tmp1205 = $tmp1203(((panda$collections$Iterable*) methods1141));
            m$Iter1201 = $tmp1205;
            $l1206:;
            ITable* $tmp1208 = m$Iter1201->$class->itable;
            while ($tmp1208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1208 = $tmp1208->next;
            }
            $fn1210 $tmp1209 = $tmp1208->methods[0];
            panda$core$Bit $tmp1211 = $tmp1209(m$Iter1201);
            panda$core$Bit $tmp1212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1211);
            if (!$tmp1212.value) goto $l1207;
            {
                ITable* $tmp1214 = m$Iter1201->$class->itable;
                while ($tmp1214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1214 = $tmp1214->next;
                }
                $fn1216 $tmp1215 = $tmp1214->methods[1];
                panda$core$Object* $tmp1217 = $tmp1215(m$Iter1201);
                m1213 = ((org$pandalanguage$pandac$MethodRef*) $tmp1217);
                org$pandalanguage$pandac$Type* $tmp1218 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1213);
                panda$collections$Array$add$panda$collections$Array$T(types1198, ((panda$core$Object*) $tmp1218));
            }
            goto $l1206;
            $l1207:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1219 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1219->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1219->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1221 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1221->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1221->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1221, ((panda$collections$ListView*) types1198));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1219, ((panda$core$Int64) { 1003 }), p_position, $tmp1221, ((panda$core$Object*) methods1141), ((panda$collections$ListView*) children1186));
        return $tmp1219;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1223;
    org$pandalanguage$pandac$FieldDecl* f1239;
    panda$collections$Array* children1242;
    org$pandalanguage$pandac$Type* effectiveType1247;
    org$pandalanguage$pandac$IRNode* result1252;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1224 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1223 = $tmp1224;
            if (((panda$core$Bit) { cl1223 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1225 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1223);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1223, $tmp1225);
                org$pandalanguage$pandac$IRNode* $tmp1226 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1226->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1226->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1228 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1229 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1223);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1226, ((panda$core$Int64) { 1001 }), p_position, $tmp1228, $tmp1229);
                return $tmp1226;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1230 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1230);
            org$pandalanguage$pandac$IRNode* $tmp1231 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1231->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1231->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1233 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1234 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1231, ((panda$core$Int64) { 1001 }), p_position, $tmp1233, $tmp1234);
            return $tmp1231;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1235 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1236 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1235);
            return $tmp1236;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1237 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1237->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1237->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1237, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1237;
        }
        break;
        case 202:
        {
            f1239 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1239);
            org$pandalanguage$pandac$Type* $tmp1240 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1241 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1239->type, $tmp1240);
            if ($tmp1241.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1243 = (panda$collections$Array*) malloc(40);
            $tmp1243->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1243->refCount.value = 1;
            panda$collections$Array$init($tmp1243);
            children1242 = $tmp1243;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1245.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1246);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1248 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1239->type);
                effectiveType1247 = $tmp1248;
                panda$core$Bit $tmp1249 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1239->annotations);
                if ($tmp1249.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1242, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1250 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1239->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1251 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1250);
                    panda$collections$Array$add$panda$collections$Array$T(children1242, ((panda$core$Object*) $tmp1251));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1253 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1253->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1253->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1253, ((panda$core$Int64) { 1026 }), p_position, f1239->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1242));
                result1252 = $tmp1253;
                panda$core$Bit $tmp1255 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1247, result1252->type);
                if ($tmp1255.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1256 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1252, p_position, ((panda$core$Bit) { false }), effectiveType1247);
                    result1252 = $tmp1256;
                }
                }
                return result1252;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1257 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1257->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1257->refCount.value = 1;
                panda$core$Object* $tmp1259 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1260 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1259));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1257, ((panda$core$Int64) { 1025 }), p_position, $tmp1260);
                panda$collections$Array$add$panda$collections$Array$T(children1242, ((panda$core$Object*) $tmp1257));
                org$pandalanguage$pandac$IRNode* $tmp1261 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1261->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1261->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1261, ((panda$core$Int64) { 1026 }), p_position, f1239->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1242));
                return $tmp1261;
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
    panda$collections$HashMap* typeMap1269;
    org$pandalanguage$pandac$Type* base1272;
    org$pandalanguage$pandac$ClassDecl* cl1274;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1276;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1263 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1263, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1264.value);
            panda$core$Object* $tmp1265 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1266 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1265), p_raw);
            return $tmp1266;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1267 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1268 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1267, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1268.value);
            panda$collections$HashMap* $tmp1270 = (panda$collections$HashMap*) malloc(56);
            $tmp1270->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1270->refCount.value = 1;
            panda$collections$HashMap$init($tmp1270);
            typeMap1269 = $tmp1270;
            panda$core$Object* $tmp1273 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1272 = ((org$pandalanguage$pandac$Type*) $tmp1273);
            org$pandalanguage$pandac$ClassDecl* $tmp1275 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1272)->name);
            cl1274 = $tmp1275;
            PANDA_ASSERT(((panda$core$Bit) { cl1274 != NULL }).value);
            panda$core$Int64 $tmp1277 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1276, ((panda$core$Int64) { 1 }), $tmp1277, ((panda$core$Bit) { false }));
            int64_t $tmp1279 = $tmp1276.min.value;
            panda$core$Int64 i1278 = { $tmp1279 };
            int64_t $tmp1281 = $tmp1276.max.value;
            bool $tmp1282 = $tmp1276.inclusive.value;
            if ($tmp1282) goto $l1289; else goto $l1290;
            $l1289:;
            if ($tmp1279 <= $tmp1281) goto $l1283; else goto $l1285;
            $l1290:;
            if ($tmp1279 < $tmp1281) goto $l1283; else goto $l1285;
            $l1283:;
            {
                panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1274)->name, &$s1291);
                panda$core$Int64 $tmp1293 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1278, ((panda$core$Int64) { 1 }));
                ITable* $tmp1294 = ((panda$collections$ListView*) cl1274->parameters)->$class->itable;
                while ($tmp1294->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1294 = $tmp1294->next;
                }
                $fn1296 $tmp1295 = $tmp1294->methods[0];
                panda$core$Object* $tmp1297 = $tmp1295(((panda$collections$ListView*) cl1274->parameters), $tmp1293);
                panda$core$String* $tmp1298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1292, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1297))->name);
                panda$core$Object* $tmp1299 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1278);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1269, ((panda$collections$Key*) $tmp1298), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1299)));
            }
            $l1286:;
            int64_t $tmp1301 = $tmp1281 - i1278.value;
            if ($tmp1282) goto $l1302; else goto $l1303;
            $l1302:;
            if ($tmp1301 >= 1) goto $l1300; else goto $l1285;
            $l1303:;
            if ($tmp1301 > 1) goto $l1300; else goto $l1285;
            $l1300:;
            i1278.value += 1;
            goto $l1283;
            $l1285:;
            org$pandalanguage$pandac$Type* $tmp1306 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1269);
            return $tmp1306;
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
    org$pandalanguage$pandac$Type* $tmp1307 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1308 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1307);
    if ($tmp1308.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1309 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1309;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1310 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1311 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1310);
    if ($tmp1311.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1312 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1312;
    }
    }
    panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1313.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1314 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1314;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* step1341;
    panda$collections$Array* args1368;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1369;
    org$pandalanguage$pandac$IRNode* c1371;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Int64 $tmp1315 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1315, ((panda$core$Int64) { 2 }));
            if ($tmp1316.value) {
            {
                panda$core$Object* $tmp1317 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1317)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1318.value) {
                {
                    panda$core$Object* $tmp1319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1319)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1320.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1321 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1322 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1321);
                        org$pandalanguage$pandac$Type* $tmp1323 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1322);
                        return $tmp1323;
                    }
                    }
                    panda$core$Object* $tmp1324 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp1325 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1324)->type);
                    org$pandalanguage$pandac$Type* $tmp1326 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1325);
                    org$pandalanguage$pandac$Type* $tmp1327 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1326);
                    return $tmp1327;
                }
                }
                panda$core$Object* $tmp1328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1328)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1329.value) {
                {
                    panda$core$Object* $tmp1330 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp1331 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1330)->type);
                    org$pandalanguage$pandac$Type* $tmp1332 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1331);
                    org$pandalanguage$pandac$Type* $tmp1333 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1332);
                    return $tmp1333;
                }
                }
                panda$core$Object* $tmp1334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1334)->type);
                panda$core$Object* $tmp1336 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1337 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1336)->type);
                org$pandalanguage$pandac$Type* $tmp1338 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1335, $tmp1337);
                org$pandalanguage$pandac$Type* $tmp1339 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1338);
                org$pandalanguage$pandac$Type* $tmp1340 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1339);
                return $tmp1340;
            }
            }
            panda$core$Object* $tmp1342 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1343 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1342)->type);
            step1341 = $tmp1343;
            panda$core$Object* $tmp1344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1344)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1345.value) {
            {
                panda$core$Object* $tmp1346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1346)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1347.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1348 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1348);
                    org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1349, step1341);
                    return $tmp1350;
                }
                }
                panda$core$Object* $tmp1351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1351)->type);
                org$pandalanguage$pandac$Type* $tmp1353 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1352);
                org$pandalanguage$pandac$Type* $tmp1354 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1353, step1341);
                return $tmp1354;
            }
            }
            panda$core$Object* $tmp1355 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1355)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1356.value) {
            {
                panda$core$Object* $tmp1357 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1358 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1357)->type);
                org$pandalanguage$pandac$Type* $tmp1359 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1358);
                org$pandalanguage$pandac$Type* $tmp1360 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1359, step1341);
                return $tmp1360;
            }
            }
            panda$core$Object* $tmp1361 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1362 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1361)->type);
            panda$core$Object* $tmp1363 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1364 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1363)->type);
            org$pandalanguage$pandac$Type* $tmp1365 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1362, $tmp1364);
            org$pandalanguage$pandac$Type* $tmp1366 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1365);
            org$pandalanguage$pandac$Type* $tmp1367 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1366, step1341);
            return $tmp1367;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1369, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1370 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1369);
            args1368 = $tmp1370;
            panda$core$Object* $tmp1372 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1374 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1372), &$s1373, ((panda$collections$ListView*) args1368));
            c1371 = $tmp1374;
            if (((panda$core$Bit) { c1371 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1375 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1375;
            }
            }
            return c1371->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1376 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1376;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1387;
    panda$core$Int64$nullable result1391;
    panda$core$Int64$nullable best1400;
    panda$collections$Iterator* t$Iter1401;
    org$pandalanguage$pandac$Type* t1413;
    panda$core$Int64$nullable cost1418;
    org$pandalanguage$pandac$ClassDecl* cl1432;
    panda$core$Int64$nullable cost1434;
    panda$collections$Iterator* intf$Iter1439;
    org$pandalanguage$pandac$Type* intf1451;
    panda$core$Int64$nullable cost1456;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1377 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1377.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1378 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1379 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1378);
    if ($tmp1379.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1380.value) {
    {
        panda$core$Bit $tmp1381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1381.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1382 = $tmp1383.value;
    if (!$tmp1382) goto $l1384;
    panda$core$Bit $tmp1385 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1382 = $tmp1385.value;
    $l1384:;
    panda$core$Bit $tmp1386 = { $tmp1382 };
    if ($tmp1386.value) {
    {
        panda$core$Object* $tmp1388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1389 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1388), p_target);
        result1387 = $tmp1389;
        if (((panda$core$Bit) { !result1387.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1390 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1387.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1390, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1392 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1393 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1392));
            result1391 = $tmp1393;
            if (((panda$core$Bit) { !result1391.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1394 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1391.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1394, true });
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
            panda$core$Bit $tmp1395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1395.value) {
            {
                panda$core$Object* $tmp1396 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1397 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1396), p_target);
                return $tmp1397;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1398 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1399 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1398, p_target);
            return $tmp1399;
        }
        break;
        case 17:
        {
            best1400 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1402 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1402->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1402 = $tmp1402->next;
                }
                $fn1404 $tmp1403 = $tmp1402->methods[0];
                panda$collections$Iterator* $tmp1405 = $tmp1403(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1401 = $tmp1405;
                $l1406:;
                ITable* $tmp1408 = t$Iter1401->$class->itable;
                while ($tmp1408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1408 = $tmp1408->next;
                }
                $fn1410 $tmp1409 = $tmp1408->methods[0];
                panda$core$Bit $tmp1411 = $tmp1409(t$Iter1401);
                panda$core$Bit $tmp1412 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1411);
                if (!$tmp1412.value) goto $l1407;
                {
                    ITable* $tmp1414 = t$Iter1401->$class->itable;
                    while ($tmp1414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1414 = $tmp1414->next;
                    }
                    $fn1416 $tmp1415 = $tmp1414->methods[1];
                    panda$core$Object* $tmp1417 = $tmp1415(t$Iter1401);
                    t1413 = ((org$pandalanguage$pandac$Type*) $tmp1417);
                    panda$core$Int64$nullable $tmp1419 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1413, p_target);
                    cost1418 = $tmp1419;
                    bool $tmp1420 = ((panda$core$Bit) { cost1418.nonnull }).value;
                    if (!$tmp1420) goto $l1421;
                    bool $tmp1422 = ((panda$core$Bit) { !best1400.nonnull }).value;
                    if ($tmp1422) goto $l1423;
                    panda$core$Bit $tmp1424 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1418.value), ((panda$core$Int64) best1400.value));
                    $tmp1422 = $tmp1424.value;
                    $l1423:;
                    panda$core$Bit $tmp1425 = { $tmp1422 };
                    $tmp1420 = $tmp1425.value;
                    $l1421:;
                    panda$core$Bit $tmp1426 = { $tmp1420 };
                    if ($tmp1426.value) {
                    {
                        best1400 = cost1418;
                    }
                    }
                }
                goto $l1406;
                $l1407:;
            }
            return best1400;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1427 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1427;
        }
        break;
    }
    panda$core$Bit $tmp1428 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1429 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1428);
    if ($tmp1429.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1430 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1431 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1430);
    if ($tmp1431.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1433 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1432 = $tmp1433;
    PANDA_ASSERT(((panda$core$Bit) { cl1432 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1432);
    if (((panda$core$Bit) { cl1432->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1435 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1432->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1436 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1435);
        panda$core$Int64$nullable $tmp1437 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1436, p_target);
        cost1434 = $tmp1437;
        if (((panda$core$Bit) { cost1434.nonnull }).value) {
        {
            panda$core$Int64 $tmp1438 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1434.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1438, true });
        }
        }
    }
    }
    {
        ITable* $tmp1440 = ((panda$collections$Iterable*) cl1432->rawInterfaces)->$class->itable;
        while ($tmp1440->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1440 = $tmp1440->next;
        }
        $fn1442 $tmp1441 = $tmp1440->methods[0];
        panda$collections$Iterator* $tmp1443 = $tmp1441(((panda$collections$Iterable*) cl1432->rawInterfaces));
        intf$Iter1439 = $tmp1443;
        $l1444:;
        ITable* $tmp1446 = intf$Iter1439->$class->itable;
        while ($tmp1446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1446 = $tmp1446->next;
        }
        $fn1448 $tmp1447 = $tmp1446->methods[0];
        panda$core$Bit $tmp1449 = $tmp1447(intf$Iter1439);
        panda$core$Bit $tmp1450 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1449);
        if (!$tmp1450.value) goto $l1445;
        {
            ITable* $tmp1452 = intf$Iter1439->$class->itable;
            while ($tmp1452->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1452 = $tmp1452->next;
            }
            $fn1454 $tmp1453 = $tmp1452->methods[1];
            panda$core$Object* $tmp1455 = $tmp1453(intf$Iter1439);
            intf1451 = ((org$pandalanguage$pandac$Type*) $tmp1455);
            org$pandalanguage$pandac$Type* $tmp1457 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1451);
            org$pandalanguage$pandac$Type* $tmp1458 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1457);
            panda$core$Int64$nullable $tmp1459 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1458, p_target);
            cost1456 = $tmp1459;
            if (((panda$core$Bit) { cost1456.nonnull }).value) {
            {
                panda$core$Int64 $tmp1460 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1456.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1460, true });
            }
            }
        }
        goto $l1444;
        $l1445:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1462 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1461 = $tmp1462.value;
    if (!$tmp1461) goto $l1463;
    panda$core$Bit $tmp1464 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1461 = $tmp1464.value;
    $l1463:;
    panda$core$Bit $tmp1465 = { $tmp1461 };
    if ($tmp1465.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1467 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1466 = $tmp1467.value;
    if (!$tmp1466) goto $l1468;
    panda$core$Bit $tmp1469 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1466 = $tmp1469.value;
    $l1468:;
    panda$core$Bit $tmp1470 = { $tmp1466 };
    if ($tmp1470.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1472 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1471 = $tmp1472.value;
    if (!$tmp1471) goto $l1473;
    panda$core$Bit $tmp1474 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1471 = $tmp1474.value;
    $l1473:;
    panda$core$Bit $tmp1475 = { $tmp1471 };
    if ($tmp1475.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1476 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1476.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1477 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1477.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1478 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1478.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1481;
    panda$core$Int64$nullable cost11554;
    panda$core$Int64$nullable cost21558;
    panda$core$Int64 cost1566;
    panda$core$Int64$nullable cost11580;
    panda$core$Int64$nullable cost21584;
    panda$core$Int64$nullable cost31589;
    panda$collections$Array* args1596;
    org$pandalanguage$pandac$ClassDecl* targetClass1606;
    panda$collections$Iterator* m$Iter1608;
    org$pandalanguage$pandac$MethodDecl* m1620;
    panda$core$Int64$nullable cost1629;
    panda$core$Bit $tmp1479 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1479.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1480.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1483 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1482));
            cost1481 = $tmp1483;
            if (((panda$core$Bit) { !cost1481.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1484.value) {
            {
                return cost1481;
            }
            }
            panda$core$Int64 $tmp1485 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1481.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1485, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1486 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1486;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1487.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1488 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1488.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1489 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1490 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1489, p_target);
                return $tmp1490;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1492 = $tmp1493.value;
            if (!$tmp1492) goto $l1494;
            panda$core$Int64 $tmp1495 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1496 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1495);
            panda$core$Int64 $tmp1497 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1498 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1496, $tmp1497);
            $tmp1492 = $tmp1498.value;
            $l1494:;
            panda$core$Bit $tmp1499 = { $tmp1492 };
            bool $tmp1491 = $tmp1499.value;
            if ($tmp1491) goto $l1500;
            panda$core$Bit $tmp1502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1501 = $tmp1502.value;
            if (!$tmp1501) goto $l1503;
            panda$core$Int64 $tmp1504 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1505 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1506 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1504, $tmp1505);
            $tmp1501 = $tmp1506.value;
            $l1503:;
            panda$core$Bit $tmp1507 = { $tmp1501 };
            $tmp1491 = $tmp1507.value;
            $l1500:;
            panda$core$Bit $tmp1508 = { $tmp1491 };
            if ($tmp1508.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1509 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1510 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1509);
            if ($tmp1510.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1511 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1512 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1511, p_target);
                return $tmp1512;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1514 = $tmp1515.value;
            if (!$tmp1514) goto $l1516;
            panda$core$Int64 $tmp1517 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1518 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1517);
            panda$core$Int64 $tmp1519 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1518);
            panda$core$Int64 $tmp1520 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1521 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1519, $tmp1520);
            $tmp1514 = $tmp1521.value;
            $l1516:;
            panda$core$Bit $tmp1522 = { $tmp1514 };
            bool $tmp1513 = $tmp1522.value;
            if ($tmp1513) goto $l1523;
            panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1524 = $tmp1525.value;
            if (!$tmp1524) goto $l1526;
            panda$core$Int64 $tmp1527 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1528 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1527);
            panda$core$Int64 $tmp1529 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1528);
            panda$core$Int64 $tmp1530 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1531 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1529, $tmp1530);
            $tmp1524 = $tmp1531.value;
            $l1526:;
            panda$core$Bit $tmp1532 = { $tmp1524 };
            $tmp1513 = $tmp1532.value;
            $l1523:;
            panda$core$Bit $tmp1533 = { $tmp1513 };
            if ($tmp1533.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1534 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1535 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1534);
            if ($tmp1535.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1536 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1537 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1536, p_target);
                return $tmp1537;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1538 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1538.value) {
            {
                panda$core$Int64 $tmp1539 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1540 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1539, ((panda$core$Int64) { 2 }));
                if ($tmp1540.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1542 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1542)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1541 = $tmp1543.value;
                if (!$tmp1541) goto $l1544;
                panda$core$Object* $tmp1545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1545)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1541 = $tmp1546.value;
                $l1544:;
                panda$core$Bit $tmp1547 = { $tmp1541 };
                if ($tmp1547.value) {
                {
                    panda$core$Object* $tmp1548 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1548)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1549.value) {
                    {
                        panda$core$Object* $tmp1550 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1550)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1552 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1551));
                        if ($tmp1552.value) {
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
                panda$core$Bit $tmp1553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1553.value);
                panda$core$Object* $tmp1555 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1556 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1557 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1555), ((org$pandalanguage$pandac$Type*) $tmp1556));
                cost11554 = $tmp1557;
                if (((panda$core$Bit) { !cost11554.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1559 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1560 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1561 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1559), ((org$pandalanguage$pandac$Type*) $tmp1560));
                cost21558 = $tmp1561;
                if (((panda$core$Bit) { !cost21558.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1562 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11554.value), ((panda$core$Int64) cost21558.value));
                return ((panda$core$Int64$nullable) { $tmp1562, true });
            }
            }
            panda$core$Bit $tmp1563 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1563.value) {
            {
                panda$core$Int64 $tmp1564 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1565 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1564, ((panda$core$Int64) { 3 }));
                if ($tmp1565.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1568 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1568)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1567 = $tmp1569.value;
                if (!$tmp1567) goto $l1570;
                panda$core$Object* $tmp1571 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1571)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1567 = $tmp1572.value;
                $l1570:;
                panda$core$Bit $tmp1573 = { $tmp1567 };
                if ($tmp1573.value) {
                {
                    panda$core$Object* $tmp1574 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1574)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1575.value) {
                    {
                        panda$core$Object* $tmp1576 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1577 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1576)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1578 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1577));
                        if ($tmp1578.value) {
                        {
                            cost1566 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1566 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1579.value);
                    panda$core$Object* $tmp1581 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1582 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1583 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1581), ((org$pandalanguage$pandac$Type*) $tmp1582));
                    cost11580 = $tmp1583;
                    if (((panda$core$Bit) { !cost11580.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1585 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1586 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1587 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1585), ((org$pandalanguage$pandac$Type*) $tmp1586));
                    cost21584 = $tmp1587;
                    if (((panda$core$Bit) { !cost21584.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1588 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11580.value), ((panda$core$Int64) cost21584.value));
                    cost1566 = $tmp1588;
                }
                }
                panda$core$Object* $tmp1590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1591 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1592 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1590), ((org$pandalanguage$pandac$Type*) $tmp1591));
                cost31589 = $tmp1592;
                if (((panda$core$Bit) { !cost31589.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1593 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(cost1566, ((panda$core$Int64) cost31589.value));
                return ((panda$core$Int64$nullable) { $tmp1593, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1594 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1595 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1594, p_target);
            return $tmp1595;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1597 = (panda$collections$Array*) malloc(40);
            $tmp1597->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1597->refCount.value = 1;
            panda$collections$Array$init($tmp1597);
            args1596 = $tmp1597;
            panda$core$Object* $tmp1599 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1596, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1599)));
            panda$core$Object* $tmp1600 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1602 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1600), &$s1601, ((panda$collections$ListView*) args1596));
            panda$core$Int64$nullable $tmp1603 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1602, p_target);
            return $tmp1603;
        }
        break;
    }
    panda$core$Bit $tmp1604 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1605 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1604);
    if ($tmp1605.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1607 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1606 = $tmp1607;
    if (((panda$core$Bit) { targetClass1606 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1609 = ((panda$collections$Iterable*) targetClass1606->methods)->$class->itable;
        while ($tmp1609->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1609 = $tmp1609->next;
        }
        $fn1611 $tmp1610 = $tmp1609->methods[0];
        panda$collections$Iterator* $tmp1612 = $tmp1610(((panda$collections$Iterable*) targetClass1606->methods));
        m$Iter1608 = $tmp1612;
        $l1613:;
        ITable* $tmp1615 = m$Iter1608->$class->itable;
        while ($tmp1615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1615 = $tmp1615->next;
        }
        $fn1617 $tmp1616 = $tmp1615->methods[0];
        panda$core$Bit $tmp1618 = $tmp1616(m$Iter1608);
        panda$core$Bit $tmp1619 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1618);
        if (!$tmp1619.value) goto $l1614;
        {
            ITable* $tmp1621 = m$Iter1608->$class->itable;
            while ($tmp1621->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1621 = $tmp1621->next;
            }
            $fn1623 $tmp1622 = $tmp1621->methods[1];
            panda$core$Object* $tmp1624 = $tmp1622(m$Iter1608);
            m1620 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1624);
            panda$core$Bit $tmp1625 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1620->annotations);
            if ($tmp1625.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1620);
                panda$core$Bit $tmp1626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1620->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1626.value);
                panda$core$Int64 $tmp1627 = panda$collections$Array$get_count$R$panda$core$Int64(m1620->parameters);
                panda$core$Bit $tmp1628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1627, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1628.value);
                panda$core$Object* $tmp1630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1620->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1631 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1630)->type);
                cost1629 = $tmp1631;
                if (((panda$core$Bit) { cost1629.nonnull }).value) {
                {
                    return cost1629;
                }
                }
            }
            }
        }
        goto $l1613;
        $l1614:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1632 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1632;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1641;
    org$pandalanguage$pandac$IRNode* intermediate1646;
    org$pandalanguage$pandac$IRNode* coerced1674;
    org$pandalanguage$pandac$IRNode* coerced1695;
    org$pandalanguage$pandac$IRNode* varType1709;
    org$pandalanguage$pandac$Type* param1724;
    org$pandalanguage$pandac$IRNode* start1726;
    org$pandalanguage$pandac$IRNode* end1729;
    panda$collections$Array* args1732;
    org$pandalanguage$pandac$IRNode* target1738;
    org$pandalanguage$pandac$Type* endPoint1754;
    org$pandalanguage$pandac$IRNode* start1756;
    org$pandalanguage$pandac$IRNode* end1759;
    org$pandalanguage$pandac$IRNode* step1762;
    panda$collections$Array* args1766;
    org$pandalanguage$pandac$IRNode* target1772;
    panda$collections$Array* args1780;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1781;
    panda$collections$Array* children1793;
    org$pandalanguage$pandac$IRNode* intermediate1799;
    org$pandalanguage$pandac$ClassDecl* cl1804;
    panda$collections$Iterator* m$Iter1806;
    org$pandalanguage$pandac$MethodDecl* m1818;
    org$pandalanguage$pandac$IRNode* type1829;
    panda$collections$Array* args1834;
    panda$collections$Array* children1838;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1633 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1633.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1634 = $tmp1635.value;
    if (!$tmp1634) goto $l1636;
    panda$core$Bit $tmp1637 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1634 = $tmp1637.value;
    $l1636:;
    panda$core$Bit $tmp1638 = { $tmp1634 };
    if ($tmp1638.value) {
    {
        panda$core$Object* $tmp1639 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1640 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1639), p_target);
        if ($tmp1640.value) {
        {
            panda$collections$Array* $tmp1642 = (panda$collections$Array*) malloc(40);
            $tmp1642->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1642->refCount.value = 1;
            panda$collections$Array$init($tmp1642);
            children1641 = $tmp1642;
            panda$collections$Array$add$panda$collections$Array$T(children1641, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1644 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1644->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1644->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1644, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1641));
            return $tmp1644;
        }
        }
        panda$core$Object* $tmp1647 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1648 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1647));
        intermediate1646 = $tmp1648;
        org$pandalanguage$pandac$IRNode* $tmp1649 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1646, p_target);
        return $tmp1649;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1650 = $tmp1651.value;
            if (!$tmp1650) goto $l1652;
            panda$core$Int64 $tmp1653 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1654 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1655 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1653, $tmp1654);
            $tmp1650 = $tmp1655.value;
            $l1652:;
            panda$core$Bit $tmp1656 = { $tmp1650 };
            if ($tmp1656.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1657 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1657->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1657->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1657, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1657;
            }
            }
            else {
            panda$core$Bit $tmp1660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1659 = $tmp1660.value;
            if (!$tmp1659) goto $l1661;
            panda$core$Int64 $tmp1662 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1663 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1664 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1662, $tmp1663);
            $tmp1659 = $tmp1664.value;
            $l1661:;
            panda$core$Bit $tmp1665 = { $tmp1659 };
            if ($tmp1665.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1666 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1666->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1666->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1666, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1666;
            }
            }
            }
            panda$core$Bit $tmp1669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1668 = $tmp1669.value;
            if (!$tmp1668) goto $l1670;
            panda$core$Bit $tmp1671 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1672 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1671);
            $tmp1668 = $tmp1672.value;
            $l1670:;
            panda$core$Bit $tmp1673 = { $tmp1668 };
            if ($tmp1673.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1675 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1676 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1675);
                coerced1674 = $tmp1676;
                if (((panda$core$Bit) { coerced1674 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1677 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1674, p_target);
                return $tmp1677;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1678 = $tmp1679.value;
            if (!$tmp1678) goto $l1680;
            panda$core$Int64 $tmp1681 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1682 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1681);
            panda$core$Int64 $tmp1683 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1682);
            panda$core$Int64 $tmp1684 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1685 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1683, $tmp1684);
            $tmp1678 = $tmp1685.value;
            $l1680:;
            panda$core$Bit $tmp1686 = { $tmp1678 };
            if ($tmp1686.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1687 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1687->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1687->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1687, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1687;
            }
            }
            panda$core$Bit $tmp1690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1689 = $tmp1690.value;
            if (!$tmp1689) goto $l1691;
            panda$core$Bit $tmp1692 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1693 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1692);
            $tmp1689 = $tmp1693.value;
            $l1691:;
            panda$core$Bit $tmp1694 = { $tmp1689 };
            if ($tmp1694.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1696 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1697 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1696);
                coerced1695 = $tmp1697;
                if (((panda$core$Bit) { coerced1695 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1698 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1695, p_target);
                return $tmp1698;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1699 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1700 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1699);
            if ($tmp1700.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1701 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1701->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1701->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1701, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1701;
            }
            }
            panda$core$Bit $tmp1704 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1703 = $tmp1704.value;
            if (!$tmp1703) goto $l1705;
            org$pandalanguage$pandac$Type* $tmp1706 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1707 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1706);
            $tmp1703 = $tmp1707.value;
            $l1705:;
            panda$core$Bit $tmp1708 = { $tmp1703 };
            if ($tmp1708.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1710 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1711 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1710);
                varType1709 = $tmp1711;
                if (((panda$core$Bit) { varType1709 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1712 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1709, p_target);
                    return $tmp1712;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1713 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1713.value) {
            {
                panda$core$Int64 $tmp1714 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1715 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1714, ((panda$core$Int64) { 2 }));
                if ($tmp1715.value) {
                {
                    panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1716, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1717, &$s1718);
                    panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1719, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, &$s1721);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1722);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1723.value);
                panda$core$Object* $tmp1725 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1724 = ((org$pandalanguage$pandac$Type*) $tmp1725);
                panda$core$Object* $tmp1727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1728 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1727), param1724);
                start1726 = $tmp1728;
                if (((panda$core$Bit) { start1726 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1730 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1731 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1730), param1724);
                end1729 = $tmp1731;
                if (((panda$core$Bit) { end1729 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1733 = (panda$collections$Array*) malloc(40);
                $tmp1733->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1733->refCount.value = 1;
                panda$collections$Array$init($tmp1733);
                args1732 = $tmp1733;
                panda$collections$Array$add$panda$collections$Array$T(args1732, ((panda$core$Object*) start1726));
                panda$collections$Array$add$panda$collections$Array$T(args1732, ((panda$core$Object*) end1729));
                org$pandalanguage$pandac$IRNode* $tmp1735 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1735->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1735->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1737 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1735, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1737, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1732, ((panda$core$Object*) $tmp1735));
                org$pandalanguage$pandac$IRNode* $tmp1739 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1739->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1739->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1741 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1739, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1741, p_target);
                target1738 = $tmp1739;
                org$pandalanguage$pandac$IRNode* $tmp1742 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1738, ((panda$collections$ListView*) args1732));
                return $tmp1742;
            }
            }
            else {
            panda$core$Bit $tmp1743 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1743.value) {
            {
                panda$core$Int64 $tmp1744 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1745 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1744, ((panda$core$Int64) { 3 }));
                if ($tmp1745.value) {
                {
                    panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1746, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1747, &$s1748);
                    panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1749, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1750, &$s1751);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1752);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1753.value);
                panda$core$Object* $tmp1755 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1754 = ((org$pandalanguage$pandac$Type*) $tmp1755);
                panda$core$Object* $tmp1757 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1758 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1757), endPoint1754);
                start1756 = $tmp1758;
                if (((panda$core$Bit) { start1756 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1760 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1761 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1760), endPoint1754);
                end1759 = $tmp1761;
                panda$core$Object* $tmp1763 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1765 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1763), ((org$pandalanguage$pandac$Type*) $tmp1764));
                step1762 = $tmp1765;
                panda$collections$Array* $tmp1767 = (panda$collections$Array*) malloc(40);
                $tmp1767->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1767->refCount.value = 1;
                panda$collections$Array$init($tmp1767);
                args1766 = $tmp1767;
                panda$collections$Array$add$panda$collections$Array$T(args1766, ((panda$core$Object*) start1756));
                panda$collections$Array$add$panda$collections$Array$T(args1766, ((panda$core$Object*) end1759));
                panda$collections$Array$add$panda$collections$Array$T(args1766, ((panda$core$Object*) step1762));
                org$pandalanguage$pandac$IRNode* $tmp1769 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1769->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1769->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1771 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1769, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1771, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1766, ((panda$core$Object*) $tmp1769));
                org$pandalanguage$pandac$IRNode* $tmp1773 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1773->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1773->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1775 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1773, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1775, p_target);
                target1772 = $tmp1773;
                org$pandalanguage$pandac$IRNode* $tmp1776 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1772, ((panda$collections$ListView*) args1766));
                return $tmp1776;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1777 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1778 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1777, p_target);
                return $tmp1778;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp1779 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp1779;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1781, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1782 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1781);
            args1780 = $tmp1782;
            panda$core$Object* $tmp1783 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1785 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1783), &$s1784, ((panda$collections$ListView*) args1780), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1786 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1785, p_target);
            return $tmp1786;
        }
        break;
    }
    panda$core$Bit $tmp1787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1787.value) {
    {
        panda$core$Bit $tmp1788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1788.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1789 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1789->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1789->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1789, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1789;
        }
        }
        panda$core$Object* $tmp1791 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1792 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1791));
        if ($tmp1792.value) {
        {
            panda$collections$Array* $tmp1794 = (panda$collections$Array*) malloc(40);
            $tmp1794->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1794->refCount.value = 1;
            panda$collections$Array$init($tmp1794);
            children1793 = $tmp1794;
            panda$collections$Array$add$panda$collections$Array$T(children1793, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1796 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1796->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1796->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1796, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1793));
            return $tmp1796;
        }
        }
        panda$core$Bit $tmp1798 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1798.value) {
        {
            panda$core$Object* $tmp1800 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1801 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1800));
            intermediate1799 = $tmp1801;
            org$pandalanguage$pandac$IRNode* $tmp1802 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1799, p_target);
            return $tmp1802;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1803 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1803.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1805 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1804 = $tmp1805;
        if (((panda$core$Bit) { cl1804 != NULL }).value) {
        {
            {
                ITable* $tmp1807 = ((panda$collections$Iterable*) cl1804->methods)->$class->itable;
                while ($tmp1807->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1807 = $tmp1807->next;
                }
                $fn1809 $tmp1808 = $tmp1807->methods[0];
                panda$collections$Iterator* $tmp1810 = $tmp1808(((panda$collections$Iterable*) cl1804->methods));
                m$Iter1806 = $tmp1810;
                $l1811:;
                ITable* $tmp1813 = m$Iter1806->$class->itable;
                while ($tmp1813->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1813 = $tmp1813->next;
                }
                $fn1815 $tmp1814 = $tmp1813->methods[0];
                panda$core$Bit $tmp1816 = $tmp1814(m$Iter1806);
                panda$core$Bit $tmp1817 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1816);
                if (!$tmp1817.value) goto $l1812;
                {
                    ITable* $tmp1819 = m$Iter1806->$class->itable;
                    while ($tmp1819->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1819 = $tmp1819->next;
                    }
                    $fn1821 $tmp1820 = $tmp1819->methods[1];
                    panda$core$Object* $tmp1822 = $tmp1820(m$Iter1806);
                    m1818 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1822);
                    panda$core$Bit $tmp1823 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1818->annotations);
                    if ($tmp1823.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1818);
                        panda$core$Bit $tmp1824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1818->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1824.value);
                        panda$core$Int64 $tmp1825 = panda$collections$Array$get_count$R$panda$core$Int64(m1818->parameters);
                        panda$core$Bit $tmp1826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1825, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1826.value);
                        panda$core$Object* $tmp1827 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1818->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1828 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1827)->type);
                        if (((panda$core$Bit) { $tmp1828.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1830 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1830->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1830->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1832 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1833 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1804);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1830, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1832, $tmp1833);
                            type1829 = $tmp1830;
                            panda$collections$Array* $tmp1835 = (panda$collections$Array*) malloc(40);
                            $tmp1835->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1835->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1835, ((panda$core$Int64) { 1 }));
                            args1834 = $tmp1835;
                            panda$collections$Array$add$panda$collections$Array$T(args1834, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1837 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1829, ((panda$collections$ListView*) args1834));
                            return $tmp1837;
                        }
                        }
                    }
                    }
                }
                goto $l1811;
                $l1812:;
            }
        }
        }
        panda$collections$Array* $tmp1839 = (panda$collections$Array*) malloc(40);
        $tmp1839->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1839->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1839, ((panda$core$Int64) { 1 }));
        children1838 = $tmp1839;
        panda$collections$Array$add$panda$collections$Array$T(children1838, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1841 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1841->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1841->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1841, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1838));
        return $tmp1841;
    }
    }
    panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1843, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1844, &$s1845);
    panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1846, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1847, &$s1848);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1849);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1850;
    org$pandalanguage$pandac$IRNode* $tmp1851 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1850 = $tmp1851;
    bool $tmp1852 = ((panda$core$Bit) { result1850 == NULL }).value;
    if ($tmp1852) goto $l1853;
    panda$core$Bit $tmp1854 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1850->type, p_target);
    $tmp1852 = $tmp1854.value;
    $l1853:;
    panda$core$Bit $tmp1855 = { $tmp1852 };
    PANDA_ASSERT($tmp1855.value);
    return result1850;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1857 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1856 = $tmp1857.value;
    if (!$tmp1856) goto $l1858;
    panda$core$Bit $tmp1859 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1856 = $tmp1859.value;
    $l1858:;
    panda$core$Bit $tmp1860 = { $tmp1856 };
    if ($tmp1860.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1861 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1861.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1863 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1862 = $tmp1863.value;
    if (!$tmp1862) goto $l1864;
    panda$core$Bit $tmp1865 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1862 = $tmp1865.value;
    $l1864:;
    panda$core$Bit $tmp1866 = { $tmp1862 };
    if ($tmp1866.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1867.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1868 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1868.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1870;
    org$pandalanguage$pandac$IRNode* resolved1877;
    panda$core$Int64$nullable $tmp1869 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1869.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1871 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1870 = $tmp1871;
    panda$core$Bit $tmp1873 = panda$core$Bit$$NOT$R$panda$core$Bit(result1870);
    bool $tmp1872 = $tmp1873.value;
    if (!$tmp1872) goto $l1874;
    panda$core$Bit $tmp1875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1872 = $tmp1875.value;
    $l1874:;
    panda$core$Bit $tmp1876 = { $tmp1872 };
    if ($tmp1876.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1878 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1877 = $tmp1878;
        if (((panda$core$Bit) { resolved1877 != NULL }).value) {
        {
            panda$core$Bit $tmp1879 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1877, p_target);
            result1870 = $tmp1879;
        }
        }
    }
    }
    return result1870;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1900;
    panda$collections$Array* children1903;
    panda$core$Bit $tmp1880 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1880.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1881 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1882 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1881);
    PANDA_ASSERT($tmp1882.value);
    bool $tmp1883 = p_isExplicit.value;
    if (!$tmp1883) goto $l1884;
    panda$core$Bit $tmp1885 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1886 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1885);
    $tmp1883 = $tmp1886.value;
    $l1884:;
    panda$core$Bit $tmp1887 = { $tmp1883 };
    if ($tmp1887.value) {
    {
        panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1888, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1889, &$s1890);
        panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1892, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, &$s1894);
        panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, $tmp1895);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1896);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1897 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1897;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1898 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1898.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1899 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1899;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1901 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1900 = $tmp1901;
            if (((panda$core$Bit) { resolved1900 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1902 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1900, p_position, p_isExplicit, p_target);
                return $tmp1902;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1904 = (panda$collections$Array*) malloc(40);
    $tmp1904->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1904->refCount.value = 1;
    panda$collections$Array$init($tmp1904);
    children1903 = $tmp1904;
    panda$collections$Array$add$panda$collections$Array$T(children1903, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1906 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1906->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1906->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1906, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1903));
    return $tmp1906;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1914;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1915;
    panda$core$Int64$nullable cost1930;
    panda$core$Int64$nullable cost1944;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1908 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1909 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1909->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1909 = $tmp1909->next;
    }
    $fn1911 $tmp1910 = $tmp1909->methods[0];
    panda$core$Int64 $tmp1912 = $tmp1910(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1913 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1908, $tmp1912);
    if ($tmp1913.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1914 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1916 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1915, ((panda$core$Int64) { 0 }), $tmp1916, ((panda$core$Bit) { false }));
    int64_t $tmp1918 = $tmp1915.min.value;
    panda$core$Int64 i1917 = { $tmp1918 };
    int64_t $tmp1920 = $tmp1915.max.value;
    bool $tmp1921 = $tmp1915.inclusive.value;
    if ($tmp1921) goto $l1928; else goto $l1929;
    $l1928:;
    if ($tmp1918 <= $tmp1920) goto $l1922; else goto $l1924;
    $l1929:;
    if ($tmp1918 < $tmp1920) goto $l1922; else goto $l1924;
    $l1922:;
    {
        ITable* $tmp1931 = p_args->$class->itable;
        while ($tmp1931->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1931 = $tmp1931->next;
        }
        $fn1933 $tmp1932 = $tmp1931->methods[0];
        panda$core$Object* $tmp1934 = $tmp1932(p_args, i1917);
        org$pandalanguage$pandac$Type* $tmp1935 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1917);
        panda$core$Int64$nullable $tmp1936 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1934), $tmp1935);
        cost1930 = $tmp1936;
        if (((panda$core$Bit) { !cost1930.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1937 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1914, ((panda$core$Int64) cost1930.value));
        result1914 = $tmp1937;
    }
    $l1925:;
    int64_t $tmp1939 = $tmp1920 - i1917.value;
    if ($tmp1921) goto $l1940; else goto $l1941;
    $l1940:;
    if ($tmp1939 >= 1) goto $l1938; else goto $l1924;
    $l1941:;
    if ($tmp1939 > 1) goto $l1938; else goto $l1924;
    $l1938:;
    i1917.value += 1;
    goto $l1922;
    $l1924:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1945 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1946 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1945, p_expectedReturn);
        cost1944 = $tmp1946;
        if (((panda$core$Bit) { !cost1944.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1947 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1914, ((panda$core$Int64) cost1944.value));
        result1914 = $tmp1947;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1950 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1951 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1950);
    bool $tmp1949 = $tmp1951.value;
    if (!$tmp1949) goto $l1952;
    ITable* $tmp1953 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1953->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1953 = $tmp1953->next;
    }
    $fn1955 $tmp1954 = $tmp1953->methods[0];
    panda$core$Int64 $tmp1956 = $tmp1954(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1956, ((panda$core$Int64) { 1 }));
    $tmp1949 = $tmp1957.value;
    $l1952:;
    panda$core$Bit $tmp1958 = { $tmp1949 };
    bool $tmp1948 = $tmp1958.value;
    if (!$tmp1948) goto $l1959;
    panda$core$Object* $tmp1960 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1961 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1962 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1960)->type, $tmp1961);
    $tmp1948 = $tmp1962.value;
    $l1959:;
    panda$core$Bit $tmp1963 = { $tmp1948 };
    if ($tmp1963.value) {
    {
        panda$core$Int64 $tmp1964 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1914, ((panda$core$Int64) { 1 }));
        result1914 = $tmp1964;
    }
    }
    return ((panda$core$Int64$nullable) { result1914, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1965;
    panda$core$Int64$nullable best1968;
    panda$collections$Iterator* m$Iter1969;
    org$pandalanguage$pandac$MethodRef* m1981;
    panda$core$Int64$nullable cost1986;
    panda$collections$Array* $tmp1966 = (panda$collections$Array*) malloc(40);
    $tmp1966->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1966->refCount.value = 1;
    panda$collections$Array$init($tmp1966);
    result1965 = $tmp1966;
    best1968 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1970 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1970->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1970 = $tmp1970->next;
        }
        $fn1972 $tmp1971 = $tmp1970->methods[0];
        panda$collections$Iterator* $tmp1973 = $tmp1971(((panda$collections$Iterable*) p_methods));
        m$Iter1969 = $tmp1973;
        $l1974:;
        ITable* $tmp1976 = m$Iter1969->$class->itable;
        while ($tmp1976->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1976 = $tmp1976->next;
        }
        $fn1978 $tmp1977 = $tmp1976->methods[0];
        panda$core$Bit $tmp1979 = $tmp1977(m$Iter1969);
        panda$core$Bit $tmp1980 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1979);
        if (!$tmp1980.value) goto $l1975;
        {
            ITable* $tmp1982 = m$Iter1969->$class->itable;
            while ($tmp1982->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1982 = $tmp1982->next;
            }
            $fn1984 $tmp1983 = $tmp1982->methods[1];
            panda$core$Object* $tmp1985 = $tmp1983(m$Iter1969);
            m1981 = ((org$pandalanguage$pandac$MethodRef*) $tmp1985);
            panda$core$Int64$nullable $tmp1987 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1981, p_args, p_expectedReturn);
            cost1986 = $tmp1987;
            if (((panda$core$Bit) { !cost1986.nonnull }).value) {
            {
                goto $l1974;
            }
            }
            bool $tmp1988 = ((panda$core$Bit) { !best1968.nonnull }).value;
            if ($tmp1988) goto $l1989;
            panda$core$Bit $tmp1990 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1986.value), ((panda$core$Int64) best1968.value));
            $tmp1988 = $tmp1990.value;
            $l1989:;
            panda$core$Bit $tmp1991 = { $tmp1988 };
            if ($tmp1991.value) {
            {
                panda$collections$Array$clear(result1965);
                best1968 = cost1986;
            }
            }
            panda$core$Bit $tmp1992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1986.value), ((panda$core$Int64) best1968.value));
            if ($tmp1992.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1965, ((panda$core$Object*) m1981));
            }
            }
        }
        goto $l1974;
        $l1975:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1965));
    return best1968;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s1999;
    panda$collections$Array* finalArgs2024;
    org$pandalanguage$pandac$IRNode* selfNode2060;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2089;
    org$pandalanguage$pandac$IRNode* coerced2107;
    org$pandalanguage$pandac$IRNode* result2122;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1993 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1994 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1994->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1994 = $tmp1994->next;
    }
    $fn1996 $tmp1995 = $tmp1994->methods[0];
    panda$core$Int64 $tmp1997 = $tmp1995(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1998 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1993, $tmp1997);
    if ($tmp1998.value) {
    {
        panda$core$Int64 $tmp2000 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2000, ((panda$core$Int64) { 1 }));
        if ($tmp2001.value) {
        {
            s1999 = &$s2002;
        }
        }
        else {
        {
            s1999 = &$s2003;
        }
        }
        panda$core$String* $tmp2004 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2005 = panda$core$String$convert$R$panda$core$String($tmp2004);
        panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, &$s2006);
        panda$core$Int64 $tmp2008 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2007, ((panda$core$Object*) wrap_panda$core$Int64($tmp2008)));
        panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2009, &$s2010);
        panda$core$String* $tmp2012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, s1999);
        panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2012, &$s2013);
        ITable* $tmp2016 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2016->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2016 = $tmp2016->next;
        }
        $fn2018 $tmp2017 = $tmp2016->methods[0];
        panda$core$Int64 $tmp2019 = $tmp2017(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2015, ((panda$core$Object*) wrap_panda$core$Int64($tmp2019)));
        panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
        panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, $tmp2022);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2023);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2025 = (panda$collections$Array*) malloc(40);
    $tmp2025->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2025->refCount.value = 1;
    panda$collections$Array$init($tmp2025);
    finalArgs2024 = $tmp2025;
    bool $tmp2028 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2028) goto $l2029;
    panda$core$Bit $tmp2030 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2028 = $tmp2030.value;
    $l2029:;
    panda$core$Bit $tmp2031 = { $tmp2028 };
    bool $tmp2027 = $tmp2031.value;
    if (!$tmp2027) goto $l2032;
    panda$core$Bit $tmp2033 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2034 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2033);
    $tmp2027 = $tmp2034.value;
    $l2032:;
    panda$core$Bit $tmp2035 = { $tmp2027 };
    if ($tmp2035.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2036 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2037 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2036);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2024, ((panda$core$Object*) $tmp2037));
    }
    }
    panda$core$Bit $tmp2038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2038.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2039 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2039)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2040.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2041 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2041->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2041->refCount.value = 1;
                panda$core$Object* $tmp2043 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2044 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2043));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2041, ((panda$core$Int64) { 1025 }), p_position, $tmp2044);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2024, ((panda$core$Object*) $tmp2041));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2045);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2048 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2047 = $tmp2048.value;
        if (!$tmp2047) goto $l2049;
        panda$core$Bit $tmp2050 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2047 = $tmp2050.value;
        $l2049:;
        panda$core$Bit $tmp2051 = { $tmp2047 };
        bool $tmp2046 = $tmp2051.value;
        if (!$tmp2046) goto $l2052;
        panda$core$Bit $tmp2053 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2046 = $tmp2053.value;
        $l2052:;
        panda$core$Bit $tmp2054 = { $tmp2046 };
        if ($tmp2054.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2055);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2057 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2056 = $tmp2057.value;
    if (!$tmp2056) goto $l2058;
    $tmp2056 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2058:;
    panda$core$Bit $tmp2059 = { $tmp2056 };
    if ($tmp2059.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2061 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2061->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2061->refCount.value = 1;
        panda$core$Object* $tmp2063 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2064 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2063));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2061, ((panda$core$Int64) { 1025 }), p_position, $tmp2064);
        selfNode2060 = $tmp2061;
        org$pandalanguage$pandac$Type* $tmp2065 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2066 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2060, $tmp2065);
        selfNode2060 = $tmp2066;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2060 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2024, ((panda$core$Object*) selfNode2060));
        panda$core$Object* $tmp2067 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2068 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2067));
        panda$core$Bit $tmp2069 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2068);
        if ($tmp2069.value) {
        {
            panda$core$String* $tmp2071 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2070, $tmp2071);
            panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2072, &$s2073);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2074);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2077 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2078 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2077);
    bool $tmp2076 = $tmp2078.value;
    if (!$tmp2076) goto $l2079;
    $tmp2076 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2079:;
    panda$core$Bit $tmp2080 = { $tmp2076 };
    bool $tmp2075 = $tmp2080.value;
    if (!$tmp2075) goto $l2081;
    panda$core$Bit $tmp2082 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2075 = $tmp2082.value;
    $l2081:;
    panda$core$Bit $tmp2083 = { $tmp2075 };
    if ($tmp2083.value) {
    {
        panda$core$String* $tmp2085 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2084, $tmp2085);
        panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2086, &$s2087);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2088);
    }
    }
    }
    }
    ITable* $tmp2090 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2090->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2090 = $tmp2090->next;
    }
    $fn2092 $tmp2091 = $tmp2090->methods[0];
    panda$core$Int64 $tmp2093 = $tmp2091(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2089, ((panda$core$Int64) { 0 }), $tmp2093, ((panda$core$Bit) { false }));
    int64_t $tmp2095 = $tmp2089.min.value;
    panda$core$Int64 i2094 = { $tmp2095 };
    int64_t $tmp2097 = $tmp2089.max.value;
    bool $tmp2098 = $tmp2089.inclusive.value;
    if ($tmp2098) goto $l2105; else goto $l2106;
    $l2105:;
    if ($tmp2095 <= $tmp2097) goto $l2099; else goto $l2101;
    $l2106:;
    if ($tmp2095 < $tmp2097) goto $l2099; else goto $l2101;
    $l2099:;
    {
        ITable* $tmp2108 = p_args->$class->itable;
        while ($tmp2108->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2108 = $tmp2108->next;
        }
        $fn2110 $tmp2109 = $tmp2108->methods[0];
        panda$core$Object* $tmp2111 = $tmp2109(p_args, i2094);
        org$pandalanguage$pandac$Type* $tmp2112 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2094);
        org$pandalanguage$pandac$IRNode* $tmp2113 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2111), $tmp2112);
        coerced2107 = $tmp2113;
        if (((panda$core$Bit) { coerced2107 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2094);
        org$pandalanguage$pandac$IRNode* $tmp2115 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2107, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2114)->type);
        coerced2107 = $tmp2115;
        if (((panda$core$Bit) { coerced2107 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2024, ((panda$core$Object*) coerced2107));
    }
    $l2102:;
    int64_t $tmp2117 = $tmp2097 - i2094.value;
    if ($tmp2098) goto $l2118; else goto $l2119;
    $l2118:;
    if ($tmp2117 >= 1) goto $l2116; else goto $l2101;
    $l2119:;
    if ($tmp2117 > 1) goto $l2116; else goto $l2101;
    $l2116:;
    i2094.value += 1;
    goto $l2099;
    $l2101:;
    panda$core$Bit $tmp2124 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2123);
    if ($tmp2124.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2125 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2125->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2125->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2127 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2125, ((panda$core$Int64) { 1005 }), p_position, $tmp2127, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2024));
        result2122 = $tmp2125;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2128 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2128->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2128->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2128, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2024));
        result2122 = $tmp2128;
        org$pandalanguage$pandac$Type* $tmp2130 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2131 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2122, p_position, ((panda$core$Bit) { false }), $tmp2130);
        result2122 = $tmp2131;
    }
    }
    return result2122;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2132 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2132;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2133;
    org$pandalanguage$pandac$ClassDecl* cl2135;
    org$pandalanguage$pandac$Symbol* s2139;
    org$pandalanguage$pandac$IRNode* ref2161;
    org$pandalanguage$pandac$IRNode* $tmp2134 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2133 = $tmp2134;
    if (((panda$core$Bit) { resolved2133 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2133->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2136.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2137 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2133->payload));
        cl2135 = $tmp2137;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2138 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2133->type);
        cl2135 = $tmp2138;
    }
    }
    if (((panda$core$Bit) { cl2135 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2140 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2135);
    org$pandalanguage$pandac$Symbol* $tmp2141 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2140, p_name);
    s2139 = $tmp2141;
    if (((panda$core$Bit) { s2139 == NULL }).value) {
    {
        panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2142, ((org$pandalanguage$pandac$Symbol*) cl2135)->name);
        panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, &$s2144);
        panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, p_name);
        panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2146, &$s2147);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2148);
        return NULL;
    }
    }
    panda$core$Bit $tmp2150 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2139->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2149 = $tmp2150.value;
    if (!$tmp2149) goto $l2151;
    panda$core$Bit $tmp2152 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2139->kind, ((panda$core$Int64) { 205 }));
    $tmp2149 = $tmp2152.value;
    $l2151:;
    panda$core$Bit $tmp2153 = { $tmp2149 };
    if ($tmp2153.value) {
    {
        panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2154, ((org$pandalanguage$pandac$Symbol*) cl2135)->name);
        panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, &$s2156);
        panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, p_name);
        panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, &$s2159);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2160);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2162 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2135);
    org$pandalanguage$pandac$IRNode* $tmp2163 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2139, $tmp2162);
    ref2161 = $tmp2163;
    if (((panda$core$Bit) { ref2161 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2164 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2161, p_args, p_expectedType);
    return $tmp2164;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2165 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2165;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2166;
    panda$collections$Array* methods2173;
    org$pandalanguage$pandac$MethodDecl* first2178;
    panda$core$MutableString* msg2183;
    panda$core$String* separator2194;
    panda$collections$Iterator* a$Iter2196;
    org$pandalanguage$pandac$IRNode* a2208;
    org$pandalanguage$pandac$IRNode* target2222;
    panda$collections$Array* children2230;
    panda$collections$Array* types2236;
    panda$collections$Iterator* m$Iter2239;
    org$pandalanguage$pandac$MethodRef* m2251;
    org$pandalanguage$pandac$IRNode* target2261;
    org$pandalanguage$pandac$IRNode* initCall2264;
    panda$collections$Array* children2268;
    org$pandalanguage$pandac$IRNode* resolved2273;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2167 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2167, ((panda$core$Int64) { 0 }));
            if ($tmp2168.value) {
            {
                target2166 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2169 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2169, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2170.value);
                panda$core$Object* $tmp2171 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2166 = ((org$pandalanguage$pandac$IRNode*) $tmp2171);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2172 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2166, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2172;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2174 = (panda$collections$Array*) malloc(40);
            $tmp2174->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2174->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2174, ((panda$collections$ListView*) p_m->payload));
            methods2173 = $tmp2174;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2173, p_args, p_expectedType);
            panda$core$Int64 $tmp2176 = panda$collections$Array$get_count$R$panda$core$Int64(methods2173);
            panda$core$Bit $tmp2177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2176, ((panda$core$Int64) { 0 }));
            if ($tmp2177.value) {
            {
                ITable* $tmp2179 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2179->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2179 = $tmp2179->next;
                }
                $fn2181 $tmp2180 = $tmp2179->methods[0];
                panda$core$Object* $tmp2182 = $tmp2180(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2178 = ((org$pandalanguage$pandac$MethodRef*) $tmp2182)->value;
                panda$core$MutableString* $tmp2184 = (panda$core$MutableString*) malloc(40);
                $tmp2184->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2184->refCount.value = 1;
                panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2186, ((org$pandalanguage$pandac$Symbol*) first2178->owner)->name);
                panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, &$s2188);
                panda$core$String* $tmp2190 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2178)->name);
                panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
                panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, $tmp2192);
                panda$core$MutableString$init$panda$core$String($tmp2184, $tmp2193);
                msg2183 = $tmp2184;
                separator2194 = &$s2195;
                {
                    ITable* $tmp2197 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2197->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2197 = $tmp2197->next;
                    }
                    $fn2199 $tmp2198 = $tmp2197->methods[0];
                    panda$collections$Iterator* $tmp2200 = $tmp2198(((panda$collections$Iterable*) p_args));
                    a$Iter2196 = $tmp2200;
                    $l2201:;
                    ITable* $tmp2203 = a$Iter2196->$class->itable;
                    while ($tmp2203->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2203 = $tmp2203->next;
                    }
                    $fn2205 $tmp2204 = $tmp2203->methods[0];
                    panda$core$Bit $tmp2206 = $tmp2204(a$Iter2196);
                    panda$core$Bit $tmp2207 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2206);
                    if (!$tmp2207.value) goto $l2202;
                    {
                        ITable* $tmp2209 = a$Iter2196->$class->itable;
                        while ($tmp2209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2209 = $tmp2209->next;
                        }
                        $fn2211 $tmp2210 = $tmp2209->methods[1];
                        panda$core$Object* $tmp2212 = $tmp2210(a$Iter2196);
                        a2208 = ((org$pandalanguage$pandac$IRNode*) $tmp2212);
                        panda$core$MutableString$append$panda$core$String(msg2183, separator2194);
                        panda$core$MutableString$append$panda$core$Object(msg2183, ((panda$core$Object*) a2208->type));
                        separator2194 = &$s2213;
                    }
                    goto $l2201;
                    $l2202:;
                }
                panda$core$MutableString$append$panda$core$String(msg2183, &$s2214);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2215, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2217);
                    panda$core$MutableString$append$panda$core$String(msg2183, $tmp2218);
                }
                }
                panda$core$String* $tmp2219 = panda$core$MutableString$finish$R$panda$core$String(msg2183);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2219);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2220 = panda$collections$Array$get_count$R$panda$core$Int64(methods2173);
            panda$core$Bit $tmp2221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2220, ((panda$core$Int64) { 1 }));
            if ($tmp2221.value) {
            {
                panda$core$Int64 $tmp2223 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2223, ((panda$core$Int64) { 1 }));
                if ($tmp2224.value) {
                {
                    panda$core$Object* $tmp2225 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2222 = ((org$pandalanguage$pandac$IRNode*) $tmp2225);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2226 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2226, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2227.value);
                    target2222 = NULL;
                }
                }
                panda$core$Object* $tmp2228 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2173, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2229 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2222, ((org$pandalanguage$pandac$MethodRef*) $tmp2228), p_args);
                return $tmp2229;
            }
            }
            panda$collections$Array* $tmp2231 = (panda$collections$Array*) malloc(40);
            $tmp2231->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2231->refCount.value = 1;
            panda$collections$Array$init($tmp2231);
            children2230 = $tmp2231;
            org$pandalanguage$pandac$IRNode* $tmp2233 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2233->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2233->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2235 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2233, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2235, ((panda$core$Object*) methods2173), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2230, ((panda$core$Object*) $tmp2233));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2230, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2237 = (panda$collections$Array*) malloc(40);
            $tmp2237->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2237->refCount.value = 1;
            panda$collections$Array$init($tmp2237);
            types2236 = $tmp2237;
            {
                ITable* $tmp2240 = ((panda$collections$Iterable*) methods2173)->$class->itable;
                while ($tmp2240->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2240 = $tmp2240->next;
                }
                $fn2242 $tmp2241 = $tmp2240->methods[0];
                panda$collections$Iterator* $tmp2243 = $tmp2241(((panda$collections$Iterable*) methods2173));
                m$Iter2239 = $tmp2243;
                $l2244:;
                ITable* $tmp2246 = m$Iter2239->$class->itable;
                while ($tmp2246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2246 = $tmp2246->next;
                }
                $fn2248 $tmp2247 = $tmp2246->methods[0];
                panda$core$Bit $tmp2249 = $tmp2247(m$Iter2239);
                panda$core$Bit $tmp2250 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2249);
                if (!$tmp2250.value) goto $l2245;
                {
                    ITable* $tmp2252 = m$Iter2239->$class->itable;
                    while ($tmp2252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2252 = $tmp2252->next;
                    }
                    $fn2254 $tmp2253 = $tmp2252->methods[1];
                    panda$core$Object* $tmp2255 = $tmp2253(m$Iter2239);
                    m2251 = ((org$pandalanguage$pandac$MethodRef*) $tmp2255);
                    org$pandalanguage$pandac$Type* $tmp2256 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2251);
                    panda$collections$Array$add$panda$collections$Array$T(types2236, ((panda$core$Object*) $tmp2256));
                }
                goto $l2244;
                $l2245:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2257 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2257->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2257->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2259 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2259->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2259->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2259, ((panda$collections$ListView*) types2236));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2257, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2259, ((panda$collections$ListView*) children2230));
            return $tmp2257;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2262 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2262->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2262->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2262, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2261 = $tmp2262;
            org$pandalanguage$pandac$IRNode* $tmp2266 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2261, &$s2265, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2267 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2266);
            initCall2264 = $tmp2267;
            if (((panda$core$Bit) { initCall2264 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2269 = (panda$collections$Array*) malloc(40);
            $tmp2269->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2269->refCount.value = 1;
            panda$collections$Array$init($tmp2269);
            children2268 = $tmp2269;
            panda$collections$Array$add$panda$collections$Array$T(children2268, ((panda$core$Object*) initCall2264));
            org$pandalanguage$pandac$IRNode* $tmp2271 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2271->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2271->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2271, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2268));
            return $tmp2271;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2274 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2273 = $tmp2274;
            if (((panda$core$Bit) { resolved2273 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2275, ((panda$core$Object*) resolved2273->type));
            panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, &$s2277);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2273->position, $tmp2278);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2279;
    panda$core$MutableString* typeName2282;
    panda$core$String* separator2286;
    panda$collections$Iterator* p$Iter2288;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2300;
    panda$core$Int64 kind2306;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2280 = (panda$collections$Array*) malloc(40);
    $tmp2280->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2280->refCount.value = 1;
    panda$collections$Array$init($tmp2280);
    subtypes2279 = $tmp2280;
    panda$core$MutableString* $tmp2283 = (panda$core$MutableString*) malloc(40);
    $tmp2283->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2283->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2283, &$s2285);
    typeName2282 = $tmp2283;
    separator2286 = &$s2287;
    {
        ITable* $tmp2289 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2289->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2289 = $tmp2289->next;
        }
        $fn2291 $tmp2290 = $tmp2289->methods[0];
        panda$collections$Iterator* $tmp2292 = $tmp2290(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2288 = $tmp2292;
        $l2293:;
        ITable* $tmp2295 = p$Iter2288->$class->itable;
        while ($tmp2295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2295 = $tmp2295->next;
        }
        $fn2297 $tmp2296 = $tmp2295->methods[0];
        panda$core$Bit $tmp2298 = $tmp2296(p$Iter2288);
        panda$core$Bit $tmp2299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2298);
        if (!$tmp2299.value) goto $l2294;
        {
            ITable* $tmp2301 = p$Iter2288->$class->itable;
            while ($tmp2301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2301 = $tmp2301->next;
            }
            $fn2303 $tmp2302 = $tmp2301->methods[1];
            panda$core$Object* $tmp2304 = $tmp2302(p$Iter2288);
            p2300 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2304);
            panda$core$MutableString$append$panda$core$String(typeName2282, separator2286);
            panda$core$MutableString$append$panda$core$String(typeName2282, ((org$pandalanguage$pandac$Symbol*) p2300->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2279, ((panda$core$Object*) p2300->type));
            separator2286 = &$s2305;
        }
        goto $l2293;
        $l2294:;
    }
    panda$core$Bit $tmp2307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2307.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2282, &$s2308);
        kind2306 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2282, &$s2309);
        kind2306 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2279, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2310 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2311 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2310);
    if ($tmp2311.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2282, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2282, &$s2312);
    org$pandalanguage$pandac$Type* $tmp2313 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2313->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2313->refCount.value = 1;
    panda$core$String* $tmp2315 = panda$core$MutableString$finish$R$panda$core$String(typeName2282);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2313, $tmp2315, kind2306, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2279), ((panda$core$Bit) { true }));
    return $tmp2313;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2316;
    panda$core$MutableString* typeName2319;
    panda$collections$Iterator* p$Iter2323;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2335;
    panda$core$Int64 kind2341;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2317 = (panda$collections$Array*) malloc(40);
    $tmp2317->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2317->refCount.value = 1;
    panda$collections$Array$init($tmp2317);
    subtypes2316 = $tmp2317;
    panda$core$MutableString* $tmp2320 = (panda$core$MutableString*) malloc(40);
    $tmp2320->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2320->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2320, &$s2322);
    typeName2319 = $tmp2320;
    panda$core$MutableString$append$panda$core$String(typeName2319, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2316, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2324 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2324->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2324 = $tmp2324->next;
        }
        $fn2326 $tmp2325 = $tmp2324->methods[0];
        panda$collections$Iterator* $tmp2327 = $tmp2325(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2323 = $tmp2327;
        $l2328:;
        ITable* $tmp2330 = p$Iter2323->$class->itable;
        while ($tmp2330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2330 = $tmp2330->next;
        }
        $fn2332 $tmp2331 = $tmp2330->methods[0];
        panda$core$Bit $tmp2333 = $tmp2331(p$Iter2323);
        panda$core$Bit $tmp2334 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2333);
        if (!$tmp2334.value) goto $l2329;
        {
            ITable* $tmp2336 = p$Iter2323->$class->itable;
            while ($tmp2336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2336 = $tmp2336->next;
            }
            $fn2338 $tmp2337 = $tmp2336->methods[1];
            panda$core$Object* $tmp2339 = $tmp2337(p$Iter2323);
            p2335 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2339);
            panda$core$MutableString$append$panda$core$String(typeName2319, &$s2340);
            panda$core$MutableString$append$panda$core$String(typeName2319, ((org$pandalanguage$pandac$Symbol*) p2335->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2316, ((panda$core$Object*) p2335->type));
        }
        goto $l2328;
        $l2329:;
    }
    panda$core$Bit $tmp2342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2342.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2319, &$s2343);
        kind2341 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2319, &$s2344);
        kind2341 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2316, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2345 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2346 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2345);
    if ($tmp2346.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2319, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2319, &$s2347);
    org$pandalanguage$pandac$Type* $tmp2348 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2348->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2348->refCount.value = 1;
    panda$core$String* $tmp2350 = panda$core$MutableString$finish$R$panda$core$String(typeName2319);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2348, $tmp2350, kind2341, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2316), ((panda$core$Bit) { true }));
    return $tmp2348;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2351;
    org$pandalanguage$pandac$MethodDecl* $tmp2352 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2351 = $tmp2352;
    if (((panda$core$Bit) { inherited2351 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2353 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2353;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2354 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2351);
    return $tmp2354;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2355 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2356 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2355);
    return $tmp2356;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2357;
    org$pandalanguage$pandac$MethodDecl* $tmp2358 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2357 = $tmp2358;
    if (((panda$core$Bit) { inherited2357 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2359 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2359;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2360 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2357, p_selfType);
    return $tmp2360;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2361;
        }
        break;
        case 52:
        {
            return &$s2362;
        }
        break;
        case 53:
        {
            return &$s2363;
        }
        break;
        case 54:
        {
            return &$s2364;
        }
        break;
        case 55:
        {
            return &$s2365;
        }
        break;
        case 56:
        {
            return &$s2366;
        }
        break;
        case 57:
        {
            return &$s2367;
        }
        break;
        case 58:
        {
            return &$s2368;
        }
        break;
        case 59:
        {
            return &$s2369;
        }
        break;
        case 63:
        {
            return &$s2370;
        }
        break;
        case 62:
        {
            return &$s2371;
        }
        break;
        case 65:
        {
            return &$s2372;
        }
        break;
        case 64:
        {
            return &$s2373;
        }
        break;
        case 68:
        {
            return &$s2374;
        }
        break;
        case 69:
        {
            return &$s2375;
        }
        break;
        case 66:
        {
            return &$s2376;
        }
        break;
        case 67:
        {
            return &$s2377;
        }
        break;
        case 70:
        {
            return &$s2378;
        }
        break;
        case 71:
        {
            return &$s2379;
        }
        break;
        case 49:
        {
            return &$s2380;
        }
        break;
        case 50:
        {
            return &$s2381;
        }
        break;
        case 72:
        {
            return &$s2382;
        }
        break;
        case 1:
        {
            return &$s2383;
        }
        break;
        case 101:
        {
            return &$s2384;
        }
        break;
        case 73:
        {
            return &$s2385;
        }
        break;
        case 60:
        {
            return &$s2386;
        }
        break;
        case 61:
        {
            return &$s2387;
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
            panda$core$Int64 $tmp2388 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2388, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2389.value);
            panda$core$Bit $tmp2390 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2390.value) {
            {
                panda$core$Object* $tmp2391 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2392 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2391));
                return $tmp2392;
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
            panda$core$Object* $tmp2393 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2394 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2393));
            return $tmp2394;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2420;
    panda$core$Int64 r2422;
    panda$core$Bit $tmp2396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2395 = $tmp2396.value;
    if ($tmp2395) goto $l2397;
    panda$core$Bit $tmp2398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2395 = $tmp2398.value;
    $l2397:;
    panda$core$Bit $tmp2399 = { $tmp2395 };
    PANDA_ASSERT($tmp2399.value);
    panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2400 = $tmp2401.value;
    if ($tmp2400) goto $l2402;
    panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2400 = $tmp2403.value;
    $l2402:;
    panda$core$Bit $tmp2404 = { $tmp2400 };
    PANDA_ASSERT($tmp2404.value);
    panda$core$Bit $tmp2407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2406 = $tmp2407.value;
    if ($tmp2406) goto $l2408;
    panda$core$UInt64 $tmp2410 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2411 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2410);
    bool $tmp2409 = $tmp2411.value;
    if (!$tmp2409) goto $l2412;
    panda$core$Bit $tmp2413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2409 = $tmp2413.value;
    $l2412:;
    panda$core$Bit $tmp2414 = { $tmp2409 };
    $tmp2406 = $tmp2414.value;
    $l2408:;
    panda$core$Bit $tmp2415 = { $tmp2406 };
    bool $tmp2405 = $tmp2415.value;
    if ($tmp2405) goto $l2416;
    panda$core$UInt64 $tmp2417 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2418 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2417);
    $tmp2405 = $tmp2418.value;
    $l2416:;
    panda$core$Bit $tmp2419 = { $tmp2405 };
    if ($tmp2419.value) {
    {
        panda$core$Int64 $tmp2421 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2420 = $tmp2421;
        panda$core$Int64 $tmp2423 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2422 = $tmp2423;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2424 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2424->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2424->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2426 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2427 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2420, r2422);
                panda$core$UInt64 $tmp2428 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2427);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2424, ((panda$core$Int64) { 1004 }), p_position, $tmp2426, $tmp2428);
                return $tmp2424;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2429 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2429->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2429->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2431 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2432 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2420, r2422);
                panda$core$UInt64 $tmp2433 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2432);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2429, ((panda$core$Int64) { 1004 }), p_position, $tmp2431, $tmp2433);
                return $tmp2429;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2434 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2434->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2434->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2436 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2437 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2420, r2422);
                panda$core$UInt64 $tmp2438 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2437);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2434, ((panda$core$Int64) { 1004 }), p_position, $tmp2436, $tmp2438);
                return $tmp2434;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2439 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2439->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2439->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2441 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2442 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2420, r2422);
                panda$core$UInt64 $tmp2443 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2442);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2439, ((panda$core$Int64) { 1004 }), p_position, $tmp2441, $tmp2443);
                return $tmp2439;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2444 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2444->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2444->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2446 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2447 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2420, r2422);
                panda$core$UInt64 $tmp2448 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2447);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2444, ((panda$core$Int64) { 1004 }), p_position, $tmp2446, $tmp2448);
                return $tmp2444;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2449 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2449->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2449->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2451 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2420, r2422);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2449, ((panda$core$Int64) { 1011 }), p_position, $tmp2451, $tmp2452);
                return $tmp2449;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2453 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2453->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2453->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2455 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2456 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2420, r2422);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2453, ((panda$core$Int64) { 1011 }), p_position, $tmp2455, $tmp2456);
                return $tmp2453;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2457 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2457->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2457->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2459 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2460 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2420, r2422);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2457, ((panda$core$Int64) { 1011 }), p_position, $tmp2459, $tmp2460);
                return $tmp2457;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2461 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2461->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2461->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2463 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2464 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2420, r2422);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2461, ((panda$core$Int64) { 1011 }), p_position, $tmp2463, $tmp2464);
                return $tmp2461;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2465 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2465->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2465->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2467 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2468 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2420, r2422);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2465, ((panda$core$Int64) { 1011 }), p_position, $tmp2467, $tmp2468);
                return $tmp2465;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2469 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2469->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2469->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2471 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2472 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2420, r2422);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2469, ((panda$core$Int64) { 1011 }), p_position, $tmp2471, $tmp2472);
                return $tmp2469;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2473 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2473->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2473->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2475 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2476 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2420, r2422);
                panda$core$UInt64 $tmp2477 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2476);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2473, ((panda$core$Int64) { 1004 }), p_position, $tmp2475, $tmp2477);
                return $tmp2473;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2478 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2478->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2478->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2480 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2481 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2420, r2422);
                panda$core$UInt64 $tmp2482 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2481);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2478, ((panda$core$Int64) { 1004 }), p_position, $tmp2480, $tmp2482);
                return $tmp2478;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2483 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2483->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2483->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2485 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2486 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2420, r2422);
                panda$core$UInt64 $tmp2487 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2486);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2483, ((panda$core$Int64) { 1004 }), p_position, $tmp2485, $tmp2487);
                return $tmp2483;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2488 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2488->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2488->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2490 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2491 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2420, r2422);
                panda$core$UInt64 $tmp2492 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2491);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2488, ((panda$core$Int64) { 1004 }), p_position, $tmp2490, $tmp2492);
                return $tmp2488;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2493 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2493->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2493->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2495 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2496 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2420, r2422);
                panda$core$UInt64 $tmp2497 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2496);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2493, ((panda$core$Int64) { 1004 }), p_position, $tmp2495, $tmp2497);
                return $tmp2493;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2498);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2499.value) {
    {
        panda$core$Object* $tmp2500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2500);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2505;
    org$pandalanguage$pandac$IRNode* resolved2513;
    panda$collections$Array* children2518;
    panda$core$UInt64 baseId2524;
    org$pandalanguage$pandac$IRNode* base2525;
    panda$core$UInt64 indexId2532;
    org$pandalanguage$pandac$IRNode* index2533;
    org$pandalanguage$pandac$IRNode* baseRef2538;
    org$pandalanguage$pandac$IRNode* indexRef2541;
    org$pandalanguage$pandac$IRNode* rhsIndex2544;
    org$pandalanguage$pandac$IRNode* value2546;
    panda$core$Bit $tmp2501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2501.value);
    panda$core$Int64 $tmp2502 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2502, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2503.value);
    panda$core$Bit $tmp2504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2504.value) {
    {
        panda$collections$Array* $tmp2506 = (panda$collections$Array*) malloc(40);
        $tmp2506->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2506->refCount.value = 1;
        panda$collections$Array$init($tmp2506);
        args2505 = $tmp2506;
        panda$core$Object* $tmp2508 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2505, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2508)));
        panda$collections$Array$add$panda$collections$Array$T(args2505, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2509 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2511 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2509), &$s2510, ((panda$collections$ListView*) args2505));
        return $tmp2511;
    }
    }
    panda$core$Bit $tmp2512 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2512.value);
    org$pandalanguage$pandac$IRNode* $tmp2514 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2513 = $tmp2514;
    if (((panda$core$Bit) { resolved2513 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2515 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2513);
    resolved2513 = $tmp2515;
    panda$core$Int64 $tmp2516 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2513->children);
    panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2516, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2517.value);
    panda$collections$Array* $tmp2519 = (panda$collections$Array*) malloc(40);
    $tmp2519->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2519->refCount.value = 1;
    panda$collections$Array$init($tmp2519);
    children2518 = $tmp2519;
    panda$core$Object* $tmp2521 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2513->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2522 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2521));
    panda$collections$Array$add$panda$collections$Array$T(children2518, ((panda$core$Object*) $tmp2522));
    panda$core$UInt64 $tmp2523 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2523;
    baseId2524 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2526 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2526->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2526->refCount.value = 1;
    panda$core$Object* $tmp2528 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2518, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2529 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2518, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2526, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2528)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2529)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2524)), ((panda$collections$ListView*) children2518));
    base2525 = $tmp2526;
    panda$collections$Array$clear(children2518);
    panda$core$Object* $tmp2530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2513->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2518, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2530)));
    panda$core$UInt64 $tmp2531 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2531;
    indexId2532 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2534 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2534->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2534->refCount.value = 1;
    panda$core$Object* $tmp2536 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2518, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2518, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2534, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2536)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2537)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2532)), ((panda$collections$ListView*) children2518));
    index2533 = $tmp2534;
    org$pandalanguage$pandac$IRNode* $tmp2539 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2539->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2539->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2539, ((panda$core$Int64) { 1028 }), base2525->position, base2525->type, baseId2524);
    baseRef2538 = $tmp2539;
    org$pandalanguage$pandac$IRNode* $tmp2542 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2542->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2542->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2542, ((panda$core$Int64) { 1028 }), index2533->position, index2533->type, indexId2532);
    indexRef2541 = $tmp2542;
    org$pandalanguage$pandac$IRNode* $tmp2545 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2538, ((panda$core$Int64) { 101 }), indexRef2541);
    rhsIndex2544 = $tmp2545;
    if (((panda$core$Bit) { rhsIndex2544 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2547 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2548 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2544, $tmp2547, p_right);
    value2546 = $tmp2548;
    if (((panda$core$Bit) { value2546 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2551 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2544->type);
    bool $tmp2550 = $tmp2551.value;
    if (!$tmp2550) goto $l2552;
    panda$core$Bit $tmp2553 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2550 = $tmp2553.value;
    $l2552:;
    panda$core$Bit $tmp2554 = { $tmp2550 };
    bool $tmp2549 = $tmp2554.value;
    if (!$tmp2549) goto $l2555;
    panda$core$Bit $tmp2556 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2544->type, value2546->type);
    $tmp2549 = $tmp2556.value;
    $l2555:;
    panda$core$Bit $tmp2557 = { $tmp2549 };
    if ($tmp2557.value) {
    {
        panda$collections$Array* $tmp2559 = (panda$collections$Array*) malloc(40);
        $tmp2559->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2559->refCount.value = 1;
        panda$collections$Array$init($tmp2559);
        org$pandalanguage$pandac$IRNode* $tmp2561 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2546, &$s2558, ((panda$collections$ListView*) $tmp2559), resolved2513->type);
        value2546 = $tmp2561;
        if (((panda$core$Bit) { value2546 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2518);
    panda$collections$Array$add$panda$collections$Array$T(children2518, ((panda$core$Object*) index2533));
    panda$collections$Array$add$panda$collections$Array$T(children2518, ((panda$core$Object*) value2546));
    org$pandalanguage$pandac$IRNode* $tmp2563 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2525, &$s2562, ((panda$collections$ListView*) children2518));
    return $tmp2563;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2564;
    org$pandalanguage$pandac$IRNode* right2565;
    panda$core$Int64 kind2589;
    org$pandalanguage$pandac$IRNode* resolved2596;
    panda$collections$Array* children2598;
    org$pandalanguage$pandac$IRNode* resolved2605;
    panda$collections$Array* children2607;
    org$pandalanguage$pandac$ClassDecl* cl2619;
    org$pandalanguage$pandac$ClassDecl* cl2636;
    org$pandalanguage$pandac$IRNode* finalLeft2652;
    org$pandalanguage$pandac$IRNode* finalRight2655;
    panda$collections$Array* children2658;
    panda$collections$Array* children2672;
    panda$collections$Array* children2684;
    org$pandalanguage$pandac$IRNode* reusedLeft2690;
    org$pandalanguage$pandac$ClassDecl* cl2707;
    panda$collections$ListView* parameters2709;
    org$pandalanguage$pandac$Symbol* methods2711;
    org$pandalanguage$pandac$Type* type2715;
    panda$collections$Array* types2716;
    org$pandalanguage$pandac$MethodDecl* m2720;
    panda$collections$Iterator* m$Iter2725;
    org$pandalanguage$pandac$MethodDecl* m2737;
    panda$collections$Array* children2748;
    panda$collections$Array* children2777;
    panda$collections$Array* children2793;
    org$pandalanguage$pandac$Type* resultType2816;
    org$pandalanguage$pandac$IRNode* result2820;
    org$pandalanguage$pandac$IRNode* resolved2823;
    org$pandalanguage$pandac$IRNode* target2829;
    left2564 = p_rawLeft;
    right2565 = p_rawRight;
    panda$core$Bit $tmp2566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2564->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2566.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2567 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2565);
        right2565 = $tmp2567;
        if (((panda$core$Bit) { right2565 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2568 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2564, right2565->type);
        if (((panda$core$Bit) { $tmp2568.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2569 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2564, right2565->type);
            left2564 = $tmp2569;
        }
        }
    }
    }
    panda$core$Bit $tmp2571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2565->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2570 = $tmp2571.value;
    if (!$tmp2570) goto $l2572;
    panda$core$Int64$nullable $tmp2573 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2565, left2564->type);
    $tmp2570 = ((panda$core$Bit) { $tmp2573.nonnull }).value;
    $l2572:;
    panda$core$Bit $tmp2574 = { $tmp2570 };
    if ($tmp2574.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2575 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2565, left2564->type);
        right2565 = $tmp2575;
    }
    }
    panda$core$Bit $tmp2579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2578 = $tmp2579.value;
    if ($tmp2578) goto $l2580;
    panda$core$Bit $tmp2581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2578 = $tmp2581.value;
    $l2580:;
    panda$core$Bit $tmp2582 = { $tmp2578 };
    bool $tmp2577 = $tmp2582.value;
    if ($tmp2577) goto $l2583;
    panda$core$Bit $tmp2584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2577 = $tmp2584.value;
    $l2583:;
    panda$core$Bit $tmp2585 = { $tmp2577 };
    bool $tmp2576 = $tmp2585.value;
    if ($tmp2576) goto $l2586;
    panda$core$Bit $tmp2587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2576 = $tmp2587.value;
    $l2586:;
    panda$core$Bit $tmp2588 = { $tmp2576 };
    if ($tmp2588.value) {
    {
        panda$core$Bit $tmp2591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2590 = $tmp2591.value;
        if ($tmp2590) goto $l2592;
        panda$core$Bit $tmp2593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2590 = $tmp2593.value;
        $l2592:;
        panda$core$Bit $tmp2594 = { $tmp2590 };
        if ($tmp2594.value) {
        {
            kind2589 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2589 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2564->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2595.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2597 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2565);
            resolved2596 = $tmp2597;
            if (((panda$core$Bit) { resolved2596 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2599 = (panda$collections$Array*) malloc(40);
            $tmp2599->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2599->refCount.value = 1;
            panda$collections$Array$init($tmp2599);
            children2598 = $tmp2599;
            panda$collections$Array$add$panda$collections$Array$T(children2598, ((panda$core$Object*) resolved2596));
            org$pandalanguage$pandac$IRNode* $tmp2601 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2601->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2601->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2603 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2601, kind2589, p_position, $tmp2603, ((panda$collections$ListView*) children2598));
            return $tmp2601;
        }
        }
        panda$core$Bit $tmp2604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2565->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2604.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2606 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2564);
            resolved2605 = $tmp2606;
            if (((panda$core$Bit) { resolved2605 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2608 = (panda$collections$Array*) malloc(40);
            $tmp2608->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2608->refCount.value = 1;
            panda$collections$Array$init($tmp2608);
            children2607 = $tmp2608;
            panda$collections$Array$add$panda$collections$Array$T(children2607, ((panda$core$Object*) resolved2605));
            org$pandalanguage$pandac$IRNode* $tmp2610 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2610->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2610->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2612 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2610, kind2589, p_position, $tmp2612, ((panda$collections$ListView*) children2607));
            return $tmp2610;
        }
        }
    }
    }
    panda$core$Bit $tmp2614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2613 = $tmp2614.value;
    if ($tmp2613) goto $l2615;
    panda$core$Bit $tmp2616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2613 = $tmp2616.value;
    $l2615:;
    panda$core$Bit $tmp2617 = { $tmp2613 };
    if ($tmp2617.value) {
    {
        panda$core$Bit $tmp2618 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2564->type);
        if ($tmp2618.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2620 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2564->type);
            cl2619 = $tmp2620;
            if (((panda$core$Bit) { cl2619 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2621 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2619);
            if ($tmp2621.value) {
            {
                panda$core$String* $tmp2623 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2622, $tmp2623);
                panda$core$String* $tmp2626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2624, &$s2625);
                panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2626, ((panda$core$Object*) left2564->type));
                panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2628);
                panda$core$String* $tmp2631 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2630, ((panda$core$Object*) right2565->type));
                panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2631, &$s2632);
                panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, $tmp2633);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2634);
            }
            }
        }
        }
        panda$core$Bit $tmp2635 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2565->type);
        if ($tmp2635.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2637 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2565->type);
            cl2636 = $tmp2637;
            if (((panda$core$Bit) { cl2636 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2638 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2636);
            if ($tmp2638.value) {
            {
                panda$core$String* $tmp2640 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2639, $tmp2640);
                panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, &$s2642);
                panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2643, ((panda$core$Object*) left2564->type));
                panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, &$s2645);
                panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2647, ((panda$core$Object*) right2565->type));
                panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, &$s2649);
                panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, $tmp2650);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2651);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2653 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2654 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2564, $tmp2653);
        finalLeft2652 = $tmp2654;
        if (((panda$core$Bit) { finalLeft2652 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2656 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2657 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2565, $tmp2656);
        finalRight2655 = $tmp2657;
        if (((panda$core$Bit) { finalRight2655 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2659 = (panda$collections$Array*) malloc(40);
        $tmp2659->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2659->refCount.value = 1;
        panda$collections$Array$init($tmp2659);
        children2658 = $tmp2659;
        panda$collections$Array$add$panda$collections$Array$T(children2658, ((panda$core$Object*) finalLeft2652));
        panda$collections$Array$add$panda$collections$Array$T(children2658, ((panda$core$Object*) finalRight2655));
        org$pandalanguage$pandac$IRNode* $tmp2661 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2661->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2661->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2663 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2661, ((panda$core$Int64) { 1023 }), p_position, $tmp2663, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2658));
        return $tmp2661;
    }
    }
    panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2664.value) {
    {
        panda$core$Bit $tmp2665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2564->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2665.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2666 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2564, p_op, right2565);
            return $tmp2666;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2667 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2564);
        left2564 = $tmp2667;
        if (((panda$core$Bit) { left2564 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2668 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2565, left2564->type);
        right2565 = $tmp2668;
        if (((panda$core$Bit) { right2565 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2669 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2564);
        panda$core$Bit $tmp2670 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2669);
        if ($tmp2670.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2564->position, &$s2671);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2673 = (panda$collections$Array*) malloc(40);
        $tmp2673->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2673->refCount.value = 1;
        panda$collections$Array$init($tmp2673);
        children2672 = $tmp2673;
        panda$collections$Array$add$panda$collections$Array$T(children2672, ((panda$core$Object*) left2564));
        panda$collections$Array$add$panda$collections$Array$T(children2672, ((panda$core$Object*) right2565));
        org$pandalanguage$pandac$IRNode* $tmp2675 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2675->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2675->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2675, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2672));
        return $tmp2675;
    }
    }
    panda$core$Bit $tmp2677 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2677.value) {
    {
        panda$core$Bit $tmp2678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2564->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2678.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2679 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2564, p_op, right2565);
            return $tmp2679;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2680 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2564);
        left2564 = $tmp2680;
        if (((panda$core$Bit) { left2564 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2681 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2564);
        panda$core$Bit $tmp2682 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2681);
        if ($tmp2682.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2564->position, &$s2683);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2685 = (panda$collections$Array*) malloc(40);
        $tmp2685->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2685->refCount.value = 1;
        panda$collections$Array$init($tmp2685);
        children2684 = $tmp2685;
        panda$collections$Array$add$panda$collections$Array$T(children2684, ((panda$core$Object*) left2564));
        panda$core$UInt64 $tmp2687 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2687;
        org$pandalanguage$pandac$IRNode* $tmp2688 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2688->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2688->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2688, ((panda$core$Int64) { 1027 }), left2564->position, left2564->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2684));
        left2564 = $tmp2688;
        org$pandalanguage$pandac$IRNode* $tmp2691 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2691->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2691->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2691, ((panda$core$Int64) { 1028 }), left2564->position, left2564->type, self->reusedValueCount);
        reusedLeft2690 = $tmp2691;
        panda$core$Int64 $tmp2693 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2694 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2690, $tmp2693, right2565);
        right2565 = $tmp2694;
        if (((panda$core$Bit) { right2565 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2696 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2564->type);
        bool $tmp2695 = $tmp2696.value;
        if (!$tmp2695) goto $l2697;
        panda$core$Bit $tmp2698 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2564->type, right2565->type);
        $tmp2695 = $tmp2698.value;
        $l2697:;
        panda$core$Bit $tmp2699 = { $tmp2695 };
        if ($tmp2699.value) {
        {
            panda$collections$Array* $tmp2701 = (panda$collections$Array*) malloc(40);
            $tmp2701->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2701->refCount.value = 1;
            panda$collections$Array$init($tmp2701);
            org$pandalanguage$pandac$IRNode* $tmp2703 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2565, &$s2700, ((panda$collections$ListView*) $tmp2701), left2564->type);
            right2565 = $tmp2703;
            if (((panda$core$Bit) { right2565 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2704 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2564, ((panda$core$Int64) { 73 }), right2565);
        return $tmp2704;
    }
    }
    panda$core$Bit $tmp2705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2705.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2706 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2564);
        left2564 = $tmp2706;
        if (((panda$core$Bit) { left2564 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2708 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2564->type);
        cl2707 = $tmp2708;
        if (((panda$core$Bit) { cl2707 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2710 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2564->type);
        parameters2709 = $tmp2710;
        org$pandalanguage$pandac$SymbolTable* $tmp2712 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2707);
        org$pandalanguage$pandac$Symbol* $tmp2714 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2712, &$s2713);
        methods2711 = $tmp2714;
        if (((panda$core$Bit) { methods2711 != NULL }).value) {
        {
            panda$collections$Array* $tmp2717 = (panda$collections$Array*) malloc(40);
            $tmp2717->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2717->refCount.value = 1;
            panda$collections$Array$init($tmp2717);
            types2716 = $tmp2717;
            panda$core$Bit $tmp2719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2711->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2719.value) {
            {
                m2720 = ((org$pandalanguage$pandac$MethodDecl*) methods2711);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2720);
                org$pandalanguage$pandac$MethodRef* $tmp2721 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2721->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2721->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2721, m2720, parameters2709);
                org$pandalanguage$pandac$Type* $tmp2723 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2721);
                panda$collections$Array$add$panda$collections$Array$T(types2716, ((panda$core$Object*) $tmp2723));
            }
            }
            else {
            {
                panda$core$Bit $tmp2724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2711->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2724.value);
                {
                    ITable* $tmp2726 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2711)->methods)->$class->itable;
                    while ($tmp2726->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2726 = $tmp2726->next;
                    }
                    $fn2728 $tmp2727 = $tmp2726->methods[0];
                    panda$collections$Iterator* $tmp2729 = $tmp2727(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2711)->methods));
                    m$Iter2725 = $tmp2729;
                    $l2730:;
                    ITable* $tmp2732 = m$Iter2725->$class->itable;
                    while ($tmp2732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2732 = $tmp2732->next;
                    }
                    $fn2734 $tmp2733 = $tmp2732->methods[0];
                    panda$core$Bit $tmp2735 = $tmp2733(m$Iter2725);
                    panda$core$Bit $tmp2736 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2735);
                    if (!$tmp2736.value) goto $l2731;
                    {
                        ITable* $tmp2738 = m$Iter2725->$class->itable;
                        while ($tmp2738->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2738 = $tmp2738->next;
                        }
                        $fn2740 $tmp2739 = $tmp2738->methods[1];
                        panda$core$Object* $tmp2741 = $tmp2739(m$Iter2725);
                        m2737 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2741);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2737);
                        org$pandalanguage$pandac$MethodRef* $tmp2742 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2742->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2742->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2742, m2737, parameters2709);
                        org$pandalanguage$pandac$Type* $tmp2744 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2742);
                        panda$collections$Array$add$panda$collections$Array$T(types2716, ((panda$core$Object*) $tmp2744));
                    }
                    goto $l2730;
                    $l2731:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2745 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2745->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2745->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2745, ((panda$collections$ListView*) types2716));
            type2715 = $tmp2745;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2747 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2715 = $tmp2747;
        }
        }
        panda$collections$Array* $tmp2749 = (panda$collections$Array*) malloc(40);
        $tmp2749->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2749->refCount.value = 1;
        panda$collections$Array$init($tmp2749);
        children2748 = $tmp2749;
        panda$collections$Array$add$panda$collections$Array$T(children2748, ((panda$core$Object*) left2564));
        panda$collections$Array$add$panda$collections$Array$T(children2748, ((panda$core$Object*) right2565));
        org$pandalanguage$pandac$IRNode* $tmp2751 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2751->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2751->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2751, ((panda$core$Int64) { 1040 }), p_position, type2715, ((panda$collections$ListView*) children2748));
        return $tmp2751;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2753 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2754 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2564->type, $tmp2753);
    if ($tmp2754.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2756 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2757 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2565->type, $tmp2756);
        bool $tmp2755 = $tmp2757.value;
        if (!$tmp2755) goto $l2758;
        panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2762 = $tmp2763.value;
        if ($tmp2762) goto $l2764;
        panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2762 = $tmp2765.value;
        $l2764:;
        panda$core$Bit $tmp2766 = { $tmp2762 };
        bool $tmp2761 = $tmp2766.value;
        if ($tmp2761) goto $l2767;
        panda$core$Bit $tmp2768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2761 = $tmp2768.value;
        $l2767:;
        panda$core$Bit $tmp2769 = { $tmp2761 };
        bool $tmp2760 = $tmp2769.value;
        if ($tmp2760) goto $l2770;
        panda$core$Bit $tmp2771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2760 = $tmp2771.value;
        $l2770:;
        panda$core$Bit $tmp2772 = { $tmp2760 };
        bool $tmp2759 = $tmp2772.value;
        if ($tmp2759) goto $l2773;
        panda$core$Bit $tmp2774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2759 = $tmp2774.value;
        $l2773:;
        panda$core$Bit $tmp2775 = { $tmp2759 };
        $tmp2755 = $tmp2775.value;
        $l2758:;
        panda$core$Bit $tmp2776 = { $tmp2755 };
        if ($tmp2776.value) {
        {
            panda$collections$Array* $tmp2778 = (panda$collections$Array*) malloc(40);
            $tmp2778->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2778->refCount.value = 1;
            panda$collections$Array$init($tmp2778);
            children2777 = $tmp2778;
            panda$collections$Array$add$panda$collections$Array$T(children2777, ((panda$core$Object*) left2564));
            panda$collections$Array$add$panda$collections$Array$T(children2777, ((panda$core$Object*) right2565));
            org$pandalanguage$pandac$IRNode* $tmp2780 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2780->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2780->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2780, ((panda$core$Int64) { 1023 }), p_position, left2564->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2777));
            return $tmp2780;
        }
        }
        panda$core$String* $tmp2783 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2782, $tmp2783);
        panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2784, &$s2785);
        panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2786, ((panda$core$Object*) left2564->type));
        panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, &$s2788);
        panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2789, ((panda$core$Object*) right2565->type));
        panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, &$s2791);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2792);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2794 = (panda$collections$Array*) malloc(40);
    $tmp2794->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2794->refCount.value = 1;
    panda$collections$Array$init($tmp2794);
    children2793 = $tmp2794;
    panda$core$Bit $tmp2798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2564->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2797 = $tmp2798.value;
    if ($tmp2797) goto $l2799;
    panda$core$Bit $tmp2800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2564->kind, ((panda$core$Int64) { 1032 }));
    $tmp2797 = $tmp2800.value;
    $l2799:;
    panda$core$Bit $tmp2801 = { $tmp2797 };
    bool $tmp2796 = $tmp2801.value;
    if (!$tmp2796) goto $l2802;
    panda$core$Bit $tmp2804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2565->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2803 = $tmp2804.value;
    if ($tmp2803) goto $l2805;
    panda$core$Bit $tmp2806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2565->kind, ((panda$core$Int64) { 1032 }));
    $tmp2803 = $tmp2806.value;
    $l2805:;
    panda$core$Bit $tmp2807 = { $tmp2803 };
    $tmp2796 = $tmp2807.value;
    $l2802:;
    panda$core$Bit $tmp2808 = { $tmp2796 };
    if ($tmp2808.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2809 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2564, p_op, right2565);
        return $tmp2809;
    }
    }
    panda$core$Bit $tmp2811 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2564->type);
    bool $tmp2810 = $tmp2811.value;
    if (!$tmp2810) goto $l2812;
    panda$core$Int64$nullable $tmp2813 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2565, left2564->type);
    $tmp2810 = ((panda$core$Bit) { $tmp2813.nonnull }).value;
    $l2812:;
    panda$core$Bit $tmp2814 = { $tmp2810 };
    if ($tmp2814.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2815 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2565, left2564->type);
        right2565 = $tmp2815;
        PANDA_ASSERT(((panda$core$Bit) { right2565 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2793, ((panda$core$Object*) left2564));
        panda$collections$Array$add$panda$collections$Array$T(children2793, ((panda$core$Object*) right2565));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2817 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2816 = $tmp2817;
            }
            break;
            default:
            {
                resultType2816 = left2564->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2818 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2818->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2818->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2818, ((panda$core$Int64) { 1023 }), p_position, resultType2816, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2793));
        return $tmp2818;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2793, ((panda$core$Object*) right2565));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2821 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2822 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2564, $tmp2821, ((panda$collections$ListView*) children2793));
    result2820 = $tmp2822;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2820 == NULL }).value) {
    {
        panda$collections$Array$clear(children2793);
        panda$collections$Array$add$panda$collections$Array$T(children2793, ((panda$core$Object*) left2564));
        org$pandalanguage$pandac$IRNode* $tmp2824 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2565);
        resolved2823 = $tmp2824;
        bool $tmp2825 = ((panda$core$Bit) { resolved2823 != NULL }).value;
        if (!$tmp2825) goto $l2826;
        panda$core$Bit $tmp2827 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2823->type);
        $tmp2825 = $tmp2827.value;
        $l2826:;
        panda$core$Bit $tmp2828 = { $tmp2825 };
        if ($tmp2828.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2793, ((panda$core$Object*) resolved2823));
            org$pandalanguage$pandac$IRNode* $tmp2830 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2830->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2830->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2832 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2830, ((panda$core$Int64) { 1001 }), resolved2823->position, $tmp2832, resolved2823->type);
            target2829 = $tmp2830;
            panda$core$String* $tmp2833 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2834 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2829, $tmp2833, ((panda$collections$ListView*) children2793));
            result2820 = $tmp2834;
        }
        }
    }
    }
    return result2820;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2835;
    org$pandalanguage$pandac$IRNode* right2838;
    panda$core$Object* $tmp2836 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2837 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2836));
    left2835 = $tmp2837;
    if (((panda$core$Bit) { left2835 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2839 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2840 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2839));
    right2838 = $tmp2840;
    if (((panda$core$Bit) { right2838 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2841 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2835, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2838);
    return $tmp2841;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2845;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2842 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2842;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2843 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2844 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2843, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2844.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2845, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp2846 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp2845);
            return ((panda$collections$ListView*) $tmp2846);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2847 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2848 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2847));
            return $tmp2848;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2849 = (panda$collections$Array*) malloc(40);
            $tmp2849->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2849->refCount.value = 1;
            panda$collections$Array$init($tmp2849);
            return ((panda$collections$ListView*) $tmp2849);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2851.value) {
        {
            panda$collections$ListView* $tmp2852 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2852;
        }
        }
        panda$collections$ListView* $tmp2853 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2853;
    }
    }
    panda$collections$Array* $tmp2854 = (panda$collections$Array*) malloc(40);
    $tmp2854->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2854->refCount.value = 1;
    panda$collections$Array$init($tmp2854);
    return ((panda$collections$ListView*) $tmp2854);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2857;
    org$pandalanguage$pandac$ClassDecl* cl2859;
    org$pandalanguage$pandac$Symbol* s2861;
    org$pandalanguage$pandac$MethodDecl* m2864;
    panda$collections$Iterator* test$Iter2869;
    org$pandalanguage$pandac$MethodDecl* test2881;
    org$pandalanguage$pandac$MethodRef* ref2893;
    panda$collections$Array* children2897;
    org$pandalanguage$pandac$IRNode* methodRef2900;
    org$pandalanguage$pandac$Position $tmp2906;
    panda$collections$Array* args2907;
    panda$collections$Array* children2916;
    panda$collections$Array* children2926;
    org$pandalanguage$pandac$IRNode* coerced2935;
    panda$collections$Array* children2938;
    panda$core$Bit $tmp2856 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2856.value) {
    {
        panda$core$String* $tmp2858 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2857 = $tmp2858;
        org$pandalanguage$pandac$ClassDecl* $tmp2860 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2859 = $tmp2860;
        if (((panda$core$Bit) { cl2859 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2862 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2859);
        org$pandalanguage$pandac$Symbol* $tmp2863 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2862, name2857);
        s2861 = $tmp2863;
        if (((panda$core$Bit) { s2861 != NULL }).value) {
        {
            m2864 = NULL;
            switch (s2861->kind.value) {
                case 204:
                {
                    m2864 = ((org$pandalanguage$pandac$MethodDecl*) s2861);
                    panda$core$Int64 $tmp2865 = panda$collections$Array$get_count$R$panda$core$Int64(m2864->parameters);
                    panda$core$Bit $tmp2866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2865, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2866.value);
                    panda$core$Bit $tmp2867 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2864->annotations);
                    panda$core$Bit $tmp2868 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2867);
                    PANDA_ASSERT($tmp2868.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2870 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2861)->methods)->$class->itable;
                        while ($tmp2870->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2870 = $tmp2870->next;
                        }
                        $fn2872 $tmp2871 = $tmp2870->methods[0];
                        panda$collections$Iterator* $tmp2873 = $tmp2871(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2861)->methods));
                        test$Iter2869 = $tmp2873;
                        $l2874:;
                        ITable* $tmp2876 = test$Iter2869->$class->itable;
                        while ($tmp2876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2876 = $tmp2876->next;
                        }
                        $fn2878 $tmp2877 = $tmp2876->methods[0];
                        panda$core$Bit $tmp2879 = $tmp2877(test$Iter2869);
                        panda$core$Bit $tmp2880 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2879);
                        if (!$tmp2880.value) goto $l2875;
                        {
                            ITable* $tmp2882 = test$Iter2869->$class->itable;
                            while ($tmp2882->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2882 = $tmp2882->next;
                            }
                            $fn2884 $tmp2883 = $tmp2882->methods[1];
                            panda$core$Object* $tmp2885 = $tmp2883(test$Iter2869);
                            test2881 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2885);
                            panda$core$Bit $tmp2887 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2881->annotations);
                            panda$core$Bit $tmp2888 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2887);
                            bool $tmp2886 = $tmp2888.value;
                            if (!$tmp2886) goto $l2889;
                            panda$core$Int64 $tmp2890 = panda$collections$Array$get_count$R$panda$core$Int64(test2881->parameters);
                            panda$core$Bit $tmp2891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2890, ((panda$core$Int64) { 0 }));
                            $tmp2886 = $tmp2891.value;
                            $l2889:;
                            panda$core$Bit $tmp2892 = { $tmp2886 };
                            if ($tmp2892.value) {
                            {
                                m2864 = test2881;
                                goto $l2875;
                            }
                            }
                        }
                        goto $l2874;
                        $l2875:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2864 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2864);
                org$pandalanguage$pandac$MethodRef* $tmp2894 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2894->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2894->refCount.value = 1;
                panda$collections$ListView* $tmp2896 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2894, m2864, $tmp2896);
                ref2893 = $tmp2894;
                panda$collections$Array* $tmp2898 = (panda$collections$Array*) malloc(40);
                $tmp2898->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2898->refCount.value = 1;
                panda$collections$Array$init($tmp2898);
                children2897 = $tmp2898;
                panda$collections$Array$add$panda$collections$Array$T(children2897, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2901 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2901->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2901->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2903 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp2903->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2903->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2906);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp2903, &$s2905, ((panda$core$Int64) { 16 }), $tmp2906, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2901, ((panda$core$Int64) { 1002 }), p_position, $tmp2903, ((panda$core$Object*) ref2893), ((panda$collections$ListView*) children2897));
                methodRef2900 = $tmp2901;
                panda$collections$Array* $tmp2908 = (panda$collections$Array*) malloc(40);
                $tmp2908->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2908->refCount.value = 1;
                panda$collections$Array$init($tmp2908);
                args2907 = $tmp2908;
                org$pandalanguage$pandac$IRNode* $tmp2910 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2900, ((panda$collections$ListView*) args2907));
                return $tmp2910;
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
                    org$pandalanguage$pandac$IRNode* $tmp2911 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2911->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2911->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2911, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2911;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2913 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2913->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2913->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2913, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2913;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2915 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2915.value) {
                    {
                        panda$collections$Array* $tmp2917 = (panda$collections$Array*) malloc(40);
                        $tmp2917->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2917->refCount.value = 1;
                        panda$collections$Array$init($tmp2917);
                        children2916 = $tmp2917;
                        panda$collections$Array$add$panda$collections$Array$T(children2916, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2919 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp2919->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2919->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2919, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2916));
                        return $tmp2919;
                    }
                    }
                }
            }
            panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2921, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, &$s2923);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2924);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2925 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2925.value) {
            {
                panda$collections$Array* $tmp2927 = (panda$collections$Array*) malloc(40);
                $tmp2927->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2927->refCount.value = 1;
                panda$collections$Array$init($tmp2927);
                children2926 = $tmp2927;
                panda$collections$Array$add$panda$collections$Array$T(children2926, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2929 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2929->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2929->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2929, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2926));
                return $tmp2929;
            }
            }
            else {
            {
                panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2931, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2932, &$s2933);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2934);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2936 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2937 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2936);
            coerced2935 = $tmp2937;
            if (((panda$core$Bit) { coerced2935 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2939 = (panda$collections$Array*) malloc(40);
            $tmp2939->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2939->refCount.value = 1;
            panda$collections$Array$init($tmp2939);
            children2938 = $tmp2939;
            panda$collections$Array$add$panda$collections$Array$T(children2938, ((panda$core$Object*) coerced2935));
            org$pandalanguage$pandac$IRNode* $tmp2941 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2941->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2941->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2941, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2938));
            return $tmp2941;
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
    org$pandalanguage$pandac$IRNode* base2946;
    panda$core$Bit $tmp2943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2943.value);
    panda$core$Int64 $tmp2944 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2944, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2945.value);
    panda$core$Object* $tmp2947 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2948 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2947));
    base2946 = $tmp2948;
    if (((panda$core$Bit) { base2946 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2949 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2946, p_p->position);
    return $tmp2949;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2951;
    panda$collections$Array* args2954;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2957;
    org$pandalanguage$pandac$IRNode* arg2972;
    panda$core$Bit $tmp2950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2950.value);
    panda$core$Object* $tmp2952 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2953 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2952));
    m2951 = $tmp2953;
    if (((panda$core$Bit) { m2951 != NULL }).value) {
    {
        panda$collections$Array* $tmp2955 = (panda$collections$Array*) malloc(40);
        $tmp2955->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2955->refCount.value = 1;
        panda$collections$Array$init($tmp2955);
        args2954 = $tmp2955;
        panda$core$Int64 $tmp2958 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2957, ((panda$core$Int64) { 1 }), $tmp2958, ((panda$core$Bit) { false }));
        int64_t $tmp2960 = $tmp2957.min.value;
        panda$core$Int64 i2959 = { $tmp2960 };
        int64_t $tmp2962 = $tmp2957.max.value;
        bool $tmp2963 = $tmp2957.inclusive.value;
        if ($tmp2963) goto $l2970; else goto $l2971;
        $l2970:;
        if ($tmp2960 <= $tmp2962) goto $l2964; else goto $l2966;
        $l2971:;
        if ($tmp2960 < $tmp2962) goto $l2964; else goto $l2966;
        $l2964:;
        {
            panda$core$Object* $tmp2973 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2959);
            org$pandalanguage$pandac$IRNode* $tmp2974 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2973));
            arg2972 = $tmp2974;
            if (((panda$core$Bit) { arg2972 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2954, ((panda$core$Object*) arg2972));
        }
        $l2967:;
        int64_t $tmp2976 = $tmp2962 - i2959.value;
        if ($tmp2963) goto $l2977; else goto $l2978;
        $l2977:;
        if ($tmp2976 >= 1) goto $l2975; else goto $l2966;
        $l2978:;
        if ($tmp2976 > 1) goto $l2975; else goto $l2966;
        $l2975:;
        i2959.value += 1;
        goto $l2964;
        $l2966:;
        org$pandalanguage$pandac$IRNode* $tmp2981 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2951, ((panda$collections$ListView*) args2954));
        return $tmp2981;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2985;
    org$pandalanguage$pandac$ClassDecl* cl2994;
    panda$core$String* name2996;
    org$pandalanguage$pandac$ClassDecl* cl3004;
    org$pandalanguage$pandac$Symbol* s3017;
    panda$core$Bit $tmp2982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2982.value);
    panda$core$Int64 $tmp2983 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2983, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2984.value);
    panda$core$Object* $tmp2986 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2987 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2986));
    base2985 = $tmp2987;
    if (((panda$core$Bit) { base2985 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2989 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2985->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2988 = $tmp2989.value;
    if (!$tmp2988) goto $l2990;
    panda$core$Bit $tmp2991 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2985->kind, ((panda$core$Int64) { 1024 }));
    $tmp2988 = $tmp2991.value;
    $l2990:;
    panda$core$Bit $tmp2992 = { $tmp2988 };
    if ($tmp2992.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2993 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2985);
        base2985 = $tmp2993;
    }
    }
    if (((panda$core$Bit) { base2985 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2985->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2995 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2985->payload));
            cl2994 = $tmp2995;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp2998 = (($fn2997) base2985->payload->$class->vtable[0])(base2985->payload);
            panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, &$s2999);
            panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3000, p_d->payload);
            panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, &$s3002);
            name2996 = $tmp3003;
            org$pandalanguage$pandac$ClassDecl* $tmp3005 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2996);
            cl3004 = $tmp3005;
            if (((panda$core$Bit) { cl3004 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3006 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3006->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3006->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3008 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3009 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3004);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3006, ((panda$core$Int64) { 1001 }), p_d->position, $tmp3008, $tmp3009);
                return $tmp3006;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3010 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3010->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3010->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3012 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3010, ((panda$core$Int64) { 1037 }), p_d->position, $tmp3012, name2996);
            return $tmp3010;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3013 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3013));
            panda$core$Object* $tmp3014 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3015 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3014)->rawSuper);
            cl2994 = $tmp3015;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3016 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2985->type);
            cl2994 = $tmp3016;
        }
    }
    if (((panda$core$Bit) { cl2994 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3018 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2994);
    org$pandalanguage$pandac$Symbol* $tmp3019 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3018, ((panda$core$String*) p_d->payload));
    s3017 = $tmp3019;
    if (((panda$core$Bit) { s3017 == NULL }).value) {
    {
        panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3020, ((panda$core$Object*) base2985->type));
        panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3021, &$s3022);
        panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3024, p_d->payload);
        panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, &$s3026);
        panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3023, $tmp3027);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_d->position, $tmp3028);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3029 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2994);
    org$pandalanguage$pandac$IRNode* $tmp3030 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base2985, s3017, $tmp3029);
    return $tmp3030;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3032;
    panda$core$Bit $tmp3031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3031.value);
    org$pandalanguage$pandac$Symbol* $tmp3033 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3032 = $tmp3033;
    if (((panda$core$Bit) { s3032 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3034 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3032 = ((org$pandalanguage$pandac$Symbol*) $tmp3034);
    }
    }
    if (((panda$core$Bit) { s3032 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3035 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3032, self->symbolTable);
        return $tmp3035;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3036 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3036->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3036->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3038 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3036, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3038, ((panda$core$String*) p_i->payload));
    return $tmp3036;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3039;
    org$pandalanguage$pandac$Type* $tmp3040 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3041 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3040);
    resolved3039 = $tmp3041;
    if (((panda$core$Bit) { resolved3039 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3042 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3042->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3042->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3044 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3042, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3044, resolved3039);
    return $tmp3042;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3052;
    org$pandalanguage$pandac$IRNode* end3060;
    org$pandalanguage$pandac$IRNode* step3068;
    panda$collections$Array* children3075;
    org$pandalanguage$pandac$Position $tmp3083;
    panda$core$Bit $tmp3046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3045 = $tmp3046.value;
    if ($tmp3045) goto $l3047;
    panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3045 = $tmp3048.value;
    $l3047:;
    panda$core$Bit $tmp3049 = { $tmp3045 };
    PANDA_ASSERT($tmp3049.value);
    panda$core$Int64 $tmp3050 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3050, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3051.value);
    panda$core$Object* $tmp3053 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3053)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3054.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3055 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3055->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3055->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3057 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3055, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3057);
        start3052 = $tmp3055;
    }
    }
    else {
    {
        panda$core$Object* $tmp3058 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3059 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3058));
        start3052 = $tmp3059;
        if (((panda$core$Bit) { start3052 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3061 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3061)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3062.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3063 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3063->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3063->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3065 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3063, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3065);
        end3060 = $tmp3063;
    }
    }
    else {
    {
        panda$core$Object* $tmp3066 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3067 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3066));
        end3060 = $tmp3067;
        if (((panda$core$Bit) { end3060 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3069 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3069)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3070.value) {
    {
        step3068 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3071 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3072 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3071));
        org$pandalanguage$pandac$Type* $tmp3073 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3074 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3072, $tmp3073);
        step3068 = $tmp3074;
        if (((panda$core$Bit) { step3068 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3076 = (panda$collections$Array*) malloc(40);
    $tmp3076->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3076->refCount.value = 1;
    panda$collections$Array$init($tmp3076);
    children3075 = $tmp3076;
    panda$collections$Array$add$panda$collections$Array$T(children3075, ((panda$core$Object*) start3052));
    panda$collections$Array$add$panda$collections$Array$T(children3075, ((panda$core$Object*) end3060));
    if (((panda$core$Bit) { step3068 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3075, ((panda$core$Object*) step3068));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3078 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3078->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3078->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3080 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3080->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3080->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3083);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3080, &$s3082, ((panda$core$Int64) { 17 }), $tmp3083, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3078, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3080, ((panda$core$Object*) wrap_panda$core$Bit($tmp3084)), ((panda$collections$ListView*) children3075));
    return $tmp3078;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3085 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3085->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3085->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3087 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3085, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3087, ((panda$core$String*) p_s->payload));
    return $tmp3085;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3092;
    org$pandalanguage$pandac$ClassDecl* cl3093;
    panda$collections$Array* subtypes3100;
    panda$core$MutableString* name3104;
    panda$core$String* separator3108;
    panda$collections$Iterator* p$Iter3110;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3122;
    panda$collections$Array* pType3127;
    panda$core$String* pName3130;
    panda$core$Bit $tmp3088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3088.value);
    panda$core$Object* $tmp3089 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3090 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3089)->annotations);
    if ($tmp3090.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3091);
        return NULL;
    }
    }
    panda$core$Object* $tmp3094 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3093 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3094);
    ITable* $tmp3095 = ((panda$collections$CollectionView*) cl3093->parameters)->$class->itable;
    while ($tmp3095->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3095 = $tmp3095->next;
    }
    $fn3097 $tmp3096 = $tmp3095->methods[0];
    panda$core$Int64 $tmp3098 = $tmp3096(((panda$collections$CollectionView*) cl3093->parameters));
    panda$core$Bit $tmp3099 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3098, ((panda$core$Int64) { 0 }));
    if ($tmp3099.value) {
    {
        panda$collections$Array* $tmp3101 = (panda$collections$Array*) malloc(40);
        $tmp3101->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3101->refCount.value = 1;
        panda$collections$Array$init($tmp3101);
        subtypes3100 = $tmp3101;
        org$pandalanguage$pandac$Type* $tmp3103 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3093);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3100, ((panda$core$Object*) $tmp3103));
        panda$core$MutableString* $tmp3105 = (panda$core$MutableString*) malloc(40);
        $tmp3105->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3105->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3105, ((org$pandalanguage$pandac$Symbol*) cl3093)->name);
        name3104 = $tmp3105;
        panda$core$MutableString$append$panda$core$String(name3104, &$s3107);
        separator3108 = &$s3109;
        {
            ITable* $tmp3111 = ((panda$collections$Iterable*) cl3093->parameters)->$class->itable;
            while ($tmp3111->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3111 = $tmp3111->next;
            }
            $fn3113 $tmp3112 = $tmp3111->methods[0];
            panda$collections$Iterator* $tmp3114 = $tmp3112(((panda$collections$Iterable*) cl3093->parameters));
            p$Iter3110 = $tmp3114;
            $l3115:;
            ITable* $tmp3117 = p$Iter3110->$class->itable;
            while ($tmp3117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3117 = $tmp3117->next;
            }
            $fn3119 $tmp3118 = $tmp3117->methods[0];
            panda$core$Bit $tmp3120 = $tmp3118(p$Iter3110);
            panda$core$Bit $tmp3121 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3120);
            if (!$tmp3121.value) goto $l3116;
            {
                ITable* $tmp3123 = p$Iter3110->$class->itable;
                while ($tmp3123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3123 = $tmp3123->next;
                }
                $fn3125 $tmp3124 = $tmp3123->methods[1];
                panda$core$Object* $tmp3126 = $tmp3124(p$Iter3110);
                p3122 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3126);
                panda$collections$Array* $tmp3128 = (panda$collections$Array*) malloc(40);
                $tmp3128->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3128->refCount.value = 1;
                panda$collections$Array$init($tmp3128);
                pType3127 = $tmp3128;
                panda$collections$Array$add$panda$collections$Array$T(pType3127, ((panda$core$Object*) p3122->bound));
                panda$core$String* $tmp3131 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3093)->name);
                panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, &$s3132);
                panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3133, ((org$pandalanguage$pandac$Symbol*) p3122)->name);
                panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3134, &$s3135);
                pName3130 = $tmp3136;
                panda$core$MutableString$append$panda$core$String(name3104, separator3108);
                panda$core$MutableString$append$panda$core$String(name3104, pName3130);
                org$pandalanguage$pandac$Type* $tmp3137 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3137->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3137->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3137, p3122);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3100, ((panda$core$Object*) $tmp3137));
                separator3108 = &$s3139;
            }
            goto $l3115;
            $l3116:;
        }
        panda$core$MutableString$append$panda$core$String(name3104, &$s3140);
        org$pandalanguage$pandac$Type* $tmp3141 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3141->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3141->refCount.value = 1;
        panda$core$String* $tmp3143 = panda$core$MutableString$finish$R$panda$core$String(name3104);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3141, $tmp3143, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3100), ((panda$core$Bit) { true }));
        type3092 = $tmp3141;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3144 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3093);
        type3092 = $tmp3144;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3145 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3145->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3145->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3145, ((panda$core$Int64) { 1025 }), p_s->position, type3092);
    return $tmp3145;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3151;
    panda$core$Bit $tmp3147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3147.value);
    panda$core$Object* $tmp3148 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3149 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3148)->annotations);
    if ($tmp3149.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3150);
        return NULL;
    }
    }
    panda$core$Object* $tmp3152 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3151 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3152);
    PANDA_ASSERT(cl3151->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3153 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3153->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3153->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3153, ((panda$core$Int64) { 1024 }), p_s->position, cl3151->rawSuper);
    return $tmp3153;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3158;
    org$pandalanguage$pandac$Type* type3161;
    panda$core$Bit $tmp3155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3155.value);
    panda$core$Int64 $tmp3156 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3156, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3157.value);
    panda$core$Object* $tmp3159 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3160 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3159));
    value3158 = $tmp3160;
    if (((panda$core$Bit) { value3158 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3162 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3163 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3162));
    org$pandalanguage$pandac$Type* $tmp3164 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3163);
    type3161 = $tmp3164;
    if (((panda$core$Bit) { type3161 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3165 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3158, type3161);
    if (((panda$core$Bit) { $tmp3165.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3166 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3158, type3161);
        return $tmp3166;
    }
    }
    panda$core$Bit $tmp3167 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3158, type3161);
    if ($tmp3167.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3168 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3158, p_c->position, ((panda$core$Bit) { true }), type3161);
        return $tmp3168;
    }
    }
    else {
    {
        panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3169, ((panda$core$Object*) value3158->type));
        panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, &$s3171);
        panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3173, ((panda$core$Object*) type3161));
        panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, &$s3175);
        panda$core$String* $tmp3177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, $tmp3176);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3177);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3178.value);
    org$pandalanguage$pandac$IRNode* $tmp3179 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3179->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3179->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3181 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3179, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3181);
    return $tmp3179;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3186;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3182 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3182;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3183 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3183->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3183->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3185 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3183, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3185, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3183;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3187 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3186 = $tmp3187;
            bool $tmp3188 = ((panda$core$Bit) { result3186 != NULL }).value;
            if (!$tmp3188) goto $l3189;
            org$pandalanguage$pandac$Type* $tmp3190 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3191 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3186->type, $tmp3190);
            $tmp3188 = $tmp3191.value;
            $l3189:;
            panda$core$Bit $tmp3192 = { $tmp3188 };
            if ($tmp3192.value) {
            {
                panda$core$Bit $tmp3193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3186->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3193.value);
                panda$core$String* $tmp3194 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3186->payload)->value);
                panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, &$s3195);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3186->position, $tmp3196);
                return NULL;
            }
            }
            return result3186;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3197 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3197;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3198 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3198;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3199 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3199->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3199->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3201 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3199, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3201, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3199;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3202 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3202;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3203 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3203;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3204 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3204;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3205 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3205;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3206 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3206;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3207 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3207;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3208 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3208;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3209 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3209;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3211;
    panda$collections$Array* result3214;
    panda$collections$Iterator* stmt$Iter3217;
    org$pandalanguage$pandac$ASTNode* stmt3229;
    org$pandalanguage$pandac$IRNode* compiled3234;
    panda$core$Bit $tmp3210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3210.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3212 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3212->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3212->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3212, self->symbolTable);
    symbols3211 = $tmp3212;
    self->symbolTable = symbols3211;
    panda$collections$Array* $tmp3215 = (panda$collections$Array*) malloc(40);
    $tmp3215->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3215->refCount.value = 1;
    panda$collections$Array$init($tmp3215);
    result3214 = $tmp3215;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3218 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3218->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3218 = $tmp3218->next;
            }
            $fn3220 $tmp3219 = $tmp3218->methods[0];
            panda$collections$Iterator* $tmp3221 = $tmp3219(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3217 = $tmp3221;
            $l3222:;
            ITable* $tmp3224 = stmt$Iter3217->$class->itable;
            while ($tmp3224->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3224 = $tmp3224->next;
            }
            $fn3226 $tmp3225 = $tmp3224->methods[0];
            panda$core$Bit $tmp3227 = $tmp3225(stmt$Iter3217);
            panda$core$Bit $tmp3228 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3227);
            if (!$tmp3228.value) goto $l3223;
            {
                ITable* $tmp3230 = stmt$Iter3217->$class->itable;
                while ($tmp3230->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3230 = $tmp3230->next;
                }
                $fn3232 $tmp3231 = $tmp3230->methods[1];
                panda$core$Object* $tmp3233 = $tmp3231(stmt$Iter3217);
                stmt3229 = ((org$pandalanguage$pandac$ASTNode*) $tmp3233);
                org$pandalanguage$pandac$IRNode* $tmp3235 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3229);
                compiled3234 = $tmp3235;
                if (((panda$core$Bit) { compiled3234 == NULL }).value) {
                {
                    panda$core$Object* $tmp3236 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3211->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3236);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3237 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3234->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3237.value);
                panda$collections$Array$add$panda$collections$Array$T(result3214, ((panda$core$Object*) compiled3234));
            }
            goto $l3222;
            $l3223:;
        }
    }
    }
    panda$core$Object* $tmp3238 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3211->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3238);
    org$pandalanguage$pandac$IRNode* $tmp3239 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3239->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3239->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3239, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3214));
    return $tmp3239;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3249;
    org$pandalanguage$pandac$IRNode* ifTrue3254;
    panda$collections$Array* children3257;
    org$pandalanguage$pandac$IRNode* ifFalse3262;
    panda$core$Bit $tmp3241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3241.value);
    panda$core$Int64 $tmp3243 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3243, ((panda$core$Int64) { 2 }));
    bool $tmp3242 = $tmp3244.value;
    if ($tmp3242) goto $l3245;
    panda$core$Int64 $tmp3246 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3246, ((panda$core$Int64) { 3 }));
    $tmp3242 = $tmp3247.value;
    $l3245:;
    panda$core$Bit $tmp3248 = { $tmp3242 };
    PANDA_ASSERT($tmp3248.value);
    panda$core$Object* $tmp3250 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3251 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3250));
    org$pandalanguage$pandac$Type* $tmp3252 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3253 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3251, $tmp3252);
    test3249 = $tmp3253;
    if (((panda$core$Bit) { test3249 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3255 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3256 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3255));
    ifTrue3254 = $tmp3256;
    if (((panda$core$Bit) { ifTrue3254 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3258 = (panda$collections$Array*) malloc(40);
    $tmp3258->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3258->refCount.value = 1;
    panda$collections$Array$init($tmp3258);
    children3257 = $tmp3258;
    panda$collections$Array$add$panda$collections$Array$T(children3257, ((panda$core$Object*) test3249));
    panda$collections$Array$add$panda$collections$Array$T(children3257, ((panda$core$Object*) ifTrue3254));
    panda$core$Int64 $tmp3260 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3260, ((panda$core$Int64) { 3 }));
    if ($tmp3261.value) {
    {
        panda$core$Object* $tmp3263 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3264 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3263));
        ifFalse3262 = $tmp3264;
        if (((panda$core$Bit) { ifFalse3262 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3257, ((panda$core$Object*) ifFalse3262));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3265 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3265->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3265->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3265, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3257));
    return $tmp3265;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3267;
    org$pandalanguage$pandac$IRNode* list3268;
    org$pandalanguage$pandac$Type* t3280;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3313;
    org$pandalanguage$pandac$IRNode* body3315;
    panda$collections$Array* children3317;
    panda$core$Bit $tmp3271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3270 = $tmp3271.value;
    if (!$tmp3270) goto $l3272;
    $tmp3270 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3272:;
    panda$core$Bit $tmp3273 = { $tmp3270 };
    bool $tmp3269 = $tmp3273.value;
    if (!$tmp3269) goto $l3274;
    panda$core$Int64 $tmp3275 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3276 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3275, ((panda$core$Int64) { 0 }));
    $tmp3269 = $tmp3276.value;
    $l3274:;
    panda$core$Bit $tmp3277 = { $tmp3269 };
    if ($tmp3277.value) {
    {
        panda$core$Int64 $tmp3278 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3278, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3279.value);
        panda$core$Object* $tmp3281 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3282 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3281));
        org$pandalanguage$pandac$Type* $tmp3283 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3282);
        t3280 = $tmp3283;
        panda$core$Bit $tmp3284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3284.value) {
        {
            panda$core$Int64 $tmp3285 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3285, ((panda$core$Int64) { 2 }));
            if ($tmp3286.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3287 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3280);
                org$pandalanguage$pandac$IRNode* $tmp3288 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3287);
                list3268 = $tmp3288;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3289 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3289, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3290.value);
                org$pandalanguage$pandac$Type* $tmp3291 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3292 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3280, $tmp3291);
                org$pandalanguage$pandac$IRNode* $tmp3293 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3292);
                list3268 = $tmp3293;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3294 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3294.value) {
        {
            panda$core$Object* $tmp3295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3296 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3280, ((org$pandalanguage$pandac$Type*) $tmp3295));
            org$pandalanguage$pandac$IRNode* $tmp3297 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3296);
            list3268 = $tmp3297;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3298 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3280);
        panda$core$Int64$nullable $tmp3299 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3298);
        if (((panda$core$Bit) { $tmp3299.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3300 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3280);
            org$pandalanguage$pandac$IRNode* $tmp3301 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3300);
            list3268 = $tmp3301;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3302 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3303 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3280, $tmp3302);
            org$pandalanguage$pandac$IRNode* $tmp3304 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3303);
            list3268 = $tmp3304;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3305 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3268 = $tmp3305;
    }
    }
    if (((panda$core$Bit) { list3268 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3268->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3306.value) {
    {
        panda$core$Object* $tmp3307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3268->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3307)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3308.value);
        panda$core$Object* $tmp3309 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3268->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3310 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3309)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3267 = ((org$pandalanguage$pandac$Type*) $tmp3310);
    }
    }
    else {
    {
        panda$core$Bit $tmp3311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3268->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3311.value);
        panda$core$Object* $tmp3312 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3268->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3267 = ((org$pandalanguage$pandac$Type*) $tmp3312);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3314 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3267);
    target3313 = $tmp3314;
    if (((panda$core$Bit) { target3313 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3313->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3316 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3315 = $tmp3316;
    if (((panda$core$Bit) { body3315 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3318 = (panda$collections$Array*) malloc(40);
    $tmp3318->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3318->refCount.value = 1;
    panda$collections$Array$init($tmp3318);
    children3317 = $tmp3318;
    panda$collections$Array$add$panda$collections$Array$T(children3317, ((panda$core$Object*) target3313->target));
    panda$collections$Array$add$panda$collections$Array$T(children3317, ((panda$core$Object*) list3268));
    panda$collections$Array$add$panda$collections$Array$T(children3317, ((panda$core$Object*) body3315));
    org$pandalanguage$pandac$IRNode* $tmp3320 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3320->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3320->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3320, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3317));
    return $tmp3320;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3329;
    org$pandalanguage$pandac$Variable* targetVar3333;
    panda$collections$Array* subtypes3334;
    org$pandalanguage$pandac$Type* iterType3338;
    org$pandalanguage$pandac$Variable* iter3349;
    panda$collections$Array* statements3354;
    panda$collections$Array* declChildren3357;
    panda$collections$Array* varChildren3362;
    panda$collections$Array* whileChildren3369;
    org$pandalanguage$pandac$IRNode* done3372;
    org$pandalanguage$pandac$IRNode* notCall3379;
    panda$collections$Array* valueDeclChildren3384;
    org$pandalanguage$pandac$IRNode* next3389;
    panda$collections$Array* valueVarChildren3396;
    org$pandalanguage$pandac$IRNode* block3401;
    panda$collections$Array* blockChildren3403;
    panda$core$Bit $tmp3323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3322 = $tmp3323.value;
    if (!$tmp3322) goto $l3324;
    panda$core$Object* $tmp3325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3326 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3327 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3325), $tmp3326);
    $tmp3322 = $tmp3327.value;
    $l3324:;
    panda$core$Bit $tmp3328 = { $tmp3322 };
    PANDA_ASSERT($tmp3328.value);
    panda$core$Object* $tmp3330 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3331 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3330));
    target3329 = $tmp3331;
    if (((panda$core$Bit) { target3329 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3329->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3332.value);
    targetVar3333 = ((org$pandalanguage$pandac$Variable*) target3329->target->payload);
    panda$collections$Array* $tmp3335 = (panda$collections$Array*) malloc(40);
    $tmp3335->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3335->refCount.value = 1;
    panda$collections$Array$init($tmp3335);
    subtypes3334 = $tmp3335;
    org$pandalanguage$pandac$Type* $tmp3337 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3334, ((panda$core$Object*) $tmp3337));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3334, ((panda$core$Object*) target3329->target->type));
    org$pandalanguage$pandac$Type* $tmp3339 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3339->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3339->refCount.value = 1;
    panda$core$Object* $tmp3341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3334, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3342 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3341));
    panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3342, &$s3343);
    panda$core$Object* $tmp3345 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3334, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3344, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3345)));
    panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, &$s3347);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3339, $tmp3348, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3334), ((panda$core$Bit) { true }));
    iterType3338 = $tmp3339;
    org$pandalanguage$pandac$Variable* $tmp3350 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3350->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3350->refCount.value = 1;
    panda$core$String* $tmp3353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3333)->name, &$s3352);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3350, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3353, iterType3338);
    iter3349 = $tmp3350;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3349));
    panda$collections$Array* $tmp3355 = (panda$collections$Array*) malloc(40);
    $tmp3355->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3355->refCount.value = 1;
    panda$collections$Array$init($tmp3355);
    statements3354 = $tmp3355;
    panda$collections$Array* $tmp3358 = (panda$collections$Array*) malloc(40);
    $tmp3358->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3358->refCount.value = 1;
    panda$collections$Array$init($tmp3358);
    declChildren3357 = $tmp3358;
    org$pandalanguage$pandac$IRNode* $tmp3360 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3360->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3360->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3360, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3349->type, iter3349);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3357, ((panda$core$Object*) $tmp3360));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3357, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3363 = (panda$collections$Array*) malloc(40);
    $tmp3363->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3363->refCount.value = 1;
    panda$collections$Array$init($tmp3363);
    varChildren3362 = $tmp3363;
    org$pandalanguage$pandac$IRNode* $tmp3365 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3365->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3365->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3365, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3349)->position, ((panda$collections$ListView*) declChildren3357));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3362, ((panda$core$Object*) $tmp3365));
    org$pandalanguage$pandac$IRNode* $tmp3367 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3367->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3367->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3367, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3349)->position, ((panda$collections$ListView*) varChildren3362));
    panda$collections$Array$add$panda$collections$Array$T(statements3354, ((panda$core$Object*) $tmp3367));
    panda$collections$Array* $tmp3370 = (panda$collections$Array*) malloc(40);
    $tmp3370->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3370->refCount.value = 1;
    panda$collections$Array$init($tmp3370);
    whileChildren3369 = $tmp3370;
    org$pandalanguage$pandac$IRNode* $tmp3373 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3373->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3373->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3373, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3349)->position, iter3349->type, iter3349);
    panda$collections$Array* $tmp3376 = (panda$collections$Array*) malloc(40);
    $tmp3376->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3376->refCount.value = 1;
    panda$collections$Array$init($tmp3376);
    org$pandalanguage$pandac$IRNode* $tmp3378 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3373, &$s3375, ((panda$collections$ListView*) $tmp3376), NULL);
    done3372 = $tmp3378;
    if (((panda$core$Bit) { done3372 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3381 = (panda$collections$Array*) malloc(40);
    $tmp3381->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3381->refCount.value = 1;
    panda$collections$Array$init($tmp3381);
    org$pandalanguage$pandac$IRNode* $tmp3383 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3372, &$s3380, ((panda$collections$ListView*) $tmp3381), NULL);
    notCall3379 = $tmp3383;
    if (((panda$core$Bit) { notCall3379 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3369, ((panda$core$Object*) notCall3379));
    panda$collections$Array* $tmp3385 = (panda$collections$Array*) malloc(40);
    $tmp3385->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3385->refCount.value = 1;
    panda$collections$Array$init($tmp3385);
    valueDeclChildren3384 = $tmp3385;
    org$pandalanguage$pandac$IRNode* $tmp3387 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3387->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3387->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3387, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3333->type, targetVar3333);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3384, ((panda$core$Object*) $tmp3387));
    org$pandalanguage$pandac$IRNode* $tmp3390 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3390->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3390->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3390, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3349->type, iter3349);
    panda$collections$Array* $tmp3393 = (panda$collections$Array*) malloc(40);
    $tmp3393->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3393->refCount.value = 1;
    panda$collections$Array$init($tmp3393);
    org$pandalanguage$pandac$IRNode* $tmp3395 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3390, &$s3392, ((panda$collections$ListView*) $tmp3393), NULL);
    next3389 = $tmp3395;
    PANDA_ASSERT(((panda$core$Bit) { next3389 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3384, ((panda$core$Object*) next3389));
    panda$collections$Array* $tmp3397 = (panda$collections$Array*) malloc(40);
    $tmp3397->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3397->refCount.value = 1;
    panda$collections$Array$init($tmp3397);
    valueVarChildren3396 = $tmp3397;
    org$pandalanguage$pandac$IRNode* $tmp3399 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3399->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3399->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3399, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3384));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3396, ((panda$core$Object*) $tmp3399));
    org$pandalanguage$pandac$IRNode* $tmp3402 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3401 = $tmp3402;
    if (((panda$core$Bit) { block3401 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3404 = (panda$collections$Array*) malloc(40);
    $tmp3404->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3404->refCount.value = 1;
    panda$collections$Array$init($tmp3404);
    blockChildren3403 = $tmp3404;
    org$pandalanguage$pandac$IRNode* $tmp3406 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3406->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3406->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3406, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3396));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3403, ((panda$core$Object*) $tmp3406));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3403, ((panda$collections$CollectionView*) block3401->children));
    org$pandalanguage$pandac$IRNode* $tmp3408 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3408->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3408->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3408, ((panda$core$Int64) { 1000 }), block3401->position, ((panda$collections$ListView*) blockChildren3403));
    block3401 = $tmp3408;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3369, ((panda$core$Object*) block3401));
    org$pandalanguage$pandac$IRNode* $tmp3410 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3410->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3410->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3410, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3369));
    panda$collections$Array$add$panda$collections$Array$T(statements3354, ((panda$core$Object*) $tmp3410));
    org$pandalanguage$pandac$IRNode* $tmp3412 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3412->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3412->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3412, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3354));
    return $tmp3412;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3417;
    org$pandalanguage$pandac$SymbolTable* symbols3420;
    org$pandalanguage$pandac$IRNode* result3423;
    panda$core$Bit found3437;
    panda$collections$Iterator* intf$Iter3438;
    org$pandalanguage$pandac$Type* intf3451;
    org$pandalanguage$pandac$IRNode* iterator3463;
    org$pandalanguage$pandac$IRNode* iterable3475;
    org$pandalanguage$pandac$IRNode* iterator3477;
    panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3414.value);
    panda$core$Int64 $tmp3415 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3415, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3416.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3418 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3419 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3418));
    list3417 = $tmp3419;
    if (((panda$core$Bit) { list3417 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3421 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3421->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3421->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3421, self->symbolTable);
    symbols3420 = $tmp3421;
    self->symbolTable = symbols3420;
    panda$core$Bit $tmp3426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3417->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3425 = $tmp3426.value;
    if ($tmp3425) goto $l3427;
    panda$core$Bit $tmp3428 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3417->type);
    $tmp3425 = $tmp3428.value;
    $l3427:;
    panda$core$Bit $tmp3429 = { $tmp3425 };
    bool $tmp3424 = $tmp3429.value;
    if ($tmp3424) goto $l3430;
    panda$core$Bit $tmp3431 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3417->type);
    $tmp3424 = $tmp3431.value;
    $l3430:;
    panda$core$Bit $tmp3432 = { $tmp3424 };
    if ($tmp3432.value) {
    {
        panda$core$Object* $tmp3433 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3434 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3435 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3433), list3417, ((org$pandalanguage$pandac$ASTNode*) $tmp3434));
        result3423 = $tmp3435;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3436 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3417);
        list3417 = $tmp3436;
        if (((panda$core$Bit) { list3417 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3437 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3439 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3417->type);
            ITable* $tmp3440 = ((panda$collections$Iterable*) $tmp3439)->$class->itable;
            while ($tmp3440->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3440 = $tmp3440->next;
            }
            $fn3442 $tmp3441 = $tmp3440->methods[0];
            panda$collections$Iterator* $tmp3443 = $tmp3441(((panda$collections$Iterable*) $tmp3439));
            intf$Iter3438 = $tmp3443;
            $l3444:;
            ITable* $tmp3446 = intf$Iter3438->$class->itable;
            while ($tmp3446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3446 = $tmp3446->next;
            }
            $fn3448 $tmp3447 = $tmp3446->methods[0];
            panda$core$Bit $tmp3449 = $tmp3447(intf$Iter3438);
            panda$core$Bit $tmp3450 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3449);
            if (!$tmp3450.value) goto $l3445;
            {
                ITable* $tmp3452 = intf$Iter3438->$class->itable;
                while ($tmp3452->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3452 = $tmp3452->next;
                }
                $fn3454 $tmp3453 = $tmp3452->methods[1];
                panda$core$Object* $tmp3455 = $tmp3453(intf$Iter3438);
                intf3451 = ((org$pandalanguage$pandac$Type*) $tmp3455);
                panda$core$Bit $tmp3457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3451->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3456 = $tmp3457.value;
                if (!$tmp3456) goto $l3458;
                panda$core$Object* $tmp3459 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3451->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3460 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3461 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3459), $tmp3460);
                $tmp3456 = $tmp3461.value;
                $l3458:;
                panda$core$Bit $tmp3462 = { $tmp3456 };
                if ($tmp3462.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3464 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3417, intf3451);
                    iterator3463 = $tmp3464;
                    panda$core$Object* $tmp3465 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3466 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3467 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3465), iterator3463, ((org$pandalanguage$pandac$ASTNode*) $tmp3466));
                    result3423 = $tmp3467;
                    found3437 = ((panda$core$Bit) { true });
                    goto $l3445;
                }
                }
                panda$core$Bit $tmp3469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3451->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3468 = $tmp3469.value;
                if (!$tmp3468) goto $l3470;
                panda$core$Object* $tmp3471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3451->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3472 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3473 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3471), $tmp3472);
                $tmp3468 = $tmp3473.value;
                $l3470:;
                panda$core$Bit $tmp3474 = { $tmp3468 };
                if ($tmp3474.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3476 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3417, intf3451);
                    iterable3475 = $tmp3476;
                    panda$collections$Array* $tmp3479 = (panda$collections$Array*) malloc(40);
                    $tmp3479->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3479->refCount.value = 1;
                    panda$collections$Array$init($tmp3479);
                    org$pandalanguage$pandac$IRNode* $tmp3481 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3475, &$s3478, ((panda$collections$ListView*) $tmp3479));
                    iterator3477 = $tmp3481;
                    panda$core$Object* $tmp3482 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3483 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3484 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3482), iterator3477, ((org$pandalanguage$pandac$ASTNode*) $tmp3483));
                    result3423 = $tmp3484;
                    found3437 = ((panda$core$Bit) { true });
                    goto $l3445;
                }
                }
            }
            goto $l3444;
            $l3445:;
        }
        panda$core$Bit $tmp3485 = panda$core$Bit$$NOT$R$panda$core$Bit(found3437);
        if ($tmp3485.value) {
        {
            panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3486, ((panda$core$Object*) list3417->type));
            panda$core$String* $tmp3489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3487, &$s3488);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3417->position, $tmp3489);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3490 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3420->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3490);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3423;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3494;
    org$pandalanguage$pandac$IRNode* stmt3499;
    panda$collections$Array* children3502;
    panda$core$Bit $tmp3491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3491.value);
    panda$core$Int64 $tmp3492 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3492, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3493.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3495 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3496 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3495));
    org$pandalanguage$pandac$Type* $tmp3497 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3498 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3496, $tmp3497);
    test3494 = $tmp3498;
    if (((panda$core$Bit) { test3494 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3500 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3501 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3500));
    stmt3499 = $tmp3501;
    if (((panda$core$Bit) { stmt3499 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3503 = (panda$collections$Array*) malloc(40);
    $tmp3503->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3503->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3503, ((panda$core$Int64) { 2 }));
    children3502 = $tmp3503;
    panda$collections$Array$add$panda$collections$Array$T(children3502, ((panda$core$Object*) test3494));
    panda$collections$Array$add$panda$collections$Array$T(children3502, ((panda$core$Object*) stmt3499));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3505 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3505->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3505->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3505, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3502));
    return $tmp3505;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3510;
    org$pandalanguage$pandac$IRNode* test3513;
    panda$collections$Array* children3518;
    panda$core$Bit $tmp3507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3507.value);
    panda$core$Int64 $tmp3508 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3508, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3509.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3511 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3512 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3511));
    stmt3510 = $tmp3512;
    if (((panda$core$Bit) { stmt3510 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3514 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3515 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3514));
    org$pandalanguage$pandac$Type* $tmp3516 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3517 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3515, $tmp3516);
    test3513 = $tmp3517;
    if (((panda$core$Bit) { test3513 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3519 = (panda$collections$Array*) malloc(40);
    $tmp3519->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3519->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3519, ((panda$core$Int64) { 2 }));
    children3518 = $tmp3519;
    panda$collections$Array$add$panda$collections$Array$T(children3518, ((panda$core$Object*) stmt3510));
    panda$collections$Array$add$panda$collections$Array$T(children3518, ((panda$core$Object*) test3513));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3521 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3521->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3521->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3521, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3518));
    return $tmp3521;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3526;
    panda$collections$Array* children3529;
    panda$core$Bit $tmp3523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3523.value);
    panda$core$Int64 $tmp3524 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3524, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3525.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3527 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3528 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3527));
    stmt3526 = $tmp3528;
    if (((panda$core$Bit) { stmt3526 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3530 = (panda$collections$Array*) malloc(40);
    $tmp3530->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3530->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3530, ((panda$core$Int64) { 1 }));
    children3529 = $tmp3530;
    panda$collections$Array$add$panda$collections$Array$T(children3529, ((panda$core$Object*) stmt3526));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3532 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3532->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3532->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3532, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3529));
    return $tmp3532;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3534;
    org$pandalanguage$pandac$Type* type3538;
    org$pandalanguage$pandac$Variable* v3554;
    value3534 = p_rawValue;
    bool $tmp3535 = ((panda$core$Bit) { value3534 == NULL }).value;
    if ($tmp3535) goto $l3536;
    $tmp3535 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3536:;
    panda$core$Bit $tmp3537 = { $tmp3535 };
    PANDA_ASSERT($tmp3537.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp3539 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp3539) goto $l3540;
            panda$core$Int64 $tmp3541 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3542 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3541, ((panda$core$Int64) { 0 }));
            $tmp3539 = $tmp3542.value;
            $l3540:;
            panda$core$Bit $tmp3543 = { $tmp3539 };
            if ($tmp3543.value) {
            {
                panda$core$Int64 $tmp3544 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp3545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3544, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp3545.value);
                panda$core$Object* $tmp3546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3547 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3546));
                org$pandalanguage$pandac$Type* $tmp3548 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3547);
                type3538 = $tmp3548;
            }
            }
            else {
            if (((panda$core$Bit) { value3534 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3549 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3534);
                value3534 = $tmp3549;
                if (((panda$core$Bit) { value3534 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3550 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3534);
                type3538 = $tmp3550;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3538 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3551);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3534 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3552 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3534, type3538);
                value3534 = $tmp3552;
                if (((panda$core$Bit) { value3534 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3553 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3534->type, type3538);
                PANDA_ASSERT($tmp3553.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3555 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3555->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3555->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3555, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3538);
            v3554 = $tmp3555;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3554));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3557 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3557->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3557->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3559 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3559->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3559->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3559, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3554)->position, v3554->type, v3554);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3557, $tmp3559, value3534);
            return $tmp3557;
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
    org$pandalanguage$pandac$IRNode* value3569;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3574;
    panda$collections$Array* children3577;
    org$pandalanguage$pandac$Variable* v3581;
    panda$core$Bit $tmp3561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3561.value);
    panda$core$Int64 $tmp3563 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3563, ((panda$core$Int64) { 1 }));
    bool $tmp3562 = $tmp3564.value;
    if ($tmp3562) goto $l3565;
    panda$core$Int64 $tmp3566 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3566, ((panda$core$Int64) { 2 }));
    $tmp3562 = $tmp3567.value;
    $l3565:;
    panda$core$Bit $tmp3568 = { $tmp3562 };
    PANDA_ASSERT($tmp3568.value);
    panda$core$Int64 $tmp3570 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3570, ((panda$core$Int64) { 2 }));
    if ($tmp3571.value) {
    {
        panda$core$Object* $tmp3572 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3573 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3572));
        value3569 = $tmp3573;
        if (((panda$core$Bit) { value3569 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3569 = NULL;
    }
    }
    panda$core$Object* $tmp3575 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3576 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3575), p_varKind, value3569, NULL);
    target3574 = $tmp3576;
    if (((panda$core$Bit) { target3574 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3578 = (panda$collections$Array*) malloc(40);
    $tmp3578->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3578->refCount.value = 1;
    panda$collections$Array$init($tmp3578);
    children3577 = $tmp3578;
    panda$collections$Array$add$panda$collections$Array$T(children3577, ((panda$core$Object*) target3574->target));
    if (((panda$core$Bit) { target3574->value != NULL }).value) {
    {
        panda$core$Bit $tmp3580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3574->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3580.value);
        v3581 = ((org$pandalanguage$pandac$Variable*) target3574->target->payload);
        v3581->initialValue = target3574->value;
        panda$collections$Array$add$panda$collections$Array$T(children3577, ((panda$core$Object*) target3574->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3582 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3582->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3582->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3582, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3577));
    return $tmp3582;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3585;
    panda$collections$Iterator* label$Iter3586;
    panda$core$String* label3598;
    panda$core$Bit $tmp3584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3584.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3585 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3587 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3587->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3587 = $tmp3587->next;
            }
            $fn3589 $tmp3588 = $tmp3587->methods[0];
            panda$collections$Iterator* $tmp3590 = $tmp3588(((panda$collections$Iterable*) self->loops));
            label$Iter3586 = $tmp3590;
            $l3591:;
            ITable* $tmp3593 = label$Iter3586->$class->itable;
            while ($tmp3593->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3593 = $tmp3593->next;
            }
            $fn3595 $tmp3594 = $tmp3593->methods[0];
            panda$core$Bit $tmp3596 = $tmp3594(label$Iter3586);
            panda$core$Bit $tmp3597 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3596);
            if (!$tmp3597.value) goto $l3592;
            {
                ITable* $tmp3599 = label$Iter3586->$class->itable;
                while ($tmp3599->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3599 = $tmp3599->next;
                }
                $fn3601 $tmp3600 = $tmp3599->methods[1];
                panda$core$Object* $tmp3602 = $tmp3600(label$Iter3586);
                label3598 = ((panda$core$String*) $tmp3602);
                bool $tmp3603 = ((panda$core$Bit) { label3598 != NULL }).value;
                if (!$tmp3603) goto $l3604;
                panda$core$Bit $tmp3605 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3598, ((panda$core$String*) p_b->payload));
                $tmp3603 = $tmp3605.value;
                $l3604:;
                panda$core$Bit $tmp3606 = { $tmp3603 };
                if ($tmp3606.value) {
                {
                    found3585 = ((panda$core$Bit) { true });
                    goto $l3592;
                }
                }
            }
            goto $l3591;
            $l3592:;
        }
        panda$core$Bit $tmp3607 = panda$core$Bit$$NOT$R$panda$core$Bit(found3585);
        if ($tmp3607.value) {
        {
            panda$core$String* $tmp3609 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3608, p_b->payload);
            panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3609, &$s3610);
            panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3612, p_b->payload);
            panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, &$s3614);
            panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, $tmp3615);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3616);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3617 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3617, ((panda$core$Int64) { 0 }));
    if ($tmp3618.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3619);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3620 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3620->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3620->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3620, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3620;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3623;
    panda$collections$Iterator* label$Iter3624;
    panda$core$String* label3636;
    panda$core$Bit $tmp3622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3622.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3623 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3625 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3625->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3625 = $tmp3625->next;
            }
            $fn3627 $tmp3626 = $tmp3625->methods[0];
            panda$collections$Iterator* $tmp3628 = $tmp3626(((panda$collections$Iterable*) self->loops));
            label$Iter3624 = $tmp3628;
            $l3629:;
            ITable* $tmp3631 = label$Iter3624->$class->itable;
            while ($tmp3631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3631 = $tmp3631->next;
            }
            $fn3633 $tmp3632 = $tmp3631->methods[0];
            panda$core$Bit $tmp3634 = $tmp3632(label$Iter3624);
            panda$core$Bit $tmp3635 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3634);
            if (!$tmp3635.value) goto $l3630;
            {
                ITable* $tmp3637 = label$Iter3624->$class->itable;
                while ($tmp3637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3637 = $tmp3637->next;
                }
                $fn3639 $tmp3638 = $tmp3637->methods[1];
                panda$core$Object* $tmp3640 = $tmp3638(label$Iter3624);
                label3636 = ((panda$core$String*) $tmp3640);
                bool $tmp3641 = ((panda$core$Bit) { label3636 != NULL }).value;
                if (!$tmp3641) goto $l3642;
                panda$core$Bit $tmp3643 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3636, ((panda$core$String*) p_c->payload));
                $tmp3641 = $tmp3643.value;
                $l3642:;
                panda$core$Bit $tmp3644 = { $tmp3641 };
                if ($tmp3644.value) {
                {
                    found3623 = ((panda$core$Bit) { true });
                    goto $l3630;
                }
                }
            }
            goto $l3629;
            $l3630:;
        }
        panda$core$Bit $tmp3645 = panda$core$Bit$$NOT$R$panda$core$Bit(found3623);
        if ($tmp3645.value) {
        {
            panda$core$String* $tmp3647 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3646, p_c->payload);
            panda$core$String* $tmp3649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3647, &$s3648);
            panda$core$String* $tmp3651 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3650, p_c->payload);
            panda$core$String* $tmp3653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3651, &$s3652);
            panda$core$String* $tmp3654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3649, $tmp3653);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3654);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3655 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3655, ((panda$core$Int64) { 0 }));
    if ($tmp3656.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3657);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3658 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3658->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3658->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3658, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3658;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3672;
    panda$collections$Array* children3677;
    panda$core$Bit $tmp3660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3660.value);
    bool $tmp3661 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3661) goto $l3662;
    panda$core$Int64 $tmp3663 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3664 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3663, ((panda$core$Int64) { 0 }));
    $tmp3661 = $tmp3664.value;
    $l3662:;
    panda$core$Bit $tmp3665 = { $tmp3661 };
    if ($tmp3665.value) {
    {
        panda$core$Int64 $tmp3666 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3666, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3667.value);
        panda$core$Object* $tmp3668 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3669 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3670 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3668)->returnType, $tmp3669);
        if ($tmp3670.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3671);
            return NULL;
        }
        }
        panda$core$Object* $tmp3673 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3674 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3673));
        panda$core$Object* $tmp3675 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3676 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3674, ((org$pandalanguage$pandac$MethodDecl*) $tmp3675)->returnType);
        value3672 = $tmp3676;
        if (((panda$core$Bit) { value3672 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3678 = (panda$collections$Array*) malloc(40);
        $tmp3678->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3678->refCount.value = 1;
        panda$collections$Array$init($tmp3678);
        children3677 = $tmp3678;
        panda$collections$Array$add$panda$collections$Array$T(children3677, ((panda$core$Object*) value3672));
        org$pandalanguage$pandac$IRNode* $tmp3680 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3680->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3680->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3680, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3677));
        return $tmp3680;
    }
    }
    panda$core$Object* $tmp3682 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3683 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3684 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3682)->returnType, $tmp3683);
    if ($tmp3684.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3685);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3686 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3686->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3686->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3686, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3686;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3696;
    org$pandalanguage$pandac$ClassDecl* bit3701;
    org$pandalanguage$pandac$Symbol* value3704;
    panda$collections$Array* fieldChildren3707;
    panda$collections$Array* children3713;
    org$pandalanguage$pandac$IRNode* msg3718;
    panda$core$Bit $tmp3688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3688.value);
    panda$core$Int64 $tmp3690 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3690, ((panda$core$Int64) { 1 }));
    bool $tmp3689 = $tmp3691.value;
    if ($tmp3689) goto $l3692;
    panda$core$Int64 $tmp3693 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3693, ((panda$core$Int64) { 2 }));
    $tmp3689 = $tmp3694.value;
    $l3692:;
    panda$core$Bit $tmp3695 = { $tmp3689 };
    PANDA_ASSERT($tmp3695.value);
    panda$core$Object* $tmp3697 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3698 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3697));
    test3696 = $tmp3698;
    if (((panda$core$Bit) { test3696 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3699 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3700 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3696, $tmp3699);
    test3696 = $tmp3700;
    if (((panda$core$Bit) { test3696 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3702 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3703 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3702);
    bit3701 = $tmp3703;
    PANDA_ASSERT(((panda$core$Bit) { bit3701 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3706 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3701->symbolTable, &$s3705);
    value3704 = $tmp3706;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3704));
    panda$collections$Array* $tmp3708 = (panda$collections$Array*) malloc(40);
    $tmp3708->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3708->refCount.value = 1;
    panda$collections$Array$init($tmp3708);
    fieldChildren3707 = $tmp3708;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3707, ((panda$core$Object*) test3696));
    org$pandalanguage$pandac$IRNode* $tmp3710 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3710->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3710->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3712 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3710, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3712, ((panda$core$Object*) value3704), ((panda$collections$ListView*) fieldChildren3707));
    test3696 = $tmp3710;
    panda$collections$Array* $tmp3714 = (panda$collections$Array*) malloc(40);
    $tmp3714->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3714->refCount.value = 1;
    panda$collections$Array$init($tmp3714);
    children3713 = $tmp3714;
    panda$collections$Array$add$panda$collections$Array$T(children3713, ((panda$core$Object*) test3696));
    panda$core$Int64 $tmp3716 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3716, ((panda$core$Int64) { 2 }));
    if ($tmp3717.value) {
    {
        panda$core$Object* $tmp3719 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3720 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3719));
        msg3718 = $tmp3720;
        if (((panda$core$Bit) { msg3718 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3721 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3722 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3718, $tmp3721);
        msg3718 = $tmp3722;
        if (((panda$core$Bit) { msg3718 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3713, ((panda$core$Object*) msg3718));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3723 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3723->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3723->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3723, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3713));
    return $tmp3723;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3738;
    panda$core$Int64 varKind3739;
    panda$collections$Array* decls3740;
    panda$collections$Iterator* astDecl$Iter3743;
    org$pandalanguage$pandac$ASTNode* astDecl3755;
    org$pandalanguage$pandac$IRNode* decl3760;
    panda$core$Bit $tmp3728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3727 = $tmp3728.value;
    if ($tmp3727) goto $l3729;
    panda$core$Bit $tmp3730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3727 = $tmp3730.value;
    $l3729:;
    panda$core$Bit $tmp3731 = { $tmp3727 };
    bool $tmp3726 = $tmp3731.value;
    if ($tmp3726) goto $l3732;
    panda$core$Bit $tmp3733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3726 = $tmp3733.value;
    $l3732:;
    panda$core$Bit $tmp3734 = { $tmp3726 };
    bool $tmp3725 = $tmp3734.value;
    if ($tmp3725) goto $l3735;
    panda$core$Bit $tmp3736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3725 = $tmp3736.value;
    $l3735:;
    panda$core$Bit $tmp3737 = { $tmp3725 };
    PANDA_ASSERT($tmp3737.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3738 = ((panda$core$Int64) { 1017 });
            varKind3739 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3738 = ((panda$core$Int64) { 1018 });
            varKind3739 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3738 = ((panda$core$Int64) { 1019 });
            varKind3739 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3738 = ((panda$core$Int64) { 1020 });
            varKind3739 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3741 = (panda$collections$Array*) malloc(40);
    $tmp3741->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3741->refCount.value = 1;
    panda$collections$Array$init($tmp3741);
    decls3740 = $tmp3741;
    {
        ITable* $tmp3744 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3744->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3744 = $tmp3744->next;
        }
        $fn3746 $tmp3745 = $tmp3744->methods[0];
        panda$collections$Iterator* $tmp3747 = $tmp3745(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3743 = $tmp3747;
        $l3748:;
        ITable* $tmp3750 = astDecl$Iter3743->$class->itable;
        while ($tmp3750->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3750 = $tmp3750->next;
        }
        $fn3752 $tmp3751 = $tmp3750->methods[0];
        panda$core$Bit $tmp3753 = $tmp3751(astDecl$Iter3743);
        panda$core$Bit $tmp3754 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3753);
        if (!$tmp3754.value) goto $l3749;
        {
            ITable* $tmp3756 = astDecl$Iter3743->$class->itable;
            while ($tmp3756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3756 = $tmp3756->next;
            }
            $fn3758 $tmp3757 = $tmp3756->methods[1];
            panda$core$Object* $tmp3759 = $tmp3757(astDecl$Iter3743);
            astDecl3755 = ((org$pandalanguage$pandac$ASTNode*) $tmp3759);
            org$pandalanguage$pandac$IRNode* $tmp3761 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3755, varKind3739);
            decl3760 = $tmp3761;
            if (((panda$core$Bit) { decl3760 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3740, ((panda$core$Object*) decl3760));
        }
        goto $l3748;
        $l3749:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3762 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3762->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3762->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3762, nodeKind3738, p_v->position, ((panda$collections$ListView*) decls3740));
    return $tmp3762;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3764;
    panda$collections$Array* callChildren3767;
    org$pandalanguage$pandac$IRNode* testValue3770;
    org$pandalanguage$pandac$IRNode* $tmp3765 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3765->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3765->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3765, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3764 = $tmp3765;
    panda$collections$Array* $tmp3768 = (panda$collections$Array*) malloc(40);
    $tmp3768->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3768->refCount.value = 1;
    panda$collections$Array$init($tmp3768);
    callChildren3767 = $tmp3768;
    org$pandalanguage$pandac$IRNode* $tmp3771 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3770 = $tmp3771;
    if (((panda$core$Bit) { testValue3770 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3767, ((panda$core$Object*) testValue3770));
    org$pandalanguage$pandac$IRNode* $tmp3773 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3764, &$s3772, ((panda$collections$ListView*) callChildren3767));
    return $tmp3773;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3782;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3786;
    org$pandalanguage$pandac$IRNode* nextTest3802;
    panda$collections$Array* callChildren3806;
    panda$collections$Array* statements3819;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3822;
    org$pandalanguage$pandac$IRNode* statement3837;
    panda$collections$Array* children3847;
    panda$core$Bit $tmp3774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3774.value);
    panda$core$Int64 $tmp3775 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3776 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3775, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3776.value);
    panda$core$Object* $tmp3777 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3777)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3778.value);
    panda$core$Object* $tmp3779 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3780 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3779)->children);
    panda$core$Bit $tmp3781 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3780, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3781.value);
    panda$core$Object* $tmp3783 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3784 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3783)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3785 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3784));
    test3782 = $tmp3785;
    if (((panda$core$Bit) { test3782 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3787 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3788 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3787)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3786, ((panda$core$Int64) { 1 }), $tmp3788, ((panda$core$Bit) { false }));
    int64_t $tmp3790 = $tmp3786.min.value;
    panda$core$Int64 i3789 = { $tmp3790 };
    int64_t $tmp3792 = $tmp3786.max.value;
    bool $tmp3793 = $tmp3786.inclusive.value;
    if ($tmp3793) goto $l3800; else goto $l3801;
    $l3800:;
    if ($tmp3790 <= $tmp3792) goto $l3794; else goto $l3796;
    $l3801:;
    if ($tmp3790 < $tmp3792) goto $l3794; else goto $l3796;
    $l3794:;
    {
        panda$core$Object* $tmp3803 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3804 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3803)->children, i3789);
        org$pandalanguage$pandac$IRNode* $tmp3805 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3804));
        nextTest3802 = $tmp3805;
        if (((panda$core$Bit) { nextTest3802 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3807 = (panda$collections$Array*) malloc(40);
        $tmp3807->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3807->refCount.value = 1;
        panda$collections$Array$init($tmp3807);
        callChildren3806 = $tmp3807;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3806, ((panda$core$Object*) nextTest3802));
        org$pandalanguage$pandac$IRNode* $tmp3810 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3782, &$s3809, ((panda$collections$ListView*) callChildren3806));
        test3782 = $tmp3810;
        if (((panda$core$Bit) { test3782 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3797:;
    int64_t $tmp3812 = $tmp3792 - i3789.value;
    if ($tmp3793) goto $l3813; else goto $l3814;
    $l3813:;
    if ($tmp3812 >= 1) goto $l3811; else goto $l3796;
    $l3814:;
    if ($tmp3812 > 1) goto $l3811; else goto $l3796;
    $l3811:;
    i3789.value += 1;
    goto $l3794;
    $l3796:;
    org$pandalanguage$pandac$SymbolTable* $tmp3817 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3817->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3817->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3817, self->symbolTable);
    self->symbolTable = $tmp3817;
    panda$collections$Array* $tmp3820 = (panda$collections$Array*) malloc(40);
    $tmp3820->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3820->refCount.value = 1;
    panda$collections$Array$init($tmp3820);
    statements3819 = $tmp3820;
    panda$core$Int64 $tmp3823 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3822, ((panda$core$Int64) { 1 }), $tmp3823, ((panda$core$Bit) { false }));
    int64_t $tmp3825 = $tmp3822.min.value;
    panda$core$Int64 i3824 = { $tmp3825 };
    int64_t $tmp3827 = $tmp3822.max.value;
    bool $tmp3828 = $tmp3822.inclusive.value;
    if ($tmp3828) goto $l3835; else goto $l3836;
    $l3835:;
    if ($tmp3825 <= $tmp3827) goto $l3829; else goto $l3831;
    $l3836:;
    if ($tmp3825 < $tmp3827) goto $l3829; else goto $l3831;
    $l3829:;
    {
        panda$core$Object* $tmp3838 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3824);
        org$pandalanguage$pandac$IRNode* $tmp3839 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3838));
        statement3837 = $tmp3839;
        if (((panda$core$Bit) { statement3837 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3819, ((panda$core$Object*) statement3837));
    }
    $l3832:;
    int64_t $tmp3841 = $tmp3827 - i3824.value;
    if ($tmp3828) goto $l3842; else goto $l3843;
    $l3842:;
    if ($tmp3841 >= 1) goto $l3840; else goto $l3831;
    $l3843:;
    if ($tmp3841 > 1) goto $l3840; else goto $l3831;
    $l3840:;
    i3824.value += 1;
    goto $l3829;
    $l3831:;
    panda$core$Object* $tmp3846 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3846);
    panda$collections$Array* $tmp3848 = (panda$collections$Array*) malloc(40);
    $tmp3848->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3848->refCount.value = 1;
    panda$collections$Array$init($tmp3848);
    children3847 = $tmp3848;
    panda$collections$Array$add$panda$collections$Array$T(children3847, ((panda$core$Object*) test3782));
    org$pandalanguage$pandac$IRNode* $tmp3850 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3850->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3850->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3850, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3819));
    panda$collections$Array$add$panda$collections$Array$T(children3847, ((panda$core$Object*) $tmp3850));
    org$pandalanguage$pandac$IRNode* $tmp3852 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3852->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3852->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3852, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3847));
    return $tmp3852;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3854;
    org$pandalanguage$pandac$Variable* valueVar3857;
    panda$collections$Array* declChildren3867;
    panda$collections$Array* varChildren3872;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3879;
    org$pandalanguage$pandac$ASTNode* c3894;
    org$pandalanguage$pandac$IRNode* w3896;
    panda$collections$Array* statements3898;
    panda$collections$Iterator* astStatement$Iter3901;
    org$pandalanguage$pandac$ASTNode* astStatement3913;
    org$pandalanguage$pandac$IRNode* stmt3918;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp3928;
    panda$collections$Array* $tmp3855 = (panda$collections$Array*) malloc(40);
    $tmp3855->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3855->refCount.value = 1;
    panda$collections$Array$init($tmp3855);
    children3854 = $tmp3855;
    org$pandalanguage$pandac$Variable* $tmp3858 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3858->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3858->refCount.value = 1;
    panda$core$String* $tmp3861 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3860, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3861, &$s3862);
    panda$core$String* $tmp3864 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3863, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3864, &$s3865);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3858, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3866, p_value->type);
    valueVar3857 = $tmp3858;
    panda$collections$Array* $tmp3868 = (panda$collections$Array*) malloc(40);
    $tmp3868->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3868->refCount.value = 1;
    panda$collections$Array$init($tmp3868);
    declChildren3867 = $tmp3868;
    org$pandalanguage$pandac$IRNode* $tmp3870 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3870->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3870->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3870, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3857->type, valueVar3857);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3867, ((panda$core$Object*) $tmp3870));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3867, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3873 = (panda$collections$Array*) malloc(40);
    $tmp3873->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3873->refCount.value = 1;
    panda$collections$Array$init($tmp3873);
    varChildren3872 = $tmp3873;
    org$pandalanguage$pandac$IRNode* $tmp3875 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3875->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3875->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3875, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3857)->position, ((panda$collections$ListView*) declChildren3867));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3872, ((panda$core$Object*) $tmp3875));
    org$pandalanguage$pandac$IRNode* $tmp3877 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3877->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3877->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3877, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3857)->position, ((panda$collections$ListView*) varChildren3872));
    panda$collections$Array$add$panda$collections$Array$T(children3854, ((panda$core$Object*) $tmp3877));
    panda$core$Int64 $tmp3880 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3879, ((panda$core$Int64) { 1 }), $tmp3880, ((panda$core$Bit) { false }));
    int64_t $tmp3882 = $tmp3879.min.value;
    panda$core$Int64 i3881 = { $tmp3882 };
    int64_t $tmp3884 = $tmp3879.max.value;
    bool $tmp3885 = $tmp3879.inclusive.value;
    if ($tmp3885) goto $l3892; else goto $l3893;
    $l3892:;
    if ($tmp3882 <= $tmp3884) goto $l3886; else goto $l3888;
    $l3893:;
    if ($tmp3882 < $tmp3884) goto $l3886; else goto $l3888;
    $l3886:;
    {
        panda$core$Object* $tmp3895 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3881);
        c3894 = ((org$pandalanguage$pandac$ASTNode*) $tmp3895);
        switch (c3894->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3897 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3857, c3894);
                w3896 = $tmp3897;
                if (((panda$core$Bit) { w3896 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3854, ((panda$core$Object*) w3896));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3899 = (panda$collections$Array*) malloc(40);
                $tmp3899->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3899->refCount.value = 1;
                panda$collections$Array$init($tmp3899);
                statements3898 = $tmp3899;
                {
                    ITable* $tmp3902 = ((panda$collections$Iterable*) c3894->children)->$class->itable;
                    while ($tmp3902->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3902 = $tmp3902->next;
                    }
                    $fn3904 $tmp3903 = $tmp3902->methods[0];
                    panda$collections$Iterator* $tmp3905 = $tmp3903(((panda$collections$Iterable*) c3894->children));
                    astStatement$Iter3901 = $tmp3905;
                    $l3906:;
                    ITable* $tmp3908 = astStatement$Iter3901->$class->itable;
                    while ($tmp3908->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3908 = $tmp3908->next;
                    }
                    $fn3910 $tmp3909 = $tmp3908->methods[0];
                    panda$core$Bit $tmp3911 = $tmp3909(astStatement$Iter3901);
                    panda$core$Bit $tmp3912 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3911);
                    if (!$tmp3912.value) goto $l3907;
                    {
                        ITable* $tmp3914 = astStatement$Iter3901->$class->itable;
                        while ($tmp3914->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3914 = $tmp3914->next;
                        }
                        $fn3916 $tmp3915 = $tmp3914->methods[1];
                        panda$core$Object* $tmp3917 = $tmp3915(astStatement$Iter3901);
                        astStatement3913 = ((org$pandalanguage$pandac$ASTNode*) $tmp3917);
                        org$pandalanguage$pandac$IRNode* $tmp3919 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3913);
                        stmt3918 = $tmp3919;
                        if (((panda$core$Bit) { stmt3918 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3898, ((panda$core$Object*) stmt3918));
                    }
                    goto $l3906;
                    $l3907:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3920 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3920->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3920->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3920, ((panda$core$Int64) { 1000 }), c3894->position, ((panda$collections$ListView*) statements3898));
                panda$collections$Array$add$panda$collections$Array$T(children3854, ((panda$core$Object*) $tmp3920));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3889:;
    int64_t $tmp3923 = $tmp3884 - i3881.value;
    if ($tmp3885) goto $l3924; else goto $l3925;
    $l3924:;
    if ($tmp3923 >= 1) goto $l3922; else goto $l3888;
    $l3925:;
    if ($tmp3923 > 1) goto $l3922; else goto $l3888;
    $l3922:;
    i3881.value += 1;
    goto $l3886;
    $l3888:;
    panda$core$Int64 $tmp3929 = panda$collections$Array$get_count$R$panda$core$Int64(children3854);
    panda$core$Int64 $tmp3930 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3929, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3928, $tmp3930, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp3932 = $tmp3928.start.value;
    panda$core$Int64 i3931 = { $tmp3932 };
    int64_t $tmp3934 = $tmp3928.end.value;
    int64_t $tmp3935 = $tmp3928.step.value;
    bool $tmp3936 = $tmp3928.inclusive.value;
    bool $tmp3943 = $tmp3935 > 0;
    if ($tmp3943) goto $l3941; else goto $l3942;
    $l3941:;
    if ($tmp3936) goto $l3944; else goto $l3945;
    $l3944:;
    if ($tmp3932 <= $tmp3934) goto $l3937; else goto $l3939;
    $l3945:;
    if ($tmp3932 < $tmp3934) goto $l3937; else goto $l3939;
    $l3942:;
    if ($tmp3936) goto $l3946; else goto $l3947;
    $l3946:;
    if ($tmp3932 >= $tmp3934) goto $l3937; else goto $l3939;
    $l3947:;
    if ($tmp3932 > $tmp3934) goto $l3937; else goto $l3939;
    $l3937:;
    {
        panda$core$Int64 $tmp3949 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3931, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3950 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3854, $tmp3949);
        panda$core$Bit $tmp3951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3950)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3951.value);
        panda$core$Int64 $tmp3952 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3931, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3953 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3854, $tmp3952);
        panda$core$Int64 $tmp3954 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3953)->children);
        panda$core$Bit $tmp3955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3954, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3955.value);
        panda$core$Int64 $tmp3956 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3931, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3957 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3854, $tmp3956);
        panda$core$Object* $tmp3958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3854, i3931);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3957)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3958)));
        panda$core$Int64 $tmp3959 = panda$collections$Array$get_count$R$panda$core$Int64(children3854);
        panda$core$Int64 $tmp3960 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3959, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3854, $tmp3960);
    }
    $l3940:;
    if ($tmp3943) goto $l3962; else goto $l3963;
    $l3962:;
    int64_t $tmp3964 = $tmp3934 - i3931.value;
    if ($tmp3936) goto $l3965; else goto $l3966;
    $l3965:;
    if ($tmp3964 >= $tmp3935) goto $l3961; else goto $l3939;
    $l3966:;
    if ($tmp3964 > $tmp3935) goto $l3961; else goto $l3939;
    $l3963:;
    int64_t $tmp3968 = i3931.value - $tmp3934;
    if ($tmp3936) goto $l3969; else goto $l3970;
    $l3969:;
    if ($tmp3968 >= -$tmp3935) goto $l3961; else goto $l3939;
    $l3970:;
    if ($tmp3968 > -$tmp3935) goto $l3961; else goto $l3939;
    $l3961:;
    i3931.value += $tmp3935;
    goto $l3937;
    $l3939:;
    org$pandalanguage$pandac$IRNode* $tmp3972 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3972->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3972->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3972, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3854));
    return $tmp3972;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3982;
    panda$collections$Iterator* expr$Iter3985;
    org$pandalanguage$pandac$ASTNode* expr3998;
    org$pandalanguage$pandac$IRNode* compiled4003;
    panda$collections$Array* statements4008;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4011;
    org$pandalanguage$pandac$IRNode* statement4026;
    panda$core$Bit $tmp3974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3974.value);
    panda$core$Int64 $tmp3975 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3976 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3975, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3976.value);
    panda$core$Object* $tmp3977 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3977)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3978.value);
    panda$core$Object* $tmp3979 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3980 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3979)->children);
    panda$core$Bit $tmp3981 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3980, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3981.value);
    panda$collections$Array* $tmp3983 = (panda$collections$Array*) malloc(40);
    $tmp3983->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3983->refCount.value = 1;
    panda$collections$Array$init($tmp3983);
    children3982 = $tmp3983;
    {
        panda$core$Object* $tmp3986 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3987 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3986)->children)->$class->itable;
        while ($tmp3987->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3987 = $tmp3987->next;
        }
        $fn3989 $tmp3988 = $tmp3987->methods[0];
        panda$collections$Iterator* $tmp3990 = $tmp3988(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3986)->children));
        expr$Iter3985 = $tmp3990;
        $l3991:;
        ITable* $tmp3993 = expr$Iter3985->$class->itable;
        while ($tmp3993->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3993 = $tmp3993->next;
        }
        $fn3995 $tmp3994 = $tmp3993->methods[0];
        panda$core$Bit $tmp3996 = $tmp3994(expr$Iter3985);
        panda$core$Bit $tmp3997 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3996);
        if (!$tmp3997.value) goto $l3992;
        {
            ITable* $tmp3999 = expr$Iter3985->$class->itable;
            while ($tmp3999->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3999 = $tmp3999->next;
            }
            $fn4001 $tmp4000 = $tmp3999->methods[1];
            panda$core$Object* $tmp4002 = $tmp4000(expr$Iter3985);
            expr3998 = ((org$pandalanguage$pandac$ASTNode*) $tmp4002);
            org$pandalanguage$pandac$IRNode* $tmp4004 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr3998);
            org$pandalanguage$pandac$IRNode* $tmp4005 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4004, p_type);
            compiled4003 = $tmp4005;
            if (((panda$core$Bit) { compiled4003 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3982, ((panda$core$Object*) compiled4003));
        }
        goto $l3991;
        $l3992:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4006 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4006->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4006->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4006, self->symbolTable);
    self->symbolTable = $tmp4006;
    panda$collections$Array* $tmp4009 = (panda$collections$Array*) malloc(40);
    $tmp4009->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4009->refCount.value = 1;
    panda$collections$Array$init($tmp4009);
    statements4008 = $tmp4009;
    panda$core$Int64 $tmp4012 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4011, ((panda$core$Int64) { 1 }), $tmp4012, ((panda$core$Bit) { false }));
    int64_t $tmp4014 = $tmp4011.min.value;
    panda$core$Int64 i4013 = { $tmp4014 };
    int64_t $tmp4016 = $tmp4011.max.value;
    bool $tmp4017 = $tmp4011.inclusive.value;
    if ($tmp4017) goto $l4024; else goto $l4025;
    $l4024:;
    if ($tmp4014 <= $tmp4016) goto $l4018; else goto $l4020;
    $l4025:;
    if ($tmp4014 < $tmp4016) goto $l4018; else goto $l4020;
    $l4018:;
    {
        panda$core$Object* $tmp4027 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4013);
        org$pandalanguage$pandac$IRNode* $tmp4028 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4027));
        statement4026 = $tmp4028;
        if (((panda$core$Bit) { statement4026 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4008, ((panda$core$Object*) statement4026));
    }
    $l4021:;
    int64_t $tmp4030 = $tmp4016 - i4013.value;
    if ($tmp4017) goto $l4031; else goto $l4032;
    $l4031:;
    if ($tmp4030 >= 1) goto $l4029; else goto $l4020;
    $l4032:;
    if ($tmp4030 > 1) goto $l4029; else goto $l4020;
    $l4029:;
    i4013.value += 1;
    goto $l4018;
    $l4020:;
    panda$core$Object* $tmp4035 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4035);
    org$pandalanguage$pandac$IRNode* $tmp4036 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4036->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4036->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4036, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4008));
    panda$collections$Array$add$panda$collections$Array$T(children3982, ((panda$core$Object*) $tmp4036));
    org$pandalanguage$pandac$IRNode* $tmp4038 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4038->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4038->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4038, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children3982));
    return $tmp4038;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4041;
    panda$collections$Array* statements4046;
    panda$collections$Iterator* s$Iter4049;
    org$pandalanguage$pandac$ASTNode* s4061;
    org$pandalanguage$pandac$IRNode* statement4066;
    panda$core$Bit $tmp4040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4040.value);
    panda$collections$Array* $tmp4042 = (panda$collections$Array*) malloc(40);
    $tmp4042->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4042->refCount.value = 1;
    panda$collections$Array$init($tmp4042);
    children4041 = $tmp4042;
    org$pandalanguage$pandac$SymbolTable* $tmp4044 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4044->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4044->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4044, self->symbolTable);
    self->symbolTable = $tmp4044;
    panda$collections$Array* $tmp4047 = (panda$collections$Array*) malloc(40);
    $tmp4047->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4047->refCount.value = 1;
    panda$collections$Array$init($tmp4047);
    statements4046 = $tmp4047;
    {
        ITable* $tmp4050 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4050->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4050 = $tmp4050->next;
        }
        $fn4052 $tmp4051 = $tmp4050->methods[0];
        panda$collections$Iterator* $tmp4053 = $tmp4051(((panda$collections$Iterable*) p_o->children));
        s$Iter4049 = $tmp4053;
        $l4054:;
        ITable* $tmp4056 = s$Iter4049->$class->itable;
        while ($tmp4056->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4056 = $tmp4056->next;
        }
        $fn4058 $tmp4057 = $tmp4056->methods[0];
        panda$core$Bit $tmp4059 = $tmp4057(s$Iter4049);
        panda$core$Bit $tmp4060 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4059);
        if (!$tmp4060.value) goto $l4055;
        {
            ITable* $tmp4062 = s$Iter4049->$class->itable;
            while ($tmp4062->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4062 = $tmp4062->next;
            }
            $fn4064 $tmp4063 = $tmp4062->methods[1];
            panda$core$Object* $tmp4065 = $tmp4063(s$Iter4049);
            s4061 = ((org$pandalanguage$pandac$ASTNode*) $tmp4065);
            org$pandalanguage$pandac$IRNode* $tmp4067 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4061);
            statement4066 = $tmp4067;
            if (((panda$core$Bit) { statement4066 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4046, ((panda$core$Object*) statement4066));
        }
        goto $l4054;
        $l4055:;
    }
    panda$core$Object* $tmp4068 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4068);
    org$pandalanguage$pandac$IRNode* $tmp4069 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4069->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4069->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4069, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4046));
    panda$collections$Array$add$panda$collections$Array$T(children4041, ((panda$core$Object*) $tmp4069));
    org$pandalanguage$pandac$IRNode* $tmp4071 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4071->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4071->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4071, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4041));
    return $tmp4071;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4080;
    org$pandalanguage$pandac$Variable* v4089;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4074 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4073 = $tmp4074.value;
            if (!$tmp4073) goto $l4075;
            panda$core$Object* $tmp4076 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4077 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4076)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4078 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4077));
            $tmp4073 = $tmp4078.value;
            $l4075:;
            panda$core$Bit $tmp4079 = { $tmp4073 };
            return $tmp4079;
        }
        break;
        case 1026:
        {
            f4080 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4080->resolved.value);
            panda$core$Bit $tmp4083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4080->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4082 = $tmp4083.value;
            if (!$tmp4082) goto $l4084;
            $tmp4082 = ((panda$core$Bit) { f4080->value != NULL }).value;
            $l4084:;
            panda$core$Bit $tmp4085 = { $tmp4082 };
            bool $tmp4081 = $tmp4085.value;
            if (!$tmp4081) goto $l4086;
            panda$core$Bit $tmp4087 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4080->value);
            $tmp4081 = $tmp4087.value;
            $l4086:;
            panda$core$Bit $tmp4088 = { $tmp4081 };
            return $tmp4088;
        }
        break;
        case 1016:
        {
            v4089 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4089->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4090 = $tmp4091.value;
            if ($tmp4090) goto $l4092;
            panda$core$Bit $tmp4095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4089->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4094 = $tmp4095.value;
            if (!$tmp4094) goto $l4096;
            $tmp4094 = ((panda$core$Bit) { v4089->initialValue != NULL }).value;
            $l4096:;
            panda$core$Bit $tmp4097 = { $tmp4094 };
            bool $tmp4093 = $tmp4097.value;
            if (!$tmp4093) goto $l4098;
            panda$core$Bit $tmp4099 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4089->initialValue);
            $tmp4093 = $tmp4099.value;
            $l4098:;
            panda$core$Bit $tmp4100 = { $tmp4093 };
            $tmp4090 = $tmp4100.value;
            $l4092:;
            panda$core$Bit $tmp4101 = { $tmp4090 };
            return $tmp4101;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4106;
    org$pandalanguage$pandac$Variable* v4108;
    panda$core$Bit $tmp4102 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4102.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4103 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4104 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4103)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4105 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4104));
            return $tmp4105;
        }
        break;
        case 1026:
        {
            f4106 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4107 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4106->value);
            return $tmp4107;
        }
        break;
        case 1016:
        {
            v4108 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4109 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4108->initialValue);
            return $tmp4109;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4113;
    panda$collections$Array* children4120;
    panda$collections$Iterator* rawWhen$Iter4123;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4124;
    org$pandalanguage$pandac$ASTNode* rawWhen4137;
    org$pandalanguage$pandac$IRNode* o4143;
    org$pandalanguage$pandac$IRNode* w4145;
    panda$core$Bit $tmp4110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4110.value);
    panda$core$Int64 $tmp4111 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4112 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4111, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4112.value);
    panda$core$Object* $tmp4114 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4115 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4114));
    org$pandalanguage$pandac$IRNode* $tmp4116 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4115);
    value4113 = $tmp4116;
    if (((panda$core$Bit) { value4113 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4117 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4113->type);
    panda$core$Bit $tmp4118 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4117);
    if ($tmp4118.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4119 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4113);
        return $tmp4119;
    }
    }
    panda$collections$Array* $tmp4121 = (panda$collections$Array*) malloc(40);
    $tmp4121->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4121->refCount.value = 1;
    panda$collections$Array$init($tmp4121);
    children4120 = $tmp4121;
    panda$collections$Array$add$panda$collections$Array$T(children4120, ((panda$core$Object*) value4113));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4124, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4125 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4124);
        ITable* $tmp4126 = ((panda$collections$Iterable*) $tmp4125)->$class->itable;
        while ($tmp4126->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4126 = $tmp4126->next;
        }
        $fn4128 $tmp4127 = $tmp4126->methods[0];
        panda$collections$Iterator* $tmp4129 = $tmp4127(((panda$collections$Iterable*) $tmp4125));
        rawWhen$Iter4123 = $tmp4129;
        $l4130:;
        ITable* $tmp4132 = rawWhen$Iter4123->$class->itable;
        while ($tmp4132->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4132 = $tmp4132->next;
        }
        $fn4134 $tmp4133 = $tmp4132->methods[0];
        panda$core$Bit $tmp4135 = $tmp4133(rawWhen$Iter4123);
        panda$core$Bit $tmp4136 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4135);
        if (!$tmp4136.value) goto $l4131;
        {
            ITable* $tmp4138 = rawWhen$Iter4123->$class->itable;
            while ($tmp4138->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4138 = $tmp4138->next;
            }
            $fn4140 $tmp4139 = $tmp4138->methods[1];
            panda$core$Object* $tmp4141 = $tmp4139(rawWhen$Iter4123);
            rawWhen4137 = ((org$pandalanguage$pandac$ASTNode*) $tmp4141);
            panda$core$Bit $tmp4142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4137->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4142.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4144 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4137);
                o4143 = $tmp4144;
                if (((panda$core$Bit) { o4143 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4120, ((panda$core$Object*) o4143));
                goto $l4130;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4146 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4113->type, rawWhen4137);
            w4145 = $tmp4146;
            if (((panda$core$Bit) { w4145 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w4145->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4148 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4147));
            panda$core$Bit $tmp4149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4148);
            if ($tmp4149.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4150 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4113);
                return $tmp4150;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4120, ((panda$core$Object*) w4145));
        }
        goto $l4130;
        $l4131:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4151 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4151->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4151->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4151, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4120));
    return $tmp4151;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4166;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4153 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4153;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4154 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4155 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4154);
            return $tmp4155;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4156 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4156;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4157 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4157;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4158 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4158;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4159 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4159;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4160 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4160;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4161 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4161;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4162 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4162;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4163 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4163;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4164 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4164;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4165 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4165;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4167 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4168 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4167);
            result4166 = $tmp4168;
            if (((panda$core$Bit) { result4166 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4169 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4166);
                result4166 = $tmp4169;
            }
            }
            return result4166;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4170 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4170;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4171;
    org$pandalanguage$pandac$SymbolTable* symbols4173;
    panda$collections$Iterator* p$Iter4176;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4188;
    panda$collections$Array* fieldInitializers4195;
    panda$collections$Iterator* f$Iter4199;
    org$pandalanguage$pandac$FieldDecl* f4212;
    panda$collections$Array* children4222;
    org$pandalanguage$pandac$IRNode* fieldRef4229;
    org$pandalanguage$pandac$IRNode* compiled4234;
    panda$collections$Array* children4238;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4171 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4172 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4172;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4174 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4174->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4174->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4174, self->symbolTable);
    symbols4173 = $tmp4174;
    {
        ITable* $tmp4177 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4177->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4177 = $tmp4177->next;
        }
        $fn4179 $tmp4178 = $tmp4177->methods[0];
        panda$collections$Iterator* $tmp4180 = $tmp4178(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4176 = $tmp4180;
        $l4181:;
        ITable* $tmp4183 = p$Iter4176->$class->itable;
        while ($tmp4183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4183 = $tmp4183->next;
        }
        $fn4185 $tmp4184 = $tmp4183->methods[0];
        panda$core$Bit $tmp4186 = $tmp4184(p$Iter4176);
        panda$core$Bit $tmp4187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4186);
        if (!$tmp4187.value) goto $l4182;
        {
            ITable* $tmp4189 = p$Iter4176->$class->itable;
            while ($tmp4189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4189 = $tmp4189->next;
            }
            $fn4191 $tmp4190 = $tmp4189->methods[1];
            panda$core$Object* $tmp4192 = $tmp4190(p$Iter4176);
            p4188 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4192);
            org$pandalanguage$pandac$Variable* $tmp4193 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4193->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4193->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4193, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4188->name, p4188->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4173, ((org$pandalanguage$pandac$Symbol*) $tmp4193));
        }
        goto $l4181;
        $l4182:;
    }
    self->symbolTable = symbols4173;
    panda$collections$Array* $tmp4196 = (panda$collections$Array*) malloc(40);
    $tmp4196->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4196->refCount.value = 1;
    panda$collections$Array$init($tmp4196);
    fieldInitializers4195 = $tmp4196;
    panda$core$Bit $tmp4198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4198.value) {
    {
        {
            panda$core$Object* $tmp4200 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4201 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4200)->fields)->$class->itable;
            while ($tmp4201->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4201 = $tmp4201->next;
            }
            $fn4203 $tmp4202 = $tmp4201->methods[0];
            panda$collections$Iterator* $tmp4204 = $tmp4202(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4200)->fields));
            f$Iter4199 = $tmp4204;
            $l4205:;
            ITable* $tmp4207 = f$Iter4199->$class->itable;
            while ($tmp4207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4207 = $tmp4207->next;
            }
            $fn4209 $tmp4208 = $tmp4207->methods[0];
            panda$core$Bit $tmp4210 = $tmp4208(f$Iter4199);
            panda$core$Bit $tmp4211 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4210);
            if (!$tmp4211.value) goto $l4206;
            {
                ITable* $tmp4213 = f$Iter4199->$class->itable;
                while ($tmp4213->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4213 = $tmp4213->next;
                }
                $fn4215 $tmp4214 = $tmp4213->methods[1];
                panda$core$Object* $tmp4216 = $tmp4214(f$Iter4199);
                f4212 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4216);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4212);
                panda$core$Bit $tmp4218 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4212->annotations);
                panda$core$Bit $tmp4219 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4218);
                bool $tmp4217 = $tmp4219.value;
                if (!$tmp4217) goto $l4220;
                $tmp4217 = ((panda$core$Bit) { f4212->value != NULL }).value;
                $l4220:;
                panda$core$Bit $tmp4221 = { $tmp4217 };
                if ($tmp4221.value) {
                {
                    panda$collections$Array* $tmp4223 = (panda$collections$Array*) malloc(40);
                    $tmp4223->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4223->refCount.value = 1;
                    panda$collections$Array$init($tmp4223);
                    children4222 = $tmp4223;
                    org$pandalanguage$pandac$IRNode* $tmp4225 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4225->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4225->refCount.value = 1;
                    panda$core$Object* $tmp4227 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4228 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4227));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4225, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4228);
                    panda$collections$Array$add$panda$collections$Array$T(children4222, ((panda$core$Object*) $tmp4225));
                    org$pandalanguage$pandac$IRNode* $tmp4230 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4230->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4230->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4230, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4212->type, ((panda$core$Object*) f4212), ((panda$collections$ListView*) children4222));
                    fieldRef4229 = $tmp4230;
                    panda$collections$Array$clear(children4222);
                    panda$collections$Array$add$panda$collections$Array$T(children4222, ((panda$core$Object*) fieldRef4229));
                    panda$collections$Array$add$panda$collections$Array$T(children4222, ((panda$core$Object*) f4212->value));
                    org$pandalanguage$pandac$IRNode* $tmp4232 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4232->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4232->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4232, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4212)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4222));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4195, ((panda$core$Object*) $tmp4232));
                }
                }
            }
            goto $l4205;
            $l4206:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4235 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4234 = $tmp4235;
    if (((panda$core$Bit) { compiled4234 != NULL }).value) {
    {
        panda$core$Int64 $tmp4236 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4195);
        panda$core$Bit $tmp4237 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4236, ((panda$core$Int64) { 0 }));
        if ($tmp4237.value) {
        {
            panda$collections$Array* $tmp4239 = (panda$collections$Array*) malloc(40);
            $tmp4239->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4239->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4239, ((panda$collections$ListView*) fieldInitializers4195));
            children4238 = $tmp4239;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4238, ((panda$collections$CollectionView*) compiled4234->children));
            org$pandalanguage$pandac$IRNode* $tmp4241 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4241->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4241->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4241, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4238));
            compiled4234 = $tmp4241;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4173) }).value);
    self->symbolTable = old4171;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4243 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4243.value) {
    {
        p_m->compiledBody = compiled4234;
    }
    }
    return compiled4234;
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

