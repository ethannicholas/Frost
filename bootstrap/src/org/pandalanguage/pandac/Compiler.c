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
#include "panda/io/Console.h"
#include "panda/collections/Key.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/io/File.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn21)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn123)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn171)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn178)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn216)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn220)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn230)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn238)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn245)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn343)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn349)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn355)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn362)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn368)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn374)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn428)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn434)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn440)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn451)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn457)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn463)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn469)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn475)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn481)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn489)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn495)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn501)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn577)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn583)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn589)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn605)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn611)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn617)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn643)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn649)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn655)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn707)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn713)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn719)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn728)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn745)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn763)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn769)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn775)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn783)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn789)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn795)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn806)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn812)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn818)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn841)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn847)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn853)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn892)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn898)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn904)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn917)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn923)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn929)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn944)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn950)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn956)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn971)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn977)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn983)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn997)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1003)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1009)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1022)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1028)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1034)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1079)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1085)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1091)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1098)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1104)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1110)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1130)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1136)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1142)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1222)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1330)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1336)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1342)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1368)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1374)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1380)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1530)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1536)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1542)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1710)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1716)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1722)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1769)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1775)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1781)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1871)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1893)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1915)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1932)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1938)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1944)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1956)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1978)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2052)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2070)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2141)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2159)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2171)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2202)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2208)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2214)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2251)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2257)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2263)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2286)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2292)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2298)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2688)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2694)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2700)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2832)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2838)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2844)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2957)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3057)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3073)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3079)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3085)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3180)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3186)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3192)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3397)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3409)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3539)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3545)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3551)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3577)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3583)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3589)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3693)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3699)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3705)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3851)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3857)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3863)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3936)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3942)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3948)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3999)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4005)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4011)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4075)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4081)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4087)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4126)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4132)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4138)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4150)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4156)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4162)(panda$collections$Iterator*);
typedef void (*$fn4195)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4198)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4202)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4208)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4214)(panda$collections$Iterator*);
typedef void (*$fn4219)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4222)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4227)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4231)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4237)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4243)(panda$collections$Iterator*);
typedef void (*$fn4247)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4257)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4259)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4271)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4277)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4286)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4292)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4298)(panda$collections$Iterator*);
typedef void (*$fn4314)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6E\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x27", 19, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 9, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x74\x79\x70\x65\x20\x27", 14, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x65\x78\x74\x65\x6E\x64\x20\x63\x6C\x61\x73\x73\x20", 22, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73\x20\x27", 12, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6F\x66\x20\x63\x6C\x61\x73\x73\x20\x27", 12, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20", 10, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6F\x72\x65\x20\x61\x6E\x79\x20\x73\x75\x70\x65\x72\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x73", 33, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6D\x6F\x72\x65\x20\x74\x68\x61\x6E\x20\x6F\x6E\x65\x20\x73\x75\x70\x65\x72\x63\x6C\x61\x73\x73", 30, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x56\x61\x6C\x75\x65", 16, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 23, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 33, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20\x6D\x65\x74\x68\x6F\x64\x20", 45, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 26, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, NULL };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, NULL };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, NULL };
static panda$core$String $s1217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, NULL };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, NULL };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, NULL };
static panda$core$String $s2104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, NULL };
static panda$core$String $s2107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, NULL };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, NULL };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, NULL };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, NULL };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, NULL };
static panda$core$String $s2458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, NULL };
static panda$core$String $s2588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, NULL };
static panda$core$String $s2605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, NULL };
static panda$core$String $s2660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, NULL };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s2962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, NULL };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, NULL };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s3069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, NULL };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, NULL };
static panda$core$String $s3131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, NULL };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, NULL };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s3302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, NULL };
static panda$core$String $s3330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, NULL };
static panda$core$String $s3335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, NULL };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, NULL };
static panda$core$String $s3441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, NULL };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, NULL };
static panda$core$String $s3558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, NULL };
static panda$core$String $s3560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, NULL };
static panda$core$String $s3562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, NULL };
static panda$core$String $s3569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, NULL };
static panda$core$String $s3596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, NULL };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, NULL };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, NULL };
static panda$core$String $s3607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, NULL };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, NULL };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, NULL };
static panda$core$String $s3719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s3756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s3807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, NULL };
static panda$core$String $s3809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, NULL };
static panda$core$String $s3812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s4307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, NULL };
static panda$core$String $s4310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };

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
    panda$core$Range$LTpanda$core$Int64$GT $tmp200;
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
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp200, ((panda$core$Int64) { 0 }), expectedCount168, ((panda$core$Bit) { false }));
    int64_t $tmp202 = $tmp200.min.value;
    panda$core$Int64 i201 = { $tmp202 };
    int64_t $tmp204 = $tmp200.max.value;
    bool $tmp205 = $tmp200.inclusive.value;
    if ($tmp205) goto $l212; else goto $l213;
    $l212:;
    if ($tmp202 <= $tmp204) goto $l206; else goto $l208;
    $l213:;
    if ($tmp202 < $tmp204) goto $l206; else goto $l208;
    $l206:;
    {
        ITable* $tmp214 = foundTypes173->$class->itable;
        while ($tmp214->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp214 = $tmp214->next;
        }
        $fn216 $tmp215 = $tmp214->methods[0];
        panda$core$Object* $tmp217 = $tmp215(foundTypes173, i201);
        ITable* $tmp218 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp218->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp218 = $tmp218->next;
        }
        $fn220 $tmp219 = $tmp218->methods[0];
        panda$core$Object* $tmp221 = $tmp219(((panda$collections$ListView*) p_cl->parameters), i201);
        org$pandalanguage$pandac$Type* $tmp222 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp221)->bound);
        panda$core$Int64$nullable $tmp223 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp217), $tmp222);
        if (((panda$core$Bit) { !$tmp223.nonnull }).value) {
        {
            panda$core$String* $tmp225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s224, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp225, &$s226);
            ITable* $tmp228 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp228->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp228 = $tmp228->next;
            }
            $fn230 $tmp229 = $tmp228->methods[0];
            panda$core$Object* $tmp231 = $tmp229(((panda$collections$ListView*) p_cl->parameters), i201);
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp227, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp231))->name);
            panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s233);
            ITable* $tmp236 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp236->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp236 = $tmp236->next;
            }
            $fn238 $tmp237 = $tmp236->methods[0];
            panda$core$Object* $tmp239 = $tmp237(((panda$collections$ListView*) p_cl->parameters), i201);
            panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s235, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp239)->bound));
            panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s241);
            ITable* $tmp243 = foundTypes173->$class->itable;
            while ($tmp243->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp243 = $tmp243->next;
            }
            $fn245 $tmp244 = $tmp243->methods[0];
            panda$core$Object* $tmp246 = $tmp244(foundTypes173, i201);
            panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp242, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp246)));
            panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s248);
            panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp234, $tmp249);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp250);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l209:;
    int64_t $tmp252 = $tmp204 - i201.value;
    if ($tmp205) goto $l253; else goto $l254;
    $l253:;
    if ($tmp252 >= 1) goto $l251; else goto $l208;
    $l254:;
    if ($tmp252 > 1) goto $l251; else goto $l208;
    $l251:;
    i201.value += 1;
    goto $l206;
    $l208:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved257;
    org$pandalanguage$pandac$Type* result259;
    org$pandalanguage$pandac$Symbol* s263;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp267;
    panda$collections$Array* subtypes278;
    org$pandalanguage$pandac$Type* sub281;
    panda$collections$Array* subtypes291;
    org$pandalanguage$pandac$Type* base294;
    panda$core$MutableString* name297;
    panda$core$String* separator302;
    panda$core$Range$LTpanda$core$Int64$GT $tmp304;
    org$pandalanguage$pandac$Type* resolved319;
    org$pandalanguage$pandac$Type* result330;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp258 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved257 = $tmp258;
            if (((panda$core$Bit) { resolved257 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp260 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved257);
                result259 = $tmp260;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp261 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved257, result259);
                    panda$core$Bit $tmp262 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp261);
                    if ($tmp262.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result259;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp264 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s263 = $tmp264;
            if (((panda$core$Bit) { s263 != NULL }).value) {
            {
                switch (s263->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp265 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp265->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp265->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp265, ((org$pandalanguage$pandac$Alias*) s263)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp265;
                    }
                    break;
                    case 203:
                    {
                        gp267 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s263);
                        org$pandalanguage$pandac$ClassDecl* $tmp268 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp267->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp268);
                        org$pandalanguage$pandac$Type* $tmp269 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp269->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp269->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp269, gp267);
                        return $tmp269;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s263);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp271 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s263));
                        return $tmp271;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s272, ((panda$core$Object*) p_type));
            panda$core$String* $tmp275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp273, &$s274);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp275);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp276 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp276, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp277.value);
            panda$collections$Array* $tmp279 = (panda$collections$Array*) malloc(40);
            $tmp279->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp279->refCount.value = 1;
            panda$collections$Array$init($tmp279);
            subtypes278 = $tmp279;
            panda$core$Object* $tmp282 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp283 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp282));
            sub281 = $tmp283;
            if (((panda$core$Bit) { sub281 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes278, ((panda$core$Object*) sub281));
            org$pandalanguage$pandac$Type* $tmp284 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp284->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp284->refCount.value = 1;
            panda$core$Object* $tmp286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes278, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp286))->name, &$s287);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp284, $tmp288, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes278), ((panda$core$Bit) { true }));
            return $tmp284;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp289 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp290 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp289, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp290.value);
            panda$collections$Array* $tmp292 = (panda$collections$Array*) malloc(40);
            $tmp292->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp292->refCount.value = 1;
            panda$collections$Array$init($tmp292);
            subtypes291 = $tmp292;
            panda$core$Object* $tmp295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp296 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp295), ((panda$core$Bit) { false }));
            base294 = $tmp296;
            if (((panda$core$Bit) { base294 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes291, ((panda$core$Object*) base294));
            panda$core$MutableString* $tmp298 = (panda$core$MutableString*) malloc(40);
            $tmp298->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp298->refCount.value = 1;
            panda$core$Object* $tmp300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes291, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp298, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp300))->name);
            name297 = $tmp298;
            panda$core$MutableString$append$panda$core$String(name297, &$s301);
            separator302 = &$s303;
            panda$core$Int64 $tmp305 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp304, ((panda$core$Int64) { 1 }), $tmp305, ((panda$core$Bit) { false }));
            int64_t $tmp307 = $tmp304.min.value;
            panda$core$Int64 i306 = { $tmp307 };
            int64_t $tmp309 = $tmp304.max.value;
            bool $tmp310 = $tmp304.inclusive.value;
            if ($tmp310) goto $l317; else goto $l318;
            $l317:;
            if ($tmp307 <= $tmp309) goto $l311; else goto $l313;
            $l318:;
            if ($tmp307 < $tmp309) goto $l311; else goto $l313;
            $l311:;
            {
                panda$core$Object* $tmp320 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, i306);
                org$pandalanguage$pandac$Type* $tmp321 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp320));
                resolved319 = $tmp321;
                if (((panda$core$Bit) { resolved319 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes291, ((panda$core$Object*) resolved319));
                panda$core$MutableString$append$panda$core$String(name297, separator302);
                panda$core$MutableString$append$panda$core$String(name297, ((org$pandalanguage$pandac$Symbol*) resolved319)->name);
                separator302 = &$s322;
            }
            $l314:;
            int64_t $tmp324 = $tmp309 - i306.value;
            if ($tmp310) goto $l325; else goto $l326;
            $l325:;
            if ($tmp324 >= 1) goto $l323; else goto $l313;
            $l326:;
            if ($tmp324 > 1) goto $l323; else goto $l313;
            $l323:;
            i306.value += 1;
            goto $l311;
            $l313:;
            panda$core$MutableString$append$panda$core$String(name297, &$s329);
            org$pandalanguage$pandac$Type* $tmp331 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp331->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp331->refCount.value = 1;
            panda$core$String* $tmp333 = panda$core$MutableString$finish$R$panda$core$String(name297);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp331, $tmp333, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes291), ((panda$core$Bit) { true }));
            result330 = $tmp331;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result330->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp335 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp334));
                panda$core$Bit $tmp336 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp335, result330);
                panda$core$Bit $tmp337 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp336);
                if ($tmp337.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result330;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp338 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp338;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old339;
    panda$collections$Iterator* p$Iter340;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p352;
    org$pandalanguage$pandac$Type* resolved357;
    panda$collections$Iterator* rawS$Iter359;
    org$pandalanguage$pandac$Type* rawS371;
    org$pandalanguage$pandac$Type* s376;
    org$pandalanguage$pandac$ClassDecl* sClass378;
    panda$collections$Iterator* m$Iter425;
    org$pandalanguage$pandac$MethodDecl* m437;
    panda$collections$Iterator* intf$Iter448;
    org$pandalanguage$pandac$Type* intf460;
    panda$collections$Iterator* p$Iter466;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p478;
    org$pandalanguage$pandac$ClassDecl* cl483;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old339 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp341 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp341->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp341 = $tmp341->next;
        }
        $fn343 $tmp342 = $tmp341->methods[0];
        panda$collections$Iterator* $tmp344 = $tmp342(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter340 = $tmp344;
        $l345:;
        ITable* $tmp347 = p$Iter340->$class->itable;
        while ($tmp347->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp347 = $tmp347->next;
        }
        $fn349 $tmp348 = $tmp347->methods[0];
        panda$core$Bit $tmp350 = $tmp348(p$Iter340);
        panda$core$Bit $tmp351 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp350);
        if (!$tmp351.value) goto $l346;
        {
            ITable* $tmp353 = p$Iter340->$class->itable;
            while ($tmp353->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp353 = $tmp353->next;
            }
            $fn355 $tmp354 = $tmp353->methods[1];
            panda$core$Object* $tmp356 = $tmp354(p$Iter340);
            p352 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp356);
            org$pandalanguage$pandac$Type* $tmp358 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p352->bound, ((panda$core$Bit) { false }));
            resolved357 = $tmp358;
            if (((panda$core$Bit) { resolved357 != NULL }).value) {
            {
                p352->bound = resolved357;
            }
            }
        }
        goto $l345;
        $l346:;
    }
    {
        ITable* $tmp360 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp360->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp360 = $tmp360->next;
        }
        $fn362 $tmp361 = $tmp360->methods[0];
        panda$collections$Iterator* $tmp363 = $tmp361(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter359 = $tmp363;
        $l364:;
        ITable* $tmp366 = rawS$Iter359->$class->itable;
        while ($tmp366->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp366 = $tmp366->next;
        }
        $fn368 $tmp367 = $tmp366->methods[0];
        panda$core$Bit $tmp369 = $tmp367(rawS$Iter359);
        panda$core$Bit $tmp370 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp369);
        if (!$tmp370.value) goto $l365;
        {
            ITable* $tmp372 = rawS$Iter359->$class->itable;
            while ($tmp372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp372 = $tmp372->next;
            }
            $fn374 $tmp373 = $tmp372->methods[1];
            panda$core$Object* $tmp375 = $tmp373(rawS$Iter359);
            rawS371 = ((org$pandalanguage$pandac$Type*) $tmp375);
            org$pandalanguage$pandac$Type* $tmp377 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS371, ((panda$core$Bit) { false }));
            s376 = $tmp377;
            if (((panda$core$Bit) { s376 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp379 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s376);
                sClass378 = $tmp379;
                if (((panda$core$Bit) { sClass378 != NULL }).value) {
                {
                    panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass378->classKind, ((panda$core$Int64) { 5011 }));
                    if ($tmp380.value) {
                    {
                        panda$core$Bit $tmp381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind, ((panda$core$Int64) { 5012 }));
                        if ($tmp381.value) {
                        {
                            panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s382, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp383, &$s384);
                            panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s386, ((org$pandalanguage$pandac$Symbol*) s376)->name);
                            panda$core$String* $tmp389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp387, &$s388);
                            panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp385, $tmp389);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s376)->position, $tmp390);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s376;
                            panda$core$Int64 $tmp391 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp392 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp391, ((panda$core$Int64) { 0 }));
                            if ($tmp392.value) {
                            {
                                panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s393, ((panda$core$Object*) s376));
                                panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp394, &$s395);
                                panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp396, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp397, &$s398);
                                panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp399, &$s400);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s376)->position, $tmp401);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s402, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, &$s404);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s376)->position, $tmp405);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass378->classKind, ((panda$core$Int64) { 5012 }));
                        PANDA_ASSERT($tmp406.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s376));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l364;
        $l365:;
    }
    bool $tmp407 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp407) goto $l408;
    panda$core$Bit $tmp410 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s409);
    $tmp407 = $tmp410.value;
    $l408:;
    panda$core$Bit $tmp411 = { $tmp407 };
    if ($tmp411.value) {
    {
        org$pandalanguage$pandac$Type* $tmp412 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp412;
    }
    }
    bool $tmp414 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp414) goto $l415;
    panda$core$Bit $tmp416 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp417 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp416);
    $tmp414 = $tmp417.value;
    $l415:;
    panda$core$Bit $tmp418 = { $tmp414 };
    bool $tmp413 = $tmp418.value;
    if (!$tmp413) goto $l419;
    panda$core$Bit $tmp421 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s420);
    $tmp413 = $tmp421.value;
    $l419:;
    panda$core$Bit $tmp422 = { $tmp413 };
    if ($tmp422.value) {
    {
        panda$core$Int64 $tmp423 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp424 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp423);
        p_cl->annotations->flags = $tmp424;
        {
            ITable* $tmp426 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp426->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp426 = $tmp426->next;
            }
            $fn428 $tmp427 = $tmp426->methods[0];
            panda$collections$Iterator* $tmp429 = $tmp427(((panda$collections$Iterable*) p_cl->methods));
            m$Iter425 = $tmp429;
            $l430:;
            ITable* $tmp432 = m$Iter425->$class->itable;
            while ($tmp432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp432 = $tmp432->next;
            }
            $fn434 $tmp433 = $tmp432->methods[0];
            panda$core$Bit $tmp435 = $tmp433(m$Iter425);
            panda$core$Bit $tmp436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp435);
            if (!$tmp436.value) goto $l431;
            {
                ITable* $tmp438 = m$Iter425->$class->itable;
                while ($tmp438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp438 = $tmp438->next;
                }
                $fn440 $tmp439 = $tmp438->methods[1];
                panda$core$Object* $tmp441 = $tmp439(m$Iter425);
                m437 = ((org$pandalanguage$pandac$MethodDecl*) $tmp441);
                panda$core$Int64 $tmp442 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp443 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m437->annotations->flags, $tmp442);
                m437->annotations->flags = $tmp443;
                panda$core$Bit $tmp444 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m437->annotations, m437->body);
                if ($tmp444.value) {
                {
                    panda$core$Int64 $tmp445 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp446 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m437->annotations->flags, $tmp445);
                    m437->annotations->flags = $tmp446;
                }
                }
            }
            goto $l430;
            $l431:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp447 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp447, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp449 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp449->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp449 = $tmp449->next;
        }
        $fn451 $tmp450 = $tmp449->methods[0];
        panda$collections$Iterator* $tmp452 = $tmp450(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter448 = $tmp452;
        $l453:;
        ITable* $tmp455 = intf$Iter448->$class->itable;
        while ($tmp455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp455 = $tmp455->next;
        }
        $fn457 $tmp456 = $tmp455->methods[0];
        panda$core$Bit $tmp458 = $tmp456(intf$Iter448);
        panda$core$Bit $tmp459 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp458);
        if (!$tmp459.value) goto $l454;
        {
            ITable* $tmp461 = intf$Iter448->$class->itable;
            while ($tmp461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp461 = $tmp461->next;
            }
            $fn463 $tmp462 = $tmp461->methods[1];
            panda$core$Object* $tmp464 = $tmp462(intf$Iter448);
            intf460 = ((org$pandalanguage$pandac$Type*) $tmp464);
            org$pandalanguage$pandac$ClassDecl* $tmp465 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf460);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp465, intf460);
        }
        goto $l453;
        $l454:;
    }
    {
        ITable* $tmp467 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp467->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp467 = $tmp467->next;
        }
        $fn469 $tmp468 = $tmp467->methods[0];
        panda$collections$Iterator* $tmp470 = $tmp468(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter466 = $tmp470;
        $l471:;
        ITable* $tmp473 = p$Iter466->$class->itable;
        while ($tmp473->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp473 = $tmp473->next;
        }
        $fn475 $tmp474 = $tmp473->methods[0];
        panda$core$Bit $tmp476 = $tmp474(p$Iter466);
        panda$core$Bit $tmp477 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp476);
        if (!$tmp477.value) goto $l472;
        {
            ITable* $tmp479 = p$Iter466->$class->itable;
            while ($tmp479->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp479 = $tmp479->next;
            }
            $fn481 $tmp480 = $tmp479->methods[1];
            panda$core$Object* $tmp482 = $tmp480(p$Iter466);
            p478 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp482);
            org$pandalanguage$pandac$ClassDecl* $tmp484 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p478->bound);
            cl483 = $tmp484;
            if (((panda$core$Bit) { cl483 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl483)->position, cl483, p478->bound);
            }
            }
        }
        goto $l471;
        $l472:;
    }
    self->symbolTable = old339;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old485;
    panda$collections$Iterator* p$Iter486;
    org$pandalanguage$pandac$MethodDecl$Parameter* p498;
    org$pandalanguage$pandac$MethodDecl* overridden505;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old485 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp487 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp487 = $tmp487->next;
        }
        $fn489 $tmp488 = $tmp487->methods[0];
        panda$collections$Iterator* $tmp490 = $tmp488(((panda$collections$Iterable*) p_m->parameters));
        p$Iter486 = $tmp490;
        $l491:;
        ITable* $tmp493 = p$Iter486->$class->itable;
        while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp493 = $tmp493->next;
        }
        $fn495 $tmp494 = $tmp493->methods[0];
        panda$core$Bit $tmp496 = $tmp494(p$Iter486);
        panda$core$Bit $tmp497 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp496);
        if (!$tmp497.value) goto $l492;
        {
            ITable* $tmp499 = p$Iter486->$class->itable;
            while ($tmp499->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp499 = $tmp499->next;
            }
            $fn501 $tmp500 = $tmp499->methods[1];
            panda$core$Object* $tmp502 = $tmp500(p$Iter486);
            p498 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp502);
            org$pandalanguage$pandac$Type* $tmp503 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p498->type);
            p498->type = $tmp503;
        }
        goto $l491;
        $l492:;
    }
    org$pandalanguage$pandac$Type* $tmp504 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp504;
    p_m->resolved = ((panda$core$Bit) { true });
    org$pandalanguage$pandac$MethodDecl* $tmp506 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    overridden505 = $tmp506;
    if (((panda$core$Bit) { overridden505 != NULL }).value) {
    {
        panda$core$Bit $tmp507 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        panda$core$Bit $tmp508 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp507);
        if ($tmp508.value) {
        {
            panda$core$String* $tmp509 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp510 = panda$core$String$convert$R$panda$core$String($tmp509);
            panda$core$String* $tmp512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp510, &$s511);
            panda$core$String* $tmp513 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden505);
            panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, $tmp513);
            panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp514, &$s515);
            panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp516, &$s517);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp518);
        }
        }
        panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 57 }));
        bool $tmp519 = $tmp520.value;
        if (!$tmp519) goto $l521;
        panda$core$Bit $tmp522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden505->methodKind, ((panda$core$Int64) { 58 }));
        $tmp519 = $tmp522.value;
        $l521:;
        panda$core$Bit $tmp523 = { $tmp519 };
        if ($tmp523.value) {
        {
            panda$core$String* $tmp524 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp525 = panda$core$String$convert$R$panda$core$String($tmp524);
            panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp525, &$s526);
            panda$core$String* $tmp528 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden505);
            panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, $tmp528);
            panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp529, &$s530);
            panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp531, &$s532);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp533);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp534 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    if ($tmp534.value) {
    {
        panda$core$String* $tmp535 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
        panda$core$String* $tmp536 = panda$core$String$convert$R$panda$core$String($tmp535);
        panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s537);
        panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s539);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp540);
    }
    }
    }
    self->symbolTable = old485;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old541;
    org$pandalanguage$pandac$Type* resolved544;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old541 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp542 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp543 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp542);
    if ($tmp543.value) {
    {
        org$pandalanguage$pandac$Type* $tmp545 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved544 = $tmp545;
        if (((panda$core$Bit) { resolved544 != NULL }).value) {
        {
            p_f->type = resolved544;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp546 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp547 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp546, p_f->type);
                p_f->value = $tmp547;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old541;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s548);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old541;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp549 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp549;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old541;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp550 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp550;
    org$pandalanguage$pandac$IRNode* $tmp551 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp551;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old541;
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s552);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s553);
            panda$core$Object* $tmp554 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp554)->payload)));
            return NULL;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s555);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp556 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp557 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp556);
            return $tmp557;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp558 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp558) goto $l559;
    org$pandalanguage$pandac$Type* $tmp560 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp561 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_cl->rawSuper, $tmp560);
    $tmp558 = ((panda$core$Bit) { $tmp561.nonnull }).value;
    $l559:;
    panda$core$Bit $tmp562 = { $tmp558 };
    return $tmp562;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result563;
    org$pandalanguage$pandac$ClassDecl* s571;
    panda$collections$Iterator* f$Iter574;
    org$pandalanguage$pandac$FieldDecl* f586;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp564 = (panda$collections$Array*) malloc(40);
    $tmp564->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp564->refCount.value = 1;
    panda$collections$Array$init($tmp564);
    result563 = $tmp564;
    panda$core$Bit $tmp567 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp568 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp567);
    bool $tmp566 = $tmp568.value;
    if (!$tmp566) goto $l569;
    $tmp566 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l569:;
    panda$core$Bit $tmp570 = { $tmp566 };
    if ($tmp570.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp572 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s571 = $tmp572;
        if (((panda$core$Bit) { s571 != NULL }).value) {
        {
            panda$collections$ListView* $tmp573 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s571);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result563, ((panda$collections$CollectionView*) $tmp573));
        }
        }
    }
    }
    {
        ITable* $tmp575 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp575->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp575 = $tmp575->next;
        }
        $fn577 $tmp576 = $tmp575->methods[0];
        panda$collections$Iterator* $tmp578 = $tmp576(((panda$collections$Iterable*) p_cl->fields));
        f$Iter574 = $tmp578;
        $l579:;
        ITable* $tmp581 = f$Iter574->$class->itable;
        while ($tmp581->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp581 = $tmp581->next;
        }
        $fn583 $tmp582 = $tmp581->methods[0];
        panda$core$Bit $tmp584 = $tmp582(f$Iter574);
        panda$core$Bit $tmp585 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp584);
        if (!$tmp585.value) goto $l580;
        {
            ITable* $tmp587 = f$Iter574->$class->itable;
            while ($tmp587->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp587 = $tmp587->next;
            }
            $fn589 $tmp588 = $tmp587->methods[1];
            panda$core$Object* $tmp590 = $tmp588(f$Iter574);
            f586 = ((org$pandalanguage$pandac$FieldDecl*) $tmp590);
            panda$core$Bit $tmp591 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f586->annotations);
            panda$core$Bit $tmp592 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp591);
            if ($tmp592.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result563, ((panda$core$Object*) f586));
            }
            }
        }
        goto $l579;
        $l580:;
    }
    return ((panda$collections$ListView*) result563);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result593;
    panda$core$String* suffix595;
    panda$core$Bit found601;
    panda$collections$Iterator* dir$Iter602;
    panda$io$File* dir614;
    panda$io$File* f619;
    panda$core$Bit $tmp621;
    panda$core$String$Index$nullable index623;
    org$pandalanguage$pandac$ClassDecl* parent626;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp627;
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
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f619);
                    panda$core$Object* $tmp622 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result593 = ((org$pandalanguage$pandac$ClassDecl*) $tmp622);
                }
                }
            }
            goto $l607;
            $l608:;
        }
    }
    }
    if (((panda$core$Bit) { result593 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp625 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s624);
        index623 = $tmp625;
        if (((panda$core$Bit) { index623.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp627, ((panda$core$String$Index$nullable) { .nonnull = false }), index623, ((panda$core$Bit) { false }));
            panda$core$String* $tmp628 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp627);
            org$pandalanguage$pandac$ClassDecl* $tmp629 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp628);
            parent626 = $tmp629;
            if (((panda$core$Bit) { parent626 != NULL }).value) {
            {
                panda$core$Object* $tmp630 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result593 = ((org$pandalanguage$pandac$ClassDecl*) $tmp630);
            }
            }
        }
        }
    }
    }
    return result593;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result631;
    panda$core$String* suffix633;
    panda$core$Bit found639;
    panda$collections$Iterator* dir$Iter640;
    panda$io$File* dir652;
    panda$io$File* f657;
    panda$core$Bit $tmp659;
    panda$core$Int64 oldErrorCount660;
    org$pandalanguage$pandac$Position $tmp666;
    panda$core$Object* $tmp632 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result631 = ((org$pandalanguage$pandac$ClassDecl*) $tmp632);
    if (((panda$core$Bit) { result631 == NULL }).value) {
    {
        panda$core$String* $tmp636 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s634, &$s635);
        panda$core$String* $tmp638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, &$s637);
        suffix633 = $tmp638;
        found639 = ((panda$core$Bit) { false });
        {
            ITable* $tmp641 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp641->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp641 = $tmp641->next;
            }
            $fn643 $tmp642 = $tmp641->methods[0];
            panda$collections$Iterator* $tmp644 = $tmp642(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter640 = $tmp644;
            $l645:;
            ITable* $tmp647 = dir$Iter640->$class->itable;
            while ($tmp647->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp647 = $tmp647->next;
            }
            $fn649 $tmp648 = $tmp647->methods[0];
            panda$core$Bit $tmp650 = $tmp648(dir$Iter640);
            panda$core$Bit $tmp651 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp650);
            if (!$tmp651.value) goto $l646;
            {
                ITable* $tmp653 = dir$Iter640->$class->itable;
                while ($tmp653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp653 = $tmp653->next;
                }
                $fn655 $tmp654 = $tmp653->methods[1];
                panda$core$Object* $tmp656 = $tmp654(dir$Iter640);
                dir652 = ((panda$io$File*) $tmp656);
                panda$io$File* $tmp658 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir652, suffix633);
                f657 = $tmp658;
                panda$io$File$exists$R$panda$core$Bit(&$tmp659, f657);
                if ($tmp659.value) {
                {
                    found639 = ((panda$core$Bit) { true });
                    oldErrorCount660 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f657);
                    panda$core$Object* $tmp661 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result631 = ((org$pandalanguage$pandac$ClassDecl*) $tmp661);
                    bool $tmp662 = ((panda$core$Bit) { result631 == NULL }).value;
                    if (!$tmp662) goto $l663;
                    panda$core$Bit $tmp664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount660);
                    $tmp662 = $tmp664.value;
                    $l663:;
                    panda$core$Bit $tmp665 = { $tmp662 };
                    if ($tmp665.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp666, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s667, ((panda$core$Object*) f657));
                        panda$core$String* $tmp670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp668, &$s669);
                        panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp670, p_fullName);
                        panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp671, &$s672);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f657, $tmp666, $tmp673);
                    }
                    }
                }
                }
            }
            goto $l645;
            $l646:;
        }
        panda$core$Bit $tmp674 = panda$core$Bit$$NOT$R$panda$core$Bit(found639);
        if ($tmp674.value) {
        {
            panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s675, suffix633);
            panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp676, &$s677);
            panda$core$String* $tmp679 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp678, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp679, &$s680);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp681);
        }
        }
    }
    }
    return result631;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type685;
    org$pandalanguage$pandac$ClassDecl* result692;
    org$pandalanguage$pandac$Annotations* annotations694;
    panda$collections$Array* supertypes700;
    panda$collections$Iterator* intf$Iter704;
    org$pandalanguage$pandac$Type* intf716;
    panda$collections$HashMap* aliases722;
    panda$core$Range$LTpanda$core$Int64$GT $tmp725;
    panda$collections$Iterator* m$Iter760;
    org$pandalanguage$pandac$MethodDecl* m772;
    panda$collections$Array* parameters777;
    panda$collections$Iterator* p$Iter780;
    org$pandalanguage$pandac$MethodDecl$Parameter* p792;
    org$pandalanguage$pandac$MethodDecl* clone800;
    panda$collections$Iterator* f$Iter803;
    org$pandalanguage$pandac$FieldDecl* f815;
    org$pandalanguage$pandac$FieldDecl* clone820;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp683 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s682);
    panda$core$Bit $tmp684 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp683);
    PANDA_ASSERT($tmp684.value);
    org$pandalanguage$pandac$Type* $tmp686 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type685 = $tmp686;
    panda$core$Bit $tmp687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type685->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp687.value) {
    {
        panda$core$Object* $tmp688 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type685->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp689 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp688));
        return $tmp689;
    }
    }
    panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type685->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp690.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type685->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp691.value);
    panda$core$Object* $tmp693 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type685)->name));
    result692 = ((org$pandalanguage$pandac$ClassDecl*) $tmp693);
    if (((panda$core$Bit) { result692 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp695 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp695->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp695->refCount.value = 1;
        panda$core$Int64 $tmp697 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp698 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp697);
        panda$core$Int64 $tmp699 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp698);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp695, $tmp699);
        annotations694 = $tmp695;
        panda$collections$Array* $tmp701 = (panda$collections$Array*) malloc(40);
        $tmp701->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp701->refCount.value = 1;
        panda$collections$Array$init($tmp701);
        supertypes700 = $tmp701;
        org$pandalanguage$pandac$Type* $tmp703 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type685, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes700, ((panda$core$Object*) $tmp703));
        {
            ITable* $tmp705 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp705->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp705 = $tmp705->next;
            }
            $fn707 $tmp706 = $tmp705->methods[0];
            panda$collections$Iterator* $tmp708 = $tmp706(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter704 = $tmp708;
            $l709:;
            ITable* $tmp711 = intf$Iter704->$class->itable;
            while ($tmp711->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp711 = $tmp711->next;
            }
            $fn713 $tmp712 = $tmp711->methods[0];
            panda$core$Bit $tmp714 = $tmp712(intf$Iter704);
            panda$core$Bit $tmp715 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp714);
            if (!$tmp715.value) goto $l710;
            {
                ITable* $tmp717 = intf$Iter704->$class->itable;
                while ($tmp717->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp717 = $tmp717->next;
                }
                $fn719 $tmp718 = $tmp717->methods[1];
                panda$core$Object* $tmp720 = $tmp718(intf$Iter704);
                intf716 = ((org$pandalanguage$pandac$Type*) $tmp720);
                org$pandalanguage$pandac$Type* $tmp721 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type685, intf716);
                panda$collections$Array$add$panda$collections$Array$T(supertypes700, ((panda$core$Object*) $tmp721));
            }
            goto $l709;
            $l710:;
        }
        panda$collections$HashMap* $tmp723 = (panda$collections$HashMap*) malloc(56);
        $tmp723->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp723->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp723, p_cl->aliases);
        aliases722 = $tmp723;
        ITable* $tmp726 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp726->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp726 = $tmp726->next;
        }
        $fn728 $tmp727 = $tmp726->methods[0];
        panda$core$Int64 $tmp729 = $tmp727(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp725, ((panda$core$Int64) { 0 }), $tmp729, ((panda$core$Bit) { false }));
        int64_t $tmp731 = $tmp725.min.value;
        panda$core$Int64 i730 = { $tmp731 };
        int64_t $tmp733 = $tmp725.max.value;
        bool $tmp734 = $tmp725.inclusive.value;
        if ($tmp734) goto $l741; else goto $l742;
        $l741:;
        if ($tmp731 <= $tmp733) goto $l735; else goto $l737;
        $l742:;
        if ($tmp731 < $tmp733) goto $l735; else goto $l737;
        $l735:;
        {
            ITable* $tmp743 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp743->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp743 = $tmp743->next;
            }
            $fn745 $tmp744 = $tmp743->methods[0];
            panda$core$Object* $tmp746 = $tmp744(((panda$collections$ListView*) p_cl->parameters), i730);
            panda$core$Int64 $tmp747 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i730, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp748 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type685->subtypes, $tmp747);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases722, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp746))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp748))->name));
        }
        $l738:;
        int64_t $tmp750 = $tmp733 - i730.value;
        if ($tmp734) goto $l751; else goto $l752;
        $l751:;
        if ($tmp750 >= 1) goto $l749; else goto $l737;
        $l752:;
        if ($tmp750 > 1) goto $l749; else goto $l737;
        $l749:;
        i730.value += 1;
        goto $l735;
        $l737:;
        org$pandalanguage$pandac$ClassDecl* $tmp755 = (org$pandalanguage$pandac$ClassDecl*) malloc(185);
        $tmp755->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp755->refCount.value = 1;
        panda$collections$Array* $tmp757 = (panda$collections$Array*) malloc(40);
        $tmp757->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp757->refCount.value = 1;
        panda$collections$Array$init($tmp757);
        panda$core$Object* $tmp759 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp755, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases722), p_cl->doccomment, annotations694, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type685)->name, ((panda$collections$ListView*) supertypes700), $tmp757, ((org$pandalanguage$pandac$SymbolTable*) $tmp759));
        result692 = $tmp755;
        result692->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp761 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp761 = $tmp761->next;
            }
            $fn763 $tmp762 = $tmp761->methods[0];
            panda$collections$Iterator* $tmp764 = $tmp762(((panda$collections$Iterable*) p_cl->methods));
            m$Iter760 = $tmp764;
            $l765:;
            ITable* $tmp767 = m$Iter760->$class->itable;
            while ($tmp767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp767 = $tmp767->next;
            }
            $fn769 $tmp768 = $tmp767->methods[0];
            panda$core$Bit $tmp770 = $tmp768(m$Iter760);
            panda$core$Bit $tmp771 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp770);
            if (!$tmp771.value) goto $l766;
            {
                ITable* $tmp773 = m$Iter760->$class->itable;
                while ($tmp773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp773 = $tmp773->next;
                }
                $fn775 $tmp774 = $tmp773->methods[1];
                panda$core$Object* $tmp776 = $tmp774(m$Iter760);
                m772 = ((org$pandalanguage$pandac$MethodDecl*) $tmp776);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m772);
                panda$collections$Array* $tmp778 = (panda$collections$Array*) malloc(40);
                $tmp778->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp778->refCount.value = 1;
                panda$collections$Array$init($tmp778);
                parameters777 = $tmp778;
                {
                    ITable* $tmp781 = ((panda$collections$Iterable*) m772->parameters)->$class->itable;
                    while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp781 = $tmp781->next;
                    }
                    $fn783 $tmp782 = $tmp781->methods[0];
                    panda$collections$Iterator* $tmp784 = $tmp782(((panda$collections$Iterable*) m772->parameters));
                    p$Iter780 = $tmp784;
                    $l785:;
                    ITable* $tmp787 = p$Iter780->$class->itable;
                    while ($tmp787->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp787 = $tmp787->next;
                    }
                    $fn789 $tmp788 = $tmp787->methods[0];
                    panda$core$Bit $tmp790 = $tmp788(p$Iter780);
                    panda$core$Bit $tmp791 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp790);
                    if (!$tmp791.value) goto $l786;
                    {
                        ITable* $tmp793 = p$Iter780->$class->itable;
                        while ($tmp793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp793 = $tmp793->next;
                        }
                        $fn795 $tmp794 = $tmp793->methods[1];
                        panda$core$Object* $tmp796 = $tmp794(p$Iter780);
                        p792 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp796);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp797 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp797->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp797->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp799 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type685, p792->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp797, p792->name, $tmp799);
                        panda$collections$Array$add$panda$collections$Array$T(parameters777, ((panda$core$Object*) $tmp797));
                    }
                    goto $l785;
                    $l786:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp801 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
                $tmp801->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp801->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp801, result692, ((org$pandalanguage$pandac$Symbol*) m772)->position, m772->doccomment, m772->annotations, m772->methodKind, ((org$pandalanguage$pandac$Symbol*) m772)->name, parameters777, m772->returnType, m772->body);
                clone800 = $tmp801;
                panda$collections$Array$add$panda$collections$Array$T(result692->methods, ((panda$core$Object*) clone800));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result692->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone800));
            }
            goto $l765;
            $l766:;
        }
        {
            ITable* $tmp804 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp804->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp804 = $tmp804->next;
            }
            $fn806 $tmp805 = $tmp804->methods[0];
            panda$collections$Iterator* $tmp807 = $tmp805(((panda$collections$Iterable*) p_cl->fields));
            f$Iter803 = $tmp807;
            $l808:;
            ITable* $tmp810 = f$Iter803->$class->itable;
            while ($tmp810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp810 = $tmp810->next;
            }
            $fn812 $tmp811 = $tmp810->methods[0];
            panda$core$Bit $tmp813 = $tmp811(f$Iter803);
            panda$core$Bit $tmp814 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp813);
            if (!$tmp814.value) goto $l809;
            {
                ITable* $tmp816 = f$Iter803->$class->itable;
                while ($tmp816->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp816 = $tmp816->next;
                }
                $fn818 $tmp817 = $tmp816->methods[1];
                panda$core$Object* $tmp819 = $tmp817(f$Iter803);
                f815 = ((org$pandalanguage$pandac$FieldDecl*) $tmp819);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f815);
                org$pandalanguage$pandac$FieldDecl* $tmp821 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp821->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp821->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp823 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type685, f815->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp821, result692, ((org$pandalanguage$pandac$Symbol*) f815)->position, f815->doccomment, f815->annotations, f815->fieldKind, ((org$pandalanguage$pandac$Symbol*) f815)->name, $tmp823, f815->rawValue);
                clone820 = $tmp821;
                panda$collections$Array$add$panda$collections$Array$T(result692->fields, ((panda$core$Object*) clone820));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result692->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone820));
            }
            goto $l808;
            $l809:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result692)->name), ((panda$core$Object*) result692));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result692));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result692;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result824;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp825 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result824 = $tmp825;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp826 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp827 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp826));
            result824 = $tmp827;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp828 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp828;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp829 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result824->annotations);
    if ($tmp829.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp830 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result824, p_type);
        result824 = $tmp830;
    }
    }
    return result824;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl831;
    panda$collections$Set* result833;
    panda$collections$Iterator* intf$Iter838;
    org$pandalanguage$pandac$Type* intf850;
    org$pandalanguage$pandac$ClassDecl* $tmp832 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl831 = $tmp832;
    PANDA_ASSERT(((panda$core$Bit) { cl831 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl831);
    panda$collections$Set* $tmp834 = (panda$collections$Set*) malloc(24);
    $tmp834->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp834->refCount.value = 1;
    panda$collections$Set$init($tmp834);
    result833 = $tmp834;
    if (((panda$core$Bit) { cl831->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp836 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl831->rawSuper);
        panda$collections$Set* $tmp837 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp836);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result833, ((panda$collections$CollectionView*) $tmp837));
    }
    }
    {
        ITable* $tmp839 = ((panda$collections$Iterable*) cl831->rawInterfaces)->$class->itable;
        while ($tmp839->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp839 = $tmp839->next;
        }
        $fn841 $tmp840 = $tmp839->methods[0];
        panda$collections$Iterator* $tmp842 = $tmp840(((panda$collections$Iterable*) cl831->rawInterfaces));
        intf$Iter838 = $tmp842;
        $l843:;
        ITable* $tmp845 = intf$Iter838->$class->itable;
        while ($tmp845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp845 = $tmp845->next;
        }
        $fn847 $tmp846 = $tmp845->methods[0];
        panda$core$Bit $tmp848 = $tmp846(intf$Iter838);
        panda$core$Bit $tmp849 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp848);
        if (!$tmp849.value) goto $l844;
        {
            ITable* $tmp851 = intf$Iter838->$class->itable;
            while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp851 = $tmp851->next;
            }
            $fn853 $tmp852 = $tmp851->methods[1];
            panda$core$Object* $tmp854 = $tmp852(intf$Iter838);
            intf850 = ((org$pandalanguage$pandac$Type*) $tmp854);
            org$pandalanguage$pandac$Type* $tmp855 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf850);
            panda$collections$Set* $tmp856 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp855);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result833, ((panda$collections$CollectionView*) $tmp856));
        }
        goto $l843;
        $l844:;
    }
    panda$core$Bit $tmp857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl831->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp857.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result833, ((panda$collections$Key*) p_t));
    }
    }
    return result833;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp863;
    panda$core$Bit $tmp858 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp858.value);
    panda$core$Bit $tmp859 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp859.value);
    panda$core$Int64 $tmp860 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp861 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp862 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp860, $tmp861);
    if ($tmp862.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp864 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp863, ((panda$core$Int64) { 0 }), $tmp864, ((panda$core$Bit) { false }));
    int64_t $tmp866 = $tmp863.min.value;
    panda$core$Int64 i865 = { $tmp866 };
    int64_t $tmp868 = $tmp863.max.value;
    bool $tmp869 = $tmp863.inclusive.value;
    if ($tmp869) goto $l876; else goto $l877;
    $l876:;
    if ($tmp866 <= $tmp868) goto $l870; else goto $l872;
    $l877:;
    if ($tmp866 < $tmp868) goto $l870; else goto $l872;
    $l870:;
    {
        panda$core$Object* $tmp878 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i865);
        panda$core$Object* $tmp879 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i865);
        panda$core$Bit $tmp880 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp878), ((org$pandalanguage$pandac$Type*) $tmp879));
        if ($tmp880.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l873:;
    int64_t $tmp882 = $tmp868 - i865.value;
    if ($tmp869) goto $l883; else goto $l884;
    $l883:;
    if ($tmp882 >= 1) goto $l881; else goto $l872;
    $l884:;
    if ($tmp882 > 1) goto $l881; else goto $l872;
    $l881:;
    i865.value += 1;
    goto $l870;
    $l872:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl887;
    panda$collections$Iterator* test$Iter889;
    org$pandalanguage$pandac$MethodDecl* test901;
    panda$collections$Iterator* raw$Iter914;
    org$pandalanguage$pandac$Type* raw926;
    org$pandalanguage$pandac$MethodDecl* result931;
    org$pandalanguage$pandac$ClassDecl* $tmp888 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl887 = $tmp888;
    PANDA_ASSERT(((panda$core$Bit) { cl887 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl887);
    {
        ITable* $tmp890 = ((panda$collections$Iterable*) cl887->methods)->$class->itable;
        while ($tmp890->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp890 = $tmp890->next;
        }
        $fn892 $tmp891 = $tmp890->methods[0];
        panda$collections$Iterator* $tmp893 = $tmp891(((panda$collections$Iterable*) cl887->methods));
        test$Iter889 = $tmp893;
        $l894:;
        ITable* $tmp896 = test$Iter889->$class->itable;
        while ($tmp896->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp896 = $tmp896->next;
        }
        $fn898 $tmp897 = $tmp896->methods[0];
        panda$core$Bit $tmp899 = $tmp897(test$Iter889);
        panda$core$Bit $tmp900 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp899);
        if (!$tmp900.value) goto $l895;
        {
            ITable* $tmp902 = test$Iter889->$class->itable;
            while ($tmp902->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp902 = $tmp902->next;
            }
            $fn904 $tmp903 = $tmp902->methods[1];
            panda$core$Object* $tmp905 = $tmp903(test$Iter889);
            test901 = ((org$pandalanguage$pandac$MethodDecl*) $tmp905);
            panda$core$Bit $tmp906 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test901)->name, p_name);
            if ($tmp906.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test901);
                org$pandalanguage$pandac$Type* $tmp907 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test901);
                org$pandalanguage$pandac$Type* $tmp908 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp907);
                panda$core$Bit $tmp909 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp908, p_methodType);
                if ($tmp909.value) {
                {
                    return test901;
                }
                }
            }
            }
        }
        goto $l894;
        $l895:;
    }
    bool $tmp910 = p_checkInterfaces.value;
    if ($tmp910) goto $l911;
    panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl887->classKind, ((panda$core$Int64) { 5012 }));
    $tmp910 = $tmp912.value;
    $l911:;
    panda$core$Bit $tmp913 = { $tmp910 };
    if ($tmp913.value) {
    {
        {
            ITable* $tmp915 = ((panda$collections$Iterable*) cl887->rawInterfaces)->$class->itable;
            while ($tmp915->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp915 = $tmp915->next;
            }
            $fn917 $tmp916 = $tmp915->methods[0];
            panda$collections$Iterator* $tmp918 = $tmp916(((panda$collections$Iterable*) cl887->rawInterfaces));
            raw$Iter914 = $tmp918;
            $l919:;
            ITable* $tmp921 = raw$Iter914->$class->itable;
            while ($tmp921->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp921 = $tmp921->next;
            }
            $fn923 $tmp922 = $tmp921->methods[0];
            panda$core$Bit $tmp924 = $tmp922(raw$Iter914);
            panda$core$Bit $tmp925 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp924);
            if (!$tmp925.value) goto $l920;
            {
                ITable* $tmp927 = raw$Iter914->$class->itable;
                while ($tmp927->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp927 = $tmp927->next;
                }
                $fn929 $tmp928 = $tmp927->methods[1];
                panda$core$Object* $tmp930 = $tmp928(raw$Iter914);
                raw926 = ((org$pandalanguage$pandac$Type*) $tmp930);
                org$pandalanguage$pandac$Type* $tmp932 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw926);
                org$pandalanguage$pandac$MethodDecl* $tmp933 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp932, p_name, p_methodType, p_checkInterfaces);
                result931 = $tmp933;
                if (((panda$core$Bit) { result931 != NULL }).value) {
                {
                    return result931;
                }
                }
            }
            goto $l919;
            $l920:;
        }
    }
    }
    if (((panda$core$Bit) { cl887->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp934 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl887->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp935 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp934, p_name, p_methodType, p_checkInterfaces);
        return $tmp935;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType937;
    org$pandalanguage$pandac$Type* owner939;
    panda$collections$Iterator* raw$Iter941;
    org$pandalanguage$pandac$Type* raw953;
    org$pandalanguage$pandac$MethodDecl* result958;
    panda$core$Bit $tmp936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp936.value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp938 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType937 = $tmp938;
    org$pandalanguage$pandac$Type* $tmp940 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner939 = $tmp940;
    {
        ITable* $tmp942 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp942->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp942 = $tmp942->next;
        }
        $fn944 $tmp943 = $tmp942->methods[0];
        panda$collections$Iterator* $tmp945 = $tmp943(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter941 = $tmp945;
        $l946:;
        ITable* $tmp948 = raw$Iter941->$class->itable;
        while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp948 = $tmp948->next;
        }
        $fn950 $tmp949 = $tmp948->methods[0];
        panda$core$Bit $tmp951 = $tmp949(raw$Iter941);
        panda$core$Bit $tmp952 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp951);
        if (!$tmp952.value) goto $l947;
        {
            ITable* $tmp954 = raw$Iter941->$class->itable;
            while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp954 = $tmp954->next;
            }
            $fn956 $tmp955 = $tmp954->methods[1];
            panda$core$Object* $tmp957 = $tmp955(raw$Iter941);
            raw953 = ((org$pandalanguage$pandac$Type*) $tmp957);
            org$pandalanguage$pandac$Type* $tmp959 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner939, raw953);
            org$pandalanguage$pandac$MethodDecl* $tmp960 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp959, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType937, ((panda$core$Bit) { true }));
            result958 = $tmp960;
            if (((panda$core$Bit) { result958 != NULL }).value) {
            {
                return result958;
            }
            }
        }
        goto $l946;
        $l947:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp961 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner939, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp962 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp961, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType937, ((panda$core$Bit) { true }));
        return $tmp962;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass963;
    panda$collections$Array* result965;
    panda$collections$Iterator* m$Iter968;
    org$pandalanguage$pandac$MethodDecl* m980;
    org$pandalanguage$pandac$MethodDecl* found985;
    org$pandalanguage$pandac$ClassDecl* $tmp964 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass963 = $tmp964;
    PANDA_ASSERT(((panda$core$Bit) { intfClass963 != NULL }).value);
    panda$collections$Array* $tmp966 = (panda$collections$Array*) malloc(40);
    $tmp966->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp966->refCount.value = 1;
    panda$collections$Array$init($tmp966);
    result965 = $tmp966;
    {
        ITable* $tmp969 = ((panda$collections$Iterable*) intfClass963->methods)->$class->itable;
        while ($tmp969->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp969 = $tmp969->next;
        }
        $fn971 $tmp970 = $tmp969->methods[0];
        panda$collections$Iterator* $tmp972 = $tmp970(((panda$collections$Iterable*) intfClass963->methods));
        m$Iter968 = $tmp972;
        $l973:;
        ITable* $tmp975 = m$Iter968->$class->itable;
        while ($tmp975->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp975 = $tmp975->next;
        }
        $fn977 $tmp976 = $tmp975->methods[0];
        panda$core$Bit $tmp978 = $tmp976(m$Iter968);
        panda$core$Bit $tmp979 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp978);
        if (!$tmp979.value) goto $l974;
        {
            ITable* $tmp981 = m$Iter968->$class->itable;
            while ($tmp981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp981 = $tmp981->next;
            }
            $fn983 $tmp982 = $tmp981->methods[1];
            panda$core$Object* $tmp984 = $tmp982(m$Iter968);
            m980 = ((org$pandalanguage$pandac$MethodDecl*) $tmp984);
            org$pandalanguage$pandac$Type* $tmp986 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp987 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m980);
            org$pandalanguage$pandac$Type* $tmp988 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp987);
            org$pandalanguage$pandac$MethodDecl* $tmp989 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp986, ((org$pandalanguage$pandac$Symbol*) m980)->name, $tmp988, ((panda$core$Bit) { false }));
            found985 = $tmp989;
            PANDA_ASSERT(((panda$core$Bit) { found985 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result965, ((panda$core$Object*) found985));
        }
        goto $l973;
        $l974:;
    }
    return ((panda$collections$ListView*) result965);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl991;
    panda$collections$Iterator* rawIntf$Iter994;
    org$pandalanguage$pandac$Type* rawIntf1006;
    org$pandalanguage$pandac$ClassDecl* intf1011;
    panda$core$Bit $tmp990 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp990.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp992 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl991 = $tmp992;
            if (((panda$core$Bit) { superCl991 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp993 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl991);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp993));
            }
            }
        }
        }
        {
            ITable* $tmp995 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp995->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp995 = $tmp995->next;
            }
            $fn997 $tmp996 = $tmp995->methods[0];
            panda$collections$Iterator* $tmp998 = $tmp996(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter994 = $tmp998;
            $l999:;
            ITable* $tmp1001 = rawIntf$Iter994->$class->itable;
            while ($tmp1001->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1001 = $tmp1001->next;
            }
            $fn1003 $tmp1002 = $tmp1001->methods[0];
            panda$core$Bit $tmp1004 = $tmp1002(rawIntf$Iter994);
            panda$core$Bit $tmp1005 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1004);
            if (!$tmp1005.value) goto $l1000;
            {
                ITable* $tmp1007 = rawIntf$Iter994->$class->itable;
                while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1007 = $tmp1007->next;
                }
                $fn1009 $tmp1008 = $tmp1007->methods[1];
                panda$core$Object* $tmp1010 = $tmp1008(rawIntf$Iter994);
                rawIntf1006 = ((org$pandalanguage$pandac$Type*) $tmp1010);
                org$pandalanguage$pandac$ClassDecl* $tmp1012 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1006);
                intf1011 = $tmp1012;
                if (((panda$core$Bit) { intf1011 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1013 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1011);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1013));
                }
                }
            }
            goto $l999;
            $l1000:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1016;
    panda$collections$Iterator* derived$Iter1019;
    org$pandalanguage$pandac$MethodDecl* derived1031;
    panda$core$Bit found1041;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1042;
    org$pandalanguage$pandac$MethodDecl* base1057;
    panda$core$Int64 $tmp1014 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1014, ((panda$core$Int64) { 0 }));
    if ($tmp1015.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1017 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1016 = $tmp1017;
            if (((panda$core$Bit) { superCl1016 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1018 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1016);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1018));
        }
        }
        {
            ITable* $tmp1020 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1020->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1020 = $tmp1020->next;
            }
            $fn1022 $tmp1021 = $tmp1020->methods[0];
            panda$collections$Iterator* $tmp1023 = $tmp1021(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1019 = $tmp1023;
            $l1024:;
            ITable* $tmp1026 = derived$Iter1019->$class->itable;
            while ($tmp1026->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1026 = $tmp1026->next;
            }
            $fn1028 $tmp1027 = $tmp1026->methods[0];
            panda$core$Bit $tmp1029 = $tmp1027(derived$Iter1019);
            panda$core$Bit $tmp1030 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1029);
            if (!$tmp1030.value) goto $l1025;
            {
                ITable* $tmp1032 = derived$Iter1019->$class->itable;
                while ($tmp1032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1032 = $tmp1032->next;
                }
                $fn1034 $tmp1033 = $tmp1032->methods[1];
                panda$core$Object* $tmp1035 = $tmp1033(derived$Iter1019);
                derived1031 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1035);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1031);
                panda$core$Bit $tmp1037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1031->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1036 = $tmp1037.value;
                if ($tmp1036) goto $l1038;
                panda$core$Bit $tmp1039 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1031->annotations);
                $tmp1036 = $tmp1039.value;
                $l1038:;
                panda$core$Bit $tmp1040 = { $tmp1036 };
                if ($tmp1040.value) {
                {
                    goto $l1024;
                }
                }
                found1041 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1043 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1042, ((panda$core$Int64) { 0 }), $tmp1043, ((panda$core$Bit) { false }));
                int64_t $tmp1045 = $tmp1042.min.value;
                panda$core$Int64 i1044 = { $tmp1045 };
                int64_t $tmp1047 = $tmp1042.max.value;
                bool $tmp1048 = $tmp1042.inclusive.value;
                if ($tmp1048) goto $l1055; else goto $l1056;
                $l1055:;
                if ($tmp1045 <= $tmp1047) goto $l1049; else goto $l1051;
                $l1056:;
                if ($tmp1045 < $tmp1047) goto $l1049; else goto $l1051;
                $l1049:;
                {
                    panda$core$Object* $tmp1058 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1044);
                    base1057 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1058);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1057);
                    panda$core$Bit $tmp1059 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1031, base1057);
                    if ($tmp1059.value) {
                    {
                        found1041 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1044, ((panda$core$Object*) derived1031));
                        goto $l1051;
                    }
                    }
                }
                $l1052:;
                int64_t $tmp1061 = $tmp1047 - i1044.value;
                if ($tmp1048) goto $l1062; else goto $l1063;
                $l1062:;
                if ($tmp1061 >= 1) goto $l1060; else goto $l1051;
                $l1063:;
                if ($tmp1061 > 1) goto $l1060; else goto $l1051;
                $l1060:;
                i1044.value += 1;
                goto $l1049;
                $l1051:;
                panda$core$Bit $tmp1066 = panda$core$Bit$$NOT$R$panda$core$Bit(found1041);
                if ($tmp1066.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1031));
                }
                }
            }
            goto $l1024;
            $l1025:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1067;
    org$pandalanguage$pandac$Symbol* s1070;
    panda$collections$Iterator* m$Iter1076;
    org$pandalanguage$pandac$MethodDecl* m1088;
    panda$collections$Iterator* p$Iter1095;
    org$pandalanguage$pandac$SymbolTable* p1107;
    panda$collections$Array* children1112;
    panda$collections$Array* types1124;
    panda$collections$Iterator* m$Iter1127;
    org$pandalanguage$pandac$MethodRef* m1139;
    panda$collections$Array* $tmp1068 = (panda$collections$Array*) malloc(40);
    $tmp1068->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1068->refCount.value = 1;
    panda$collections$Array$init($tmp1068);
    methods1067 = $tmp1068;
    org$pandalanguage$pandac$Symbol* $tmp1071 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1070 = $tmp1071;
    PANDA_ASSERT(((panda$core$Bit) { s1070 != NULL }).value);
    panda$core$Bit $tmp1072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1070->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1072.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1070));
        org$pandalanguage$pandac$MethodRef* $tmp1073 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1073->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1073->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1073, ((org$pandalanguage$pandac$MethodDecl*) s1070), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1067, ((panda$core$Object*) $tmp1073));
    }
    }
    else {
    {
        panda$core$Bit $tmp1075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1070->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1075.value);
        {
            ITable* $tmp1077 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1070)->methods)->$class->itable;
            while ($tmp1077->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1077 = $tmp1077->next;
            }
            $fn1079 $tmp1078 = $tmp1077->methods[0];
            panda$collections$Iterator* $tmp1080 = $tmp1078(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1070)->methods));
            m$Iter1076 = $tmp1080;
            $l1081:;
            ITable* $tmp1083 = m$Iter1076->$class->itable;
            while ($tmp1083->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1083 = $tmp1083->next;
            }
            $fn1085 $tmp1084 = $tmp1083->methods[0];
            panda$core$Bit $tmp1086 = $tmp1084(m$Iter1076);
            panda$core$Bit $tmp1087 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1086);
            if (!$tmp1087.value) goto $l1082;
            {
                ITable* $tmp1089 = m$Iter1076->$class->itable;
                while ($tmp1089->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1089 = $tmp1089->next;
                }
                $fn1091 $tmp1090 = $tmp1089->methods[1];
                panda$core$Object* $tmp1092 = $tmp1090(m$Iter1076);
                m1088 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1092);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1088);
                org$pandalanguage$pandac$MethodRef* $tmp1093 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1093->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1093->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1093, m1088, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1067, ((panda$core$Object*) $tmp1093));
            }
            goto $l1081;
            $l1082:;
        }
    }
    }
    {
        ITable* $tmp1096 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1096->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1096 = $tmp1096->next;
        }
        $fn1098 $tmp1097 = $tmp1096->methods[0];
        panda$collections$Iterator* $tmp1099 = $tmp1097(((panda$collections$Iterable*) p_st->parents));
        p$Iter1095 = $tmp1099;
        $l1100:;
        ITable* $tmp1102 = p$Iter1095->$class->itable;
        while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1102 = $tmp1102->next;
        }
        $fn1104 $tmp1103 = $tmp1102->methods[0];
        panda$core$Bit $tmp1105 = $tmp1103(p$Iter1095);
        panda$core$Bit $tmp1106 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1105);
        if (!$tmp1106.value) goto $l1101;
        {
            ITable* $tmp1108 = p$Iter1095->$class->itable;
            while ($tmp1108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1108 = $tmp1108->next;
            }
            $fn1110 $tmp1109 = $tmp1108->methods[1];
            panda$core$Object* $tmp1111 = $tmp1109(p$Iter1095);
            p1107 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1111);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1107, p_name, methods1067, p_types);
        }
        goto $l1100;
        $l1101:;
    }
    panda$collections$Array* $tmp1113 = (panda$collections$Array*) malloc(40);
    $tmp1113->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1113->refCount.value = 1;
    panda$collections$Array$init($tmp1113);
    children1112 = $tmp1113;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1112, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1115 = panda$collections$Array$get_count$R$panda$core$Int64(methods1067);
    panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1115, ((panda$core$Int64) { 1 }));
    if ($tmp1116.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1117 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1117->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1117->refCount.value = 1;
        panda$core$Object* $tmp1119 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1067, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1120 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1119));
        panda$core$Object* $tmp1121 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1067, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1117, ((panda$core$Int64) { 1002 }), p_position, $tmp1120, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1121)), ((panda$collections$ListView*) children1112));
        return $tmp1117;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1122 = panda$collections$Array$get_count$R$panda$core$Int64(methods1067);
        panda$core$Bit $tmp1123 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1122, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1123.value);
        panda$collections$Array* $tmp1125 = (panda$collections$Array*) malloc(40);
        $tmp1125->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1125->refCount.value = 1;
        panda$collections$Array$init($tmp1125);
        types1124 = $tmp1125;
        {
            ITable* $tmp1128 = ((panda$collections$Iterable*) methods1067)->$class->itable;
            while ($tmp1128->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1128 = $tmp1128->next;
            }
            $fn1130 $tmp1129 = $tmp1128->methods[0];
            panda$collections$Iterator* $tmp1131 = $tmp1129(((panda$collections$Iterable*) methods1067));
            m$Iter1127 = $tmp1131;
            $l1132:;
            ITable* $tmp1134 = m$Iter1127->$class->itable;
            while ($tmp1134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1134 = $tmp1134->next;
            }
            $fn1136 $tmp1135 = $tmp1134->methods[0];
            panda$core$Bit $tmp1137 = $tmp1135(m$Iter1127);
            panda$core$Bit $tmp1138 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1137);
            if (!$tmp1138.value) goto $l1133;
            {
                ITable* $tmp1140 = m$Iter1127->$class->itable;
                while ($tmp1140->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1140 = $tmp1140->next;
                }
                $fn1142 $tmp1141 = $tmp1140->methods[1];
                panda$core$Object* $tmp1143 = $tmp1141(m$Iter1127);
                m1139 = ((org$pandalanguage$pandac$MethodRef*) $tmp1143);
                org$pandalanguage$pandac$Type* $tmp1144 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1139);
                panda$collections$Array$add$panda$collections$Array$T(types1124, ((panda$core$Object*) $tmp1144));
            }
            goto $l1132;
            $l1133:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1145 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1145->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1145->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1147 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1147->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1147->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1147, ((panda$collections$ListView*) types1124));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1145, ((panda$core$Int64) { 1003 }), p_position, $tmp1147, ((panda$core$Object*) methods1067), ((panda$collections$ListView*) children1112));
        return $tmp1145;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1149;
    org$pandalanguage$pandac$FieldDecl* f1165;
    panda$collections$Array* children1168;
    org$pandalanguage$pandac$Type* effectiveType1173;
    org$pandalanguage$pandac$IRNode* result1178;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1150 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1149 = $tmp1150;
            if (((panda$core$Bit) { cl1149 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1151 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1149);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1149, $tmp1151);
                org$pandalanguage$pandac$IRNode* $tmp1152 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1152->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1152->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1154 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1155 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1149);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1152, ((panda$core$Int64) { 1001 }), p_position, $tmp1154, $tmp1155);
                return $tmp1152;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1156 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1156);
            org$pandalanguage$pandac$IRNode* $tmp1157 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1157->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1157->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1159 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1160 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1157, ((panda$core$Int64) { 1001 }), p_position, $tmp1159, $tmp1160);
            return $tmp1157;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1161 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1162 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1161);
            return $tmp1162;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1163 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1163->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1163->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1163, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1163;
        }
        break;
        case 202:
        {
            f1165 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1165);
            org$pandalanguage$pandac$Type* $tmp1166 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1167 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1165->type, $tmp1166);
            if ($tmp1167.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1169 = (panda$collections$Array*) malloc(40);
            $tmp1169->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1169->refCount.value = 1;
            panda$collections$Array$init($tmp1169);
            children1168 = $tmp1169;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1171.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1172);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1174 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1165->type);
                effectiveType1173 = $tmp1174;
                panda$core$Bit $tmp1175 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1165->annotations);
                if ($tmp1175.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1168, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1176 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1165->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1177 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1176);
                    panda$collections$Array$add$panda$collections$Array$T(children1168, ((panda$core$Object*) $tmp1177));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1179 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1179->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1179->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1179, ((panda$core$Int64) { 1026 }), p_position, f1165->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1168));
                result1178 = $tmp1179;
                panda$core$Bit $tmp1181 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1173, result1178->type);
                if ($tmp1181.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1182 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1178, p_position, ((panda$core$Bit) { false }), effectiveType1173);
                    result1178 = $tmp1182;
                }
                }
                return result1178;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1183 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1183->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1183->refCount.value = 1;
                panda$core$Object* $tmp1185 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1186 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1185));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1183, ((panda$core$Int64) { 1025 }), p_position, $tmp1186);
                panda$collections$Array$add$panda$collections$Array$T(children1168, ((panda$core$Object*) $tmp1183));
                org$pandalanguage$pandac$IRNode* $tmp1187 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1187->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1187->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1187, ((panda$core$Int64) { 1026 }), p_position, f1165->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1168));
                return $tmp1187;
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
    panda$collections$HashMap* typeMap1195;
    org$pandalanguage$pandac$Type* base1198;
    org$pandalanguage$pandac$ClassDecl* cl1200;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1202;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1189 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1189, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1190.value);
            panda$core$Object* $tmp1191 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1192 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1191), p_raw);
            return $tmp1192;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1193 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1194 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1193, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1194.value);
            panda$collections$HashMap* $tmp1196 = (panda$collections$HashMap*) malloc(56);
            $tmp1196->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1196->refCount.value = 1;
            panda$collections$HashMap$init($tmp1196);
            typeMap1195 = $tmp1196;
            panda$core$Object* $tmp1199 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1198 = ((org$pandalanguage$pandac$Type*) $tmp1199);
            org$pandalanguage$pandac$ClassDecl* $tmp1201 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1198)->name);
            cl1200 = $tmp1201;
            PANDA_ASSERT(((panda$core$Bit) { cl1200 != NULL }).value);
            panda$core$Int64 $tmp1203 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1202, ((panda$core$Int64) { 1 }), $tmp1203, ((panda$core$Bit) { false }));
            int64_t $tmp1205 = $tmp1202.min.value;
            panda$core$Int64 i1204 = { $tmp1205 };
            int64_t $tmp1207 = $tmp1202.max.value;
            bool $tmp1208 = $tmp1202.inclusive.value;
            if ($tmp1208) goto $l1215; else goto $l1216;
            $l1215:;
            if ($tmp1205 <= $tmp1207) goto $l1209; else goto $l1211;
            $l1216:;
            if ($tmp1205 < $tmp1207) goto $l1209; else goto $l1211;
            $l1209:;
            {
                panda$core$String* $tmp1218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1200)->name, &$s1217);
                panda$core$Int64 $tmp1219 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1204, ((panda$core$Int64) { 1 }));
                ITable* $tmp1220 = ((panda$collections$ListView*) cl1200->parameters)->$class->itable;
                while ($tmp1220->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1220 = $tmp1220->next;
                }
                $fn1222 $tmp1221 = $tmp1220->methods[0];
                panda$core$Object* $tmp1223 = $tmp1221(((panda$collections$ListView*) cl1200->parameters), $tmp1219);
                panda$core$String* $tmp1224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1218, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1223))->name);
                panda$core$Object* $tmp1225 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1204);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1195, ((panda$collections$Key*) $tmp1224), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1225)));
            }
            $l1212:;
            int64_t $tmp1227 = $tmp1207 - i1204.value;
            if ($tmp1208) goto $l1228; else goto $l1229;
            $l1228:;
            if ($tmp1227 >= 1) goto $l1226; else goto $l1211;
            $l1229:;
            if ($tmp1227 > 1) goto $l1226; else goto $l1211;
            $l1226:;
            i1204.value += 1;
            goto $l1209;
            $l1211:;
            org$pandalanguage$pandac$Type* $tmp1232 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1195);
            return $tmp1232;
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
    org$pandalanguage$pandac$Type* $tmp1233 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1234 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1233);
    if ($tmp1234.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1235 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1235;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1236 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1237 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1236);
    if ($tmp1237.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1238 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1238;
    }
    }
    panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1239.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1240 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1240;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* step1267;
    panda$collections$Array* args1294;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1295;
    org$pandalanguage$pandac$IRNode* c1297;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Int64 $tmp1241 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1241, ((panda$core$Int64) { 2 }));
            if ($tmp1242.value) {
            {
                panda$core$Object* $tmp1243 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1243)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1244.value) {
                {
                    panda$core$Object* $tmp1245 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1245)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1246.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1247 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1248 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1247);
                        org$pandalanguage$pandac$Type* $tmp1249 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1248);
                        return $tmp1249;
                    }
                    }
                    panda$core$Object* $tmp1250 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp1251 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1250)->type);
                    org$pandalanguage$pandac$Type* $tmp1252 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1251);
                    org$pandalanguage$pandac$Type* $tmp1253 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1252);
                    return $tmp1253;
                }
                }
                panda$core$Object* $tmp1254 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1254)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1255.value) {
                {
                    panda$core$Object* $tmp1256 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp1257 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1256)->type);
                    org$pandalanguage$pandac$Type* $tmp1258 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1257);
                    org$pandalanguage$pandac$Type* $tmp1259 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1258);
                    return $tmp1259;
                }
                }
                panda$core$Object* $tmp1260 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1261 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1260)->type);
                panda$core$Object* $tmp1262 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1263 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1262)->type);
                org$pandalanguage$pandac$Type* $tmp1264 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1261, $tmp1263);
                org$pandalanguage$pandac$Type* $tmp1265 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1264);
                org$pandalanguage$pandac$Type* $tmp1266 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1265);
                return $tmp1266;
            }
            }
            panda$core$Object* $tmp1268 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1269 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1268)->type);
            step1267 = $tmp1269;
            panda$core$Object* $tmp1270 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1270)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1271.value) {
            {
                panda$core$Object* $tmp1272 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1272)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1273.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1274 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$Type* $tmp1275 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1274);
                    org$pandalanguage$pandac$Type* $tmp1276 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1275, step1267);
                    return $tmp1276;
                }
                }
                panda$core$Object* $tmp1277 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1278 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1277)->type);
                org$pandalanguage$pandac$Type* $tmp1279 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1278);
                org$pandalanguage$pandac$Type* $tmp1280 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1279, step1267);
                return $tmp1280;
            }
            }
            panda$core$Object* $tmp1281 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1281)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1282.value) {
            {
                panda$core$Object* $tmp1283 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1284 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1283)->type);
                org$pandalanguage$pandac$Type* $tmp1285 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1284);
                org$pandalanguage$pandac$Type* $tmp1286 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1285, step1267);
                return $tmp1286;
            }
            }
            panda$core$Object* $tmp1287 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1288 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1287)->type);
            panda$core$Object* $tmp1289 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1290 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1289)->type);
            org$pandalanguage$pandac$Type* $tmp1291 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1288, $tmp1290);
            org$pandalanguage$pandac$Type* $tmp1292 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1291);
            org$pandalanguage$pandac$Type* $tmp1293 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1292, step1267);
            return $tmp1293;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1295, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1296 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1295);
            args1294 = $tmp1296;
            panda$core$Object* $tmp1298 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1300 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1298), &$s1299, ((panda$collections$ListView*) args1294));
            c1297 = $tmp1300;
            if (((panda$core$Bit) { c1297 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1301 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1301;
            }
            }
            return c1297->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1302 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1302;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1313;
    panda$core$Int64$nullable result1317;
    panda$core$Int64$nullable best1326;
    panda$collections$Iterator* t$Iter1327;
    org$pandalanguage$pandac$Type* t1339;
    panda$core$Int64$nullable cost1344;
    org$pandalanguage$pandac$ClassDecl* cl1358;
    panda$core$Int64$nullable cost1360;
    panda$collections$Iterator* intf$Iter1365;
    org$pandalanguage$pandac$Type* intf1377;
    panda$core$Int64$nullable cost1382;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1303 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1303.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1304 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1305 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1304);
    if ($tmp1305.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1306.value) {
    {
        panda$core$Bit $tmp1307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1307.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1308 = $tmp1309.value;
    if (!$tmp1308) goto $l1310;
    panda$core$Bit $tmp1311 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1308 = $tmp1311.value;
    $l1310:;
    panda$core$Bit $tmp1312 = { $tmp1308 };
    if ($tmp1312.value) {
    {
        panda$core$Object* $tmp1314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1315 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1314), p_target);
        result1313 = $tmp1315;
        if (((panda$core$Bit) { !result1313.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1316 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1313.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1316, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1318 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1319 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1318));
            result1317 = $tmp1319;
            if (((panda$core$Bit) { !result1317.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1320 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1317.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1320, true });
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
            panda$core$Bit $tmp1321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1321.value) {
            {
                panda$core$Object* $tmp1322 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1323 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1322), p_target);
                return $tmp1323;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1324 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1325 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1324, p_target);
            return $tmp1325;
        }
        break;
        case 17:
        {
            best1326 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1328 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1328->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1328 = $tmp1328->next;
                }
                $fn1330 $tmp1329 = $tmp1328->methods[0];
                panda$collections$Iterator* $tmp1331 = $tmp1329(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1327 = $tmp1331;
                $l1332:;
                ITable* $tmp1334 = t$Iter1327->$class->itable;
                while ($tmp1334->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1334 = $tmp1334->next;
                }
                $fn1336 $tmp1335 = $tmp1334->methods[0];
                panda$core$Bit $tmp1337 = $tmp1335(t$Iter1327);
                panda$core$Bit $tmp1338 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1337);
                if (!$tmp1338.value) goto $l1333;
                {
                    ITable* $tmp1340 = t$Iter1327->$class->itable;
                    while ($tmp1340->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1340 = $tmp1340->next;
                    }
                    $fn1342 $tmp1341 = $tmp1340->methods[1];
                    panda$core$Object* $tmp1343 = $tmp1341(t$Iter1327);
                    t1339 = ((org$pandalanguage$pandac$Type*) $tmp1343);
                    panda$core$Int64$nullable $tmp1345 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1339, p_target);
                    cost1344 = $tmp1345;
                    bool $tmp1346 = ((panda$core$Bit) { cost1344.nonnull }).value;
                    if (!$tmp1346) goto $l1347;
                    bool $tmp1348 = ((panda$core$Bit) { !best1326.nonnull }).value;
                    if ($tmp1348) goto $l1349;
                    panda$core$Bit $tmp1350 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1344.value), ((panda$core$Int64) best1326.value));
                    $tmp1348 = $tmp1350.value;
                    $l1349:;
                    panda$core$Bit $tmp1351 = { $tmp1348 };
                    $tmp1346 = $tmp1351.value;
                    $l1347:;
                    panda$core$Bit $tmp1352 = { $tmp1346 };
                    if ($tmp1352.value) {
                    {
                        best1326 = cost1344;
                    }
                    }
                }
                goto $l1332;
                $l1333:;
            }
            return best1326;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1353 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1353;
        }
        break;
    }
    panda$core$Bit $tmp1354 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1355 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1354);
    if ($tmp1355.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1356 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1357 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1356);
    if ($tmp1357.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1359 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1358 = $tmp1359;
    PANDA_ASSERT(((panda$core$Bit) { cl1358 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1358);
    if (((panda$core$Bit) { cl1358->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1361 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1358->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1362 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1361);
        panda$core$Int64$nullable $tmp1363 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1362, p_target);
        cost1360 = $tmp1363;
        if (((panda$core$Bit) { cost1360.nonnull }).value) {
        {
            panda$core$Int64 $tmp1364 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1360.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1364, true });
        }
        }
    }
    }
    {
        ITable* $tmp1366 = ((panda$collections$Iterable*) cl1358->rawInterfaces)->$class->itable;
        while ($tmp1366->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1366 = $tmp1366->next;
        }
        $fn1368 $tmp1367 = $tmp1366->methods[0];
        panda$collections$Iterator* $tmp1369 = $tmp1367(((panda$collections$Iterable*) cl1358->rawInterfaces));
        intf$Iter1365 = $tmp1369;
        $l1370:;
        ITable* $tmp1372 = intf$Iter1365->$class->itable;
        while ($tmp1372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1372 = $tmp1372->next;
        }
        $fn1374 $tmp1373 = $tmp1372->methods[0];
        panda$core$Bit $tmp1375 = $tmp1373(intf$Iter1365);
        panda$core$Bit $tmp1376 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1375);
        if (!$tmp1376.value) goto $l1371;
        {
            ITable* $tmp1378 = intf$Iter1365->$class->itable;
            while ($tmp1378->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1378 = $tmp1378->next;
            }
            $fn1380 $tmp1379 = $tmp1378->methods[1];
            panda$core$Object* $tmp1381 = $tmp1379(intf$Iter1365);
            intf1377 = ((org$pandalanguage$pandac$Type*) $tmp1381);
            org$pandalanguage$pandac$Type* $tmp1383 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1377);
            org$pandalanguage$pandac$Type* $tmp1384 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1383);
            panda$core$Int64$nullable $tmp1385 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1384, p_target);
            cost1382 = $tmp1385;
            if (((panda$core$Bit) { cost1382.nonnull }).value) {
            {
                panda$core$Int64 $tmp1386 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1382.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1386, true });
            }
            }
        }
        goto $l1370;
        $l1371:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1388 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1387 = $tmp1388.value;
    if (!$tmp1387) goto $l1389;
    panda$core$Bit $tmp1390 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1387 = $tmp1390.value;
    $l1389:;
    panda$core$Bit $tmp1391 = { $tmp1387 };
    if ($tmp1391.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1393 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1392 = $tmp1393.value;
    if (!$tmp1392) goto $l1394;
    panda$core$Bit $tmp1395 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1392 = $tmp1395.value;
    $l1394:;
    panda$core$Bit $tmp1396 = { $tmp1392 };
    if ($tmp1396.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1398 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1397 = $tmp1398.value;
    if (!$tmp1397) goto $l1399;
    panda$core$Bit $tmp1400 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1397 = $tmp1400.value;
    $l1399:;
    panda$core$Bit $tmp1401 = { $tmp1397 };
    if ($tmp1401.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1402 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1402.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1403 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1403.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1404 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1404.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1407;
    panda$core$Int64$nullable cost11480;
    panda$core$Int64$nullable cost21484;
    panda$core$Int64 cost1492;
    panda$core$Int64$nullable cost11506;
    panda$core$Int64$nullable cost21510;
    panda$core$Int64$nullable cost31515;
    org$pandalanguage$pandac$ClassDecl* targetClass1525;
    panda$collections$Iterator* m$Iter1527;
    org$pandalanguage$pandac$MethodDecl* m1539;
    panda$core$Int64$nullable cost1548;
    panda$core$Bit $tmp1405 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1405.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1406.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1408 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1409 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1408));
            cost1407 = $tmp1409;
            if (((panda$core$Bit) { !cost1407.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1410.value) {
            {
                return cost1407;
            }
            }
            panda$core$Int64 $tmp1411 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1407.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1411, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1412 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1412;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1413.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1414 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1414.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1415 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1416 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1415, p_target);
                return $tmp1416;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1418 = $tmp1419.value;
            if (!$tmp1418) goto $l1420;
            panda$core$Int64 $tmp1421 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1422 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1421);
            panda$core$Int64 $tmp1423 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1424 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1422, $tmp1423);
            $tmp1418 = $tmp1424.value;
            $l1420:;
            panda$core$Bit $tmp1425 = { $tmp1418 };
            bool $tmp1417 = $tmp1425.value;
            if ($tmp1417) goto $l1426;
            panda$core$Bit $tmp1428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1427 = $tmp1428.value;
            if (!$tmp1427) goto $l1429;
            panda$core$Int64 $tmp1430 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1431 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1432 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1430, $tmp1431);
            $tmp1427 = $tmp1432.value;
            $l1429:;
            panda$core$Bit $tmp1433 = { $tmp1427 };
            $tmp1417 = $tmp1433.value;
            $l1426:;
            panda$core$Bit $tmp1434 = { $tmp1417 };
            if ($tmp1434.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1435 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1435);
            if ($tmp1436.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1437 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1438 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1437, p_target);
                return $tmp1438;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1440 = $tmp1441.value;
            if (!$tmp1440) goto $l1442;
            panda$core$Int64 $tmp1443 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1444 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1443);
            panda$core$Int64 $tmp1445 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1444);
            panda$core$Int64 $tmp1446 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1447 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1445, $tmp1446);
            $tmp1440 = $tmp1447.value;
            $l1442:;
            panda$core$Bit $tmp1448 = { $tmp1440 };
            bool $tmp1439 = $tmp1448.value;
            if ($tmp1439) goto $l1449;
            panda$core$Bit $tmp1451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1450 = $tmp1451.value;
            if (!$tmp1450) goto $l1452;
            panda$core$Int64 $tmp1453 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1454 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1453);
            panda$core$Int64 $tmp1455 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1454);
            panda$core$Int64 $tmp1456 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1457 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1455, $tmp1456);
            $tmp1450 = $tmp1457.value;
            $l1452:;
            panda$core$Bit $tmp1458 = { $tmp1450 };
            $tmp1439 = $tmp1458.value;
            $l1449:;
            panda$core$Bit $tmp1459 = { $tmp1439 };
            if ($tmp1459.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1460 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1461 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1460);
            if ($tmp1461.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1462 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1463 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1462, p_target);
                return $tmp1463;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1464 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1464.value) {
            {
                panda$core$Int64 $tmp1465 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1466 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1465, ((panda$core$Int64) { 2 }));
                if ($tmp1466.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1468 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1468)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1467 = $tmp1469.value;
                if (!$tmp1467) goto $l1470;
                panda$core$Object* $tmp1471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1471)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1467 = $tmp1472.value;
                $l1470:;
                panda$core$Bit $tmp1473 = { $tmp1467 };
                if ($tmp1473.value) {
                {
                    panda$core$Object* $tmp1474 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1474)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1475.value) {
                    {
                        panda$core$Object* $tmp1476 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1477 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1476)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1478 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1477));
                        if ($tmp1478.value) {
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
                panda$core$Bit $tmp1479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1479.value);
                panda$core$Object* $tmp1481 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1483 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1481), ((org$pandalanguage$pandac$Type*) $tmp1482));
                cost11480 = $tmp1483;
                if (((panda$core$Bit) { !cost11480.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1485 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1486 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1487 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1485), ((org$pandalanguage$pandac$Type*) $tmp1486));
                cost21484 = $tmp1487;
                if (((panda$core$Bit) { !cost21484.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1488 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11480.value), ((panda$core$Int64) cost21484.value));
                return ((panda$core$Int64$nullable) { $tmp1488, true });
            }
            }
            panda$core$Bit $tmp1489 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1489.value) {
            {
                panda$core$Int64 $tmp1490 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1491 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1490, ((panda$core$Int64) { 3 }));
                if ($tmp1491.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1494)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1493 = $tmp1495.value;
                if (!$tmp1493) goto $l1496;
                panda$core$Object* $tmp1497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1497)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1493 = $tmp1498.value;
                $l1496:;
                panda$core$Bit $tmp1499 = { $tmp1493 };
                if ($tmp1499.value) {
                {
                    panda$core$Object* $tmp1500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1500)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1501.value) {
                    {
                        panda$core$Object* $tmp1502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1502)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1504 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1503));
                        if ($tmp1504.value) {
                        {
                            cost1492 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1492 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1505.value);
                    panda$core$Object* $tmp1507 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1508 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1509 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1507), ((org$pandalanguage$pandac$Type*) $tmp1508));
                    cost11506 = $tmp1509;
                    if (((panda$core$Bit) { !cost11506.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1511 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1513 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1511), ((org$pandalanguage$pandac$Type*) $tmp1512));
                    cost21510 = $tmp1513;
                    if (((panda$core$Bit) { !cost21510.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1514 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11506.value), ((panda$core$Int64) cost21510.value));
                    cost1492 = $tmp1514;
                }
                }
                panda$core$Object* $tmp1516 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1517 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1518 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1516), ((org$pandalanguage$pandac$Type*) $tmp1517));
                cost31515 = $tmp1518;
                if (((panda$core$Bit) { !cost31515.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1519 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(cost1492, ((panda$core$Int64) cost31515.value));
                return ((panda$core$Int64$nullable) { $tmp1519, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1520 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1521 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1520, p_target);
            return $tmp1521;
        }
        break;
        case 1040:
        {
            panda$core$Int64$nullable $tmp1522 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1522;
        }
        break;
    }
    panda$core$Bit $tmp1523 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1524 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1523);
    if ($tmp1524.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1526 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1525 = $tmp1526;
    if (((panda$core$Bit) { targetClass1525 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1528 = ((panda$collections$Iterable*) targetClass1525->methods)->$class->itable;
        while ($tmp1528->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1528 = $tmp1528->next;
        }
        $fn1530 $tmp1529 = $tmp1528->methods[0];
        panda$collections$Iterator* $tmp1531 = $tmp1529(((panda$collections$Iterable*) targetClass1525->methods));
        m$Iter1527 = $tmp1531;
        $l1532:;
        ITable* $tmp1534 = m$Iter1527->$class->itable;
        while ($tmp1534->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1534 = $tmp1534->next;
        }
        $fn1536 $tmp1535 = $tmp1534->methods[0];
        panda$core$Bit $tmp1537 = $tmp1535(m$Iter1527);
        panda$core$Bit $tmp1538 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1537);
        if (!$tmp1538.value) goto $l1533;
        {
            ITable* $tmp1540 = m$Iter1527->$class->itable;
            while ($tmp1540->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1540 = $tmp1540->next;
            }
            $fn1542 $tmp1541 = $tmp1540->methods[1];
            panda$core$Object* $tmp1543 = $tmp1541(m$Iter1527);
            m1539 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1543);
            panda$core$Bit $tmp1544 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1539->annotations);
            if ($tmp1544.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1539);
                panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1539->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1545.value);
                panda$core$Int64 $tmp1546 = panda$collections$Array$get_count$R$panda$core$Int64(m1539->parameters);
                panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1546, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1547.value);
                panda$core$Object* $tmp1549 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1539->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1550 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1549)->type);
                cost1548 = $tmp1550;
                if (((panda$core$Bit) { cost1548.nonnull }).value) {
                {
                    return cost1548;
                }
                }
            }
            }
        }
        goto $l1532;
        $l1533:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1551 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1551;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1560;
    org$pandalanguage$pandac$IRNode* intermediate1565;
    org$pandalanguage$pandac$IRNode* coerced1593;
    org$pandalanguage$pandac$IRNode* coerced1614;
    org$pandalanguage$pandac$IRNode* varType1628;
    org$pandalanguage$pandac$Type* param1643;
    org$pandalanguage$pandac$IRNode* start1645;
    org$pandalanguage$pandac$IRNode* end1648;
    panda$collections$Array* args1651;
    org$pandalanguage$pandac$IRNode* target1657;
    org$pandalanguage$pandac$Type* endPoint1673;
    org$pandalanguage$pandac$IRNode* start1675;
    org$pandalanguage$pandac$IRNode* end1678;
    org$pandalanguage$pandac$IRNode* step1681;
    panda$collections$Array* args1685;
    org$pandalanguage$pandac$IRNode* target1691;
    panda$collections$ListView* methods1698;
    panda$collections$Array* args1700;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1701;
    panda$collections$Array* best1703;
    panda$core$Int64$nullable bestCost1706;
    panda$collections$Iterator* m$Iter1707;
    org$pandalanguage$pandac$MethodRef* m1719;
    panda$core$Int64$nullable cost1724;
    org$pandalanguage$pandac$IRNode* callTarget1730;
    org$pandalanguage$pandac$IRNode* result1736;
    panda$collections$Array* args1740;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1741;
    panda$collections$Array* children1753;
    org$pandalanguage$pandac$IRNode* intermediate1759;
    org$pandalanguage$pandac$ClassDecl* cl1764;
    panda$collections$Iterator* m$Iter1766;
    org$pandalanguage$pandac$MethodDecl* m1778;
    org$pandalanguage$pandac$IRNode* type1789;
    panda$collections$Array* args1794;
    panda$collections$Array* children1798;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1552 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1552.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1553 = $tmp1554.value;
    if (!$tmp1553) goto $l1555;
    panda$core$Bit $tmp1556 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1553 = $tmp1556.value;
    $l1555:;
    panda$core$Bit $tmp1557 = { $tmp1553 };
    if ($tmp1557.value) {
    {
        panda$core$Object* $tmp1558 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1559 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1558), p_target);
        if ($tmp1559.value) {
        {
            panda$collections$Array* $tmp1561 = (panda$collections$Array*) malloc(40);
            $tmp1561->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1561->refCount.value = 1;
            panda$collections$Array$init($tmp1561);
            children1560 = $tmp1561;
            panda$collections$Array$add$panda$collections$Array$T(children1560, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1563 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1563->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1563->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1563, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1560));
            return $tmp1563;
        }
        }
        panda$core$Object* $tmp1566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1567 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1566));
        intermediate1565 = $tmp1567;
        org$pandalanguage$pandac$IRNode* $tmp1568 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1565, p_target);
        return $tmp1568;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1569 = $tmp1570.value;
            if (!$tmp1569) goto $l1571;
            panda$core$Int64 $tmp1572 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1573 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1574 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1572, $tmp1573);
            $tmp1569 = $tmp1574.value;
            $l1571:;
            panda$core$Bit $tmp1575 = { $tmp1569 };
            if ($tmp1575.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1576 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1576->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1576->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1576, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1576;
            }
            }
            else {
            panda$core$Bit $tmp1579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1578 = $tmp1579.value;
            if (!$tmp1578) goto $l1580;
            panda$core$Int64 $tmp1581 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1582 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1583 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1581, $tmp1582);
            $tmp1578 = $tmp1583.value;
            $l1580:;
            panda$core$Bit $tmp1584 = { $tmp1578 };
            if ($tmp1584.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1585 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1585->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1585->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1585, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1585;
            }
            }
            }
            panda$core$Bit $tmp1588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1587 = $tmp1588.value;
            if (!$tmp1587) goto $l1589;
            panda$core$Bit $tmp1590 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1591 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1590);
            $tmp1587 = $tmp1591.value;
            $l1589:;
            panda$core$Bit $tmp1592 = { $tmp1587 };
            if ($tmp1592.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1594 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1595 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1594);
                coerced1593 = $tmp1595;
                if (((panda$core$Bit) { coerced1593 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1596 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1593, p_target);
                return $tmp1596;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1597 = $tmp1598.value;
            if (!$tmp1597) goto $l1599;
            panda$core$Int64 $tmp1600 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1601 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1600);
            panda$core$Int64 $tmp1602 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1601);
            panda$core$Int64 $tmp1603 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1604 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1602, $tmp1603);
            $tmp1597 = $tmp1604.value;
            $l1599:;
            panda$core$Bit $tmp1605 = { $tmp1597 };
            if ($tmp1605.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1606 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1606->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1606->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1606, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1606;
            }
            }
            panda$core$Bit $tmp1609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1608 = $tmp1609.value;
            if (!$tmp1608) goto $l1610;
            panda$core$Bit $tmp1611 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1612 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1611);
            $tmp1608 = $tmp1612.value;
            $l1610:;
            panda$core$Bit $tmp1613 = { $tmp1608 };
            if ($tmp1613.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1615 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1616 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1615);
                coerced1614 = $tmp1616;
                if (((panda$core$Bit) { coerced1614 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1617 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1614, p_target);
                return $tmp1617;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1618 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1619 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1618);
            if ($tmp1619.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1620 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1620->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1620->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1620, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1620;
            }
            }
            panda$core$Bit $tmp1623 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1622 = $tmp1623.value;
            if (!$tmp1622) goto $l1624;
            org$pandalanguage$pandac$Type* $tmp1625 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1626 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1625);
            $tmp1622 = $tmp1626.value;
            $l1624:;
            panda$core$Bit $tmp1627 = { $tmp1622 };
            if ($tmp1627.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1629 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1630 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1629);
                varType1628 = $tmp1630;
                if (((panda$core$Bit) { varType1628 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1631 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1628, p_target);
                    return $tmp1631;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1632 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1632.value) {
            {
                panda$core$Int64 $tmp1633 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1634 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1633, ((panda$core$Int64) { 2 }));
                if ($tmp1634.value) {
                {
                    panda$core$String* $tmp1636 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1635, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1636, &$s1637);
                    panda$core$String* $tmp1639 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1638, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1639, &$s1640);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1641);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1642.value);
                panda$core$Object* $tmp1644 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1643 = ((org$pandalanguage$pandac$Type*) $tmp1644);
                panda$core$Object* $tmp1646 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1647 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1646), param1643);
                start1645 = $tmp1647;
                if (((panda$core$Bit) { start1645 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1650 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1649), param1643);
                end1648 = $tmp1650;
                if (((panda$core$Bit) { end1648 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1652 = (panda$collections$Array*) malloc(40);
                $tmp1652->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1652->refCount.value = 1;
                panda$collections$Array$init($tmp1652);
                args1651 = $tmp1652;
                panda$collections$Array$add$panda$collections$Array$T(args1651, ((panda$core$Object*) start1645));
                panda$collections$Array$add$panda$collections$Array$T(args1651, ((panda$core$Object*) end1648));
                org$pandalanguage$pandac$IRNode* $tmp1654 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1654->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1654->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1656 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1654, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1656, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1651, ((panda$core$Object*) $tmp1654));
                org$pandalanguage$pandac$IRNode* $tmp1658 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1658->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1658->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1660 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1658, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1660, p_target);
                target1657 = $tmp1658;
                org$pandalanguage$pandac$IRNode* $tmp1661 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1657, ((panda$collections$ListView*) args1651));
                return $tmp1661;
            }
            }
            else {
            panda$core$Bit $tmp1662 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1662.value) {
            {
                panda$core$Int64 $tmp1663 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1664 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1663, ((panda$core$Int64) { 3 }));
                if ($tmp1664.value) {
                {
                    panda$core$String* $tmp1666 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1665, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1666, &$s1667);
                    panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1668, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1669, &$s1670);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1671);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1672.value);
                panda$core$Object* $tmp1674 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1673 = ((org$pandalanguage$pandac$Type*) $tmp1674);
                panda$core$Object* $tmp1676 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1677 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1676), endPoint1673);
                start1675 = $tmp1677;
                if (((panda$core$Bit) { start1675 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1679 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1680 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1679), endPoint1673);
                end1678 = $tmp1680;
                panda$core$Object* $tmp1682 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1683 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1684 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1682), ((org$pandalanguage$pandac$Type*) $tmp1683));
                step1681 = $tmp1684;
                panda$collections$Array* $tmp1686 = (panda$collections$Array*) malloc(40);
                $tmp1686->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1686->refCount.value = 1;
                panda$collections$Array$init($tmp1686);
                args1685 = $tmp1686;
                panda$collections$Array$add$panda$collections$Array$T(args1685, ((panda$core$Object*) start1675));
                panda$collections$Array$add$panda$collections$Array$T(args1685, ((panda$core$Object*) end1678));
                panda$collections$Array$add$panda$collections$Array$T(args1685, ((panda$core$Object*) step1681));
                org$pandalanguage$pandac$IRNode* $tmp1688 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1688->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1688->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1690 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1688, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1690, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1685, ((panda$core$Object*) $tmp1688));
                org$pandalanguage$pandac$IRNode* $tmp1692 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1692->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1692->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1694 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1692, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1694, p_target);
                target1691 = $tmp1692;
                org$pandalanguage$pandac$IRNode* $tmp1695 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1691, ((panda$collections$ListView*) args1685));
                return $tmp1695;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1696 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1697 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1696, p_target);
                return $tmp1697;
            }
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1699 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1698 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1699)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1701, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1702 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1701);
            args1700 = $tmp1702;
            panda$collections$Array* $tmp1704 = (panda$collections$Array*) malloc(40);
            $tmp1704->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1704->refCount.value = 1;
            panda$collections$Array$init($tmp1704);
            best1703 = $tmp1704;
            bestCost1706 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1708 = ((panda$collections$Iterable*) methods1698)->$class->itable;
                while ($tmp1708->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1708 = $tmp1708->next;
                }
                $fn1710 $tmp1709 = $tmp1708->methods[0];
                panda$collections$Iterator* $tmp1711 = $tmp1709(((panda$collections$Iterable*) methods1698));
                m$Iter1707 = $tmp1711;
                $l1712:;
                ITable* $tmp1714 = m$Iter1707->$class->itable;
                while ($tmp1714->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1714 = $tmp1714->next;
                }
                $fn1716 $tmp1715 = $tmp1714->methods[0];
                panda$core$Bit $tmp1717 = $tmp1715(m$Iter1707);
                panda$core$Bit $tmp1718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1717);
                if (!$tmp1718.value) goto $l1713;
                {
                    ITable* $tmp1720 = m$Iter1707->$class->itable;
                    while ($tmp1720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1720 = $tmp1720->next;
                    }
                    $fn1722 $tmp1721 = $tmp1720->methods[1];
                    panda$core$Object* $tmp1723 = $tmp1721(m$Iter1707);
                    m1719 = ((org$pandalanguage$pandac$MethodRef*) $tmp1723);
                    panda$core$Int64$nullable $tmp1725 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1719, ((panda$collections$ListView*) args1700), p_target);
                    cost1724 = $tmp1725;
                    if (((panda$core$Bit) { !cost1724.nonnull }).value) {
                    {
                        goto $l1712;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1706.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1703, ((panda$core$Object*) m1719));
                        bestCost1706 = cost1724;
                        goto $l1712;
                    }
                    }
                    panda$core$Bit $tmp1726 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1724.value), ((panda$core$Int64) bestCost1706.value));
                    if ($tmp1726.value) {
                    {
                        panda$collections$Array$clear(best1703);
                        bestCost1706 = cost1724;
                    }
                    }
                    panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1724.value), ((panda$core$Int64) bestCost1706.value));
                    if ($tmp1727.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1703, ((panda$core$Object*) m1719));
                    }
                    }
                }
                goto $l1712;
                $l1713:;
            }
            panda$core$Int64 $tmp1728 = panda$collections$Array$get_count$R$panda$core$Int64(best1703);
            panda$core$Bit $tmp1729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1728, ((panda$core$Int64) { 1 }));
            if ($tmp1729.value) {
            {
                panda$core$Object* $tmp1731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1732 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1731)->children);
                panda$core$Bit $tmp1733 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1732, ((panda$core$Int64) { 0 }));
                if ($tmp1733.value) {
                {
                    panda$core$Object* $tmp1734 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1735 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1734)->children, ((panda$core$Int64) { 0 }));
                    callTarget1730 = ((org$pandalanguage$pandac$IRNode*) $tmp1735);
                }
                }
                else {
                {
                    callTarget1730 = NULL;
                }
                }
                panda$core$Object* $tmp1737 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1703, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1738 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget1730, ((org$pandalanguage$pandac$MethodRef*) $tmp1737), ((panda$collections$ListView*) args1700));
                result1736 = $tmp1738;
                org$pandalanguage$pandac$IRNode* $tmp1739 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1736, p_target);
                return $tmp1739;
            }
            }
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1741, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1742 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1741);
            args1740 = $tmp1742;
            panda$core$Object* $tmp1743 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1745 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1743), &$s1744, ((panda$collections$ListView*) args1740), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1746 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1745, p_target);
            return $tmp1746;
        }
        break;
    }
    panda$core$Bit $tmp1747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1747.value) {
    {
        panda$core$Bit $tmp1748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1748.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1749 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1749->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1749->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1749, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1749;
        }
        }
        panda$core$Object* $tmp1751 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1752 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1751));
        if ($tmp1752.value) {
        {
            panda$collections$Array* $tmp1754 = (panda$collections$Array*) malloc(40);
            $tmp1754->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1754->refCount.value = 1;
            panda$collections$Array$init($tmp1754);
            children1753 = $tmp1754;
            panda$collections$Array$add$panda$collections$Array$T(children1753, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1756 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1756->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1756->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1756, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1753));
            return $tmp1756;
        }
        }
        panda$core$Bit $tmp1758 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1758.value) {
        {
            panda$core$Object* $tmp1760 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1761 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1760));
            intermediate1759 = $tmp1761;
            org$pandalanguage$pandac$IRNode* $tmp1762 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1759, p_target);
            return $tmp1762;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1763 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1763.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1765 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1764 = $tmp1765;
        if (((panda$core$Bit) { cl1764 != NULL }).value) {
        {
            {
                ITable* $tmp1767 = ((panda$collections$Iterable*) cl1764->methods)->$class->itable;
                while ($tmp1767->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1767 = $tmp1767->next;
                }
                $fn1769 $tmp1768 = $tmp1767->methods[0];
                panda$collections$Iterator* $tmp1770 = $tmp1768(((panda$collections$Iterable*) cl1764->methods));
                m$Iter1766 = $tmp1770;
                $l1771:;
                ITable* $tmp1773 = m$Iter1766->$class->itable;
                while ($tmp1773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1773 = $tmp1773->next;
                }
                $fn1775 $tmp1774 = $tmp1773->methods[0];
                panda$core$Bit $tmp1776 = $tmp1774(m$Iter1766);
                panda$core$Bit $tmp1777 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1776);
                if (!$tmp1777.value) goto $l1772;
                {
                    ITable* $tmp1779 = m$Iter1766->$class->itable;
                    while ($tmp1779->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1779 = $tmp1779->next;
                    }
                    $fn1781 $tmp1780 = $tmp1779->methods[1];
                    panda$core$Object* $tmp1782 = $tmp1780(m$Iter1766);
                    m1778 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1782);
                    panda$core$Bit $tmp1783 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1778->annotations);
                    if ($tmp1783.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1778);
                        panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1778->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1784.value);
                        panda$core$Int64 $tmp1785 = panda$collections$Array$get_count$R$panda$core$Int64(m1778->parameters);
                        panda$core$Bit $tmp1786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1785, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1786.value);
                        panda$core$Object* $tmp1787 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1778->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1788 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1787)->type);
                        if (((panda$core$Bit) { $tmp1788.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1790 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1790->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1790->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1792 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1793 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1764);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1790, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1792, $tmp1793);
                            type1789 = $tmp1790;
                            panda$collections$Array* $tmp1795 = (panda$collections$Array*) malloc(40);
                            $tmp1795->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1795->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1795, ((panda$core$Int64) { 1 }));
                            args1794 = $tmp1795;
                            panda$collections$Array$add$panda$collections$Array$T(args1794, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1797 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1789, ((panda$collections$ListView*) args1794));
                            return $tmp1797;
                        }
                        }
                    }
                    }
                }
                goto $l1771;
                $l1772:;
            }
        }
        }
        panda$collections$Array* $tmp1799 = (panda$collections$Array*) malloc(40);
        $tmp1799->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1799->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1799, ((panda$core$Int64) { 1 }));
        children1798 = $tmp1799;
        panda$collections$Array$add$panda$collections$Array$T(children1798, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1801 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1801->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1801->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1801, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1798));
        return $tmp1801;
    }
    }
    panda$core$String* $tmp1804 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1803, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1804, &$s1805);
    panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1806, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1807, &$s1808);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1809);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1810;
    org$pandalanguage$pandac$IRNode* $tmp1811 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1810 = $tmp1811;
    bool $tmp1812 = ((panda$core$Bit) { result1810 == NULL }).value;
    if ($tmp1812) goto $l1813;
    panda$core$Bit $tmp1814 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1810->type, p_target);
    $tmp1812 = $tmp1814.value;
    $l1813:;
    panda$core$Bit $tmp1815 = { $tmp1812 };
    PANDA_ASSERT($tmp1815.value);
    return result1810;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1817 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1816 = $tmp1817.value;
    if (!$tmp1816) goto $l1818;
    panda$core$Bit $tmp1819 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1816 = $tmp1819.value;
    $l1818:;
    panda$core$Bit $tmp1820 = { $tmp1816 };
    if ($tmp1820.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1821 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1821.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1823 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1822 = $tmp1823.value;
    if (!$tmp1822) goto $l1824;
    panda$core$Bit $tmp1825 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1822 = $tmp1825.value;
    $l1824:;
    panda$core$Bit $tmp1826 = { $tmp1822 };
    if ($tmp1826.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1827.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1828 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1828.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1830;
    org$pandalanguage$pandac$IRNode* resolved1837;
    panda$core$Int64$nullable $tmp1829 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1829.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1831 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1830 = $tmp1831;
    panda$core$Bit $tmp1833 = panda$core$Bit$$NOT$R$panda$core$Bit(result1830);
    bool $tmp1832 = $tmp1833.value;
    if (!$tmp1832) goto $l1834;
    panda$core$Bit $tmp1835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1832 = $tmp1835.value;
    $l1834:;
    panda$core$Bit $tmp1836 = { $tmp1832 };
    if ($tmp1836.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1838 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1837 = $tmp1838;
        if (((panda$core$Bit) { resolved1837 != NULL }).value) {
        {
            panda$core$Bit $tmp1839 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1837, p_target);
            result1830 = $tmp1839;
        }
        }
    }
    }
    return result1830;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1860;
    panda$collections$Array* children1863;
    panda$core$Bit $tmp1840 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1840.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1841 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1842 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1841);
    PANDA_ASSERT($tmp1842.value);
    bool $tmp1843 = p_isExplicit.value;
    if (!$tmp1843) goto $l1844;
    panda$core$Bit $tmp1845 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1846 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1845);
    $tmp1843 = $tmp1846.value;
    $l1844:;
    panda$core$Bit $tmp1847 = { $tmp1843 };
    if ($tmp1847.value) {
    {
        panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1848, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, &$s1850);
        panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1852, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, &$s1854);
        panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1851, $tmp1855);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1856);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1857 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1857;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1858 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1858.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1859 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1859;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1861 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1860 = $tmp1861;
            if (((panda$core$Bit) { resolved1860 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1862 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1860, p_position, p_isExplicit, p_target);
                return $tmp1862;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1864 = (panda$collections$Array*) malloc(40);
    $tmp1864->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1864->refCount.value = 1;
    panda$collections$Array$init($tmp1864);
    children1863 = $tmp1864;
    panda$collections$Array$add$panda$collections$Array$T(children1863, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1866 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1866->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1866->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1866, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1863));
    return $tmp1866;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1874;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1875;
    panda$core$Int64$nullable cost1890;
    panda$core$Int64$nullable cost1904;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1868 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1869 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1869->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1869 = $tmp1869->next;
    }
    $fn1871 $tmp1870 = $tmp1869->methods[0];
    panda$core$Int64 $tmp1872 = $tmp1870(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1873 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1868, $tmp1872);
    if ($tmp1873.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1874 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1876 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1875, ((panda$core$Int64) { 0 }), $tmp1876, ((panda$core$Bit) { false }));
    int64_t $tmp1878 = $tmp1875.min.value;
    panda$core$Int64 i1877 = { $tmp1878 };
    int64_t $tmp1880 = $tmp1875.max.value;
    bool $tmp1881 = $tmp1875.inclusive.value;
    if ($tmp1881) goto $l1888; else goto $l1889;
    $l1888:;
    if ($tmp1878 <= $tmp1880) goto $l1882; else goto $l1884;
    $l1889:;
    if ($tmp1878 < $tmp1880) goto $l1882; else goto $l1884;
    $l1882:;
    {
        ITable* $tmp1891 = p_args->$class->itable;
        while ($tmp1891->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1891 = $tmp1891->next;
        }
        $fn1893 $tmp1892 = $tmp1891->methods[0];
        panda$core$Object* $tmp1894 = $tmp1892(p_args, i1877);
        org$pandalanguage$pandac$Type* $tmp1895 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1877);
        panda$core$Int64$nullable $tmp1896 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1894), $tmp1895);
        cost1890 = $tmp1896;
        if (((panda$core$Bit) { !cost1890.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1897 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1874, ((panda$core$Int64) cost1890.value));
        result1874 = $tmp1897;
    }
    $l1885:;
    int64_t $tmp1899 = $tmp1880 - i1877.value;
    if ($tmp1881) goto $l1900; else goto $l1901;
    $l1900:;
    if ($tmp1899 >= 1) goto $l1898; else goto $l1884;
    $l1901:;
    if ($tmp1899 > 1) goto $l1898; else goto $l1884;
    $l1898:;
    i1877.value += 1;
    goto $l1882;
    $l1884:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1905 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1906 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1905, p_expectedReturn);
        cost1904 = $tmp1906;
        if (((panda$core$Bit) { !cost1904.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1907 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1874, ((panda$core$Int64) cost1904.value));
        result1874 = $tmp1907;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1910 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1911 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1910);
    bool $tmp1909 = $tmp1911.value;
    if (!$tmp1909) goto $l1912;
    ITable* $tmp1913 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1913->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1913 = $tmp1913->next;
    }
    $fn1915 $tmp1914 = $tmp1913->methods[0];
    panda$core$Int64 $tmp1916 = $tmp1914(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1916, ((panda$core$Int64) { 1 }));
    $tmp1909 = $tmp1917.value;
    $l1912:;
    panda$core$Bit $tmp1918 = { $tmp1909 };
    bool $tmp1908 = $tmp1918.value;
    if (!$tmp1908) goto $l1919;
    panda$core$Object* $tmp1920 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1921 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1922 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1920)->type, $tmp1921);
    $tmp1908 = $tmp1922.value;
    $l1919:;
    panda$core$Bit $tmp1923 = { $tmp1908 };
    if ($tmp1923.value) {
    {
        panda$core$Int64 $tmp1924 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1874, ((panda$core$Int64) { 1 }));
        result1874 = $tmp1924;
    }
    }
    return ((panda$core$Int64$nullable) { result1874, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1925;
    panda$core$Int64$nullable best1928;
    panda$collections$Iterator* m$Iter1929;
    org$pandalanguage$pandac$MethodRef* m1941;
    panda$core$Int64$nullable cost1946;
    panda$collections$Array* $tmp1926 = (panda$collections$Array*) malloc(40);
    $tmp1926->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1926->refCount.value = 1;
    panda$collections$Array$init($tmp1926);
    result1925 = $tmp1926;
    best1928 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1930 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1930->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1930 = $tmp1930->next;
        }
        $fn1932 $tmp1931 = $tmp1930->methods[0];
        panda$collections$Iterator* $tmp1933 = $tmp1931(((panda$collections$Iterable*) p_methods));
        m$Iter1929 = $tmp1933;
        $l1934:;
        ITable* $tmp1936 = m$Iter1929->$class->itable;
        while ($tmp1936->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1936 = $tmp1936->next;
        }
        $fn1938 $tmp1937 = $tmp1936->methods[0];
        panda$core$Bit $tmp1939 = $tmp1937(m$Iter1929);
        panda$core$Bit $tmp1940 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1939);
        if (!$tmp1940.value) goto $l1935;
        {
            ITable* $tmp1942 = m$Iter1929->$class->itable;
            while ($tmp1942->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1942 = $tmp1942->next;
            }
            $fn1944 $tmp1943 = $tmp1942->methods[1];
            panda$core$Object* $tmp1945 = $tmp1943(m$Iter1929);
            m1941 = ((org$pandalanguage$pandac$MethodRef*) $tmp1945);
            panda$core$Int64$nullable $tmp1947 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1941, p_args, p_expectedReturn);
            cost1946 = $tmp1947;
            if (((panda$core$Bit) { !cost1946.nonnull }).value) {
            {
                goto $l1934;
            }
            }
            bool $tmp1948 = ((panda$core$Bit) { !best1928.nonnull }).value;
            if ($tmp1948) goto $l1949;
            panda$core$Bit $tmp1950 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1946.value), ((panda$core$Int64) best1928.value));
            $tmp1948 = $tmp1950.value;
            $l1949:;
            panda$core$Bit $tmp1951 = { $tmp1948 };
            if ($tmp1951.value) {
            {
                panda$collections$Array$clear(result1925);
                best1928 = cost1946;
            }
            }
            panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1946.value), ((panda$core$Int64) best1928.value));
            if ($tmp1952.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1925, ((panda$core$Object*) m1941));
            }
            }
        }
        goto $l1934;
        $l1935:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1925));
    return best1928;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s1959;
    panda$collections$Array* finalArgs1984;
    org$pandalanguage$pandac$IRNode* selfNode2020;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2049;
    org$pandalanguage$pandac$IRNode* coerced2067;
    org$pandalanguage$pandac$IRNode* result2082;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1953 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1954 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1954->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1954 = $tmp1954->next;
    }
    $fn1956 $tmp1955 = $tmp1954->methods[0];
    panda$core$Int64 $tmp1957 = $tmp1955(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1958 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1953, $tmp1957);
    if ($tmp1958.value) {
    {
        panda$core$Int64 $tmp1960 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp1961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1960, ((panda$core$Int64) { 1 }));
        if ($tmp1961.value) {
        {
            s1959 = &$s1962;
        }
        }
        else {
        {
            s1959 = &$s1963;
        }
        }
        panda$core$String* $tmp1964 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp1965 = panda$core$String$convert$R$panda$core$String($tmp1964);
        panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1965, &$s1966);
        panda$core$Int64 $tmp1968 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1967, ((panda$core$Object*) wrap_panda$core$Int64($tmp1968)));
        panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1969, &$s1970);
        panda$core$String* $tmp1972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1971, s1959);
        panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1972, &$s1973);
        ITable* $tmp1976 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp1976->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1976 = $tmp1976->next;
        }
        $fn1978 $tmp1977 = $tmp1976->methods[0];
        panda$core$Int64 $tmp1979 = $tmp1977(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1975, ((panda$core$Object*) wrap_panda$core$Int64($tmp1979)));
        panda$core$String* $tmp1982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1980, &$s1981);
        panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, $tmp1982);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1983);
        return NULL;
    }
    }
    panda$collections$Array* $tmp1985 = (panda$collections$Array*) malloc(40);
    $tmp1985->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1985->refCount.value = 1;
    panda$collections$Array$init($tmp1985);
    finalArgs1984 = $tmp1985;
    bool $tmp1988 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1988) goto $l1989;
    panda$core$Bit $tmp1990 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1988 = $tmp1990.value;
    $l1989:;
    panda$core$Bit $tmp1991 = { $tmp1988 };
    bool $tmp1987 = $tmp1991.value;
    if (!$tmp1987) goto $l1992;
    panda$core$Bit $tmp1993 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp1994 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1993);
    $tmp1987 = $tmp1994.value;
    $l1992:;
    panda$core$Bit $tmp1995 = { $tmp1987 };
    if ($tmp1995.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1996 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp1997 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp1996);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1984, ((panda$core$Object*) $tmp1997));
    }
    }
    panda$core$Bit $tmp1998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp1998.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp1999 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp1999)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2000.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2001 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2001->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2001->refCount.value = 1;
                panda$core$Object* $tmp2003 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2004 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2003));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2001, ((panda$core$Int64) { 1025 }), p_position, $tmp2004);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1984, ((panda$core$Object*) $tmp2001));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2005);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2008 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2007 = $tmp2008.value;
        if (!$tmp2007) goto $l2009;
        panda$core$Bit $tmp2010 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2007 = $tmp2010.value;
        $l2009:;
        panda$core$Bit $tmp2011 = { $tmp2007 };
        bool $tmp2006 = $tmp2011.value;
        if (!$tmp2006) goto $l2012;
        panda$core$Bit $tmp2013 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2006 = $tmp2013.value;
        $l2012:;
        panda$core$Bit $tmp2014 = { $tmp2006 };
        if ($tmp2014.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2015);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2017 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2016 = $tmp2017.value;
    if (!$tmp2016) goto $l2018;
    $tmp2016 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2018:;
    panda$core$Bit $tmp2019 = { $tmp2016 };
    if ($tmp2019.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2021 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2021->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2021->refCount.value = 1;
        panda$core$Object* $tmp2023 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2024 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2023));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2021, ((panda$core$Int64) { 1025 }), p_position, $tmp2024);
        selfNode2020 = $tmp2021;
        org$pandalanguage$pandac$Type* $tmp2025 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2026 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2020, $tmp2025);
        selfNode2020 = $tmp2026;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2020 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1984, ((panda$core$Object*) selfNode2020));
        panda$core$Object* $tmp2027 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2028 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2027));
        panda$core$Bit $tmp2029 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2028);
        if ($tmp2029.value) {
        {
            panda$core$String* $tmp2031 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2030, $tmp2031);
            panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2032, &$s2033);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2034);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2037 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2038 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2037);
    bool $tmp2036 = $tmp2038.value;
    if (!$tmp2036) goto $l2039;
    $tmp2036 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2039:;
    panda$core$Bit $tmp2040 = { $tmp2036 };
    bool $tmp2035 = $tmp2040.value;
    if (!$tmp2035) goto $l2041;
    panda$core$Bit $tmp2042 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2035 = $tmp2042.value;
    $l2041:;
    panda$core$Bit $tmp2043 = { $tmp2035 };
    if ($tmp2043.value) {
    {
        panda$core$String* $tmp2045 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2044, $tmp2045);
        panda$core$String* $tmp2048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2046, &$s2047);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2048);
    }
    }
    }
    }
    ITable* $tmp2050 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2050->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2050 = $tmp2050->next;
    }
    $fn2052 $tmp2051 = $tmp2050->methods[0];
    panda$core$Int64 $tmp2053 = $tmp2051(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2049, ((panda$core$Int64) { 0 }), $tmp2053, ((panda$core$Bit) { false }));
    int64_t $tmp2055 = $tmp2049.min.value;
    panda$core$Int64 i2054 = { $tmp2055 };
    int64_t $tmp2057 = $tmp2049.max.value;
    bool $tmp2058 = $tmp2049.inclusive.value;
    if ($tmp2058) goto $l2065; else goto $l2066;
    $l2065:;
    if ($tmp2055 <= $tmp2057) goto $l2059; else goto $l2061;
    $l2066:;
    if ($tmp2055 < $tmp2057) goto $l2059; else goto $l2061;
    $l2059:;
    {
        ITable* $tmp2068 = p_args->$class->itable;
        while ($tmp2068->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2068 = $tmp2068->next;
        }
        $fn2070 $tmp2069 = $tmp2068->methods[0];
        panda$core$Object* $tmp2071 = $tmp2069(p_args, i2054);
        org$pandalanguage$pandac$Type* $tmp2072 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2054);
        org$pandalanguage$pandac$IRNode* $tmp2073 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2071), $tmp2072);
        coerced2067 = $tmp2073;
        if (((panda$core$Bit) { coerced2067 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2074 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2054);
        org$pandalanguage$pandac$IRNode* $tmp2075 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2067, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2074)->type);
        coerced2067 = $tmp2075;
        if (((panda$core$Bit) { coerced2067 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1984, ((panda$core$Object*) coerced2067));
    }
    $l2062:;
    int64_t $tmp2077 = $tmp2057 - i2054.value;
    if ($tmp2058) goto $l2078; else goto $l2079;
    $l2078:;
    if ($tmp2077 >= 1) goto $l2076; else goto $l2061;
    $l2079:;
    if ($tmp2077 > 1) goto $l2076; else goto $l2061;
    $l2076:;
    i2054.value += 1;
    goto $l2059;
    $l2061:;
    panda$core$Bit $tmp2084 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2083);
    if ($tmp2084.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2085 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2085->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2085->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2087 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2085, ((panda$core$Int64) { 1005 }), p_position, $tmp2087, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1984));
        result2082 = $tmp2085;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2088 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2088->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2088->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2088, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1984));
        result2082 = $tmp2088;
        org$pandalanguage$pandac$Type* $tmp2090 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2091 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2082, p_position, ((panda$core$Bit) { false }), $tmp2090);
        result2082 = $tmp2091;
    }
    }
    return result2082;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2092 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2092;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2093;
    org$pandalanguage$pandac$ClassDecl* cl2095;
    org$pandalanguage$pandac$Symbol* s2099;
    org$pandalanguage$pandac$IRNode* ref2121;
    org$pandalanguage$pandac$IRNode* $tmp2094 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2093 = $tmp2094;
    if (((panda$core$Bit) { resolved2093 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2093->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2096.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2097 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2093->payload));
        cl2095 = $tmp2097;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2098 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2093->type);
        cl2095 = $tmp2098;
    }
    }
    if (((panda$core$Bit) { cl2095 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2100 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2095);
    org$pandalanguage$pandac$Symbol* $tmp2101 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2100, p_name);
    s2099 = $tmp2101;
    if (((panda$core$Bit) { s2099 == NULL }).value) {
    {
        panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2102, ((org$pandalanguage$pandac$Symbol*) cl2095)->name);
        panda$core$String* $tmp2105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2103, &$s2104);
        panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2105, p_name);
        panda$core$String* $tmp2108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2106, &$s2107);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2108);
        return NULL;
    }
    }
    panda$core$Bit $tmp2110 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2099->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2109 = $tmp2110.value;
    if (!$tmp2109) goto $l2111;
    panda$core$Bit $tmp2112 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2099->kind, ((panda$core$Int64) { 205 }));
    $tmp2109 = $tmp2112.value;
    $l2111:;
    panda$core$Bit $tmp2113 = { $tmp2109 };
    if ($tmp2113.value) {
    {
        panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2114, ((org$pandalanguage$pandac$Symbol*) cl2095)->name);
        panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2116);
        panda$core$String* $tmp2118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, p_name);
        panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2118, &$s2119);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2120);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2122 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2095);
    org$pandalanguage$pandac$IRNode* $tmp2123 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2099, $tmp2122);
    ref2121 = $tmp2123;
    if (((panda$core$Bit) { ref2121 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2124 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2121, p_args, p_expectedType);
    return $tmp2124;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2125 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2125;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2126;
    panda$collections$Array* methods2133;
    org$pandalanguage$pandac$MethodDecl* first2138;
    panda$core$MutableString* msg2143;
    panda$core$String* separator2154;
    panda$collections$Iterator* a$Iter2156;
    org$pandalanguage$pandac$IRNode* a2168;
    org$pandalanguage$pandac$IRNode* target2182;
    panda$collections$Array* children2190;
    panda$collections$Array* types2196;
    panda$collections$Iterator* m$Iter2199;
    org$pandalanguage$pandac$MethodRef* m2211;
    org$pandalanguage$pandac$IRNode* target2221;
    org$pandalanguage$pandac$IRNode* initCall2224;
    panda$collections$Array* children2228;
    org$pandalanguage$pandac$IRNode* resolved2233;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2127 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2127, ((panda$core$Int64) { 0 }));
            if ($tmp2128.value) {
            {
                target2126 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2129 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2129, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2130.value);
                panda$core$Object* $tmp2131 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2126 = ((org$pandalanguage$pandac$IRNode*) $tmp2131);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2132 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2126, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2132;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2134 = (panda$collections$Array*) malloc(40);
            $tmp2134->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2134->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2134, ((panda$collections$ListView*) p_m->payload));
            methods2133 = $tmp2134;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2133, p_args, p_expectedType);
            panda$core$Int64 $tmp2136 = panda$collections$Array$get_count$R$panda$core$Int64(methods2133);
            panda$core$Bit $tmp2137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2136, ((panda$core$Int64) { 0 }));
            if ($tmp2137.value) {
            {
                ITable* $tmp2139 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2139->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2139 = $tmp2139->next;
                }
                $fn2141 $tmp2140 = $tmp2139->methods[0];
                panda$core$Object* $tmp2142 = $tmp2140(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2138 = ((org$pandalanguage$pandac$MethodRef*) $tmp2142)->value;
                panda$core$MutableString* $tmp2144 = (panda$core$MutableString*) malloc(40);
                $tmp2144->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2144->refCount.value = 1;
                panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2146, ((org$pandalanguage$pandac$Symbol*) first2138->owner)->name);
                panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, &$s2148);
                panda$core$String* $tmp2150 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2138)->name);
                panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
                panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2149, $tmp2152);
                panda$core$MutableString$init$panda$core$String($tmp2144, $tmp2153);
                msg2143 = $tmp2144;
                separator2154 = &$s2155;
                {
                    ITable* $tmp2157 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2157->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2157 = $tmp2157->next;
                    }
                    $fn2159 $tmp2158 = $tmp2157->methods[0];
                    panda$collections$Iterator* $tmp2160 = $tmp2158(((panda$collections$Iterable*) p_args));
                    a$Iter2156 = $tmp2160;
                    $l2161:;
                    ITable* $tmp2163 = a$Iter2156->$class->itable;
                    while ($tmp2163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2163 = $tmp2163->next;
                    }
                    $fn2165 $tmp2164 = $tmp2163->methods[0];
                    panda$core$Bit $tmp2166 = $tmp2164(a$Iter2156);
                    panda$core$Bit $tmp2167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2166);
                    if (!$tmp2167.value) goto $l2162;
                    {
                        ITable* $tmp2169 = a$Iter2156->$class->itable;
                        while ($tmp2169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2169 = $tmp2169->next;
                        }
                        $fn2171 $tmp2170 = $tmp2169->methods[1];
                        panda$core$Object* $tmp2172 = $tmp2170(a$Iter2156);
                        a2168 = ((org$pandalanguage$pandac$IRNode*) $tmp2172);
                        panda$core$MutableString$append$panda$core$String(msg2143, separator2154);
                        panda$core$MutableString$append$panda$core$Object(msg2143, ((panda$core$Object*) a2168->type));
                        separator2154 = &$s2173;
                    }
                    goto $l2161;
                    $l2162:;
                }
                panda$core$MutableString$append$panda$core$String(msg2143, &$s2174);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2175, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2177);
                    panda$core$MutableString$append$panda$core$String(msg2143, $tmp2178);
                }
                }
                panda$core$String* $tmp2179 = panda$core$MutableString$finish$R$panda$core$String(msg2143);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2179);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2180 = panda$collections$Array$get_count$R$panda$core$Int64(methods2133);
            panda$core$Bit $tmp2181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2180, ((panda$core$Int64) { 1 }));
            if ($tmp2181.value) {
            {
                panda$core$Int64 $tmp2183 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2183, ((panda$core$Int64) { 1 }));
                if ($tmp2184.value) {
                {
                    panda$core$Object* $tmp2185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2182 = ((org$pandalanguage$pandac$IRNode*) $tmp2185);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2186 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2186, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2187.value);
                    target2182 = NULL;
                }
                }
                panda$core$Object* $tmp2188 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2133, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2189 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2182, ((org$pandalanguage$pandac$MethodRef*) $tmp2188), p_args);
                return $tmp2189;
            }
            }
            panda$collections$Array* $tmp2191 = (panda$collections$Array*) malloc(40);
            $tmp2191->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2191->refCount.value = 1;
            panda$collections$Array$init($tmp2191);
            children2190 = $tmp2191;
            org$pandalanguage$pandac$IRNode* $tmp2193 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2193->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2193->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2195 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2193, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2195, ((panda$core$Object*) methods2133), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2190, ((panda$core$Object*) $tmp2193));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2190, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2197 = (panda$collections$Array*) malloc(40);
            $tmp2197->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2197->refCount.value = 1;
            panda$collections$Array$init($tmp2197);
            types2196 = $tmp2197;
            {
                ITable* $tmp2200 = ((panda$collections$Iterable*) methods2133)->$class->itable;
                while ($tmp2200->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2200 = $tmp2200->next;
                }
                $fn2202 $tmp2201 = $tmp2200->methods[0];
                panda$collections$Iterator* $tmp2203 = $tmp2201(((panda$collections$Iterable*) methods2133));
                m$Iter2199 = $tmp2203;
                $l2204:;
                ITable* $tmp2206 = m$Iter2199->$class->itable;
                while ($tmp2206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2206 = $tmp2206->next;
                }
                $fn2208 $tmp2207 = $tmp2206->methods[0];
                panda$core$Bit $tmp2209 = $tmp2207(m$Iter2199);
                panda$core$Bit $tmp2210 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2209);
                if (!$tmp2210.value) goto $l2205;
                {
                    ITable* $tmp2212 = m$Iter2199->$class->itable;
                    while ($tmp2212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2212 = $tmp2212->next;
                    }
                    $fn2214 $tmp2213 = $tmp2212->methods[1];
                    panda$core$Object* $tmp2215 = $tmp2213(m$Iter2199);
                    m2211 = ((org$pandalanguage$pandac$MethodRef*) $tmp2215);
                    org$pandalanguage$pandac$Type* $tmp2216 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2211);
                    panda$collections$Array$add$panda$collections$Array$T(types2196, ((panda$core$Object*) $tmp2216));
                }
                goto $l2204;
                $l2205:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2217 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2217->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2217->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2219 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2219->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2219->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2219, ((panda$collections$ListView*) types2196));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2217, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2219, ((panda$collections$ListView*) children2190));
            return $tmp2217;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2222 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2222->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2222->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2222, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2221 = $tmp2222;
            org$pandalanguage$pandac$IRNode* $tmp2226 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2221, &$s2225, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2227 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2226);
            initCall2224 = $tmp2227;
            if (((panda$core$Bit) { initCall2224 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2229 = (panda$collections$Array*) malloc(40);
            $tmp2229->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2229->refCount.value = 1;
            panda$collections$Array$init($tmp2229);
            children2228 = $tmp2229;
            panda$collections$Array$add$panda$collections$Array$T(children2228, ((panda$core$Object*) initCall2224));
            org$pandalanguage$pandac$IRNode* $tmp2231 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2231->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2231->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2231, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2228));
            return $tmp2231;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2234 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2233 = $tmp2234;
            if (((panda$core$Bit) { resolved2233 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2235, ((panda$core$Object*) resolved2233->type));
            panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2236, &$s2237);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2233->position, $tmp2238);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2239;
    panda$core$MutableString* typeName2242;
    panda$core$String* separator2246;
    panda$collections$Iterator* p$Iter2248;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2260;
    panda$core$Int64 kind2266;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2240 = (panda$collections$Array*) malloc(40);
    $tmp2240->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2240->refCount.value = 1;
    panda$collections$Array$init($tmp2240);
    subtypes2239 = $tmp2240;
    panda$core$MutableString* $tmp2243 = (panda$core$MutableString*) malloc(40);
    $tmp2243->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2243->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2243, &$s2245);
    typeName2242 = $tmp2243;
    separator2246 = &$s2247;
    {
        ITable* $tmp2249 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2249->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2249 = $tmp2249->next;
        }
        $fn2251 $tmp2250 = $tmp2249->methods[0];
        panda$collections$Iterator* $tmp2252 = $tmp2250(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2248 = $tmp2252;
        $l2253:;
        ITable* $tmp2255 = p$Iter2248->$class->itable;
        while ($tmp2255->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2255 = $tmp2255->next;
        }
        $fn2257 $tmp2256 = $tmp2255->methods[0];
        panda$core$Bit $tmp2258 = $tmp2256(p$Iter2248);
        panda$core$Bit $tmp2259 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2258);
        if (!$tmp2259.value) goto $l2254;
        {
            ITable* $tmp2261 = p$Iter2248->$class->itable;
            while ($tmp2261->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2261 = $tmp2261->next;
            }
            $fn2263 $tmp2262 = $tmp2261->methods[1];
            panda$core$Object* $tmp2264 = $tmp2262(p$Iter2248);
            p2260 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2264);
            panda$core$MutableString$append$panda$core$String(typeName2242, separator2246);
            panda$core$MutableString$append$panda$core$String(typeName2242, ((org$pandalanguage$pandac$Symbol*) p2260->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2239, ((panda$core$Object*) p2260->type));
            separator2246 = &$s2265;
        }
        goto $l2253;
        $l2254:;
    }
    panda$core$Bit $tmp2267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2267.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2242, &$s2268);
        kind2266 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2242, &$s2269);
        kind2266 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2239, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2270 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2271 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2270);
    if ($tmp2271.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2242, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2242, &$s2272);
    org$pandalanguage$pandac$Type* $tmp2273 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2273->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2273->refCount.value = 1;
    panda$core$String* $tmp2275 = panda$core$MutableString$finish$R$panda$core$String(typeName2242);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2273, $tmp2275, kind2266, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2239), ((panda$core$Bit) { true }));
    return $tmp2273;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2276;
    panda$core$MutableString* typeName2279;
    panda$collections$Iterator* p$Iter2283;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2295;
    panda$core$Int64 kind2301;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2277 = (panda$collections$Array*) malloc(40);
    $tmp2277->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2277->refCount.value = 1;
    panda$collections$Array$init($tmp2277);
    subtypes2276 = $tmp2277;
    panda$core$MutableString* $tmp2280 = (panda$core$MutableString*) malloc(40);
    $tmp2280->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2280->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2280, &$s2282);
    typeName2279 = $tmp2280;
    panda$core$MutableString$append$panda$core$String(typeName2279, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2276, ((panda$core$Object*) p_selfType));
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
            panda$core$MutableString$append$panda$core$String(typeName2279, &$s2300);
            panda$core$MutableString$append$panda$core$String(typeName2279, ((org$pandalanguage$pandac$Symbol*) p2295->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2276, ((panda$core$Object*) p2295->type));
        }
        goto $l2288;
        $l2289:;
    }
    panda$core$Bit $tmp2302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2302.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2279, &$s2303);
        kind2301 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2279, &$s2304);
        kind2301 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2276, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2305 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2306 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2305);
    if ($tmp2306.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2279, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2279, &$s2307);
    org$pandalanguage$pandac$Type* $tmp2308 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2308->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2308->refCount.value = 1;
    panda$core$String* $tmp2310 = panda$core$MutableString$finish$R$panda$core$String(typeName2279);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2308, $tmp2310, kind2301, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2276), ((panda$core$Bit) { true }));
    return $tmp2308;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2311;
    org$pandalanguage$pandac$MethodDecl* $tmp2312 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2311 = $tmp2312;
    if (((panda$core$Bit) { inherited2311 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2313 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2313;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2314 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2311);
    return $tmp2314;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2315 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2316 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2315);
    return $tmp2316;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2317;
    org$pandalanguage$pandac$MethodDecl* $tmp2318 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2317 = $tmp2318;
    if (((panda$core$Bit) { inherited2317 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2319 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2319;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2320 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2317, p_selfType);
    return $tmp2320;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2321;
        }
        break;
        case 52:
        {
            return &$s2322;
        }
        break;
        case 53:
        {
            return &$s2323;
        }
        break;
        case 54:
        {
            return &$s2324;
        }
        break;
        case 55:
        {
            return &$s2325;
        }
        break;
        case 56:
        {
            return &$s2326;
        }
        break;
        case 57:
        {
            return &$s2327;
        }
        break;
        case 58:
        {
            return &$s2328;
        }
        break;
        case 59:
        {
            return &$s2329;
        }
        break;
        case 63:
        {
            return &$s2330;
        }
        break;
        case 62:
        {
            return &$s2331;
        }
        break;
        case 65:
        {
            return &$s2332;
        }
        break;
        case 64:
        {
            return &$s2333;
        }
        break;
        case 68:
        {
            return &$s2334;
        }
        break;
        case 69:
        {
            return &$s2335;
        }
        break;
        case 66:
        {
            return &$s2336;
        }
        break;
        case 67:
        {
            return &$s2337;
        }
        break;
        case 70:
        {
            return &$s2338;
        }
        break;
        case 71:
        {
            return &$s2339;
        }
        break;
        case 49:
        {
            return &$s2340;
        }
        break;
        case 50:
        {
            return &$s2341;
        }
        break;
        case 72:
        {
            return &$s2342;
        }
        break;
        case 1:
        {
            return &$s2343;
        }
        break;
        case 101:
        {
            return &$s2344;
        }
        break;
        case 73:
        {
            return &$s2345;
        }
        break;
        case 60:
        {
            return &$s2346;
        }
        break;
        case 61:
        {
            return &$s2347;
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
            panda$core$Int64 $tmp2348 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2348, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2349.value);
            panda$core$Bit $tmp2350 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2350.value) {
            {
                panda$core$Object* $tmp2351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2352 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2351));
                return $tmp2352;
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
            panda$core$Object* $tmp2353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2354 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2353));
            return $tmp2354;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2380;
    panda$core$Int64 r2382;
    panda$core$Bit $tmp2356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2355 = $tmp2356.value;
    if ($tmp2355) goto $l2357;
    panda$core$Bit $tmp2358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2355 = $tmp2358.value;
    $l2357:;
    panda$core$Bit $tmp2359 = { $tmp2355 };
    PANDA_ASSERT($tmp2359.value);
    panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2360 = $tmp2361.value;
    if ($tmp2360) goto $l2362;
    panda$core$Bit $tmp2363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2360 = $tmp2363.value;
    $l2362:;
    panda$core$Bit $tmp2364 = { $tmp2360 };
    PANDA_ASSERT($tmp2364.value);
    panda$core$Bit $tmp2367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2366 = $tmp2367.value;
    if ($tmp2366) goto $l2368;
    panda$core$UInt64 $tmp2370 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2371 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2370);
    bool $tmp2369 = $tmp2371.value;
    if (!$tmp2369) goto $l2372;
    panda$core$Bit $tmp2373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2369 = $tmp2373.value;
    $l2372:;
    panda$core$Bit $tmp2374 = { $tmp2369 };
    $tmp2366 = $tmp2374.value;
    $l2368:;
    panda$core$Bit $tmp2375 = { $tmp2366 };
    bool $tmp2365 = $tmp2375.value;
    if ($tmp2365) goto $l2376;
    panda$core$UInt64 $tmp2377 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2378 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2377);
    $tmp2365 = $tmp2378.value;
    $l2376:;
    panda$core$Bit $tmp2379 = { $tmp2365 };
    if ($tmp2379.value) {
    {
        panda$core$Int64 $tmp2381 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2380 = $tmp2381;
        panda$core$Int64 $tmp2383 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2382 = $tmp2383;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2384 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2384->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2384->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2386 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2387 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2380, r2382);
                panda$core$UInt64 $tmp2388 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2387);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2384, ((panda$core$Int64) { 1004 }), p_position, $tmp2386, $tmp2388);
                return $tmp2384;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2389 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2389->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2389->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2391 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2392 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2380, r2382);
                panda$core$UInt64 $tmp2393 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2392);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2389, ((panda$core$Int64) { 1004 }), p_position, $tmp2391, $tmp2393);
                return $tmp2389;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2394 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2394->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2394->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2396 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2397 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2380, r2382);
                panda$core$UInt64 $tmp2398 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2397);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2394, ((panda$core$Int64) { 1004 }), p_position, $tmp2396, $tmp2398);
                return $tmp2394;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2399 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2399->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2399->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2401 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2402 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2380, r2382);
                panda$core$UInt64 $tmp2403 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2402);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2399, ((panda$core$Int64) { 1004 }), p_position, $tmp2401, $tmp2403);
                return $tmp2399;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2404 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2404->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2404->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2406 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2407 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2380, r2382);
                panda$core$UInt64 $tmp2408 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2407);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2404, ((panda$core$Int64) { 1004 }), p_position, $tmp2406, $tmp2408);
                return $tmp2404;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2409 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2409->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2409->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2411 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2380, r2382);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2409, ((panda$core$Int64) { 1011 }), p_position, $tmp2411, $tmp2412);
                return $tmp2409;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2413 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2413->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2413->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2415 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2416 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2380, r2382);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2413, ((panda$core$Int64) { 1011 }), p_position, $tmp2415, $tmp2416);
                return $tmp2413;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2417 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2417->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2417->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2419 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2420 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2380, r2382);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2417, ((panda$core$Int64) { 1011 }), p_position, $tmp2419, $tmp2420);
                return $tmp2417;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2421 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2421->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2421->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2423 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2424 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2380, r2382);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2421, ((panda$core$Int64) { 1011 }), p_position, $tmp2423, $tmp2424);
                return $tmp2421;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2425 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2425->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2425->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2427 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2428 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2380, r2382);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2425, ((panda$core$Int64) { 1011 }), p_position, $tmp2427, $tmp2428);
                return $tmp2425;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2429 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2429->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2429->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2431 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2432 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2380, r2382);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2429, ((panda$core$Int64) { 1011 }), p_position, $tmp2431, $tmp2432);
                return $tmp2429;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2433 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2433->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2433->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2435 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2436 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2380, r2382);
                panda$core$UInt64 $tmp2437 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2436);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2433, ((panda$core$Int64) { 1004 }), p_position, $tmp2435, $tmp2437);
                return $tmp2433;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2438 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2438->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2438->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2440 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2441 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2380, r2382);
                panda$core$UInt64 $tmp2442 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2441);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2438, ((panda$core$Int64) { 1004 }), p_position, $tmp2440, $tmp2442);
                return $tmp2438;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2443 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2443->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2443->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2445 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2446 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2380, r2382);
                panda$core$UInt64 $tmp2447 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2446);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2443, ((panda$core$Int64) { 1004 }), p_position, $tmp2445, $tmp2447);
                return $tmp2443;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2448 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2448->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2448->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2450 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2451 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2380, r2382);
                panda$core$UInt64 $tmp2452 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2451);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2448, ((panda$core$Int64) { 1004 }), p_position, $tmp2450, $tmp2452);
                return $tmp2448;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2453 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2453->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2453->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2455 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2456 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2380, r2382);
                panda$core$UInt64 $tmp2457 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2456);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2453, ((panda$core$Int64) { 1004 }), p_position, $tmp2455, $tmp2457);
                return $tmp2453;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2458);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2459.value) {
    {
        panda$core$Object* $tmp2460 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2460);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2465;
    org$pandalanguage$pandac$IRNode* resolved2473;
    panda$collections$Array* children2478;
    panda$core$UInt64 baseId2484;
    org$pandalanguage$pandac$IRNode* base2485;
    panda$core$UInt64 indexId2492;
    org$pandalanguage$pandac$IRNode* index2493;
    org$pandalanguage$pandac$IRNode* baseRef2498;
    org$pandalanguage$pandac$IRNode* indexRef2501;
    org$pandalanguage$pandac$IRNode* rhsIndex2504;
    org$pandalanguage$pandac$IRNode* value2506;
    panda$core$Bit $tmp2461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2461.value);
    panda$core$Int64 $tmp2462 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2462, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2463.value);
    panda$core$Bit $tmp2464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2464.value) {
    {
        panda$collections$Array* $tmp2466 = (panda$collections$Array*) malloc(40);
        $tmp2466->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2466->refCount.value = 1;
        panda$collections$Array$init($tmp2466);
        args2465 = $tmp2466;
        panda$core$Object* $tmp2468 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2465, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2468)));
        panda$collections$Array$add$panda$collections$Array$T(args2465, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2469 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2471 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2469), &$s2470, ((panda$collections$ListView*) args2465));
        return $tmp2471;
    }
    }
    panda$core$Bit $tmp2472 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2472.value);
    org$pandalanguage$pandac$IRNode* $tmp2474 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2473 = $tmp2474;
    if (((panda$core$Bit) { resolved2473 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2475 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2473);
    resolved2473 = $tmp2475;
    panda$core$Int64 $tmp2476 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2473->children);
    panda$core$Bit $tmp2477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2476, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2477.value);
    panda$collections$Array* $tmp2479 = (panda$collections$Array*) malloc(40);
    $tmp2479->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2479->refCount.value = 1;
    panda$collections$Array$init($tmp2479);
    children2478 = $tmp2479;
    panda$core$Object* $tmp2481 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2473->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2482 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2481));
    panda$collections$Array$add$panda$collections$Array$T(children2478, ((panda$core$Object*) $tmp2482));
    panda$core$UInt64 $tmp2483 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2483;
    baseId2484 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2486 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2486->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2486->refCount.value = 1;
    panda$core$Object* $tmp2488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2478, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2489 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2478, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2486, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2488)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2489)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2484)), ((panda$collections$ListView*) children2478));
    base2485 = $tmp2486;
    panda$collections$Array$clear(children2478);
    panda$core$Object* $tmp2490 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2473->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2478, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2490)));
    panda$core$UInt64 $tmp2491 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2491;
    indexId2492 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2494 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2494->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2494->refCount.value = 1;
    panda$core$Object* $tmp2496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2478, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2478, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2494, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2496)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2497)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2492)), ((panda$collections$ListView*) children2478));
    index2493 = $tmp2494;
    org$pandalanguage$pandac$IRNode* $tmp2499 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2499->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2499->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2499, ((panda$core$Int64) { 1028 }), base2485->position, base2485->type, baseId2484);
    baseRef2498 = $tmp2499;
    org$pandalanguage$pandac$IRNode* $tmp2502 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2502->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2502->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2502, ((panda$core$Int64) { 1028 }), index2493->position, index2493->type, indexId2492);
    indexRef2501 = $tmp2502;
    org$pandalanguage$pandac$IRNode* $tmp2505 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2498, ((panda$core$Int64) { 101 }), indexRef2501);
    rhsIndex2504 = $tmp2505;
    if (((panda$core$Bit) { rhsIndex2504 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2507 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2508 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2504, $tmp2507, p_right);
    value2506 = $tmp2508;
    if (((panda$core$Bit) { value2506 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2511 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2504->type);
    bool $tmp2510 = $tmp2511.value;
    if (!$tmp2510) goto $l2512;
    panda$core$Bit $tmp2513 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2510 = $tmp2513.value;
    $l2512:;
    panda$core$Bit $tmp2514 = { $tmp2510 };
    bool $tmp2509 = $tmp2514.value;
    if (!$tmp2509) goto $l2515;
    panda$core$Bit $tmp2516 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2504->type, value2506->type);
    $tmp2509 = $tmp2516.value;
    $l2515:;
    panda$core$Bit $tmp2517 = { $tmp2509 };
    if ($tmp2517.value) {
    {
        panda$collections$Array* $tmp2519 = (panda$collections$Array*) malloc(40);
        $tmp2519->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2519->refCount.value = 1;
        panda$collections$Array$init($tmp2519);
        org$pandalanguage$pandac$IRNode* $tmp2521 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2506, &$s2518, ((panda$collections$ListView*) $tmp2519), resolved2473->type);
        value2506 = $tmp2521;
        if (((panda$core$Bit) { value2506 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2478);
    panda$collections$Array$add$panda$collections$Array$T(children2478, ((panda$core$Object*) index2493));
    panda$collections$Array$add$panda$collections$Array$T(children2478, ((panda$core$Object*) value2506));
    org$pandalanguage$pandac$IRNode* $tmp2523 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2485, &$s2522, ((panda$collections$ListView*) children2478));
    return $tmp2523;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2524;
    org$pandalanguage$pandac$IRNode* right2525;
    panda$core$Int64 kind2549;
    org$pandalanguage$pandac$IRNode* resolved2556;
    panda$collections$Array* children2558;
    org$pandalanguage$pandac$IRNode* resolved2565;
    panda$collections$Array* children2567;
    org$pandalanguage$pandac$ClassDecl* cl2579;
    org$pandalanguage$pandac$ClassDecl* cl2596;
    org$pandalanguage$pandac$IRNode* finalLeft2612;
    org$pandalanguage$pandac$IRNode* finalRight2615;
    panda$collections$Array* children2618;
    panda$collections$Array* children2632;
    panda$collections$Array* children2644;
    org$pandalanguage$pandac$IRNode* reusedLeft2650;
    org$pandalanguage$pandac$ClassDecl* cl2667;
    panda$collections$ListView* parameters2669;
    org$pandalanguage$pandac$Symbol* methods2671;
    org$pandalanguage$pandac$Type* type2675;
    panda$collections$Array* types2676;
    org$pandalanguage$pandac$MethodDecl* m2680;
    panda$collections$Iterator* m$Iter2685;
    org$pandalanguage$pandac$MethodDecl* m2697;
    panda$collections$Array* children2708;
    panda$collections$Array* children2737;
    panda$collections$Array* children2753;
    org$pandalanguage$pandac$Type* resultType2776;
    org$pandalanguage$pandac$IRNode* result2780;
    org$pandalanguage$pandac$IRNode* resolved2783;
    org$pandalanguage$pandac$IRNode* target2789;
    left2524 = p_rawLeft;
    right2525 = p_rawRight;
    panda$core$Bit $tmp2526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2524->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2526.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2527 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2525);
        right2525 = $tmp2527;
        if (((panda$core$Bit) { right2525 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2528 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2524, right2525->type);
        if (((panda$core$Bit) { $tmp2528.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2529 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2524, right2525->type);
            left2524 = $tmp2529;
        }
        }
    }
    }
    panda$core$Bit $tmp2531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2525->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2530 = $tmp2531.value;
    if (!$tmp2530) goto $l2532;
    panda$core$Int64$nullable $tmp2533 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2525, left2524->type);
    $tmp2530 = ((panda$core$Bit) { $tmp2533.nonnull }).value;
    $l2532:;
    panda$core$Bit $tmp2534 = { $tmp2530 };
    if ($tmp2534.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2535 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2525, left2524->type);
        right2525 = $tmp2535;
    }
    }
    panda$core$Bit $tmp2539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2538 = $tmp2539.value;
    if ($tmp2538) goto $l2540;
    panda$core$Bit $tmp2541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2538 = $tmp2541.value;
    $l2540:;
    panda$core$Bit $tmp2542 = { $tmp2538 };
    bool $tmp2537 = $tmp2542.value;
    if ($tmp2537) goto $l2543;
    panda$core$Bit $tmp2544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2537 = $tmp2544.value;
    $l2543:;
    panda$core$Bit $tmp2545 = { $tmp2537 };
    bool $tmp2536 = $tmp2545.value;
    if ($tmp2536) goto $l2546;
    panda$core$Bit $tmp2547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2536 = $tmp2547.value;
    $l2546:;
    panda$core$Bit $tmp2548 = { $tmp2536 };
    if ($tmp2548.value) {
    {
        panda$core$Bit $tmp2551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2550 = $tmp2551.value;
        if ($tmp2550) goto $l2552;
        panda$core$Bit $tmp2553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2550 = $tmp2553.value;
        $l2552:;
        panda$core$Bit $tmp2554 = { $tmp2550 };
        if ($tmp2554.value) {
        {
            kind2549 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2549 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2524->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2555.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2557 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2525);
            resolved2556 = $tmp2557;
            if (((panda$core$Bit) { resolved2556 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2559 = (panda$collections$Array*) malloc(40);
            $tmp2559->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2559->refCount.value = 1;
            panda$collections$Array$init($tmp2559);
            children2558 = $tmp2559;
            panda$collections$Array$add$panda$collections$Array$T(children2558, ((panda$core$Object*) resolved2556));
            org$pandalanguage$pandac$IRNode* $tmp2561 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2561->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2561->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2563 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2561, kind2549, p_position, $tmp2563, ((panda$collections$ListView*) children2558));
            return $tmp2561;
        }
        }
        panda$core$Bit $tmp2564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2525->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2564.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2566 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2524);
            resolved2565 = $tmp2566;
            if (((panda$core$Bit) { resolved2565 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2568 = (panda$collections$Array*) malloc(40);
            $tmp2568->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2568->refCount.value = 1;
            panda$collections$Array$init($tmp2568);
            children2567 = $tmp2568;
            panda$collections$Array$add$panda$collections$Array$T(children2567, ((panda$core$Object*) resolved2565));
            org$pandalanguage$pandac$IRNode* $tmp2570 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2570->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2570->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2572 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2570, kind2549, p_position, $tmp2572, ((panda$collections$ListView*) children2567));
            return $tmp2570;
        }
        }
    }
    }
    panda$core$Bit $tmp2574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2573 = $tmp2574.value;
    if ($tmp2573) goto $l2575;
    panda$core$Bit $tmp2576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2573 = $tmp2576.value;
    $l2575:;
    panda$core$Bit $tmp2577 = { $tmp2573 };
    if ($tmp2577.value) {
    {
        panda$core$Bit $tmp2578 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2524->type);
        if ($tmp2578.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2580 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2524->type);
            cl2579 = $tmp2580;
            if (((panda$core$Bit) { cl2579 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2581 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2579);
            if ($tmp2581.value) {
            {
                panda$core$String* $tmp2583 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2582, $tmp2583);
                panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2585);
                panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2586, ((panda$core$Object*) left2524->type));
                panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, &$s2588);
                panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2590, ((panda$core$Object*) right2525->type));
                panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
                panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, $tmp2593);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2594);
            }
            }
        }
        }
        panda$core$Bit $tmp2595 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2525->type);
        if ($tmp2595.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2597 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2525->type);
            cl2596 = $tmp2597;
            if (((panda$core$Bit) { cl2596 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2598 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2596);
            if ($tmp2598.value) {
            {
                panda$core$String* $tmp2600 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2599, $tmp2600);
                panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, &$s2602);
                panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2603, ((panda$core$Object*) left2524->type));
                panda$core$String* $tmp2606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, &$s2605);
                panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2607, ((panda$core$Object*) right2525->type));
                panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, &$s2609);
                panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, $tmp2610);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2611);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2613 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2614 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2524, $tmp2613);
        finalLeft2612 = $tmp2614;
        if (((panda$core$Bit) { finalLeft2612 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2616 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2617 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2525, $tmp2616);
        finalRight2615 = $tmp2617;
        if (((panda$core$Bit) { finalRight2615 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2619 = (panda$collections$Array*) malloc(40);
        $tmp2619->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2619->refCount.value = 1;
        panda$collections$Array$init($tmp2619);
        children2618 = $tmp2619;
        panda$collections$Array$add$panda$collections$Array$T(children2618, ((panda$core$Object*) finalLeft2612));
        panda$collections$Array$add$panda$collections$Array$T(children2618, ((panda$core$Object*) finalRight2615));
        org$pandalanguage$pandac$IRNode* $tmp2621 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2621->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2621->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2623 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2621, ((panda$core$Int64) { 1023 }), p_position, $tmp2623, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2618));
        return $tmp2621;
    }
    }
    panda$core$Bit $tmp2624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2624.value) {
    {
        panda$core$Bit $tmp2625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2524->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2625.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2626 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2524, p_op, right2525);
            return $tmp2626;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2627 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2524);
        left2524 = $tmp2627;
        if (((panda$core$Bit) { left2524 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2628 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2525, left2524->type);
        right2525 = $tmp2628;
        if (((panda$core$Bit) { right2525 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2629 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2524);
        panda$core$Bit $tmp2630 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2629);
        if ($tmp2630.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2524->position, &$s2631);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2633 = (panda$collections$Array*) malloc(40);
        $tmp2633->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2633->refCount.value = 1;
        panda$collections$Array$init($tmp2633);
        children2632 = $tmp2633;
        panda$collections$Array$add$panda$collections$Array$T(children2632, ((panda$core$Object*) left2524));
        panda$collections$Array$add$panda$collections$Array$T(children2632, ((panda$core$Object*) right2525));
        org$pandalanguage$pandac$IRNode* $tmp2635 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2635->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2635->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2635, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2632));
        return $tmp2635;
    }
    }
    panda$core$Bit $tmp2637 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2637.value) {
    {
        panda$core$Bit $tmp2638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2524->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2638.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2639 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2524, p_op, right2525);
            return $tmp2639;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2640 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2524);
        left2524 = $tmp2640;
        if (((panda$core$Bit) { left2524 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2641 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2524);
        panda$core$Bit $tmp2642 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2641);
        if ($tmp2642.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2524->position, &$s2643);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2645 = (panda$collections$Array*) malloc(40);
        $tmp2645->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2645->refCount.value = 1;
        panda$collections$Array$init($tmp2645);
        children2644 = $tmp2645;
        panda$collections$Array$add$panda$collections$Array$T(children2644, ((panda$core$Object*) left2524));
        panda$core$UInt64 $tmp2647 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2647;
        org$pandalanguage$pandac$IRNode* $tmp2648 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2648->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2648->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2648, ((panda$core$Int64) { 1027 }), left2524->position, left2524->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2644));
        left2524 = $tmp2648;
        org$pandalanguage$pandac$IRNode* $tmp2651 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2651->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2651->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2651, ((panda$core$Int64) { 1028 }), left2524->position, left2524->type, self->reusedValueCount);
        reusedLeft2650 = $tmp2651;
        panda$core$Int64 $tmp2653 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2654 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2650, $tmp2653, right2525);
        right2525 = $tmp2654;
        if (((panda$core$Bit) { right2525 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2656 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2524->type);
        bool $tmp2655 = $tmp2656.value;
        if (!$tmp2655) goto $l2657;
        panda$core$Bit $tmp2658 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2524->type, right2525->type);
        $tmp2655 = $tmp2658.value;
        $l2657:;
        panda$core$Bit $tmp2659 = { $tmp2655 };
        if ($tmp2659.value) {
        {
            panda$collections$Array* $tmp2661 = (panda$collections$Array*) malloc(40);
            $tmp2661->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2661->refCount.value = 1;
            panda$collections$Array$init($tmp2661);
            org$pandalanguage$pandac$IRNode* $tmp2663 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2525, &$s2660, ((panda$collections$ListView*) $tmp2661), left2524->type);
            right2525 = $tmp2663;
            if (((panda$core$Bit) { right2525 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2664 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2524, ((panda$core$Int64) { 73 }), right2525);
        return $tmp2664;
    }
    }
    panda$core$Bit $tmp2665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2665.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2666 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2524);
        left2524 = $tmp2666;
        if (((panda$core$Bit) { left2524 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2668 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2524->type);
        cl2667 = $tmp2668;
        if (((panda$core$Bit) { cl2667 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2670 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2524->type);
        parameters2669 = $tmp2670;
        org$pandalanguage$pandac$SymbolTable* $tmp2672 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2667);
        org$pandalanguage$pandac$Symbol* $tmp2674 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2672, &$s2673);
        methods2671 = $tmp2674;
        if (((panda$core$Bit) { methods2671 != NULL }).value) {
        {
            panda$collections$Array* $tmp2677 = (panda$collections$Array*) malloc(40);
            $tmp2677->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2677->refCount.value = 1;
            panda$collections$Array$init($tmp2677);
            types2676 = $tmp2677;
            panda$core$Bit $tmp2679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2671->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2679.value) {
            {
                m2680 = ((org$pandalanguage$pandac$MethodDecl*) methods2671);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2680);
                org$pandalanguage$pandac$MethodRef* $tmp2681 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2681->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2681->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2681, m2680, parameters2669);
                org$pandalanguage$pandac$Type* $tmp2683 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2681);
                panda$collections$Array$add$panda$collections$Array$T(types2676, ((panda$core$Object*) $tmp2683));
            }
            }
            else {
            {
                panda$core$Bit $tmp2684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2671->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2684.value);
                {
                    ITable* $tmp2686 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2671)->methods)->$class->itable;
                    while ($tmp2686->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2686 = $tmp2686->next;
                    }
                    $fn2688 $tmp2687 = $tmp2686->methods[0];
                    panda$collections$Iterator* $tmp2689 = $tmp2687(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2671)->methods));
                    m$Iter2685 = $tmp2689;
                    $l2690:;
                    ITable* $tmp2692 = m$Iter2685->$class->itable;
                    while ($tmp2692->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2692 = $tmp2692->next;
                    }
                    $fn2694 $tmp2693 = $tmp2692->methods[0];
                    panda$core$Bit $tmp2695 = $tmp2693(m$Iter2685);
                    panda$core$Bit $tmp2696 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2695);
                    if (!$tmp2696.value) goto $l2691;
                    {
                        ITable* $tmp2698 = m$Iter2685->$class->itable;
                        while ($tmp2698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2698 = $tmp2698->next;
                        }
                        $fn2700 $tmp2699 = $tmp2698->methods[1];
                        panda$core$Object* $tmp2701 = $tmp2699(m$Iter2685);
                        m2697 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2701);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2697);
                        org$pandalanguage$pandac$MethodRef* $tmp2702 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2702->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2702->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2702, m2697, parameters2669);
                        org$pandalanguage$pandac$Type* $tmp2704 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2702);
                        panda$collections$Array$add$panda$collections$Array$T(types2676, ((panda$core$Object*) $tmp2704));
                    }
                    goto $l2690;
                    $l2691:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2705 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2705->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2705->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2705, ((panda$collections$ListView*) types2676));
            type2675 = $tmp2705;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2707 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2675 = $tmp2707;
        }
        }
        panda$collections$Array* $tmp2709 = (panda$collections$Array*) malloc(40);
        $tmp2709->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2709->refCount.value = 1;
        panda$collections$Array$init($tmp2709);
        children2708 = $tmp2709;
        panda$collections$Array$add$panda$collections$Array$T(children2708, ((panda$core$Object*) left2524));
        panda$collections$Array$add$panda$collections$Array$T(children2708, ((panda$core$Object*) right2525));
        org$pandalanguage$pandac$IRNode* $tmp2711 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2711->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2711->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2711, ((panda$core$Int64) { 1040 }), p_position, type2675, ((panda$collections$ListView*) children2708));
        return $tmp2711;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2713 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2714 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2524->type, $tmp2713);
    if ($tmp2714.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2716 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2717 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2525->type, $tmp2716);
        bool $tmp2715 = $tmp2717.value;
        if (!$tmp2715) goto $l2718;
        panda$core$Bit $tmp2723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2722 = $tmp2723.value;
        if ($tmp2722) goto $l2724;
        panda$core$Bit $tmp2725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2722 = $tmp2725.value;
        $l2724:;
        panda$core$Bit $tmp2726 = { $tmp2722 };
        bool $tmp2721 = $tmp2726.value;
        if ($tmp2721) goto $l2727;
        panda$core$Bit $tmp2728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2721 = $tmp2728.value;
        $l2727:;
        panda$core$Bit $tmp2729 = { $tmp2721 };
        bool $tmp2720 = $tmp2729.value;
        if ($tmp2720) goto $l2730;
        panda$core$Bit $tmp2731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2720 = $tmp2731.value;
        $l2730:;
        panda$core$Bit $tmp2732 = { $tmp2720 };
        bool $tmp2719 = $tmp2732.value;
        if ($tmp2719) goto $l2733;
        panda$core$Bit $tmp2734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2719 = $tmp2734.value;
        $l2733:;
        panda$core$Bit $tmp2735 = { $tmp2719 };
        $tmp2715 = $tmp2735.value;
        $l2718:;
        panda$core$Bit $tmp2736 = { $tmp2715 };
        if ($tmp2736.value) {
        {
            panda$collections$Array* $tmp2738 = (panda$collections$Array*) malloc(40);
            $tmp2738->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2738->refCount.value = 1;
            panda$collections$Array$init($tmp2738);
            children2737 = $tmp2738;
            panda$collections$Array$add$panda$collections$Array$T(children2737, ((panda$core$Object*) left2524));
            panda$collections$Array$add$panda$collections$Array$T(children2737, ((panda$core$Object*) right2525));
            org$pandalanguage$pandac$IRNode* $tmp2740 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2740->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2740->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2740, ((panda$core$Int64) { 1023 }), p_position, left2524->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2737));
            return $tmp2740;
        }
        }
        panda$core$String* $tmp2743 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2742, $tmp2743);
        panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2744, &$s2745);
        panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2746, ((panda$core$Object*) left2524->type));
        panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2747, &$s2748);
        panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2749, ((panda$core$Object*) right2525->type));
        panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, &$s2751);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2752);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2754 = (panda$collections$Array*) malloc(40);
    $tmp2754->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2754->refCount.value = 1;
    panda$collections$Array$init($tmp2754);
    children2753 = $tmp2754;
    panda$core$Bit $tmp2758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2524->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2757 = $tmp2758.value;
    if ($tmp2757) goto $l2759;
    panda$core$Bit $tmp2760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2524->kind, ((panda$core$Int64) { 1032 }));
    $tmp2757 = $tmp2760.value;
    $l2759:;
    panda$core$Bit $tmp2761 = { $tmp2757 };
    bool $tmp2756 = $tmp2761.value;
    if (!$tmp2756) goto $l2762;
    panda$core$Bit $tmp2764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2525->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2763 = $tmp2764.value;
    if ($tmp2763) goto $l2765;
    panda$core$Bit $tmp2766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2525->kind, ((panda$core$Int64) { 1032 }));
    $tmp2763 = $tmp2766.value;
    $l2765:;
    panda$core$Bit $tmp2767 = { $tmp2763 };
    $tmp2756 = $tmp2767.value;
    $l2762:;
    panda$core$Bit $tmp2768 = { $tmp2756 };
    if ($tmp2768.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2769 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2524, p_op, right2525);
        return $tmp2769;
    }
    }
    panda$core$Bit $tmp2771 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2524->type);
    bool $tmp2770 = $tmp2771.value;
    if (!$tmp2770) goto $l2772;
    panda$core$Int64$nullable $tmp2773 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2525, left2524->type);
    $tmp2770 = ((panda$core$Bit) { $tmp2773.nonnull }).value;
    $l2772:;
    panda$core$Bit $tmp2774 = { $tmp2770 };
    if ($tmp2774.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2775 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2525, left2524->type);
        right2525 = $tmp2775;
        PANDA_ASSERT(((panda$core$Bit) { right2525 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2753, ((panda$core$Object*) left2524));
        panda$collections$Array$add$panda$collections$Array$T(children2753, ((panda$core$Object*) right2525));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2777 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2776 = $tmp2777;
            }
            break;
            default:
            {
                resultType2776 = left2524->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2778 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2778->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2778->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2778, ((panda$core$Int64) { 1023 }), p_position, resultType2776, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2753));
        return $tmp2778;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2753, ((panda$core$Object*) right2525));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2781 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2782 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2524, $tmp2781, ((panda$collections$ListView*) children2753));
    result2780 = $tmp2782;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2780 == NULL }).value) {
    {
        panda$collections$Array$clear(children2753);
        panda$collections$Array$add$panda$collections$Array$T(children2753, ((panda$core$Object*) left2524));
        org$pandalanguage$pandac$IRNode* $tmp2784 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2525);
        resolved2783 = $tmp2784;
        bool $tmp2785 = ((panda$core$Bit) { resolved2783 != NULL }).value;
        if (!$tmp2785) goto $l2786;
        panda$core$Bit $tmp2787 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2783->type);
        $tmp2785 = $tmp2787.value;
        $l2786:;
        panda$core$Bit $tmp2788 = { $tmp2785 };
        if ($tmp2788.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2753, ((panda$core$Object*) resolved2783));
            org$pandalanguage$pandac$IRNode* $tmp2790 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2790->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2790->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2792 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2790, ((panda$core$Int64) { 1001 }), resolved2783->position, $tmp2792, resolved2783->type);
            target2789 = $tmp2790;
            panda$core$String* $tmp2793 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2794 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2789, $tmp2793, ((panda$collections$ListView*) children2753));
            result2780 = $tmp2794;
        }
        }
    }
    }
    return result2780;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2795;
    org$pandalanguage$pandac$IRNode* right2798;
    panda$core$Object* $tmp2796 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2797 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2796));
    left2795 = $tmp2797;
    if (((panda$core$Bit) { left2795 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2799 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2800 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2799));
    right2798 = $tmp2800;
    if (((panda$core$Bit) { right2798 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2801 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2795, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2798);
    return $tmp2801;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2805;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2802 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2802;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2803 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2804 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2803, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2804.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2805, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp2806 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp2805);
            return ((panda$collections$ListView*) $tmp2806);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2807 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2808 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2807));
            return $tmp2808;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2809 = (panda$collections$Array*) malloc(40);
            $tmp2809->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2809->refCount.value = 1;
            panda$collections$Array$init($tmp2809);
            return ((panda$collections$ListView*) $tmp2809);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2811.value) {
        {
            panda$collections$ListView* $tmp2812 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2812;
        }
        }
        panda$collections$ListView* $tmp2813 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2813;
    }
    }
    panda$collections$Array* $tmp2814 = (panda$collections$Array*) malloc(40);
    $tmp2814->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2814->refCount.value = 1;
    panda$collections$Array$init($tmp2814);
    return ((panda$collections$ListView*) $tmp2814);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2817;
    org$pandalanguage$pandac$ClassDecl* cl2819;
    org$pandalanguage$pandac$Symbol* s2821;
    org$pandalanguage$pandac$MethodDecl* m2824;
    panda$collections$Iterator* test$Iter2829;
    org$pandalanguage$pandac$MethodDecl* test2841;
    org$pandalanguage$pandac$MethodRef* ref2853;
    panda$collections$Array* children2857;
    org$pandalanguage$pandac$IRNode* methodRef2860;
    org$pandalanguage$pandac$Position $tmp2866;
    panda$collections$Array* args2867;
    panda$collections$Array* children2876;
    panda$collections$Array* children2886;
    org$pandalanguage$pandac$IRNode* coerced2895;
    panda$collections$Array* children2898;
    panda$core$Bit $tmp2816 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2816.value) {
    {
        panda$core$String* $tmp2818 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2817 = $tmp2818;
        org$pandalanguage$pandac$ClassDecl* $tmp2820 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2819 = $tmp2820;
        if (((panda$core$Bit) { cl2819 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2822 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2819);
        org$pandalanguage$pandac$Symbol* $tmp2823 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2822, name2817);
        s2821 = $tmp2823;
        if (((panda$core$Bit) { s2821 != NULL }).value) {
        {
            m2824 = NULL;
            switch (s2821->kind.value) {
                case 204:
                {
                    m2824 = ((org$pandalanguage$pandac$MethodDecl*) s2821);
                    panda$core$Int64 $tmp2825 = panda$collections$Array$get_count$R$panda$core$Int64(m2824->parameters);
                    panda$core$Bit $tmp2826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2825, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2826.value);
                    panda$core$Bit $tmp2827 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2824->annotations);
                    panda$core$Bit $tmp2828 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2827);
                    PANDA_ASSERT($tmp2828.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2830 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2821)->methods)->$class->itable;
                        while ($tmp2830->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2830 = $tmp2830->next;
                        }
                        $fn2832 $tmp2831 = $tmp2830->methods[0];
                        panda$collections$Iterator* $tmp2833 = $tmp2831(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2821)->methods));
                        test$Iter2829 = $tmp2833;
                        $l2834:;
                        ITable* $tmp2836 = test$Iter2829->$class->itable;
                        while ($tmp2836->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2836 = $tmp2836->next;
                        }
                        $fn2838 $tmp2837 = $tmp2836->methods[0];
                        panda$core$Bit $tmp2839 = $tmp2837(test$Iter2829);
                        panda$core$Bit $tmp2840 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2839);
                        if (!$tmp2840.value) goto $l2835;
                        {
                            ITable* $tmp2842 = test$Iter2829->$class->itable;
                            while ($tmp2842->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2842 = $tmp2842->next;
                            }
                            $fn2844 $tmp2843 = $tmp2842->methods[1];
                            panda$core$Object* $tmp2845 = $tmp2843(test$Iter2829);
                            test2841 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2845);
                            panda$core$Bit $tmp2847 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2841->annotations);
                            panda$core$Bit $tmp2848 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2847);
                            bool $tmp2846 = $tmp2848.value;
                            if (!$tmp2846) goto $l2849;
                            panda$core$Int64 $tmp2850 = panda$collections$Array$get_count$R$panda$core$Int64(test2841->parameters);
                            panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2850, ((panda$core$Int64) { 0 }));
                            $tmp2846 = $tmp2851.value;
                            $l2849:;
                            panda$core$Bit $tmp2852 = { $tmp2846 };
                            if ($tmp2852.value) {
                            {
                                m2824 = test2841;
                                goto $l2835;
                            }
                            }
                        }
                        goto $l2834;
                        $l2835:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2824 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2824);
                org$pandalanguage$pandac$MethodRef* $tmp2854 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2854->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2854->refCount.value = 1;
                panda$collections$ListView* $tmp2856 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2854, m2824, $tmp2856);
                ref2853 = $tmp2854;
                panda$collections$Array* $tmp2858 = (panda$collections$Array*) malloc(40);
                $tmp2858->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2858->refCount.value = 1;
                panda$collections$Array$init($tmp2858);
                children2857 = $tmp2858;
                panda$collections$Array$add$panda$collections$Array$T(children2857, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2861 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2861->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2861->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2863 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp2863->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2863->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2866);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp2863, &$s2865, ((panda$core$Int64) { 16 }), $tmp2866, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2861, ((panda$core$Int64) { 1002 }), p_position, $tmp2863, ((panda$core$Object*) ref2853), ((panda$collections$ListView*) children2857));
                methodRef2860 = $tmp2861;
                panda$collections$Array* $tmp2868 = (panda$collections$Array*) malloc(40);
                $tmp2868->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2868->refCount.value = 1;
                panda$collections$Array$init($tmp2868);
                args2867 = $tmp2868;
                org$pandalanguage$pandac$IRNode* $tmp2870 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2860, ((panda$collections$ListView*) args2867));
                return $tmp2870;
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
                    org$pandalanguage$pandac$IRNode* $tmp2871 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2871->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2871->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2871, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2871;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2873 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2873->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2873->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2873, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2873;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2875 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2875.value) {
                    {
                        panda$collections$Array* $tmp2877 = (panda$collections$Array*) malloc(40);
                        $tmp2877->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2877->refCount.value = 1;
                        panda$collections$Array$init($tmp2877);
                        children2876 = $tmp2877;
                        panda$collections$Array$add$panda$collections$Array$T(children2876, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2879 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp2879->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2879->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2879, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2876));
                        return $tmp2879;
                    }
                    }
                }
            }
            panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2881, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, &$s2883);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2884);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2885 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2885.value) {
            {
                panda$collections$Array* $tmp2887 = (panda$collections$Array*) malloc(40);
                $tmp2887->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2887->refCount.value = 1;
                panda$collections$Array$init($tmp2887);
                children2886 = $tmp2887;
                panda$collections$Array$add$panda$collections$Array$T(children2886, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2889 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2889->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2889->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2889, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2886));
                return $tmp2889;
            }
            }
            else {
            {
                panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2891, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, &$s2893);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2894);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2896 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2897 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2896);
            coerced2895 = $tmp2897;
            if (((panda$core$Bit) { coerced2895 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2899 = (panda$collections$Array*) malloc(40);
            $tmp2899->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2899->refCount.value = 1;
            panda$collections$Array$init($tmp2899);
            children2898 = $tmp2899;
            panda$collections$Array$add$panda$collections$Array$T(children2898, ((panda$core$Object*) coerced2895));
            org$pandalanguage$pandac$IRNode* $tmp2901 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2901->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2901->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2901, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2898));
            return $tmp2901;
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
    org$pandalanguage$pandac$IRNode* base2906;
    panda$core$Bit $tmp2903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2903.value);
    panda$core$Int64 $tmp2904 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2904, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2905.value);
    panda$core$Object* $tmp2907 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2908 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2907));
    base2906 = $tmp2908;
    if (((panda$core$Bit) { base2906 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2909 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2906, p_p->position);
    return $tmp2909;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2911;
    panda$collections$Array* args2914;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2917;
    org$pandalanguage$pandac$IRNode* arg2932;
    panda$core$Bit $tmp2910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2910.value);
    panda$core$Object* $tmp2912 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2913 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2912));
    m2911 = $tmp2913;
    if (((panda$core$Bit) { m2911 != NULL }).value) {
    {
        panda$collections$Array* $tmp2915 = (panda$collections$Array*) malloc(40);
        $tmp2915->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2915->refCount.value = 1;
        panda$collections$Array$init($tmp2915);
        args2914 = $tmp2915;
        panda$core$Int64 $tmp2918 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2917, ((panda$core$Int64) { 1 }), $tmp2918, ((panda$core$Bit) { false }));
        int64_t $tmp2920 = $tmp2917.min.value;
        panda$core$Int64 i2919 = { $tmp2920 };
        int64_t $tmp2922 = $tmp2917.max.value;
        bool $tmp2923 = $tmp2917.inclusive.value;
        if ($tmp2923) goto $l2930; else goto $l2931;
        $l2930:;
        if ($tmp2920 <= $tmp2922) goto $l2924; else goto $l2926;
        $l2931:;
        if ($tmp2920 < $tmp2922) goto $l2924; else goto $l2926;
        $l2924:;
        {
            panda$core$Object* $tmp2933 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2919);
            org$pandalanguage$pandac$IRNode* $tmp2934 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2933));
            arg2932 = $tmp2934;
            if (((panda$core$Bit) { arg2932 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2914, ((panda$core$Object*) arg2932));
        }
        $l2927:;
        int64_t $tmp2936 = $tmp2922 - i2919.value;
        if ($tmp2923) goto $l2937; else goto $l2938;
        $l2937:;
        if ($tmp2936 >= 1) goto $l2935; else goto $l2926;
        $l2938:;
        if ($tmp2936 > 1) goto $l2935; else goto $l2926;
        $l2935:;
        i2919.value += 1;
        goto $l2924;
        $l2926:;
        org$pandalanguage$pandac$IRNode* $tmp2941 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2911, ((panda$collections$ListView*) args2914));
        return $tmp2941;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2945;
    org$pandalanguage$pandac$ClassDecl* cl2954;
    panda$core$String* name2956;
    org$pandalanguage$pandac$ClassDecl* cl2964;
    org$pandalanguage$pandac$Symbol* s2977;
    panda$core$Bit $tmp2942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2942.value);
    panda$core$Int64 $tmp2943 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2943, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2944.value);
    panda$core$Object* $tmp2946 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2947 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2946));
    base2945 = $tmp2947;
    if (((panda$core$Bit) { base2945 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2949 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2945->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2948 = $tmp2949.value;
    if (!$tmp2948) goto $l2950;
    panda$core$Bit $tmp2951 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2945->kind, ((panda$core$Int64) { 1024 }));
    $tmp2948 = $tmp2951.value;
    $l2950:;
    panda$core$Bit $tmp2952 = { $tmp2948 };
    if ($tmp2952.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2953 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2945);
        base2945 = $tmp2953;
    }
    }
    if (((panda$core$Bit) { base2945 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2945->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2955 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2945->payload));
            cl2954 = $tmp2955;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp2958 = (($fn2957) base2945->payload->$class->vtable[0])(base2945->payload);
            panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, &$s2959);
            panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2960, p_d->payload);
            panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2961, &$s2962);
            name2956 = $tmp2963;
            org$pandalanguage$pandac$ClassDecl* $tmp2965 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2956);
            cl2964 = $tmp2965;
            if (((panda$core$Bit) { cl2964 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2966 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2966->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2966->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2968 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2969 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2964);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2966, ((panda$core$Int64) { 1001 }), p_d->position, $tmp2968, $tmp2969);
                return $tmp2966;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2970 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2970->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2970->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2972 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp2970, ((panda$core$Int64) { 1037 }), p_d->position, $tmp2972, name2956);
            return $tmp2970;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp2973 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2973));
            panda$core$Object* $tmp2974 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp2975 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2974)->rawSuper);
            cl2954 = $tmp2975;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2976 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2945->type);
            cl2954 = $tmp2976;
        }
    }
    if (((panda$core$Bit) { cl2954 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2978 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2954);
    org$pandalanguage$pandac$Symbol* $tmp2979 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2978, ((panda$core$String*) p_d->payload));
    s2977 = $tmp2979;
    if (((panda$core$Bit) { s2977 == NULL }).value) {
    {
        panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2980, ((panda$core$Object*) base2945->type));
        panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
        panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2984, p_d->payload);
        panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2985, &$s2986);
        panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, $tmp2987);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_d->position, $tmp2988);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2989 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2954);
    org$pandalanguage$pandac$IRNode* $tmp2990 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base2945, s2977, $tmp2989);
    return $tmp2990;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s2992;
    panda$core$Bit $tmp2991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp2991.value);
    org$pandalanguage$pandac$Symbol* $tmp2993 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s2992 = $tmp2993;
    if (((panda$core$Bit) { s2992 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2994 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s2992 = ((org$pandalanguage$pandac$Symbol*) $tmp2994);
    }
    }
    if (((panda$core$Bit) { s2992 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2995 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s2992, self->symbolTable);
        return $tmp2995;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2996 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2996->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2996->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp2998 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp2996, ((panda$core$Int64) { 1037 }), p_i->position, $tmp2998, ((panda$core$String*) p_i->payload));
    return $tmp2996;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved2999;
    org$pandalanguage$pandac$Type* $tmp3000 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3001 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3000);
    resolved2999 = $tmp3001;
    if (((panda$core$Bit) { resolved2999 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3002 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3002->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3002->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3004 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3002, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3004, resolved2999);
    return $tmp3002;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3012;
    org$pandalanguage$pandac$IRNode* end3020;
    org$pandalanguage$pandac$IRNode* step3028;
    panda$collections$Array* children3035;
    org$pandalanguage$pandac$Position $tmp3043;
    panda$core$Bit $tmp3006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3005 = $tmp3006.value;
    if ($tmp3005) goto $l3007;
    panda$core$Bit $tmp3008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3005 = $tmp3008.value;
    $l3007:;
    panda$core$Bit $tmp3009 = { $tmp3005 };
    PANDA_ASSERT($tmp3009.value);
    panda$core$Int64 $tmp3010 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3010, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3011.value);
    panda$core$Object* $tmp3013 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3013)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3014.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3015 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3015->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3017 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3015, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3017);
        start3012 = $tmp3015;
    }
    }
    else {
    {
        panda$core$Object* $tmp3018 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3019 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3018));
        start3012 = $tmp3019;
        if (((panda$core$Bit) { start3012 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3021 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3021)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3022.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3023 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3023->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3023->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3025 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3023, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3025);
        end3020 = $tmp3023;
    }
    }
    else {
    {
        panda$core$Object* $tmp3026 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3027 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3026));
        end3020 = $tmp3027;
        if (((panda$core$Bit) { end3020 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3029 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3029)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3030.value) {
    {
        step3028 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3031 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3032 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3031));
        org$pandalanguage$pandac$Type* $tmp3033 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3034 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3032, $tmp3033);
        step3028 = $tmp3034;
        if (((panda$core$Bit) { step3028 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3036 = (panda$collections$Array*) malloc(40);
    $tmp3036->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3036->refCount.value = 1;
    panda$collections$Array$init($tmp3036);
    children3035 = $tmp3036;
    panda$collections$Array$add$panda$collections$Array$T(children3035, ((panda$core$Object*) start3012));
    panda$collections$Array$add$panda$collections$Array$T(children3035, ((panda$core$Object*) end3020));
    if (((panda$core$Bit) { step3028 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3035, ((panda$core$Object*) step3028));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3038 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3038->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3038->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3040 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3040->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3040->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3043);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3040, &$s3042, ((panda$core$Int64) { 17 }), $tmp3043, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3038, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3040, ((panda$core$Object*) wrap_panda$core$Bit($tmp3044)), ((panda$collections$ListView*) children3035));
    return $tmp3038;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3045 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3045->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3045->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3047 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3045, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3047, ((panda$core$String*) p_s->payload));
    return $tmp3045;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3052;
    org$pandalanguage$pandac$ClassDecl* cl3053;
    panda$collections$Array* subtypes3060;
    panda$core$MutableString* name3064;
    panda$core$String* separator3068;
    panda$collections$Iterator* p$Iter3070;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3082;
    panda$collections$Array* pType3087;
    panda$core$String* pName3090;
    panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3048.value);
    panda$core$Object* $tmp3049 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3050 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3049)->annotations);
    if ($tmp3050.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3051);
        return NULL;
    }
    }
    panda$core$Object* $tmp3054 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3053 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3054);
    ITable* $tmp3055 = ((panda$collections$CollectionView*) cl3053->parameters)->$class->itable;
    while ($tmp3055->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3055 = $tmp3055->next;
    }
    $fn3057 $tmp3056 = $tmp3055->methods[0];
    panda$core$Int64 $tmp3058 = $tmp3056(((panda$collections$CollectionView*) cl3053->parameters));
    panda$core$Bit $tmp3059 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3058, ((panda$core$Int64) { 0 }));
    if ($tmp3059.value) {
    {
        panda$collections$Array* $tmp3061 = (panda$collections$Array*) malloc(40);
        $tmp3061->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3061->refCount.value = 1;
        panda$collections$Array$init($tmp3061);
        subtypes3060 = $tmp3061;
        org$pandalanguage$pandac$Type* $tmp3063 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3053);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3060, ((panda$core$Object*) $tmp3063));
        panda$core$MutableString* $tmp3065 = (panda$core$MutableString*) malloc(40);
        $tmp3065->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3065->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3065, ((org$pandalanguage$pandac$Symbol*) cl3053)->name);
        name3064 = $tmp3065;
        panda$core$MutableString$append$panda$core$String(name3064, &$s3067);
        separator3068 = &$s3069;
        {
            ITable* $tmp3071 = ((panda$collections$Iterable*) cl3053->parameters)->$class->itable;
            while ($tmp3071->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3071 = $tmp3071->next;
            }
            $fn3073 $tmp3072 = $tmp3071->methods[0];
            panda$collections$Iterator* $tmp3074 = $tmp3072(((panda$collections$Iterable*) cl3053->parameters));
            p$Iter3070 = $tmp3074;
            $l3075:;
            ITable* $tmp3077 = p$Iter3070->$class->itable;
            while ($tmp3077->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3077 = $tmp3077->next;
            }
            $fn3079 $tmp3078 = $tmp3077->methods[0];
            panda$core$Bit $tmp3080 = $tmp3078(p$Iter3070);
            panda$core$Bit $tmp3081 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3080);
            if (!$tmp3081.value) goto $l3076;
            {
                ITable* $tmp3083 = p$Iter3070->$class->itable;
                while ($tmp3083->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3083 = $tmp3083->next;
                }
                $fn3085 $tmp3084 = $tmp3083->methods[1];
                panda$core$Object* $tmp3086 = $tmp3084(p$Iter3070);
                p3082 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3086);
                panda$collections$Array* $tmp3088 = (panda$collections$Array*) malloc(40);
                $tmp3088->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3088->refCount.value = 1;
                panda$collections$Array$init($tmp3088);
                pType3087 = $tmp3088;
                panda$collections$Array$add$panda$collections$Array$T(pType3087, ((panda$core$Object*) p3082->bound));
                panda$core$String* $tmp3091 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3053)->name);
                panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3091, &$s3092);
                panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, ((org$pandalanguage$pandac$Symbol*) p3082)->name);
                panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, &$s3095);
                pName3090 = $tmp3096;
                panda$core$MutableString$append$panda$core$String(name3064, separator3068);
                panda$core$MutableString$append$panda$core$String(name3064, pName3090);
                org$pandalanguage$pandac$Type* $tmp3097 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3097->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3097->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3097, p3082);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3060, ((panda$core$Object*) $tmp3097));
                separator3068 = &$s3099;
            }
            goto $l3075;
            $l3076:;
        }
        panda$core$MutableString$append$panda$core$String(name3064, &$s3100);
        org$pandalanguage$pandac$Type* $tmp3101 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3101->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3101->refCount.value = 1;
        panda$core$String* $tmp3103 = panda$core$MutableString$finish$R$panda$core$String(name3064);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3101, $tmp3103, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3060), ((panda$core$Bit) { true }));
        type3052 = $tmp3101;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3104 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3053);
        type3052 = $tmp3104;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3105 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3105->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3105->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3105, ((panda$core$Int64) { 1025 }), p_s->position, type3052);
    return $tmp3105;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3111;
    panda$core$Bit $tmp3107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3107.value);
    panda$core$Object* $tmp3108 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3109 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3108)->annotations);
    if ($tmp3109.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3110);
        return NULL;
    }
    }
    panda$core$Object* $tmp3112 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3111 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3112);
    PANDA_ASSERT(cl3111->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3113 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3113->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3113->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3113, ((panda$core$Int64) { 1024 }), p_s->position, cl3111->rawSuper);
    return $tmp3113;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3118;
    org$pandalanguage$pandac$Type* type3121;
    panda$core$Bit $tmp3115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3115.value);
    panda$core$Int64 $tmp3116 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3116, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3117.value);
    panda$core$Object* $tmp3119 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3120 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3119));
    value3118 = $tmp3120;
    if (((panda$core$Bit) { value3118 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3122 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3123 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3122));
    org$pandalanguage$pandac$Type* $tmp3124 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3123);
    type3121 = $tmp3124;
    if (((panda$core$Bit) { type3121 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3125 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3118, type3121);
    if (((panda$core$Bit) { $tmp3125.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3126 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3118, type3121);
        return $tmp3126;
    }
    }
    panda$core$Bit $tmp3127 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3118, type3121);
    if ($tmp3127.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3128 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3118, p_c->position, ((panda$core$Bit) { true }), type3121);
        return $tmp3128;
    }
    }
    else {
    {
        panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3129, ((panda$core$Object*) value3118->type));
        panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3130, &$s3131);
        panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3133, ((panda$core$Object*) type3121));
        panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3134, &$s3135);
        panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, $tmp3136);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3137);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3138.value);
    org$pandalanguage$pandac$IRNode* $tmp3139 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3139->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3139->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3141 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3139, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3141);
    return $tmp3139;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3146;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3142 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3142;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3143 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3143->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3143->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3145 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3143, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3145, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3143;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3147 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3146 = $tmp3147;
            bool $tmp3148 = ((panda$core$Bit) { result3146 != NULL }).value;
            if (!$tmp3148) goto $l3149;
            org$pandalanguage$pandac$Type* $tmp3150 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3151 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3146->type, $tmp3150);
            $tmp3148 = $tmp3151.value;
            $l3149:;
            panda$core$Bit $tmp3152 = { $tmp3148 };
            if ($tmp3152.value) {
            {
                panda$core$Bit $tmp3153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3146->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3153.value);
                panda$core$String* $tmp3154 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3146->payload)->value);
                panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3154, &$s3155);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3146->position, $tmp3156);
                return NULL;
            }
            }
            return result3146;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3157 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3157;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3158 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3158;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3159 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3159->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3159->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3161 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3159, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3161, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3159;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3162 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3162;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3163 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3163;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3164 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3164;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3165 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3165;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3166 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3166;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3167 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3167;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3168 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3168;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3169 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3169;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3171;
    panda$collections$Array* result3174;
    panda$collections$Iterator* stmt$Iter3177;
    org$pandalanguage$pandac$ASTNode* stmt3189;
    org$pandalanguage$pandac$IRNode* compiled3194;
    panda$core$Bit $tmp3170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3170.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3172 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3172->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3172->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3172, self->symbolTable);
    symbols3171 = $tmp3172;
    self->symbolTable = symbols3171;
    panda$collections$Array* $tmp3175 = (panda$collections$Array*) malloc(40);
    $tmp3175->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3175->refCount.value = 1;
    panda$collections$Array$init($tmp3175);
    result3174 = $tmp3175;
    {
        ITable* $tmp3178 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3178->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3178 = $tmp3178->next;
        }
        $fn3180 $tmp3179 = $tmp3178->methods[0];
        panda$collections$Iterator* $tmp3181 = $tmp3179(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3177 = $tmp3181;
        $l3182:;
        ITable* $tmp3184 = stmt$Iter3177->$class->itable;
        while ($tmp3184->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3184 = $tmp3184->next;
        }
        $fn3186 $tmp3185 = $tmp3184->methods[0];
        panda$core$Bit $tmp3187 = $tmp3185(stmt$Iter3177);
        panda$core$Bit $tmp3188 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3187);
        if (!$tmp3188.value) goto $l3183;
        {
            ITable* $tmp3190 = stmt$Iter3177->$class->itable;
            while ($tmp3190->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3190 = $tmp3190->next;
            }
            $fn3192 $tmp3191 = $tmp3190->methods[1];
            panda$core$Object* $tmp3193 = $tmp3191(stmt$Iter3177);
            stmt3189 = ((org$pandalanguage$pandac$ASTNode*) $tmp3193);
            org$pandalanguage$pandac$IRNode* $tmp3195 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3189);
            compiled3194 = $tmp3195;
            if (((panda$core$Bit) { compiled3194 == NULL }).value) {
            {
                panda$core$Object* $tmp3196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3171->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3196);
                return NULL;
            }
            }
            panda$core$Bit $tmp3197 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3194->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp3197.value);
            panda$collections$Array$add$panda$collections$Array$T(result3174, ((panda$core$Object*) compiled3194));
        }
        goto $l3182;
        $l3183:;
    }
    panda$core$Object* $tmp3198 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3171->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3198);
    org$pandalanguage$pandac$IRNode* $tmp3199 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3199->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3199->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3199, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3174));
    return $tmp3199;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3209;
    org$pandalanguage$pandac$IRNode* ifTrue3214;
    panda$collections$Array* children3217;
    org$pandalanguage$pandac$IRNode* ifFalse3222;
    panda$core$Bit $tmp3201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3201.value);
    panda$core$Int64 $tmp3203 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3203, ((panda$core$Int64) { 2 }));
    bool $tmp3202 = $tmp3204.value;
    if ($tmp3202) goto $l3205;
    panda$core$Int64 $tmp3206 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3206, ((panda$core$Int64) { 3 }));
    $tmp3202 = $tmp3207.value;
    $l3205:;
    panda$core$Bit $tmp3208 = { $tmp3202 };
    PANDA_ASSERT($tmp3208.value);
    panda$core$Object* $tmp3210 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3211 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3210));
    org$pandalanguage$pandac$Type* $tmp3212 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3213 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3211, $tmp3212);
    test3209 = $tmp3213;
    if (((panda$core$Bit) { test3209 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3215 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3216 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3215));
    ifTrue3214 = $tmp3216;
    if (((panda$core$Bit) { ifTrue3214 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3218 = (panda$collections$Array*) malloc(40);
    $tmp3218->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3218->refCount.value = 1;
    panda$collections$Array$init($tmp3218);
    children3217 = $tmp3218;
    panda$collections$Array$add$panda$collections$Array$T(children3217, ((panda$core$Object*) test3209));
    panda$collections$Array$add$panda$collections$Array$T(children3217, ((panda$core$Object*) ifTrue3214));
    panda$core$Int64 $tmp3220 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3220, ((panda$core$Int64) { 3 }));
    if ($tmp3221.value) {
    {
        panda$core$Object* $tmp3223 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3224 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3223));
        ifFalse3222 = $tmp3224;
        if (((panda$core$Bit) { ifFalse3222 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3217, ((panda$core$Object*) ifFalse3222));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3225 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3225->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3225->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3225, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3217));
    return $tmp3225;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3227;
    org$pandalanguage$pandac$IRNode* list3228;
    org$pandalanguage$pandac$Type* t3235;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3268;
    org$pandalanguage$pandac$IRNode* body3270;
    panda$collections$Array* children3272;
    panda$core$Bit $tmp3230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3229 = $tmp3230.value;
    if (!$tmp3229) goto $l3231;
    panda$core$Int64 $tmp3232 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3232, ((panda$core$Int64) { 1 }));
    $tmp3229 = $tmp3233.value;
    $l3231:;
    panda$core$Bit $tmp3234 = { $tmp3229 };
    if ($tmp3234.value) {
    {
        panda$core$Object* $tmp3236 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3237 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3236));
        org$pandalanguage$pandac$Type* $tmp3238 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3237);
        t3235 = $tmp3238;
        panda$core$Bit $tmp3239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3239.value) {
        {
            panda$core$Int64 $tmp3240 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3240, ((panda$core$Int64) { 2 }));
            if ($tmp3241.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3242 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3235);
                org$pandalanguage$pandac$IRNode* $tmp3243 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3242);
                list3228 = $tmp3243;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3244 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3244, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3245.value);
                org$pandalanguage$pandac$Type* $tmp3246 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3247 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3235, $tmp3246);
                org$pandalanguage$pandac$IRNode* $tmp3248 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3247);
                list3228 = $tmp3248;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3249 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3249.value) {
        {
            panda$core$Object* $tmp3250 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3251 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3235, ((org$pandalanguage$pandac$Type*) $tmp3250));
            org$pandalanguage$pandac$IRNode* $tmp3252 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3251);
            list3228 = $tmp3252;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3253 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3235);
        panda$core$Int64$nullable $tmp3254 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3253);
        if (((panda$core$Bit) { $tmp3254.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3255 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3235);
            org$pandalanguage$pandac$IRNode* $tmp3256 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3255);
            list3228 = $tmp3256;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3257 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3258 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3235, $tmp3257);
            org$pandalanguage$pandac$IRNode* $tmp3259 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3258);
            list3228 = $tmp3259;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3260 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3228 = $tmp3260;
    }
    }
    if (((panda$core$Bit) { list3228 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3228->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3261.value) {
    {
        panda$core$Object* $tmp3262 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3228->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3262)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3263.value);
        panda$core$Object* $tmp3264 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3228->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3265 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3264)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3227 = ((org$pandalanguage$pandac$Type*) $tmp3265);
    }
    }
    else {
    {
        panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3228->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3266.value);
        panda$core$Object* $tmp3267 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3228->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3227 = ((org$pandalanguage$pandac$Type*) $tmp3267);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3269 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3227);
    target3268 = $tmp3269;
    if (((panda$core$Bit) { target3268 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3268->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3271 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3270 = $tmp3271;
    if (((panda$core$Bit) { body3270 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3273 = (panda$collections$Array*) malloc(40);
    $tmp3273->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3273->refCount.value = 1;
    panda$collections$Array$init($tmp3273);
    children3272 = $tmp3273;
    panda$collections$Array$add$panda$collections$Array$T(children3272, ((panda$core$Object*) target3268->target));
    panda$collections$Array$add$panda$collections$Array$T(children3272, ((panda$core$Object*) list3228));
    panda$collections$Array$add$panda$collections$Array$T(children3272, ((panda$core$Object*) body3270));
    org$pandalanguage$pandac$IRNode* $tmp3275 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3275->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3275->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3275, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3272));
    return $tmp3275;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3284;
    org$pandalanguage$pandac$Variable* targetVar3288;
    panda$collections$Array* subtypes3289;
    org$pandalanguage$pandac$Type* iterType3293;
    org$pandalanguage$pandac$Variable* iter3304;
    panda$collections$Array* statements3309;
    panda$collections$Array* declChildren3312;
    panda$collections$Array* varChildren3317;
    panda$collections$Array* whileChildren3324;
    org$pandalanguage$pandac$IRNode* done3327;
    org$pandalanguage$pandac$IRNode* notCall3334;
    panda$collections$Array* valueDeclChildren3339;
    org$pandalanguage$pandac$IRNode* next3344;
    panda$collections$Array* valueVarChildren3351;
    org$pandalanguage$pandac$IRNode* block3356;
    panda$collections$Array* blockChildren3358;
    panda$core$Bit $tmp3278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3277 = $tmp3278.value;
    if (!$tmp3277) goto $l3279;
    panda$core$Object* $tmp3280 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3281 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3282 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3280), $tmp3281);
    $tmp3277 = $tmp3282.value;
    $l3279:;
    panda$core$Bit $tmp3283 = { $tmp3277 };
    PANDA_ASSERT($tmp3283.value);
    panda$core$Object* $tmp3285 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3286 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3285));
    target3284 = $tmp3286;
    if (((panda$core$Bit) { target3284 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3284->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3287.value);
    targetVar3288 = ((org$pandalanguage$pandac$Variable*) target3284->target->payload);
    panda$collections$Array* $tmp3290 = (panda$collections$Array*) malloc(40);
    $tmp3290->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3290->refCount.value = 1;
    panda$collections$Array$init($tmp3290);
    subtypes3289 = $tmp3290;
    org$pandalanguage$pandac$Type* $tmp3292 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3289, ((panda$core$Object*) $tmp3292));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3289, ((panda$core$Object*) target3284->target->type));
    org$pandalanguage$pandac$Type* $tmp3294 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3294->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3294->refCount.value = 1;
    panda$core$Object* $tmp3296 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3289, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3297 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3296));
    panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, &$s3298);
    panda$core$Object* $tmp3300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3289, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3299, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3300)));
    panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3301, &$s3302);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3294, $tmp3303, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3289), ((panda$core$Bit) { true }));
    iterType3293 = $tmp3294;
    org$pandalanguage$pandac$Variable* $tmp3305 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3305->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3305->refCount.value = 1;
    panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3288)->name, &$s3307);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3305, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3308, iterType3293);
    iter3304 = $tmp3305;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3304));
    panda$collections$Array* $tmp3310 = (panda$collections$Array*) malloc(40);
    $tmp3310->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3310->refCount.value = 1;
    panda$collections$Array$init($tmp3310);
    statements3309 = $tmp3310;
    panda$collections$Array* $tmp3313 = (panda$collections$Array*) malloc(40);
    $tmp3313->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3313->refCount.value = 1;
    panda$collections$Array$init($tmp3313);
    declChildren3312 = $tmp3313;
    org$pandalanguage$pandac$IRNode* $tmp3315 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3315->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3315->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3315, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3304->type, iter3304);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3312, ((panda$core$Object*) $tmp3315));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3312, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3318 = (panda$collections$Array*) malloc(40);
    $tmp3318->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3318->refCount.value = 1;
    panda$collections$Array$init($tmp3318);
    varChildren3317 = $tmp3318;
    org$pandalanguage$pandac$IRNode* $tmp3320 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3320->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3320->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3320, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3304)->position, ((panda$collections$ListView*) declChildren3312));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3317, ((panda$core$Object*) $tmp3320));
    org$pandalanguage$pandac$IRNode* $tmp3322 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3322->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3322->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3322, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3304)->position, ((panda$collections$ListView*) varChildren3317));
    panda$collections$Array$add$panda$collections$Array$T(statements3309, ((panda$core$Object*) $tmp3322));
    panda$collections$Array* $tmp3325 = (panda$collections$Array*) malloc(40);
    $tmp3325->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3325->refCount.value = 1;
    panda$collections$Array$init($tmp3325);
    whileChildren3324 = $tmp3325;
    org$pandalanguage$pandac$IRNode* $tmp3328 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3328->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3328->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3328, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3304)->position, iter3304->type, iter3304);
    panda$collections$Array* $tmp3331 = (panda$collections$Array*) malloc(40);
    $tmp3331->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3331->refCount.value = 1;
    panda$collections$Array$init($tmp3331);
    org$pandalanguage$pandac$IRNode* $tmp3333 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3328, &$s3330, ((panda$collections$ListView*) $tmp3331), NULL);
    done3327 = $tmp3333;
    if (((panda$core$Bit) { done3327 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3336 = (panda$collections$Array*) malloc(40);
    $tmp3336->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3336->refCount.value = 1;
    panda$collections$Array$init($tmp3336);
    org$pandalanguage$pandac$IRNode* $tmp3338 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3327, &$s3335, ((panda$collections$ListView*) $tmp3336), NULL);
    notCall3334 = $tmp3338;
    if (((panda$core$Bit) { notCall3334 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3324, ((panda$core$Object*) notCall3334));
    panda$collections$Array* $tmp3340 = (panda$collections$Array*) malloc(40);
    $tmp3340->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3340->refCount.value = 1;
    panda$collections$Array$init($tmp3340);
    valueDeclChildren3339 = $tmp3340;
    org$pandalanguage$pandac$IRNode* $tmp3342 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3342->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3342->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3342, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3288->type, targetVar3288);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3339, ((panda$core$Object*) $tmp3342));
    org$pandalanguage$pandac$IRNode* $tmp3345 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3345->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3345->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3345, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3304->type, iter3304);
    panda$collections$Array* $tmp3348 = (panda$collections$Array*) malloc(40);
    $tmp3348->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3348->refCount.value = 1;
    panda$collections$Array$init($tmp3348);
    org$pandalanguage$pandac$IRNode* $tmp3350 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3345, &$s3347, ((panda$collections$ListView*) $tmp3348), NULL);
    next3344 = $tmp3350;
    PANDA_ASSERT(((panda$core$Bit) { next3344 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3339, ((panda$core$Object*) next3344));
    panda$collections$Array* $tmp3352 = (panda$collections$Array*) malloc(40);
    $tmp3352->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3352->refCount.value = 1;
    panda$collections$Array$init($tmp3352);
    valueVarChildren3351 = $tmp3352;
    org$pandalanguage$pandac$IRNode* $tmp3354 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3354->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3354->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3354, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3339));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3351, ((panda$core$Object*) $tmp3354));
    org$pandalanguage$pandac$IRNode* $tmp3357 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3356 = $tmp3357;
    if (((panda$core$Bit) { block3356 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3359 = (panda$collections$Array*) malloc(40);
    $tmp3359->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3359->refCount.value = 1;
    panda$collections$Array$init($tmp3359);
    blockChildren3358 = $tmp3359;
    org$pandalanguage$pandac$IRNode* $tmp3361 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3361->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3361->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3361, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3351));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3358, ((panda$core$Object*) $tmp3361));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3358, ((panda$collections$CollectionView*) block3356->children));
    org$pandalanguage$pandac$IRNode* $tmp3363 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3363->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3363->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3363, ((panda$core$Int64) { 1000 }), block3356->position, ((panda$collections$ListView*) blockChildren3358));
    block3356 = $tmp3363;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3324, ((panda$core$Object*) block3356));
    org$pandalanguage$pandac$IRNode* $tmp3365 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3365->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3365->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3365, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3324));
    panda$collections$Array$add$panda$collections$Array$T(statements3309, ((panda$core$Object*) $tmp3365));
    org$pandalanguage$pandac$IRNode* $tmp3367 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3367->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3367->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3367, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3309));
    return $tmp3367;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3372;
    org$pandalanguage$pandac$SymbolTable* symbols3375;
    org$pandalanguage$pandac$IRNode* result3378;
    panda$core$Bit found3392;
    panda$collections$Iterator* intf$Iter3393;
    org$pandalanguage$pandac$Type* intf3406;
    org$pandalanguage$pandac$IRNode* iterator3418;
    org$pandalanguage$pandac$IRNode* iterable3430;
    org$pandalanguage$pandac$IRNode* iterator3432;
    panda$core$Bit $tmp3369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3369.value);
    panda$core$Int64 $tmp3370 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3370, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3371.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3373 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3374 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3373));
    list3372 = $tmp3374;
    if (((panda$core$Bit) { list3372 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3376 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3376->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3376->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3376, self->symbolTable);
    symbols3375 = $tmp3376;
    self->symbolTable = symbols3375;
    panda$core$Bit $tmp3381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3372->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3380 = $tmp3381.value;
    if ($tmp3380) goto $l3382;
    panda$core$Bit $tmp3383 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3372->type);
    $tmp3380 = $tmp3383.value;
    $l3382:;
    panda$core$Bit $tmp3384 = { $tmp3380 };
    bool $tmp3379 = $tmp3384.value;
    if ($tmp3379) goto $l3385;
    panda$core$Bit $tmp3386 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3372->type);
    $tmp3379 = $tmp3386.value;
    $l3385:;
    panda$core$Bit $tmp3387 = { $tmp3379 };
    if ($tmp3387.value) {
    {
        panda$core$Object* $tmp3388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3389 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3390 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3388), list3372, ((org$pandalanguage$pandac$ASTNode*) $tmp3389));
        result3378 = $tmp3390;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3391 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3372);
        list3372 = $tmp3391;
        if (((panda$core$Bit) { list3372 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3392 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3394 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3372->type);
            ITable* $tmp3395 = ((panda$collections$Iterable*) $tmp3394)->$class->itable;
            while ($tmp3395->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3395 = $tmp3395->next;
            }
            $fn3397 $tmp3396 = $tmp3395->methods[0];
            panda$collections$Iterator* $tmp3398 = $tmp3396(((panda$collections$Iterable*) $tmp3394));
            intf$Iter3393 = $tmp3398;
            $l3399:;
            ITable* $tmp3401 = intf$Iter3393->$class->itable;
            while ($tmp3401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3401 = $tmp3401->next;
            }
            $fn3403 $tmp3402 = $tmp3401->methods[0];
            panda$core$Bit $tmp3404 = $tmp3402(intf$Iter3393);
            panda$core$Bit $tmp3405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3404);
            if (!$tmp3405.value) goto $l3400;
            {
                ITable* $tmp3407 = intf$Iter3393->$class->itable;
                while ($tmp3407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3407 = $tmp3407->next;
                }
                $fn3409 $tmp3408 = $tmp3407->methods[1];
                panda$core$Object* $tmp3410 = $tmp3408(intf$Iter3393);
                intf3406 = ((org$pandalanguage$pandac$Type*) $tmp3410);
                panda$core$Bit $tmp3412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3406->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3411 = $tmp3412.value;
                if (!$tmp3411) goto $l3413;
                panda$core$Object* $tmp3414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3406->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3415 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3416 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3414), $tmp3415);
                $tmp3411 = $tmp3416.value;
                $l3413:;
                panda$core$Bit $tmp3417 = { $tmp3411 };
                if ($tmp3417.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3419 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3372, intf3406);
                    iterator3418 = $tmp3419;
                    panda$core$Object* $tmp3420 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3421 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3422 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3420), iterator3418, ((org$pandalanguage$pandac$ASTNode*) $tmp3421));
                    result3378 = $tmp3422;
                    found3392 = ((panda$core$Bit) { true });
                    goto $l3400;
                }
                }
                panda$core$Bit $tmp3424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3406->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3423 = $tmp3424.value;
                if (!$tmp3423) goto $l3425;
                panda$core$Object* $tmp3426 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3406->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3427 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3428 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3426), $tmp3427);
                $tmp3423 = $tmp3428.value;
                $l3425:;
                panda$core$Bit $tmp3429 = { $tmp3423 };
                if ($tmp3429.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3431 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3372, intf3406);
                    iterable3430 = $tmp3431;
                    panda$collections$Array* $tmp3434 = (panda$collections$Array*) malloc(40);
                    $tmp3434->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3434->refCount.value = 1;
                    panda$collections$Array$init($tmp3434);
                    org$pandalanguage$pandac$IRNode* $tmp3436 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3430, &$s3433, ((panda$collections$ListView*) $tmp3434));
                    iterator3432 = $tmp3436;
                    panda$core$Object* $tmp3437 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3438 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3439 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3437), iterator3432, ((org$pandalanguage$pandac$ASTNode*) $tmp3438));
                    result3378 = $tmp3439;
                    found3392 = ((panda$core$Bit) { true });
                    goto $l3400;
                }
                }
            }
            goto $l3399;
            $l3400:;
        }
        panda$core$Bit $tmp3440 = panda$core$Bit$$NOT$R$panda$core$Bit(found3392);
        if ($tmp3440.value) {
        {
            panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3441, ((panda$core$Object*) list3372->type));
            panda$core$String* $tmp3444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3442, &$s3443);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3372->position, $tmp3444);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3445 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3375->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3445);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3378;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3449;
    org$pandalanguage$pandac$IRNode* stmt3454;
    panda$collections$Array* children3457;
    panda$core$Bit $tmp3446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3446.value);
    panda$core$Int64 $tmp3447 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3447, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3448.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3450 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3451 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3450));
    org$pandalanguage$pandac$Type* $tmp3452 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3453 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3451, $tmp3452);
    test3449 = $tmp3453;
    if (((panda$core$Bit) { test3449 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3455 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3456 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3455));
    stmt3454 = $tmp3456;
    if (((panda$core$Bit) { stmt3454 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3458 = (panda$collections$Array*) malloc(40);
    $tmp3458->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3458->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3458, ((panda$core$Int64) { 2 }));
    children3457 = $tmp3458;
    panda$collections$Array$add$panda$collections$Array$T(children3457, ((panda$core$Object*) test3449));
    panda$collections$Array$add$panda$collections$Array$T(children3457, ((panda$core$Object*) stmt3454));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3460 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3460->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3460->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3460, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3457));
    return $tmp3460;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3465;
    org$pandalanguage$pandac$IRNode* test3468;
    panda$collections$Array* children3473;
    panda$core$Bit $tmp3462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3462.value);
    panda$core$Int64 $tmp3463 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3463, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3464.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3466 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3467 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3466));
    stmt3465 = $tmp3467;
    if (((panda$core$Bit) { stmt3465 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3469 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3470 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3469));
    org$pandalanguage$pandac$Type* $tmp3471 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3472 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3470, $tmp3471);
    test3468 = $tmp3472;
    if (((panda$core$Bit) { test3468 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3474 = (panda$collections$Array*) malloc(40);
    $tmp3474->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3474->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3474, ((panda$core$Int64) { 2 }));
    children3473 = $tmp3474;
    panda$collections$Array$add$panda$collections$Array$T(children3473, ((panda$core$Object*) stmt3465));
    panda$collections$Array$add$panda$collections$Array$T(children3473, ((panda$core$Object*) test3468));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3476 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3476->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3476->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3476, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3473));
    return $tmp3476;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3481;
    panda$collections$Array* children3484;
    panda$core$Bit $tmp3478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3478.value);
    panda$core$Int64 $tmp3479 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3479, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3480.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3482 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3483 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3482));
    stmt3481 = $tmp3483;
    if (((panda$core$Bit) { stmt3481 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3485 = (panda$collections$Array*) malloc(40);
    $tmp3485->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3485->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3485, ((panda$core$Int64) { 1 }));
    children3484 = $tmp3485;
    panda$collections$Array$add$panda$collections$Array$T(children3484, ((panda$core$Object*) stmt3481));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3487 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3487->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3487->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3487, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3484));
    return $tmp3487;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3489;
    org$pandalanguage$pandac$Type* type3493;
    org$pandalanguage$pandac$Variable* v3504;
    value3489 = p_rawValue;
    bool $tmp3490 = ((panda$core$Bit) { value3489 == NULL }).value;
    if ($tmp3490) goto $l3491;
    $tmp3490 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3491:;
    panda$core$Bit $tmp3492 = { $tmp3490 };
    PANDA_ASSERT($tmp3492.value);
    switch (p_t->kind.value) {
        case 106:
        {
            panda$core$Int64 $tmp3494 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3494, ((panda$core$Int64) { 1 }));
            if ($tmp3495.value) {
            {
                panda$core$Object* $tmp3496 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3497 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3496));
                org$pandalanguage$pandac$Type* $tmp3498 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3497);
                type3493 = $tmp3498;
            }
            }
            else {
            if (((panda$core$Bit) { value3489 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3499 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3489);
                value3489 = $tmp3499;
                if (((panda$core$Bit) { value3489 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3500 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3489);
                type3493 = $tmp3500;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3493 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3501);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3489 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3502 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3489, type3493);
                value3489 = $tmp3502;
                if (((panda$core$Bit) { value3489 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3503 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3489->type, type3493);
                PANDA_ASSERT($tmp3503.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3505 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3505->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3505->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3505, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3493);
            v3504 = $tmp3505;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3504));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3507 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3507->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3507->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3509 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3509->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3509->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3509, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3504)->position, v3504->type, v3504);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3507, $tmp3509, value3489);
            return $tmp3507;
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
    org$pandalanguage$pandac$IRNode* value3519;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3524;
    panda$collections$Array* children3527;
    org$pandalanguage$pandac$Variable* v3531;
    panda$core$Bit $tmp3511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3511.value);
    panda$core$Int64 $tmp3513 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3513, ((panda$core$Int64) { 1 }));
    bool $tmp3512 = $tmp3514.value;
    if ($tmp3512) goto $l3515;
    panda$core$Int64 $tmp3516 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3516, ((panda$core$Int64) { 2 }));
    $tmp3512 = $tmp3517.value;
    $l3515:;
    panda$core$Bit $tmp3518 = { $tmp3512 };
    PANDA_ASSERT($tmp3518.value);
    panda$core$Int64 $tmp3520 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3520, ((panda$core$Int64) { 2 }));
    if ($tmp3521.value) {
    {
        panda$core$Object* $tmp3522 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3523 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3522));
        value3519 = $tmp3523;
        if (((panda$core$Bit) { value3519 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3519 = NULL;
    }
    }
    panda$core$Object* $tmp3525 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3526 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3525), p_varKind, value3519, NULL);
    target3524 = $tmp3526;
    if (((panda$core$Bit) { target3524 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3528 = (panda$collections$Array*) malloc(40);
    $tmp3528->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3528->refCount.value = 1;
    panda$collections$Array$init($tmp3528);
    children3527 = $tmp3528;
    panda$collections$Array$add$panda$collections$Array$T(children3527, ((panda$core$Object*) target3524->target));
    if (((panda$core$Bit) { target3524->value != NULL }).value) {
    {
        panda$core$Bit $tmp3530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3524->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3530.value);
        v3531 = ((org$pandalanguage$pandac$Variable*) target3524->target->payload);
        v3531->initialValue = target3524->value;
        panda$collections$Array$add$panda$collections$Array$T(children3527, ((panda$core$Object*) target3524->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3532 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3532->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3532->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3532, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3527));
    return $tmp3532;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3535;
    panda$collections$Iterator* label$Iter3536;
    panda$core$String* label3548;
    panda$core$Bit $tmp3534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3534.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3535 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3537 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3537->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3537 = $tmp3537->next;
            }
            $fn3539 $tmp3538 = $tmp3537->methods[0];
            panda$collections$Iterator* $tmp3540 = $tmp3538(((panda$collections$Iterable*) self->loops));
            label$Iter3536 = $tmp3540;
            $l3541:;
            ITable* $tmp3543 = label$Iter3536->$class->itable;
            while ($tmp3543->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3543 = $tmp3543->next;
            }
            $fn3545 $tmp3544 = $tmp3543->methods[0];
            panda$core$Bit $tmp3546 = $tmp3544(label$Iter3536);
            panda$core$Bit $tmp3547 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3546);
            if (!$tmp3547.value) goto $l3542;
            {
                ITable* $tmp3549 = label$Iter3536->$class->itable;
                while ($tmp3549->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3549 = $tmp3549->next;
                }
                $fn3551 $tmp3550 = $tmp3549->methods[1];
                panda$core$Object* $tmp3552 = $tmp3550(label$Iter3536);
                label3548 = ((panda$core$String*) $tmp3552);
                bool $tmp3553 = ((panda$core$Bit) { label3548 != NULL }).value;
                if (!$tmp3553) goto $l3554;
                panda$core$Bit $tmp3555 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3548, ((panda$core$String*) p_b->payload));
                $tmp3553 = $tmp3555.value;
                $l3554:;
                panda$core$Bit $tmp3556 = { $tmp3553 };
                if ($tmp3556.value) {
                {
                    found3535 = ((panda$core$Bit) { true });
                    goto $l3542;
                }
                }
            }
            goto $l3541;
            $l3542:;
        }
        panda$core$Bit $tmp3557 = panda$core$Bit$$NOT$R$panda$core$Bit(found3535);
        if ($tmp3557.value) {
        {
            panda$core$String* $tmp3559 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3558, p_b->payload);
            panda$core$String* $tmp3561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3559, &$s3560);
            panda$core$String* $tmp3563 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3562, p_b->payload);
            panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3563, &$s3564);
            panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3561, $tmp3565);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3566);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3567 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3567, ((panda$core$Int64) { 0 }));
    if ($tmp3568.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3569);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3570 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3570->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3570->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3570, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3570;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3573;
    panda$collections$Iterator* label$Iter3574;
    panda$core$String* label3586;
    panda$core$Bit $tmp3572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3572.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found3573 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3575 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3575->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3575 = $tmp3575->next;
            }
            $fn3577 $tmp3576 = $tmp3575->methods[0];
            panda$collections$Iterator* $tmp3578 = $tmp3576(((panda$collections$Iterable*) self->loops));
            label$Iter3574 = $tmp3578;
            $l3579:;
            ITable* $tmp3581 = label$Iter3574->$class->itable;
            while ($tmp3581->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3581 = $tmp3581->next;
            }
            $fn3583 $tmp3582 = $tmp3581->methods[0];
            panda$core$Bit $tmp3584 = $tmp3582(label$Iter3574);
            panda$core$Bit $tmp3585 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3584);
            if (!$tmp3585.value) goto $l3580;
            {
                ITable* $tmp3587 = label$Iter3574->$class->itable;
                while ($tmp3587->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3587 = $tmp3587->next;
                }
                $fn3589 $tmp3588 = $tmp3587->methods[1];
                panda$core$Object* $tmp3590 = $tmp3588(label$Iter3574);
                label3586 = ((panda$core$String*) $tmp3590);
                bool $tmp3591 = ((panda$core$Bit) { label3586 != NULL }).value;
                if (!$tmp3591) goto $l3592;
                panda$core$Bit $tmp3593 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3586, ((panda$core$String*) p_c->payload));
                $tmp3591 = $tmp3593.value;
                $l3592:;
                panda$core$Bit $tmp3594 = { $tmp3591 };
                if ($tmp3594.value) {
                {
                    found3573 = ((panda$core$Bit) { true });
                    goto $l3580;
                }
                }
            }
            goto $l3579;
            $l3580:;
        }
        panda$core$Bit $tmp3595 = panda$core$Bit$$NOT$R$panda$core$Bit(found3573);
        if ($tmp3595.value) {
        {
            panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3596, p_c->payload);
            panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3597, &$s3598);
            panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3600, p_c->payload);
            panda$core$String* $tmp3603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3601, &$s3602);
            panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3599, $tmp3603);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3604);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3605 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3605, ((panda$core$Int64) { 0 }));
    if ($tmp3606.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3607);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3608 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3608->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3608->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3608, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3608;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3617;
    panda$collections$Array* children3622;
    panda$core$Bit $tmp3610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3610.value);
    panda$core$Int64 $tmp3611 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3611, ((panda$core$Int64) { 1 }));
    if ($tmp3612.value) {
    {
        panda$core$Object* $tmp3613 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3614 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3615 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3613)->returnType, $tmp3614);
        if ($tmp3615.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3616);
            return NULL;
        }
        }
        panda$core$Object* $tmp3618 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3619 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3618));
        panda$core$Object* $tmp3620 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3621 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3619, ((org$pandalanguage$pandac$MethodDecl*) $tmp3620)->returnType);
        value3617 = $tmp3621;
        if (((panda$core$Bit) { value3617 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3623 = (panda$collections$Array*) malloc(40);
        $tmp3623->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3623->refCount.value = 1;
        panda$collections$Array$init($tmp3623);
        children3622 = $tmp3623;
        panda$collections$Array$add$panda$collections$Array$T(children3622, ((panda$core$Object*) value3617));
        org$pandalanguage$pandac$IRNode* $tmp3625 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3625->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3625->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3625, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3622));
        return $tmp3625;
    }
    }
    panda$core$Int64 $tmp3627 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3627, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3628.value);
    panda$core$Object* $tmp3629 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3630 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3631 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3629)->returnType, $tmp3630);
    if ($tmp3631.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3632);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3633 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3633->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3633->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3633, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3633;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3643;
    org$pandalanguage$pandac$ClassDecl* bit3648;
    org$pandalanguage$pandac$Symbol* value3651;
    panda$collections$Array* fieldChildren3654;
    panda$collections$Array* children3660;
    org$pandalanguage$pandac$IRNode* msg3665;
    panda$core$Bit $tmp3635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3635.value);
    panda$core$Int64 $tmp3637 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3637, ((panda$core$Int64) { 1 }));
    bool $tmp3636 = $tmp3638.value;
    if ($tmp3636) goto $l3639;
    panda$core$Int64 $tmp3640 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3640, ((panda$core$Int64) { 2 }));
    $tmp3636 = $tmp3641.value;
    $l3639:;
    panda$core$Bit $tmp3642 = { $tmp3636 };
    PANDA_ASSERT($tmp3642.value);
    panda$core$Object* $tmp3644 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3645 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3644));
    test3643 = $tmp3645;
    if (((panda$core$Bit) { test3643 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3646 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3647 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3643, $tmp3646);
    test3643 = $tmp3647;
    if (((panda$core$Bit) { test3643 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3649 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3650 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3649);
    bit3648 = $tmp3650;
    PANDA_ASSERT(((panda$core$Bit) { bit3648 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3653 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3648->symbolTable, &$s3652);
    value3651 = $tmp3653;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3651));
    panda$collections$Array* $tmp3655 = (panda$collections$Array*) malloc(40);
    $tmp3655->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3655->refCount.value = 1;
    panda$collections$Array$init($tmp3655);
    fieldChildren3654 = $tmp3655;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3654, ((panda$core$Object*) test3643));
    org$pandalanguage$pandac$IRNode* $tmp3657 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3657->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3657->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3659 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3657, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3659, ((panda$core$Object*) value3651), ((panda$collections$ListView*) fieldChildren3654));
    test3643 = $tmp3657;
    panda$collections$Array* $tmp3661 = (panda$collections$Array*) malloc(40);
    $tmp3661->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3661->refCount.value = 1;
    panda$collections$Array$init($tmp3661);
    children3660 = $tmp3661;
    panda$collections$Array$add$panda$collections$Array$T(children3660, ((panda$core$Object*) test3643));
    panda$core$Int64 $tmp3663 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3663, ((panda$core$Int64) { 2 }));
    if ($tmp3664.value) {
    {
        panda$core$Object* $tmp3666 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3667 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3666));
        msg3665 = $tmp3667;
        if (((panda$core$Bit) { msg3665 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3668 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3669 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3665, $tmp3668);
        msg3665 = $tmp3669;
        if (((panda$core$Bit) { msg3665 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3660, ((panda$core$Object*) msg3665));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3670 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3670->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3670->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3670, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3660));
    return $tmp3670;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3685;
    panda$core$Int64 varKind3686;
    panda$collections$Array* decls3687;
    panda$collections$Iterator* astDecl$Iter3690;
    org$pandalanguage$pandac$ASTNode* astDecl3702;
    org$pandalanguage$pandac$IRNode* decl3707;
    panda$core$Bit $tmp3675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3674 = $tmp3675.value;
    if ($tmp3674) goto $l3676;
    panda$core$Bit $tmp3677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3674 = $tmp3677.value;
    $l3676:;
    panda$core$Bit $tmp3678 = { $tmp3674 };
    bool $tmp3673 = $tmp3678.value;
    if ($tmp3673) goto $l3679;
    panda$core$Bit $tmp3680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3673 = $tmp3680.value;
    $l3679:;
    panda$core$Bit $tmp3681 = { $tmp3673 };
    bool $tmp3672 = $tmp3681.value;
    if ($tmp3672) goto $l3682;
    panda$core$Bit $tmp3683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3672 = $tmp3683.value;
    $l3682:;
    panda$core$Bit $tmp3684 = { $tmp3672 };
    PANDA_ASSERT($tmp3684.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3685 = ((panda$core$Int64) { 1017 });
            varKind3686 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3685 = ((panda$core$Int64) { 1018 });
            varKind3686 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3685 = ((panda$core$Int64) { 1019 });
            varKind3686 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3685 = ((panda$core$Int64) { 1020 });
            varKind3686 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3688 = (panda$collections$Array*) malloc(40);
    $tmp3688->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3688->refCount.value = 1;
    panda$collections$Array$init($tmp3688);
    decls3687 = $tmp3688;
    {
        ITable* $tmp3691 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3691->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3691 = $tmp3691->next;
        }
        $fn3693 $tmp3692 = $tmp3691->methods[0];
        panda$collections$Iterator* $tmp3694 = $tmp3692(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3690 = $tmp3694;
        $l3695:;
        ITable* $tmp3697 = astDecl$Iter3690->$class->itable;
        while ($tmp3697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3697 = $tmp3697->next;
        }
        $fn3699 $tmp3698 = $tmp3697->methods[0];
        panda$core$Bit $tmp3700 = $tmp3698(astDecl$Iter3690);
        panda$core$Bit $tmp3701 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3700);
        if (!$tmp3701.value) goto $l3696;
        {
            ITable* $tmp3703 = astDecl$Iter3690->$class->itable;
            while ($tmp3703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3703 = $tmp3703->next;
            }
            $fn3705 $tmp3704 = $tmp3703->methods[1];
            panda$core$Object* $tmp3706 = $tmp3704(astDecl$Iter3690);
            astDecl3702 = ((org$pandalanguage$pandac$ASTNode*) $tmp3706);
            org$pandalanguage$pandac$IRNode* $tmp3708 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3702, varKind3686);
            decl3707 = $tmp3708;
            if (((panda$core$Bit) { decl3707 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3687, ((panda$core$Object*) decl3707));
        }
        goto $l3695;
        $l3696:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3709 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3709->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3709->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3709, nodeKind3685, p_v->position, ((panda$collections$ListView*) decls3687));
    return $tmp3709;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3711;
    panda$collections$Array* callChildren3714;
    org$pandalanguage$pandac$IRNode* testValue3717;
    org$pandalanguage$pandac$IRNode* $tmp3712 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3712->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3712->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3712, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3711 = $tmp3712;
    panda$collections$Array* $tmp3715 = (panda$collections$Array*) malloc(40);
    $tmp3715->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3715->refCount.value = 1;
    panda$collections$Array$init($tmp3715);
    callChildren3714 = $tmp3715;
    org$pandalanguage$pandac$IRNode* $tmp3718 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3717 = $tmp3718;
    if (((panda$core$Bit) { testValue3717 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3714, ((panda$core$Object*) testValue3717));
    org$pandalanguage$pandac$IRNode* $tmp3720 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3711, &$s3719, ((panda$collections$ListView*) callChildren3714));
    return $tmp3720;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3729;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3733;
    org$pandalanguage$pandac$IRNode* nextTest3749;
    panda$collections$Array* callChildren3753;
    panda$collections$Array* statements3766;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3769;
    org$pandalanguage$pandac$IRNode* statement3784;
    panda$collections$Array* children3794;
    panda$core$Bit $tmp3721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3721.value);
    panda$core$Int64 $tmp3722 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3723 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3722, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3723.value);
    panda$core$Object* $tmp3724 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3724)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3725.value);
    panda$core$Object* $tmp3726 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3727 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3726)->children);
    panda$core$Bit $tmp3728 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3727, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3728.value);
    panda$core$Object* $tmp3730 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3731 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3730)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3732 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3731));
    test3729 = $tmp3732;
    if (((panda$core$Bit) { test3729 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3734 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3735 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3734)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3733, ((panda$core$Int64) { 1 }), $tmp3735, ((panda$core$Bit) { false }));
    int64_t $tmp3737 = $tmp3733.min.value;
    panda$core$Int64 i3736 = { $tmp3737 };
    int64_t $tmp3739 = $tmp3733.max.value;
    bool $tmp3740 = $tmp3733.inclusive.value;
    if ($tmp3740) goto $l3747; else goto $l3748;
    $l3747:;
    if ($tmp3737 <= $tmp3739) goto $l3741; else goto $l3743;
    $l3748:;
    if ($tmp3737 < $tmp3739) goto $l3741; else goto $l3743;
    $l3741:;
    {
        panda$core$Object* $tmp3750 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3751 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3750)->children, i3736);
        org$pandalanguage$pandac$IRNode* $tmp3752 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3751));
        nextTest3749 = $tmp3752;
        if (((panda$core$Bit) { nextTest3749 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3754 = (panda$collections$Array*) malloc(40);
        $tmp3754->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3754->refCount.value = 1;
        panda$collections$Array$init($tmp3754);
        callChildren3753 = $tmp3754;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3753, ((panda$core$Object*) nextTest3749));
        org$pandalanguage$pandac$IRNode* $tmp3757 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3729, &$s3756, ((panda$collections$ListView*) callChildren3753));
        test3729 = $tmp3757;
        if (((panda$core$Bit) { test3729 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3744:;
    int64_t $tmp3759 = $tmp3739 - i3736.value;
    if ($tmp3740) goto $l3760; else goto $l3761;
    $l3760:;
    if ($tmp3759 >= 1) goto $l3758; else goto $l3743;
    $l3761:;
    if ($tmp3759 > 1) goto $l3758; else goto $l3743;
    $l3758:;
    i3736.value += 1;
    goto $l3741;
    $l3743:;
    org$pandalanguage$pandac$SymbolTable* $tmp3764 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3764->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3764->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3764, self->symbolTable);
    self->symbolTable = $tmp3764;
    panda$collections$Array* $tmp3767 = (panda$collections$Array*) malloc(40);
    $tmp3767->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3767->refCount.value = 1;
    panda$collections$Array$init($tmp3767);
    statements3766 = $tmp3767;
    panda$core$Int64 $tmp3770 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3769, ((panda$core$Int64) { 1 }), $tmp3770, ((panda$core$Bit) { false }));
    int64_t $tmp3772 = $tmp3769.min.value;
    panda$core$Int64 i3771 = { $tmp3772 };
    int64_t $tmp3774 = $tmp3769.max.value;
    bool $tmp3775 = $tmp3769.inclusive.value;
    if ($tmp3775) goto $l3782; else goto $l3783;
    $l3782:;
    if ($tmp3772 <= $tmp3774) goto $l3776; else goto $l3778;
    $l3783:;
    if ($tmp3772 < $tmp3774) goto $l3776; else goto $l3778;
    $l3776:;
    {
        panda$core$Object* $tmp3785 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3771);
        org$pandalanguage$pandac$IRNode* $tmp3786 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3785));
        statement3784 = $tmp3786;
        if (((panda$core$Bit) { statement3784 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3766, ((panda$core$Object*) statement3784));
    }
    $l3779:;
    int64_t $tmp3788 = $tmp3774 - i3771.value;
    if ($tmp3775) goto $l3789; else goto $l3790;
    $l3789:;
    if ($tmp3788 >= 1) goto $l3787; else goto $l3778;
    $l3790:;
    if ($tmp3788 > 1) goto $l3787; else goto $l3778;
    $l3787:;
    i3771.value += 1;
    goto $l3776;
    $l3778:;
    panda$core$Object* $tmp3793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3793);
    panda$collections$Array* $tmp3795 = (panda$collections$Array*) malloc(40);
    $tmp3795->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3795->refCount.value = 1;
    panda$collections$Array$init($tmp3795);
    children3794 = $tmp3795;
    panda$collections$Array$add$panda$collections$Array$T(children3794, ((panda$core$Object*) test3729));
    org$pandalanguage$pandac$IRNode* $tmp3797 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3797->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3797->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3797, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3766));
    panda$collections$Array$add$panda$collections$Array$T(children3794, ((panda$core$Object*) $tmp3797));
    org$pandalanguage$pandac$IRNode* $tmp3799 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3799->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3799->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3799, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3794));
    return $tmp3799;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3801;
    org$pandalanguage$pandac$Variable* valueVar3804;
    panda$collections$Array* declChildren3814;
    panda$collections$Array* varChildren3819;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3826;
    org$pandalanguage$pandac$ASTNode* c3841;
    org$pandalanguage$pandac$IRNode* w3843;
    panda$collections$Array* statements3845;
    panda$collections$Iterator* astStatement$Iter3848;
    org$pandalanguage$pandac$ASTNode* astStatement3860;
    org$pandalanguage$pandac$IRNode* stmt3865;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp3875;
    panda$collections$Array* $tmp3802 = (panda$collections$Array*) malloc(40);
    $tmp3802->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3802->refCount.value = 1;
    panda$collections$Array$init($tmp3802);
    children3801 = $tmp3802;
    org$pandalanguage$pandac$Variable* $tmp3805 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3805->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3805->refCount.value = 1;
    panda$core$String* $tmp3808 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3807, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3808, &$s3809);
    panda$core$String* $tmp3811 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3810, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3811, &$s3812);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3805, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3813, p_value->type);
    valueVar3804 = $tmp3805;
    panda$collections$Array* $tmp3815 = (panda$collections$Array*) malloc(40);
    $tmp3815->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3815->refCount.value = 1;
    panda$collections$Array$init($tmp3815);
    declChildren3814 = $tmp3815;
    org$pandalanguage$pandac$IRNode* $tmp3817 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3817->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3817->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3817, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3804->type, valueVar3804);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3814, ((panda$core$Object*) $tmp3817));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3814, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3820 = (panda$collections$Array*) malloc(40);
    $tmp3820->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3820->refCount.value = 1;
    panda$collections$Array$init($tmp3820);
    varChildren3819 = $tmp3820;
    org$pandalanguage$pandac$IRNode* $tmp3822 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3822->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3822->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3822, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3804)->position, ((panda$collections$ListView*) declChildren3814));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3819, ((panda$core$Object*) $tmp3822));
    org$pandalanguage$pandac$IRNode* $tmp3824 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3824->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3824->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3824, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3804)->position, ((panda$collections$ListView*) varChildren3819));
    panda$collections$Array$add$panda$collections$Array$T(children3801, ((panda$core$Object*) $tmp3824));
    panda$core$Int64 $tmp3827 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3826, ((panda$core$Int64) { 1 }), $tmp3827, ((panda$core$Bit) { false }));
    int64_t $tmp3829 = $tmp3826.min.value;
    panda$core$Int64 i3828 = { $tmp3829 };
    int64_t $tmp3831 = $tmp3826.max.value;
    bool $tmp3832 = $tmp3826.inclusive.value;
    if ($tmp3832) goto $l3839; else goto $l3840;
    $l3839:;
    if ($tmp3829 <= $tmp3831) goto $l3833; else goto $l3835;
    $l3840:;
    if ($tmp3829 < $tmp3831) goto $l3833; else goto $l3835;
    $l3833:;
    {
        panda$core$Object* $tmp3842 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3828);
        c3841 = ((org$pandalanguage$pandac$ASTNode*) $tmp3842);
        switch (c3841->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3844 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3804, c3841);
                w3843 = $tmp3844;
                if (((panda$core$Bit) { w3843 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3801, ((panda$core$Object*) w3843));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3846 = (panda$collections$Array*) malloc(40);
                $tmp3846->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3846->refCount.value = 1;
                panda$collections$Array$init($tmp3846);
                statements3845 = $tmp3846;
                {
                    ITable* $tmp3849 = ((panda$collections$Iterable*) c3841->children)->$class->itable;
                    while ($tmp3849->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3849 = $tmp3849->next;
                    }
                    $fn3851 $tmp3850 = $tmp3849->methods[0];
                    panda$collections$Iterator* $tmp3852 = $tmp3850(((panda$collections$Iterable*) c3841->children));
                    astStatement$Iter3848 = $tmp3852;
                    $l3853:;
                    ITable* $tmp3855 = astStatement$Iter3848->$class->itable;
                    while ($tmp3855->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3855 = $tmp3855->next;
                    }
                    $fn3857 $tmp3856 = $tmp3855->methods[0];
                    panda$core$Bit $tmp3858 = $tmp3856(astStatement$Iter3848);
                    panda$core$Bit $tmp3859 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3858);
                    if (!$tmp3859.value) goto $l3854;
                    {
                        ITable* $tmp3861 = astStatement$Iter3848->$class->itable;
                        while ($tmp3861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3861 = $tmp3861->next;
                        }
                        $fn3863 $tmp3862 = $tmp3861->methods[1];
                        panda$core$Object* $tmp3864 = $tmp3862(astStatement$Iter3848);
                        astStatement3860 = ((org$pandalanguage$pandac$ASTNode*) $tmp3864);
                        org$pandalanguage$pandac$IRNode* $tmp3866 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3860);
                        stmt3865 = $tmp3866;
                        if (((panda$core$Bit) { stmt3865 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3845, ((panda$core$Object*) stmt3865));
                    }
                    goto $l3853;
                    $l3854:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3867 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3867->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3867->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3867, ((panda$core$Int64) { 1000 }), c3841->position, ((panda$collections$ListView*) statements3845));
                panda$collections$Array$add$panda$collections$Array$T(children3801, ((panda$core$Object*) $tmp3867));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3836:;
    int64_t $tmp3870 = $tmp3831 - i3828.value;
    if ($tmp3832) goto $l3871; else goto $l3872;
    $l3871:;
    if ($tmp3870 >= 1) goto $l3869; else goto $l3835;
    $l3872:;
    if ($tmp3870 > 1) goto $l3869; else goto $l3835;
    $l3869:;
    i3828.value += 1;
    goto $l3833;
    $l3835:;
    panda$core$Int64 $tmp3876 = panda$collections$Array$get_count$R$panda$core$Int64(children3801);
    panda$core$Int64 $tmp3877 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3876, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3875, $tmp3877, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp3879 = $tmp3875.start.value;
    panda$core$Int64 i3878 = { $tmp3879 };
    int64_t $tmp3881 = $tmp3875.end.value;
    int64_t $tmp3882 = $tmp3875.step.value;
    bool $tmp3883 = $tmp3875.inclusive.value;
    bool $tmp3890 = $tmp3882 > 0;
    if ($tmp3890) goto $l3888; else goto $l3889;
    $l3888:;
    if ($tmp3883) goto $l3891; else goto $l3892;
    $l3891:;
    if ($tmp3879 <= $tmp3881) goto $l3884; else goto $l3886;
    $l3892:;
    if ($tmp3879 < $tmp3881) goto $l3884; else goto $l3886;
    $l3889:;
    if ($tmp3883) goto $l3893; else goto $l3894;
    $l3893:;
    if ($tmp3879 >= $tmp3881) goto $l3884; else goto $l3886;
    $l3894:;
    if ($tmp3879 > $tmp3881) goto $l3884; else goto $l3886;
    $l3884:;
    {
        panda$core$Int64 $tmp3896 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3878, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3897 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3801, $tmp3896);
        panda$core$Bit $tmp3898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3897)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3898.value);
        panda$core$Int64 $tmp3899 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3878, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3801, $tmp3899);
        panda$core$Int64 $tmp3901 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3900)->children);
        panda$core$Bit $tmp3902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3901, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3902.value);
        panda$core$Int64 $tmp3903 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3878, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3904 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3801, $tmp3903);
        panda$core$Object* $tmp3905 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3801, i3878);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3904)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3905)));
        panda$core$Int64 $tmp3906 = panda$collections$Array$get_count$R$panda$core$Int64(children3801);
        panda$core$Int64 $tmp3907 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3906, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3801, $tmp3907);
    }
    $l3887:;
    if ($tmp3890) goto $l3909; else goto $l3910;
    $l3909:;
    int64_t $tmp3911 = $tmp3881 - i3878.value;
    if ($tmp3883) goto $l3912; else goto $l3913;
    $l3912:;
    if ($tmp3911 >= $tmp3882) goto $l3908; else goto $l3886;
    $l3913:;
    if ($tmp3911 > $tmp3882) goto $l3908; else goto $l3886;
    $l3910:;
    int64_t $tmp3915 = i3878.value - $tmp3881;
    if ($tmp3883) goto $l3916; else goto $l3917;
    $l3916:;
    if ($tmp3915 >= -$tmp3882) goto $l3908; else goto $l3886;
    $l3917:;
    if ($tmp3915 > -$tmp3882) goto $l3908; else goto $l3886;
    $l3908:;
    i3878.value += $tmp3882;
    goto $l3884;
    $l3886:;
    org$pandalanguage$pandac$IRNode* $tmp3919 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3919->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3919->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3919, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3801));
    return $tmp3919;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3929;
    panda$collections$Iterator* expr$Iter3932;
    org$pandalanguage$pandac$ASTNode* expr3945;
    org$pandalanguage$pandac$IRNode* compiled3950;
    panda$collections$Array* statements3955;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3958;
    org$pandalanguage$pandac$IRNode* statement3973;
    panda$core$Bit $tmp3921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3921.value);
    panda$core$Int64 $tmp3922 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3923 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3922, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3923.value);
    panda$core$Object* $tmp3924 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3924)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3925.value);
    panda$core$Object* $tmp3926 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3927 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3926)->children);
    panda$core$Bit $tmp3928 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3927, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3928.value);
    panda$collections$Array* $tmp3930 = (panda$collections$Array*) malloc(40);
    $tmp3930->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3930->refCount.value = 1;
    panda$collections$Array$init($tmp3930);
    children3929 = $tmp3930;
    {
        panda$core$Object* $tmp3933 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3934 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3933)->children)->$class->itable;
        while ($tmp3934->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3934 = $tmp3934->next;
        }
        $fn3936 $tmp3935 = $tmp3934->methods[0];
        panda$collections$Iterator* $tmp3937 = $tmp3935(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3933)->children));
        expr$Iter3932 = $tmp3937;
        $l3938:;
        ITable* $tmp3940 = expr$Iter3932->$class->itable;
        while ($tmp3940->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3940 = $tmp3940->next;
        }
        $fn3942 $tmp3941 = $tmp3940->methods[0];
        panda$core$Bit $tmp3943 = $tmp3941(expr$Iter3932);
        panda$core$Bit $tmp3944 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3943);
        if (!$tmp3944.value) goto $l3939;
        {
            ITable* $tmp3946 = expr$Iter3932->$class->itable;
            while ($tmp3946->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3946 = $tmp3946->next;
            }
            $fn3948 $tmp3947 = $tmp3946->methods[1];
            panda$core$Object* $tmp3949 = $tmp3947(expr$Iter3932);
            expr3945 = ((org$pandalanguage$pandac$ASTNode*) $tmp3949);
            org$pandalanguage$pandac$IRNode* $tmp3951 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr3945);
            org$pandalanguage$pandac$IRNode* $tmp3952 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3951, p_type);
            compiled3950 = $tmp3952;
            if (((panda$core$Bit) { compiled3950 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3929, ((panda$core$Object*) compiled3950));
        }
        goto $l3938;
        $l3939:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3953 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3953->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3953->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3953, self->symbolTable);
    self->symbolTable = $tmp3953;
    panda$collections$Array* $tmp3956 = (panda$collections$Array*) malloc(40);
    $tmp3956->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3956->refCount.value = 1;
    panda$collections$Array$init($tmp3956);
    statements3955 = $tmp3956;
    panda$core$Int64 $tmp3959 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3958, ((panda$core$Int64) { 1 }), $tmp3959, ((panda$core$Bit) { false }));
    int64_t $tmp3961 = $tmp3958.min.value;
    panda$core$Int64 i3960 = { $tmp3961 };
    int64_t $tmp3963 = $tmp3958.max.value;
    bool $tmp3964 = $tmp3958.inclusive.value;
    if ($tmp3964) goto $l3971; else goto $l3972;
    $l3971:;
    if ($tmp3961 <= $tmp3963) goto $l3965; else goto $l3967;
    $l3972:;
    if ($tmp3961 < $tmp3963) goto $l3965; else goto $l3967;
    $l3965:;
    {
        panda$core$Object* $tmp3974 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3960);
        org$pandalanguage$pandac$IRNode* $tmp3975 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3974));
        statement3973 = $tmp3975;
        if (((panda$core$Bit) { statement3973 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3955, ((panda$core$Object*) statement3973));
    }
    $l3968:;
    int64_t $tmp3977 = $tmp3963 - i3960.value;
    if ($tmp3964) goto $l3978; else goto $l3979;
    $l3978:;
    if ($tmp3977 >= 1) goto $l3976; else goto $l3967;
    $l3979:;
    if ($tmp3977 > 1) goto $l3976; else goto $l3967;
    $l3976:;
    i3960.value += 1;
    goto $l3965;
    $l3967:;
    panda$core$Object* $tmp3982 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3982);
    org$pandalanguage$pandac$IRNode* $tmp3983 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3983->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3983->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3983, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3955));
    panda$collections$Array$add$panda$collections$Array$T(children3929, ((panda$core$Object*) $tmp3983));
    org$pandalanguage$pandac$IRNode* $tmp3985 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3985->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3985->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3985, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children3929));
    return $tmp3985;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children3988;
    panda$collections$Array* statements3993;
    panda$collections$Iterator* s$Iter3996;
    org$pandalanguage$pandac$ASTNode* s4008;
    org$pandalanguage$pandac$IRNode* statement4013;
    panda$core$Bit $tmp3987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp3987.value);
    panda$collections$Array* $tmp3989 = (panda$collections$Array*) malloc(40);
    $tmp3989->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3989->refCount.value = 1;
    panda$collections$Array$init($tmp3989);
    children3988 = $tmp3989;
    org$pandalanguage$pandac$SymbolTable* $tmp3991 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3991->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3991->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3991, self->symbolTable);
    self->symbolTable = $tmp3991;
    panda$collections$Array* $tmp3994 = (panda$collections$Array*) malloc(40);
    $tmp3994->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3994->refCount.value = 1;
    panda$collections$Array$init($tmp3994);
    statements3993 = $tmp3994;
    {
        ITable* $tmp3997 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp3997->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3997 = $tmp3997->next;
        }
        $fn3999 $tmp3998 = $tmp3997->methods[0];
        panda$collections$Iterator* $tmp4000 = $tmp3998(((panda$collections$Iterable*) p_o->children));
        s$Iter3996 = $tmp4000;
        $l4001:;
        ITable* $tmp4003 = s$Iter3996->$class->itable;
        while ($tmp4003->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4003 = $tmp4003->next;
        }
        $fn4005 $tmp4004 = $tmp4003->methods[0];
        panda$core$Bit $tmp4006 = $tmp4004(s$Iter3996);
        panda$core$Bit $tmp4007 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4006);
        if (!$tmp4007.value) goto $l4002;
        {
            ITable* $tmp4009 = s$Iter3996->$class->itable;
            while ($tmp4009->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4009 = $tmp4009->next;
            }
            $fn4011 $tmp4010 = $tmp4009->methods[1];
            panda$core$Object* $tmp4012 = $tmp4010(s$Iter3996);
            s4008 = ((org$pandalanguage$pandac$ASTNode*) $tmp4012);
            org$pandalanguage$pandac$IRNode* $tmp4014 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4008);
            statement4013 = $tmp4014;
            if (((panda$core$Bit) { statement4013 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements3993, ((panda$core$Object*) statement4013));
        }
        goto $l4001;
        $l4002:;
    }
    panda$core$Object* $tmp4015 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4015);
    org$pandalanguage$pandac$IRNode* $tmp4016 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4016->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4016->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4016, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements3993));
    panda$collections$Array$add$panda$collections$Array$T(children3988, ((panda$core$Object*) $tmp4016));
    org$pandalanguage$pandac$IRNode* $tmp4018 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4018->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4018->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4018, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children3988));
    return $tmp4018;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4027;
    org$pandalanguage$pandac$Variable* v4036;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4021 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4020 = $tmp4021.value;
            if (!$tmp4020) goto $l4022;
            panda$core$Object* $tmp4023 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4024 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4023)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4025 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4024));
            $tmp4020 = $tmp4025.value;
            $l4022:;
            panda$core$Bit $tmp4026 = { $tmp4020 };
            return $tmp4026;
        }
        break;
        case 1026:
        {
            f4027 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4027->resolved.value);
            panda$core$Bit $tmp4030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4027->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4029 = $tmp4030.value;
            if (!$tmp4029) goto $l4031;
            $tmp4029 = ((panda$core$Bit) { f4027->value != NULL }).value;
            $l4031:;
            panda$core$Bit $tmp4032 = { $tmp4029 };
            bool $tmp4028 = $tmp4032.value;
            if (!$tmp4028) goto $l4033;
            panda$core$Bit $tmp4034 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4027->value);
            $tmp4028 = $tmp4034.value;
            $l4033:;
            panda$core$Bit $tmp4035 = { $tmp4028 };
            return $tmp4035;
        }
        break;
        case 1016:
        {
            v4036 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4036->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4037 = $tmp4038.value;
            if ($tmp4037) goto $l4039;
            panda$core$Bit $tmp4042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4036->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4041 = $tmp4042.value;
            if (!$tmp4041) goto $l4043;
            $tmp4041 = ((panda$core$Bit) { v4036->initialValue != NULL }).value;
            $l4043:;
            panda$core$Bit $tmp4044 = { $tmp4041 };
            bool $tmp4040 = $tmp4044.value;
            if (!$tmp4040) goto $l4045;
            panda$core$Bit $tmp4046 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4036->initialValue);
            $tmp4040 = $tmp4046.value;
            $l4045:;
            panda$core$Bit $tmp4047 = { $tmp4040 };
            $tmp4037 = $tmp4047.value;
            $l4039:;
            panda$core$Bit $tmp4048 = { $tmp4037 };
            return $tmp4048;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4053;
    org$pandalanguage$pandac$Variable* v4055;
    panda$core$Bit $tmp4049 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4049.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4050 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4051 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4050)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4052 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4051));
            return $tmp4052;
        }
        break;
        case 1026:
        {
            f4053 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4054 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4053->value);
            return $tmp4054;
        }
        break;
        case 1016:
        {
            v4055 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4056 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4055->initialValue);
            return $tmp4056;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4060;
    panda$collections$Array* children4067;
    panda$collections$Iterator* rawWhen$Iter4070;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4071;
    org$pandalanguage$pandac$ASTNode* rawWhen4084;
    org$pandalanguage$pandac$IRNode* o4090;
    org$pandalanguage$pandac$IRNode* w4092;
    panda$core$Bit $tmp4057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4057.value);
    panda$core$Int64 $tmp4058 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4059 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4058, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4059.value);
    panda$core$Object* $tmp4061 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4062 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4061));
    org$pandalanguage$pandac$IRNode* $tmp4063 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4062);
    value4060 = $tmp4063;
    if (((panda$core$Bit) { value4060 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4064 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4060->type);
    panda$core$Bit $tmp4065 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4064);
    if ($tmp4065.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4066 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4060);
        return $tmp4066;
    }
    }
    panda$collections$Array* $tmp4068 = (panda$collections$Array*) malloc(40);
    $tmp4068->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4068->refCount.value = 1;
    panda$collections$Array$init($tmp4068);
    children4067 = $tmp4068;
    panda$collections$Array$add$panda$collections$Array$T(children4067, ((panda$core$Object*) value4060));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4071, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4072 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4071);
        ITable* $tmp4073 = ((panda$collections$Iterable*) $tmp4072)->$class->itable;
        while ($tmp4073->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4073 = $tmp4073->next;
        }
        $fn4075 $tmp4074 = $tmp4073->methods[0];
        panda$collections$Iterator* $tmp4076 = $tmp4074(((panda$collections$Iterable*) $tmp4072));
        rawWhen$Iter4070 = $tmp4076;
        $l4077:;
        ITable* $tmp4079 = rawWhen$Iter4070->$class->itable;
        while ($tmp4079->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4079 = $tmp4079->next;
        }
        $fn4081 $tmp4080 = $tmp4079->methods[0];
        panda$core$Bit $tmp4082 = $tmp4080(rawWhen$Iter4070);
        panda$core$Bit $tmp4083 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4082);
        if (!$tmp4083.value) goto $l4078;
        {
            ITable* $tmp4085 = rawWhen$Iter4070->$class->itable;
            while ($tmp4085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4085 = $tmp4085->next;
            }
            $fn4087 $tmp4086 = $tmp4085->methods[1];
            panda$core$Object* $tmp4088 = $tmp4086(rawWhen$Iter4070);
            rawWhen4084 = ((org$pandalanguage$pandac$ASTNode*) $tmp4088);
            panda$core$Bit $tmp4089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4084->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4089.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4091 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4084);
                o4090 = $tmp4091;
                if (((panda$core$Bit) { o4090 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4067, ((panda$core$Object*) o4090));
                goto $l4077;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4093 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4060->type, rawWhen4084);
            w4092 = $tmp4093;
            if (((panda$core$Bit) { w4092 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4094 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w4092->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4095 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4094));
            panda$core$Bit $tmp4096 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4095);
            if ($tmp4096.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4097 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4060);
                return $tmp4097;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4067, ((panda$core$Object*) w4092));
        }
        goto $l4077;
        $l4078:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4098 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4098->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4098->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4098, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4067));
    return $tmp4098;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4113;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4100 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4100;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4101 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4102 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4101);
            return $tmp4102;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4103 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4103;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4104 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4104;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4105 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4105;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4106 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4106;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4107 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4107;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4108 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4108;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4109 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4109;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4110 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4110;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4111 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4111;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4112 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4112;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4114 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4115 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4114);
            result4113 = $tmp4115;
            if (((panda$core$Bit) { result4113 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4116 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4113);
                result4113 = $tmp4116;
            }
            }
            return result4113;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4117 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4117;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4118;
    org$pandalanguage$pandac$SymbolTable* symbols4120;
    panda$collections$Iterator* p$Iter4123;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4135;
    panda$collections$Array* fieldInitializers4142;
    panda$collections$Iterator* f$Iter4146;
    org$pandalanguage$pandac$FieldDecl* f4159;
    panda$collections$Array* children4169;
    org$pandalanguage$pandac$IRNode* fieldRef4176;
    org$pandalanguage$pandac$IRNode* compiled4181;
    panda$collections$Array* children4185;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4118 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4119 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4119;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4121 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4121->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4121->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4121, self->symbolTable);
    symbols4120 = $tmp4121;
    {
        ITable* $tmp4124 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4124->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4124 = $tmp4124->next;
        }
        $fn4126 $tmp4125 = $tmp4124->methods[0];
        panda$collections$Iterator* $tmp4127 = $tmp4125(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4123 = $tmp4127;
        $l4128:;
        ITable* $tmp4130 = p$Iter4123->$class->itable;
        while ($tmp4130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4130 = $tmp4130->next;
        }
        $fn4132 $tmp4131 = $tmp4130->methods[0];
        panda$core$Bit $tmp4133 = $tmp4131(p$Iter4123);
        panda$core$Bit $tmp4134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4133);
        if (!$tmp4134.value) goto $l4129;
        {
            ITable* $tmp4136 = p$Iter4123->$class->itable;
            while ($tmp4136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4136 = $tmp4136->next;
            }
            $fn4138 $tmp4137 = $tmp4136->methods[1];
            panda$core$Object* $tmp4139 = $tmp4137(p$Iter4123);
            p4135 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4139);
            org$pandalanguage$pandac$Variable* $tmp4140 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4140->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4140->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4140, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4135->name, p4135->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4120, ((org$pandalanguage$pandac$Symbol*) $tmp4140));
        }
        goto $l4128;
        $l4129:;
    }
    self->symbolTable = symbols4120;
    panda$collections$Array* $tmp4143 = (panda$collections$Array*) malloc(40);
    $tmp4143->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4143->refCount.value = 1;
    panda$collections$Array$init($tmp4143);
    fieldInitializers4142 = $tmp4143;
    panda$core$Bit $tmp4145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4145.value) {
    {
        {
            panda$core$Object* $tmp4147 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4148 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4147)->fields)->$class->itable;
            while ($tmp4148->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4148 = $tmp4148->next;
            }
            $fn4150 $tmp4149 = $tmp4148->methods[0];
            panda$collections$Iterator* $tmp4151 = $tmp4149(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4147)->fields));
            f$Iter4146 = $tmp4151;
            $l4152:;
            ITable* $tmp4154 = f$Iter4146->$class->itable;
            while ($tmp4154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4154 = $tmp4154->next;
            }
            $fn4156 $tmp4155 = $tmp4154->methods[0];
            panda$core$Bit $tmp4157 = $tmp4155(f$Iter4146);
            panda$core$Bit $tmp4158 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4157);
            if (!$tmp4158.value) goto $l4153;
            {
                ITable* $tmp4160 = f$Iter4146->$class->itable;
                while ($tmp4160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4160 = $tmp4160->next;
                }
                $fn4162 $tmp4161 = $tmp4160->methods[1];
                panda$core$Object* $tmp4163 = $tmp4161(f$Iter4146);
                f4159 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4163);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4159);
                panda$core$Bit $tmp4165 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4159->annotations);
                panda$core$Bit $tmp4166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4165);
                bool $tmp4164 = $tmp4166.value;
                if (!$tmp4164) goto $l4167;
                $tmp4164 = ((panda$core$Bit) { f4159->value != NULL }).value;
                $l4167:;
                panda$core$Bit $tmp4168 = { $tmp4164 };
                if ($tmp4168.value) {
                {
                    panda$collections$Array* $tmp4170 = (panda$collections$Array*) malloc(40);
                    $tmp4170->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4170->refCount.value = 1;
                    panda$collections$Array$init($tmp4170);
                    children4169 = $tmp4170;
                    org$pandalanguage$pandac$IRNode* $tmp4172 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4172->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4172->refCount.value = 1;
                    panda$core$Object* $tmp4174 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4175 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4174));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4172, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4175);
                    panda$collections$Array$add$panda$collections$Array$T(children4169, ((panda$core$Object*) $tmp4172));
                    org$pandalanguage$pandac$IRNode* $tmp4177 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4177->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4177->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4177, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4159->type, ((panda$core$Object*) f4159), ((panda$collections$ListView*) children4169));
                    fieldRef4176 = $tmp4177;
                    panda$collections$Array$clear(children4169);
                    panda$collections$Array$add$panda$collections$Array$T(children4169, ((panda$core$Object*) fieldRef4176));
                    panda$collections$Array$add$panda$collections$Array$T(children4169, ((panda$core$Object*) f4159->value));
                    org$pandalanguage$pandac$IRNode* $tmp4179 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4179->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4179->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4179, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4159)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4169));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4142, ((panda$core$Object*) $tmp4179));
                }
                }
            }
            goto $l4152;
            $l4153:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4182 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4181 = $tmp4182;
    if (((panda$core$Bit) { compiled4181 != NULL }).value) {
    {
        panda$core$Int64 $tmp4183 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4142);
        panda$core$Bit $tmp4184 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4183, ((panda$core$Int64) { 0 }));
        if ($tmp4184.value) {
        {
            panda$collections$Array* $tmp4186 = (panda$collections$Array*) malloc(40);
            $tmp4186->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4186->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4186, ((panda$collections$ListView*) fieldInitializers4142));
            children4185 = $tmp4186;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4185, ((panda$collections$CollectionView*) compiled4181->children));
            org$pandalanguage$pandac$IRNode* $tmp4188 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4188->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4188->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4188, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4185));
            compiled4181 = $tmp4188;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4120) }).value);
    self->symbolTable = old4118;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4190 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4190.value) {
    {
        p_m->compiledBody = compiled4181;
    }
    }
    return compiled4181;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4191;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4192 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4191 = $tmp4192;
        if (((panda$core$Bit) { compiled4191 != NULL }).value) {
        {
            ITable* $tmp4193 = self->codeGenerator->$class->itable;
            while ($tmp4193->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4193 = $tmp4193->next;
            }
            $fn4195 $tmp4194 = $tmp4193->methods[3];
            $tmp4194(self->codeGenerator, p_m, compiled4191);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4196 = self->codeGenerator->$class->itable;
        while ($tmp4196->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4196 = $tmp4196->next;
        }
        $fn4198 $tmp4197 = $tmp4196->methods[2];
        $tmp4197(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4199;
    org$pandalanguage$pandac$ClassDecl* inner4211;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4200 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4200->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4200 = $tmp4200->next;
        }
        $fn4202 $tmp4201 = $tmp4200->methods[0];
        panda$collections$Iterator* $tmp4203 = $tmp4201(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4199 = $tmp4203;
        $l4204:;
        ITable* $tmp4206 = inner$Iter4199->$class->itable;
        while ($tmp4206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4206 = $tmp4206->next;
        }
        $fn4208 $tmp4207 = $tmp4206->methods[0];
        panda$core$Bit $tmp4209 = $tmp4207(inner$Iter4199);
        panda$core$Bit $tmp4210 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4209);
        if (!$tmp4210.value) goto $l4205;
        {
            ITable* $tmp4212 = inner$Iter4199->$class->itable;
            while ($tmp4212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4212 = $tmp4212->next;
            }
            $fn4214 $tmp4213 = $tmp4212->methods[1];
            panda$core$Object* $tmp4215 = $tmp4213(inner$Iter4199);
            inner4211 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4215);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4211);
        }
        goto $l4204;
        $l4205:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4223;
    panda$collections$Iterator* m$Iter4228;
    org$pandalanguage$pandac$MethodDecl* m4240;
    org$pandalanguage$pandac$ClassDecl* next4250;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4216 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4216.value) {
    {
        ITable* $tmp4217 = self->codeGenerator->$class->itable;
        while ($tmp4217->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4217 = $tmp4217->next;
        }
        $fn4219 $tmp4218 = $tmp4217->methods[1];
        $tmp4218(self->codeGenerator, p_cl);
        ITable* $tmp4220 = self->codeGenerator->$class->itable;
        while ($tmp4220->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4220 = $tmp4220->next;
        }
        $fn4222 $tmp4221 = $tmp4220->methods[4];
        $tmp4221(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4223 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4224 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4224;
    ITable* $tmp4225 = self->codeGenerator->$class->itable;
    while ($tmp4225->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4225 = $tmp4225->next;
    }
    $fn4227 $tmp4226 = $tmp4225->methods[1];
    $tmp4226(self->codeGenerator, p_cl);
    {
        ITable* $tmp4229 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4229->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4229 = $tmp4229->next;
        }
        $fn4231 $tmp4230 = $tmp4229->methods[0];
        panda$collections$Iterator* $tmp4232 = $tmp4230(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4228 = $tmp4232;
        $l4233:;
        ITable* $tmp4235 = m$Iter4228->$class->itable;
        while ($tmp4235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4235 = $tmp4235->next;
        }
        $fn4237 $tmp4236 = $tmp4235->methods[0];
        panda$core$Bit $tmp4238 = $tmp4236(m$Iter4228);
        panda$core$Bit $tmp4239 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4238);
        if (!$tmp4239.value) goto $l4234;
        {
            ITable* $tmp4241 = m$Iter4228->$class->itable;
            while ($tmp4241->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4241 = $tmp4241->next;
            }
            $fn4243 $tmp4242 = $tmp4241->methods[1];
            panda$core$Object* $tmp4244 = $tmp4242(m$Iter4228);
            m4240 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4244);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4240);
        }
        goto $l4233;
        $l4234:;
    }
    ITable* $tmp4245 = self->codeGenerator->$class->itable;
    while ($tmp4245->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4245 = $tmp4245->next;
    }
    $fn4247 $tmp4246 = $tmp4245->methods[4];
    $tmp4246(self->codeGenerator, p_cl);
    self->symbolTable = old4223;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4248 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4249 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4248, ((panda$core$Int64) { 0 }));
    if ($tmp4249.value) {
    {
        panda$core$Object* $tmp4251 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4250 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4251);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4250);
    }
    }
    panda$core$Int64 $tmp4252 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4252, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4253.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4254;
    org$pandalanguage$pandac$ASTNode* parsed4258;
    panda$collections$Iterator* cl$Iter4262;
    org$pandalanguage$pandac$ClassDecl* cl4274;
    panda$core$Object* $tmp4255 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4254 = ((panda$collections$ListView*) $tmp4255);
    if (((panda$core$Bit) { result4254 == NULL }).value) {
    {
        panda$core$String* $tmp4256 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4257) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4256);
        org$pandalanguage$pandac$ASTNode* $tmp4260 = (($fn4259) self->parser->$class->vtable[67])(self->parser);
        parsed4258 = $tmp4260;
        if (((panda$core$Bit) { parsed4258 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4261 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4258);
            result4254 = $tmp4261;
            {
                ITable* $tmp4263 = ((panda$collections$Iterable*) result4254)->$class->itable;
                while ($tmp4263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4263 = $tmp4263->next;
                }
                $fn4265 $tmp4264 = $tmp4263->methods[0];
                panda$collections$Iterator* $tmp4266 = $tmp4264(((panda$collections$Iterable*) result4254));
                cl$Iter4262 = $tmp4266;
                $l4267:;
                ITable* $tmp4269 = cl$Iter4262->$class->itable;
                while ($tmp4269->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4269 = $tmp4269->next;
                }
                $fn4271 $tmp4270 = $tmp4269->methods[0];
                panda$core$Bit $tmp4272 = $tmp4270(cl$Iter4262);
                panda$core$Bit $tmp4273 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4272);
                if (!$tmp4273.value) goto $l4268;
                {
                    ITable* $tmp4275 = cl$Iter4262->$class->itable;
                    while ($tmp4275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4275 = $tmp4275->next;
                    }
                    $fn4277 $tmp4276 = $tmp4275->methods[1];
                    panda$core$Object* $tmp4278 = $tmp4276(cl$Iter4262);
                    cl4274 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4278);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4274)->name), ((panda$core$Object*) cl4274));
                }
                goto $l4267;
                $l4268:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4279 = (panda$collections$Array*) malloc(40);
            $tmp4279->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4279->refCount.value = 1;
            panda$collections$Array$init($tmp4279);
            result4254 = ((panda$collections$ListView*) $tmp4279);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4254));
    }
    }
    return result4254;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4281;
    panda$collections$Iterator* cl$Iter4283;
    org$pandalanguage$pandac$ClassDecl* cl4295;
    panda$collections$ListView* $tmp4282 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4281 = $tmp4282;
    {
        ITable* $tmp4284 = ((panda$collections$Iterable*) classes4281)->$class->itable;
        while ($tmp4284->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4284 = $tmp4284->next;
        }
        $fn4286 $tmp4285 = $tmp4284->methods[0];
        panda$collections$Iterator* $tmp4287 = $tmp4285(((panda$collections$Iterable*) classes4281));
        cl$Iter4283 = $tmp4287;
        $l4288:;
        ITable* $tmp4290 = cl$Iter4283->$class->itable;
        while ($tmp4290->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4290 = $tmp4290->next;
        }
        $fn4292 $tmp4291 = $tmp4290->methods[0];
        panda$core$Bit $tmp4293 = $tmp4291(cl$Iter4283);
        panda$core$Bit $tmp4294 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4293);
        if (!$tmp4294.value) goto $l4289;
        {
            ITable* $tmp4296 = cl$Iter4283->$class->itable;
            while ($tmp4296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4296 = $tmp4296->next;
            }
            $fn4298 $tmp4297 = $tmp4296->methods[1];
            panda$core$Object* $tmp4299 = $tmp4297(cl$Iter4283);
            cl4295 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4299);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4295);
        }
        goto $l4288;
        $l4289:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4300 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4300)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4301 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4301;
        panda$core$String* $tmp4302 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4303 = panda$core$String$convert$R$panda$core$String($tmp4302);
        panda$core$String* $tmp4305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4303, &$s4304);
        panda$core$String* $tmp4306 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4305, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4306, &$s4307);
        panda$core$String* $tmp4309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4308, p_msg);
        panda$core$String* $tmp4311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4309, &$s4310);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4311));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4312 = self->codeGenerator->$class->itable;
    while ($tmp4312->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4312 = $tmp4312->next;
    }
    $fn4314 $tmp4313 = $tmp4312->methods[5];
    $tmp4313(self->codeGenerator);
}

