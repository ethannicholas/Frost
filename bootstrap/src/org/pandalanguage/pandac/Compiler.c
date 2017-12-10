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
typedef panda$collections$Iterator* (*$fn580)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn586)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn592)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn608)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn614)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn620)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn646)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn652)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn658)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn710)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn716)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn722)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn731)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn748)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn766)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn772)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn778)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn786)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn792)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn798)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn809)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn815)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn821)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn844)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn850)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn856)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn895)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn901)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn907)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn920)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn932)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn947)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn953)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn959)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn974)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn980)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn986)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1000)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1006)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1012)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1025)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1031)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1037)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1082)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1088)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1094)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1101)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1107)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1113)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1133)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1139)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1145)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1225)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1333)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1339)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1345)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1371)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1377)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1383)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1533)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1539)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1545)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1713)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1719)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1725)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1772)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1778)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1784)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1874)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1896)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1918)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1935)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1941)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1947)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1959)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1982)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2056)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2074)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2145)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2164)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2170)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2176)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2207)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2213)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2219)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2256)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2262)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2268)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2291)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2303)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2693)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2699)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2705)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2837)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2843)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2849)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn3062)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3078)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3084)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3090)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3186)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3192)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3198)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3404)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3410)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3416)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3546)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3552)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3558)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3584)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3590)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3596)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3700)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3706)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3712)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3858)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3864)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3870)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3943)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3949)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3955)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4006)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4012)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4018)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4082)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4088)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4094)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4133)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4139)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4145)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4157)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4169)(panda$collections$Iterator*);
typedef void (*$fn4202)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4205)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4209)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4215)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4221)(panda$collections$Iterator*);
typedef void (*$fn4226)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4229)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4234)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4238)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4244)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4250)(panda$collections$Iterator*);
typedef void (*$fn4254)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4264)(org$pandalanguage$pandac$parser$Parser*, panda$io$File*, panda$core$String*);
typedef org$pandalanguage$pandac$ASTNode* (*$fn4266)(org$pandalanguage$pandac$parser$Parser*);
typedef panda$collections$Iterator* (*$fn4272)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4278)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4284)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4293)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4299)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4305)(panda$collections$Iterator*);
typedef void (*$fn4322)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x73\x20\x6E\x6F\x74\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 23, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20", 6, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x73\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73", 33, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x40\x6F\x76\x65\x72\x72\x69\x64\x65\x2C\x20\x62\x75\x74\x20\x6E\x6F\x20\x6D\x61\x74\x63\x68\x69\x6E\x67\x20\x6D\x65\x74\x68\x6F\x64\x20", 45, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x69\x73\x74\x73\x20\x61\x6D\x6F\x6E\x67\x20\x69\x74\x73\x20\x61\x6E\x63\x65\x73\x74\x6F\x72\x73", 26, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6C\x64\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 36, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x6B\x6E\x6F\x77\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 18, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6D\x62\x69\x67\x75\x6F\x75\x73\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 21, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x70\x61\x6E\x64\x61", 6, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6C\x65\x20\x27", 15, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6F\x20\x63\x6F\x6E\x74\x61\x69\x6E\x20\x61\x20\x63\x6C\x61\x73\x73\x20\x6E\x61\x6D\x65\x64\x20\x27", 28, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x66\x69\x6C\x65\x20\x6E\x61\x6D\x65\x64\x20", 14, NULL };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20\x61\x6E\x79\x20\x69\x6D\x70\x6F\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x74\x5F\x6C\x69\x74\x65\x72\x61\x6C", 12, NULL };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6E\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6F\x66\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x63\x61\x6C\x6C", 49, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 14, NULL };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20", 36, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s1965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6D\x65\x6E\x74", 9, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 13, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x63\x61\x6C\x6C\x20\x27\x69\x6E\x69\x74\x27\x20\x6F\x75\x74\x73\x69\x64\x65\x20\x6F\x66\x20\x61\x6E\x20\x69\x6E\x69\x74\x20\x6D\x65\x74\x68\x6F\x64", 53, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27\x20\x6D\x61\x79\x20\x6F\x6E\x6C\x79\x20\x62\x65\x20\x63\x61\x6C\x6C\x65\x64\x20\x6F\x6E\x20\x27\x73\x65\x6C\x66\x27\x20\x6F\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x69\x6E\x73\x74\x61\x6E\x63\x65\x20", 21, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x63\x6F\x6E\x74\x65\x78\x74", 22, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x63\x61\x6C\x6C\x20\x63\x6C\x61\x73\x73\x20", 18, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6F\x6E\x20\x61\x6E\x20\x69\x6E\x73\x74\x61\x6E\x63\x65", 15, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20\x27", 32, NULL };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x6F\x20\x6D\x61\x74\x63\x68\x20\x66\x6F\x72\x20\x63\x61\x6C\x6C\x20\x74\x6F\x20\x27", 22, NULL };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, NULL };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65\x20\x27", 19, NULL };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6E\x6F\x74\x20\x61\x20\x6D\x65\x74\x68\x6F\x64", 17, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x3E\x28", 4, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3D\x26\x3E\x28", 5, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, NULL };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, NULL };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, NULL };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, NULL };
static panda$core$String $s2352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D\x3D", 3, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x6E\x75\x6D\x65\x72\x69\x63\x20\x6F\x70\x65\x72\x61\x74\x69\x6F\x6E", 25, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20", 3, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, NULL };
static panda$core$String $s2648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x61\x73\x73\x69\x67\x6E\x20\x74\x6F\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E", 32, NULL };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x6F\x70\x65\x72\x61\x74\x65\x20\x6F\x6E\x20\x27", 21, NULL };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2C\x20\x27", 4, NULL };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6D\x65\x74\x68\x6F\x64\x3E", 8, NULL };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6E\x75\x6D\x62\x65\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, NULL };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20\x27", 7, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6D\x65\x6D\x62\x65\x72\x20\x6E\x61\x6D\x65\x64\x20", 31, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x75\x6E\x72\x65\x73\x6F\x6C\x76\x65\x64\x20\x72\x61\x6E\x67\x65\x3E", 18, NULL };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x65\x6C\x66\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 44, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s3074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x66\x65\x72\x65\x6E\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6F\x6D\x20\x61\x20\x40\x63\x6C\x61\x73\x73\x20\x6D\x65\x74\x68\x6F\x64", 45, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65\x20\x6F\x66\x20\x74\x79\x70\x65\x20\x27", 15, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6E\x6E\x6F\x74\x20\x70\x6F\x73\x73\x69\x62\x6C\x79\x20\x62\x65\x20\x61\x6E\x20", 24, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x73\x74\x61\x6E\x63\x65\x20\x6F\x66\x20\x27", 13, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6F\x65\x73\x20\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65", 24, NULL };
static panda$core$String $s3302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, NULL };
static panda$core$String $s3337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5F\x64\x6F\x6E\x65", 8, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x65\x78\x74", 4, NULL };
static panda$core$String $s3440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6F\x72", 8, NULL };
static panda$core$String $s3448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x49\x74\x65\x72\x61\x62\x6C\x65\x20\x6F\x72\x20\x49\x74\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 45, NULL };
static panda$core$String $s3450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x20\x68\x61\x73\x20\x6E\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6E\x6F\x72\x20\x61\x20\x76\x61\x6C\x75\x65", 42, NULL };
static panda$core$String $s3565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x20", 7, NULL };
static panda$core$String $s3567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, NULL };
static panda$core$String $s3569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, NULL };
static panda$core$String $s3576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 29, NULL };
static panda$core$String $s3603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 10, NULL };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70\x20\x6C\x61\x62\x65\x6C\x6C\x65\x64\x20", 33, NULL };
static panda$core$String $s3607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x27", 2, NULL };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x69\x6E\x73\x69\x64\x65\x20\x61\x20\x6C\x6F\x6F\x70", 32, NULL };
static panda$core$String $s3623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6E\x6E\x6F\x74\x20\x72\x65\x74\x75\x72\x6E\x20\x61\x20\x76\x61\x6C\x75\x65\x20\x66\x72\x6F\x6D\x20\x61\x20\x6D\x65\x74\x68\x6F\x64\x20\x77\x69\x74\x68\x20\x6E\x6F\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 55, NULL };
static panda$core$String $s3639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x76\x61\x6C\x75\x65", 23, NULL };
static panda$core$String $s3659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, NULL };
static panda$core$String $s3726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s3763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s3814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6D\x61\x74\x63\x68\x24", 7, NULL };
static panda$core$String $s3816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F", 1, NULL };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s4315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x20\x65\x72\x72\x6F\x72\x3A\x20", 9, NULL };
static panda$core$String $s4318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };

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
            panda$core$String* $tmp510 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s509, $tmp510);
            panda$core$String* $tmp513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp511, &$s512);
            panda$core$String* $tmp514 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden505);
            panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp513, $tmp514);
            panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp515, &$s516);
            panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, &$s518);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp519);
        }
        }
        panda$core$Bit $tmp521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 57 }));
        bool $tmp520 = $tmp521.value;
        if (!$tmp520) goto $l522;
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden505->methodKind, ((panda$core$Int64) { 58 }));
        $tmp520 = $tmp523.value;
        $l522:;
        panda$core$Bit $tmp524 = { $tmp520 };
        if ($tmp524.value) {
        {
            panda$core$String* $tmp526 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s525, $tmp526);
            panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, &$s528);
            panda$core$String* $tmp530 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden505);
            panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp529, $tmp530);
            panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp531, &$s532);
            panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp533, &$s534);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp535);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp536 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    if ($tmp536.value) {
    {
        panda$core$String* $tmp538 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
        panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s537, $tmp538);
        panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp539, &$s540);
        panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s542);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp543);
    }
    }
    }
    self->symbolTable = old485;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old544;
    org$pandalanguage$pandac$Type* resolved547;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old544 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp545 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp546 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp545);
    if ($tmp546.value) {
    {
        org$pandalanguage$pandac$Type* $tmp548 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved547 = $tmp548;
        if (((panda$core$Bit) { resolved547 != NULL }).value) {
        {
            p_f->type = resolved547;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp549 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp550 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp549, p_f->type);
                p_f->value = $tmp550;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old544;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s551);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old544;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp552 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp552;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old544;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp553 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp553;
    org$pandalanguage$pandac$IRNode* $tmp554 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp554;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old544;
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s555);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s556);
            panda$core$Object* $tmp557 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp557)->payload)));
            return NULL;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s558);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp559 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp560 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp559);
            return $tmp560;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp561 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp561) goto $l562;
    org$pandalanguage$pandac$Type* $tmp563 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
    panda$core$Int64$nullable $tmp564 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_cl->rawSuper, $tmp563);
    $tmp561 = ((panda$core$Bit) { $tmp564.nonnull }).value;
    $l562:;
    panda$core$Bit $tmp565 = { $tmp561 };
    return $tmp565;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result566;
    org$pandalanguage$pandac$ClassDecl* s574;
    panda$collections$Iterator* f$Iter577;
    org$pandalanguage$pandac$FieldDecl* f589;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp567 = (panda$collections$Array*) malloc(40);
    $tmp567->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp567->refCount.value = 1;
    panda$collections$Array$init($tmp567);
    result566 = $tmp567;
    panda$core$Bit $tmp570 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp571 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp570);
    bool $tmp569 = $tmp571.value;
    if (!$tmp569) goto $l572;
    $tmp569 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l572:;
    panda$core$Bit $tmp573 = { $tmp569 };
    if ($tmp573.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp575 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s574 = $tmp575;
        if (((panda$core$Bit) { s574 != NULL }).value) {
        {
            panda$collections$ListView* $tmp576 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s574);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result566, ((panda$collections$CollectionView*) $tmp576));
        }
        }
    }
    }
    {
        ITable* $tmp578 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp578->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp578 = $tmp578->next;
        }
        $fn580 $tmp579 = $tmp578->methods[0];
        panda$collections$Iterator* $tmp581 = $tmp579(((panda$collections$Iterable*) p_cl->fields));
        f$Iter577 = $tmp581;
        $l582:;
        ITable* $tmp584 = f$Iter577->$class->itable;
        while ($tmp584->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp584 = $tmp584->next;
        }
        $fn586 $tmp585 = $tmp584->methods[0];
        panda$core$Bit $tmp587 = $tmp585(f$Iter577);
        panda$core$Bit $tmp588 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp587);
        if (!$tmp588.value) goto $l583;
        {
            ITable* $tmp590 = f$Iter577->$class->itable;
            while ($tmp590->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp590 = $tmp590->next;
            }
            $fn592 $tmp591 = $tmp590->methods[1];
            panda$core$Object* $tmp593 = $tmp591(f$Iter577);
            f589 = ((org$pandalanguage$pandac$FieldDecl*) $tmp593);
            panda$core$Bit $tmp594 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f589->annotations);
            panda$core$Bit $tmp595 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp594);
            if ($tmp595.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result566, ((panda$core$Object*) f589));
            }
            }
        }
        goto $l582;
        $l583:;
    }
    return ((panda$collections$ListView*) result566);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result596;
    panda$core$String* suffix598;
    panda$core$Bit found604;
    panda$collections$Iterator* dir$Iter605;
    panda$io$File* dir617;
    panda$io$File* f622;
    panda$core$Bit $tmp624;
    panda$core$String$Index$nullable index626;
    org$pandalanguage$pandac$ClassDecl* parent629;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp630;
    panda$core$Object* $tmp597 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result596 = ((org$pandalanguage$pandac$ClassDecl*) $tmp597);
    if (((panda$core$Bit) { result596 == NULL }).value) {
    {
        panda$core$String* $tmp601 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s599, &$s600);
        panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, &$s602);
        suffix598 = $tmp603;
        found604 = ((panda$core$Bit) { false });
        {
            ITable* $tmp606 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp606->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp606 = $tmp606->next;
            }
            $fn608 $tmp607 = $tmp606->methods[0];
            panda$collections$Iterator* $tmp609 = $tmp607(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter605 = $tmp609;
            $l610:;
            ITable* $tmp612 = dir$Iter605->$class->itable;
            while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp612 = $tmp612->next;
            }
            $fn614 $tmp613 = $tmp612->methods[0];
            panda$core$Bit $tmp615 = $tmp613(dir$Iter605);
            panda$core$Bit $tmp616 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp615);
            if (!$tmp616.value) goto $l611;
            {
                ITable* $tmp618 = dir$Iter605->$class->itable;
                while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp618 = $tmp618->next;
                }
                $fn620 $tmp619 = $tmp618->methods[1];
                panda$core$Object* $tmp621 = $tmp619(dir$Iter605);
                dir617 = ((panda$io$File*) $tmp621);
                panda$io$File* $tmp623 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir617, suffix598);
                f622 = $tmp623;
                panda$io$File$exists$R$panda$core$Bit(&$tmp624, f622);
                if ($tmp624.value) {
                {
                    found604 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f622);
                    panda$core$Object* $tmp625 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result596 = ((org$pandalanguage$pandac$ClassDecl*) $tmp625);
                }
                }
            }
            goto $l610;
            $l611:;
        }
    }
    }
    if (((panda$core$Bit) { result596 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp628 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s627);
        index626 = $tmp628;
        if (((panda$core$Bit) { index626.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp630, ((panda$core$String$Index$nullable) { .nonnull = false }), index626, ((panda$core$Bit) { false }));
            panda$core$String* $tmp631 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp630);
            org$pandalanguage$pandac$ClassDecl* $tmp632 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp631);
            parent629 = $tmp632;
            if (((panda$core$Bit) { parent629 != NULL }).value) {
            {
                panda$core$Object* $tmp633 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result596 = ((org$pandalanguage$pandac$ClassDecl*) $tmp633);
            }
            }
        }
        }
    }
    }
    return result596;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result634;
    panda$core$String* suffix636;
    panda$core$Bit found642;
    panda$collections$Iterator* dir$Iter643;
    panda$io$File* dir655;
    panda$io$File* f660;
    panda$core$Bit $tmp662;
    panda$core$Int64 oldErrorCount663;
    org$pandalanguage$pandac$Position $tmp669;
    panda$core$Object* $tmp635 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result634 = ((org$pandalanguage$pandac$ClassDecl*) $tmp635);
    if (((panda$core$Bit) { result634 == NULL }).value) {
    {
        panda$core$String* $tmp639 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s637, &$s638);
        panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp639, &$s640);
        suffix636 = $tmp641;
        found642 = ((panda$core$Bit) { false });
        {
            ITable* $tmp644 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp644 = $tmp644->next;
            }
            $fn646 $tmp645 = $tmp644->methods[0];
            panda$collections$Iterator* $tmp647 = $tmp645(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter643 = $tmp647;
            $l648:;
            ITable* $tmp650 = dir$Iter643->$class->itable;
            while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp650 = $tmp650->next;
            }
            $fn652 $tmp651 = $tmp650->methods[0];
            panda$core$Bit $tmp653 = $tmp651(dir$Iter643);
            panda$core$Bit $tmp654 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp653);
            if (!$tmp654.value) goto $l649;
            {
                ITable* $tmp656 = dir$Iter643->$class->itable;
                while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp656 = $tmp656->next;
                }
                $fn658 $tmp657 = $tmp656->methods[1];
                panda$core$Object* $tmp659 = $tmp657(dir$Iter643);
                dir655 = ((panda$io$File*) $tmp659);
                panda$io$File* $tmp661 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir655, suffix636);
                f660 = $tmp661;
                panda$io$File$exists$R$panda$core$Bit(&$tmp662, f660);
                if ($tmp662.value) {
                {
                    found642 = ((panda$core$Bit) { true });
                    oldErrorCount663 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f660);
                    panda$core$Object* $tmp664 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result634 = ((org$pandalanguage$pandac$ClassDecl*) $tmp664);
                    bool $tmp665 = ((panda$core$Bit) { result634 == NULL }).value;
                    if (!$tmp665) goto $l666;
                    panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount663);
                    $tmp665 = $tmp667.value;
                    $l666:;
                    panda$core$Bit $tmp668 = { $tmp665 };
                    if ($tmp668.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp669, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s670, ((panda$core$Object*) f660));
                        panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp671, &$s672);
                        panda$core$String* $tmp674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp673, p_fullName);
                        panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp674, &$s675);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f660, $tmp669, $tmp676);
                    }
                    }
                }
                }
            }
            goto $l648;
            $l649:;
        }
        panda$core$Bit $tmp677 = panda$core$Bit$$NOT$R$panda$core$Bit(found642);
        if ($tmp677.value) {
        {
            panda$core$String* $tmp679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s678, suffix636);
            panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp679, &$s680);
            panda$core$String* $tmp682 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp681, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp682, &$s683);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp684);
        }
        }
    }
    }
    return result634;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type688;
    org$pandalanguage$pandac$ClassDecl* result695;
    org$pandalanguage$pandac$Annotations* annotations697;
    panda$collections$Array* supertypes703;
    panda$collections$Iterator* intf$Iter707;
    org$pandalanguage$pandac$Type* intf719;
    panda$collections$HashMap* aliases725;
    panda$core$Range$LTpanda$core$Int64$GT $tmp728;
    panda$collections$Iterator* m$Iter763;
    org$pandalanguage$pandac$MethodDecl* m775;
    panda$collections$Array* parameters780;
    panda$collections$Iterator* p$Iter783;
    org$pandalanguage$pandac$MethodDecl$Parameter* p795;
    org$pandalanguage$pandac$MethodDecl* clone803;
    panda$collections$Iterator* f$Iter806;
    org$pandalanguage$pandac$FieldDecl* f818;
    org$pandalanguage$pandac$FieldDecl* clone823;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp686 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s685);
    panda$core$Bit $tmp687 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp686);
    PANDA_ASSERT($tmp687.value);
    org$pandalanguage$pandac$Type* $tmp689 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type688 = $tmp689;
    panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type688->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp690.value) {
    {
        panda$core$Object* $tmp691 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type688->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp692 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp691));
        return $tmp692;
    }
    }
    panda$core$Bit $tmp693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type688->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp693.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type688->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp694.value);
    panda$core$Object* $tmp696 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type688)->name));
    result695 = ((org$pandalanguage$pandac$ClassDecl*) $tmp696);
    if (((panda$core$Bit) { result695 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp698 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp698->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp698->refCount.value = 1;
        panda$core$Int64 $tmp700 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp701 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp700);
        panda$core$Int64 $tmp702 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp701);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp698, $tmp702);
        annotations697 = $tmp698;
        panda$collections$Array* $tmp704 = (panda$collections$Array*) malloc(40);
        $tmp704->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp704->refCount.value = 1;
        panda$collections$Array$init($tmp704);
        supertypes703 = $tmp704;
        org$pandalanguage$pandac$Type* $tmp706 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type688, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes703, ((panda$core$Object*) $tmp706));
        {
            ITable* $tmp708 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp708->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp708 = $tmp708->next;
            }
            $fn710 $tmp709 = $tmp708->methods[0];
            panda$collections$Iterator* $tmp711 = $tmp709(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter707 = $tmp711;
            $l712:;
            ITable* $tmp714 = intf$Iter707->$class->itable;
            while ($tmp714->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp714 = $tmp714->next;
            }
            $fn716 $tmp715 = $tmp714->methods[0];
            panda$core$Bit $tmp717 = $tmp715(intf$Iter707);
            panda$core$Bit $tmp718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp717);
            if (!$tmp718.value) goto $l713;
            {
                ITable* $tmp720 = intf$Iter707->$class->itable;
                while ($tmp720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp720 = $tmp720->next;
                }
                $fn722 $tmp721 = $tmp720->methods[1];
                panda$core$Object* $tmp723 = $tmp721(intf$Iter707);
                intf719 = ((org$pandalanguage$pandac$Type*) $tmp723);
                org$pandalanguage$pandac$Type* $tmp724 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type688, intf719);
                panda$collections$Array$add$panda$collections$Array$T(supertypes703, ((panda$core$Object*) $tmp724));
            }
            goto $l712;
            $l713:;
        }
        panda$collections$HashMap* $tmp726 = (panda$collections$HashMap*) malloc(56);
        $tmp726->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp726->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp726, p_cl->aliases);
        aliases725 = $tmp726;
        ITable* $tmp729 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp729->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp729 = $tmp729->next;
        }
        $fn731 $tmp730 = $tmp729->methods[0];
        panda$core$Int64 $tmp732 = $tmp730(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp728, ((panda$core$Int64) { 0 }), $tmp732, ((panda$core$Bit) { false }));
        int64_t $tmp734 = $tmp728.min.value;
        panda$core$Int64 i733 = { $tmp734 };
        int64_t $tmp736 = $tmp728.max.value;
        bool $tmp737 = $tmp728.inclusive.value;
        if ($tmp737) goto $l744; else goto $l745;
        $l744:;
        if ($tmp734 <= $tmp736) goto $l738; else goto $l740;
        $l745:;
        if ($tmp734 < $tmp736) goto $l738; else goto $l740;
        $l738:;
        {
            ITable* $tmp746 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp746->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp746 = $tmp746->next;
            }
            $fn748 $tmp747 = $tmp746->methods[0];
            panda$core$Object* $tmp749 = $tmp747(((panda$collections$ListView*) p_cl->parameters), i733);
            panda$core$Int64 $tmp750 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i733, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp751 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type688->subtypes, $tmp750);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases725, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp749))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp751))->name));
        }
        $l741:;
        int64_t $tmp753 = $tmp736 - i733.value;
        if ($tmp737) goto $l754; else goto $l755;
        $l754:;
        if ($tmp753 >= 1) goto $l752; else goto $l740;
        $l755:;
        if ($tmp753 > 1) goto $l752; else goto $l740;
        $l752:;
        i733.value += 1;
        goto $l738;
        $l740:;
        org$pandalanguage$pandac$ClassDecl* $tmp758 = (org$pandalanguage$pandac$ClassDecl*) malloc(185);
        $tmp758->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp758->refCount.value = 1;
        panda$collections$Array* $tmp760 = (panda$collections$Array*) malloc(40);
        $tmp760->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp760->refCount.value = 1;
        panda$collections$Array$init($tmp760);
        panda$core$Object* $tmp762 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp758, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases725), p_cl->doccomment, annotations697, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type688)->name, ((panda$collections$ListView*) supertypes703), $tmp760, ((org$pandalanguage$pandac$SymbolTable*) $tmp762));
        result695 = $tmp758;
        result695->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp764 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp764->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp764 = $tmp764->next;
            }
            $fn766 $tmp765 = $tmp764->methods[0];
            panda$collections$Iterator* $tmp767 = $tmp765(((panda$collections$Iterable*) p_cl->methods));
            m$Iter763 = $tmp767;
            $l768:;
            ITable* $tmp770 = m$Iter763->$class->itable;
            while ($tmp770->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp770 = $tmp770->next;
            }
            $fn772 $tmp771 = $tmp770->methods[0];
            panda$core$Bit $tmp773 = $tmp771(m$Iter763);
            panda$core$Bit $tmp774 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp773);
            if (!$tmp774.value) goto $l769;
            {
                ITable* $tmp776 = m$Iter763->$class->itable;
                while ($tmp776->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp776 = $tmp776->next;
                }
                $fn778 $tmp777 = $tmp776->methods[1];
                panda$core$Object* $tmp779 = $tmp777(m$Iter763);
                m775 = ((org$pandalanguage$pandac$MethodDecl*) $tmp779);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m775);
                panda$collections$Array* $tmp781 = (panda$collections$Array*) malloc(40);
                $tmp781->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp781->refCount.value = 1;
                panda$collections$Array$init($tmp781);
                parameters780 = $tmp781;
                {
                    ITable* $tmp784 = ((panda$collections$Iterable*) m775->parameters)->$class->itable;
                    while ($tmp784->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp784 = $tmp784->next;
                    }
                    $fn786 $tmp785 = $tmp784->methods[0];
                    panda$collections$Iterator* $tmp787 = $tmp785(((panda$collections$Iterable*) m775->parameters));
                    p$Iter783 = $tmp787;
                    $l788:;
                    ITable* $tmp790 = p$Iter783->$class->itable;
                    while ($tmp790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp790 = $tmp790->next;
                    }
                    $fn792 $tmp791 = $tmp790->methods[0];
                    panda$core$Bit $tmp793 = $tmp791(p$Iter783);
                    panda$core$Bit $tmp794 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp793);
                    if (!$tmp794.value) goto $l789;
                    {
                        ITable* $tmp796 = p$Iter783->$class->itable;
                        while ($tmp796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp796 = $tmp796->next;
                        }
                        $fn798 $tmp797 = $tmp796->methods[1];
                        panda$core$Object* $tmp799 = $tmp797(p$Iter783);
                        p795 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp799);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp800 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp800->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp800->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp802 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type688, p795->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp800, p795->name, $tmp802);
                        panda$collections$Array$add$panda$collections$Array$T(parameters780, ((panda$core$Object*) $tmp800));
                    }
                    goto $l788;
                    $l789:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp804 = (org$pandalanguage$pandac$MethodDecl*) malloc(121);
                $tmp804->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp804->refCount.value = 1;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp804, result695, ((org$pandalanguage$pandac$Symbol*) m775)->position, m775->doccomment, m775->annotations, m775->methodKind, ((org$pandalanguage$pandac$Symbol*) m775)->name, parameters780, m775->returnType, m775->body);
                clone803 = $tmp804;
                panda$collections$Array$add$panda$collections$Array$T(result695->methods, ((panda$core$Object*) clone803));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result695->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone803));
            }
            goto $l768;
            $l769:;
        }
        {
            ITable* $tmp807 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp807->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp807 = $tmp807->next;
            }
            $fn809 $tmp808 = $tmp807->methods[0];
            panda$collections$Iterator* $tmp810 = $tmp808(((panda$collections$Iterable*) p_cl->fields));
            f$Iter806 = $tmp810;
            $l811:;
            ITable* $tmp813 = f$Iter806->$class->itable;
            while ($tmp813->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp813 = $tmp813->next;
            }
            $fn815 $tmp814 = $tmp813->methods[0];
            panda$core$Bit $tmp816 = $tmp814(f$Iter806);
            panda$core$Bit $tmp817 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp816);
            if (!$tmp817.value) goto $l812;
            {
                ITable* $tmp819 = f$Iter806->$class->itable;
                while ($tmp819->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp819 = $tmp819->next;
                }
                $fn821 $tmp820 = $tmp819->methods[1];
                panda$core$Object* $tmp822 = $tmp820(f$Iter806);
                f818 = ((org$pandalanguage$pandac$FieldDecl*) $tmp822);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f818);
                org$pandalanguage$pandac$FieldDecl* $tmp824 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp824->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp824->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp826 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type688, f818->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp824, result695, ((org$pandalanguage$pandac$Symbol*) f818)->position, f818->doccomment, f818->annotations, f818->fieldKind, ((org$pandalanguage$pandac$Symbol*) f818)->name, $tmp826, f818->rawValue);
                clone823 = $tmp824;
                panda$collections$Array$add$panda$collections$Array$T(result695->fields, ((panda$core$Object*) clone823));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result695->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone823));
            }
            goto $l811;
            $l812:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result695)->name), ((panda$core$Object*) result695));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result695));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return result695;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result827;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp828 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result827 = $tmp828;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp829 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp830 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp829));
            result827 = $tmp830;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp831 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp831;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp832 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result827->annotations);
    if ($tmp832.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp833 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result827, p_type);
        result827 = $tmp833;
    }
    }
    return result827;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl834;
    panda$collections$Set* result836;
    panda$collections$Iterator* intf$Iter841;
    org$pandalanguage$pandac$Type* intf853;
    org$pandalanguage$pandac$ClassDecl* $tmp835 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl834 = $tmp835;
    PANDA_ASSERT(((panda$core$Bit) { cl834 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl834);
    panda$collections$Set* $tmp837 = (panda$collections$Set*) malloc(24);
    $tmp837->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp837->refCount.value = 1;
    panda$collections$Set$init($tmp837);
    result836 = $tmp837;
    if (((panda$core$Bit) { cl834->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp839 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl834->rawSuper);
        panda$collections$Set* $tmp840 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp839);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result836, ((panda$collections$CollectionView*) $tmp840));
    }
    }
    {
        ITable* $tmp842 = ((panda$collections$Iterable*) cl834->rawInterfaces)->$class->itable;
        while ($tmp842->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp842 = $tmp842->next;
        }
        $fn844 $tmp843 = $tmp842->methods[0];
        panda$collections$Iterator* $tmp845 = $tmp843(((panda$collections$Iterable*) cl834->rawInterfaces));
        intf$Iter841 = $tmp845;
        $l846:;
        ITable* $tmp848 = intf$Iter841->$class->itable;
        while ($tmp848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp848 = $tmp848->next;
        }
        $fn850 $tmp849 = $tmp848->methods[0];
        panda$core$Bit $tmp851 = $tmp849(intf$Iter841);
        panda$core$Bit $tmp852 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp851);
        if (!$tmp852.value) goto $l847;
        {
            ITable* $tmp854 = intf$Iter841->$class->itable;
            while ($tmp854->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp854 = $tmp854->next;
            }
            $fn856 $tmp855 = $tmp854->methods[1];
            panda$core$Object* $tmp857 = $tmp855(intf$Iter841);
            intf853 = ((org$pandalanguage$pandac$Type*) $tmp857);
            org$pandalanguage$pandac$Type* $tmp858 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf853);
            panda$collections$Set* $tmp859 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp858);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result836, ((panda$collections$CollectionView*) $tmp859));
        }
        goto $l846;
        $l847:;
    }
    panda$core$Bit $tmp860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl834->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp860.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result836, ((panda$collections$Key*) p_t));
    }
    }
    return result836;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp866;
    panda$core$Bit $tmp861 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp861.value);
    panda$core$Bit $tmp862 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp862.value);
    panda$core$Int64 $tmp863 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp864 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp865 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp863, $tmp864);
    if ($tmp865.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp867 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp866, ((panda$core$Int64) { 0 }), $tmp867, ((panda$core$Bit) { false }));
    int64_t $tmp869 = $tmp866.min.value;
    panda$core$Int64 i868 = { $tmp869 };
    int64_t $tmp871 = $tmp866.max.value;
    bool $tmp872 = $tmp866.inclusive.value;
    if ($tmp872) goto $l879; else goto $l880;
    $l879:;
    if ($tmp869 <= $tmp871) goto $l873; else goto $l875;
    $l880:;
    if ($tmp869 < $tmp871) goto $l873; else goto $l875;
    $l873:;
    {
        panda$core$Object* $tmp881 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i868);
        panda$core$Object* $tmp882 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i868);
        panda$core$Bit $tmp883 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp881), ((org$pandalanguage$pandac$Type*) $tmp882));
        if ($tmp883.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l876:;
    int64_t $tmp885 = $tmp871 - i868.value;
    if ($tmp872) goto $l886; else goto $l887;
    $l886:;
    if ($tmp885 >= 1) goto $l884; else goto $l875;
    $l887:;
    if ($tmp885 > 1) goto $l884; else goto $l875;
    $l884:;
    i868.value += 1;
    goto $l873;
    $l875:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl890;
    panda$collections$Iterator* test$Iter892;
    org$pandalanguage$pandac$MethodDecl* test904;
    panda$collections$Iterator* raw$Iter917;
    org$pandalanguage$pandac$Type* raw929;
    org$pandalanguage$pandac$MethodDecl* result934;
    org$pandalanguage$pandac$ClassDecl* $tmp891 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl890 = $tmp891;
    PANDA_ASSERT(((panda$core$Bit) { cl890 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl890);
    {
        ITable* $tmp893 = ((panda$collections$Iterable*) cl890->methods)->$class->itable;
        while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp893 = $tmp893->next;
        }
        $fn895 $tmp894 = $tmp893->methods[0];
        panda$collections$Iterator* $tmp896 = $tmp894(((panda$collections$Iterable*) cl890->methods));
        test$Iter892 = $tmp896;
        $l897:;
        ITable* $tmp899 = test$Iter892->$class->itable;
        while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp899 = $tmp899->next;
        }
        $fn901 $tmp900 = $tmp899->methods[0];
        panda$core$Bit $tmp902 = $tmp900(test$Iter892);
        panda$core$Bit $tmp903 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp902);
        if (!$tmp903.value) goto $l898;
        {
            ITable* $tmp905 = test$Iter892->$class->itable;
            while ($tmp905->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp905 = $tmp905->next;
            }
            $fn907 $tmp906 = $tmp905->methods[1];
            panda$core$Object* $tmp908 = $tmp906(test$Iter892);
            test904 = ((org$pandalanguage$pandac$MethodDecl*) $tmp908);
            panda$core$Bit $tmp909 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test904)->name, p_name);
            if ($tmp909.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test904);
                org$pandalanguage$pandac$Type* $tmp910 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test904);
                org$pandalanguage$pandac$Type* $tmp911 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp910);
                panda$core$Bit $tmp912 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp911, p_methodType);
                if ($tmp912.value) {
                {
                    return test904;
                }
                }
            }
            }
        }
        goto $l897;
        $l898:;
    }
    bool $tmp913 = p_checkInterfaces.value;
    if ($tmp913) goto $l914;
    panda$core$Bit $tmp915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl890->classKind, ((panda$core$Int64) { 5012 }));
    $tmp913 = $tmp915.value;
    $l914:;
    panda$core$Bit $tmp916 = { $tmp913 };
    if ($tmp916.value) {
    {
        {
            ITable* $tmp918 = ((panda$collections$Iterable*) cl890->rawInterfaces)->$class->itable;
            while ($tmp918->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp918 = $tmp918->next;
            }
            $fn920 $tmp919 = $tmp918->methods[0];
            panda$collections$Iterator* $tmp921 = $tmp919(((panda$collections$Iterable*) cl890->rawInterfaces));
            raw$Iter917 = $tmp921;
            $l922:;
            ITable* $tmp924 = raw$Iter917->$class->itable;
            while ($tmp924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp924 = $tmp924->next;
            }
            $fn926 $tmp925 = $tmp924->methods[0];
            panda$core$Bit $tmp927 = $tmp925(raw$Iter917);
            panda$core$Bit $tmp928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp927);
            if (!$tmp928.value) goto $l923;
            {
                ITable* $tmp930 = raw$Iter917->$class->itable;
                while ($tmp930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp930 = $tmp930->next;
                }
                $fn932 $tmp931 = $tmp930->methods[1];
                panda$core$Object* $tmp933 = $tmp931(raw$Iter917);
                raw929 = ((org$pandalanguage$pandac$Type*) $tmp933);
                org$pandalanguage$pandac$Type* $tmp935 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw929);
                org$pandalanguage$pandac$MethodDecl* $tmp936 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp935, p_name, p_methodType, p_checkInterfaces);
                result934 = $tmp936;
                if (((panda$core$Bit) { result934 != NULL }).value) {
                {
                    return result934;
                }
                }
            }
            goto $l922;
            $l923:;
        }
    }
    }
    if (((panda$core$Bit) { cl890->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp937 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl890->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp938 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp937, p_name, p_methodType, p_checkInterfaces);
        return $tmp938;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType940;
    org$pandalanguage$pandac$Type* owner942;
    panda$collections$Iterator* raw$Iter944;
    org$pandalanguage$pandac$Type* raw956;
    org$pandalanguage$pandac$MethodDecl* result961;
    panda$core$Bit $tmp939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp939.value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp941 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType940 = $tmp941;
    org$pandalanguage$pandac$Type* $tmp943 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner942 = $tmp943;
    {
        ITable* $tmp945 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp945->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp945 = $tmp945->next;
        }
        $fn947 $tmp946 = $tmp945->methods[0];
        panda$collections$Iterator* $tmp948 = $tmp946(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter944 = $tmp948;
        $l949:;
        ITable* $tmp951 = raw$Iter944->$class->itable;
        while ($tmp951->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp951 = $tmp951->next;
        }
        $fn953 $tmp952 = $tmp951->methods[0];
        panda$core$Bit $tmp954 = $tmp952(raw$Iter944);
        panda$core$Bit $tmp955 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp954);
        if (!$tmp955.value) goto $l950;
        {
            ITable* $tmp957 = raw$Iter944->$class->itable;
            while ($tmp957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp957 = $tmp957->next;
            }
            $fn959 $tmp958 = $tmp957->methods[1];
            panda$core$Object* $tmp960 = $tmp958(raw$Iter944);
            raw956 = ((org$pandalanguage$pandac$Type*) $tmp960);
            org$pandalanguage$pandac$Type* $tmp962 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner942, raw956);
            org$pandalanguage$pandac$MethodDecl* $tmp963 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp962, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType940, ((panda$core$Bit) { true }));
            result961 = $tmp963;
            if (((panda$core$Bit) { result961 != NULL }).value) {
            {
                return result961;
            }
            }
        }
        goto $l949;
        $l950:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp964 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner942, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp965 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp964, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType940, ((panda$core$Bit) { true }));
        return $tmp965;
    }
    }
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass966;
    panda$collections$Array* result968;
    panda$collections$Iterator* m$Iter971;
    org$pandalanguage$pandac$MethodDecl* m983;
    org$pandalanguage$pandac$MethodDecl* found988;
    org$pandalanguage$pandac$ClassDecl* $tmp967 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass966 = $tmp967;
    PANDA_ASSERT(((panda$core$Bit) { intfClass966 != NULL }).value);
    panda$collections$Array* $tmp969 = (panda$collections$Array*) malloc(40);
    $tmp969->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp969->refCount.value = 1;
    panda$collections$Array$init($tmp969);
    result968 = $tmp969;
    {
        ITable* $tmp972 = ((panda$collections$Iterable*) intfClass966->methods)->$class->itable;
        while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp972 = $tmp972->next;
        }
        $fn974 $tmp973 = $tmp972->methods[0];
        panda$collections$Iterator* $tmp975 = $tmp973(((panda$collections$Iterable*) intfClass966->methods));
        m$Iter971 = $tmp975;
        $l976:;
        ITable* $tmp978 = m$Iter971->$class->itable;
        while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp978 = $tmp978->next;
        }
        $fn980 $tmp979 = $tmp978->methods[0];
        panda$core$Bit $tmp981 = $tmp979(m$Iter971);
        panda$core$Bit $tmp982 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp981);
        if (!$tmp982.value) goto $l977;
        {
            ITable* $tmp984 = m$Iter971->$class->itable;
            while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp984 = $tmp984->next;
            }
            $fn986 $tmp985 = $tmp984->methods[1];
            panda$core$Object* $tmp987 = $tmp985(m$Iter971);
            m983 = ((org$pandalanguage$pandac$MethodDecl*) $tmp987);
            org$pandalanguage$pandac$Type* $tmp989 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp990 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m983);
            org$pandalanguage$pandac$Type* $tmp991 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp990);
            org$pandalanguage$pandac$MethodDecl* $tmp992 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp989, ((org$pandalanguage$pandac$Symbol*) m983)->name, $tmp991, ((panda$core$Bit) { false }));
            found988 = $tmp992;
            PANDA_ASSERT(((panda$core$Bit) { found988 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result968, ((panda$core$Object*) found988));
        }
        goto $l976;
        $l977:;
    }
    return ((panda$collections$ListView*) result968);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl994;
    panda$collections$Iterator* rawIntf$Iter997;
    org$pandalanguage$pandac$Type* rawIntf1009;
    org$pandalanguage$pandac$ClassDecl* intf1014;
    panda$core$Bit $tmp993 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp993.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp995 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl994 = $tmp995;
            if (((panda$core$Bit) { superCl994 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp996 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl994);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp996));
            }
            }
        }
        }
        {
            ITable* $tmp998 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp998->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp998 = $tmp998->next;
            }
            $fn1000 $tmp999 = $tmp998->methods[0];
            panda$collections$Iterator* $tmp1001 = $tmp999(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter997 = $tmp1001;
            $l1002:;
            ITable* $tmp1004 = rawIntf$Iter997->$class->itable;
            while ($tmp1004->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1004 = $tmp1004->next;
            }
            $fn1006 $tmp1005 = $tmp1004->methods[0];
            panda$core$Bit $tmp1007 = $tmp1005(rawIntf$Iter997);
            panda$core$Bit $tmp1008 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1007);
            if (!$tmp1008.value) goto $l1003;
            {
                ITable* $tmp1010 = rawIntf$Iter997->$class->itable;
                while ($tmp1010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1010 = $tmp1010->next;
                }
                $fn1012 $tmp1011 = $tmp1010->methods[1];
                panda$core$Object* $tmp1013 = $tmp1011(rawIntf$Iter997);
                rawIntf1009 = ((org$pandalanguage$pandac$Type*) $tmp1013);
                org$pandalanguage$pandac$ClassDecl* $tmp1015 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1009);
                intf1014 = $tmp1015;
                if (((panda$core$Bit) { intf1014 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1016 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1014);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1016));
                }
                }
            }
            goto $l1002;
            $l1003:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1019;
    panda$collections$Iterator* derived$Iter1022;
    org$pandalanguage$pandac$MethodDecl* derived1034;
    panda$core$Bit found1044;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1045;
    org$pandalanguage$pandac$MethodDecl* base1060;
    panda$core$Int64 $tmp1017 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1017, ((panda$core$Int64) { 0 }));
    if ($tmp1018.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1020 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1019 = $tmp1020;
            if (((panda$core$Bit) { superCl1019 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1021 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1019);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1021));
        }
        }
        {
            ITable* $tmp1023 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1023->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1023 = $tmp1023->next;
            }
            $fn1025 $tmp1024 = $tmp1023->methods[0];
            panda$collections$Iterator* $tmp1026 = $tmp1024(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1022 = $tmp1026;
            $l1027:;
            ITable* $tmp1029 = derived$Iter1022->$class->itable;
            while ($tmp1029->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1029 = $tmp1029->next;
            }
            $fn1031 $tmp1030 = $tmp1029->methods[0];
            panda$core$Bit $tmp1032 = $tmp1030(derived$Iter1022);
            panda$core$Bit $tmp1033 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1032);
            if (!$tmp1033.value) goto $l1028;
            {
                ITable* $tmp1035 = derived$Iter1022->$class->itable;
                while ($tmp1035->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1035 = $tmp1035->next;
                }
                $fn1037 $tmp1036 = $tmp1035->methods[1];
                panda$core$Object* $tmp1038 = $tmp1036(derived$Iter1022);
                derived1034 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1038);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1034);
                panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1034->methodKind, ((panda$core$Int64) { 59 }));
                bool $tmp1039 = $tmp1040.value;
                if ($tmp1039) goto $l1041;
                panda$core$Bit $tmp1042 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1034->annotations);
                $tmp1039 = $tmp1042.value;
                $l1041:;
                panda$core$Bit $tmp1043 = { $tmp1039 };
                if ($tmp1043.value) {
                {
                    goto $l1027;
                }
                }
                found1044 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1046 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1045, ((panda$core$Int64) { 0 }), $tmp1046, ((panda$core$Bit) { false }));
                int64_t $tmp1048 = $tmp1045.min.value;
                panda$core$Int64 i1047 = { $tmp1048 };
                int64_t $tmp1050 = $tmp1045.max.value;
                bool $tmp1051 = $tmp1045.inclusive.value;
                if ($tmp1051) goto $l1058; else goto $l1059;
                $l1058:;
                if ($tmp1048 <= $tmp1050) goto $l1052; else goto $l1054;
                $l1059:;
                if ($tmp1048 < $tmp1050) goto $l1052; else goto $l1054;
                $l1052:;
                {
                    panda$core$Object* $tmp1061 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1047);
                    base1060 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1061);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1060);
                    panda$core$Bit $tmp1062 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1034, base1060);
                    if ($tmp1062.value) {
                    {
                        found1044 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1047, ((panda$core$Object*) derived1034));
                        goto $l1054;
                    }
                    }
                }
                $l1055:;
                int64_t $tmp1064 = $tmp1050 - i1047.value;
                if ($tmp1051) goto $l1065; else goto $l1066;
                $l1065:;
                if ($tmp1064 >= 1) goto $l1063; else goto $l1054;
                $l1066:;
                if ($tmp1064 > 1) goto $l1063; else goto $l1054;
                $l1063:;
                i1047.value += 1;
                goto $l1052;
                $l1054:;
                panda$core$Bit $tmp1069 = panda$core$Bit$$NOT$R$panda$core$Bit(found1044);
                if ($tmp1069.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1034));
                }
                }
            }
            goto $l1027;
            $l1028:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1070;
    org$pandalanguage$pandac$Symbol* s1073;
    panda$collections$Iterator* m$Iter1079;
    org$pandalanguage$pandac$MethodDecl* m1091;
    panda$collections$Iterator* p$Iter1098;
    org$pandalanguage$pandac$SymbolTable* p1110;
    panda$collections$Array* children1115;
    panda$collections$Array* types1127;
    panda$collections$Iterator* m$Iter1130;
    org$pandalanguage$pandac$MethodRef* m1142;
    panda$collections$Array* $tmp1071 = (panda$collections$Array*) malloc(40);
    $tmp1071->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1071->refCount.value = 1;
    panda$collections$Array$init($tmp1071);
    methods1070 = $tmp1071;
    org$pandalanguage$pandac$Symbol* $tmp1074 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1073 = $tmp1074;
    PANDA_ASSERT(((panda$core$Bit) { s1073 != NULL }).value);
    panda$core$Bit $tmp1075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1073->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1075.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1073));
        org$pandalanguage$pandac$MethodRef* $tmp1076 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1076->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1076->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1076, ((org$pandalanguage$pandac$MethodDecl*) s1073), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1070, ((panda$core$Object*) $tmp1076));
    }
    }
    else {
    {
        panda$core$Bit $tmp1078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1073->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1078.value);
        {
            ITable* $tmp1080 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1073)->methods)->$class->itable;
            while ($tmp1080->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1080 = $tmp1080->next;
            }
            $fn1082 $tmp1081 = $tmp1080->methods[0];
            panda$collections$Iterator* $tmp1083 = $tmp1081(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1073)->methods));
            m$Iter1079 = $tmp1083;
            $l1084:;
            ITable* $tmp1086 = m$Iter1079->$class->itable;
            while ($tmp1086->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1086 = $tmp1086->next;
            }
            $fn1088 $tmp1087 = $tmp1086->methods[0];
            panda$core$Bit $tmp1089 = $tmp1087(m$Iter1079);
            panda$core$Bit $tmp1090 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1089);
            if (!$tmp1090.value) goto $l1085;
            {
                ITable* $tmp1092 = m$Iter1079->$class->itable;
                while ($tmp1092->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1092 = $tmp1092->next;
                }
                $fn1094 $tmp1093 = $tmp1092->methods[1];
                panda$core$Object* $tmp1095 = $tmp1093(m$Iter1079);
                m1091 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1095);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1091);
                org$pandalanguage$pandac$MethodRef* $tmp1096 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1096->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1096->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1096, m1091, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1070, ((panda$core$Object*) $tmp1096));
            }
            goto $l1084;
            $l1085:;
        }
    }
    }
    {
        ITable* $tmp1099 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1099->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1099 = $tmp1099->next;
        }
        $fn1101 $tmp1100 = $tmp1099->methods[0];
        panda$collections$Iterator* $tmp1102 = $tmp1100(((panda$collections$Iterable*) p_st->parents));
        p$Iter1098 = $tmp1102;
        $l1103:;
        ITable* $tmp1105 = p$Iter1098->$class->itable;
        while ($tmp1105->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1105 = $tmp1105->next;
        }
        $fn1107 $tmp1106 = $tmp1105->methods[0];
        panda$core$Bit $tmp1108 = $tmp1106(p$Iter1098);
        panda$core$Bit $tmp1109 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1108);
        if (!$tmp1109.value) goto $l1104;
        {
            ITable* $tmp1111 = p$Iter1098->$class->itable;
            while ($tmp1111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1111 = $tmp1111->next;
            }
            $fn1113 $tmp1112 = $tmp1111->methods[1];
            panda$core$Object* $tmp1114 = $tmp1112(p$Iter1098);
            p1110 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1114);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1110, p_name, methods1070, p_types);
        }
        goto $l1103;
        $l1104:;
    }
    panda$collections$Array* $tmp1116 = (panda$collections$Array*) malloc(40);
    $tmp1116->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1116->refCount.value = 1;
    panda$collections$Array$init($tmp1116);
    children1115 = $tmp1116;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1115, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1118 = panda$collections$Array$get_count$R$panda$core$Int64(methods1070);
    panda$core$Bit $tmp1119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1118, ((panda$core$Int64) { 1 }));
    if ($tmp1119.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1120 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1120->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1120->refCount.value = 1;
        panda$core$Object* $tmp1122 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1070, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1123 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1122));
        panda$core$Object* $tmp1124 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1070, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1120, ((panda$core$Int64) { 1002 }), p_position, $tmp1123, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1124)), ((panda$collections$ListView*) children1115));
        return $tmp1120;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1125 = panda$collections$Array$get_count$R$panda$core$Int64(methods1070);
        panda$core$Bit $tmp1126 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1125, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1126.value);
        panda$collections$Array* $tmp1128 = (panda$collections$Array*) malloc(40);
        $tmp1128->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1128->refCount.value = 1;
        panda$collections$Array$init($tmp1128);
        types1127 = $tmp1128;
        {
            ITable* $tmp1131 = ((panda$collections$Iterable*) methods1070)->$class->itable;
            while ($tmp1131->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1131 = $tmp1131->next;
            }
            $fn1133 $tmp1132 = $tmp1131->methods[0];
            panda$collections$Iterator* $tmp1134 = $tmp1132(((panda$collections$Iterable*) methods1070));
            m$Iter1130 = $tmp1134;
            $l1135:;
            ITable* $tmp1137 = m$Iter1130->$class->itable;
            while ($tmp1137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1137 = $tmp1137->next;
            }
            $fn1139 $tmp1138 = $tmp1137->methods[0];
            panda$core$Bit $tmp1140 = $tmp1138(m$Iter1130);
            panda$core$Bit $tmp1141 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1140);
            if (!$tmp1141.value) goto $l1136;
            {
                ITable* $tmp1143 = m$Iter1130->$class->itable;
                while ($tmp1143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1143 = $tmp1143->next;
                }
                $fn1145 $tmp1144 = $tmp1143->methods[1];
                panda$core$Object* $tmp1146 = $tmp1144(m$Iter1130);
                m1142 = ((org$pandalanguage$pandac$MethodRef*) $tmp1146);
                org$pandalanguage$pandac$Type* $tmp1147 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1142);
                panda$collections$Array$add$panda$collections$Array$T(types1127, ((panda$core$Object*) $tmp1147));
            }
            goto $l1135;
            $l1136:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1148 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1148->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1148->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1150 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1150->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1150->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1150, ((panda$collections$ListView*) types1127));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1148, ((panda$core$Int64) { 1003 }), p_position, $tmp1150, ((panda$core$Object*) methods1070), ((panda$collections$ListView*) children1115));
        return $tmp1148;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1152;
    org$pandalanguage$pandac$FieldDecl* f1168;
    panda$collections$Array* children1171;
    org$pandalanguage$pandac$Type* effectiveType1176;
    org$pandalanguage$pandac$IRNode* result1181;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1153 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1152 = $tmp1153;
            if (((panda$core$Bit) { cl1152 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1154 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1152);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1152, $tmp1154);
                org$pandalanguage$pandac$IRNode* $tmp1155 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1155->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1155->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1157 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1158 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1152);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1155, ((panda$core$Int64) { 1001 }), p_position, $tmp1157, $tmp1158);
                return $tmp1155;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1159 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1159);
            org$pandalanguage$pandac$IRNode* $tmp1160 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1160->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1160->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1162 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1163 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1160, ((panda$core$Int64) { 1001 }), p_position, $tmp1162, $tmp1163);
            return $tmp1160;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1164 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1165 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1164);
            return $tmp1165;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1166 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1166->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1166->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1166, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1166;
        }
        break;
        case 202:
        {
            f1168 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1168);
            org$pandalanguage$pandac$Type* $tmp1169 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1170 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1168->type, $tmp1169);
            if ($tmp1170.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1172 = (panda$collections$Array*) malloc(40);
            $tmp1172->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1172->refCount.value = 1;
            panda$collections$Array$init($tmp1172);
            children1171 = $tmp1172;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1174.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1175);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1177 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1168->type);
                effectiveType1176 = $tmp1177;
                panda$core$Bit $tmp1178 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1168->annotations);
                if ($tmp1178.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1171, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1179 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1168->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1180 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1179);
                    panda$collections$Array$add$panda$collections$Array$T(children1171, ((panda$core$Object*) $tmp1180));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1182 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1182->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1182->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1182, ((panda$core$Int64) { 1026 }), p_position, f1168->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1171));
                result1181 = $tmp1182;
                panda$core$Bit $tmp1184 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1176, result1181->type);
                if ($tmp1184.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1185 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1181, p_position, ((panda$core$Bit) { false }), effectiveType1176);
                    result1181 = $tmp1185;
                }
                }
                return result1181;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1186 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1186->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1186->refCount.value = 1;
                panda$core$Object* $tmp1188 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1189 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1188));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1186, ((panda$core$Int64) { 1025 }), p_position, $tmp1189);
                panda$collections$Array$add$panda$collections$Array$T(children1171, ((panda$core$Object*) $tmp1186));
                org$pandalanguage$pandac$IRNode* $tmp1190 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1190->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1190->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1190, ((panda$core$Int64) { 1026 }), p_position, f1168->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1171));
                return $tmp1190;
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
    panda$collections$HashMap* typeMap1198;
    org$pandalanguage$pandac$Type* base1201;
    org$pandalanguage$pandac$ClassDecl* cl1203;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1205;
    switch (p_context->typeKind.value) {
        case 10:
        {
            return p_raw;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp1192 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1192, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1193.value);
            panda$core$Object* $tmp1194 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1195 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1194), p_raw);
            return $tmp1195;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1196 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1197 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1196, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1197.value);
            panda$collections$HashMap* $tmp1199 = (panda$collections$HashMap*) malloc(56);
            $tmp1199->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1199->refCount.value = 1;
            panda$collections$HashMap$init($tmp1199);
            typeMap1198 = $tmp1199;
            panda$core$Object* $tmp1202 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1201 = ((org$pandalanguage$pandac$Type*) $tmp1202);
            org$pandalanguage$pandac$ClassDecl* $tmp1204 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1201)->name);
            cl1203 = $tmp1204;
            PANDA_ASSERT(((panda$core$Bit) { cl1203 != NULL }).value);
            panda$core$Int64 $tmp1206 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1205, ((panda$core$Int64) { 1 }), $tmp1206, ((panda$core$Bit) { false }));
            int64_t $tmp1208 = $tmp1205.min.value;
            panda$core$Int64 i1207 = { $tmp1208 };
            int64_t $tmp1210 = $tmp1205.max.value;
            bool $tmp1211 = $tmp1205.inclusive.value;
            if ($tmp1211) goto $l1218; else goto $l1219;
            $l1218:;
            if ($tmp1208 <= $tmp1210) goto $l1212; else goto $l1214;
            $l1219:;
            if ($tmp1208 < $tmp1210) goto $l1212; else goto $l1214;
            $l1212:;
            {
                panda$core$String* $tmp1221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1203)->name, &$s1220);
                panda$core$Int64 $tmp1222 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1207, ((panda$core$Int64) { 1 }));
                ITable* $tmp1223 = ((panda$collections$ListView*) cl1203->parameters)->$class->itable;
                while ($tmp1223->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1223 = $tmp1223->next;
                }
                $fn1225 $tmp1224 = $tmp1223->methods[0];
                panda$core$Object* $tmp1226 = $tmp1224(((panda$collections$ListView*) cl1203->parameters), $tmp1222);
                panda$core$String* $tmp1227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1221, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1226))->name);
                panda$core$Object* $tmp1228 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1207);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1198, ((panda$collections$Key*) $tmp1227), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1228)));
            }
            $l1215:;
            int64_t $tmp1230 = $tmp1210 - i1207.value;
            if ($tmp1211) goto $l1231; else goto $l1232;
            $l1231:;
            if ($tmp1230 >= 1) goto $l1229; else goto $l1214;
            $l1232:;
            if ($tmp1230 > 1) goto $l1229; else goto $l1214;
            $l1229:;
            i1207.value += 1;
            goto $l1212;
            $l1214:;
            org$pandalanguage$pandac$Type* $tmp1235 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1198);
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
    panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1242.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1243 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1243;
    }
    }
    return p_type;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* step1270;
    panda$collections$Array* args1297;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1298;
    org$pandalanguage$pandac$IRNode* c1300;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Int64 $tmp1244 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1244, ((panda$core$Int64) { 2 }));
            if ($tmp1245.value) {
            {
                panda$core$Object* $tmp1246 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1246)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1247.value) {
                {
                    panda$core$Object* $tmp1248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1248)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1249.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1250 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1251 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1250);
                        org$pandalanguage$pandac$Type* $tmp1252 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1251);
                        return $tmp1252;
                    }
                    }
                    panda$core$Object* $tmp1253 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$Type* $tmp1254 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1253)->type);
                    org$pandalanguage$pandac$Type* $tmp1255 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1254);
                    org$pandalanguage$pandac$Type* $tmp1256 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1255);
                    return $tmp1256;
                }
                }
                panda$core$Object* $tmp1257 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1257)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1258.value) {
                {
                    panda$core$Object* $tmp1259 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp1260 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1259)->type);
                    org$pandalanguage$pandac$Type* $tmp1261 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1260);
                    org$pandalanguage$pandac$Type* $tmp1262 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1261);
                    return $tmp1262;
                }
                }
                panda$core$Object* $tmp1263 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1264 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1263)->type);
                panda$core$Object* $tmp1265 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1266 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1265)->type);
                org$pandalanguage$pandac$Type* $tmp1267 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1264, $tmp1266);
                org$pandalanguage$pandac$Type* $tmp1268 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1267);
                org$pandalanguage$pandac$Type* $tmp1269 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1268);
                return $tmp1269;
            }
            }
            panda$core$Object* $tmp1271 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1272 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1271)->type);
            step1270 = $tmp1272;
            panda$core$Object* $tmp1273 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1273)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1274.value) {
            {
                panda$core$Object* $tmp1275 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1275)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1276.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1277 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                    org$pandalanguage$pandac$Type* $tmp1278 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1277);
                    org$pandalanguage$pandac$Type* $tmp1279 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1278, step1270);
                    return $tmp1279;
                }
                }
                panda$core$Object* $tmp1280 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1281 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1280)->type);
                org$pandalanguage$pandac$Type* $tmp1282 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1281);
                org$pandalanguage$pandac$Type* $tmp1283 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1282, step1270);
                return $tmp1283;
            }
            }
            panda$core$Object* $tmp1284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1284)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1285.value) {
            {
                panda$core$Object* $tmp1286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1287 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1286)->type);
                org$pandalanguage$pandac$Type* $tmp1288 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1287);
                org$pandalanguage$pandac$Type* $tmp1289 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1288, step1270);
                return $tmp1289;
            }
            }
            panda$core$Object* $tmp1290 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1291 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1290)->type);
            panda$core$Object* $tmp1292 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Type* $tmp1293 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1292)->type);
            org$pandalanguage$pandac$Type* $tmp1294 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1291, $tmp1293);
            org$pandalanguage$pandac$Type* $tmp1295 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1294);
            org$pandalanguage$pandac$Type* $tmp1296 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1295, step1270);
            return $tmp1296;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1298, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1299 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1298);
            args1297 = $tmp1299;
            panda$core$Object* $tmp1301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1303 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1301), &$s1302, ((panda$collections$ListView*) args1297));
            c1300 = $tmp1303;
            if (((panda$core$Bit) { c1300 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1304 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1304;
            }
            }
            return c1300->type;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1305 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1305;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1316;
    panda$core$Int64$nullable result1320;
    panda$core$Int64$nullable best1329;
    panda$collections$Iterator* t$Iter1330;
    org$pandalanguage$pandac$Type* t1342;
    panda$core$Int64$nullable cost1347;
    org$pandalanguage$pandac$ClassDecl* cl1361;
    panda$core$Int64$nullable cost1363;
    panda$collections$Iterator* intf$Iter1368;
    org$pandalanguage$pandac$Type* intf1380;
    panda$core$Int64$nullable cost1385;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1306 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1306.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1307 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1308 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1307);
    if ($tmp1308.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1309.value) {
    {
        panda$core$Bit $tmp1310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1310.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1311 = $tmp1312.value;
    if (!$tmp1311) goto $l1313;
    panda$core$Bit $tmp1314 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1311 = $tmp1314.value;
    $l1313:;
    panda$core$Bit $tmp1315 = { $tmp1311 };
    if ($tmp1315.value) {
    {
        panda$core$Object* $tmp1317 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1318 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1317), p_target);
        result1316 = $tmp1318;
        if (((panda$core$Bit) { !result1316.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1319 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1316.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1319, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1321 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1322 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1321));
            result1320 = $tmp1322;
            if (((panda$core$Bit) { !result1320.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1323 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1320.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1323, true });
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
            panda$core$Bit $tmp1324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1324.value) {
            {
                panda$core$Object* $tmp1325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1326 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1325), p_target);
                return $tmp1326;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1327 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1328 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1327, p_target);
            return $tmp1328;
        }
        break;
        case 17:
        {
            best1329 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1331 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1331->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1331 = $tmp1331->next;
                }
                $fn1333 $tmp1332 = $tmp1331->methods[0];
                panda$collections$Iterator* $tmp1334 = $tmp1332(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1330 = $tmp1334;
                $l1335:;
                ITable* $tmp1337 = t$Iter1330->$class->itable;
                while ($tmp1337->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1337 = $tmp1337->next;
                }
                $fn1339 $tmp1338 = $tmp1337->methods[0];
                panda$core$Bit $tmp1340 = $tmp1338(t$Iter1330);
                panda$core$Bit $tmp1341 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1340);
                if (!$tmp1341.value) goto $l1336;
                {
                    ITable* $tmp1343 = t$Iter1330->$class->itable;
                    while ($tmp1343->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1343 = $tmp1343->next;
                    }
                    $fn1345 $tmp1344 = $tmp1343->methods[1];
                    panda$core$Object* $tmp1346 = $tmp1344(t$Iter1330);
                    t1342 = ((org$pandalanguage$pandac$Type*) $tmp1346);
                    panda$core$Int64$nullable $tmp1348 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1342, p_target);
                    cost1347 = $tmp1348;
                    bool $tmp1349 = ((panda$core$Bit) { cost1347.nonnull }).value;
                    if (!$tmp1349) goto $l1350;
                    bool $tmp1351 = ((panda$core$Bit) { !best1329.nonnull }).value;
                    if ($tmp1351) goto $l1352;
                    panda$core$Bit $tmp1353 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1347.value), ((panda$core$Int64) best1329.value));
                    $tmp1351 = $tmp1353.value;
                    $l1352:;
                    panda$core$Bit $tmp1354 = { $tmp1351 };
                    $tmp1349 = $tmp1354.value;
                    $l1350:;
                    panda$core$Bit $tmp1355 = { $tmp1349 };
                    if ($tmp1355.value) {
                    {
                        best1329 = cost1347;
                    }
                    }
                }
                goto $l1335;
                $l1336:;
            }
            return best1329;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1356 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1356;
        }
        break;
    }
    panda$core$Bit $tmp1357 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1358 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1357);
    if ($tmp1358.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1359 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1360 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1359);
    if ($tmp1360.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1362 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1361 = $tmp1362;
    PANDA_ASSERT(((panda$core$Bit) { cl1361 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1361);
    if (((panda$core$Bit) { cl1361->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1364 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1361->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1365 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1364);
        panda$core$Int64$nullable $tmp1366 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1365, p_target);
        cost1363 = $tmp1366;
        if (((panda$core$Bit) { cost1363.nonnull }).value) {
        {
            panda$core$Int64 $tmp1367 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1363.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1367, true });
        }
        }
    }
    }
    {
        ITable* $tmp1369 = ((panda$collections$Iterable*) cl1361->rawInterfaces)->$class->itable;
        while ($tmp1369->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1369 = $tmp1369->next;
        }
        $fn1371 $tmp1370 = $tmp1369->methods[0];
        panda$collections$Iterator* $tmp1372 = $tmp1370(((panda$collections$Iterable*) cl1361->rawInterfaces));
        intf$Iter1368 = $tmp1372;
        $l1373:;
        ITable* $tmp1375 = intf$Iter1368->$class->itable;
        while ($tmp1375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1375 = $tmp1375->next;
        }
        $fn1377 $tmp1376 = $tmp1375->methods[0];
        panda$core$Bit $tmp1378 = $tmp1376(intf$Iter1368);
        panda$core$Bit $tmp1379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1378);
        if (!$tmp1379.value) goto $l1374;
        {
            ITable* $tmp1381 = intf$Iter1368->$class->itable;
            while ($tmp1381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1381 = $tmp1381->next;
            }
            $fn1383 $tmp1382 = $tmp1381->methods[1];
            panda$core$Object* $tmp1384 = $tmp1382(intf$Iter1368);
            intf1380 = ((org$pandalanguage$pandac$Type*) $tmp1384);
            org$pandalanguage$pandac$Type* $tmp1386 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1380);
            org$pandalanguage$pandac$Type* $tmp1387 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1386);
            panda$core$Int64$nullable $tmp1388 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1387, p_target);
            cost1385 = $tmp1388;
            if (((panda$core$Bit) { cost1385.nonnull }).value) {
            {
                panda$core$Int64 $tmp1389 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1385.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1389, true });
            }
            }
        }
        goto $l1373;
        $l1374:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1391 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1390 = $tmp1391.value;
    if (!$tmp1390) goto $l1392;
    panda$core$Bit $tmp1393 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1390 = $tmp1393.value;
    $l1392:;
    panda$core$Bit $tmp1394 = { $tmp1390 };
    if ($tmp1394.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1396 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1395 = $tmp1396.value;
    if (!$tmp1395) goto $l1397;
    panda$core$Bit $tmp1398 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1395 = $tmp1398.value;
    $l1397:;
    panda$core$Bit $tmp1399 = { $tmp1395 };
    if ($tmp1399.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1401 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1400 = $tmp1401.value;
    if (!$tmp1400) goto $l1402;
    panda$core$Bit $tmp1403 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1400 = $tmp1403.value;
    $l1402:;
    panda$core$Bit $tmp1404 = { $tmp1400 };
    if ($tmp1404.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1405 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1405.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1406 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1406.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1407 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1407.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable cost1410;
    panda$core$Int64$nullable cost11483;
    panda$core$Int64$nullable cost21487;
    panda$core$Int64 cost1495;
    panda$core$Int64$nullable cost11509;
    panda$core$Int64$nullable cost21513;
    panda$core$Int64$nullable cost31518;
    org$pandalanguage$pandac$ClassDecl* targetClass1528;
    panda$collections$Iterator* m$Iter1530;
    org$pandalanguage$pandac$MethodDecl* m1542;
    panda$core$Int64$nullable cost1551;
    panda$core$Bit $tmp1408 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1408.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1409.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Object* $tmp1411 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1412 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1411));
            cost1410 = $tmp1412;
            if (((panda$core$Bit) { !cost1410.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1413.value) {
            {
                return cost1410;
            }
            }
            panda$core$Int64 $tmp1414 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1410.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1414, true });
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1415 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1415;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1416.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1417 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1417.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1418 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1419 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1418, p_target);
                return $tmp1419;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1421 = $tmp1422.value;
            if (!$tmp1421) goto $l1423;
            panda$core$Int64 $tmp1424 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1425 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1424);
            panda$core$Int64 $tmp1426 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1427 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1425, $tmp1426);
            $tmp1421 = $tmp1427.value;
            $l1423:;
            panda$core$Bit $tmp1428 = { $tmp1421 };
            bool $tmp1420 = $tmp1428.value;
            if ($tmp1420) goto $l1429;
            panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1430 = $tmp1431.value;
            if (!$tmp1430) goto $l1432;
            panda$core$Int64 $tmp1433 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1434 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1435 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1433, $tmp1434);
            $tmp1430 = $tmp1435.value;
            $l1432:;
            panda$core$Bit $tmp1436 = { $tmp1430 };
            $tmp1420 = $tmp1436.value;
            $l1429:;
            panda$core$Bit $tmp1437 = { $tmp1420 };
            if ($tmp1437.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1438 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1439 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1438);
            if ($tmp1439.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1440 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1441 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1440, p_target);
                return $tmp1441;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1443 = $tmp1444.value;
            if (!$tmp1443) goto $l1445;
            panda$core$Int64 $tmp1446 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1447 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1446);
            panda$core$Int64 $tmp1448 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1447);
            panda$core$Int64 $tmp1449 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1450 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1448, $tmp1449);
            $tmp1443 = $tmp1450.value;
            $l1445:;
            panda$core$Bit $tmp1451 = { $tmp1443 };
            bool $tmp1442 = $tmp1451.value;
            if ($tmp1442) goto $l1452;
            panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1453 = $tmp1454.value;
            if (!$tmp1453) goto $l1455;
            panda$core$Int64 $tmp1456 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1457 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1456);
            panda$core$Int64 $tmp1458 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1457);
            panda$core$Int64 $tmp1459 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1460 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1458, $tmp1459);
            $tmp1453 = $tmp1460.value;
            $l1455:;
            panda$core$Bit $tmp1461 = { $tmp1453 };
            $tmp1442 = $tmp1461.value;
            $l1452:;
            panda$core$Bit $tmp1462 = { $tmp1442 };
            if ($tmp1462.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
            }
            }
            panda$core$Bit $tmp1463 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1464 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1463);
            if ($tmp1464.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1465 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1466 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1465, p_target);
                return $tmp1466;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1467 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1467.value) {
            {
                panda$core$Int64 $tmp1468 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1469 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1468, ((panda$core$Int64) { 2 }));
                if ($tmp1469.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1471)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1470 = $tmp1472.value;
                if (!$tmp1470) goto $l1473;
                panda$core$Object* $tmp1474 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1474)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1470 = $tmp1475.value;
                $l1473:;
                panda$core$Bit $tmp1476 = { $tmp1470 };
                if ($tmp1476.value) {
                {
                    panda$core$Object* $tmp1477 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1477)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1478.value) {
                    {
                        panda$core$Object* $tmp1479 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1480 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1479)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1481 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1480));
                        if ($tmp1481.value) {
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
                panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1482.value);
                panda$core$Object* $tmp1484 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1485 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1486 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1484), ((org$pandalanguage$pandac$Type*) $tmp1485));
                cost11483 = $tmp1486;
                if (((panda$core$Bit) { !cost11483.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1489 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1490 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1488), ((org$pandalanguage$pandac$Type*) $tmp1489));
                cost21487 = $tmp1490;
                if (((panda$core$Bit) { !cost21487.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1491 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11483.value), ((panda$core$Int64) cost21487.value));
                return ((panda$core$Int64$nullable) { $tmp1491, true });
            }
            }
            panda$core$Bit $tmp1492 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1492.value) {
            {
                panda$core$Int64 $tmp1493 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1494 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1493, ((panda$core$Int64) { 3 }));
                if ($tmp1494.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1497)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1496 = $tmp1498.value;
                if (!$tmp1496) goto $l1499;
                panda$core$Object* $tmp1500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1500)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1496 = $tmp1501.value;
                $l1499:;
                panda$core$Bit $tmp1502 = { $tmp1496 };
                if ($tmp1502.value) {
                {
                    panda$core$Object* $tmp1503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1503)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1504.value) {
                    {
                        panda$core$Object* $tmp1505 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1506 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1505)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1507 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1506));
                        if ($tmp1507.value) {
                        {
                            cost1495 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1495 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1508.value);
                    panda$core$Object* $tmp1510 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1511 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1512 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1510), ((org$pandalanguage$pandac$Type*) $tmp1511));
                    cost11509 = $tmp1512;
                    if (((panda$core$Bit) { !cost11509.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1514 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1516 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1514), ((org$pandalanguage$pandac$Type*) $tmp1515));
                    cost21513 = $tmp1516;
                    if (((panda$core$Bit) { !cost21513.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1517 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11509.value), ((panda$core$Int64) cost21513.value));
                    cost1495 = $tmp1517;
                }
                }
                panda$core$Object* $tmp1519 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1520 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1521 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1519), ((org$pandalanguage$pandac$Type*) $tmp1520));
                cost31518 = $tmp1521;
                if (((panda$core$Bit) { !cost31518.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1522 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(cost1495, ((panda$core$Int64) cost31518.value));
                return ((panda$core$Int64$nullable) { $tmp1522, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1523 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1524 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1523, p_target);
            return $tmp1524;
        }
        break;
        case 1040:
        {
            panda$core$Int64$nullable $tmp1525 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
            return $tmp1525;
        }
        break;
    }
    panda$core$Bit $tmp1526 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1527 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1526);
    if ($tmp1527.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1529 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1528 = $tmp1529;
    if (((panda$core$Bit) { targetClass1528 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1531 = ((panda$collections$Iterable*) targetClass1528->methods)->$class->itable;
        while ($tmp1531->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1531 = $tmp1531->next;
        }
        $fn1533 $tmp1532 = $tmp1531->methods[0];
        panda$collections$Iterator* $tmp1534 = $tmp1532(((panda$collections$Iterable*) targetClass1528->methods));
        m$Iter1530 = $tmp1534;
        $l1535:;
        ITable* $tmp1537 = m$Iter1530->$class->itable;
        while ($tmp1537->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1537 = $tmp1537->next;
        }
        $fn1539 $tmp1538 = $tmp1537->methods[0];
        panda$core$Bit $tmp1540 = $tmp1538(m$Iter1530);
        panda$core$Bit $tmp1541 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1540);
        if (!$tmp1541.value) goto $l1536;
        {
            ITable* $tmp1543 = m$Iter1530->$class->itable;
            while ($tmp1543->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1543 = $tmp1543->next;
            }
            $fn1545 $tmp1544 = $tmp1543->methods[1];
            panda$core$Object* $tmp1546 = $tmp1544(m$Iter1530);
            m1542 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1546);
            panda$core$Bit $tmp1547 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1542->annotations);
            if ($tmp1547.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1542);
                panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1542->methodKind, ((panda$core$Int64) { 59 }));
                PANDA_ASSERT($tmp1548.value);
                panda$core$Int64 $tmp1549 = panda$collections$Array$get_count$R$panda$core$Int64(m1542->parameters);
                panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1549, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp1550.value);
                panda$core$Object* $tmp1552 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1542->parameters, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1553 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1552)->type);
                cost1551 = $tmp1553;
                if (((panda$core$Bit) { cost1551.nonnull }).value) {
                {
                    return cost1551;
                }
                }
            }
            }
        }
        goto $l1535;
        $l1536:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1554 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    return $tmp1554;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1563;
    org$pandalanguage$pandac$IRNode* intermediate1568;
    org$pandalanguage$pandac$IRNode* coerced1596;
    org$pandalanguage$pandac$IRNode* coerced1617;
    org$pandalanguage$pandac$IRNode* varType1631;
    org$pandalanguage$pandac$Type* param1646;
    org$pandalanguage$pandac$IRNode* start1648;
    org$pandalanguage$pandac$IRNode* end1651;
    panda$collections$Array* args1654;
    org$pandalanguage$pandac$IRNode* target1660;
    org$pandalanguage$pandac$Type* endPoint1676;
    org$pandalanguage$pandac$IRNode* start1678;
    org$pandalanguage$pandac$IRNode* end1681;
    org$pandalanguage$pandac$IRNode* step1684;
    panda$collections$Array* args1688;
    org$pandalanguage$pandac$IRNode* target1694;
    panda$collections$ListView* methods1701;
    panda$collections$Array* args1703;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1704;
    panda$collections$Array* best1706;
    panda$core$Int64$nullable bestCost1709;
    panda$collections$Iterator* m$Iter1710;
    org$pandalanguage$pandac$MethodRef* m1722;
    panda$core$Int64$nullable cost1727;
    org$pandalanguage$pandac$IRNode* callTarget1733;
    org$pandalanguage$pandac$IRNode* result1739;
    panda$collections$Array* args1743;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1744;
    panda$collections$Array* children1756;
    org$pandalanguage$pandac$IRNode* intermediate1762;
    org$pandalanguage$pandac$ClassDecl* cl1767;
    panda$collections$Iterator* m$Iter1769;
    org$pandalanguage$pandac$MethodDecl* m1781;
    org$pandalanguage$pandac$IRNode* type1792;
    panda$collections$Array* args1797;
    panda$collections$Array* children1801;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1555 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1555.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1556 = $tmp1557.value;
    if (!$tmp1556) goto $l1558;
    panda$core$Bit $tmp1559 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1556 = $tmp1559.value;
    $l1558:;
    panda$core$Bit $tmp1560 = { $tmp1556 };
    if ($tmp1560.value) {
    {
        panda$core$Object* $tmp1561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1562 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1561), p_target);
        if ($tmp1562.value) {
        {
            panda$collections$Array* $tmp1564 = (panda$collections$Array*) malloc(40);
            $tmp1564->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1564->refCount.value = 1;
            panda$collections$Array$init($tmp1564);
            children1563 = $tmp1564;
            panda$collections$Array$add$panda$collections$Array$T(children1563, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1566 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1566->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1566->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1566, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1563));
            return $tmp1566;
        }
        }
        panda$core$Object* $tmp1569 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1570 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1569));
        intermediate1568 = $tmp1570;
        org$pandalanguage$pandac$IRNode* $tmp1571 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1568, p_target);
        return $tmp1571;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1572 = $tmp1573.value;
            if (!$tmp1572) goto $l1574;
            panda$core$Int64 $tmp1575 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1576 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1577 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1575, $tmp1576);
            $tmp1572 = $tmp1577.value;
            $l1574:;
            panda$core$Bit $tmp1578 = { $tmp1572 };
            if ($tmp1578.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1579 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1579->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1579->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1579, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1579;
            }
            }
            else {
            panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1581 = $tmp1582.value;
            if (!$tmp1581) goto $l1583;
            panda$core$Int64 $tmp1584 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1585 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1586 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1584, $tmp1585);
            $tmp1581 = $tmp1586.value;
            $l1583:;
            panda$core$Bit $tmp1587 = { $tmp1581 };
            if ($tmp1587.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1588 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1588->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1588->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1588, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1588;
            }
            }
            }
            panda$core$Bit $tmp1591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1590 = $tmp1591.value;
            if (!$tmp1590) goto $l1592;
            panda$core$Bit $tmp1593 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1594 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1593);
            $tmp1590 = $tmp1594.value;
            $l1592:;
            panda$core$Bit $tmp1595 = { $tmp1590 };
            if ($tmp1595.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1597 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1598 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1597);
                coerced1596 = $tmp1598;
                if (((panda$core$Bit) { coerced1596 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1599 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1596, p_target);
                return $tmp1599;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1600 = $tmp1601.value;
            if (!$tmp1600) goto $l1602;
            panda$core$Int64 $tmp1603 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1604 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1603);
            panda$core$Int64 $tmp1605 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1604);
            panda$core$Int64 $tmp1606 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1607 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1605, $tmp1606);
            $tmp1600 = $tmp1607.value;
            $l1602:;
            panda$core$Bit $tmp1608 = { $tmp1600 };
            if ($tmp1608.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1609 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1609->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1609->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1609, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1609;
            }
            }
            panda$core$Bit $tmp1612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1611 = $tmp1612.value;
            if (!$tmp1611) goto $l1613;
            panda$core$Bit $tmp1614 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1615 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1614);
            $tmp1611 = $tmp1615.value;
            $l1613:;
            panda$core$Bit $tmp1616 = { $tmp1611 };
            if ($tmp1616.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1618 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1619 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1618);
                coerced1617 = $tmp1619;
                if (((panda$core$Bit) { coerced1617 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1620 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1617, p_target);
                return $tmp1620;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1621 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1622 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1621);
            if ($tmp1622.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1623 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1623->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1623->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1623, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1623;
            }
            }
            panda$core$Bit $tmp1626 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1625 = $tmp1626.value;
            if (!$tmp1625) goto $l1627;
            org$pandalanguage$pandac$Type* $tmp1628 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1629 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1628);
            $tmp1625 = $tmp1629.value;
            $l1627:;
            panda$core$Bit $tmp1630 = { $tmp1625 };
            if ($tmp1630.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1632 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1633 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1632);
                varType1631 = $tmp1633;
                if (((panda$core$Bit) { varType1631 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1634 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1631, p_target);
                    return $tmp1634;
                }
                }
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1635 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1635.value) {
            {
                panda$core$Int64 $tmp1636 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1637 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1636, ((panda$core$Int64) { 2 }));
                if ($tmp1637.value) {
                {
                    panda$core$String* $tmp1639 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1638, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1639, &$s1640);
                    panda$core$String* $tmp1642 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1641, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1642, &$s1643);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1644);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1645.value);
                panda$core$Object* $tmp1647 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1646 = ((org$pandalanguage$pandac$Type*) $tmp1647);
                panda$core$Object* $tmp1649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1650 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1649), param1646);
                start1648 = $tmp1650;
                if (((panda$core$Bit) { start1648 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1652 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1653 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1652), param1646);
                end1651 = $tmp1653;
                if (((panda$core$Bit) { end1651 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1655 = (panda$collections$Array*) malloc(40);
                $tmp1655->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1655->refCount.value = 1;
                panda$collections$Array$init($tmp1655);
                args1654 = $tmp1655;
                panda$collections$Array$add$panda$collections$Array$T(args1654, ((panda$core$Object*) start1648));
                panda$collections$Array$add$panda$collections$Array$T(args1654, ((panda$core$Object*) end1651));
                org$pandalanguage$pandac$IRNode* $tmp1657 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1657->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1657->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1659 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1657, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1659, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1654, ((panda$core$Object*) $tmp1657));
                org$pandalanguage$pandac$IRNode* $tmp1661 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1661->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1661->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1663 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1661, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1663, p_target);
                target1660 = $tmp1661;
                org$pandalanguage$pandac$IRNode* $tmp1664 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1660, ((panda$collections$ListView*) args1654));
                return $tmp1664;
            }
            }
            else {
            panda$core$Bit $tmp1665 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1665.value) {
            {
                panda$core$Int64 $tmp1666 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1667 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1666, ((panda$core$Int64) { 3 }));
                if ($tmp1667.value) {
                {
                    panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1668, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1669, &$s1670);
                    panda$core$String* $tmp1672 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1671, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1672, &$s1673);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1674);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1675.value);
                panda$core$Object* $tmp1677 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint1676 = ((org$pandalanguage$pandac$Type*) $tmp1677);
                panda$core$Object* $tmp1679 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1680 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1679), endPoint1676);
                start1678 = $tmp1680;
                if (((panda$core$Bit) { start1678 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1682 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1683 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1682), endPoint1676);
                end1681 = $tmp1683;
                panda$core$Object* $tmp1685 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1686 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp1687 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1685), ((org$pandalanguage$pandac$Type*) $tmp1686));
                step1684 = $tmp1687;
                panda$collections$Array* $tmp1689 = (panda$collections$Array*) malloc(40);
                $tmp1689->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1689->refCount.value = 1;
                panda$collections$Array$init($tmp1689);
                args1688 = $tmp1689;
                panda$collections$Array$add$panda$collections$Array$T(args1688, ((panda$core$Object*) start1678));
                panda$collections$Array$add$panda$collections$Array$T(args1688, ((panda$core$Object*) end1681));
                panda$collections$Array$add$panda$collections$Array$T(args1688, ((panda$core$Object*) step1684));
                org$pandalanguage$pandac$IRNode* $tmp1691 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1691->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1691->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1693 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1691, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1693, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1688, ((panda$core$Object*) $tmp1691));
                org$pandalanguage$pandac$IRNode* $tmp1695 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1695->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1695->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1697 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1695, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1697, p_target);
                target1694 = $tmp1695;
                org$pandalanguage$pandac$IRNode* $tmp1698 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1694, ((panda$collections$ListView*) args1688));
                return $tmp1698;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1699 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1700 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1699, p_target);
                return $tmp1700;
            }
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1702 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1701 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1702)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1704, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1705 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1704);
            args1703 = $tmp1705;
            panda$collections$Array* $tmp1707 = (panda$collections$Array*) malloc(40);
            $tmp1707->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1707->refCount.value = 1;
            panda$collections$Array$init($tmp1707);
            best1706 = $tmp1707;
            bestCost1709 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1711 = ((panda$collections$Iterable*) methods1701)->$class->itable;
                while ($tmp1711->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1711 = $tmp1711->next;
                }
                $fn1713 $tmp1712 = $tmp1711->methods[0];
                panda$collections$Iterator* $tmp1714 = $tmp1712(((panda$collections$Iterable*) methods1701));
                m$Iter1710 = $tmp1714;
                $l1715:;
                ITable* $tmp1717 = m$Iter1710->$class->itable;
                while ($tmp1717->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1717 = $tmp1717->next;
                }
                $fn1719 $tmp1718 = $tmp1717->methods[0];
                panda$core$Bit $tmp1720 = $tmp1718(m$Iter1710);
                panda$core$Bit $tmp1721 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1720);
                if (!$tmp1721.value) goto $l1716;
                {
                    ITable* $tmp1723 = m$Iter1710->$class->itable;
                    while ($tmp1723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1723 = $tmp1723->next;
                    }
                    $fn1725 $tmp1724 = $tmp1723->methods[1];
                    panda$core$Object* $tmp1726 = $tmp1724(m$Iter1710);
                    m1722 = ((org$pandalanguage$pandac$MethodRef*) $tmp1726);
                    panda$core$Int64$nullable $tmp1728 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1722, ((panda$collections$ListView*) args1703), p_target);
                    cost1727 = $tmp1728;
                    if (((panda$core$Bit) { !cost1727.nonnull }).value) {
                    {
                        goto $l1715;
                    }
                    }
                    if (((panda$core$Bit) { !bestCost1709.nonnull }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1706, ((panda$core$Object*) m1722));
                        bestCost1709 = cost1727;
                        goto $l1715;
                    }
                    }
                    panda$core$Bit $tmp1729 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1727.value), ((panda$core$Int64) bestCost1709.value));
                    if ($tmp1729.value) {
                    {
                        panda$collections$Array$clear(best1706);
                        bestCost1709 = cost1727;
                    }
                    }
                    panda$core$Bit $tmp1730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1727.value), ((panda$core$Int64) bestCost1709.value));
                    if ($tmp1730.value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(best1706, ((panda$core$Object*) m1722));
                    }
                    }
                }
                goto $l1715;
                $l1716:;
            }
            panda$core$Int64 $tmp1731 = panda$collections$Array$get_count$R$panda$core$Int64(best1706);
            panda$core$Bit $tmp1732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1731, ((panda$core$Int64) { 1 }));
            if ($tmp1732.value) {
            {
                panda$core$Object* $tmp1734 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Int64 $tmp1735 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1734)->children);
                panda$core$Bit $tmp1736 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1735, ((panda$core$Int64) { 0 }));
                if ($tmp1736.value) {
                {
                    panda$core$Object* $tmp1737 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1738 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1737)->children, ((panda$core$Int64) { 0 }));
                    callTarget1733 = ((org$pandalanguage$pandac$IRNode*) $tmp1738);
                }
                }
                else {
                {
                    callTarget1733 = NULL;
                }
                }
                panda$core$Object* $tmp1740 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best1706, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1741 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget1733, ((org$pandalanguage$pandac$MethodRef*) $tmp1740), ((panda$collections$ListView*) args1703));
                result1739 = $tmp1741;
                org$pandalanguage$pandac$IRNode* $tmp1742 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result1739, p_target);
                return $tmp1742;
            }
            }
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1744, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp1745 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_expr->children, $tmp1744);
            args1743 = $tmp1745;
            panda$core$Object* $tmp1746 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1748 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1746), &$s1747, ((panda$collections$ListView*) args1743), p_target);
            org$pandalanguage$pandac$IRNode* $tmp1749 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp1748, p_target);
            return $tmp1749;
        }
        break;
    }
    panda$core$Bit $tmp1750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1750.value) {
    {
        panda$core$Bit $tmp1751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp1751.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp1752 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1752->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1752->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1752, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp1752;
        }
        }
        panda$core$Object* $tmp1754 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1755 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp1754));
        if ($tmp1755.value) {
        {
            panda$collections$Array* $tmp1757 = (panda$collections$Array*) malloc(40);
            $tmp1757->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1757->refCount.value = 1;
            panda$collections$Array$init($tmp1757);
            children1756 = $tmp1757;
            panda$collections$Array$add$panda$collections$Array$T(children1756, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1759 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1759->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1759->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1759, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1756));
            return $tmp1759;
        }
        }
        panda$core$Bit $tmp1761 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1761.value) {
        {
            panda$core$Object* $tmp1763 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1764 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1763));
            intermediate1762 = $tmp1764;
            org$pandalanguage$pandac$IRNode* $tmp1765 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1762, p_target);
            return $tmp1765;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp1766 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp1766.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1768 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl1767 = $tmp1768;
        if (((panda$core$Bit) { cl1767 != NULL }).value) {
        {
            {
                ITable* $tmp1770 = ((panda$collections$Iterable*) cl1767->methods)->$class->itable;
                while ($tmp1770->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1770 = $tmp1770->next;
                }
                $fn1772 $tmp1771 = $tmp1770->methods[0];
                panda$collections$Iterator* $tmp1773 = $tmp1771(((panda$collections$Iterable*) cl1767->methods));
                m$Iter1769 = $tmp1773;
                $l1774:;
                ITable* $tmp1776 = m$Iter1769->$class->itable;
                while ($tmp1776->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1776 = $tmp1776->next;
                }
                $fn1778 $tmp1777 = $tmp1776->methods[0];
                panda$core$Bit $tmp1779 = $tmp1777(m$Iter1769);
                panda$core$Bit $tmp1780 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1779);
                if (!$tmp1780.value) goto $l1775;
                {
                    ITable* $tmp1782 = m$Iter1769->$class->itable;
                    while ($tmp1782->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1782 = $tmp1782->next;
                    }
                    $fn1784 $tmp1783 = $tmp1782->methods[1];
                    panda$core$Object* $tmp1785 = $tmp1783(m$Iter1769);
                    m1781 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1785);
                    panda$core$Bit $tmp1786 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1781->annotations);
                    if ($tmp1786.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1781);
                        panda$core$Bit $tmp1787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1781->methodKind, ((panda$core$Int64) { 59 }));
                        PANDA_ASSERT($tmp1787.value);
                        panda$core$Int64 $tmp1788 = panda$collections$Array$get_count$R$panda$core$Int64(m1781->parameters);
                        panda$core$Bit $tmp1789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1788, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp1789.value);
                        panda$core$Object* $tmp1790 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1781->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp1791 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1790)->type);
                        if (((panda$core$Bit) { $tmp1791.nonnull }).value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp1793 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp1793->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp1793->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp1795 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1796 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1767);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1793, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1795, $tmp1796);
                            type1792 = $tmp1793;
                            panda$collections$Array* $tmp1798 = (panda$collections$Array*) malloc(40);
                            $tmp1798->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp1798->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp1798, ((panda$core$Int64) { 1 }));
                            args1797 = $tmp1798;
                            panda$collections$Array$add$panda$collections$Array$T(args1797, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp1800 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type1792, ((panda$collections$ListView*) args1797));
                            return $tmp1800;
                        }
                        }
                    }
                    }
                }
                goto $l1774;
                $l1775:;
            }
        }
        }
        panda$collections$Array* $tmp1802 = (panda$collections$Array*) malloc(40);
        $tmp1802->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1802->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp1802, ((panda$core$Int64) { 1 }));
        children1801 = $tmp1802;
        panda$collections$Array$add$panda$collections$Array$T(children1801, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp1804 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1804->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1804->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1804, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1801));
        return $tmp1804;
    }
    }
    panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1806, ((panda$core$Object*) p_target));
    panda$core$String* $tmp1809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1807, &$s1808);
    panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1809, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp1812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1810, &$s1811);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1812);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result1813;
    org$pandalanguage$pandac$IRNode* $tmp1814 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result1813 = $tmp1814;
    bool $tmp1815 = ((panda$core$Bit) { result1813 == NULL }).value;
    if ($tmp1815) goto $l1816;
    panda$core$Bit $tmp1817 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result1813->type, p_target);
    $tmp1815 = $tmp1817.value;
    $l1816:;
    panda$core$Bit $tmp1818 = { $tmp1815 };
    PANDA_ASSERT($tmp1818.value);
    return result1813;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp1820 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp1819 = $tmp1820.value;
    if (!$tmp1819) goto $l1821;
    panda$core$Bit $tmp1822 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp1819 = $tmp1822.value;
    $l1821:;
    panda$core$Bit $tmp1823 = { $tmp1819 };
    if ($tmp1823.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp1824 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp1824.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1826 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp1825 = $tmp1826.value;
    if (!$tmp1825) goto $l1827;
    panda$core$Bit $tmp1828 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp1825 = $tmp1828.value;
    $l1827:;
    panda$core$Bit $tmp1829 = { $tmp1825 };
    if ($tmp1829.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp1830.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp1831 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp1831.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result1833;
    org$pandalanguage$pandac$IRNode* resolved1840;
    panda$core$Int64$nullable $tmp1832 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp1832.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp1834 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result1833 = $tmp1834;
    panda$core$Bit $tmp1836 = panda$core$Bit$$NOT$R$panda$core$Bit(result1833);
    bool $tmp1835 = $tmp1836.value;
    if (!$tmp1835) goto $l1837;
    panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp1835 = $tmp1838.value;
    $l1837:;
    panda$core$Bit $tmp1839 = { $tmp1835 };
    if ($tmp1839.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1841 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved1840 = $tmp1841;
        if (((panda$core$Bit) { resolved1840 != NULL }).value) {
        {
            panda$core$Bit $tmp1842 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved1840, p_target);
            result1833 = $tmp1842;
        }
        }
    }
    }
    return result1833;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved1863;
    panda$collections$Array* children1866;
    panda$core$Bit $tmp1843 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp1843.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1844 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1845 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1844);
    PANDA_ASSERT($tmp1845.value);
    bool $tmp1846 = p_isExplicit.value;
    if (!$tmp1846) goto $l1847;
    panda$core$Bit $tmp1848 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp1849 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1848);
    $tmp1846 = $tmp1849.value;
    $l1847:;
    panda$core$Bit $tmp1850 = { $tmp1846 };
    if ($tmp1850.value) {
    {
        panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1851, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1852, &$s1853);
        panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1855, ((panda$core$Object*) p_target));
        panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, &$s1857);
        panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, $tmp1858);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1859);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp1860 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp1860;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp1861 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp1861.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1862 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp1862;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp1864 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved1863 = $tmp1864;
            if (((panda$core$Bit) { resolved1863 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1865 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved1863, p_position, p_isExplicit, p_target);
                return $tmp1865;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp1867 = (panda$collections$Array*) malloc(40);
    $tmp1867->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1867->refCount.value = 1;
    panda$collections$Array$init($tmp1867);
    children1866 = $tmp1867;
    panda$collections$Array$add$panda$collections$Array$T(children1866, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp1869 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1869->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1869->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1869, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children1866));
    return $tmp1869;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result1877;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1878;
    panda$core$Int64$nullable cost1893;
    panda$core$Int64$nullable cost1907;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1871 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1872 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1872->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1872 = $tmp1872->next;
    }
    $fn1874 $tmp1873 = $tmp1872->methods[0];
    panda$core$Int64 $tmp1875 = $tmp1873(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1876 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1871, $tmp1875);
    if ($tmp1876.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result1877 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1879 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1878, ((panda$core$Int64) { 0 }), $tmp1879, ((panda$core$Bit) { false }));
    int64_t $tmp1881 = $tmp1878.min.value;
    panda$core$Int64 i1880 = { $tmp1881 };
    int64_t $tmp1883 = $tmp1878.max.value;
    bool $tmp1884 = $tmp1878.inclusive.value;
    if ($tmp1884) goto $l1891; else goto $l1892;
    $l1891:;
    if ($tmp1881 <= $tmp1883) goto $l1885; else goto $l1887;
    $l1892:;
    if ($tmp1881 < $tmp1883) goto $l1885; else goto $l1887;
    $l1885:;
    {
        ITable* $tmp1894 = p_args->$class->itable;
        while ($tmp1894->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1894 = $tmp1894->next;
        }
        $fn1896 $tmp1895 = $tmp1894->methods[0];
        panda$core$Object* $tmp1897 = $tmp1895(p_args, i1880);
        org$pandalanguage$pandac$Type* $tmp1898 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i1880);
        panda$core$Int64$nullable $tmp1899 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1897), $tmp1898);
        cost1893 = $tmp1899;
        if (((panda$core$Bit) { !cost1893.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1900 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1877, ((panda$core$Int64) cost1893.value));
        result1877 = $tmp1900;
    }
    $l1888:;
    int64_t $tmp1902 = $tmp1883 - i1880.value;
    if ($tmp1884) goto $l1903; else goto $l1904;
    $l1903:;
    if ($tmp1902 >= 1) goto $l1901; else goto $l1887;
    $l1904:;
    if ($tmp1902 > 1) goto $l1901; else goto $l1887;
    $l1901:;
    i1880.value += 1;
    goto $l1885;
    $l1887:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1908 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp1909 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1908, p_expectedReturn);
        cost1907 = $tmp1909;
        if (((panda$core$Bit) { !cost1907.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1910 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1877, ((panda$core$Int64) cost1907.value));
        result1877 = $tmp1910;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1913 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1914 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp1913);
    bool $tmp1912 = $tmp1914.value;
    if (!$tmp1912) goto $l1915;
    ITable* $tmp1916 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1916->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1916 = $tmp1916->next;
    }
    $fn1918 $tmp1917 = $tmp1916->methods[0];
    panda$core$Int64 $tmp1919 = $tmp1917(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1919, ((panda$core$Int64) { 1 }));
    $tmp1912 = $tmp1920.value;
    $l1915:;
    panda$core$Bit $tmp1921 = { $tmp1912 };
    bool $tmp1911 = $tmp1921.value;
    if (!$tmp1911) goto $l1922;
    panda$core$Object* $tmp1923 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp1924 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp1925 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1923)->type, $tmp1924);
    $tmp1911 = $tmp1925.value;
    $l1922:;
    panda$core$Bit $tmp1926 = { $tmp1911 };
    if ($tmp1926.value) {
    {
        panda$core$Int64 $tmp1927 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1877, ((panda$core$Int64) { 1 }));
        result1877 = $tmp1927;
    }
    }
    return ((panda$core$Int64$nullable) { result1877, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result1928;
    panda$core$Int64$nullable best1931;
    panda$collections$Iterator* m$Iter1932;
    org$pandalanguage$pandac$MethodRef* m1944;
    panda$core$Int64$nullable cost1949;
    panda$collections$Array* $tmp1929 = (panda$collections$Array*) malloc(40);
    $tmp1929->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1929->refCount.value = 1;
    panda$collections$Array$init($tmp1929);
    result1928 = $tmp1929;
    best1931 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp1933 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp1933->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1933 = $tmp1933->next;
        }
        $fn1935 $tmp1934 = $tmp1933->methods[0];
        panda$collections$Iterator* $tmp1936 = $tmp1934(((panda$collections$Iterable*) p_methods));
        m$Iter1932 = $tmp1936;
        $l1937:;
        ITable* $tmp1939 = m$Iter1932->$class->itable;
        while ($tmp1939->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1939 = $tmp1939->next;
        }
        $fn1941 $tmp1940 = $tmp1939->methods[0];
        panda$core$Bit $tmp1942 = $tmp1940(m$Iter1932);
        panda$core$Bit $tmp1943 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1942);
        if (!$tmp1943.value) goto $l1938;
        {
            ITable* $tmp1945 = m$Iter1932->$class->itable;
            while ($tmp1945->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1945 = $tmp1945->next;
            }
            $fn1947 $tmp1946 = $tmp1945->methods[1];
            panda$core$Object* $tmp1948 = $tmp1946(m$Iter1932);
            m1944 = ((org$pandalanguage$pandac$MethodRef*) $tmp1948);
            panda$core$Int64$nullable $tmp1950 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1944, p_args, p_expectedReturn);
            cost1949 = $tmp1950;
            if (((panda$core$Bit) { !cost1949.nonnull }).value) {
            {
                goto $l1937;
            }
            }
            bool $tmp1951 = ((panda$core$Bit) { !best1931.nonnull }).value;
            if ($tmp1951) goto $l1952;
            panda$core$Bit $tmp1953 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1949.value), ((panda$core$Int64) best1931.value));
            $tmp1951 = $tmp1953.value;
            $l1952:;
            panda$core$Bit $tmp1954 = { $tmp1951 };
            if ($tmp1954.value) {
            {
                panda$collections$Array$clear(result1928);
                best1931 = cost1949;
            }
            }
            panda$core$Bit $tmp1955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1949.value), ((panda$core$Int64) best1931.value));
            if ($tmp1955.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result1928, ((panda$core$Object*) m1944));
            }
            }
        }
        goto $l1937;
        $l1938:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result1928));
    return best1931;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$core$String* s1962;
    panda$collections$Array* finalArgs1988;
    org$pandalanguage$pandac$IRNode* selfNode2024;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2053;
    org$pandalanguage$pandac$IRNode* coerced2071;
    org$pandalanguage$pandac$IRNode* result2086;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp1956 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp1957 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp1957->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1957 = $tmp1957->next;
    }
    $fn1959 $tmp1958 = $tmp1957->methods[0];
    panda$core$Int64 $tmp1960 = $tmp1958(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp1961 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1956, $tmp1960);
    if ($tmp1961.value) {
    {
        panda$core$Int64 $tmp1963 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1963, ((panda$core$Int64) { 1 }));
        if ($tmp1964.value) {
        {
            s1962 = &$s1965;
        }
        }
        else {
        {
            s1962 = &$s1966;
        }
        }
        panda$core$String* $tmp1968 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1967, $tmp1968);
        panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1969, &$s1970);
        panda$core$Int64 $tmp1972 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1971, ((panda$core$Object*) wrap_panda$core$Int64($tmp1972)));
        panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1973, &$s1974);
        panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1975, s1962);
        panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1976, &$s1977);
        ITable* $tmp1980 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp1980->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1980 = $tmp1980->next;
        }
        $fn1982 $tmp1981 = $tmp1980->methods[0];
        panda$core$Int64 $tmp1983 = $tmp1981(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp1984 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1979, ((panda$core$Object*) wrap_panda$core$Int64($tmp1983)));
        panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1984, &$s1985);
        panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1978, $tmp1986);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp1987);
        return NULL;
    }
    }
    panda$collections$Array* $tmp1989 = (panda$collections$Array*) malloc(40);
    $tmp1989->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1989->refCount.value = 1;
    panda$collections$Array$init($tmp1989);
    finalArgs1988 = $tmp1989;
    bool $tmp1992 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp1992) goto $l1993;
    panda$core$Bit $tmp1994 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp1992 = $tmp1994.value;
    $l1993:;
    panda$core$Bit $tmp1995 = { $tmp1992 };
    bool $tmp1991 = $tmp1995.value;
    if (!$tmp1991) goto $l1996;
    panda$core$Bit $tmp1997 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp1998 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1997);
    $tmp1991 = $tmp1998.value;
    $l1996:;
    panda$core$Bit $tmp1999 = { $tmp1991 };
    if ($tmp1999.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2000 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2001 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2000);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1988, ((panda$core$Object*) $tmp2001));
    }
    }
    panda$core$Bit $tmp2002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp2002.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2003 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2003)->methodKind, ((panda$core$Int64) { 59 }));
            if ($tmp2004.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2005 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2005->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2005->refCount.value = 1;
                panda$core$Object* $tmp2007 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2008 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2007));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2005, ((panda$core$Int64) { 1025 }), p_position, $tmp2008);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs1988, ((panda$core$Object*) $tmp2005));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2009);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2012 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2011 = $tmp2012.value;
        if (!$tmp2011) goto $l2013;
        panda$core$Bit $tmp2014 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2011 = $tmp2014.value;
        $l2013:;
        panda$core$Bit $tmp2015 = { $tmp2011 };
        bool $tmp2010 = $tmp2015.value;
        if (!$tmp2010) goto $l2016;
        panda$core$Bit $tmp2017 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2010 = $tmp2017.value;
        $l2016:;
        panda$core$Bit $tmp2018 = { $tmp2010 };
        if ($tmp2018.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2019);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2021 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2020 = $tmp2021.value;
    if (!$tmp2020) goto $l2022;
    $tmp2020 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2022:;
    panda$core$Bit $tmp2023 = { $tmp2020 };
    if ($tmp2023.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2025 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2025->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2025->refCount.value = 1;
        panda$core$Object* $tmp2027 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2028 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2027));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2025, ((panda$core$Int64) { 1025 }), p_position, $tmp2028);
        selfNode2024 = $tmp2025;
        org$pandalanguage$pandac$Type* $tmp2029 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2030 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2024, $tmp2029);
        selfNode2024 = $tmp2030;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2024 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1988, ((panda$core$Object*) selfNode2024));
        panda$core$Object* $tmp2031 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2032 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2031));
        panda$core$Bit $tmp2033 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2032);
        if ($tmp2033.value) {
        {
            panda$core$String* $tmp2035 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2034, $tmp2035);
            panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2036, &$s2037);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2038);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2041 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2042 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2041);
    bool $tmp2040 = $tmp2042.value;
    if (!$tmp2040) goto $l2043;
    $tmp2040 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2043:;
    panda$core$Bit $tmp2044 = { $tmp2040 };
    bool $tmp2039 = $tmp2044.value;
    if (!$tmp2039) goto $l2045;
    panda$core$Bit $tmp2046 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2039 = $tmp2046.value;
    $l2045:;
    panda$core$Bit $tmp2047 = { $tmp2039 };
    if ($tmp2047.value) {
    {
        panda$core$String* $tmp2049 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2048, $tmp2049);
        panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, &$s2051);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2052);
    }
    }
    }
    }
    ITable* $tmp2054 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2054->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2054 = $tmp2054->next;
    }
    $fn2056 $tmp2055 = $tmp2054->methods[0];
    panda$core$Int64 $tmp2057 = $tmp2055(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2053, ((panda$core$Int64) { 0 }), $tmp2057, ((panda$core$Bit) { false }));
    int64_t $tmp2059 = $tmp2053.min.value;
    panda$core$Int64 i2058 = { $tmp2059 };
    int64_t $tmp2061 = $tmp2053.max.value;
    bool $tmp2062 = $tmp2053.inclusive.value;
    if ($tmp2062) goto $l2069; else goto $l2070;
    $l2069:;
    if ($tmp2059 <= $tmp2061) goto $l2063; else goto $l2065;
    $l2070:;
    if ($tmp2059 < $tmp2061) goto $l2063; else goto $l2065;
    $l2063:;
    {
        ITable* $tmp2072 = p_args->$class->itable;
        while ($tmp2072->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2072 = $tmp2072->next;
        }
        $fn2074 $tmp2073 = $tmp2072->methods[0];
        panda$core$Object* $tmp2075 = $tmp2073(p_args, i2058);
        org$pandalanguage$pandac$Type* $tmp2076 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2058);
        org$pandalanguage$pandac$IRNode* $tmp2077 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2075), $tmp2076);
        coerced2071 = $tmp2077;
        if (((panda$core$Bit) { coerced2071 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2078 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2058);
        org$pandalanguage$pandac$IRNode* $tmp2079 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2071, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2078)->type);
        coerced2071 = $tmp2079;
        if (((panda$core$Bit) { coerced2071 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs1988, ((panda$core$Object*) coerced2071));
    }
    $l2066:;
    int64_t $tmp2081 = $tmp2061 - i2058.value;
    if ($tmp2062) goto $l2082; else goto $l2083;
    $l2082:;
    if ($tmp2081 >= 1) goto $l2080; else goto $l2065;
    $l2083:;
    if ($tmp2081 > 1) goto $l2080; else goto $l2065;
    $l2080:;
    i2058.value += 1;
    goto $l2063;
    $l2065:;
    panda$core$Bit $tmp2088 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2087);
    if ($tmp2088.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2089 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2089->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2089->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2091 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2089, ((panda$core$Int64) { 1005 }), p_position, $tmp2091, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1988));
        result2086 = $tmp2089;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2092 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2092->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2092->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2092, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs1988));
        result2086 = $tmp2092;
        org$pandalanguage$pandac$Type* $tmp2094 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2095 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2086, p_position, ((panda$core$Bit) { false }), $tmp2094);
        result2086 = $tmp2095;
    }
    }
    return result2086;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2096 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2096;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2097;
    org$pandalanguage$pandac$ClassDecl* cl2099;
    org$pandalanguage$pandac$Symbol* s2103;
    org$pandalanguage$pandac$IRNode* ref2125;
    org$pandalanguage$pandac$IRNode* $tmp2098 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2097 = $tmp2098;
    if (((panda$core$Bit) { resolved2097 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2097->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2100.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2101 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2097->payload));
        cl2099 = $tmp2101;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2102 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2097->type);
        cl2099 = $tmp2102;
    }
    }
    if (((panda$core$Bit) { cl2099 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2104 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2099);
    org$pandalanguage$pandac$Symbol* $tmp2105 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2104, p_name);
    s2103 = $tmp2105;
    if (((panda$core$Bit) { s2103 == NULL }).value) {
    {
        panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2106, ((org$pandalanguage$pandac$Symbol*) cl2099)->name);
        panda$core$String* $tmp2109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2107, &$s2108);
        panda$core$String* $tmp2110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2109, p_name);
        panda$core$String* $tmp2112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2110, &$s2111);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2112);
        return NULL;
    }
    }
    panda$core$Bit $tmp2114 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2103->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2113 = $tmp2114.value;
    if (!$tmp2113) goto $l2115;
    panda$core$Bit $tmp2116 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2103->kind, ((panda$core$Int64) { 205 }));
    $tmp2113 = $tmp2116.value;
    $l2115:;
    panda$core$Bit $tmp2117 = { $tmp2113 };
    if ($tmp2117.value) {
    {
        panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2118, ((org$pandalanguage$pandac$Symbol*) cl2099)->name);
        panda$core$String* $tmp2121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2119, &$s2120);
        panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, p_name);
        panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2124);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2126 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2099);
    org$pandalanguage$pandac$IRNode* $tmp2127 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2103, $tmp2126);
    ref2125 = $tmp2127;
    if (((panda$core$Bit) { ref2125 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2128 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2125, p_args, p_expectedType);
    return $tmp2128;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2129 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2129;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2130;
    panda$collections$Array* methods2137;
    org$pandalanguage$pandac$MethodDecl* first2142;
    panda$core$MutableString* msg2147;
    panda$core$String* separator2159;
    panda$collections$Iterator* a$Iter2161;
    org$pandalanguage$pandac$IRNode* a2173;
    org$pandalanguage$pandac$IRNode* target2187;
    panda$collections$Array* children2195;
    panda$collections$Array* types2201;
    panda$collections$Iterator* m$Iter2204;
    org$pandalanguage$pandac$MethodRef* m2216;
    org$pandalanguage$pandac$IRNode* target2226;
    org$pandalanguage$pandac$IRNode* initCall2229;
    panda$collections$Array* children2233;
    org$pandalanguage$pandac$IRNode* resolved2238;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2131 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2131, ((panda$core$Int64) { 0 }));
            if ($tmp2132.value) {
            {
                target2130 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2133 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2133, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2134.value);
                panda$core$Object* $tmp2135 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2130 = ((org$pandalanguage$pandac$IRNode*) $tmp2135);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2136 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2130, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2136;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2138 = (panda$collections$Array*) malloc(40);
            $tmp2138->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2138->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2138, ((panda$collections$ListView*) p_m->payload));
            methods2137 = $tmp2138;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2137, p_args, p_expectedType);
            panda$core$Int64 $tmp2140 = panda$collections$Array$get_count$R$panda$core$Int64(methods2137);
            panda$core$Bit $tmp2141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2140, ((panda$core$Int64) { 0 }));
            if ($tmp2141.value) {
            {
                ITable* $tmp2143 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2143->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2143 = $tmp2143->next;
                }
                $fn2145 $tmp2144 = $tmp2143->methods[0];
                panda$core$Object* $tmp2146 = $tmp2144(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2142 = ((org$pandalanguage$pandac$MethodRef*) $tmp2146)->value;
                panda$core$MutableString* $tmp2148 = (panda$core$MutableString*) malloc(40);
                $tmp2148->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2148->refCount.value = 1;
                panda$core$String* $tmp2151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2150, ((org$pandalanguage$pandac$Symbol*) first2142->owner)->name);
                panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2151, &$s2152);
                panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2154, ((org$pandalanguage$pandac$Symbol*) first2142)->name);
                panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, &$s2156);
                panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, $tmp2157);
                panda$core$MutableString$init$panda$core$String($tmp2148, $tmp2158);
                msg2147 = $tmp2148;
                separator2159 = &$s2160;
                {
                    ITable* $tmp2162 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2162->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2162 = $tmp2162->next;
                    }
                    $fn2164 $tmp2163 = $tmp2162->methods[0];
                    panda$collections$Iterator* $tmp2165 = $tmp2163(((panda$collections$Iterable*) p_args));
                    a$Iter2161 = $tmp2165;
                    $l2166:;
                    ITable* $tmp2168 = a$Iter2161->$class->itable;
                    while ($tmp2168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2168 = $tmp2168->next;
                    }
                    $fn2170 $tmp2169 = $tmp2168->methods[0];
                    panda$core$Bit $tmp2171 = $tmp2169(a$Iter2161);
                    panda$core$Bit $tmp2172 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2171);
                    if (!$tmp2172.value) goto $l2167;
                    {
                        ITable* $tmp2174 = a$Iter2161->$class->itable;
                        while ($tmp2174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2174 = $tmp2174->next;
                        }
                        $fn2176 $tmp2175 = $tmp2174->methods[1];
                        panda$core$Object* $tmp2177 = $tmp2175(a$Iter2161);
                        a2173 = ((org$pandalanguage$pandac$IRNode*) $tmp2177);
                        panda$core$MutableString$append$panda$core$String(msg2147, separator2159);
                        panda$core$MutableString$append$panda$core$Object(msg2147, ((panda$core$Object*) a2173->type));
                        separator2159 = &$s2178;
                    }
                    goto $l2166;
                    $l2167:;
                }
                panda$core$MutableString$append$panda$core$String(msg2147, &$s2179);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2180, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2181, &$s2182);
                    panda$core$MutableString$append$panda$core$String(msg2147, $tmp2183);
                }
                }
                panda$core$String* $tmp2184 = panda$core$MutableString$finish$R$panda$core$String(msg2147);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2184);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2185 = panda$collections$Array$get_count$R$panda$core$Int64(methods2137);
            panda$core$Bit $tmp2186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2185, ((panda$core$Int64) { 1 }));
            if ($tmp2186.value) {
            {
                panda$core$Int64 $tmp2188 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2188, ((panda$core$Int64) { 1 }));
                if ($tmp2189.value) {
                {
                    panda$core$Object* $tmp2190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2187 = ((org$pandalanguage$pandac$IRNode*) $tmp2190);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2191 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2191, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2192.value);
                    target2187 = NULL;
                }
                }
                panda$core$Object* $tmp2193 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2137, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2194 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2187, ((org$pandalanguage$pandac$MethodRef*) $tmp2193), p_args);
                return $tmp2194;
            }
            }
            panda$collections$Array* $tmp2196 = (panda$collections$Array*) malloc(40);
            $tmp2196->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2196->refCount.value = 1;
            panda$collections$Array$init($tmp2196);
            children2195 = $tmp2196;
            org$pandalanguage$pandac$IRNode* $tmp2198 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2198->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2198->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2200 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2198, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2200, ((panda$core$Object*) methods2137), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2195, ((panda$core$Object*) $tmp2198));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2195, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2202 = (panda$collections$Array*) malloc(40);
            $tmp2202->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2202->refCount.value = 1;
            panda$collections$Array$init($tmp2202);
            types2201 = $tmp2202;
            {
                ITable* $tmp2205 = ((panda$collections$Iterable*) methods2137)->$class->itable;
                while ($tmp2205->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2205 = $tmp2205->next;
                }
                $fn2207 $tmp2206 = $tmp2205->methods[0];
                panda$collections$Iterator* $tmp2208 = $tmp2206(((panda$collections$Iterable*) methods2137));
                m$Iter2204 = $tmp2208;
                $l2209:;
                ITable* $tmp2211 = m$Iter2204->$class->itable;
                while ($tmp2211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2211 = $tmp2211->next;
                }
                $fn2213 $tmp2212 = $tmp2211->methods[0];
                panda$core$Bit $tmp2214 = $tmp2212(m$Iter2204);
                panda$core$Bit $tmp2215 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2214);
                if (!$tmp2215.value) goto $l2210;
                {
                    ITable* $tmp2217 = m$Iter2204->$class->itable;
                    while ($tmp2217->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2217 = $tmp2217->next;
                    }
                    $fn2219 $tmp2218 = $tmp2217->methods[1];
                    panda$core$Object* $tmp2220 = $tmp2218(m$Iter2204);
                    m2216 = ((org$pandalanguage$pandac$MethodRef*) $tmp2220);
                    org$pandalanguage$pandac$Type* $tmp2221 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2216);
                    panda$collections$Array$add$panda$collections$Array$T(types2201, ((panda$core$Object*) $tmp2221));
                }
                goto $l2209;
                $l2210:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2222 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2222->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2222->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2224 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2224->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2224->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2224, ((panda$collections$ListView*) types2201));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2222, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2224, ((panda$collections$ListView*) children2195));
            return $tmp2222;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2227 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2227->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2227->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2227, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2226 = $tmp2227;
            org$pandalanguage$pandac$IRNode* $tmp2231 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2226, &$s2230, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2232 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2231);
            initCall2229 = $tmp2232;
            if (((panda$core$Bit) { initCall2229 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2234 = (panda$collections$Array*) malloc(40);
            $tmp2234->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2234->refCount.value = 1;
            panda$collections$Array$init($tmp2234);
            children2233 = $tmp2234;
            panda$collections$Array$add$panda$collections$Array$T(children2233, ((panda$core$Object*) initCall2229));
            org$pandalanguage$pandac$IRNode* $tmp2236 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2236->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2236->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2236, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2233));
            return $tmp2236;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2239 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2238 = $tmp2239;
            if (((panda$core$Bit) { resolved2238 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2240, ((panda$core$Object*) resolved2238->type));
            panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2241, &$s2242);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2238->position, $tmp2243);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2244;
    panda$core$MutableString* typeName2247;
    panda$core$String* separator2251;
    panda$collections$Iterator* p$Iter2253;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2265;
    panda$core$Int64 kind2271;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2245 = (panda$collections$Array*) malloc(40);
    $tmp2245->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2245->refCount.value = 1;
    panda$collections$Array$init($tmp2245);
    subtypes2244 = $tmp2245;
    panda$core$MutableString* $tmp2248 = (panda$core$MutableString*) malloc(40);
    $tmp2248->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2248->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2248, &$s2250);
    typeName2247 = $tmp2248;
    separator2251 = &$s2252;
    {
        ITable* $tmp2254 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2254->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2254 = $tmp2254->next;
        }
        $fn2256 $tmp2255 = $tmp2254->methods[0];
        panda$collections$Iterator* $tmp2257 = $tmp2255(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2253 = $tmp2257;
        $l2258:;
        ITable* $tmp2260 = p$Iter2253->$class->itable;
        while ($tmp2260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2260 = $tmp2260->next;
        }
        $fn2262 $tmp2261 = $tmp2260->methods[0];
        panda$core$Bit $tmp2263 = $tmp2261(p$Iter2253);
        panda$core$Bit $tmp2264 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2263);
        if (!$tmp2264.value) goto $l2259;
        {
            ITable* $tmp2266 = p$Iter2253->$class->itable;
            while ($tmp2266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2266 = $tmp2266->next;
            }
            $fn2268 $tmp2267 = $tmp2266->methods[1];
            panda$core$Object* $tmp2269 = $tmp2267(p$Iter2253);
            p2265 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2269);
            panda$core$MutableString$append$panda$core$String(typeName2247, separator2251);
            panda$core$MutableString$append$panda$core$String(typeName2247, ((org$pandalanguage$pandac$Symbol*) p2265->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2244, ((panda$core$Object*) p2265->type));
            separator2251 = &$s2270;
        }
        goto $l2258;
        $l2259:;
    }
    panda$core$Bit $tmp2272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2272.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2247, &$s2273);
        kind2271 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2247, &$s2274);
        kind2271 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2244, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2275 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2276 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2275);
    if ($tmp2276.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2247, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2247, &$s2277);
    org$pandalanguage$pandac$Type* $tmp2278 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2278->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2278->refCount.value = 1;
    panda$core$String* $tmp2280 = panda$core$MutableString$finish$R$panda$core$String(typeName2247);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2278, $tmp2280, kind2271, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2244), ((panda$core$Bit) { true }));
    return $tmp2278;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2281;
    panda$core$MutableString* typeName2284;
    panda$collections$Iterator* p$Iter2288;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2300;
    panda$core$Int64 kind2306;
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
    panda$core$MutableString$append$panda$core$String(typeName2284, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2281, ((panda$core$Object*) p_selfType));
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
            panda$core$MutableString$append$panda$core$String(typeName2284, &$s2305);
            panda$core$MutableString$append$panda$core$String(typeName2284, ((org$pandalanguage$pandac$Symbol*) p2300->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2281, ((panda$core$Object*) p2300->type));
        }
        goto $l2293;
        $l2294:;
    }
    panda$core$Bit $tmp2307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 58 }));
    if ($tmp2307.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2284, &$s2308);
        kind2306 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2284, &$s2309);
        kind2306 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2281, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2310 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2311 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2310);
    if ($tmp2311.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2284, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$MutableString$append$panda$core$String(typeName2284, &$s2312);
    org$pandalanguage$pandac$Type* $tmp2313 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2313->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2313->refCount.value = 1;
    panda$core$String* $tmp2315 = panda$core$MutableString$finish$R$panda$core$String(typeName2284);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2313, $tmp2315, kind2306, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2281), ((panda$core$Bit) { true }));
    return $tmp2313;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2316;
    org$pandalanguage$pandac$MethodDecl* $tmp2317 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2316 = $tmp2317;
    if (((panda$core$Bit) { inherited2316 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2318 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2318;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2319 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2316);
    return $tmp2319;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2320 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2321 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2320);
    return $tmp2321;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2322;
    org$pandalanguage$pandac$MethodDecl* $tmp2323 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2322 = $tmp2323;
    if (((panda$core$Bit) { inherited2322 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2324 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2324;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2325 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2322, p_selfType);
    return $tmp2325;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2326;
        }
        break;
        case 52:
        {
            return &$s2327;
        }
        break;
        case 53:
        {
            return &$s2328;
        }
        break;
        case 54:
        {
            return &$s2329;
        }
        break;
        case 55:
        {
            return &$s2330;
        }
        break;
        case 56:
        {
            return &$s2331;
        }
        break;
        case 57:
        {
            return &$s2332;
        }
        break;
        case 58:
        {
            return &$s2333;
        }
        break;
        case 59:
        {
            return &$s2334;
        }
        break;
        case 63:
        {
            return &$s2335;
        }
        break;
        case 62:
        {
            return &$s2336;
        }
        break;
        case 65:
        {
            return &$s2337;
        }
        break;
        case 64:
        {
            return &$s2338;
        }
        break;
        case 68:
        {
            return &$s2339;
        }
        break;
        case 69:
        {
            return &$s2340;
        }
        break;
        case 66:
        {
            return &$s2341;
        }
        break;
        case 67:
        {
            return &$s2342;
        }
        break;
        case 70:
        {
            return &$s2343;
        }
        break;
        case 71:
        {
            return &$s2344;
        }
        break;
        case 49:
        {
            return &$s2345;
        }
        break;
        case 50:
        {
            return &$s2346;
        }
        break;
        case 72:
        {
            return &$s2347;
        }
        break;
        case 1:
        {
            return &$s2348;
        }
        break;
        case 101:
        {
            return &$s2349;
        }
        break;
        case 73:
        {
            return &$s2350;
        }
        break;
        case 60:
        {
            return &$s2351;
        }
        break;
        case 61:
        {
            return &$s2352;
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
            panda$core$Int64 $tmp2353 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2353, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2354.value);
            panda$core$Bit $tmp2355 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2355.value) {
            {
                panda$core$Object* $tmp2356 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2357 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2356));
                return $tmp2357;
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
            panda$core$Object* $tmp2358 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2359 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2358));
            return $tmp2359;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2385;
    panda$core$Int64 r2387;
    panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2360 = $tmp2361.value;
    if ($tmp2360) goto $l2362;
    panda$core$Bit $tmp2363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2360 = $tmp2363.value;
    $l2362:;
    panda$core$Bit $tmp2364 = { $tmp2360 };
    PANDA_ASSERT($tmp2364.value);
    panda$core$Bit $tmp2366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2365 = $tmp2366.value;
    if ($tmp2365) goto $l2367;
    panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2365 = $tmp2368.value;
    $l2367:;
    panda$core$Bit $tmp2369 = { $tmp2365 };
    PANDA_ASSERT($tmp2369.value);
    panda$core$Bit $tmp2372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2371 = $tmp2372.value;
    if ($tmp2371) goto $l2373;
    panda$core$UInt64 $tmp2375 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2376 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2375);
    bool $tmp2374 = $tmp2376.value;
    if (!$tmp2374) goto $l2377;
    panda$core$Bit $tmp2378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2374 = $tmp2378.value;
    $l2377:;
    panda$core$Bit $tmp2379 = { $tmp2374 };
    $tmp2371 = $tmp2379.value;
    $l2373:;
    panda$core$Bit $tmp2380 = { $tmp2371 };
    bool $tmp2370 = $tmp2380.value;
    if ($tmp2370) goto $l2381;
    panda$core$UInt64 $tmp2382 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2383 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2382);
    $tmp2370 = $tmp2383.value;
    $l2381:;
    panda$core$Bit $tmp2384 = { $tmp2370 };
    if ($tmp2384.value) {
    {
        panda$core$Int64 $tmp2386 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2385 = $tmp2386;
        panda$core$Int64 $tmp2388 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2387 = $tmp2388;
        switch (p_op.value) {
            case 51:
            {
                org$pandalanguage$pandac$IRNode* $tmp2389 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2389->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2389->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2391 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2392 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2385, r2387);
                panda$core$UInt64 $tmp2393 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2392);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2389, ((panda$core$Int64) { 1004 }), p_position, $tmp2391, $tmp2393);
                return $tmp2389;
            }
            break;
            case 52:
            {
                org$pandalanguage$pandac$IRNode* $tmp2394 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2394->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2394->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2396 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2397 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2385, r2387);
                panda$core$UInt64 $tmp2398 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2397);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2394, ((panda$core$Int64) { 1004 }), p_position, $tmp2396, $tmp2398);
                return $tmp2394;
            }
            break;
            case 53:
            {
                org$pandalanguage$pandac$IRNode* $tmp2399 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2399->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2399->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2401 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2402 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2385, r2387);
                panda$core$UInt64 $tmp2403 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2402);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2399, ((panda$core$Int64) { 1004 }), p_position, $tmp2401, $tmp2403);
                return $tmp2399;
            }
            break;
            case 55:
            {
                org$pandalanguage$pandac$IRNode* $tmp2404 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2404->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2404->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2406 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2407 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2385, r2387);
                panda$core$UInt64 $tmp2408 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2407);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2404, ((panda$core$Int64) { 1004 }), p_position, $tmp2406, $tmp2408);
                return $tmp2404;
            }
            break;
            case 56:
            {
                org$pandalanguage$pandac$IRNode* $tmp2409 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2409->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2409->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2411 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2412 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2385, r2387);
                panda$core$UInt64 $tmp2413 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2412);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2409, ((panda$core$Int64) { 1004 }), p_position, $tmp2411, $tmp2413);
                return $tmp2409;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2414 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2414->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2414->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2416 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2385, r2387);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2414, ((panda$core$Int64) { 1011 }), p_position, $tmp2416, $tmp2417);
                return $tmp2414;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2418 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2418->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2418->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2420 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2421 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2385, r2387);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2418, ((panda$core$Int64) { 1011 }), p_position, $tmp2420, $tmp2421);
                return $tmp2418;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2422 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2422->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2422->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2424 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2425 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2385, r2387);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2422, ((panda$core$Int64) { 1011 }), p_position, $tmp2424, $tmp2425);
                return $tmp2422;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2426 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2426->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2426->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2428 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2429 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2385, r2387);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2426, ((panda$core$Int64) { 1011 }), p_position, $tmp2428, $tmp2429);
                return $tmp2426;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2430 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2430->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2430->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2432 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2433 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2385, r2387);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2430, ((panda$core$Int64) { 1011 }), p_position, $tmp2432, $tmp2433);
                return $tmp2430;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2434 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2434->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2434->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2436 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2437 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2385, r2387);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2434, ((panda$core$Int64) { 1011 }), p_position, $tmp2436, $tmp2437);
                return $tmp2434;
            }
            break;
            case 67:
            {
                org$pandalanguage$pandac$IRNode* $tmp2438 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2438->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2438->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2440 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2441 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2385, r2387);
                panda$core$UInt64 $tmp2442 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2441);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2438, ((panda$core$Int64) { 1004 }), p_position, $tmp2440, $tmp2442);
                return $tmp2438;
            }
            break;
            case 69:
            {
                org$pandalanguage$pandac$IRNode* $tmp2443 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2443->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2443->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2445 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2446 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2385, r2387);
                panda$core$UInt64 $tmp2447 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2446);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2443, ((panda$core$Int64) { 1004 }), p_position, $tmp2445, $tmp2447);
                return $tmp2443;
            }
            break;
            case 71:
            {
                org$pandalanguage$pandac$IRNode* $tmp2448 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2448->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2448->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2450 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2451 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2385, r2387);
                panda$core$UInt64 $tmp2452 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2451);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2448, ((panda$core$Int64) { 1004 }), p_position, $tmp2450, $tmp2452);
                return $tmp2448;
            }
            break;
            case 72:
            {
                org$pandalanguage$pandac$IRNode* $tmp2453 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2453->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2453->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2455 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2456 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2385, r2387);
                panda$core$UInt64 $tmp2457 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2456);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2453, ((panda$core$Int64) { 1004 }), p_position, $tmp2455, $tmp2457);
                return $tmp2453;
            }
            break;
            case 1:
            {
                org$pandalanguage$pandac$IRNode* $tmp2458 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2458->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2458->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2460 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Int64 $tmp2461 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2385, r2387);
                panda$core$UInt64 $tmp2462 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2461);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2458, ((panda$core$Int64) { 1004 }), p_position, $tmp2460, $tmp2462);
                return $tmp2458;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2463);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2464.value) {
    {
        panda$core$Object* $tmp2465 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2465);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2470;
    org$pandalanguage$pandac$IRNode* resolved2478;
    panda$collections$Array* children2483;
    panda$core$UInt64 baseId2489;
    org$pandalanguage$pandac$IRNode* base2490;
    panda$core$UInt64 indexId2497;
    org$pandalanguage$pandac$IRNode* index2498;
    org$pandalanguage$pandac$IRNode* baseRef2503;
    org$pandalanguage$pandac$IRNode* indexRef2506;
    org$pandalanguage$pandac$IRNode* rhsIndex2509;
    org$pandalanguage$pandac$IRNode* value2511;
    panda$core$Bit $tmp2466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2466.value);
    panda$core$Int64 $tmp2467 = panda$collections$Array$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2467, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2468.value);
    panda$core$Bit $tmp2469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2469.value) {
    {
        panda$collections$Array* $tmp2471 = (panda$collections$Array*) malloc(40);
        $tmp2471->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2471->refCount.value = 1;
        panda$collections$Array$init($tmp2471);
        args2470 = $tmp2471;
        panda$core$Object* $tmp2473 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2470, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2473)));
        panda$collections$Array$add$panda$collections$Array$T(args2470, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2474 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2476 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2474), &$s2475, ((panda$collections$ListView*) args2470));
        return $tmp2476;
    }
    }
    panda$core$Bit $tmp2477 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2477.value);
    org$pandalanguage$pandac$IRNode* $tmp2479 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2478 = $tmp2479;
    if (((panda$core$Bit) { resolved2478 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2480 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2478);
    resolved2478 = $tmp2480;
    panda$core$Int64 $tmp2481 = panda$collections$Array$get_count$R$panda$core$Int64(resolved2478->children);
    panda$core$Bit $tmp2482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2481, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2482.value);
    panda$collections$Array* $tmp2484 = (panda$collections$Array*) malloc(40);
    $tmp2484->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2484->refCount.value = 1;
    panda$collections$Array$init($tmp2484);
    children2483 = $tmp2484;
    panda$core$Object* $tmp2486 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2478->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2487 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2486));
    panda$collections$Array$add$panda$collections$Array$T(children2483, ((panda$core$Object*) $tmp2487));
    panda$core$UInt64 $tmp2488 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2488;
    baseId2489 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2491 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2491->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2491->refCount.value = 1;
    panda$core$Object* $tmp2493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2483, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2483, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2491, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2493)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2494)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2489)), ((panda$collections$ListView*) children2483));
    base2490 = $tmp2491;
    panda$collections$Array$clear(children2483);
    panda$core$Object* $tmp2495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(resolved2478->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2483, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2495)));
    panda$core$UInt64 $tmp2496 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2496;
    indexId2497 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2499 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2499->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2499->refCount.value = 1;
    panda$core$Object* $tmp2501 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2483, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2483, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2499, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2501)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2502)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2497)), ((panda$collections$ListView*) children2483));
    index2498 = $tmp2499;
    org$pandalanguage$pandac$IRNode* $tmp2504 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2504->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2504->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2504, ((panda$core$Int64) { 1028 }), base2490->position, base2490->type, baseId2489);
    baseRef2503 = $tmp2504;
    org$pandalanguage$pandac$IRNode* $tmp2507 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2507->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2507->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2507, ((panda$core$Int64) { 1028 }), index2498->position, index2498->type, indexId2497);
    indexRef2506 = $tmp2507;
    org$pandalanguage$pandac$IRNode* $tmp2510 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2503, ((panda$core$Int64) { 101 }), indexRef2506);
    rhsIndex2509 = $tmp2510;
    if (((panda$core$Bit) { rhsIndex2509 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2512 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2513 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2509, $tmp2512, p_right);
    value2511 = $tmp2513;
    if (((panda$core$Bit) { value2511 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2516 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2509->type);
    bool $tmp2515 = $tmp2516.value;
    if (!$tmp2515) goto $l2517;
    panda$core$Bit $tmp2518 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2515 = $tmp2518.value;
    $l2517:;
    panda$core$Bit $tmp2519 = { $tmp2515 };
    bool $tmp2514 = $tmp2519.value;
    if (!$tmp2514) goto $l2520;
    panda$core$Bit $tmp2521 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2509->type, value2511->type);
    $tmp2514 = $tmp2521.value;
    $l2520:;
    panda$core$Bit $tmp2522 = { $tmp2514 };
    if ($tmp2522.value) {
    {
        panda$collections$Array* $tmp2524 = (panda$collections$Array*) malloc(40);
        $tmp2524->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2524->refCount.value = 1;
        panda$collections$Array$init($tmp2524);
        org$pandalanguage$pandac$IRNode* $tmp2526 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2511, &$s2523, ((panda$collections$ListView*) $tmp2524), resolved2478->type);
        value2511 = $tmp2526;
        if (((panda$core$Bit) { value2511 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2483);
    panda$collections$Array$add$panda$collections$Array$T(children2483, ((panda$core$Object*) index2498));
    panda$collections$Array$add$panda$collections$Array$T(children2483, ((panda$core$Object*) value2511));
    org$pandalanguage$pandac$IRNode* $tmp2528 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2490, &$s2527, ((panda$collections$ListView*) children2483));
    return $tmp2528;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2529;
    org$pandalanguage$pandac$IRNode* right2530;
    panda$core$Int64 kind2554;
    org$pandalanguage$pandac$IRNode* resolved2561;
    panda$collections$Array* children2563;
    org$pandalanguage$pandac$IRNode* resolved2570;
    panda$collections$Array* children2572;
    org$pandalanguage$pandac$ClassDecl* cl2584;
    org$pandalanguage$pandac$ClassDecl* cl2601;
    org$pandalanguage$pandac$IRNode* finalLeft2617;
    org$pandalanguage$pandac$IRNode* finalRight2620;
    panda$collections$Array* children2623;
    panda$collections$Array* children2637;
    panda$collections$Array* children2649;
    org$pandalanguage$pandac$IRNode* reusedLeft2655;
    org$pandalanguage$pandac$ClassDecl* cl2672;
    panda$collections$ListView* parameters2674;
    org$pandalanguage$pandac$Symbol* methods2676;
    org$pandalanguage$pandac$Type* type2680;
    panda$collections$Array* types2681;
    org$pandalanguage$pandac$MethodDecl* m2685;
    panda$collections$Iterator* m$Iter2690;
    org$pandalanguage$pandac$MethodDecl* m2702;
    panda$collections$Array* children2713;
    panda$collections$Array* children2742;
    panda$collections$Array* children2758;
    org$pandalanguage$pandac$Type* resultType2781;
    org$pandalanguage$pandac$IRNode* result2785;
    org$pandalanguage$pandac$IRNode* resolved2788;
    org$pandalanguage$pandac$IRNode* target2794;
    left2529 = p_rawLeft;
    right2530 = p_rawRight;
    panda$core$Bit $tmp2531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2529->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2531.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2532 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2530);
        right2530 = $tmp2532;
        if (((panda$core$Bit) { right2530 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2533 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2529, right2530->type);
        if (((panda$core$Bit) { $tmp2533.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2534 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2529, right2530->type);
            left2529 = $tmp2534;
        }
        }
    }
    }
    panda$core$Bit $tmp2536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2530->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2535 = $tmp2536.value;
    if (!$tmp2535) goto $l2537;
    panda$core$Int64$nullable $tmp2538 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2530, left2529->type);
    $tmp2535 = ((panda$core$Bit) { $tmp2538.nonnull }).value;
    $l2537:;
    panda$core$Bit $tmp2539 = { $tmp2535 };
    if ($tmp2539.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2540 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2530, left2529->type);
        right2530 = $tmp2540;
    }
    }
    panda$core$Bit $tmp2544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2543 = $tmp2544.value;
    if ($tmp2543) goto $l2545;
    panda$core$Bit $tmp2546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2543 = $tmp2546.value;
    $l2545:;
    panda$core$Bit $tmp2547 = { $tmp2543 };
    bool $tmp2542 = $tmp2547.value;
    if ($tmp2542) goto $l2548;
    panda$core$Bit $tmp2549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2542 = $tmp2549.value;
    $l2548:;
    panda$core$Bit $tmp2550 = { $tmp2542 };
    bool $tmp2541 = $tmp2550.value;
    if ($tmp2541) goto $l2551;
    panda$core$Bit $tmp2552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2541 = $tmp2552.value;
    $l2551:;
    panda$core$Bit $tmp2553 = { $tmp2541 };
    if ($tmp2553.value) {
    {
        panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2555 = $tmp2556.value;
        if ($tmp2555) goto $l2557;
        panda$core$Bit $tmp2558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2555 = $tmp2558.value;
        $l2557:;
        panda$core$Bit $tmp2559 = { $tmp2555 };
        if ($tmp2559.value) {
        {
            kind2554 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2554 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2529->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2560.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2562 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2530);
            resolved2561 = $tmp2562;
            if (((panda$core$Bit) { resolved2561 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2564 = (panda$collections$Array*) malloc(40);
            $tmp2564->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2564->refCount.value = 1;
            panda$collections$Array$init($tmp2564);
            children2563 = $tmp2564;
            panda$collections$Array$add$panda$collections$Array$T(children2563, ((panda$core$Object*) resolved2561));
            org$pandalanguage$pandac$IRNode* $tmp2566 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2566->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2566->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2568 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2566, kind2554, p_position, $tmp2568, ((panda$collections$ListView*) children2563));
            return $tmp2566;
        }
        }
        panda$core$Bit $tmp2569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2530->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2569.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2571 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2529);
            resolved2570 = $tmp2571;
            if (((panda$core$Bit) { resolved2570 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2573 = (panda$collections$Array*) malloc(40);
            $tmp2573->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2573->refCount.value = 1;
            panda$collections$Array$init($tmp2573);
            children2572 = $tmp2573;
            panda$collections$Array$add$panda$collections$Array$T(children2572, ((panda$core$Object*) resolved2570));
            org$pandalanguage$pandac$IRNode* $tmp2575 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2575->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2575->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2577 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2575, kind2554, p_position, $tmp2577, ((panda$collections$ListView*) children2572));
            return $tmp2575;
        }
        }
    }
    }
    panda$core$Bit $tmp2579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp2578 = $tmp2579.value;
    if ($tmp2578) goto $l2580;
    panda$core$Bit $tmp2581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2578 = $tmp2581.value;
    $l2580:;
    panda$core$Bit $tmp2582 = { $tmp2578 };
    if ($tmp2582.value) {
    {
        panda$core$Bit $tmp2583 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2529->type);
        if ($tmp2583.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2585 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2529->type);
            cl2584 = $tmp2585;
            if (((panda$core$Bit) { cl2584 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2586 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2584);
            if ($tmp2586.value) {
            {
                panda$core$String* $tmp2588 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2587, $tmp2588);
                panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, &$s2590);
                panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2591, ((panda$core$Object*) left2529->type));
                panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2592, &$s2593);
                panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2595, ((panda$core$Object*) right2530->type));
                panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, &$s2597);
                panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, $tmp2598);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2599);
            }
            }
        }
        }
        panda$core$Bit $tmp2600 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2530->type);
        if ($tmp2600.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2602 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2530->type);
            cl2601 = $tmp2602;
            if (((panda$core$Bit) { cl2601 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp2603 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl2601);
            if ($tmp2603.value) {
            {
                panda$core$String* $tmp2605 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp2606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2604, $tmp2605);
                panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, &$s2607);
                panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2608, ((panda$core$Object*) left2529->type));
                panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2610);
                panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2612, ((panda$core$Object*) right2530->type));
                panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2614);
                panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, $tmp2615);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2616);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp2618 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2619 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2529, $tmp2618);
        finalLeft2617 = $tmp2619;
        if (((panda$core$Bit) { finalLeft2617 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp2621 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp2622 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2530, $tmp2621);
        finalRight2620 = $tmp2622;
        if (((panda$core$Bit) { finalRight2620 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp2624 = (panda$collections$Array*) malloc(40);
        $tmp2624->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2624->refCount.value = 1;
        panda$collections$Array$init($tmp2624);
        children2623 = $tmp2624;
        panda$collections$Array$add$panda$collections$Array$T(children2623, ((panda$core$Object*) finalLeft2617));
        panda$collections$Array$add$panda$collections$Array$T(children2623, ((panda$core$Object*) finalRight2620));
        org$pandalanguage$pandac$IRNode* $tmp2626 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2626->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2626->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2628 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2626, ((panda$core$Int64) { 1023 }), p_position, $tmp2628, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2623));
        return $tmp2626;
    }
    }
    panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2629.value) {
    {
        panda$core$Bit $tmp2630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2529->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2630.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2631 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2529, p_op, right2530);
            return $tmp2631;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2632 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2529);
        left2529 = $tmp2632;
        if (((panda$core$Bit) { left2529 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2633 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2530, left2529->type);
        right2530 = $tmp2633;
        if (((panda$core$Bit) { right2530 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2634 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2529);
        panda$core$Bit $tmp2635 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2634);
        if ($tmp2635.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2529->position, &$s2636);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2638 = (panda$collections$Array*) malloc(40);
        $tmp2638->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2638->refCount.value = 1;
        panda$collections$Array$init($tmp2638);
        children2637 = $tmp2638;
        panda$collections$Array$add$panda$collections$Array$T(children2637, ((panda$core$Object*) left2529));
        panda$collections$Array$add$panda$collections$Array$T(children2637, ((panda$core$Object*) right2530));
        org$pandalanguage$pandac$IRNode* $tmp2640 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2640->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2640->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2640, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children2637));
        return $tmp2640;
    }
    }
    panda$core$Bit $tmp2642 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp2642.value) {
    {
        panda$core$Bit $tmp2643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2529->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp2643.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2644 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2529, p_op, right2530);
            return $tmp2644;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2645 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2529);
        left2529 = $tmp2645;
        if (((panda$core$Bit) { left2529 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2646 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2529);
        panda$core$Bit $tmp2647 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2646);
        if ($tmp2647.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2529->position, &$s2648);
            return NULL;
        }
        }
        panda$collections$Array* $tmp2650 = (panda$collections$Array*) malloc(40);
        $tmp2650->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2650->refCount.value = 1;
        panda$collections$Array$init($tmp2650);
        children2649 = $tmp2650;
        panda$collections$Array$add$panda$collections$Array$T(children2649, ((panda$core$Object*) left2529));
        panda$core$UInt64 $tmp2652 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2652;
        org$pandalanguage$pandac$IRNode* $tmp2653 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2653->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2653->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2653, ((panda$core$Int64) { 1027 }), left2529->position, left2529->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2649));
        left2529 = $tmp2653;
        org$pandalanguage$pandac$IRNode* $tmp2656 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2656->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2656->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2656, ((panda$core$Int64) { 1028 }), left2529->position, left2529->type, self->reusedValueCount);
        reusedLeft2655 = $tmp2656;
        panda$core$Int64 $tmp2658 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp2659 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft2655, $tmp2658, right2530);
        right2530 = $tmp2659;
        if (((panda$core$Bit) { right2530 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2661 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2529->type);
        bool $tmp2660 = $tmp2661.value;
        if (!$tmp2660) goto $l2662;
        panda$core$Bit $tmp2663 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2529->type, right2530->type);
        $tmp2660 = $tmp2663.value;
        $l2662:;
        panda$core$Bit $tmp2664 = { $tmp2660 };
        if ($tmp2664.value) {
        {
            panda$collections$Array* $tmp2666 = (panda$collections$Array*) malloc(40);
            $tmp2666->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2666->refCount.value = 1;
            panda$collections$Array$init($tmp2666);
            org$pandalanguage$pandac$IRNode* $tmp2668 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2530, &$s2665, ((panda$collections$ListView*) $tmp2666), left2529->type);
            right2530 = $tmp2668;
            if (((panda$core$Bit) { right2530 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp2669 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2529, ((panda$core$Int64) { 73 }), right2530);
        return $tmp2669;
    }
    }
    panda$core$Bit $tmp2670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp2670.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2671 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2529);
        left2529 = $tmp2671;
        if (((panda$core$Bit) { left2529 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2673 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2529->type);
        cl2672 = $tmp2673;
        if (((panda$core$Bit) { cl2672 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$ListView* $tmp2675 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2529->type);
        parameters2674 = $tmp2675;
        org$pandalanguage$pandac$SymbolTable* $tmp2677 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2672);
        org$pandalanguage$pandac$Symbol* $tmp2679 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2677, &$s2678);
        methods2676 = $tmp2679;
        if (((panda$core$Bit) { methods2676 != NULL }).value) {
        {
            panda$collections$Array* $tmp2682 = (panda$collections$Array*) malloc(40);
            $tmp2682->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2682->refCount.value = 1;
            panda$collections$Array$init($tmp2682);
            types2681 = $tmp2682;
            panda$core$Bit $tmp2684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2676->kind, ((panda$core$Int64) { 204 }));
            if ($tmp2684.value) {
            {
                m2685 = ((org$pandalanguage$pandac$MethodDecl*) methods2676);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2685);
                org$pandalanguage$pandac$MethodRef* $tmp2686 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2686->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2686->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2686, m2685, parameters2674);
                org$pandalanguage$pandac$Type* $tmp2688 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2686);
                panda$collections$Array$add$panda$collections$Array$T(types2681, ((panda$core$Object*) $tmp2688));
            }
            }
            else {
            {
                panda$core$Bit $tmp2689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods2676->kind, ((panda$core$Int64) { 205 }));
                PANDA_ASSERT($tmp2689.value);
                {
                    ITable* $tmp2691 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2676)->methods)->$class->itable;
                    while ($tmp2691->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2691 = $tmp2691->next;
                    }
                    $fn2693 $tmp2692 = $tmp2691->methods[0];
                    panda$collections$Iterator* $tmp2694 = $tmp2692(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods2676)->methods));
                    m$Iter2690 = $tmp2694;
                    $l2695:;
                    ITable* $tmp2697 = m$Iter2690->$class->itable;
                    while ($tmp2697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2697 = $tmp2697->next;
                    }
                    $fn2699 $tmp2698 = $tmp2697->methods[0];
                    panda$core$Bit $tmp2700 = $tmp2698(m$Iter2690);
                    panda$core$Bit $tmp2701 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2700);
                    if (!$tmp2701.value) goto $l2696;
                    {
                        ITable* $tmp2703 = m$Iter2690->$class->itable;
                        while ($tmp2703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2703 = $tmp2703->next;
                        }
                        $fn2705 $tmp2704 = $tmp2703->methods[1];
                        panda$core$Object* $tmp2706 = $tmp2704(m$Iter2690);
                        m2702 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2706);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2702);
                        org$pandalanguage$pandac$MethodRef* $tmp2707 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                        $tmp2707->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                        $tmp2707->refCount.value = 1;
                        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2707, m2702, parameters2674);
                        org$pandalanguage$pandac$Type* $tmp2709 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp2707);
                        panda$collections$Array$add$panda$collections$Array$T(types2681, ((panda$core$Object*) $tmp2709));
                    }
                    goto $l2695;
                    $l2696:;
                }
            }
            }
            org$pandalanguage$pandac$Type* $tmp2710 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2710->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2710->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2710, ((panda$collections$ListView*) types2681));
            type2680 = $tmp2710;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp2712 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            type2680 = $tmp2712;
        }
        }
        panda$collections$Array* $tmp2714 = (panda$collections$Array*) malloc(40);
        $tmp2714->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2714->refCount.value = 1;
        panda$collections$Array$init($tmp2714);
        children2713 = $tmp2714;
        panda$collections$Array$add$panda$collections$Array$T(children2713, ((panda$core$Object*) left2529));
        panda$collections$Array$add$panda$collections$Array$T(children2713, ((panda$core$Object*) right2530));
        org$pandalanguage$pandac$IRNode* $tmp2716 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2716->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2716->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2716, ((panda$core$Int64) { 1040 }), p_position, type2680, ((panda$collections$ListView*) children2713));
        return $tmp2716;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2718 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2719 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2529->type, $tmp2718);
    if ($tmp2719.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2721 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp2722 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2530->type, $tmp2721);
        bool $tmp2720 = $tmp2722.value;
        if (!$tmp2720) goto $l2723;
        panda$core$Bit $tmp2728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp2727 = $tmp2728.value;
        if ($tmp2727) goto $l2729;
        panda$core$Bit $tmp2730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp2727 = $tmp2730.value;
        $l2729:;
        panda$core$Bit $tmp2731 = { $tmp2727 };
        bool $tmp2726 = $tmp2731.value;
        if ($tmp2726) goto $l2732;
        panda$core$Bit $tmp2733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp2726 = $tmp2733.value;
        $l2732:;
        panda$core$Bit $tmp2734 = { $tmp2726 };
        bool $tmp2725 = $tmp2734.value;
        if ($tmp2725) goto $l2735;
        panda$core$Bit $tmp2736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp2725 = $tmp2736.value;
        $l2735:;
        panda$core$Bit $tmp2737 = { $tmp2725 };
        bool $tmp2724 = $tmp2737.value;
        if ($tmp2724) goto $l2738;
        panda$core$Bit $tmp2739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp2724 = $tmp2739.value;
        $l2738:;
        panda$core$Bit $tmp2740 = { $tmp2724 };
        $tmp2720 = $tmp2740.value;
        $l2723:;
        panda$core$Bit $tmp2741 = { $tmp2720 };
        if ($tmp2741.value) {
        {
            panda$collections$Array* $tmp2743 = (panda$collections$Array*) malloc(40);
            $tmp2743->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2743->refCount.value = 1;
            panda$collections$Array$init($tmp2743);
            children2742 = $tmp2743;
            panda$collections$Array$add$panda$collections$Array$T(children2742, ((panda$core$Object*) left2529));
            panda$collections$Array$add$panda$collections$Array$T(children2742, ((panda$core$Object*) right2530));
            org$pandalanguage$pandac$IRNode* $tmp2745 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2745->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2745->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2745, ((panda$core$Int64) { 1023 }), p_position, left2529->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2742));
            return $tmp2745;
        }
        }
        panda$core$String* $tmp2748 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2747, $tmp2748);
        panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, &$s2750);
        panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2751, ((panda$core$Object*) left2529->type));
        panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, &$s2753);
        panda$core$String* $tmp2755 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2754, ((panda$core$Object*) right2530->type));
        panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2755, &$s2756);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2757);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2759 = (panda$collections$Array*) malloc(40);
    $tmp2759->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2759->refCount.value = 1;
    panda$collections$Array$init($tmp2759);
    children2758 = $tmp2759;
    panda$core$Bit $tmp2763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2529->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2762 = $tmp2763.value;
    if ($tmp2762) goto $l2764;
    panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2529->kind, ((panda$core$Int64) { 1032 }));
    $tmp2762 = $tmp2765.value;
    $l2764:;
    panda$core$Bit $tmp2766 = { $tmp2762 };
    bool $tmp2761 = $tmp2766.value;
    if (!$tmp2761) goto $l2767;
    panda$core$Bit $tmp2769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2530->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2768 = $tmp2769.value;
    if ($tmp2768) goto $l2770;
    panda$core$Bit $tmp2771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2530->kind, ((panda$core$Int64) { 1032 }));
    $tmp2768 = $tmp2771.value;
    $l2770:;
    panda$core$Bit $tmp2772 = { $tmp2768 };
    $tmp2761 = $tmp2772.value;
    $l2767:;
    panda$core$Bit $tmp2773 = { $tmp2761 };
    if ($tmp2773.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2774 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2529, p_op, right2530);
        return $tmp2774;
    }
    }
    panda$core$Bit $tmp2776 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2529->type);
    bool $tmp2775 = $tmp2776.value;
    if (!$tmp2775) goto $l2777;
    panda$core$Int64$nullable $tmp2778 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2530, left2529->type);
    $tmp2775 = ((panda$core$Bit) { $tmp2778.nonnull }).value;
    $l2777:;
    panda$core$Bit $tmp2779 = { $tmp2775 };
    if ($tmp2779.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2780 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2530, left2529->type);
        right2530 = $tmp2780;
        PANDA_ASSERT(((panda$core$Bit) { right2530 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children2758, ((panda$core$Object*) left2529));
        panda$collections$Array$add$panda$collections$Array$T(children2758, ((panda$core$Object*) right2530));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp2782 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType2781 = $tmp2782;
            }
            break;
            default:
            {
                resultType2781 = left2529->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp2783 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2783->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2783->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2783, ((panda$core$Int64) { 1023 }), p_position, resultType2781, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children2758));
        return $tmp2783;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children2758, ((panda$core$Object*) right2530));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp2786 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2787 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2529, $tmp2786, ((panda$collections$ListView*) children2758));
    result2785 = $tmp2787;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result2785 == NULL }).value) {
    {
        panda$collections$Array$clear(children2758);
        panda$collections$Array$add$panda$collections$Array$T(children2758, ((panda$core$Object*) left2529));
        org$pandalanguage$pandac$IRNode* $tmp2789 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2530);
        resolved2788 = $tmp2789;
        bool $tmp2790 = ((panda$core$Bit) { resolved2788 != NULL }).value;
        if (!$tmp2790) goto $l2791;
        panda$core$Bit $tmp2792 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2788->type);
        $tmp2790 = $tmp2792.value;
        $l2791:;
        panda$core$Bit $tmp2793 = { $tmp2790 };
        if ($tmp2793.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children2758, ((panda$core$Object*) resolved2788));
            org$pandalanguage$pandac$IRNode* $tmp2795 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2795->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2795->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2797 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2795, ((panda$core$Int64) { 1001 }), resolved2788->position, $tmp2797, resolved2788->type);
            target2794 = $tmp2795;
            panda$core$String* $tmp2798 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp2799 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2794, $tmp2798, ((panda$collections$ListView*) children2758));
            result2785 = $tmp2799;
        }
        }
    }
    }
    return result2785;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left2800;
    org$pandalanguage$pandac$IRNode* right2803;
    panda$core$Object* $tmp2801 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2802 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2801));
    left2800 = $tmp2802;
    if (((panda$core$Bit) { left2800 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp2804 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp2805 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2804));
    right2803 = $tmp2805;
    if (((panda$core$Bit) { right2803 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2806 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left2800, ((panda$core$Int64$wrapper*) p_b->payload)->value, right2803);
    return $tmp2806;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2810;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp2807 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp2807;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp2808 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp2809 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2808, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2809.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2810, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp2811 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp2810);
            return ((panda$collections$ListView*) $tmp2811);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp2812 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp2813 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp2812));
            return $tmp2813;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp2814 = (panda$collections$Array*) malloc(40);
            $tmp2814->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2814->refCount.value = 1;
            panda$collections$Array$init($tmp2814);
            return ((panda$collections$ListView*) $tmp2814);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp2816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp2816.value) {
        {
            panda$collections$ListView* $tmp2817 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp2817;
        }
        }
        panda$collections$ListView* $tmp2818 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp2818;
    }
    }
    panda$collections$Array* $tmp2819 = (panda$collections$Array*) malloc(40);
    $tmp2819->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2819->refCount.value = 1;
    panda$collections$Array$init($tmp2819);
    return ((panda$collections$ListView*) $tmp2819);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name2822;
    org$pandalanguage$pandac$ClassDecl* cl2824;
    org$pandalanguage$pandac$Symbol* s2826;
    org$pandalanguage$pandac$MethodDecl* m2829;
    panda$collections$Iterator* test$Iter2834;
    org$pandalanguage$pandac$MethodDecl* test2846;
    org$pandalanguage$pandac$MethodRef* ref2858;
    panda$collections$Array* children2862;
    org$pandalanguage$pandac$IRNode* methodRef2865;
    org$pandalanguage$pandac$Position $tmp2871;
    panda$collections$Array* args2872;
    panda$collections$Array* children2881;
    panda$collections$Array* children2891;
    org$pandalanguage$pandac$IRNode* coerced2900;
    panda$collections$Array* children2903;
    panda$core$Bit $tmp2821 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp2821.value) {
    {
        panda$core$String* $tmp2823 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name2822 = $tmp2823;
        org$pandalanguage$pandac$ClassDecl* $tmp2825 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl2824 = $tmp2825;
        if (((panda$core$Bit) { cl2824 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp2827 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2824);
        org$pandalanguage$pandac$Symbol* $tmp2828 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2827, name2822);
        s2826 = $tmp2828;
        if (((panda$core$Bit) { s2826 != NULL }).value) {
        {
            m2829 = NULL;
            switch (s2826->kind.value) {
                case 204:
                {
                    m2829 = ((org$pandalanguage$pandac$MethodDecl*) s2826);
                    panda$core$Int64 $tmp2830 = panda$collections$Array$get_count$R$panda$core$Int64(m2829->parameters);
                    panda$core$Bit $tmp2831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2830, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2831.value);
                    panda$core$Bit $tmp2832 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m2829->annotations);
                    panda$core$Bit $tmp2833 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2832);
                    PANDA_ASSERT($tmp2833.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp2835 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2826)->methods)->$class->itable;
                        while ($tmp2835->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2835 = $tmp2835->next;
                        }
                        $fn2837 $tmp2836 = $tmp2835->methods[0];
                        panda$collections$Iterator* $tmp2838 = $tmp2836(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s2826)->methods));
                        test$Iter2834 = $tmp2838;
                        $l2839:;
                        ITable* $tmp2841 = test$Iter2834->$class->itable;
                        while ($tmp2841->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2841 = $tmp2841->next;
                        }
                        $fn2843 $tmp2842 = $tmp2841->methods[0];
                        panda$core$Bit $tmp2844 = $tmp2842(test$Iter2834);
                        panda$core$Bit $tmp2845 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2844);
                        if (!$tmp2845.value) goto $l2840;
                        {
                            ITable* $tmp2847 = test$Iter2834->$class->itable;
                            while ($tmp2847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2847 = $tmp2847->next;
                            }
                            $fn2849 $tmp2848 = $tmp2847->methods[1];
                            panda$core$Object* $tmp2850 = $tmp2848(test$Iter2834);
                            test2846 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2850);
                            panda$core$Bit $tmp2852 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test2846->annotations);
                            panda$core$Bit $tmp2853 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2852);
                            bool $tmp2851 = $tmp2853.value;
                            if (!$tmp2851) goto $l2854;
                            panda$core$Int64 $tmp2855 = panda$collections$Array$get_count$R$panda$core$Int64(test2846->parameters);
                            panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2855, ((panda$core$Int64) { 0 }));
                            $tmp2851 = $tmp2856.value;
                            $l2854:;
                            panda$core$Bit $tmp2857 = { $tmp2851 };
                            if ($tmp2857.value) {
                            {
                                m2829 = test2846;
                                goto $l2840;
                            }
                            }
                        }
                        goto $l2839;
                        $l2840:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m2829 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2829);
                org$pandalanguage$pandac$MethodRef* $tmp2859 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp2859->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp2859->refCount.value = 1;
                panda$collections$ListView* $tmp2861 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2859, m2829, $tmp2861);
                ref2858 = $tmp2859;
                panda$collections$Array* $tmp2863 = (panda$collections$Array*) malloc(40);
                $tmp2863->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2863->refCount.value = 1;
                panda$collections$Array$init($tmp2863);
                children2862 = $tmp2863;
                panda$collections$Array$add$panda$collections$Array$T(children2862, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2866 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2866->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2866->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2868 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp2868->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp2868->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2871);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp2868, &$s2870, ((panda$core$Int64) { 16 }), $tmp2871, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2866, ((panda$core$Int64) { 1002 }), p_position, $tmp2868, ((panda$core$Object*) ref2858), ((panda$collections$ListView*) children2862));
                methodRef2865 = $tmp2866;
                panda$collections$Array* $tmp2873 = (panda$collections$Array*) malloc(40);
                $tmp2873->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2873->refCount.value = 1;
                panda$collections$Array$init($tmp2873);
                args2872 = $tmp2873;
                org$pandalanguage$pandac$IRNode* $tmp2875 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef2865, ((panda$collections$ListView*) args2872));
                return $tmp2875;
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
                    org$pandalanguage$pandac$IRNode* $tmp2876 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2876->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2876->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2876, ((panda$core$Int64) { 1032 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2876;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp2878 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp2878->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp2878->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2878, ((panda$core$Int64) { 1004 }), p_position, p_base->type, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp2878;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp2880 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp2880.value) {
                    {
                        panda$collections$Array* $tmp2882 = (panda$collections$Array*) malloc(40);
                        $tmp2882->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp2882->refCount.value = 1;
                        panda$collections$Array$init($tmp2882);
                        children2881 = $tmp2882;
                        panda$collections$Array$add$panda$collections$Array$T(children2881, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp2884 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp2884->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp2884->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2884, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children2881));
                        return $tmp2884;
                    }
                    }
                }
            }
            panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2886, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, &$s2888);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2889);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp2890 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp2890.value) {
            {
                panda$collections$Array* $tmp2892 = (panda$collections$Array*) malloc(40);
                $tmp2892->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2892->refCount.value = 1;
                panda$collections$Array$init($tmp2892);
                children2891 = $tmp2892;
                panda$collections$Array$add$panda$collections$Array$T(children2891, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp2894 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2894->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2894->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2894, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children2891));
                return $tmp2894;
            }
            }
            else {
            {
                panda$core$String* $tmp2897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2896, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2897, &$s2898);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp2899);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp2901 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp2902 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp2901);
            coerced2900 = $tmp2902;
            if (((panda$core$Bit) { coerced2900 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2904 = (panda$collections$Array*) malloc(40);
            $tmp2904->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2904->refCount.value = 1;
            panda$collections$Array$init($tmp2904);
            children2903 = $tmp2904;
            panda$collections$Array$add$panda$collections$Array$T(children2903, ((panda$core$Object*) coerced2900));
            org$pandalanguage$pandac$IRNode* $tmp2906 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2906->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2906->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2906, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children2903));
            return $tmp2906;
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
    org$pandalanguage$pandac$IRNode* base2911;
    panda$core$Bit $tmp2908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp2908.value);
    panda$core$Int64 $tmp2909 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp2910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2909, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2910.value);
    panda$core$Object* $tmp2912 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2913 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2912));
    base2911 = $tmp2913;
    if (((panda$core$Bit) { base2911 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2914 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base2911, p_p->position);
    return $tmp2914;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m2916;
    panda$collections$Array* args2919;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2922;
    org$pandalanguage$pandac$IRNode* arg2937;
    panda$core$Bit $tmp2915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp2915.value);
    panda$core$Object* $tmp2917 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2918 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2917));
    m2916 = $tmp2918;
    if (((panda$core$Bit) { m2916 != NULL }).value) {
    {
        panda$collections$Array* $tmp2920 = (panda$collections$Array*) malloc(40);
        $tmp2920->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2920->refCount.value = 1;
        panda$collections$Array$init($tmp2920);
        args2919 = $tmp2920;
        panda$core$Int64 $tmp2923 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2922, ((panda$core$Int64) { 1 }), $tmp2923, ((panda$core$Bit) { false }));
        int64_t $tmp2925 = $tmp2922.min.value;
        panda$core$Int64 i2924 = { $tmp2925 };
        int64_t $tmp2927 = $tmp2922.max.value;
        bool $tmp2928 = $tmp2922.inclusive.value;
        if ($tmp2928) goto $l2935; else goto $l2936;
        $l2935:;
        if ($tmp2925 <= $tmp2927) goto $l2929; else goto $l2931;
        $l2936:;
        if ($tmp2925 < $tmp2927) goto $l2929; else goto $l2931;
        $l2929:;
        {
            panda$core$Object* $tmp2938 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i2924);
            org$pandalanguage$pandac$IRNode* $tmp2939 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2938));
            arg2937 = $tmp2939;
            if (((panda$core$Bit) { arg2937 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args2919, ((panda$core$Object*) arg2937));
        }
        $l2932:;
        int64_t $tmp2941 = $tmp2927 - i2924.value;
        if ($tmp2928) goto $l2942; else goto $l2943;
        $l2942:;
        if ($tmp2941 >= 1) goto $l2940; else goto $l2931;
        $l2943:;
        if ($tmp2941 > 1) goto $l2940; else goto $l2931;
        $l2940:;
        i2924.value += 1;
        goto $l2929;
        $l2931:;
        org$pandalanguage$pandac$IRNode* $tmp2946 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m2916, ((panda$collections$ListView*) args2919));
        return $tmp2946;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base2950;
    org$pandalanguage$pandac$ClassDecl* cl2959;
    panda$core$String* name2961;
    org$pandalanguage$pandac$ClassDecl* cl2969;
    org$pandalanguage$pandac$Symbol* s2982;
    panda$core$Bit $tmp2947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp2947.value);
    panda$core$Int64 $tmp2948 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2948, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2949.value);
    panda$core$Object* $tmp2951 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2952 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp2951));
    base2950 = $tmp2952;
    if (((panda$core$Bit) { base2950 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2954 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2950->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp2953 = $tmp2954.value;
    if (!$tmp2953) goto $l2955;
    panda$core$Bit $tmp2956 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base2950->kind, ((panda$core$Int64) { 1024 }));
    $tmp2953 = $tmp2956.value;
    $l2955:;
    panda$core$Bit $tmp2957 = { $tmp2953 };
    if ($tmp2957.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2958 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base2950);
        base2950 = $tmp2958;
    }
    }
    if (((panda$core$Bit) { base2950 == NULL }).value) {
    {
        return NULL;
    }
    }
    switch (base2950->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2960 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) base2950->payload));
            cl2959 = $tmp2960;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2962, base2950->payload);
            panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, &$s2964);
            panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2965, p_d->payload);
            panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2967);
            name2961 = $tmp2968;
            org$pandalanguage$pandac$ClassDecl* $tmp2970 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name2961);
            cl2969 = $tmp2970;
            if (((panda$core$Bit) { cl2969 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2971 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2971->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2971->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2973 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2974 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2969);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2971, ((panda$core$Int64) { 1001 }), p_d->position, $tmp2973, $tmp2974);
                return $tmp2971;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2975 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2975->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2975->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2977 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp2975, ((panda$core$Int64) { 1037 }), p_d->position, $tmp2977, name2961);
            return $tmp2975;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp2978 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2978));
            panda$core$Object* $tmp2979 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp2980 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp2979)->rawSuper);
            cl2959 = $tmp2980;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp2981 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, base2950->type);
            cl2959 = $tmp2981;
        }
    }
    if (((panda$core$Bit) { cl2959 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2983 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2959);
    org$pandalanguage$pandac$Symbol* $tmp2984 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2983, ((panda$core$String*) p_d->payload));
    s2982 = $tmp2984;
    if (((panda$core$Bit) { s2982 == NULL }).value) {
    {
        panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2985, ((panda$core$Object*) base2950->type));
        panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, &$s2987);
        panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2989, p_d->payload);
        panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, &$s2991);
        panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, $tmp2992);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_d->position, $tmp2993);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2994 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2959);
    org$pandalanguage$pandac$IRNode* $tmp2995 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base2950, s2982, $tmp2994);
    return $tmp2995;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s2997;
    panda$core$Bit $tmp2996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp2996.value);
    org$pandalanguage$pandac$Symbol* $tmp2998 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s2997 = $tmp2998;
    if (((panda$core$Bit) { s2997 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2999 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s2997 = ((org$pandalanguage$pandac$Symbol*) $tmp2999);
    }
    }
    if (((panda$core$Bit) { s2997 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3000 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s2997, self->symbolTable);
        return $tmp3000;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3001 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3001->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3001->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3003 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3001, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3003, ((panda$core$String*) p_i->payload));
    return $tmp3001;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3004;
    org$pandalanguage$pandac$Type* $tmp3005 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3006 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3005);
    resolved3004 = $tmp3006;
    if (((panda$core$Bit) { resolved3004 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3007 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3007->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3007->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3009 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3007, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3009, resolved3004);
    return $tmp3007;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3017;
    org$pandalanguage$pandac$IRNode* end3025;
    org$pandalanguage$pandac$IRNode* step3033;
    panda$collections$Array* children3040;
    org$pandalanguage$pandac$Position $tmp3048;
    panda$core$Bit $tmp3011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3010 = $tmp3011.value;
    if ($tmp3010) goto $l3012;
    panda$core$Bit $tmp3013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3010 = $tmp3013.value;
    $l3012:;
    panda$core$Bit $tmp3014 = { $tmp3010 };
    PANDA_ASSERT($tmp3014.value);
    panda$core$Int64 $tmp3015 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3015, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3016.value);
    panda$core$Object* $tmp3018 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3018)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3019.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3020 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3020->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3020->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3022 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3020, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3022);
        start3017 = $tmp3020;
    }
    }
    else {
    {
        panda$core$Object* $tmp3023 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3024 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3023));
        start3017 = $tmp3024;
        if (((panda$core$Bit) { start3017 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3026 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3026)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3027.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3028 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3028->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3028->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3030 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3028, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3030);
        end3025 = $tmp3028;
    }
    }
    else {
    {
        panda$core$Object* $tmp3031 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3032 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3031));
        end3025 = $tmp3032;
        if (((panda$core$Bit) { end3025 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3034 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3034)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3035.value) {
    {
        step3033 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3036 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3037 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3036));
        org$pandalanguage$pandac$Type* $tmp3038 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3039 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3037, $tmp3038);
        step3033 = $tmp3039;
        if (((panda$core$Bit) { step3033 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3041 = (panda$collections$Array*) malloc(40);
    $tmp3041->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3041->refCount.value = 1;
    panda$collections$Array$init($tmp3041);
    children3040 = $tmp3041;
    panda$collections$Array$add$panda$collections$Array$T(children3040, ((panda$core$Object*) start3017));
    panda$collections$Array$add$panda$collections$Array$T(children3040, ((panda$core$Object*) end3025));
    if (((panda$core$Bit) { step3033 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3040, ((panda$core$Object*) step3033));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3043 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3043->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3043->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3045 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3045->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3045->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3048);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3045, &$s3047, ((panda$core$Int64) { 17 }), $tmp3048, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3043, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3045, ((panda$core$Object*) wrap_panda$core$Bit($tmp3049)), ((panda$collections$ListView*) children3040));
    return $tmp3043;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3050 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3050->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3050->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3052 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3050, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3052, ((panda$core$String*) p_s->payload));
    return $tmp3050;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3057;
    org$pandalanguage$pandac$ClassDecl* cl3058;
    panda$collections$Array* subtypes3065;
    panda$core$MutableString* name3069;
    panda$core$String* separator3073;
    panda$collections$Iterator* p$Iter3075;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3087;
    panda$collections$Array* pType3092;
    panda$core$String* pName3095;
    panda$core$Bit $tmp3053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3053.value);
    panda$core$Object* $tmp3054 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3055 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3054)->annotations);
    if ($tmp3055.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3056);
        return NULL;
    }
    }
    panda$core$Object* $tmp3059 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3058 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3059);
    ITable* $tmp3060 = ((panda$collections$CollectionView*) cl3058->parameters)->$class->itable;
    while ($tmp3060->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3060 = $tmp3060->next;
    }
    $fn3062 $tmp3061 = $tmp3060->methods[0];
    panda$core$Int64 $tmp3063 = $tmp3061(((panda$collections$CollectionView*) cl3058->parameters));
    panda$core$Bit $tmp3064 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3063, ((panda$core$Int64) { 0 }));
    if ($tmp3064.value) {
    {
        panda$collections$Array* $tmp3066 = (panda$collections$Array*) malloc(40);
        $tmp3066->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3066->refCount.value = 1;
        panda$collections$Array$init($tmp3066);
        subtypes3065 = $tmp3066;
        org$pandalanguage$pandac$Type* $tmp3068 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3058);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3065, ((panda$core$Object*) $tmp3068));
        panda$core$MutableString* $tmp3070 = (panda$core$MutableString*) malloc(40);
        $tmp3070->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3070->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3070, ((org$pandalanguage$pandac$Symbol*) cl3058)->name);
        name3069 = $tmp3070;
        panda$core$MutableString$append$panda$core$String(name3069, &$s3072);
        separator3073 = &$s3074;
        {
            ITable* $tmp3076 = ((panda$collections$Iterable*) cl3058->parameters)->$class->itable;
            while ($tmp3076->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3076 = $tmp3076->next;
            }
            $fn3078 $tmp3077 = $tmp3076->methods[0];
            panda$collections$Iterator* $tmp3079 = $tmp3077(((panda$collections$Iterable*) cl3058->parameters));
            p$Iter3075 = $tmp3079;
            $l3080:;
            ITable* $tmp3082 = p$Iter3075->$class->itable;
            while ($tmp3082->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3082 = $tmp3082->next;
            }
            $fn3084 $tmp3083 = $tmp3082->methods[0];
            panda$core$Bit $tmp3085 = $tmp3083(p$Iter3075);
            panda$core$Bit $tmp3086 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3085);
            if (!$tmp3086.value) goto $l3081;
            {
                ITable* $tmp3088 = p$Iter3075->$class->itable;
                while ($tmp3088->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3088 = $tmp3088->next;
                }
                $fn3090 $tmp3089 = $tmp3088->methods[1];
                panda$core$Object* $tmp3091 = $tmp3089(p$Iter3075);
                p3087 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3091);
                panda$collections$Array* $tmp3093 = (panda$collections$Array*) malloc(40);
                $tmp3093->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3093->refCount.value = 1;
                panda$collections$Array$init($tmp3093);
                pType3092 = $tmp3093;
                panda$collections$Array$add$panda$collections$Array$T(pType3092, ((panda$core$Object*) p3087->bound));
                panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3096, ((org$pandalanguage$pandac$Symbol*) cl3058)->name);
                panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, &$s3098);
                panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, ((org$pandalanguage$pandac$Symbol*) p3087)->name);
                panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, &$s3101);
                pName3095 = $tmp3102;
                panda$core$MutableString$append$panda$core$String(name3069, separator3073);
                panda$core$MutableString$append$panda$core$String(name3069, pName3095);
                org$pandalanguage$pandac$Type* $tmp3103 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3103->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3103->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3103, p3087);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3065, ((panda$core$Object*) $tmp3103));
                separator3073 = &$s3105;
            }
            goto $l3080;
            $l3081:;
        }
        panda$core$MutableString$append$panda$core$String(name3069, &$s3106);
        org$pandalanguage$pandac$Type* $tmp3107 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3107->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3107->refCount.value = 1;
        panda$core$String* $tmp3109 = panda$core$MutableString$finish$R$panda$core$String(name3069);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3107, $tmp3109, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3065), ((panda$core$Bit) { true }));
        type3057 = $tmp3107;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3110 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3058);
        type3057 = $tmp3110;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3111 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3111->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3111->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3111, ((panda$core$Int64) { 1025 }), p_s->position, type3057);
    return $tmp3111;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3117;
    panda$core$Bit $tmp3113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3113.value);
    panda$core$Object* $tmp3114 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3115 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3114)->annotations);
    if ($tmp3115.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3116);
        return NULL;
    }
    }
    panda$core$Object* $tmp3118 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3117 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3118);
    PANDA_ASSERT(cl3117->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3119 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3119->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3119->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3119, ((panda$core$Int64) { 1024 }), p_s->position, cl3117->rawSuper);
    return $tmp3119;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* value3124;
    org$pandalanguage$pandac$Type* type3127;
    panda$core$Bit $tmp3121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3121.value);
    panda$core$Int64 $tmp3122 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3122, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3123.value);
    panda$core$Object* $tmp3125 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3126 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3125));
    value3124 = $tmp3126;
    if (((panda$core$Bit) { value3124 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3128 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3129 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3128));
    org$pandalanguage$pandac$Type* $tmp3130 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3129);
    type3127 = $tmp3130;
    if (((panda$core$Bit) { type3127 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3131 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3124, type3127);
    if (((panda$core$Bit) { $tmp3131.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3132 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3124, type3127);
        return $tmp3132;
    }
    }
    panda$core$Bit $tmp3133 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3124, type3127);
    if ($tmp3133.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3134 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3124, p_c->position, ((panda$core$Bit) { true }), type3127);
        return $tmp3134;
    }
    }
    else {
    {
        panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3135, ((panda$core$Object*) value3124->type));
        panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3137);
        panda$core$String* $tmp3140 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3139, ((panda$core$Object*) type3127));
        panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3140, &$s3141);
        panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, $tmp3142);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3143);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3144.value);
    org$pandalanguage$pandac$IRNode* $tmp3145 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3145->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3145->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3147 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3145, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3147);
    return $tmp3145;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3152;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3148 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3148;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3149 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3149->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3149->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3151 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3149, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3151, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3149;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3153 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3152 = $tmp3153;
            bool $tmp3154 = ((panda$core$Bit) { result3152 != NULL }).value;
            if (!$tmp3154) goto $l3155;
            org$pandalanguage$pandac$Type* $tmp3156 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3157 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3152->type, $tmp3156);
            $tmp3154 = $tmp3157.value;
            $l3155:;
            panda$core$Bit $tmp3158 = { $tmp3154 };
            if ($tmp3158.value) {
            {
                panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3152->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3159.value);
                panda$core$String* $tmp3160 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3152->payload)->value);
                panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, &$s3161);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3152->position, $tmp3162);
                return NULL;
            }
            }
            return result3152;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3163 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3163;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3164 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3164;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3165 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3165->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3165->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3167 = org$pandalanguage$pandac$Type$IntLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3165, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3167, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3165;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3168 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3168;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3169 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3169;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3170 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3170;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3171 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3171;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3172 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3172;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3173 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3173;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3174 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3174;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3175 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3175;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3177;
    panda$collections$Array* result3180;
    panda$collections$Iterator* stmt$Iter3183;
    org$pandalanguage$pandac$ASTNode* stmt3195;
    org$pandalanguage$pandac$IRNode* compiled3200;
    panda$core$Bit $tmp3176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3176.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3178 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3178->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3178->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3178, self->symbolTable);
    symbols3177 = $tmp3178;
    self->symbolTable = symbols3177;
    panda$collections$Array* $tmp3181 = (panda$collections$Array*) malloc(40);
    $tmp3181->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3181->refCount.value = 1;
    panda$collections$Array$init($tmp3181);
    result3180 = $tmp3181;
    {
        ITable* $tmp3184 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
        while ($tmp3184->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3184 = $tmp3184->next;
        }
        $fn3186 $tmp3185 = $tmp3184->methods[0];
        panda$collections$Iterator* $tmp3187 = $tmp3185(((panda$collections$Iterable*) p_b->children));
        stmt$Iter3183 = $tmp3187;
        $l3188:;
        ITable* $tmp3190 = stmt$Iter3183->$class->itable;
        while ($tmp3190->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3190 = $tmp3190->next;
        }
        $fn3192 $tmp3191 = $tmp3190->methods[0];
        panda$core$Bit $tmp3193 = $tmp3191(stmt$Iter3183);
        panda$core$Bit $tmp3194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3193);
        if (!$tmp3194.value) goto $l3189;
        {
            ITable* $tmp3196 = stmt$Iter3183->$class->itable;
            while ($tmp3196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3196 = $tmp3196->next;
            }
            $fn3198 $tmp3197 = $tmp3196->methods[1];
            panda$core$Object* $tmp3199 = $tmp3197(stmt$Iter3183);
            stmt3195 = ((org$pandalanguage$pandac$ASTNode*) $tmp3199);
            org$pandalanguage$pandac$IRNode* $tmp3201 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3195);
            compiled3200 = $tmp3201;
            if (((panda$core$Bit) { compiled3200 == NULL }).value) {
            {
                panda$core$Object* $tmp3202 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3177->parents, ((panda$core$Int64) { 0 }));
                self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3202);
                return NULL;
            }
            }
            panda$core$Bit $tmp3203 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3200->kind, ((panda$core$Int64) { 1039 }));
            PANDA_ASSERT($tmp3203.value);
            panda$collections$Array$add$panda$collections$Array$T(result3180, ((panda$core$Object*) compiled3200));
        }
        goto $l3188;
        $l3189:;
    }
    panda$core$Object* $tmp3204 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3177->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3204);
    org$pandalanguage$pandac$IRNode* $tmp3205 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3205->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3205->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3205, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3180));
    return $tmp3205;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3215;
    org$pandalanguage$pandac$IRNode* ifTrue3220;
    panda$collections$Array* children3223;
    org$pandalanguage$pandac$IRNode* ifFalse3228;
    panda$core$Bit $tmp3207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3207.value);
    panda$core$Int64 $tmp3209 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3209, ((panda$core$Int64) { 2 }));
    bool $tmp3208 = $tmp3210.value;
    if ($tmp3208) goto $l3211;
    panda$core$Int64 $tmp3212 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3212, ((panda$core$Int64) { 3 }));
    $tmp3208 = $tmp3213.value;
    $l3211:;
    panda$core$Bit $tmp3214 = { $tmp3208 };
    PANDA_ASSERT($tmp3214.value);
    panda$core$Object* $tmp3216 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3217 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3216));
    org$pandalanguage$pandac$Type* $tmp3218 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3219 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3217, $tmp3218);
    test3215 = $tmp3219;
    if (((panda$core$Bit) { test3215 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3221 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3222 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3221));
    ifTrue3220 = $tmp3222;
    if (((panda$core$Bit) { ifTrue3220 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3224 = (panda$collections$Array*) malloc(40);
    $tmp3224->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3224->refCount.value = 1;
    panda$collections$Array$init($tmp3224);
    children3223 = $tmp3224;
    panda$collections$Array$add$panda$collections$Array$T(children3223, ((panda$core$Object*) test3215));
    panda$collections$Array$add$panda$collections$Array$T(children3223, ((panda$core$Object*) ifTrue3220));
    panda$core$Int64 $tmp3226 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3226, ((panda$core$Int64) { 3 }));
    if ($tmp3227.value) {
    {
        panda$core$Object* $tmp3229 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3230 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3229));
        ifFalse3228 = $tmp3230;
        if (((panda$core$Bit) { ifFalse3228 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3223, ((panda$core$Object*) ifFalse3228));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3231 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3231->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3231->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3231, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3223));
    return $tmp3231;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3233;
    org$pandalanguage$pandac$IRNode* list3234;
    org$pandalanguage$pandac$Type* t3241;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3274;
    org$pandalanguage$pandac$IRNode* body3276;
    panda$collections$Array* children3278;
    panda$core$Bit $tmp3236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3235 = $tmp3236.value;
    if (!$tmp3235) goto $l3237;
    panda$core$Int64 $tmp3238 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3238, ((panda$core$Int64) { 1 }));
    $tmp3235 = $tmp3239.value;
    $l3237:;
    panda$core$Bit $tmp3240 = { $tmp3235 };
    if ($tmp3240.value) {
    {
        panda$core$Object* $tmp3242 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3243 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3242));
        org$pandalanguage$pandac$Type* $tmp3244 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3243);
        t3241 = $tmp3244;
        panda$core$Bit $tmp3245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3245.value) {
        {
            panda$core$Int64 $tmp3246 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3246, ((panda$core$Int64) { 2 }));
            if ($tmp3247.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3248 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3241);
                org$pandalanguage$pandac$IRNode* $tmp3249 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3248);
                list3234 = $tmp3249;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3250 = panda$collections$Array$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3250, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3251.value);
                org$pandalanguage$pandac$Type* $tmp3252 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3253 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3241, $tmp3252);
                org$pandalanguage$pandac$IRNode* $tmp3254 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3253);
                list3234 = $tmp3254;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3255 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3255.value) {
        {
            panda$core$Object* $tmp3256 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_rawList->type->subtypes, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp3257 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3241, ((org$pandalanguage$pandac$Type*) $tmp3256));
            org$pandalanguage$pandac$IRNode* $tmp3258 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3257);
            list3234 = $tmp3258;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3259 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3241);
        panda$core$Int64$nullable $tmp3260 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3259);
        if (((panda$core$Bit) { $tmp3260.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3261 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3241);
            org$pandalanguage$pandac$IRNode* $tmp3262 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3261);
            list3234 = $tmp3262;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3263 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp3264 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3241, $tmp3263);
            org$pandalanguage$pandac$IRNode* $tmp3265 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3264);
            list3234 = $tmp3265;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3266 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList);
        list3234 = $tmp3266;
    }
    }
    if (((panda$core$Bit) { list3234 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3234->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3267.value) {
    {
        panda$core$Object* $tmp3268 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3234->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3268)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3269.value);
        panda$core$Object* $tmp3270 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3234->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3271 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3270)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3233 = ((org$pandalanguage$pandac$Type*) $tmp3271);
    }
    }
    else {
    {
        panda$core$Bit $tmp3272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3234->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3272.value);
        panda$core$Object* $tmp3273 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3234->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3233 = ((org$pandalanguage$pandac$Type*) $tmp3273);
    }
    }
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3275 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, elementType3233);
    target3274 = $tmp3275;
    if (((panda$core$Bit) { target3274 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3274->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3277 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3276 = $tmp3277;
    if (((panda$core$Bit) { body3276 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3279 = (panda$collections$Array*) malloc(40);
    $tmp3279->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3279->refCount.value = 1;
    panda$collections$Array$init($tmp3279);
    children3278 = $tmp3279;
    panda$collections$Array$add$panda$collections$Array$T(children3278, ((panda$core$Object*) target3274->target));
    panda$collections$Array$add$panda$collections$Array$T(children3278, ((panda$core$Object*) list3234));
    panda$collections$Array$add$panda$collections$Array$T(children3278, ((panda$core$Object*) body3276));
    org$pandalanguage$pandac$IRNode* $tmp3281 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3281->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3281->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3281, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3278));
    return $tmp3281;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3290;
    org$pandalanguage$pandac$Variable* targetVar3294;
    panda$collections$Array* subtypes3295;
    org$pandalanguage$pandac$Type* iterType3299;
    org$pandalanguage$pandac$Variable* iter3311;
    panda$collections$Array* statements3316;
    panda$collections$Array* declChildren3319;
    panda$collections$Array* varChildren3324;
    panda$collections$Array* whileChildren3331;
    org$pandalanguage$pandac$IRNode* done3334;
    org$pandalanguage$pandac$IRNode* notCall3341;
    panda$collections$Array* valueDeclChildren3346;
    org$pandalanguage$pandac$IRNode* next3351;
    panda$collections$Array* valueVarChildren3358;
    org$pandalanguage$pandac$IRNode* block3363;
    panda$collections$Array* blockChildren3365;
    panda$core$Bit $tmp3284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3283 = $tmp3284.value;
    if (!$tmp3283) goto $l3285;
    panda$core$Object* $tmp3286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3287 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3288 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3286), $tmp3287);
    $tmp3283 = $tmp3288.value;
    $l3285:;
    panda$core$Bit $tmp3289 = { $tmp3283 };
    PANDA_ASSERT($tmp3289.value);
    panda$core$Object* $tmp3291 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3292 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, ((panda$core$Int64) { 10001 }), NULL, ((org$pandalanguage$pandac$Type*) $tmp3291));
    target3290 = $tmp3292;
    if (((panda$core$Bit) { target3290 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3290->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3293.value);
    targetVar3294 = ((org$pandalanguage$pandac$Variable*) target3290->target->payload);
    panda$collections$Array* $tmp3296 = (panda$collections$Array*) malloc(40);
    $tmp3296->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3296->refCount.value = 1;
    panda$collections$Array$init($tmp3296);
    subtypes3295 = $tmp3296;
    org$pandalanguage$pandac$Type* $tmp3298 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3295, ((panda$core$Object*) $tmp3298));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3295, ((panda$core$Object*) target3290->target->type));
    org$pandalanguage$pandac$Type* $tmp3300 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3300->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3300->refCount.value = 1;
    panda$core$Object* $tmp3303 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3295, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3304 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3302, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3303)));
    panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3304, &$s3305);
    panda$core$Object* $tmp3307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3295, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3306, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3307)));
    panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3308, &$s3309);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3300, $tmp3310, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3295), ((panda$core$Bit) { true }));
    iterType3299 = $tmp3300;
    org$pandalanguage$pandac$Variable* $tmp3312 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3312->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3312->refCount.value = 1;
    panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3294)->name, &$s3314);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3312, p_iterator->position, ((panda$core$Int64) { 10001 }), $tmp3315, iterType3299);
    iter3311 = $tmp3312;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3311));
    panda$collections$Array* $tmp3317 = (panda$collections$Array*) malloc(40);
    $tmp3317->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3317->refCount.value = 1;
    panda$collections$Array$init($tmp3317);
    statements3316 = $tmp3317;
    panda$collections$Array* $tmp3320 = (panda$collections$Array*) malloc(40);
    $tmp3320->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3320->refCount.value = 1;
    panda$collections$Array$init($tmp3320);
    declChildren3319 = $tmp3320;
    org$pandalanguage$pandac$IRNode* $tmp3322 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3322->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3322->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3322, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3311->type, iter3311);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3319, ((panda$core$Object*) $tmp3322));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3319, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3325 = (panda$collections$Array*) malloc(40);
    $tmp3325->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3325->refCount.value = 1;
    panda$collections$Array$init($tmp3325);
    varChildren3324 = $tmp3325;
    org$pandalanguage$pandac$IRNode* $tmp3327 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3327->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3327->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3327, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3311)->position, ((panda$collections$ListView*) declChildren3319));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3324, ((panda$core$Object*) $tmp3327));
    org$pandalanguage$pandac$IRNode* $tmp3329 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3329->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3329->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3329, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3311)->position, ((panda$collections$ListView*) varChildren3324));
    panda$collections$Array$add$panda$collections$Array$T(statements3316, ((panda$core$Object*) $tmp3329));
    panda$collections$Array* $tmp3332 = (panda$collections$Array*) malloc(40);
    $tmp3332->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3332->refCount.value = 1;
    panda$collections$Array$init($tmp3332);
    whileChildren3331 = $tmp3332;
    org$pandalanguage$pandac$IRNode* $tmp3335 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3335->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3335->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3335, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3311)->position, iter3311->type, iter3311);
    panda$collections$Array* $tmp3338 = (panda$collections$Array*) malloc(40);
    $tmp3338->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3338->refCount.value = 1;
    panda$collections$Array$init($tmp3338);
    org$pandalanguage$pandac$IRNode* $tmp3340 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3335, &$s3337, ((panda$collections$ListView*) $tmp3338), NULL);
    done3334 = $tmp3340;
    if (((panda$core$Bit) { done3334 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3343 = (panda$collections$Array*) malloc(40);
    $tmp3343->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3343->refCount.value = 1;
    panda$collections$Array$init($tmp3343);
    org$pandalanguage$pandac$IRNode* $tmp3345 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3334, &$s3342, ((panda$collections$ListView*) $tmp3343), NULL);
    notCall3341 = $tmp3345;
    if (((panda$core$Bit) { notCall3341 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3331, ((panda$core$Object*) notCall3341));
    panda$collections$Array* $tmp3347 = (panda$collections$Array*) malloc(40);
    $tmp3347->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3347->refCount.value = 1;
    panda$collections$Array$init($tmp3347);
    valueDeclChildren3346 = $tmp3347;
    org$pandalanguage$pandac$IRNode* $tmp3349 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3349->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3349->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3349, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3294->type, targetVar3294);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3346, ((panda$core$Object*) $tmp3349));
    org$pandalanguage$pandac$IRNode* $tmp3352 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3352->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3352->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3352, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3311->type, iter3311);
    panda$collections$Array* $tmp3355 = (panda$collections$Array*) malloc(40);
    $tmp3355->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3355->refCount.value = 1;
    panda$collections$Array$init($tmp3355);
    org$pandalanguage$pandac$IRNode* $tmp3357 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3352, &$s3354, ((panda$collections$ListView*) $tmp3355), NULL);
    next3351 = $tmp3357;
    PANDA_ASSERT(((panda$core$Bit) { next3351 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3346, ((panda$core$Object*) next3351));
    panda$collections$Array* $tmp3359 = (panda$collections$Array*) malloc(40);
    $tmp3359->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3359->refCount.value = 1;
    panda$collections$Array$init($tmp3359);
    valueVarChildren3358 = $tmp3359;
    org$pandalanguage$pandac$IRNode* $tmp3361 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3361->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3361->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3361, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3346));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3358, ((panda$core$Object*) $tmp3361));
    org$pandalanguage$pandac$IRNode* $tmp3364 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3363 = $tmp3364;
    if (((panda$core$Bit) { block3363 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3366 = (panda$collections$Array*) malloc(40);
    $tmp3366->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3366->refCount.value = 1;
    panda$collections$Array$init($tmp3366);
    blockChildren3365 = $tmp3366;
    org$pandalanguage$pandac$IRNode* $tmp3368 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3368->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3368->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3368, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3358));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3365, ((panda$core$Object*) $tmp3368));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3365, ((panda$collections$CollectionView*) block3363->children));
    org$pandalanguage$pandac$IRNode* $tmp3370 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3370->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3370->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3370, ((panda$core$Int64) { 1000 }), block3363->position, ((panda$collections$ListView*) blockChildren3365));
    block3363 = $tmp3370;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3331, ((panda$core$Object*) block3363));
    org$pandalanguage$pandac$IRNode* $tmp3372 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3372->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3372->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3372, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3331));
    panda$collections$Array$add$panda$collections$Array$T(statements3316, ((panda$core$Object*) $tmp3372));
    org$pandalanguage$pandac$IRNode* $tmp3374 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3374->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3374->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3374, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3316));
    return $tmp3374;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3379;
    org$pandalanguage$pandac$SymbolTable* symbols3382;
    org$pandalanguage$pandac$IRNode* result3385;
    panda$core$Bit found3399;
    panda$collections$Iterator* intf$Iter3400;
    org$pandalanguage$pandac$Type* intf3413;
    org$pandalanguage$pandac$IRNode* iterator3425;
    org$pandalanguage$pandac$IRNode* iterable3437;
    org$pandalanguage$pandac$IRNode* iterator3439;
    panda$core$Bit $tmp3376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3376.value);
    panda$core$Int64 $tmp3377 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3377, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3378.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3380 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3381 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3380));
    list3379 = $tmp3381;
    if (((panda$core$Bit) { list3379 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3383 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3383->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3383->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3383, self->symbolTable);
    symbols3382 = $tmp3383;
    self->symbolTable = symbols3382;
    panda$core$Bit $tmp3388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3379->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3387 = $tmp3388.value;
    if ($tmp3387) goto $l3389;
    panda$core$Bit $tmp3390 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3379->type);
    $tmp3387 = $tmp3390.value;
    $l3389:;
    panda$core$Bit $tmp3391 = { $tmp3387 };
    bool $tmp3386 = $tmp3391.value;
    if ($tmp3386) goto $l3392;
    panda$core$Bit $tmp3393 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3379->type);
    $tmp3386 = $tmp3393.value;
    $l3392:;
    panda$core$Bit $tmp3394 = { $tmp3386 };
    if ($tmp3394.value) {
    {
        panda$core$Object* $tmp3395 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3396 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3397 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3395), list3379, ((org$pandalanguage$pandac$ASTNode*) $tmp3396));
        result3385 = $tmp3397;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3398 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3379);
        list3379 = $tmp3398;
        if (((panda$core$Bit) { list3379 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3399 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3401 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3379->type);
            ITable* $tmp3402 = ((panda$collections$Iterable*) $tmp3401)->$class->itable;
            while ($tmp3402->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3402 = $tmp3402->next;
            }
            $fn3404 $tmp3403 = $tmp3402->methods[0];
            panda$collections$Iterator* $tmp3405 = $tmp3403(((panda$collections$Iterable*) $tmp3401));
            intf$Iter3400 = $tmp3405;
            $l3406:;
            ITable* $tmp3408 = intf$Iter3400->$class->itable;
            while ($tmp3408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3408 = $tmp3408->next;
            }
            $fn3410 $tmp3409 = $tmp3408->methods[0];
            panda$core$Bit $tmp3411 = $tmp3409(intf$Iter3400);
            panda$core$Bit $tmp3412 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3411);
            if (!$tmp3412.value) goto $l3407;
            {
                ITable* $tmp3414 = intf$Iter3400->$class->itable;
                while ($tmp3414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3414 = $tmp3414->next;
                }
                $fn3416 $tmp3415 = $tmp3414->methods[1];
                panda$core$Object* $tmp3417 = $tmp3415(intf$Iter3400);
                intf3413 = ((org$pandalanguage$pandac$Type*) $tmp3417);
                panda$core$Bit $tmp3419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3413->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3418 = $tmp3419.value;
                if (!$tmp3418) goto $l3420;
                panda$core$Object* $tmp3421 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3413->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3422 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3423 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3421), $tmp3422);
                $tmp3418 = $tmp3423.value;
                $l3420:;
                panda$core$Bit $tmp3424 = { $tmp3418 };
                if ($tmp3424.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3426 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3379, intf3413);
                    iterator3425 = $tmp3426;
                    panda$core$Object* $tmp3427 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3428 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3429 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3427), iterator3425, ((org$pandalanguage$pandac$ASTNode*) $tmp3428));
                    result3385 = $tmp3429;
                    found3399 = ((panda$core$Bit) { true });
                    goto $l3407;
                }
                }
                panda$core$Bit $tmp3431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3413->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3430 = $tmp3431.value;
                if (!$tmp3430) goto $l3432;
                panda$core$Object* $tmp3433 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3413->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3434 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3435 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3433), $tmp3434);
                $tmp3430 = $tmp3435.value;
                $l3432:;
                panda$core$Bit $tmp3436 = { $tmp3430 };
                if ($tmp3436.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3438 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3379, intf3413);
                    iterable3437 = $tmp3438;
                    panda$collections$Array* $tmp3441 = (panda$collections$Array*) malloc(40);
                    $tmp3441->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3441->refCount.value = 1;
                    panda$collections$Array$init($tmp3441);
                    org$pandalanguage$pandac$IRNode* $tmp3443 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3437, &$s3440, ((panda$collections$ListView*) $tmp3441));
                    iterator3439 = $tmp3443;
                    panda$core$Object* $tmp3444 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3445 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3446 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3444), iterator3439, ((org$pandalanguage$pandac$ASTNode*) $tmp3445));
                    result3385 = $tmp3446;
                    found3399 = ((panda$core$Bit) { true });
                    goto $l3407;
                }
                }
            }
            goto $l3406;
            $l3407:;
        }
        panda$core$Bit $tmp3447 = panda$core$Bit$$NOT$R$panda$core$Bit(found3399);
        if ($tmp3447.value) {
        {
            panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3448, ((panda$core$Object*) list3379->type));
            panda$core$String* $tmp3451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3449, &$s3450);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3379->position, $tmp3451);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3382->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3452);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3385;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3456;
    org$pandalanguage$pandac$IRNode* stmt3461;
    panda$collections$Array* children3464;
    panda$core$Bit $tmp3453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3453.value);
    panda$core$Int64 $tmp3454 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3454, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3455.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3457 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3458 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3457));
    org$pandalanguage$pandac$Type* $tmp3459 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3460 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3458, $tmp3459);
    test3456 = $tmp3460;
    if (((panda$core$Bit) { test3456 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3462 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3463 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3462));
    stmt3461 = $tmp3463;
    if (((panda$core$Bit) { stmt3461 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3465 = (panda$collections$Array*) malloc(40);
    $tmp3465->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3465->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3465, ((panda$core$Int64) { 2 }));
    children3464 = $tmp3465;
    panda$collections$Array$add$panda$collections$Array$T(children3464, ((panda$core$Object*) test3456));
    panda$collections$Array$add$panda$collections$Array$T(children3464, ((panda$core$Object*) stmt3461));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3467 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3467->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3467->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3467, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children3464));
    return $tmp3467;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt3472;
    org$pandalanguage$pandac$IRNode* test3475;
    panda$collections$Array* children3480;
    panda$core$Bit $tmp3469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp3469.value);
    panda$core$Int64 $tmp3470 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3470, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3471.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp3473 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3474 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3473));
    stmt3472 = $tmp3474;
    if (((panda$core$Bit) { stmt3472 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp3476 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3477 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3476));
    org$pandalanguage$pandac$Type* $tmp3478 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3479 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3477, $tmp3478);
    test3475 = $tmp3479;
    if (((panda$core$Bit) { test3475 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3481 = (panda$collections$Array*) malloc(40);
    $tmp3481->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3481->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3481, ((panda$core$Int64) { 2 }));
    children3480 = $tmp3481;
    panda$collections$Array$add$panda$collections$Array$T(children3480, ((panda$core$Object*) stmt3472));
    panda$collections$Array$add$panda$collections$Array$T(children3480, ((panda$core$Object*) test3475));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3483 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3483->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3483->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3483, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children3480));
    return $tmp3483;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt3488;
    panda$collections$Array* children3491;
    panda$core$Bit $tmp3485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp3485.value);
    panda$core$Int64 $tmp3486 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3486, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3487.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp3489 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3490 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3489));
    stmt3488 = $tmp3490;
    if (((panda$core$Bit) { stmt3488 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3492 = (panda$collections$Array*) malloc(40);
    $tmp3492->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3492->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp3492, ((panda$core$Int64) { 1 }));
    children3491 = $tmp3492;
    panda$collections$Array$add$panda$collections$Array$T(children3491, ((panda$core$Object*) stmt3488));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp3494 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3494->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3494->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3494, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children3491));
    return $tmp3494;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, panda$core$Int64 p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value3496;
    org$pandalanguage$pandac$Type* type3500;
    org$pandalanguage$pandac$Variable* v3511;
    value3496 = p_rawValue;
    bool $tmp3497 = ((panda$core$Bit) { value3496 == NULL }).value;
    if ($tmp3497) goto $l3498;
    $tmp3497 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l3498:;
    panda$core$Bit $tmp3499 = { $tmp3497 };
    PANDA_ASSERT($tmp3499.value);
    switch (p_t->kind.value) {
        case 106:
        {
            panda$core$Int64 $tmp3501 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp3502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3501, ((panda$core$Int64) { 1 }));
            if ($tmp3502.value) {
            {
                panda$core$Object* $tmp3503 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3504 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3503));
                org$pandalanguage$pandac$Type* $tmp3505 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3504);
                type3500 = $tmp3505;
            }
            }
            else {
            if (((panda$core$Bit) { value3496 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3506 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3496);
                value3496 = $tmp3506;
                if (((panda$core$Bit) { value3496 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp3507 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value3496);
                type3500 = $tmp3507;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type3500 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s3508);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value3496 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3509 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3496, type3500);
                value3496 = $tmp3509;
                if (((panda$core$Bit) { value3496 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp3510 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value3496->type, type3500);
                PANDA_ASSERT($tmp3510.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp3512 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp3512->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp3512->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3512, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type3500);
            v3511 = $tmp3512;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v3511));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3514 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp3514->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp3514->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp3516 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3516->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3516->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3516, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v3511)->position, v3511->type, v3511);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp3514, $tmp3516, value3496);
            return $tmp3514;
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
    org$pandalanguage$pandac$IRNode* value3526;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3531;
    panda$collections$Array* children3534;
    org$pandalanguage$pandac$Variable* v3538;
    panda$core$Bit $tmp3518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp3518.value);
    panda$core$Int64 $tmp3520 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3520, ((panda$core$Int64) { 1 }));
    bool $tmp3519 = $tmp3521.value;
    if ($tmp3519) goto $l3522;
    panda$core$Int64 $tmp3523 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3523, ((panda$core$Int64) { 2 }));
    $tmp3519 = $tmp3524.value;
    $l3522:;
    panda$core$Bit $tmp3525 = { $tmp3519 };
    PANDA_ASSERT($tmp3525.value);
    panda$core$Int64 $tmp3527 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3527, ((panda$core$Int64) { 2 }));
    if ($tmp3528.value) {
    {
        panda$core$Object* $tmp3529 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3530 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3529));
        value3526 = $tmp3530;
        if (((panda$core$Bit) { value3526 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value3526 = NULL;
    }
    }
    panda$core$Object* $tmp3532 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3533 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3532), p_varKind, value3526, NULL);
    target3531 = $tmp3533;
    if (((panda$core$Bit) { target3531 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3535 = (panda$collections$Array*) malloc(40);
    $tmp3535->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3535->refCount.value = 1;
    panda$collections$Array$init($tmp3535);
    children3534 = $tmp3535;
    panda$collections$Array$add$panda$collections$Array$T(children3534, ((panda$core$Object*) target3531->target));
    if (((panda$core$Bit) { target3531->value != NULL }).value) {
    {
        panda$core$Bit $tmp3537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3531->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp3537.value);
        v3538 = ((org$pandalanguage$pandac$Variable*) target3531->target->payload);
        v3538->initialValue = target3531->value;
        panda$collections$Array$add$panda$collections$Array$T(children3534, ((panda$core$Object*) target3531->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3539 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3539->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3539->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3539, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children3534));
    return $tmp3539;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found3542;
    panda$collections$Iterator* label$Iter3543;
    panda$core$String* label3555;
    panda$core$Bit $tmp3541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp3541.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found3542 = ((panda$core$Bit) { false });
        {
            ITable* $tmp3544 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp3544->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3544 = $tmp3544->next;
            }
            $fn3546 $tmp3545 = $tmp3544->methods[0];
            panda$collections$Iterator* $tmp3547 = $tmp3545(((panda$collections$Iterable*) self->loops));
            label$Iter3543 = $tmp3547;
            $l3548:;
            ITable* $tmp3550 = label$Iter3543->$class->itable;
            while ($tmp3550->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3550 = $tmp3550->next;
            }
            $fn3552 $tmp3551 = $tmp3550->methods[0];
            panda$core$Bit $tmp3553 = $tmp3551(label$Iter3543);
            panda$core$Bit $tmp3554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3553);
            if (!$tmp3554.value) goto $l3549;
            {
                ITable* $tmp3556 = label$Iter3543->$class->itable;
                while ($tmp3556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3556 = $tmp3556->next;
                }
                $fn3558 $tmp3557 = $tmp3556->methods[1];
                panda$core$Object* $tmp3559 = $tmp3557(label$Iter3543);
                label3555 = ((panda$core$String*) $tmp3559);
                bool $tmp3560 = ((panda$core$Bit) { label3555 != NULL }).value;
                if (!$tmp3560) goto $l3561;
                panda$core$Bit $tmp3562 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3555, ((panda$core$String*) p_b->payload));
                $tmp3560 = $tmp3562.value;
                $l3561:;
                panda$core$Bit $tmp3563 = { $tmp3560 };
                if ($tmp3563.value) {
                {
                    found3542 = ((panda$core$Bit) { true });
                    goto $l3549;
                }
                }
            }
            goto $l3548;
            $l3549:;
        }
        panda$core$Bit $tmp3564 = panda$core$Bit$$NOT$R$panda$core$Bit(found3542);
        if ($tmp3564.value) {
        {
            panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3565, p_b->payload);
            panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3566, &$s3567);
            panda$core$String* $tmp3570 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3569, p_b->payload);
            panda$core$String* $tmp3572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3570, &$s3571);
            panda$core$String* $tmp3573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3568, $tmp3572);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp3573);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3574 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3574, ((panda$core$Int64) { 0 }));
    if ($tmp3575.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s3576);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3577 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3577->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3577->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3577, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp3577;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found3580;
    panda$collections$Iterator* label$Iter3581;
    panda$core$String* label3593;
    panda$core$Bit $tmp3579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp3579.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
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
                panda$core$Bit $tmp3600 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label3593, ((panda$core$String*) p_c->payload));
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
            panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3603, p_c->payload);
            panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3604, &$s3605);
            panda$core$String* $tmp3608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3607, p_c->payload);
            panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3608, &$s3609);
            panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3606, $tmp3610);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp3611);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp3612 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp3613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3612, ((panda$core$Int64) { 0 }));
    if ($tmp3613.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s3614);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3615 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3615->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3615->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3615, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp3615;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value3624;
    panda$collections$Array* children3629;
    panda$core$Bit $tmp3617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp3617.value);
    panda$core$Int64 $tmp3618 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3618, ((panda$core$Int64) { 1 }));
    if ($tmp3619.value) {
    {
        panda$core$Object* $tmp3620 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp3621 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3622 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3620)->returnType, $tmp3621);
        if ($tmp3622.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3623);
            return NULL;
        }
        }
        panda$core$Object* $tmp3625 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3626 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3625));
        panda$core$Object* $tmp3627 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp3628 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3626, ((org$pandalanguage$pandac$MethodDecl*) $tmp3627)->returnType);
        value3624 = $tmp3628;
        if (((panda$core$Bit) { value3624 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3630 = (panda$collections$Array*) malloc(40);
        $tmp3630->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3630->refCount.value = 1;
        panda$collections$Array$init($tmp3630);
        children3629 = $tmp3630;
        panda$collections$Array$add$panda$collections$Array$T(children3629, ((panda$core$Object*) value3624));
        org$pandalanguage$pandac$IRNode* $tmp3632 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3632->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3632->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3632, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children3629));
        return $tmp3632;
    }
    }
    panda$core$Int64 $tmp3634 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3634, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3635.value);
    panda$core$Object* $tmp3636 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp3637 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3638 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3636)->returnType, $tmp3637);
    if ($tmp3638.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s3639);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3640 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3640->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3640->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3640, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp3640;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test3650;
    org$pandalanguage$pandac$ClassDecl* bit3655;
    org$pandalanguage$pandac$Symbol* value3658;
    panda$collections$Array* fieldChildren3661;
    panda$collections$Array* children3667;
    org$pandalanguage$pandac$IRNode* msg3672;
    panda$core$Bit $tmp3642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp3642.value);
    panda$core$Int64 $tmp3644 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3644, ((panda$core$Int64) { 1 }));
    bool $tmp3643 = $tmp3645.value;
    if ($tmp3643) goto $l3646;
    panda$core$Int64 $tmp3647 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3647, ((panda$core$Int64) { 2 }));
    $tmp3643 = $tmp3648.value;
    $l3646:;
    panda$core$Bit $tmp3649 = { $tmp3643 };
    PANDA_ASSERT($tmp3649.value);
    panda$core$Object* $tmp3651 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3652 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3651));
    test3650 = $tmp3652;
    if (((panda$core$Bit) { test3650 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3653 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3654 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test3650, $tmp3653);
    test3650 = $tmp3654;
    if (((panda$core$Bit) { test3650 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3656 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3657 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp3656);
    bit3655 = $tmp3657;
    PANDA_ASSERT(((panda$core$Bit) { bit3655 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp3660 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit3655->symbolTable, &$s3659);
    value3658 = $tmp3660;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value3658));
    panda$collections$Array* $tmp3662 = (panda$collections$Array*) malloc(40);
    $tmp3662->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3662->refCount.value = 1;
    panda$collections$Array$init($tmp3662);
    fieldChildren3661 = $tmp3662;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren3661, ((panda$core$Object*) test3650));
    org$pandalanguage$pandac$IRNode* $tmp3664 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3664->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3664->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3666 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3664, ((panda$core$Int64) { 1026 }), p_a->position, $tmp3666, ((panda$core$Object*) value3658), ((panda$collections$ListView*) fieldChildren3661));
    test3650 = $tmp3664;
    panda$collections$Array* $tmp3668 = (panda$collections$Array*) malloc(40);
    $tmp3668->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3668->refCount.value = 1;
    panda$collections$Array$init($tmp3668);
    children3667 = $tmp3668;
    panda$collections$Array$add$panda$collections$Array$T(children3667, ((panda$core$Object*) test3650));
    panda$core$Int64 $tmp3670 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3670, ((panda$core$Int64) { 2 }));
    if ($tmp3671.value) {
    {
        panda$core$Object* $tmp3673 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3674 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3673));
        msg3672 = $tmp3674;
        if (((panda$core$Bit) { msg3672 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3675 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3676 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg3672, $tmp3675);
        msg3672 = $tmp3676;
        if (((panda$core$Bit) { msg3672 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3667, ((panda$core$Object*) msg3672));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3677 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3677->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3677->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3677, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children3667));
    return $tmp3677;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind3692;
    panda$core$Int64 varKind3693;
    panda$collections$Array* decls3694;
    panda$collections$Iterator* astDecl$Iter3697;
    org$pandalanguage$pandac$ASTNode* astDecl3709;
    org$pandalanguage$pandac$IRNode* decl3714;
    panda$core$Bit $tmp3682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp3681 = $tmp3682.value;
    if ($tmp3681) goto $l3683;
    panda$core$Bit $tmp3684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp3681 = $tmp3684.value;
    $l3683:;
    panda$core$Bit $tmp3685 = { $tmp3681 };
    bool $tmp3680 = $tmp3685.value;
    if ($tmp3680) goto $l3686;
    panda$core$Bit $tmp3687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp3680 = $tmp3687.value;
    $l3686:;
    panda$core$Bit $tmp3688 = { $tmp3680 };
    bool $tmp3679 = $tmp3688.value;
    if ($tmp3679) goto $l3689;
    panda$core$Bit $tmp3690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp3679 = $tmp3690.value;
    $l3689:;
    panda$core$Bit $tmp3691 = { $tmp3679 };
    PANDA_ASSERT($tmp3691.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind3692 = ((panda$core$Int64) { 1017 });
            varKind3693 = ((panda$core$Int64) { 10000 });
        }
        break;
        case 131:
        {
            nodeKind3692 = ((panda$core$Int64) { 1018 });
            varKind3693 = ((panda$core$Int64) { 10001 });
        }
        break;
        case 132:
        {
            nodeKind3692 = ((panda$core$Int64) { 1019 });
            varKind3693 = ((panda$core$Int64) { 10002 });
        }
        break;
        case 133:
        {
            nodeKind3692 = ((panda$core$Int64) { 1020 });
            varKind3693 = ((panda$core$Int64) { 10003 });
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp3695 = (panda$collections$Array*) malloc(40);
    $tmp3695->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3695->refCount.value = 1;
    panda$collections$Array$init($tmp3695);
    decls3694 = $tmp3695;
    {
        ITable* $tmp3698 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3698->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3698 = $tmp3698->next;
        }
        $fn3700 $tmp3699 = $tmp3698->methods[0];
        panda$collections$Iterator* $tmp3701 = $tmp3699(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter3697 = $tmp3701;
        $l3702:;
        ITable* $tmp3704 = astDecl$Iter3697->$class->itable;
        while ($tmp3704->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3704 = $tmp3704->next;
        }
        $fn3706 $tmp3705 = $tmp3704->methods[0];
        panda$core$Bit $tmp3707 = $tmp3705(astDecl$Iter3697);
        panda$core$Bit $tmp3708 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3707);
        if (!$tmp3708.value) goto $l3703;
        {
            ITable* $tmp3710 = astDecl$Iter3697->$class->itable;
            while ($tmp3710->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3710 = $tmp3710->next;
            }
            $fn3712 $tmp3711 = $tmp3710->methods[1];
            panda$core$Object* $tmp3713 = $tmp3711(astDecl$Iter3697);
            astDecl3709 = ((org$pandalanguage$pandac$ASTNode*) $tmp3713);
            org$pandalanguage$pandac$IRNode* $tmp3715 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$panda$core$Int64$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl3709, varKind3693);
            decl3714 = $tmp3715;
            if (((panda$core$Bit) { decl3714 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls3694, ((panda$core$Object*) decl3714));
        }
        goto $l3702;
        $l3703:;
    }
    org$pandalanguage$pandac$IRNode* $tmp3716 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3716->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3716->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3716, nodeKind3692, p_v->position, ((panda$collections$ListView*) decls3694));
    return $tmp3716;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target3718;
    panda$collections$Array* callChildren3721;
    org$pandalanguage$pandac$IRNode* testValue3724;
    org$pandalanguage$pandac$IRNode* $tmp3719 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3719->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3719->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3719, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target3718 = $tmp3719;
    panda$collections$Array* $tmp3722 = (panda$collections$Array*) malloc(40);
    $tmp3722->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3722->refCount.value = 1;
    panda$collections$Array$init($tmp3722);
    callChildren3721 = $tmp3722;
    org$pandalanguage$pandac$IRNode* $tmp3725 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue3724 = $tmp3725;
    if (((panda$core$Bit) { testValue3724 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren3721, ((panda$core$Object*) testValue3724));
    org$pandalanguage$pandac$IRNode* $tmp3727 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3718, &$s3726, ((panda$collections$ListView*) callChildren3721));
    return $tmp3727;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3736;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3740;
    org$pandalanguage$pandac$IRNode* nextTest3756;
    panda$collections$Array* callChildren3760;
    panda$collections$Array* statements3773;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3776;
    org$pandalanguage$pandac$IRNode* statement3791;
    panda$collections$Array* children3801;
    panda$core$Bit $tmp3728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3728.value);
    panda$core$Int64 $tmp3729 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3730 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3729, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3730.value);
    panda$core$Object* $tmp3731 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3731)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3732.value);
    panda$core$Object* $tmp3733 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3734 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3733)->children);
    panda$core$Bit $tmp3735 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3734, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3735.value);
    panda$core$Object* $tmp3737 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3738 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3737)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3739 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3738));
    test3736 = $tmp3739;
    if (((panda$core$Bit) { test3736 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3741 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3742 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3741)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3740, ((panda$core$Int64) { 1 }), $tmp3742, ((panda$core$Bit) { false }));
    int64_t $tmp3744 = $tmp3740.min.value;
    panda$core$Int64 i3743 = { $tmp3744 };
    int64_t $tmp3746 = $tmp3740.max.value;
    bool $tmp3747 = $tmp3740.inclusive.value;
    if ($tmp3747) goto $l3754; else goto $l3755;
    $l3754:;
    if ($tmp3744 <= $tmp3746) goto $l3748; else goto $l3750;
    $l3755:;
    if ($tmp3744 < $tmp3746) goto $l3748; else goto $l3750;
    $l3748:;
    {
        panda$core$Object* $tmp3757 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3758 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp3757)->children, i3743);
        org$pandalanguage$pandac$IRNode* $tmp3759 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp3758));
        nextTest3756 = $tmp3759;
        if (((panda$core$Bit) { nextTest3756 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3761 = (panda$collections$Array*) malloc(40);
        $tmp3761->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3761->refCount.value = 1;
        panda$collections$Array$init($tmp3761);
        callChildren3760 = $tmp3761;
        panda$collections$Array$add$panda$collections$Array$T(callChildren3760, ((panda$core$Object*) nextTest3756));
        org$pandalanguage$pandac$IRNode* $tmp3764 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test3736, &$s3763, ((panda$collections$ListView*) callChildren3760));
        test3736 = $tmp3764;
        if (((panda$core$Bit) { test3736 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l3751:;
    int64_t $tmp3766 = $tmp3746 - i3743.value;
    if ($tmp3747) goto $l3767; else goto $l3768;
    $l3767:;
    if ($tmp3766 >= 1) goto $l3765; else goto $l3750;
    $l3768:;
    if ($tmp3766 > 1) goto $l3765; else goto $l3750;
    $l3765:;
    i3743.value += 1;
    goto $l3748;
    $l3750:;
    org$pandalanguage$pandac$SymbolTable* $tmp3771 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3771->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3771->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3771, self->symbolTable);
    self->symbolTable = $tmp3771;
    panda$collections$Array* $tmp3774 = (panda$collections$Array*) malloc(40);
    $tmp3774->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3774->refCount.value = 1;
    panda$collections$Array$init($tmp3774);
    statements3773 = $tmp3774;
    panda$core$Int64 $tmp3777 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3776, ((panda$core$Int64) { 1 }), $tmp3777, ((panda$core$Bit) { false }));
    int64_t $tmp3779 = $tmp3776.min.value;
    panda$core$Int64 i3778 = { $tmp3779 };
    int64_t $tmp3781 = $tmp3776.max.value;
    bool $tmp3782 = $tmp3776.inclusive.value;
    if ($tmp3782) goto $l3789; else goto $l3790;
    $l3789:;
    if ($tmp3779 <= $tmp3781) goto $l3783; else goto $l3785;
    $l3790:;
    if ($tmp3779 < $tmp3781) goto $l3783; else goto $l3785;
    $l3783:;
    {
        panda$core$Object* $tmp3792 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3778);
        org$pandalanguage$pandac$IRNode* $tmp3793 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3792));
        statement3791 = $tmp3793;
        if (((panda$core$Bit) { statement3791 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3773, ((panda$core$Object*) statement3791));
    }
    $l3786:;
    int64_t $tmp3795 = $tmp3781 - i3778.value;
    if ($tmp3782) goto $l3796; else goto $l3797;
    $l3796:;
    if ($tmp3795 >= 1) goto $l3794; else goto $l3785;
    $l3797:;
    if ($tmp3795 > 1) goto $l3794; else goto $l3785;
    $l3794:;
    i3778.value += 1;
    goto $l3783;
    $l3785:;
    panda$core$Object* $tmp3800 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3800);
    panda$collections$Array* $tmp3802 = (panda$collections$Array*) malloc(40);
    $tmp3802->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3802->refCount.value = 1;
    panda$collections$Array$init($tmp3802);
    children3801 = $tmp3802;
    panda$collections$Array$add$panda$collections$Array$T(children3801, ((panda$core$Object*) test3736));
    org$pandalanguage$pandac$IRNode* $tmp3804 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3804->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3804->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3804, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3773));
    panda$collections$Array$add$panda$collections$Array$T(children3801, ((panda$core$Object*) $tmp3804));
    org$pandalanguage$pandac$IRNode* $tmp3806 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3806->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3806->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3806, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children3801));
    return $tmp3806;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children3808;
    org$pandalanguage$pandac$Variable* valueVar3811;
    panda$collections$Array* declChildren3821;
    panda$collections$Array* varChildren3826;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3833;
    org$pandalanguage$pandac$ASTNode* c3848;
    org$pandalanguage$pandac$IRNode* w3850;
    panda$collections$Array* statements3852;
    panda$collections$Iterator* astStatement$Iter3855;
    org$pandalanguage$pandac$ASTNode* astStatement3867;
    org$pandalanguage$pandac$IRNode* stmt3872;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp3882;
    panda$collections$Array* $tmp3809 = (panda$collections$Array*) malloc(40);
    $tmp3809->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3809->refCount.value = 1;
    panda$collections$Array$init($tmp3809);
    children3808 = $tmp3809;
    org$pandalanguage$pandac$Variable* $tmp3812 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3812->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3812->refCount.value = 1;
    panda$core$String* $tmp3815 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3814, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp3817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3815, &$s3816);
    panda$core$String* $tmp3818 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3817, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp3820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3818, &$s3819);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type($tmp3812, p_m->position, ((panda$core$Int64) { 10001 }), $tmp3820, p_value->type);
    valueVar3811 = $tmp3812;
    panda$collections$Array* $tmp3822 = (panda$collections$Array*) malloc(40);
    $tmp3822->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3822->refCount.value = 1;
    panda$collections$Array$init($tmp3822);
    declChildren3821 = $tmp3822;
    org$pandalanguage$pandac$IRNode* $tmp3824 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3824->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3824->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3824, ((panda$core$Int64) { 1016 }), p_value->position, valueVar3811->type, valueVar3811);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3821, ((panda$core$Object*) $tmp3824));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3821, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp3827 = (panda$collections$Array*) malloc(40);
    $tmp3827->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3827->refCount.value = 1;
    panda$collections$Array$init($tmp3827);
    varChildren3826 = $tmp3827;
    org$pandalanguage$pandac$IRNode* $tmp3829 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3829->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3829->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3829, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar3811)->position, ((panda$collections$ListView*) declChildren3821));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3826, ((panda$core$Object*) $tmp3829));
    org$pandalanguage$pandac$IRNode* $tmp3831 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3831->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3831->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3831, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar3811)->position, ((panda$collections$ListView*) varChildren3826));
    panda$collections$Array$add$panda$collections$Array$T(children3808, ((panda$core$Object*) $tmp3831));
    panda$core$Int64 $tmp3834 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3833, ((panda$core$Int64) { 1 }), $tmp3834, ((panda$core$Bit) { false }));
    int64_t $tmp3836 = $tmp3833.min.value;
    panda$core$Int64 i3835 = { $tmp3836 };
    int64_t $tmp3838 = $tmp3833.max.value;
    bool $tmp3839 = $tmp3833.inclusive.value;
    if ($tmp3839) goto $l3846; else goto $l3847;
    $l3846:;
    if ($tmp3836 <= $tmp3838) goto $l3840; else goto $l3842;
    $l3847:;
    if ($tmp3836 < $tmp3838) goto $l3840; else goto $l3842;
    $l3840:;
    {
        panda$core$Object* $tmp3849 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3835);
        c3848 = ((org$pandalanguage$pandac$ASTNode*) $tmp3849);
        switch (c3848->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp3851 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar3811, c3848);
                w3850 = $tmp3851;
                if (((panda$core$Bit) { w3850 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3808, ((panda$core$Object*) w3850));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp3853 = (panda$collections$Array*) malloc(40);
                $tmp3853->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3853->refCount.value = 1;
                panda$collections$Array$init($tmp3853);
                statements3852 = $tmp3853;
                {
                    ITable* $tmp3856 = ((panda$collections$Iterable*) c3848->children)->$class->itable;
                    while ($tmp3856->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp3856 = $tmp3856->next;
                    }
                    $fn3858 $tmp3857 = $tmp3856->methods[0];
                    panda$collections$Iterator* $tmp3859 = $tmp3857(((panda$collections$Iterable*) c3848->children));
                    astStatement$Iter3855 = $tmp3859;
                    $l3860:;
                    ITable* $tmp3862 = astStatement$Iter3855->$class->itable;
                    while ($tmp3862->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp3862 = $tmp3862->next;
                    }
                    $fn3864 $tmp3863 = $tmp3862->methods[0];
                    panda$core$Bit $tmp3865 = $tmp3863(astStatement$Iter3855);
                    panda$core$Bit $tmp3866 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3865);
                    if (!$tmp3866.value) goto $l3861;
                    {
                        ITable* $tmp3868 = astStatement$Iter3855->$class->itable;
                        while ($tmp3868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3868 = $tmp3868->next;
                        }
                        $fn3870 $tmp3869 = $tmp3868->methods[1];
                        panda$core$Object* $tmp3871 = $tmp3869(astStatement$Iter3855);
                        astStatement3867 = ((org$pandalanguage$pandac$ASTNode*) $tmp3871);
                        org$pandalanguage$pandac$IRNode* $tmp3873 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement3867);
                        stmt3872 = $tmp3873;
                        if (((panda$core$Bit) { stmt3872 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements3852, ((panda$core$Object*) stmt3872));
                    }
                    goto $l3860;
                    $l3861:;
                }
                org$pandalanguage$pandac$IRNode* $tmp3874 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3874->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3874->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3874, ((panda$core$Int64) { 1000 }), c3848->position, ((panda$collections$ListView*) statements3852));
                panda$collections$Array$add$panda$collections$Array$T(children3808, ((panda$core$Object*) $tmp3874));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l3843:;
    int64_t $tmp3877 = $tmp3838 - i3835.value;
    if ($tmp3839) goto $l3878; else goto $l3879;
    $l3878:;
    if ($tmp3877 >= 1) goto $l3876; else goto $l3842;
    $l3879:;
    if ($tmp3877 > 1) goto $l3876; else goto $l3842;
    $l3876:;
    i3835.value += 1;
    goto $l3840;
    $l3842:;
    panda$core$Int64 $tmp3883 = panda$collections$Array$get_count$R$panda$core$Int64(children3808);
    panda$core$Int64 $tmp3884 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3883, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3882, $tmp3884, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp3886 = $tmp3882.start.value;
    panda$core$Int64 i3885 = { $tmp3886 };
    int64_t $tmp3888 = $tmp3882.end.value;
    int64_t $tmp3889 = $tmp3882.step.value;
    bool $tmp3890 = $tmp3882.inclusive.value;
    bool $tmp3897 = $tmp3889 > 0;
    if ($tmp3897) goto $l3895; else goto $l3896;
    $l3895:;
    if ($tmp3890) goto $l3898; else goto $l3899;
    $l3898:;
    if ($tmp3886 <= $tmp3888) goto $l3891; else goto $l3893;
    $l3899:;
    if ($tmp3886 < $tmp3888) goto $l3891; else goto $l3893;
    $l3896:;
    if ($tmp3890) goto $l3900; else goto $l3901;
    $l3900:;
    if ($tmp3886 >= $tmp3888) goto $l3891; else goto $l3893;
    $l3901:;
    if ($tmp3886 > $tmp3888) goto $l3891; else goto $l3893;
    $l3891:;
    {
        panda$core$Int64 $tmp3903 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3885, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3904 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3808, $tmp3903);
        panda$core$Bit $tmp3905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3904)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp3905.value);
        panda$core$Int64 $tmp3906 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3885, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3907 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3808, $tmp3906);
        panda$core$Int64 $tmp3908 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3907)->children);
        panda$core$Bit $tmp3909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3908, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp3909.value);
        panda$core$Int64 $tmp3910 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3885, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3911 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3808, $tmp3910);
        panda$core$Object* $tmp3912 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3808, i3885);
        panda$collections$Array$add$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3911)->children, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3912)));
        panda$core$Int64 $tmp3913 = panda$collections$Array$get_count$R$panda$core$Int64(children3808);
        panda$core$Int64 $tmp3914 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3913, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children3808, $tmp3914);
    }
    $l3894:;
    if ($tmp3897) goto $l3916; else goto $l3917;
    $l3916:;
    int64_t $tmp3918 = $tmp3888 - i3885.value;
    if ($tmp3890) goto $l3919; else goto $l3920;
    $l3919:;
    if ($tmp3918 >= $tmp3889) goto $l3915; else goto $l3893;
    $l3920:;
    if ($tmp3918 > $tmp3889) goto $l3915; else goto $l3893;
    $l3917:;
    int64_t $tmp3922 = i3885.value - $tmp3888;
    if ($tmp3890) goto $l3923; else goto $l3924;
    $l3923:;
    if ($tmp3922 >= -$tmp3889) goto $l3915; else goto $l3893;
    $l3924:;
    if ($tmp3922 > -$tmp3889) goto $l3915; else goto $l3893;
    $l3915:;
    i3885.value += $tmp3889;
    goto $l3891;
    $l3893:;
    org$pandalanguage$pandac$IRNode* $tmp3926 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3926->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3926->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3926, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children3808));
    return $tmp3926;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children3936;
    panda$collections$Iterator* expr$Iter3939;
    org$pandalanguage$pandac$ASTNode* expr3952;
    org$pandalanguage$pandac$IRNode* compiled3957;
    panda$collections$Array* statements3962;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3965;
    org$pandalanguage$pandac$IRNode* statement3980;
    panda$core$Bit $tmp3928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp3928.value);
    panda$core$Int64 $tmp3929 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3930 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3929, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3930.value);
    panda$core$Object* $tmp3931 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3931)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp3932.value);
    panda$core$Object* $tmp3933 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp3934 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp3933)->children);
    panda$core$Bit $tmp3935 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3934, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3935.value);
    panda$collections$Array* $tmp3937 = (panda$collections$Array*) malloc(40);
    $tmp3937->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3937->refCount.value = 1;
    panda$collections$Array$init($tmp3937);
    children3936 = $tmp3937;
    {
        panda$core$Object* $tmp3940 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp3941 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3940)->children)->$class->itable;
        while ($tmp3941->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3941 = $tmp3941->next;
        }
        $fn3943 $tmp3942 = $tmp3941->methods[0];
        panda$collections$Iterator* $tmp3944 = $tmp3942(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp3940)->children));
        expr$Iter3939 = $tmp3944;
        $l3945:;
        ITable* $tmp3947 = expr$Iter3939->$class->itable;
        while ($tmp3947->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3947 = $tmp3947->next;
        }
        $fn3949 $tmp3948 = $tmp3947->methods[0];
        panda$core$Bit $tmp3950 = $tmp3948(expr$Iter3939);
        panda$core$Bit $tmp3951 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3950);
        if (!$tmp3951.value) goto $l3946;
        {
            ITable* $tmp3953 = expr$Iter3939->$class->itable;
            while ($tmp3953->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3953 = $tmp3953->next;
            }
            $fn3955 $tmp3954 = $tmp3953->methods[1];
            panda$core$Object* $tmp3956 = $tmp3954(expr$Iter3939);
            expr3952 = ((org$pandalanguage$pandac$ASTNode*) $tmp3956);
            org$pandalanguage$pandac$IRNode* $tmp3958 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr3952);
            org$pandalanguage$pandac$IRNode* $tmp3959 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3958, p_type);
            compiled3957 = $tmp3959;
            if (((panda$core$Bit) { compiled3957 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children3936, ((panda$core$Object*) compiled3957));
        }
        goto $l3945;
        $l3946:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3960 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3960->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3960->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3960, self->symbolTable);
    self->symbolTable = $tmp3960;
    panda$collections$Array* $tmp3963 = (panda$collections$Array*) malloc(40);
    $tmp3963->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3963->refCount.value = 1;
    panda$collections$Array$init($tmp3963);
    statements3962 = $tmp3963;
    panda$core$Int64 $tmp3966 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3965, ((panda$core$Int64) { 1 }), $tmp3966, ((panda$core$Bit) { false }));
    int64_t $tmp3968 = $tmp3965.min.value;
    panda$core$Int64 i3967 = { $tmp3968 };
    int64_t $tmp3970 = $tmp3965.max.value;
    bool $tmp3971 = $tmp3965.inclusive.value;
    if ($tmp3971) goto $l3978; else goto $l3979;
    $l3978:;
    if ($tmp3968 <= $tmp3970) goto $l3972; else goto $l3974;
    $l3979:;
    if ($tmp3968 < $tmp3970) goto $l3972; else goto $l3974;
    $l3972:;
    {
        panda$core$Object* $tmp3981 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i3967);
        org$pandalanguage$pandac$IRNode* $tmp3982 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3981));
        statement3980 = $tmp3982;
        if (((panda$core$Bit) { statement3980 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements3962, ((panda$core$Object*) statement3980));
    }
    $l3975:;
    int64_t $tmp3984 = $tmp3970 - i3967.value;
    if ($tmp3971) goto $l3985; else goto $l3986;
    $l3985:;
    if ($tmp3984 >= 1) goto $l3983; else goto $l3974;
    $l3986:;
    if ($tmp3984 > 1) goto $l3983; else goto $l3974;
    $l3983:;
    i3967.value += 1;
    goto $l3972;
    $l3974:;
    panda$core$Object* $tmp3989 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3989);
    org$pandalanguage$pandac$IRNode* $tmp3990 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3990->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3990->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3990, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements3962));
    panda$collections$Array$add$panda$collections$Array$T(children3936, ((panda$core$Object*) $tmp3990));
    org$pandalanguage$pandac$IRNode* $tmp3992 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3992->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3992->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3992, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children3936));
    return $tmp3992;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children3995;
    panda$collections$Array* statements4000;
    panda$collections$Iterator* s$Iter4003;
    org$pandalanguage$pandac$ASTNode* s4015;
    org$pandalanguage$pandac$IRNode* statement4020;
    panda$core$Bit $tmp3994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp3994.value);
    panda$collections$Array* $tmp3996 = (panda$collections$Array*) malloc(40);
    $tmp3996->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3996->refCount.value = 1;
    panda$collections$Array$init($tmp3996);
    children3995 = $tmp3996;
    org$pandalanguage$pandac$SymbolTable* $tmp3998 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp3998->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3998->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3998, self->symbolTable);
    self->symbolTable = $tmp3998;
    panda$collections$Array* $tmp4001 = (panda$collections$Array*) malloc(40);
    $tmp4001->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4001->refCount.value = 1;
    panda$collections$Array$init($tmp4001);
    statements4000 = $tmp4001;
    {
        ITable* $tmp4004 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4004->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4004 = $tmp4004->next;
        }
        $fn4006 $tmp4005 = $tmp4004->methods[0];
        panda$collections$Iterator* $tmp4007 = $tmp4005(((panda$collections$Iterable*) p_o->children));
        s$Iter4003 = $tmp4007;
        $l4008:;
        ITable* $tmp4010 = s$Iter4003->$class->itable;
        while ($tmp4010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4010 = $tmp4010->next;
        }
        $fn4012 $tmp4011 = $tmp4010->methods[0];
        panda$core$Bit $tmp4013 = $tmp4011(s$Iter4003);
        panda$core$Bit $tmp4014 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4013);
        if (!$tmp4014.value) goto $l4009;
        {
            ITable* $tmp4016 = s$Iter4003->$class->itable;
            while ($tmp4016->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4016 = $tmp4016->next;
            }
            $fn4018 $tmp4017 = $tmp4016->methods[1];
            panda$core$Object* $tmp4019 = $tmp4017(s$Iter4003);
            s4015 = ((org$pandalanguage$pandac$ASTNode*) $tmp4019);
            org$pandalanguage$pandac$IRNode* $tmp4021 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4015);
            statement4020 = $tmp4021;
            if (((panda$core$Bit) { statement4020 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4000, ((panda$core$Object*) statement4020));
        }
        goto $l4008;
        $l4009:;
    }
    panda$core$Object* $tmp4022 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4022);
    org$pandalanguage$pandac$IRNode* $tmp4023 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4023->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4023->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4023, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4000));
    panda$collections$Array$add$panda$collections$Array$T(children3995, ((panda$core$Object*) $tmp4023));
    org$pandalanguage$pandac$IRNode* $tmp4025 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4025->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4025->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4025, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children3995));
    return $tmp4025;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4034;
    org$pandalanguage$pandac$Variable* v4043;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4028 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4027 = $tmp4028.value;
            if (!$tmp4027) goto $l4029;
            panda$core$Object* $tmp4030 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4031 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4030)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4032 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4031));
            $tmp4027 = $tmp4032.value;
            $l4029:;
            panda$core$Bit $tmp4033 = { $tmp4027 };
            return $tmp4033;
        }
        break;
        case 1026:
        {
            f4034 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4034->resolved.value);
            panda$core$Bit $tmp4037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4034->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4036 = $tmp4037.value;
            if (!$tmp4036) goto $l4038;
            $tmp4036 = ((panda$core$Bit) { f4034->value != NULL }).value;
            $l4038:;
            panda$core$Bit $tmp4039 = { $tmp4036 };
            bool $tmp4035 = $tmp4039.value;
            if (!$tmp4035) goto $l4040;
            panda$core$Bit $tmp4041 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4034->value);
            $tmp4035 = $tmp4041.value;
            $l4040:;
            panda$core$Bit $tmp4042 = { $tmp4035 };
            return $tmp4042;
        }
        break;
        case 1016:
        {
            v4043 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4043->varKind, ((panda$core$Int64) { 10001 }));
            bool $tmp4044 = $tmp4045.value;
            if ($tmp4044) goto $l4046;
            panda$core$Bit $tmp4049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4043->varKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4048 = $tmp4049.value;
            if (!$tmp4048) goto $l4050;
            $tmp4048 = ((panda$core$Bit) { v4043->initialValue != NULL }).value;
            $l4050:;
            panda$core$Bit $tmp4051 = { $tmp4048 };
            bool $tmp4047 = $tmp4051.value;
            if (!$tmp4047) goto $l4052;
            panda$core$Bit $tmp4053 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4043->initialValue);
            $tmp4047 = $tmp4053.value;
            $l4052:;
            panda$core$Bit $tmp4054 = { $tmp4047 };
            $tmp4044 = $tmp4054.value;
            $l4046:;
            panda$core$Bit $tmp4055 = { $tmp4044 };
            return $tmp4055;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4060;
    org$pandalanguage$pandac$Variable* v4062;
    panda$core$Bit $tmp4056 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4056.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4057 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4058 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4057)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4059 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4058));
            return $tmp4059;
        }
        break;
        case 1026:
        {
            f4060 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4061 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4060->value);
            return $tmp4061;
        }
        break;
        case 1016:
        {
            v4062 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4063 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4062->initialValue);
            return $tmp4063;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4067;
    panda$collections$Array* children4074;
    panda$collections$Iterator* rawWhen$Iter4077;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4078;
    org$pandalanguage$pandac$ASTNode* rawWhen4091;
    org$pandalanguage$pandac$IRNode* o4097;
    org$pandalanguage$pandac$IRNode* w4099;
    panda$core$Bit $tmp4064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4064.value);
    panda$core$Int64 $tmp4065 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4066 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4065, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4066.value);
    panda$core$Object* $tmp4068 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4069 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4068));
    org$pandalanguage$pandac$IRNode* $tmp4070 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4069);
    value4067 = $tmp4070;
    if (((panda$core$Bit) { value4067 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4071 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4067->type);
    panda$core$Bit $tmp4072 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4071);
    if ($tmp4072.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4073 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4067);
        return $tmp4073;
    }
    }
    panda$collections$Array* $tmp4075 = (panda$collections$Array*) malloc(40);
    $tmp4075->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4075->refCount.value = 1;
    panda$collections$Array$init($tmp4075);
    children4074 = $tmp4075;
    panda$collections$Array$add$panda$collections$Array$T(children4074, ((panda$core$Object*) value4067));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4078, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4079 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4078);
        ITable* $tmp4080 = ((panda$collections$Iterable*) $tmp4079)->$class->itable;
        while ($tmp4080->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4080 = $tmp4080->next;
        }
        $fn4082 $tmp4081 = $tmp4080->methods[0];
        panda$collections$Iterator* $tmp4083 = $tmp4081(((panda$collections$Iterable*) $tmp4079));
        rawWhen$Iter4077 = $tmp4083;
        $l4084:;
        ITable* $tmp4086 = rawWhen$Iter4077->$class->itable;
        while ($tmp4086->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4086 = $tmp4086->next;
        }
        $fn4088 $tmp4087 = $tmp4086->methods[0];
        panda$core$Bit $tmp4089 = $tmp4087(rawWhen$Iter4077);
        panda$core$Bit $tmp4090 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4089);
        if (!$tmp4090.value) goto $l4085;
        {
            ITable* $tmp4092 = rawWhen$Iter4077->$class->itable;
            while ($tmp4092->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4092 = $tmp4092->next;
            }
            $fn4094 $tmp4093 = $tmp4092->methods[1];
            panda$core$Object* $tmp4095 = $tmp4093(rawWhen$Iter4077);
            rawWhen4091 = ((org$pandalanguage$pandac$ASTNode*) $tmp4095);
            panda$core$Bit $tmp4096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4091->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4096.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4098 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4091);
                o4097 = $tmp4098;
                if (((panda$core$Bit) { o4097 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4074, ((panda$core$Object*) o4097));
                goto $l4084;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4100 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4067->type, rawWhen4091);
            w4099 = $tmp4100;
            if (((panda$core$Bit) { w4099 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4101 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w4099->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4102 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4101));
            panda$core$Bit $tmp4103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4102);
            if ($tmp4103.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4104 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4067);
                return $tmp4104;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4074, ((panda$core$Object*) w4099));
        }
        goto $l4084;
        $l4085:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4105 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4105->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4105->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4105, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4074));
    return $tmp4105;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4120;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4107 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4107;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4108 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4109 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4108);
            return $tmp4109;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4110 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4110;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4111 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4111;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4112 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4112;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4113 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4113;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4114 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4114;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4115 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4115;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4116 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4116;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4117 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4117;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4118 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4118;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4119 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4119;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4121 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4122 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4121);
            result4120 = $tmp4122;
            if (((panda$core$Bit) { result4120 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4123 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4120);
                result4120 = $tmp4123;
            }
            }
            return result4120;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4124 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4124;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4125;
    org$pandalanguage$pandac$SymbolTable* symbols4127;
    panda$collections$Iterator* p$Iter4130;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4142;
    panda$collections$Array* fieldInitializers4149;
    panda$collections$Iterator* f$Iter4153;
    org$pandalanguage$pandac$FieldDecl* f4166;
    panda$collections$Array* children4176;
    org$pandalanguage$pandac$IRNode* fieldRef4183;
    org$pandalanguage$pandac$IRNode* compiled4188;
    panda$collections$Array* children4192;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4125 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4126 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4126;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4128 = (org$pandalanguage$pandac$SymbolTable*) malloc(40);
    $tmp4128->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4128->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4128, self->symbolTable);
    symbols4127 = $tmp4128;
    {
        ITable* $tmp4131 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4131->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4131 = $tmp4131->next;
        }
        $fn4133 $tmp4132 = $tmp4131->methods[0];
        panda$collections$Iterator* $tmp4134 = $tmp4132(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4130 = $tmp4134;
        $l4135:;
        ITable* $tmp4137 = p$Iter4130->$class->itable;
        while ($tmp4137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4137 = $tmp4137->next;
        }
        $fn4139 $tmp4138 = $tmp4137->methods[0];
        panda$core$Bit $tmp4140 = $tmp4138(p$Iter4130);
        panda$core$Bit $tmp4141 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4140);
        if (!$tmp4141.value) goto $l4136;
        {
            ITable* $tmp4143 = p$Iter4130->$class->itable;
            while ($tmp4143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4143 = $tmp4143->next;
            }
            $fn4145 $tmp4144 = $tmp4143->methods[1];
            panda$core$Object* $tmp4146 = $tmp4144(p$Iter4130);
            p4142 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4146);
            org$pandalanguage$pandac$Variable* $tmp4147 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4147->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4147->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Int64($tmp4147, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$core$Int64) { 10001 }), p4142->name, p4142->type, ((panda$core$Int64) { 1820 }));
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4127, ((org$pandalanguage$pandac$Symbol*) $tmp4147));
        }
        goto $l4135;
        $l4136:;
    }
    self->symbolTable = symbols4127;
    panda$collections$Array* $tmp4150 = (panda$collections$Array*) malloc(40);
    $tmp4150->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4150->refCount.value = 1;
    panda$collections$Array$init($tmp4150);
    fieldInitializers4149 = $tmp4150;
    panda$core$Bit $tmp4152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    if ($tmp4152.value) {
    {
        {
            panda$core$Object* $tmp4154 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4155 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4154)->fields)->$class->itable;
            while ($tmp4155->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4155 = $tmp4155->next;
            }
            $fn4157 $tmp4156 = $tmp4155->methods[0];
            panda$collections$Iterator* $tmp4158 = $tmp4156(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4154)->fields));
            f$Iter4153 = $tmp4158;
            $l4159:;
            ITable* $tmp4161 = f$Iter4153->$class->itable;
            while ($tmp4161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4161 = $tmp4161->next;
            }
            $fn4163 $tmp4162 = $tmp4161->methods[0];
            panda$core$Bit $tmp4164 = $tmp4162(f$Iter4153);
            panda$core$Bit $tmp4165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4164);
            if (!$tmp4165.value) goto $l4160;
            {
                ITable* $tmp4167 = f$Iter4153->$class->itable;
                while ($tmp4167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4167 = $tmp4167->next;
                }
                $fn4169 $tmp4168 = $tmp4167->methods[1];
                panda$core$Object* $tmp4170 = $tmp4168(f$Iter4153);
                f4166 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4170);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4166);
                panda$core$Bit $tmp4172 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4166->annotations);
                panda$core$Bit $tmp4173 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4172);
                bool $tmp4171 = $tmp4173.value;
                if (!$tmp4171) goto $l4174;
                $tmp4171 = ((panda$core$Bit) { f4166->value != NULL }).value;
                $l4174:;
                panda$core$Bit $tmp4175 = { $tmp4171 };
                if ($tmp4175.value) {
                {
                    panda$collections$Array* $tmp4177 = (panda$collections$Array*) malloc(40);
                    $tmp4177->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4177->refCount.value = 1;
                    panda$collections$Array$init($tmp4177);
                    children4176 = $tmp4177;
                    org$pandalanguage$pandac$IRNode* $tmp4179 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4179->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4179->refCount.value = 1;
                    panda$core$Object* $tmp4181 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4182 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4181));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4179, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4182);
                    panda$collections$Array$add$panda$collections$Array$T(children4176, ((panda$core$Object*) $tmp4179));
                    org$pandalanguage$pandac$IRNode* $tmp4184 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4184->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4184->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4184, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4166->type, ((panda$core$Object*) f4166), ((panda$collections$ListView*) children4176));
                    fieldRef4183 = $tmp4184;
                    panda$collections$Array$clear(children4176);
                    panda$collections$Array$add$panda$collections$Array$T(children4176, ((panda$core$Object*) fieldRef4183));
                    panda$collections$Array$add$panda$collections$Array$T(children4176, ((panda$core$Object*) f4166->value));
                    org$pandalanguage$pandac$IRNode* $tmp4186 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4186->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4186->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4186, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4166)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4176));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4149, ((panda$core$Object*) $tmp4186));
                }
                }
            }
            goto $l4159;
            $l4160:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4189 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4188 = $tmp4189;
    if (((panda$core$Bit) { compiled4188 != NULL }).value) {
    {
        panda$core$Int64 $tmp4190 = panda$collections$Array$get_count$R$panda$core$Int64(fieldInitializers4149);
        panda$core$Bit $tmp4191 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4190, ((panda$core$Int64) { 0 }));
        if ($tmp4191.value) {
        {
            panda$collections$Array* $tmp4193 = (panda$collections$Array*) malloc(40);
            $tmp4193->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4193->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4193, ((panda$collections$ListView*) fieldInitializers4149));
            children4192 = $tmp4193;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4192, ((panda$collections$CollectionView*) compiled4188->children));
            org$pandalanguage$pandac$IRNode* $tmp4195 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4195->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4195->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4195, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4192));
            compiled4188 = $tmp4195;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4127) }).value);
    self->symbolTable = old4125;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4197 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4197.value) {
    {
        p_m->compiledBody = compiled4188;
    }
    }
    return compiled4188;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4198;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4199 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4198 = $tmp4199;
        if (((panda$core$Bit) { compiled4198 != NULL }).value) {
        {
            ITable* $tmp4200 = self->codeGenerator->$class->itable;
            while ($tmp4200->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4200 = $tmp4200->next;
            }
            $fn4202 $tmp4201 = $tmp4200->methods[3];
            $tmp4201(self->codeGenerator, p_m, compiled4198);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4203 = self->codeGenerator->$class->itable;
        while ($tmp4203->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4203 = $tmp4203->next;
        }
        $fn4205 $tmp4204 = $tmp4203->methods[2];
        $tmp4204(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4206;
    org$pandalanguage$pandac$ClassDecl* inner4218;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4207 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4207->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4207 = $tmp4207->next;
        }
        $fn4209 $tmp4208 = $tmp4207->methods[0];
        panda$collections$Iterator* $tmp4210 = $tmp4208(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4206 = $tmp4210;
        $l4211:;
        ITable* $tmp4213 = inner$Iter4206->$class->itable;
        while ($tmp4213->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4213 = $tmp4213->next;
        }
        $fn4215 $tmp4214 = $tmp4213->methods[0];
        panda$core$Bit $tmp4216 = $tmp4214(inner$Iter4206);
        panda$core$Bit $tmp4217 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4216);
        if (!$tmp4217.value) goto $l4212;
        {
            ITable* $tmp4219 = inner$Iter4206->$class->itable;
            while ($tmp4219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4219 = $tmp4219->next;
            }
            $fn4221 $tmp4220 = $tmp4219->methods[1];
            panda$core$Object* $tmp4222 = $tmp4220(inner$Iter4206);
            inner4218 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4222);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4218);
        }
        goto $l4211;
        $l4212:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4230;
    panda$collections$Iterator* m$Iter4235;
    org$pandalanguage$pandac$MethodDecl* m4247;
    org$pandalanguage$pandac$ClassDecl* next4257;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4223 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4223.value) {
    {
        ITable* $tmp4224 = self->codeGenerator->$class->itable;
        while ($tmp4224->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4224 = $tmp4224->next;
        }
        $fn4226 $tmp4225 = $tmp4224->methods[1];
        $tmp4225(self->codeGenerator, p_cl);
        ITable* $tmp4227 = self->codeGenerator->$class->itable;
        while ($tmp4227->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4227 = $tmp4227->next;
        }
        $fn4229 $tmp4228 = $tmp4227->methods[4];
        $tmp4228(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4230 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4231 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4231;
    ITable* $tmp4232 = self->codeGenerator->$class->itable;
    while ($tmp4232->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4232 = $tmp4232->next;
    }
    $fn4234 $tmp4233 = $tmp4232->methods[1];
    $tmp4233(self->codeGenerator, p_cl);
    {
        ITable* $tmp4236 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4236->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4236 = $tmp4236->next;
        }
        $fn4238 $tmp4237 = $tmp4236->methods[0];
        panda$collections$Iterator* $tmp4239 = $tmp4237(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4235 = $tmp4239;
        $l4240:;
        ITable* $tmp4242 = m$Iter4235->$class->itable;
        while ($tmp4242->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4242 = $tmp4242->next;
        }
        $fn4244 $tmp4243 = $tmp4242->methods[0];
        panda$core$Bit $tmp4245 = $tmp4243(m$Iter4235);
        panda$core$Bit $tmp4246 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4245);
        if (!$tmp4246.value) goto $l4241;
        {
            ITable* $tmp4248 = m$Iter4235->$class->itable;
            while ($tmp4248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4248 = $tmp4248->next;
            }
            $fn4250 $tmp4249 = $tmp4248->methods[1];
            panda$core$Object* $tmp4251 = $tmp4249(m$Iter4235);
            m4247 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4251);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4247);
        }
        goto $l4240;
        $l4241:;
    }
    ITable* $tmp4252 = self->codeGenerator->$class->itable;
    while ($tmp4252->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4252 = $tmp4252->next;
    }
    $fn4254 $tmp4253 = $tmp4252->methods[4];
    $tmp4253(self->codeGenerator, p_cl);
    self->symbolTable = old4230;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4255 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4256 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4255, ((panda$core$Int64) { 0 }));
    if ($tmp4256.value) {
    {
        panda$core$Object* $tmp4258 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4257 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4258);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4257);
    }
    }
    panda$core$Int64 $tmp4259 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4259, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4260.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4261;
    org$pandalanguage$pandac$ASTNode* parsed4265;
    panda$collections$Iterator* cl$Iter4269;
    org$pandalanguage$pandac$ClassDecl* cl4281;
    panda$core$Object* $tmp4262 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4261 = ((panda$collections$ListView*) $tmp4262);
    if (((panda$core$Bit) { result4261 == NULL }).value) {
    {
        panda$core$String* $tmp4263 = panda$io$File$readFully$R$panda$core$String(p_file);
        (($fn4264) self->parser->$class->vtable[2])(self->parser, p_file, $tmp4263);
        org$pandalanguage$pandac$ASTNode* $tmp4267 = (($fn4266) self->parser->$class->vtable[67])(self->parser);
        parsed4265 = $tmp4267;
        if (((panda$core$Bit) { parsed4265 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4268 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4265);
            result4261 = $tmp4268;
            {
                ITable* $tmp4270 = ((panda$collections$Iterable*) result4261)->$class->itable;
                while ($tmp4270->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4270 = $tmp4270->next;
                }
                $fn4272 $tmp4271 = $tmp4270->methods[0];
                panda$collections$Iterator* $tmp4273 = $tmp4271(((panda$collections$Iterable*) result4261));
                cl$Iter4269 = $tmp4273;
                $l4274:;
                ITable* $tmp4276 = cl$Iter4269->$class->itable;
                while ($tmp4276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4276 = $tmp4276->next;
                }
                $fn4278 $tmp4277 = $tmp4276->methods[0];
                panda$core$Bit $tmp4279 = $tmp4277(cl$Iter4269);
                panda$core$Bit $tmp4280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4279);
                if (!$tmp4280.value) goto $l4275;
                {
                    ITable* $tmp4282 = cl$Iter4269->$class->itable;
                    while ($tmp4282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4282 = $tmp4282->next;
                    }
                    $fn4284 $tmp4283 = $tmp4282->methods[1];
                    panda$core$Object* $tmp4285 = $tmp4283(cl$Iter4269);
                    cl4281 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4285);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4281)->name), ((panda$core$Object*) cl4281));
                }
                goto $l4274;
                $l4275:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4286 = (panda$collections$Array*) malloc(40);
            $tmp4286->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4286->refCount.value = 1;
            panda$collections$Array$init($tmp4286);
            result4261 = ((panda$collections$ListView*) $tmp4286);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4261));
    }
    }
    return result4261;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4288;
    panda$collections$Iterator* cl$Iter4290;
    org$pandalanguage$pandac$ClassDecl* cl4302;
    panda$collections$ListView* $tmp4289 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4288 = $tmp4289;
    {
        ITable* $tmp4291 = ((panda$collections$Iterable*) classes4288)->$class->itable;
        while ($tmp4291->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4291 = $tmp4291->next;
        }
        $fn4293 $tmp4292 = $tmp4291->methods[0];
        panda$collections$Iterator* $tmp4294 = $tmp4292(((panda$collections$Iterable*) classes4288));
        cl$Iter4290 = $tmp4294;
        $l4295:;
        ITable* $tmp4297 = cl$Iter4290->$class->itable;
        while ($tmp4297->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4297 = $tmp4297->next;
        }
        $fn4299 $tmp4298 = $tmp4297->methods[0];
        panda$core$Bit $tmp4300 = $tmp4298(cl$Iter4290);
        panda$core$Bit $tmp4301 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4300);
        if (!$tmp4301.value) goto $l4296;
        {
            ITable* $tmp4303 = cl$Iter4290->$class->itable;
            while ($tmp4303->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4303 = $tmp4303->next;
            }
            $fn4305 $tmp4304 = $tmp4303->methods[1];
            panda$core$Object* $tmp4306 = $tmp4304(cl$Iter4290);
            cl4302 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4306);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4302);
        }
        goto $l4295;
        $l4296:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4307 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4307)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4308 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4308;
        panda$core$String* $tmp4310 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4309, $tmp4310);
        panda$core$String* $tmp4313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4311, &$s4312);
        panda$core$String* $tmp4314 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4313, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4314, &$s4315);
        panda$core$String* $tmp4317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4316, p_msg);
        panda$core$String* $tmp4319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4317, &$s4318);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4319));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4320 = self->codeGenerator->$class->itable;
    while ($tmp4320->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4320 = $tmp4320->next;
    }
    $fn4322 $tmp4321 = $tmp4320->methods[5];
    $tmp4321(self->codeGenerator);
}

