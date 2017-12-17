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
#include "panda/core/Formattable.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/Console.h"
#include "panda/io/File.h"
#include "panda/collections/Set.h"
#include "org/pandalanguage/pandac/Methods.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/core/Int32.h"
#include "panda/core/Char32.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/core/UInt32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char16.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn127)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn172)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn179)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn194)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Object* (*$fn222)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn236)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn246)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn254)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn261)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn359)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn365)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn371)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn378)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn384)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn390)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn447)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn453)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn459)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn470)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn476)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn482)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn488)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn494)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn500)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn508)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn514)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn520)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn587)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn593)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn599)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn627)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn659)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn665)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn671)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn690)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn696)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn702)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn728)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn734)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn740)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn789)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn795)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn801)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn810)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn827)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn845)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn851)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn857)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn865)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn871)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn877)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn889)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn895)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn901)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn924)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn930)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn936)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn976)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn982)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn988)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1002)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1008)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1014)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1030)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1036)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1042)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1058)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1064)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1070)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1084)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1090)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1096)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1109)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1115)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1121)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1167)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1173)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1179)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1186)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1192)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1198)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1218)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1224)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1230)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1313)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1484)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1490)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1496)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1522)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1528)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1534)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1648)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1652)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1655)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1672)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1678)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1684)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1771)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1777)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1783)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1937)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2070)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2098)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2104)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2110)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2211)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2233)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2255)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2272)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2278)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2284)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2300)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2316)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2323)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2399)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2417)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2482)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2489)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2531)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2549)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2555)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2561)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2592)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2598)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2604)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2641)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2647)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2653)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2677)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2683)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2689)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3129)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3135)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3141)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3273)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3279)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3285)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3393)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3510)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3526)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3532)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3538)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3656)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3662)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3668)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3943)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3949)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3955)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4090)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4096)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4102)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4132)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4144)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4259)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4265)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4271)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4418)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4424)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4430)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4513)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4519)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4525)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4576)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4582)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4588)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4654)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4660)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4666)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4705)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4711)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4717)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4732)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4738)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4744)(panda$collections$Iterator*);
typedef void (*$fn4779)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn4782)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn4786)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4792)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4798)(panda$collections$Iterator*);
typedef void (*$fn4803)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4806)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4811)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4815)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4821)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4827)(panda$collections$Iterator*);
typedef void (*$fn4831)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn4847)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4853)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4859)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4868)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4874)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4880)(panda$collections$Iterator*);
typedef void (*$fn4896)(org$pandalanguage$pandac$CodeGenerator*);

static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x69\x6c\x74\x69\x6e\x5f\x62\x69\x74", 11, -6555968936556617710, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x6e\x74", 3, 1786200, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x55\x49\x6e\x74", 4, 192391885, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x52\x65\x61\x6c", 4, 189585289, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e", 28, 2859598962617493300, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 608517271074877699, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x57\x72\x69\x74\x65\x72", 34, -9068070593840742067, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, -1297284844070118424, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 4042060440237596131, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 1346324154505061576, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4b\x65\x79", 21, -4500515327555727959, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, 6616553759611337156, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, -5808190217954538403, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70", 21, -4500515327555707970, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77", 25, -7657589288547845907, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x57\x72\x69\x74\x65\x72", 27, 6892819694825741479, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x65\x74", 21, -4500515327555646356, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79", 34, 3135313918436209288, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, 4189143067940765470, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6f\x6d\x70\x61\x72\x61\x62\x6c\x65", 21, -5254568576296725552, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65", 20, 3987957135724734002, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x69\x6d\x70\x6c\x65\x52\x61\x6e\x67\x65", 22, -5809978584159753927, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d", 17, -1766462930141263461, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -1766462914121118321, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x52\x61\x6e\x64\x6f\x6d", 17, -791852923676021540, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x58\x6f\x72\x53\x68\x69\x66\x74\x31\x32\x38\x50\x6c\x75\x73", 26, 215641961116556169, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65", 16, 2336552278051400340, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 13, 4119532389314393493, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x64\x65\x6e\x74\x65\x64\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 29, 1042140495667569485, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 20, -2955417606099851271, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 30, 6529214259521028726, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, -2754778238192978458, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 27, -1871907680230610725, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 21, -3689739765115213222, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x50\x75\x73\x68\x62\x61\x63\x6b\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 28, -1415712807475310042, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 11, 5549333425848529514, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6e\x65\x72\x69\x63\x20", 9, 1451350792886950498, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6d\x65\x74\x65\x72", 9, 2317006540128003462, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x20\x27", 19, -7104957698969262010, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 9, 2306627197047234467, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x74\x79\x70\x65\x20\x27", 14, 1254433276954177894, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 2825576507357767077, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x65\x78\x74\x65\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 22, -8406128752343392811, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73\x20\x27", 12, 3706067405940886645, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6f\x66\x20\x63\x6c\x61\x73\x73\x20\x27", 12, -633030867692887714, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6f\x72\x65\x20\x61\x6e\x79\x20\x73\x75\x70\x65\x72\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 33, 4787050402069409712, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6d\x6f\x72\x65\x20\x74\x68\x61\x6e\x20\x6f\x6e\x65\x20\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73", 30, -759923653827872275, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x69\x73\x20\x6e\x6f\x74\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 27, -5223536864783252703, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73", 37, 7193225585860914176, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x2c\x20\x62\x75\x74\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68\x69\x6e\x67\x20", 38, -6085226934842474132, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x73\x74\x73\x20\x61\x6d\x6f\x6e\x67\x20\x69\x74\x73\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 33, -5331763662845728394, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6c\x64\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 36, 5735293162260763604, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6f\x72\x20\x61\x6d\x62\x69\x67\x75\x6f\x75\x73\x20\x6d\x61\x74\x63\x68\x20\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6c\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x63\x6f\x6e\x74\x61\x69\x6e\x20\x61\x20\x63\x6c\x61\x73\x73\x20\x6e\x61\x6d\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x66\x69\x6c\x65\x20\x6e\x61\x6d\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20\x61\x6e\x79\x20\x69\x6d\x70\x6f\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x30", 13, 2997537454666094288, NULL };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 15, -6693247693629641489, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x63\x6f\x6e\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x6e\x20\x6e\x6f\x6e\x2d\x63\x6c\x61\x73\x73\x20\x74\x79\x70\x65\x20\x27", 40, 2057026257004143426, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e", 25, 9019145596080302696, NULL };
static panda$core$String $s2872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x20\x27", 6, 2293399544522, NULL };
static panda$core$String $s3416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x63\x6c\x61\x73\x73", 16, 3306529650949529468, NULL };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x61\x6e\x67\x65\x20\x73\x74\x65\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6e\x75\x6c\x6c", 25, 4479279434458851015, NULL };
static panda$core$String $s3495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x72\x61\x6e\x67\x65\x3e", 18, -1293962867859660245, NULL };
static panda$core$String $s3504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x65\x6c\x66\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20\x74\x79\x70\x65\x73\x20", 27, 6843179484913102436, NULL };
static panda$core$String $s3731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 18, -4303734005461819726, NULL };
static panda$core$String $s3751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static panda$core$String $s3753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20\x27", 48, 6391877092008549907, NULL };
static panda$core$String $s3759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 46, 6859502832880265551, NULL };
static panda$core$String $s3809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s3893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s3979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6f\x72", 8, 22210198075044275, NULL };
static panda$core$String $s3987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s3989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s4113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x20", 7, 149654778879689, NULL };
static panda$core$String $s4115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s4155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s4157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s4180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s4194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s4214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s4374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6d\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s4379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s4889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s4892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$CodeGenerator* p_codeGenerator, org$pandalanguage$pandac$Compiler$Settings* p_settings) {
    org$pandalanguage$pandac$Position $tmp41;
    org$pandalanguage$pandac$Position $tmp46;
    org$pandalanguage$pandac$Position $tmp51;
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
    org$pandalanguage$pandac$SymbolTable* $tmp19 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
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
    org$pandalanguage$pandac$Type* $tmp27 = org$pandalanguage$pandac$Type$BuiltinInt8$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp27));
    org$pandalanguage$pandac$Type* $tmp28 = org$pandalanguage$pandac$Type$BuiltinInt16$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp28));
    org$pandalanguage$pandac$Type* $tmp29 = org$pandalanguage$pandac$Type$BuiltinInt32$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp29));
    org$pandalanguage$pandac$Type* $tmp30 = org$pandalanguage$pandac$Type$BuiltinInt64$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp30));
    org$pandalanguage$pandac$Type* $tmp31 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp31));
    org$pandalanguage$pandac$Type* $tmp32 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp32));
    org$pandalanguage$pandac$Type* $tmp33 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp33));
    org$pandalanguage$pandac$Type* $tmp34 = org$pandalanguage$pandac$Type$BuiltinUInt64$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp34));
    org$pandalanguage$pandac$Type* $tmp35 = org$pandalanguage$pandac$Type$BuiltinFloat32$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp35));
    org$pandalanguage$pandac$Type* $tmp36 = org$pandalanguage$pandac$Type$BuiltinFloat64$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp36));
    org$pandalanguage$pandac$Alias* $tmp37 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp37->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp37->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp41);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp37, &$s39, &$s40, $tmp41);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp37));
    org$pandalanguage$pandac$Alias* $tmp42 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp42->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp42->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp46);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp42, &$s44, &$s45, $tmp46);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp42));
    org$pandalanguage$pandac$Alias* $tmp47 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp47->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp47->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp51);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp47, &$s49, &$s50, $tmp51);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp47));
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s52);
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s53);
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
    org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(self, &$s109);
}
void org$pandalanguage$pandac$Compiler$addAlias$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp112;
    org$pandalanguage$pandac$Position $tmp117;
    org$pandalanguage$pandac$Alias* $tmp110 = (org$pandalanguage$pandac$Alias*) malloc(64);
    $tmp110->$class = (panda$core$Class*) &org$pandalanguage$pandac$Alias$class;
    $tmp110->refCount.value = 1;
    panda$core$String$Index$nullable $tmp114 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s113);
    panda$core$String$Index $tmp115 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_name, ((panda$core$String$Index) $tmp114.value));
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp112, ((panda$core$String$Index$nullable) { $tmp115, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp116 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp112);
    org$pandalanguage$pandac$Position$init(&$tmp117);
    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp110, $tmp116, p_name, $tmp117);
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->root, ((org$pandalanguage$pandac$Symbol*) $tmp110));
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* current118;
    org$pandalanguage$pandac$ClassDecl$Resolution* result122;
    panda$core$String* alias124;
    org$pandalanguage$pandac$ClassDecl* result132;
    panda$core$String$Index$nullable idx134;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp137;
    org$pandalanguage$pandac$Symbol* rootAlias149;
    panda$core$String$Index$nullable index156;
    org$pandalanguage$pandac$ClassDecl* parent159;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp160;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp163;
    panda$core$Int64 $tmp119 = panda$collections$Stack$get_count$R$panda$core$Int64(self->currentClass);
    panda$core$Bit $tmp120 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp119, ((panda$core$Int64) { 0 }));
    if ($tmp120.value) {
    {
        panda$core$Object* $tmp121 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        current118 = ((org$pandalanguage$pandac$ClassDecl*) $tmp121);
    }
    }
    else {
    {
        current118 = NULL;
    }
    }
    if (((panda$core$Bit) { current118 != NULL }).value) {
    {
        panda$core$Object* $tmp123 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(current118->classResolutionCache, ((panda$collections$Key*) p_name));
        result122 = ((org$pandalanguage$pandac$ClassDecl$Resolution*) $tmp123);
        if (((panda$core$Bit) { result122 != NULL }).value) {
        {
            return result122->value;
        }
        }
        ITable* $tmp125 = current118->aliases->$class->itable;
        while ($tmp125->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp125 = $tmp125->next;
        }
        $fn127 $tmp126 = $tmp125->methods[1];
        panda$core$Object* $tmp128 = $tmp126(current118->aliases, ((panda$core$Object*) p_name));
        alias124 = ((panda$core$String*) $tmp128);
        if (((panda$core$Bit) { alias124 != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl$Resolution* $tmp129 = (org$pandalanguage$pandac$ClassDecl$Resolution*) malloc(24);
            $tmp129->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Resolution$class;
            $tmp129->refCount.value = 1;
            org$pandalanguage$pandac$ClassDecl* $tmp131 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, alias124);
            org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q($tmp129, $tmp131);
            result122 = $tmp129;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(current118->classResolutionCache, ((panda$collections$Key*) p_name), ((panda$core$Object*) result122));
            return result122->value;
        }
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp133 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
    result132 = $tmp133;
    if (((panda$core$Bit) { current118 != NULL }).value) {
    {
        if (((panda$core$Bit) { result132 == NULL }).value) {
        {
            panda$core$String$Index$nullable $tmp136 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) current118)->name, &$s135);
            idx134 = $tmp136;
            if (((panda$core$Bit) { idx134.nonnull }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp137, ((panda$core$String$Index$nullable) { .nonnull = false }), idx134, ((panda$core$Bit) { true }));
                panda$core$String* $tmp138 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) current118)->name, $tmp137);
                panda$core$String* $tmp139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp138, p_name);
                org$pandalanguage$pandac$ClassDecl* $tmp140 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp139);
                result132 = $tmp140;
            }
            }
        }
        }
        if (((panda$core$Bit) { result132 == NULL }).value) {
        {
            panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) current118)->name, &$s141);
            panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp142, p_name);
            org$pandalanguage$pandac$ClassDecl* $tmp144 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp143);
            result132 = $tmp144;
        }
        }
        bool $tmp145 = ((panda$core$Bit) { result132 == NULL }).value;
        if (!$tmp145) goto $l146;
        $tmp145 = ((panda$core$Bit) { current118->owner != NULL }).value;
        $l146:;
        panda$core$Bit $tmp147 = { $tmp145 };
        if ($tmp147.value) {
        {
            panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) current118->owner));
            org$pandalanguage$pandac$ClassDecl* $tmp148 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_name);
            result132 = $tmp148;
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        }
        }
    }
    }
    if (((panda$core$Bit) { result132 == NULL }).value) {
    {
        org$pandalanguage$pandac$Symbol* $tmp150 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->root, p_name);
        rootAlias149 = $tmp150;
        bool $tmp151 = ((panda$core$Bit) { rootAlias149 != NULL }).value;
        if (!$tmp151) goto $l152;
        panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rootAlias149->kind, ((panda$core$Int64) { 200 }));
        $tmp151 = $tmp153.value;
        $l152:;
        panda$core$Bit $tmp154 = { $tmp151 };
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp155 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Alias*) rootAlias149)->fullName);
            result132 = $tmp155;
        }
        }
    }
    }
    if (((panda$core$Bit) { result132 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp158 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_name, &$s157);
        index156 = $tmp158;
        if (((panda$core$Bit) { index156.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp160, ((panda$core$String$Index$nullable) { .nonnull = false }), index156, ((panda$core$Bit) { false }));
            panda$core$String* $tmp161 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp160);
            org$pandalanguage$pandac$ClassDecl* $tmp162 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp161);
            parent159 = $tmp162;
            if (((panda$core$Bit) { parent159 != NULL }).value) {
            {
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp163, index156, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp164 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_name, $tmp163);
                panda$core$String* $tmp165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) parent159)->name, $tmp164);
                org$pandalanguage$pandac$ClassDecl* $tmp166 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp165);
                result132 = $tmp166;
            }
            }
        }
        }
    }
    }
    if (((panda$core$Bit) { current118 != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl$Resolution* $tmp167 = (org$pandalanguage$pandac$ClassDecl$Resolution*) malloc(24);
        $tmp167->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$Resolution$class;
        $tmp167->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q($tmp167, result132);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(current118->classResolutionCache, ((panda$collections$Key*) p_name), ((panda$core$Object*) $tmp167));
    }
    }
    return result132;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Int64 expectedCount169;
    panda$collections$ListView* foundTypes174;
    panda$core$Int64 foundCount176;
    org$pandalanguage$pandac$Type* object203;
    panda$core$Range$LTpanda$core$Int64$GT $tmp205;
    org$pandalanguage$pandac$Type* bound219;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    PANDA_ASSERT(p_type->resolved.value);
    ITable* $tmp170 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
    while ($tmp170->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp170 = $tmp170->next;
    }
    $fn172 $tmp171 = $tmp170->methods[0];
    panda$core$Int64 $tmp173 = $tmp171(((panda$collections$CollectionView*) p_cl->parameters));
    expectedCount169 = $tmp173;
    panda$collections$ListView* $tmp175 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type);
    foundTypes174 = $tmp175;
    ITable* $tmp177 = ((panda$collections$CollectionView*) foundTypes174)->$class->itable;
    while ($tmp177->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp177 = $tmp177->next;
    }
    $fn179 $tmp178 = $tmp177->methods[0];
    panda$core$Int64 $tmp180 = $tmp178(((panda$collections$CollectionView*) foundTypes174));
    foundCount176 = $tmp180;
    panda$core$Bit $tmp181 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(expectedCount169, foundCount176);
    if ($tmp181.value) {
    {
        panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s182, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, &$s184);
        panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp185, ((panda$core$Object*) wrap_panda$core$Int64(expectedCount169)));
        panda$core$String* $tmp188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp186, &$s187);
        panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expectedCount169, ((panda$core$Int64) { 1 }));
        ITable* $tmp192 = ((panda$core$Formattable*) wrap_panda$core$Bit($tmp190))->$class->itable;
        while ($tmp192->$class != (panda$core$Class*) &panda$core$Formattable$class) {
            $tmp192 = $tmp192->next;
        }
        $fn194 $tmp193 = $tmp192->methods[0];
        panda$core$String* $tmp195 = $tmp193(((panda$core$Formattable*) wrap_panda$core$Bit($tmp190)), &$s191);
        panda$core$String* $tmp196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s189, $tmp195);
        panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp196, &$s197);
        panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp198, ((panda$core$Object*) wrap_panda$core$Int64(foundCount176)));
        panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, &$s200);
        panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp188, $tmp201);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp202);
        return ((panda$core$Bit) { false });
    }
    }
    org$pandalanguage$pandac$Type* $tmp204 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    object203 = $tmp204;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp205, ((panda$core$Int64) { 0 }), expectedCount169, ((panda$core$Bit) { false }));
    int64_t $tmp207 = $tmp205.min.value;
    panda$core$Int64 i206 = { $tmp207 };
    int64_t $tmp209 = $tmp205.max.value;
    bool $tmp210 = $tmp205.inclusive.value;
    if ($tmp210) goto $l217; else goto $l218;
    $l217:;
    if ($tmp207 <= $tmp209) goto $l211; else goto $l213;
    $l218:;
    if ($tmp207 < $tmp209) goto $l211; else goto $l213;
    $l211:;
    {
        ITable* $tmp220 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp220->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp220 = $tmp220->next;
        }
        $fn222 $tmp221 = $tmp220->methods[0];
        panda$core$Object* $tmp223 = $tmp221(((panda$collections$ListView*) p_cl->parameters), i206);
        bound219 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp223)->bound;
        panda$core$Bit $tmp225 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(bound219, object203);
        bool $tmp224 = $tmp225.value;
        if ($tmp224) goto $l226;
        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(bound219->typeKind, ((panda$core$Int64) { 11 }));
        bool $tmp227 = $tmp228.value;
        if (!$tmp227) goto $l229;
        panda$core$Object* $tmp230 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(bound219->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp231 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp230), object203);
        $tmp227 = $tmp231.value;
        $l229:;
        panda$core$Bit $tmp232 = { $tmp227 };
        $tmp224 = $tmp232.value;
        $l226:;
        panda$core$Bit $tmp233 = { $tmp224 };
        if ($tmp233.value) {
        {
            goto $l214;
        }
        }
        ITable* $tmp234 = foundTypes174->$class->itable;
        while ($tmp234->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp234 = $tmp234->next;
        }
        $fn236 $tmp235 = $tmp234->methods[0];
        panda$core$Object* $tmp237 = $tmp235(foundTypes174, i206);
        org$pandalanguage$pandac$Type* $tmp238 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, bound219);
        panda$core$Int64$nullable $tmp239 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp237), $tmp238);
        if (((panda$core$Bit) { !$tmp239.nonnull }).value) {
        {
            panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s240, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s242);
            ITable* $tmp244 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp244->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp244 = $tmp244->next;
            }
            $fn246 $tmp245 = $tmp244->methods[0];
            panda$core$Object* $tmp247 = $tmp245(((panda$collections$ListView*) p_cl->parameters), i206);
            panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp247))->name);
            panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp248, &$s249);
            ITable* $tmp252 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp252->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp252 = $tmp252->next;
            }
            $fn254 $tmp253 = $tmp252->methods[0];
            panda$core$Object* $tmp255 = $tmp253(((panda$collections$ListView*) p_cl->parameters), i206);
            panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s251, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp255)->bound));
            panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp256, &$s257);
            ITable* $tmp259 = foundTypes174->$class->itable;
            while ($tmp259->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp259 = $tmp259->next;
            }
            $fn261 $tmp260 = $tmp259->methods[0];
            panda$core$Object* $tmp262 = $tmp260(foundTypes174, i206);
            panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp258, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp262)));
            panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp263, &$s264);
            panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp250, $tmp265);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp266);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l214:;
    int64_t $tmp268 = $tmp209 - i206.value;
    if ($tmp210) goto $l269; else goto $l270;
    $l269:;
    if ($tmp268 >= 1) goto $l267; else goto $l213;
    $l270:;
    if ($tmp268 > 1) goto $l267; else goto $l213;
    $l267:;
    i206.value += 1;
    goto $l211;
    $l213:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved273;
    org$pandalanguage$pandac$Type* result275;
    org$pandalanguage$pandac$Symbol* s279;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp283;
    panda$collections$Array* subtypes294;
    org$pandalanguage$pandac$Type* sub297;
    panda$collections$Array* subtypes307;
    org$pandalanguage$pandac$Type* base310;
    panda$core$MutableString* name313;
    panda$core$Char8 $tmp317;
    panda$core$String* separator318;
    panda$core$Range$LTpanda$core$Int64$GT $tmp320;
    org$pandalanguage$pandac$Type* resolved335;
    panda$core$Char8 $tmp345;
    org$pandalanguage$pandac$Type* result346;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp274 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved273 = $tmp274;
            if (((panda$core$Bit) { resolved273 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp276 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved273);
                result275 = $tmp276;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp277 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved273, result275);
                    panda$core$Bit $tmp278 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp277);
                    if ($tmp278.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result275;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp280 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s279 = $tmp280;
            if (((panda$core$Bit) { s279 != NULL }).value) {
            {
                switch (s279->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp281 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp281->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp281->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp281, ((org$pandalanguage$pandac$Alias*) s279)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp281;
                    }
                    break;
                    case 203:
                    {
                        gp283 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s279);
                        org$pandalanguage$pandac$ClassDecl* $tmp284 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp283->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp284);
                        org$pandalanguage$pandac$Type* $tmp285 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp285->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp285->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp285, gp283);
                        return $tmp285;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s279);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp287 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s279));
                        return $tmp287;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s288, ((panda$core$Object*) p_type));
            panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp289, &$s290);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp291);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp292 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp292, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp293.value);
            panda$collections$Array* $tmp295 = (panda$collections$Array*) malloc(40);
            $tmp295->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp295->refCount.value = 1;
            panda$collections$Array$init($tmp295);
            subtypes294 = $tmp295;
            panda$core$Object* $tmp298 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp299 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp298));
            sub297 = $tmp299;
            if (((panda$core$Bit) { sub297 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes294, ((panda$core$Object*) sub297));
            org$pandalanguage$pandac$Type* $tmp300 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp300->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp300->refCount.value = 1;
            panda$core$Object* $tmp302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes294, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp302))->name, &$s303);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp300, $tmp304, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes294), ((panda$core$Bit) { true }));
            return $tmp300;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp305 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp306 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp305, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp306.value);
            panda$collections$Array* $tmp308 = (panda$collections$Array*) malloc(40);
            $tmp308->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp308->refCount.value = 1;
            panda$collections$Array$init($tmp308);
            subtypes307 = $tmp308;
            panda$core$Object* $tmp311 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp312 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp311), ((panda$core$Bit) { false }));
            base310 = $tmp312;
            if (((panda$core$Bit) { base310 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes307, ((panda$core$Object*) base310));
            panda$core$MutableString* $tmp314 = (panda$core$MutableString*) malloc(48);
            $tmp314->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp314->refCount.value = 1;
            panda$core$Object* $tmp316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes307, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp314, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp316))->name);
            name313 = $tmp314;
            panda$core$Char8$init$panda$core$UInt8(&$tmp317, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name313, $tmp317);
            separator318 = &$s319;
            panda$core$Int64 $tmp321 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp320, ((panda$core$Int64) { 1 }), $tmp321, ((panda$core$Bit) { false }));
            int64_t $tmp323 = $tmp320.min.value;
            panda$core$Int64 i322 = { $tmp323 };
            int64_t $tmp325 = $tmp320.max.value;
            bool $tmp326 = $tmp320.inclusive.value;
            if ($tmp326) goto $l333; else goto $l334;
            $l333:;
            if ($tmp323 <= $tmp325) goto $l327; else goto $l329;
            $l334:;
            if ($tmp323 < $tmp325) goto $l327; else goto $l329;
            $l327:;
            {
                panda$core$Object* $tmp336 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, i322);
                org$pandalanguage$pandac$Type* $tmp337 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp336));
                resolved335 = $tmp337;
                if (((panda$core$Bit) { resolved335 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes307, ((panda$core$Object*) resolved335));
                panda$core$MutableString$append$panda$core$String(name313, separator318);
                panda$core$MutableString$append$panda$core$String(name313, ((org$pandalanguage$pandac$Symbol*) resolved335)->name);
                separator318 = &$s338;
            }
            $l330:;
            int64_t $tmp340 = $tmp325 - i322.value;
            if ($tmp326) goto $l341; else goto $l342;
            $l341:;
            if ($tmp340 >= 1) goto $l339; else goto $l329;
            $l342:;
            if ($tmp340 > 1) goto $l339; else goto $l329;
            $l339:;
            i322.value += 1;
            goto $l327;
            $l329:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp345, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name313, $tmp345);
            org$pandalanguage$pandac$Type* $tmp347 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp347->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp347->refCount.value = 1;
            panda$core$String* $tmp349 = panda$core$MutableString$finish$R$panda$core$String(name313);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp347, $tmp349, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes307), ((panda$core$Bit) { true }));
            result346 = $tmp347;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp350 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result346->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp351 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp350));
                panda$core$Bit $tmp352 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp351, result346);
                panda$core$Bit $tmp353 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp352);
                if ($tmp353.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result346;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp354 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp354;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old355;
    panda$collections$Iterator* p$Iter356;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p368;
    org$pandalanguage$pandac$Type* resolved373;
    panda$collections$Iterator* rawS$Iter375;
    org$pandalanguage$pandac$Type* rawS387;
    org$pandalanguage$pandac$Type* s392;
    org$pandalanguage$pandac$ClassDecl* sClass394;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp396;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp398;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp424;
    panda$collections$Iterator* m$Iter444;
    org$pandalanguage$pandac$MethodDecl* m456;
    panda$collections$Iterator* intf$Iter467;
    org$pandalanguage$pandac$Type* intf479;
    panda$collections$Iterator* p$Iter485;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p497;
    org$pandalanguage$pandac$ClassDecl* cl502;
    if (p_cl->resolved.value) {
    {
        return;
    }
    }
    p_cl->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    old355 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp357 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp357->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp357 = $tmp357->next;
        }
        $fn359 $tmp358 = $tmp357->methods[0];
        panda$collections$Iterator* $tmp360 = $tmp358(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter356 = $tmp360;
        $l361:;
        ITable* $tmp363 = p$Iter356->$class->itable;
        while ($tmp363->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp363 = $tmp363->next;
        }
        $fn365 $tmp364 = $tmp363->methods[0];
        panda$core$Bit $tmp366 = $tmp364(p$Iter356);
        panda$core$Bit $tmp367 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp366);
        if (!$tmp367.value) goto $l362;
        {
            ITable* $tmp369 = p$Iter356->$class->itable;
            while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp369 = $tmp369->next;
            }
            $fn371 $tmp370 = $tmp369->methods[1];
            panda$core$Object* $tmp372 = $tmp370(p$Iter356);
            p368 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp372);
            org$pandalanguage$pandac$Type* $tmp374 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p368->bound, ((panda$core$Bit) { false }));
            resolved373 = $tmp374;
            if (((panda$core$Bit) { resolved373 != NULL }).value) {
            {
                p368->bound = resolved373;
            }
            }
        }
        goto $l361;
        $l362:;
    }
    {
        ITable* $tmp376 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp376->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp376 = $tmp376->next;
        }
        $fn378 $tmp377 = $tmp376->methods[0];
        panda$collections$Iterator* $tmp379 = $tmp377(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter375 = $tmp379;
        $l380:;
        ITable* $tmp382 = rawS$Iter375->$class->itable;
        while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp382 = $tmp382->next;
        }
        $fn384 $tmp383 = $tmp382->methods[0];
        panda$core$Bit $tmp385 = $tmp383(rawS$Iter375);
        panda$core$Bit $tmp386 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp385);
        if (!$tmp386.value) goto $l381;
        {
            ITable* $tmp388 = rawS$Iter375->$class->itable;
            while ($tmp388->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp388 = $tmp388->next;
            }
            $fn390 $tmp389 = $tmp388->methods[1];
            panda$core$Object* $tmp391 = $tmp389(rawS$Iter375);
            rawS387 = ((org$pandalanguage$pandac$Type*) $tmp391);
            org$pandalanguage$pandac$Type* $tmp393 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS387, ((panda$core$Bit) { false }));
            s392 = $tmp393;
            if (((panda$core$Bit) { s392 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp395 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s392);
                sClass394 = $tmp395;
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, sClass394);
                if (((panda$core$Bit) { sClass394 != NULL }).value) {
                {
                    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp396, ((panda$core$Int64) { 0 }));
                    panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass394->classKind.$rawValue, $tmp396.$rawValue);
                    if ($tmp397.value) {
                    {
                        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp398, ((panda$core$Int64) { 1 }));
                        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind.$rawValue, $tmp398.$rawValue);
                        if ($tmp399.value) {
                        {
                            panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s400, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp401, &$s402);
                            panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s404, ((org$pandalanguage$pandac$Symbol*) s392)->name);
                            panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s406);
                            panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, $tmp407);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s392)->position, $tmp408);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s392;
                            panda$core$Int64 $tmp409 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp410 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp409, ((panda$core$Int64) { 0 }));
                            if ($tmp410.value) {
                            {
                                panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s411, ((panda$core$Object*) s392));
                                panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
                                panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp414, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, &$s416);
                                panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s418);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s392)->position, $tmp419);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s420, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp421, &$s422);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s392)->position, $tmp423);
                        }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp424, ((panda$core$Int64) { 1 }));
                        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass394->classKind.$rawValue, $tmp424.$rawValue);
                        PANDA_ASSERT($tmp425.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s392));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l380;
        $l381:;
    }
    bool $tmp426 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp426) goto $l427;
    panda$core$Bit $tmp429 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s428);
    $tmp426 = $tmp429.value;
    $l427:;
    panda$core$Bit $tmp430 = { $tmp426 };
    if ($tmp430.value) {
    {
        org$pandalanguage$pandac$Type* $tmp431 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp431;
    }
    }
    bool $tmp433 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp433) goto $l434;
    panda$core$Bit $tmp435 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp435);
    $tmp433 = $tmp436.value;
    $l434:;
    panda$core$Bit $tmp437 = { $tmp433 };
    bool $tmp432 = $tmp437.value;
    if (!$tmp432) goto $l438;
    panda$core$Bit $tmp440 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s439);
    $tmp432 = $tmp440.value;
    $l438:;
    panda$core$Bit $tmp441 = { $tmp432 };
    if ($tmp441.value) {
    {
        panda$core$Int64 $tmp442 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp443 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp442);
        p_cl->annotations->flags = $tmp443;
        {
            ITable* $tmp445 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp445->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp445 = $tmp445->next;
            }
            $fn447 $tmp446 = $tmp445->methods[0];
            panda$collections$Iterator* $tmp448 = $tmp446(((panda$collections$Iterable*) p_cl->methods));
            m$Iter444 = $tmp448;
            $l449:;
            ITable* $tmp451 = m$Iter444->$class->itable;
            while ($tmp451->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp451 = $tmp451->next;
            }
            $fn453 $tmp452 = $tmp451->methods[0];
            panda$core$Bit $tmp454 = $tmp452(m$Iter444);
            panda$core$Bit $tmp455 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp454);
            if (!$tmp455.value) goto $l450;
            {
                ITable* $tmp457 = m$Iter444->$class->itable;
                while ($tmp457->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp457 = $tmp457->next;
                }
                $fn459 $tmp458 = $tmp457->methods[1];
                panda$core$Object* $tmp460 = $tmp458(m$Iter444);
                m456 = ((org$pandalanguage$pandac$MethodDecl*) $tmp460);
                panda$core$Int64 $tmp461 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp462 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m456->annotations->flags, $tmp461);
                m456->annotations->flags = $tmp462;
                panda$core$Bit $tmp463 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m456->annotations, m456->body);
                if ($tmp463.value) {
                {
                    panda$core$Int64 $tmp464 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp465 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m456->annotations->flags, $tmp464);
                    m456->annotations->flags = $tmp465;
                }
                }
            }
            goto $l449;
            $l450:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp466 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp466, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp468 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp468 = $tmp468->next;
        }
        $fn470 $tmp469 = $tmp468->methods[0];
        panda$collections$Iterator* $tmp471 = $tmp469(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter467 = $tmp471;
        $l472:;
        ITable* $tmp474 = intf$Iter467->$class->itable;
        while ($tmp474->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp474 = $tmp474->next;
        }
        $fn476 $tmp475 = $tmp474->methods[0];
        panda$core$Bit $tmp477 = $tmp475(intf$Iter467);
        panda$core$Bit $tmp478 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp477);
        if (!$tmp478.value) goto $l473;
        {
            ITable* $tmp480 = intf$Iter467->$class->itable;
            while ($tmp480->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp480 = $tmp480->next;
            }
            $fn482 $tmp481 = $tmp480->methods[1];
            panda$core$Object* $tmp483 = $tmp481(intf$Iter467);
            intf479 = ((org$pandalanguage$pandac$Type*) $tmp483);
            org$pandalanguage$pandac$ClassDecl* $tmp484 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf479);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp484, intf479);
        }
        goto $l472;
        $l473:;
    }
    {
        ITable* $tmp486 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp486->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp486 = $tmp486->next;
        }
        $fn488 $tmp487 = $tmp486->methods[0];
        panda$collections$Iterator* $tmp489 = $tmp487(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter485 = $tmp489;
        $l490:;
        ITable* $tmp492 = p$Iter485->$class->itable;
        while ($tmp492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp492 = $tmp492->next;
        }
        $fn494 $tmp493 = $tmp492->methods[0];
        panda$core$Bit $tmp495 = $tmp493(p$Iter485);
        panda$core$Bit $tmp496 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp495);
        if (!$tmp496.value) goto $l491;
        {
            ITable* $tmp498 = p$Iter485->$class->itable;
            while ($tmp498->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp498 = $tmp498->next;
            }
            $fn500 $tmp499 = $tmp498->methods[1];
            panda$core$Object* $tmp501 = $tmp499(p$Iter485);
            p497 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp501);
            org$pandalanguage$pandac$ClassDecl* $tmp503 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p497->bound);
            cl502 = $tmp503;
            if (((panda$core$Bit) { cl502 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl502)->position, cl502, p497->bound);
            }
            }
        }
        goto $l490;
        $l491:;
    }
    self->symbolTable = old355;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old504;
    panda$collections$Iterator* p$Iter505;
    org$pandalanguage$pandac$MethodDecl$Parameter* p517;
    org$pandalanguage$pandac$MethodDecl* overridden525;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp540;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp543;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old504 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp506 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp506->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp506 = $tmp506->next;
        }
        $fn508 $tmp507 = $tmp506->methods[0];
        panda$collections$Iterator* $tmp509 = $tmp507(((panda$collections$Iterable*) p_m->parameters));
        p$Iter505 = $tmp509;
        $l510:;
        ITable* $tmp512 = p$Iter505->$class->itable;
        while ($tmp512->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp512 = $tmp512->next;
        }
        $fn514 $tmp513 = $tmp512->methods[0];
        panda$core$Bit $tmp515 = $tmp513(p$Iter505);
        panda$core$Bit $tmp516 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp515);
        if (!$tmp516.value) goto $l511;
        {
            ITable* $tmp518 = p$Iter505->$class->itable;
            while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp518 = $tmp518->next;
            }
            $fn520 $tmp519 = $tmp518->methods[1];
            panda$core$Object* $tmp521 = $tmp519(p$Iter505);
            p517 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp521);
            org$pandalanguage$pandac$Type* $tmp522 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p517->type);
            p517->type = $tmp522;
        }
        goto $l510;
        $l511:;
    }
    org$pandalanguage$pandac$Type* $tmp523 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp523;
    p_m->resolved = ((panda$core$Bit) { true });
    panda$core$Bit $tmp524 = panda$core$Bit$$NOT$R$panda$core$Bit(p_m->owner->external);
    if ($tmp524.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp526 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
        overridden525 = $tmp526;
        if (((panda$core$Bit) { overridden525 != NULL }).value) {
        {
            panda$core$Bit $tmp527 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
            panda$core$Bit $tmp528 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp527);
            if ($tmp528.value) {
            {
                panda$core$String* $tmp529 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp530 = panda$core$String$convert$R$panda$core$String($tmp529);
                panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s531);
                panda$core$String* $tmp533 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden525);
                panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, $tmp533);
                panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s535);
                panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s537);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp538);
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp540, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, $tmp540.$rawValue);
            bool $tmp539 = $tmp541.value;
            if (!$tmp539) goto $l542;
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp543, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden525->methodKind.$rawValue, $tmp543.$rawValue);
            $tmp539 = $tmp544.value;
            $l542:;
            panda$core$Bit $tmp545 = { $tmp539 };
            if ($tmp545.value) {
            {
                panda$core$String* $tmp546 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp547 = panda$core$String$convert$R$panda$core$String($tmp546);
                panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s548);
                panda$core$String* $tmp550 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden525);
                panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, $tmp550);
                panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, &$s552);
                panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, &$s554);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp555);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp556 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        if ($tmp556.value) {
        {
            panda$core$String* $tmp557 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp558 = panda$core$String$convert$R$panda$core$String($tmp557);
            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, &$s559);
            panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s561);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp562);
        }
        }
        }
    }
    }
    self->symbolTable = old504;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old563;
    org$pandalanguage$pandac$Type* resolved566;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old563 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp564 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp565 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp564);
    if ($tmp565.value) {
    {
        org$pandalanguage$pandac$Type* $tmp567 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved566 = $tmp567;
        if (((panda$core$Bit) { resolved566 != NULL }).value) {
        {
            p_f->type = resolved566;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp568 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp569 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp568, p_f->type);
                p_f->value = $tmp569;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old563;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s570);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old563;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp571 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp571;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old563;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp572 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp572;
    org$pandalanguage$pandac$IRNode* $tmp573 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp573;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old563;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$ListView* methods575;
    panda$collections$ImmutableArray* args577;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp578;
    panda$collections$Array* best580;
    panda$core$Int64$nullable bestCost583;
    panda$collections$Iterator* m$Iter584;
    org$pandalanguage$pandac$MethodRef* m596;
    panda$core$Int64$nullable cost601;
    org$pandalanguage$pandac$IRNode* callTarget611;
    org$pandalanguage$pandac$IRNode* result617;
    panda$core$Bit $tmp574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1039 }));
    PANDA_ASSERT($tmp574.value);
    panda$core$Object* $tmp576 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    methods575 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp576)->payload);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp578, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$collections$ImmutableArray* $tmp579 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp578);
    args577 = $tmp579;
    panda$collections$Array* $tmp581 = (panda$collections$Array*) malloc(40);
    $tmp581->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp581->refCount.value = 1;
    panda$collections$Array$init($tmp581);
    best580 = $tmp581;
    bestCost583 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp585 = ((panda$collections$Iterable*) methods575)->$class->itable;
        while ($tmp585->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp585 = $tmp585->next;
        }
        $fn587 $tmp586 = $tmp585->methods[0];
        panda$collections$Iterator* $tmp588 = $tmp586(((panda$collections$Iterable*) methods575));
        m$Iter584 = $tmp588;
        $l589:;
        ITable* $tmp591 = m$Iter584->$class->itable;
        while ($tmp591->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp591 = $tmp591->next;
        }
        $fn593 $tmp592 = $tmp591->methods[0];
        panda$core$Bit $tmp594 = $tmp592(m$Iter584);
        panda$core$Bit $tmp595 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp594);
        if (!$tmp595.value) goto $l590;
        {
            ITable* $tmp597 = m$Iter584->$class->itable;
            while ($tmp597->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp597 = $tmp597->next;
            }
            $fn599 $tmp598 = $tmp597->methods[1];
            panda$core$Object* $tmp600 = $tmp598(m$Iter584);
            m596 = ((org$pandalanguage$pandac$MethodRef*) $tmp600);
            panda$core$Int64$nullable $tmp602 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m596, ((panda$collections$ListView*) args577), p_target);
            cost601 = $tmp602;
            if (((panda$core$Bit) { !cost601.nonnull }).value) {
            {
                goto $l589;
            }
            }
            if (((panda$core$Bit) { !bestCost583.nonnull }).value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best580, ((panda$core$Object*) m596));
                bestCost583 = cost601;
                goto $l589;
            }
            }
            panda$core$Bit $tmp603 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost601.value), ((panda$core$Int64) bestCost583.value));
            if ($tmp603.value) {
            {
                panda$collections$Array$clear(best580);
                bestCost583 = cost601;
            }
            }
            panda$core$Bit $tmp607;
            if (((panda$core$Bit) { cost601.nonnull }).value) goto $l604; else goto $l605;
            $l604:;
            panda$core$Bit $tmp608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost601.value), ((panda$core$Int64) bestCost583.value));
            $tmp607 = $tmp608;
            goto $l606;
            $l605:;
            $tmp607 = ((panda$core$Bit) { false });
            goto $l606;
            $l606:;
            if ($tmp607.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best580, ((panda$core$Object*) m596));
            }
            }
        }
        goto $l589;
        $l590:;
    }
    panda$core$Int64 $tmp609 = panda$collections$Array$get_count$R$panda$core$Int64(best580);
    panda$core$Bit $tmp610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp609, ((panda$core$Int64) { 1 }));
    if ($tmp610.value) {
    {
        panda$core$Object* $tmp612 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp613 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp612)->children);
        panda$core$Bit $tmp614 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp613, ((panda$core$Int64) { 0 }));
        if ($tmp614.value) {
        {
            panda$core$Object* $tmp615 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp616 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp615)->children, ((panda$core$Int64) { 0 }));
            callTarget611 = ((org$pandalanguage$pandac$IRNode*) $tmp616);
        }
        }
        else {
        {
            callTarget611 = NULL;
        }
        }
        panda$core$Object* $tmp618 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best580, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp619 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget611, ((org$pandalanguage$pandac$MethodRef*) $tmp618), ((panda$collections$ListView*) args577));
        result617 = $tmp619;
        if (((panda$core$Bit) { p_target != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp620 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result617, p_target);
            result617 = $tmp620;
        }
        }
        return result617;
    }
    }
    panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s621, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_expr->position)));
    panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp622, &$s623);
    ITable* $tmp625 = methods575->$class->itable;
    while ($tmp625->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp625 = $tmp625->next;
    }
    $fn627 $tmp626 = $tmp625->methods[0];
    panda$core$Object* $tmp628 = $tmp626(methods575, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp628)->value)->name);
    panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp629, &$s630);
    panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp631, ((panda$core$Object*) best580));
    panda$core$String* $tmp634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp632, &$s633);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp634));
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s635);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp636 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp636;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s637);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp638 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp639 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp638);
            return $tmp639;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp640 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp640) goto $l641;
    panda$core$Bit $tmp643 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s642);
    $tmp640 = $tmp643.value;
    $l641:;
    panda$core$Bit $tmp644 = { $tmp640 };
    return $tmp644;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result645;
    org$pandalanguage$pandac$ClassDecl* s653;
    panda$collections$Iterator* f$Iter656;
    org$pandalanguage$pandac$FieldDecl* f668;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp646 = (panda$collections$Array*) malloc(40);
    $tmp646->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp646->refCount.value = 1;
    panda$collections$Array$init($tmp646);
    result645 = $tmp646;
    panda$core$Bit $tmp649 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp650 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp649);
    bool $tmp648 = $tmp650.value;
    if (!$tmp648) goto $l651;
    $tmp648 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l651:;
    panda$core$Bit $tmp652 = { $tmp648 };
    if ($tmp652.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp654 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s653 = $tmp654;
        if (((panda$core$Bit) { s653 != NULL }).value) {
        {
            panda$collections$ListView* $tmp655 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s653);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result645, ((panda$collections$CollectionView*) $tmp655));
        }
        }
    }
    }
    {
        ITable* $tmp657 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp657->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp657 = $tmp657->next;
        }
        $fn659 $tmp658 = $tmp657->methods[0];
        panda$collections$Iterator* $tmp660 = $tmp658(((panda$collections$Iterable*) p_cl->fields));
        f$Iter656 = $tmp660;
        $l661:;
        ITable* $tmp663 = f$Iter656->$class->itable;
        while ($tmp663->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp663 = $tmp663->next;
        }
        $fn665 $tmp664 = $tmp663->methods[0];
        panda$core$Bit $tmp666 = $tmp664(f$Iter656);
        panda$core$Bit $tmp667 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp666);
        if (!$tmp667.value) goto $l662;
        {
            ITable* $tmp669 = f$Iter656->$class->itable;
            while ($tmp669->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp669 = $tmp669->next;
            }
            $fn671 $tmp670 = $tmp669->methods[1];
            panda$core$Object* $tmp672 = $tmp670(f$Iter656);
            f668 = ((org$pandalanguage$pandac$FieldDecl*) $tmp672);
            panda$core$Bit $tmp673 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f668->annotations);
            panda$core$Bit $tmp674 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp673);
            if ($tmp674.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result645, ((panda$core$Object*) f668));
            }
            }
        }
        goto $l661;
        $l662:;
    }
    return ((panda$collections$ListView*) result645);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result675;
    panda$core$Bit $tmp677;
    panda$core$Object* $tmp676 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result675 = ($tmp676 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp676)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result675.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp677, p_f);
        result675 = ((panda$core$Bit$nullable) { $tmp677, true });
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) result675.value))));
    }
    }
    return ((panda$core$Bit) result675.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result678;
    panda$core$String* suffix680;
    panda$core$Bit found686;
    panda$collections$Iterator* dir$Iter687;
    panda$io$File* dir699;
    panda$io$File* f704;
    panda$core$String$Index$nullable index708;
    org$pandalanguage$pandac$ClassDecl* parent711;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp712;
    panda$core$Object* $tmp679 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result678 = ((org$pandalanguage$pandac$ClassDecl*) $tmp679);
    if (((panda$core$Bit) { result678 == NULL }).value) {
    {
        panda$core$String* $tmp683 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s681, &$s682);
        panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp683, &$s684);
        suffix680 = $tmp685;
        found686 = ((panda$core$Bit) { false });
        {
            ITable* $tmp688 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp688->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp688 = $tmp688->next;
            }
            $fn690 $tmp689 = $tmp688->methods[0];
            panda$collections$Iterator* $tmp691 = $tmp689(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter687 = $tmp691;
            $l692:;
            ITable* $tmp694 = dir$Iter687->$class->itable;
            while ($tmp694->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp694 = $tmp694->next;
            }
            $fn696 $tmp695 = $tmp694->methods[0];
            panda$core$Bit $tmp697 = $tmp695(dir$Iter687);
            panda$core$Bit $tmp698 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp697);
            if (!$tmp698.value) goto $l693;
            {
                ITable* $tmp700 = dir$Iter687->$class->itable;
                while ($tmp700->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp700 = $tmp700->next;
                }
                $fn702 $tmp701 = $tmp700->methods[1];
                panda$core$Object* $tmp703 = $tmp701(dir$Iter687);
                dir699 = ((panda$io$File*) $tmp703);
                panda$io$File* $tmp705 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir699, suffix680);
                f704 = $tmp705;
                panda$core$Bit $tmp706 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f704);
                if ($tmp706.value) {
                {
                    found686 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f704);
                    panda$core$Object* $tmp707 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result678 = ((org$pandalanguage$pandac$ClassDecl*) $tmp707);
                }
                }
            }
            goto $l692;
            $l693:;
        }
    }
    }
    if (((panda$core$Bit) { result678 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp710 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s709);
        index708 = $tmp710;
        if (((panda$core$Bit) { index708.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp712, ((panda$core$String$Index$nullable) { .nonnull = false }), index708, ((panda$core$Bit) { false }));
            panda$core$String* $tmp713 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp712);
            org$pandalanguage$pandac$ClassDecl* $tmp714 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp713);
            parent711 = $tmp714;
            if (((panda$core$Bit) { parent711 != NULL }).value) {
            {
                panda$core$Object* $tmp715 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result678 = ((org$pandalanguage$pandac$ClassDecl*) $tmp715);
            }
            }
        }
        }
    }
    }
    return result678;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result716;
    panda$core$String* suffix718;
    panda$core$Bit found724;
    panda$collections$Iterator* dir$Iter725;
    panda$io$File* dir737;
    panda$io$File* f742;
    panda$core$Int64 oldErrorCount745;
    org$pandalanguage$pandac$Position $tmp751;
    panda$core$Object* $tmp717 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result716 = ((org$pandalanguage$pandac$ClassDecl*) $tmp717);
    if (((panda$core$Bit) { result716 == NULL }).value) {
    {
        panda$core$String* $tmp721 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s719, &$s720);
        panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp721, &$s722);
        suffix718 = $tmp723;
        found724 = ((panda$core$Bit) { false });
        {
            ITable* $tmp726 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp726->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp726 = $tmp726->next;
            }
            $fn728 $tmp727 = $tmp726->methods[0];
            panda$collections$Iterator* $tmp729 = $tmp727(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter725 = $tmp729;
            $l730:;
            ITable* $tmp732 = dir$Iter725->$class->itable;
            while ($tmp732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp732 = $tmp732->next;
            }
            $fn734 $tmp733 = $tmp732->methods[0];
            panda$core$Bit $tmp735 = $tmp733(dir$Iter725);
            panda$core$Bit $tmp736 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp735);
            if (!$tmp736.value) goto $l731;
            {
                ITable* $tmp738 = dir$Iter725->$class->itable;
                while ($tmp738->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp738 = $tmp738->next;
                }
                $fn740 $tmp739 = $tmp738->methods[1];
                panda$core$Object* $tmp741 = $tmp739(dir$Iter725);
                dir737 = ((panda$io$File*) $tmp741);
                panda$io$File* $tmp743 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir737, suffix718);
                f742 = $tmp743;
                panda$core$Bit $tmp744 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f742);
                if ($tmp744.value) {
                {
                    found724 = ((panda$core$Bit) { true });
                    oldErrorCount745 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f742);
                    panda$core$Object* $tmp746 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result716 = ((org$pandalanguage$pandac$ClassDecl*) $tmp746);
                    bool $tmp747 = ((panda$core$Bit) { result716 == NULL }).value;
                    if (!$tmp747) goto $l748;
                    panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount745);
                    $tmp747 = $tmp749.value;
                    $l748:;
                    panda$core$Bit $tmp750 = { $tmp747 };
                    if ($tmp750.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp751, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s752, ((panda$core$Object*) f742));
                        panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp753, &$s754);
                        panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp755, p_fullName);
                        panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, &$s757);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f742, $tmp751, $tmp758);
                    }
                    }
                }
                }
            }
            goto $l730;
            $l731:;
        }
        panda$core$Bit $tmp759 = panda$core$Bit$$NOT$R$panda$core$Bit(found724);
        if ($tmp759.value) {
        {
            panda$core$String* $tmp761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s760, suffix718);
            panda$core$String* $tmp763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp761, &$s762);
            panda$core$String* $tmp764 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp763, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp764, &$s765);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp766);
        }
        }
    }
    }
    return result716;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type767;
    org$pandalanguage$pandac$ClassDecl* result774;
    org$pandalanguage$pandac$Annotations* annotations776;
    panda$collections$Array* supertypes782;
    panda$collections$Iterator* intf$Iter786;
    org$pandalanguage$pandac$Type* intf798;
    panda$collections$HashMap* aliases804;
    panda$core$Range$LTpanda$core$Int64$GT $tmp807;
    panda$collections$Iterator* m$Iter842;
    org$pandalanguage$pandac$MethodDecl* m854;
    panda$collections$Array* parameters859;
    panda$collections$Iterator* p$Iter862;
    org$pandalanguage$pandac$MethodDecl$Parameter* p874;
    org$pandalanguage$pandac$MethodDecl* clone882;
    panda$collections$Iterator* f$Iter886;
    org$pandalanguage$pandac$FieldDecl* f898;
    org$pandalanguage$pandac$FieldDecl* clone903;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    org$pandalanguage$pandac$Type* $tmp768 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type767 = $tmp768;
    panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type767->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp769.value) {
    {
        panda$core$Object* $tmp770 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type767->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp771 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp770));
        return $tmp771;
    }
    }
    panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type767->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp772.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type767->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp773.value);
    panda$core$Object* $tmp775 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type767)->name));
    result774 = ((org$pandalanguage$pandac$ClassDecl*) $tmp775);
    if (((panda$core$Bit) { result774 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp777 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp777->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp777->refCount.value = 1;
        panda$core$Int64 $tmp779 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp780 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp779);
        panda$core$Int64 $tmp781 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp780);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp777, $tmp781);
        annotations776 = $tmp777;
        panda$collections$Array* $tmp783 = (panda$collections$Array*) malloc(40);
        $tmp783->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp783->refCount.value = 1;
        panda$collections$Array$init($tmp783);
        supertypes782 = $tmp783;
        org$pandalanguage$pandac$Type* $tmp785 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type767, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes782, ((panda$core$Object*) $tmp785));
        {
            ITable* $tmp787 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp787->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp787 = $tmp787->next;
            }
            $fn789 $tmp788 = $tmp787->methods[0];
            panda$collections$Iterator* $tmp790 = $tmp788(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter786 = $tmp790;
            $l791:;
            ITable* $tmp793 = intf$Iter786->$class->itable;
            while ($tmp793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp793 = $tmp793->next;
            }
            $fn795 $tmp794 = $tmp793->methods[0];
            panda$core$Bit $tmp796 = $tmp794(intf$Iter786);
            panda$core$Bit $tmp797 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp796);
            if (!$tmp797.value) goto $l792;
            {
                ITable* $tmp799 = intf$Iter786->$class->itable;
                while ($tmp799->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp799 = $tmp799->next;
                }
                $fn801 $tmp800 = $tmp799->methods[1];
                panda$core$Object* $tmp802 = $tmp800(intf$Iter786);
                intf798 = ((org$pandalanguage$pandac$Type*) $tmp802);
                org$pandalanguage$pandac$Type* $tmp803 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type767, intf798);
                panda$collections$Array$add$panda$collections$Array$T(supertypes782, ((panda$core$Object*) $tmp803));
            }
            goto $l791;
            $l792:;
        }
        panda$collections$HashMap* $tmp805 = (panda$collections$HashMap*) malloc(56);
        $tmp805->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp805->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp805, p_cl->aliases);
        aliases804 = $tmp805;
        ITable* $tmp808 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp808->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp808 = $tmp808->next;
        }
        $fn810 $tmp809 = $tmp808->methods[0];
        panda$core$Int64 $tmp811 = $tmp809(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp807, ((panda$core$Int64) { 0 }), $tmp811, ((panda$core$Bit) { false }));
        int64_t $tmp813 = $tmp807.min.value;
        panda$core$Int64 i812 = { $tmp813 };
        int64_t $tmp815 = $tmp807.max.value;
        bool $tmp816 = $tmp807.inclusive.value;
        if ($tmp816) goto $l823; else goto $l824;
        $l823:;
        if ($tmp813 <= $tmp815) goto $l817; else goto $l819;
        $l824:;
        if ($tmp813 < $tmp815) goto $l817; else goto $l819;
        $l817:;
        {
            ITable* $tmp825 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp825->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp825 = $tmp825->next;
            }
            $fn827 $tmp826 = $tmp825->methods[0];
            panda$core$Object* $tmp828 = $tmp826(((panda$collections$ListView*) p_cl->parameters), i812);
            panda$core$Int64 $tmp829 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i812, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp830 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type767->subtypes, $tmp829);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases804, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp828))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp830))->name));
        }
        $l820:;
        int64_t $tmp832 = $tmp815 - i812.value;
        if ($tmp816) goto $l833; else goto $l834;
        $l833:;
        if ($tmp832 >= 1) goto $l831; else goto $l819;
        $l834:;
        if ($tmp832 > 1) goto $l831; else goto $l819;
        $l831:;
        i812.value += 1;
        goto $l817;
        $l819:;
        org$pandalanguage$pandac$ClassDecl* $tmp837 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
        $tmp837->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp837->refCount.value = 1;
        panda$collections$Array* $tmp839 = (panda$collections$Array*) malloc(40);
        $tmp839->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp839->refCount.value = 1;
        panda$collections$Array$init($tmp839);
        panda$core$Object* $tmp841 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp837, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases804), p_cl->doccomment, annotations776, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type767)->name, ((panda$collections$ListView*) supertypes782), $tmp839, ((org$pandalanguage$pandac$SymbolTable*) $tmp841));
        result774 = $tmp837;
        result774->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp843 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp843 = $tmp843->next;
            }
            $fn845 $tmp844 = $tmp843->methods[0];
            panda$collections$Iterator* $tmp846 = $tmp844(((panda$collections$Iterable*) p_cl->methods));
            m$Iter842 = $tmp846;
            $l847:;
            ITable* $tmp849 = m$Iter842->$class->itable;
            while ($tmp849->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp849 = $tmp849->next;
            }
            $fn851 $tmp850 = $tmp849->methods[0];
            panda$core$Bit $tmp852 = $tmp850(m$Iter842);
            panda$core$Bit $tmp853 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp852);
            if (!$tmp853.value) goto $l848;
            {
                ITable* $tmp855 = m$Iter842->$class->itable;
                while ($tmp855->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp855 = $tmp855->next;
                }
                $fn857 $tmp856 = $tmp855->methods[1];
                panda$core$Object* $tmp858 = $tmp856(m$Iter842);
                m854 = ((org$pandalanguage$pandac$MethodDecl*) $tmp858);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m854);
                panda$collections$Array* $tmp860 = (panda$collections$Array*) malloc(40);
                $tmp860->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp860->refCount.value = 1;
                panda$collections$Array$init($tmp860);
                parameters859 = $tmp860;
                {
                    ITable* $tmp863 = ((panda$collections$Iterable*) m854->parameters)->$class->itable;
                    while ($tmp863->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp863 = $tmp863->next;
                    }
                    $fn865 $tmp864 = $tmp863->methods[0];
                    panda$collections$Iterator* $tmp866 = $tmp864(((panda$collections$Iterable*) m854->parameters));
                    p$Iter862 = $tmp866;
                    $l867:;
                    ITable* $tmp869 = p$Iter862->$class->itable;
                    while ($tmp869->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp869 = $tmp869->next;
                    }
                    $fn871 $tmp870 = $tmp869->methods[0];
                    panda$core$Bit $tmp872 = $tmp870(p$Iter862);
                    panda$core$Bit $tmp873 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp872);
                    if (!$tmp873.value) goto $l868;
                    {
                        ITable* $tmp875 = p$Iter862->$class->itable;
                        while ($tmp875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp875 = $tmp875->next;
                        }
                        $fn877 $tmp876 = $tmp875->methods[1];
                        panda$core$Object* $tmp878 = $tmp876(p$Iter862);
                        p874 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp878);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp879 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp879->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp879->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp881 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type767, p874->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp879, p874->name, $tmp881);
                        panda$collections$Array$add$panda$collections$Array$T(parameters859, ((panda$core$Object*) $tmp879));
                    }
                    goto $l867;
                    $l868:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp883 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
                $tmp883->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp883->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp885 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type767, m854->returnType);
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp883, result774, ((org$pandalanguage$pandac$Symbol*) m854)->position, m854->doccomment, m854->annotations, m854->methodKind, ((org$pandalanguage$pandac$Symbol*) m854)->name, parameters859, $tmp885, m854->body);
                clone882 = $tmp883;
                panda$collections$Array$add$panda$collections$Array$T(result774->methods, ((panda$core$Object*) clone882));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result774->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone882));
            }
            goto $l847;
            $l848:;
        }
        {
            ITable* $tmp887 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp887->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp887 = $tmp887->next;
            }
            $fn889 $tmp888 = $tmp887->methods[0];
            panda$collections$Iterator* $tmp890 = $tmp888(((panda$collections$Iterable*) p_cl->fields));
            f$Iter886 = $tmp890;
            $l891:;
            ITable* $tmp893 = f$Iter886->$class->itable;
            while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp893 = $tmp893->next;
            }
            $fn895 $tmp894 = $tmp893->methods[0];
            panda$core$Bit $tmp896 = $tmp894(f$Iter886);
            panda$core$Bit $tmp897 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp896);
            if (!$tmp897.value) goto $l892;
            {
                ITable* $tmp899 = f$Iter886->$class->itable;
                while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp899 = $tmp899->next;
                }
                $fn901 $tmp900 = $tmp899->methods[1];
                panda$core$Object* $tmp902 = $tmp900(f$Iter886);
                f898 = ((org$pandalanguage$pandac$FieldDecl*) $tmp902);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f898);
                org$pandalanguage$pandac$FieldDecl* $tmp904 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp904->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp904->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp906 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type767, f898->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp904, result774, ((org$pandalanguage$pandac$Symbol*) f898)->position, f898->doccomment, f898->annotations, f898->fieldKind, ((org$pandalanguage$pandac$Symbol*) f898)->name, $tmp906, f898->rawValue);
                clone903 = $tmp904;
                panda$collections$Array$add$panda$collections$Array$T(result774->fields, ((panda$core$Object*) clone903));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result774->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone903));
            }
            goto $l891;
            $l892:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result774)->name), ((panda$core$Object*) result774));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result774));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, result774);
    }
    }
    return result774;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result907;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp908 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result907 = $tmp908;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp909 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp910 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp909));
            result907 = $tmp910;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp911 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp911;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp912 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result907->annotations);
    if ($tmp912.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp913 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result907, p_type);
        result907 = $tmp913;
    }
    }
    return result907;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl914;
    panda$collections$Set* result916;
    panda$collections$Iterator* intf$Iter921;
    org$pandalanguage$pandac$Type* intf933;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp940;
    org$pandalanguage$pandac$ClassDecl* $tmp915 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl914 = $tmp915;
    PANDA_ASSERT(((panda$core$Bit) { cl914 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl914);
    panda$collections$Set* $tmp917 = (panda$collections$Set*) malloc(24);
    $tmp917->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp917->refCount.value = 1;
    panda$collections$Set$init($tmp917);
    result916 = $tmp917;
    if (((panda$core$Bit) { cl914->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp919 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl914->rawSuper);
        panda$collections$Set* $tmp920 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp919);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result916, ((panda$collections$CollectionView*) $tmp920));
    }
    }
    {
        ITable* $tmp922 = ((panda$collections$Iterable*) cl914->rawInterfaces)->$class->itable;
        while ($tmp922->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp922 = $tmp922->next;
        }
        $fn924 $tmp923 = $tmp922->methods[0];
        panda$collections$Iterator* $tmp925 = $tmp923(((panda$collections$Iterable*) cl914->rawInterfaces));
        intf$Iter921 = $tmp925;
        $l926:;
        ITable* $tmp928 = intf$Iter921->$class->itable;
        while ($tmp928->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp928 = $tmp928->next;
        }
        $fn930 $tmp929 = $tmp928->methods[0];
        panda$core$Bit $tmp931 = $tmp929(intf$Iter921);
        panda$core$Bit $tmp932 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp931);
        if (!$tmp932.value) goto $l927;
        {
            ITable* $tmp934 = intf$Iter921->$class->itable;
            while ($tmp934->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp934 = $tmp934->next;
            }
            $fn936 $tmp935 = $tmp934->methods[1];
            panda$core$Object* $tmp937 = $tmp935(intf$Iter921);
            intf933 = ((org$pandalanguage$pandac$Type*) $tmp937);
            org$pandalanguage$pandac$Type* $tmp938 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf933);
            panda$collections$Set* $tmp939 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp938);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result916, ((panda$collections$CollectionView*) $tmp939));
        }
        goto $l926;
        $l927:;
    }
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp940, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl914->classKind.$rawValue, $tmp940.$rawValue);
    if ($tmp941.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result916, ((panda$collections$Key*) p_t));
    }
    }
    return result916;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp947;
    panda$core$Bit $tmp942 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp942.value);
    panda$core$Bit $tmp943 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp943.value);
    panda$core$Int64 $tmp944 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp945 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp946 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp944, $tmp945);
    if ($tmp946.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp948 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp947, ((panda$core$Int64) { 0 }), $tmp948, ((panda$core$Bit) { false }));
    int64_t $tmp950 = $tmp947.min.value;
    panda$core$Int64 i949 = { $tmp950 };
    int64_t $tmp952 = $tmp947.max.value;
    bool $tmp953 = $tmp947.inclusive.value;
    if ($tmp953) goto $l960; else goto $l961;
    $l960:;
    if ($tmp950 <= $tmp952) goto $l954; else goto $l956;
    $l961:;
    if ($tmp950 < $tmp952) goto $l954; else goto $l956;
    $l954:;
    {
        panda$core$Object* $tmp962 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i949);
        panda$core$Object* $tmp963 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i949);
        panda$core$Bit $tmp964 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp962), ((org$pandalanguage$pandac$Type*) $tmp963));
        if ($tmp964.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l957:;
    int64_t $tmp966 = $tmp952 - i949.value;
    if ($tmp953) goto $l967; else goto $l968;
    $l967:;
    if ($tmp966 >= 1) goto $l965; else goto $l956;
    $l968:;
    if ($tmp966 > 1) goto $l965; else goto $l956;
    $l965:;
    i949.value += 1;
    goto $l954;
    $l956:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl971;
    panda$collections$Iterator* test$Iter973;
    org$pandalanguage$pandac$MethodDecl* test985;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp996;
    panda$collections$Iterator* raw$Iter999;
    org$pandalanguage$pandac$Type* raw1011;
    org$pandalanguage$pandac$MethodDecl* result1016;
    org$pandalanguage$pandac$ClassDecl* $tmp972 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl971 = $tmp972;
    PANDA_ASSERT(((panda$core$Bit) { cl971 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl971);
    {
        ITable* $tmp974 = ((panda$collections$Iterable*) cl971->methods)->$class->itable;
        while ($tmp974->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp974 = $tmp974->next;
        }
        $fn976 $tmp975 = $tmp974->methods[0];
        panda$collections$Iterator* $tmp977 = $tmp975(((panda$collections$Iterable*) cl971->methods));
        test$Iter973 = $tmp977;
        $l978:;
        ITable* $tmp980 = test$Iter973->$class->itable;
        while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp980 = $tmp980->next;
        }
        $fn982 $tmp981 = $tmp980->methods[0];
        panda$core$Bit $tmp983 = $tmp981(test$Iter973);
        panda$core$Bit $tmp984 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp983);
        if (!$tmp984.value) goto $l979;
        {
            ITable* $tmp986 = test$Iter973->$class->itable;
            while ($tmp986->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp986 = $tmp986->next;
            }
            $fn988 $tmp987 = $tmp986->methods[1];
            panda$core$Object* $tmp989 = $tmp987(test$Iter973);
            test985 = ((org$pandalanguage$pandac$MethodDecl*) $tmp989);
            panda$core$Bit $tmp990 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test985)->name, p_name);
            if ($tmp990.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test985);
                org$pandalanguage$pandac$Type* $tmp991 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test985);
                org$pandalanguage$pandac$Type* $tmp992 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp991);
                panda$core$Bit $tmp993 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp992, p_methodType);
                if ($tmp993.value) {
                {
                    return test985;
                }
                }
            }
            }
        }
        goto $l978;
        $l979:;
    }
    bool $tmp994 = p_checkInterfaces.value;
    if ($tmp994) goto $l995;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp996, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl971->classKind.$rawValue, $tmp996.$rawValue);
    $tmp994 = $tmp997.value;
    $l995:;
    panda$core$Bit $tmp998 = { $tmp994 };
    if ($tmp998.value) {
    {
        {
            ITable* $tmp1000 = ((panda$collections$Iterable*) cl971->rawInterfaces)->$class->itable;
            while ($tmp1000->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1000 = $tmp1000->next;
            }
            $fn1002 $tmp1001 = $tmp1000->methods[0];
            panda$collections$Iterator* $tmp1003 = $tmp1001(((panda$collections$Iterable*) cl971->rawInterfaces));
            raw$Iter999 = $tmp1003;
            $l1004:;
            ITable* $tmp1006 = raw$Iter999->$class->itable;
            while ($tmp1006->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1006 = $tmp1006->next;
            }
            $fn1008 $tmp1007 = $tmp1006->methods[0];
            panda$core$Bit $tmp1009 = $tmp1007(raw$Iter999);
            panda$core$Bit $tmp1010 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1009);
            if (!$tmp1010.value) goto $l1005;
            {
                ITable* $tmp1012 = raw$Iter999->$class->itable;
                while ($tmp1012->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1012 = $tmp1012->next;
                }
                $fn1014 $tmp1013 = $tmp1012->methods[1];
                panda$core$Object* $tmp1015 = $tmp1013(raw$Iter999);
                raw1011 = ((org$pandalanguage$pandac$Type*) $tmp1015);
                org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw1011);
                org$pandalanguage$pandac$MethodDecl* $tmp1018 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1017, p_name, p_methodType, p_checkInterfaces);
                result1016 = $tmp1018;
                if (((panda$core$Bit) { result1016 != NULL }).value) {
                {
                    return result1016;
                }
                }
            }
            goto $l1004;
            $l1005:;
        }
    }
    }
    if (((panda$core$Bit) { cl971->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1019 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl971->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1020 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1019, p_name, p_methodType, p_checkInterfaces);
        return $tmp1020;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1021;
    org$pandalanguage$pandac$Type* methodType1023;
    org$pandalanguage$pandac$Type* owner1025;
    panda$collections$Iterator* raw$Iter1027;
    org$pandalanguage$pandac$Type* raw1039;
    org$pandalanguage$pandac$MethodDecl* result1044;
    org$pandalanguage$pandac$MethodDecl* result1047;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1021, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp1022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, $tmp1021.$rawValue);
    if ($tmp1022.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1024 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1023 = $tmp1024;
    org$pandalanguage$pandac$Type* $tmp1026 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1025 = $tmp1026;
    {
        ITable* $tmp1028 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1028->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1028 = $tmp1028->next;
        }
        $fn1030 $tmp1029 = $tmp1028->methods[0];
        panda$collections$Iterator* $tmp1031 = $tmp1029(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1027 = $tmp1031;
        $l1032:;
        ITable* $tmp1034 = raw$Iter1027->$class->itable;
        while ($tmp1034->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1034 = $tmp1034->next;
        }
        $fn1036 $tmp1035 = $tmp1034->methods[0];
        panda$core$Bit $tmp1037 = $tmp1035(raw$Iter1027);
        panda$core$Bit $tmp1038 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1037);
        if (!$tmp1038.value) goto $l1033;
        {
            ITable* $tmp1040 = raw$Iter1027->$class->itable;
            while ($tmp1040->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1040 = $tmp1040->next;
            }
            $fn1042 $tmp1041 = $tmp1040->methods[1];
            panda$core$Object* $tmp1043 = $tmp1041(raw$Iter1027);
            raw1039 = ((org$pandalanguage$pandac$Type*) $tmp1043);
            org$pandalanguage$pandac$Type* $tmp1045 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1025, raw1039);
            org$pandalanguage$pandac$MethodDecl* $tmp1046 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1045, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1023, ((panda$core$Bit) { true }));
            result1044 = $tmp1046;
            if (((panda$core$Bit) { result1044 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1044;
                return result1044;
            }
            }
        }
        goto $l1032;
        $l1033:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1048 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1025, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1049 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1048, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1023, ((panda$core$Bit) { true }));
        result1047 = $tmp1049;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1047;
        return result1047;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1050;
    panda$collections$Array* result1052;
    panda$collections$Iterator* m$Iter1055;
    org$pandalanguage$pandac$MethodDecl* m1067;
    org$pandalanguage$pandac$MethodDecl* found1072;
    org$pandalanguage$pandac$ClassDecl* $tmp1051 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1050 = $tmp1051;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1050 != NULL }).value);
    panda$collections$Array* $tmp1053 = (panda$collections$Array*) malloc(40);
    $tmp1053->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1053->refCount.value = 1;
    panda$collections$Array$init($tmp1053);
    result1052 = $tmp1053;
    {
        ITable* $tmp1056 = ((panda$collections$Iterable*) intfClass1050->methods)->$class->itable;
        while ($tmp1056->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1056 = $tmp1056->next;
        }
        $fn1058 $tmp1057 = $tmp1056->methods[0];
        panda$collections$Iterator* $tmp1059 = $tmp1057(((panda$collections$Iterable*) intfClass1050->methods));
        m$Iter1055 = $tmp1059;
        $l1060:;
        ITable* $tmp1062 = m$Iter1055->$class->itable;
        while ($tmp1062->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1062 = $tmp1062->next;
        }
        $fn1064 $tmp1063 = $tmp1062->methods[0];
        panda$core$Bit $tmp1065 = $tmp1063(m$Iter1055);
        panda$core$Bit $tmp1066 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1065);
        if (!$tmp1066.value) goto $l1061;
        {
            ITable* $tmp1068 = m$Iter1055->$class->itable;
            while ($tmp1068->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1068 = $tmp1068->next;
            }
            $fn1070 $tmp1069 = $tmp1068->methods[1];
            panda$core$Object* $tmp1071 = $tmp1069(m$Iter1055);
            m1067 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1071);
            org$pandalanguage$pandac$Type* $tmp1073 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1074 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1067);
            org$pandalanguage$pandac$Type* $tmp1075 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1074);
            org$pandalanguage$pandac$MethodDecl* $tmp1076 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1073, ((org$pandalanguage$pandac$Symbol*) m1067)->name, $tmp1075, ((panda$core$Bit) { false }));
            found1072 = $tmp1076;
            PANDA_ASSERT(((panda$core$Bit) { found1072 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1052, ((panda$core$Object*) found1072));
        }
        goto $l1060;
        $l1061:;
    }
    return ((panda$collections$ListView*) result1052);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1078;
    panda$collections$Iterator* rawIntf$Iter1081;
    org$pandalanguage$pandac$Type* rawIntf1093;
    org$pandalanguage$pandac$ClassDecl* intf1098;
    panda$core$Bit $tmp1077 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1077.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1079 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1078 = $tmp1079;
            if (((panda$core$Bit) { superCl1078 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1080 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1078);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1080));
            }
            }
        }
        }
        {
            ITable* $tmp1082 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1082->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1082 = $tmp1082->next;
            }
            $fn1084 $tmp1083 = $tmp1082->methods[0];
            panda$collections$Iterator* $tmp1085 = $tmp1083(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1081 = $tmp1085;
            $l1086:;
            ITable* $tmp1088 = rawIntf$Iter1081->$class->itable;
            while ($tmp1088->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1088 = $tmp1088->next;
            }
            $fn1090 $tmp1089 = $tmp1088->methods[0];
            panda$core$Bit $tmp1091 = $tmp1089(rawIntf$Iter1081);
            panda$core$Bit $tmp1092 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1091);
            if (!$tmp1092.value) goto $l1087;
            {
                ITable* $tmp1094 = rawIntf$Iter1081->$class->itable;
                while ($tmp1094->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1094 = $tmp1094->next;
                }
                $fn1096 $tmp1095 = $tmp1094->methods[1];
                panda$core$Object* $tmp1097 = $tmp1095(rawIntf$Iter1081);
                rawIntf1093 = ((org$pandalanguage$pandac$Type*) $tmp1097);
                org$pandalanguage$pandac$ClassDecl* $tmp1099 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1093);
                intf1098 = $tmp1099;
                if (((panda$core$Bit) { intf1098 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1100 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1098);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1100));
                }
                }
            }
            goto $l1086;
            $l1087:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1103;
    panda$collections$Iterator* derived$Iter1106;
    org$pandalanguage$pandac$MethodDecl* derived1118;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1124;
    panda$core$Bit found1129;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1130;
    org$pandalanguage$pandac$MethodDecl* base1145;
    panda$core$Int64 $tmp1101 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1101, ((panda$core$Int64) { 0 }));
    if ($tmp1102.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1104 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1103 = $tmp1104;
            if (((panda$core$Bit) { superCl1103 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1105 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1103);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1105));
        }
        }
        {
            ITable* $tmp1107 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1107->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1107 = $tmp1107->next;
            }
            $fn1109 $tmp1108 = $tmp1107->methods[0];
            panda$collections$Iterator* $tmp1110 = $tmp1108(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1106 = $tmp1110;
            $l1111:;
            ITable* $tmp1113 = derived$Iter1106->$class->itable;
            while ($tmp1113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1113 = $tmp1113->next;
            }
            $fn1115 $tmp1114 = $tmp1113->methods[0];
            panda$core$Bit $tmp1116 = $tmp1114(derived$Iter1106);
            panda$core$Bit $tmp1117 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1116);
            if (!$tmp1117.value) goto $l1112;
            {
                ITable* $tmp1119 = derived$Iter1106->$class->itable;
                while ($tmp1119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1119 = $tmp1119->next;
                }
                $fn1121 $tmp1120 = $tmp1119->methods[1];
                panda$core$Object* $tmp1122 = $tmp1120(derived$Iter1106);
                derived1118 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1122);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1118);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1124, ((panda$core$Int64) { 2 }));
                panda$core$Bit $tmp1125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1118->methodKind.$rawValue, $tmp1124.$rawValue);
                bool $tmp1123 = $tmp1125.value;
                if ($tmp1123) goto $l1126;
                panda$core$Bit $tmp1127 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1118->annotations);
                $tmp1123 = $tmp1127.value;
                $l1126:;
                panda$core$Bit $tmp1128 = { $tmp1123 };
                if ($tmp1128.value) {
                {
                    goto $l1111;
                }
                }
                found1129 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1131 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1130, ((panda$core$Int64) { 0 }), $tmp1131, ((panda$core$Bit) { false }));
                int64_t $tmp1133 = $tmp1130.min.value;
                panda$core$Int64 i1132 = { $tmp1133 };
                int64_t $tmp1135 = $tmp1130.max.value;
                bool $tmp1136 = $tmp1130.inclusive.value;
                if ($tmp1136) goto $l1143; else goto $l1144;
                $l1143:;
                if ($tmp1133 <= $tmp1135) goto $l1137; else goto $l1139;
                $l1144:;
                if ($tmp1133 < $tmp1135) goto $l1137; else goto $l1139;
                $l1137:;
                {
                    panda$core$Object* $tmp1146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1132);
                    base1145 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1146);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1145);
                    panda$core$Bit $tmp1147 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1118, base1145);
                    if ($tmp1147.value) {
                    {
                        found1129 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1132, ((panda$core$Object*) derived1118));
                        goto $l1139;
                    }
                    }
                }
                $l1140:;
                int64_t $tmp1149 = $tmp1135 - i1132.value;
                if ($tmp1136) goto $l1150; else goto $l1151;
                $l1150:;
                if ($tmp1149 >= 1) goto $l1148; else goto $l1139;
                $l1151:;
                if ($tmp1149 > 1) goto $l1148; else goto $l1139;
                $l1148:;
                i1132.value += 1;
                goto $l1137;
                $l1139:;
                panda$core$Bit $tmp1154 = panda$core$Bit$$NOT$R$panda$core$Bit(found1129);
                if ($tmp1154.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1118));
                }
                }
            }
            goto $l1111;
            $l1112:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1155;
    org$pandalanguage$pandac$Symbol* s1158;
    panda$collections$Iterator* m$Iter1164;
    org$pandalanguage$pandac$MethodDecl* m1176;
    panda$collections$Iterator* p$Iter1183;
    org$pandalanguage$pandac$SymbolTable* p1195;
    panda$collections$Array* children1200;
    panda$collections$Array* types1212;
    panda$collections$Iterator* m$Iter1215;
    org$pandalanguage$pandac$MethodRef* m1227;
    panda$collections$Array* $tmp1156 = (panda$collections$Array*) malloc(40);
    $tmp1156->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1156->refCount.value = 1;
    panda$collections$Array$init($tmp1156);
    methods1155 = $tmp1156;
    org$pandalanguage$pandac$Symbol* $tmp1159 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1158 = $tmp1159;
    PANDA_ASSERT(((panda$core$Bit) { s1158 != NULL }).value);
    panda$core$Bit $tmp1160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1158->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1160.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1158));
        org$pandalanguage$pandac$MethodRef* $tmp1161 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1161->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1161->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1161, ((org$pandalanguage$pandac$MethodDecl*) s1158), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1155, ((panda$core$Object*) $tmp1161));
    }
    }
    else {
    {
        panda$core$Bit $tmp1163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1158->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1163.value);
        {
            ITable* $tmp1165 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1158)->methods)->$class->itable;
            while ($tmp1165->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1165 = $tmp1165->next;
            }
            $fn1167 $tmp1166 = $tmp1165->methods[0];
            panda$collections$Iterator* $tmp1168 = $tmp1166(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1158)->methods));
            m$Iter1164 = $tmp1168;
            $l1169:;
            ITable* $tmp1171 = m$Iter1164->$class->itable;
            while ($tmp1171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1171 = $tmp1171->next;
            }
            $fn1173 $tmp1172 = $tmp1171->methods[0];
            panda$core$Bit $tmp1174 = $tmp1172(m$Iter1164);
            panda$core$Bit $tmp1175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1174);
            if (!$tmp1175.value) goto $l1170;
            {
                ITable* $tmp1177 = m$Iter1164->$class->itable;
                while ($tmp1177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1177 = $tmp1177->next;
                }
                $fn1179 $tmp1178 = $tmp1177->methods[1];
                panda$core$Object* $tmp1180 = $tmp1178(m$Iter1164);
                m1176 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1180);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1176);
                org$pandalanguage$pandac$MethodRef* $tmp1181 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1181->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1181->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1181, m1176, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1155, ((panda$core$Object*) $tmp1181));
            }
            goto $l1169;
            $l1170:;
        }
    }
    }
    {
        ITable* $tmp1184 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1184->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1184 = $tmp1184->next;
        }
        $fn1186 $tmp1185 = $tmp1184->methods[0];
        panda$collections$Iterator* $tmp1187 = $tmp1185(((panda$collections$Iterable*) p_st->parents));
        p$Iter1183 = $tmp1187;
        $l1188:;
        ITable* $tmp1190 = p$Iter1183->$class->itable;
        while ($tmp1190->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1190 = $tmp1190->next;
        }
        $fn1192 $tmp1191 = $tmp1190->methods[0];
        panda$core$Bit $tmp1193 = $tmp1191(p$Iter1183);
        panda$core$Bit $tmp1194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1193);
        if (!$tmp1194.value) goto $l1189;
        {
            ITable* $tmp1196 = p$Iter1183->$class->itable;
            while ($tmp1196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1196 = $tmp1196->next;
            }
            $fn1198 $tmp1197 = $tmp1196->methods[1];
            panda$core$Object* $tmp1199 = $tmp1197(p$Iter1183);
            p1195 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1199);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1195, p_name, methods1155, p_types);
        }
        goto $l1188;
        $l1189:;
    }
    panda$collections$Array* $tmp1201 = (panda$collections$Array*) malloc(40);
    $tmp1201->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1201->refCount.value = 1;
    panda$collections$Array$init($tmp1201);
    children1200 = $tmp1201;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1200, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1203 = panda$collections$Array$get_count$R$panda$core$Int64(methods1155);
    panda$core$Bit $tmp1204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1203, ((panda$core$Int64) { 1 }));
    if ($tmp1204.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1205 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1205->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1205->refCount.value = 1;
        panda$core$Object* $tmp1207 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1155, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1208 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1207));
        panda$core$Object* $tmp1209 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1155, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1205, ((panda$core$Int64) { 1002 }), p_position, $tmp1208, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1209)), ((panda$collections$ListView*) children1200));
        return $tmp1205;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1210 = panda$collections$Array$get_count$R$panda$core$Int64(methods1155);
        panda$core$Bit $tmp1211 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1210, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1211.value);
        panda$collections$Array* $tmp1213 = (panda$collections$Array*) malloc(40);
        $tmp1213->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1213->refCount.value = 1;
        panda$collections$Array$init($tmp1213);
        types1212 = $tmp1213;
        {
            ITable* $tmp1216 = ((panda$collections$Iterable*) methods1155)->$class->itable;
            while ($tmp1216->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1216 = $tmp1216->next;
            }
            $fn1218 $tmp1217 = $tmp1216->methods[0];
            panda$collections$Iterator* $tmp1219 = $tmp1217(((panda$collections$Iterable*) methods1155));
            m$Iter1215 = $tmp1219;
            $l1220:;
            ITable* $tmp1222 = m$Iter1215->$class->itable;
            while ($tmp1222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1222 = $tmp1222->next;
            }
            $fn1224 $tmp1223 = $tmp1222->methods[0];
            panda$core$Bit $tmp1225 = $tmp1223(m$Iter1215);
            panda$core$Bit $tmp1226 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1225);
            if (!$tmp1226.value) goto $l1221;
            {
                ITable* $tmp1228 = m$Iter1215->$class->itable;
                while ($tmp1228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1228 = $tmp1228->next;
                }
                $fn1230 $tmp1229 = $tmp1228->methods[1];
                panda$core$Object* $tmp1231 = $tmp1229(m$Iter1215);
                m1227 = ((org$pandalanguage$pandac$MethodRef*) $tmp1231);
                org$pandalanguage$pandac$Type* $tmp1232 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1227);
                panda$collections$Array$add$panda$collections$Array$T(types1212, ((panda$core$Object*) $tmp1232));
            }
            goto $l1220;
            $l1221:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1233 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1233->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1233->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1235 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1235->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1235->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1235, ((panda$collections$ListView*) types1212));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1233, ((panda$core$Int64) { 1003 }), p_position, $tmp1235, ((panda$core$Object*) methods1155), ((panda$collections$ListView*) children1200));
        return $tmp1233;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1237;
    org$pandalanguage$pandac$FieldDecl* f1253;
    panda$collections$Array* children1256;
    org$pandalanguage$pandac$Type* effectiveType1261;
    org$pandalanguage$pandac$IRNode* result1266;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1238 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1237 = $tmp1238;
            if (((panda$core$Bit) { cl1237 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1239 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1237);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1237, $tmp1239);
                org$pandalanguage$pandac$IRNode* $tmp1240 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1240->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1240->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1242 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1243 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1237);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1240, ((panda$core$Int64) { 1001 }), p_position, $tmp1242, $tmp1243);
                return $tmp1240;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1244 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1244);
            org$pandalanguage$pandac$IRNode* $tmp1245 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1245->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1245->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1247 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1248 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1245, ((panda$core$Int64) { 1001 }), p_position, $tmp1247, $tmp1248);
            return $tmp1245;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1249 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1250 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1249);
            return $tmp1250;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1251 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1251->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1251->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1251, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1251;
        }
        break;
        case 202:
        {
            f1253 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1253);
            org$pandalanguage$pandac$Type* $tmp1254 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1255 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1253->type, $tmp1254);
            if ($tmp1255.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1257 = (panda$collections$Array*) malloc(40);
            $tmp1257->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1257->refCount.value = 1;
            panda$collections$Array$init($tmp1257);
            children1256 = $tmp1257;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1259.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1260);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1262 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1253->type);
                effectiveType1261 = $tmp1262;
                panda$core$Bit $tmp1263 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1253->annotations);
                if ($tmp1263.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1256, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1264 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1253->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1265 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1264);
                    panda$collections$Array$add$panda$collections$Array$T(children1256, ((panda$core$Object*) $tmp1265));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1267 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1267->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1267->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1267, ((panda$core$Int64) { 1026 }), p_position, f1253->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1256));
                result1266 = $tmp1267;
                panda$core$Bit $tmp1269 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1261, result1266->type);
                if ($tmp1269.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1270 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1266, p_position, ((panda$core$Bit) { false }), effectiveType1261);
                    result1266 = $tmp1270;
                }
                }
                return result1266;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1271 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1271->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1271->refCount.value = 1;
                panda$core$Object* $tmp1273 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1274 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1273));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1271, ((panda$core$Int64) { 1025 }), p_position, $tmp1274);
                panda$collections$Array$add$panda$collections$Array$T(children1256, ((panda$core$Object*) $tmp1271));
                org$pandalanguage$pandac$IRNode* $tmp1275 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1275->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1275->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1275, ((panda$core$Int64) { 1026 }), p_position, f1253->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1256));
                return $tmp1275;
            }
            }
        }
        break;
        case 209:
        {
            org$pandalanguage$pandac$IRNode* $tmp1277 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1277->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1277->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1279 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Symbol($tmp1277, ((panda$core$Int64) { 1046 }), p_position, $tmp1279, p_s);
            return $tmp1277;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_context, org$pandalanguage$pandac$Type* p_raw) {
    panda$collections$HashMap* typeMap1286;
    org$pandalanguage$pandac$Type* base1289;
    org$pandalanguage$pandac$ClassDecl* cl1291;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1293;
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
            panda$core$Int64 $tmp1280 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1280, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1281.value);
            panda$core$Object* $tmp1282 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1283 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1282), p_raw);
            return $tmp1283;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1284 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1285 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1284, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1285.value);
            panda$collections$HashMap* $tmp1287 = (panda$collections$HashMap*) malloc(56);
            $tmp1287->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1287->refCount.value = 1;
            panda$collections$HashMap$init($tmp1287);
            typeMap1286 = $tmp1287;
            panda$core$Object* $tmp1290 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1289 = ((org$pandalanguage$pandac$Type*) $tmp1290);
            org$pandalanguage$pandac$ClassDecl* $tmp1292 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1289)->name);
            cl1291 = $tmp1292;
            PANDA_ASSERT(((panda$core$Bit) { cl1291 != NULL }).value);
            panda$core$Int64 $tmp1294 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1293, ((panda$core$Int64) { 1 }), $tmp1294, ((panda$core$Bit) { false }));
            int64_t $tmp1296 = $tmp1293.min.value;
            panda$core$Int64 i1295 = { $tmp1296 };
            int64_t $tmp1298 = $tmp1293.max.value;
            bool $tmp1299 = $tmp1293.inclusive.value;
            if ($tmp1299) goto $l1306; else goto $l1307;
            $l1306:;
            if ($tmp1296 <= $tmp1298) goto $l1300; else goto $l1302;
            $l1307:;
            if ($tmp1296 < $tmp1298) goto $l1300; else goto $l1302;
            $l1300:;
            {
                panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1291)->name, &$s1308);
                panda$core$Int64 $tmp1310 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1295, ((panda$core$Int64) { 1 }));
                ITable* $tmp1311 = ((panda$collections$ListView*) cl1291->parameters)->$class->itable;
                while ($tmp1311->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1311 = $tmp1311->next;
                }
                $fn1313 $tmp1312 = $tmp1311->methods[0];
                panda$core$Object* $tmp1314 = $tmp1312(((panda$collections$ListView*) cl1291->parameters), $tmp1310);
                panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1309, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1314))->name);
                panda$core$Object* $tmp1316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1295);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1286, ((panda$collections$Key*) $tmp1315), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1316)));
            }
            $l1303:;
            int64_t $tmp1318 = $tmp1298 - i1295.value;
            if ($tmp1299) goto $l1319; else goto $l1320;
            $l1319:;
            if ($tmp1318 >= 1) goto $l1317; else goto $l1302;
            $l1320:;
            if ($tmp1318 > 1) goto $l1317; else goto $l1302;
            $l1317:;
            i1295.value += 1;
            goto $l1300;
            $l1302:;
            org$pandalanguage$pandac$Type* $tmp1323 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1286);
            return $tmp1323;
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
    panda$core$Bit $tmp1324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp1324.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1325 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1325;
    }
    }
    panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 26 }));
    if ($tmp1326.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1327 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
        return $tmp1327;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1328 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1329 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1328);
    if ($tmp1329.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1330 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1330;
    }
    }
    panda$core$Bit $tmp1331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1331.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1332 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1332;
    }
    }
    return p_type;
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char) {
    panda$core$Int32 c1336;
    panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_char->kind, ((panda$core$Int64) { 1033 }));
    PANDA_ASSERT($tmp1333.value);
    panda$core$Int64 $tmp1334 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_char->payload));
    panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1334, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1335.value);
    panda$core$Char32 $tmp1337 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_char->payload), ((panda$core$Int64) { 0 }));
    panda$core$Int32 $tmp1338 = panda$core$Char32$convert$R$panda$core$Int32($tmp1337);
    c1336 = $tmp1338;
    panda$core$Bit $tmp1339 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1336, ((panda$core$Int32) { 255 }));
    if ($tmp1339.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1340 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1336, ((panda$core$Int32) { 65535 }));
    if ($tmp1340.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    return ((panda$core$Int64) { 32 });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char, org$pandalanguage$pandac$IRNode* p_other) {
    panda$core$Int64 result1341;
    org$pandalanguage$pandac$Type* $match$1026_91351;
    panda$core$Int64 $tmp1342 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_char);
    result1341 = $tmp1342;
    panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1343 = $tmp1344.value;
    if (!$tmp1343) goto $l1345;
    panda$core$Int64 $tmp1346 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_other->payload));
    panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1346, ((panda$core$Int64) { 1 }));
    $tmp1343 = $tmp1347.value;
    $l1345:;
    panda$core$Bit $tmp1348 = { $tmp1343 };
    if ($tmp1348.value) {
    {
        panda$core$Int64 $tmp1349 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_other);
        panda$core$Int64 $tmp1350 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1341, $tmp1349);
        result1341 = $tmp1350;
    }
    }
    {
        $match$1026_91351 = p_other->type;
        org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1353 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1026_91351, $tmp1352);
        if ($tmp1353.value) {
        {
            panda$core$Int64 $tmp1354 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1341, ((panda$core$Int64) { 16 }));
            result1341 = $tmp1354;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp1355 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1356 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1026_91351, $tmp1355);
        if ($tmp1356.value) {
        {
            panda$core$Int64 $tmp1357 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1341, ((panda$core$Int64) { 32 }));
            result1341 = $tmp1357;
        }
        }
        }
    }
    switch (result1341.value) {
        case 8:
        {
            org$pandalanguage$pandac$Type* $tmp1358 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            return $tmp1358;
        }
        break;
        case 16:
        {
            org$pandalanguage$pandac$Type* $tmp1359 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            return $tmp1359;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$Type* $tmp1360 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            return $tmp1360;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* start1361;
    org$pandalanguage$pandac$Type* end1374;
    org$pandalanguage$pandac$Type* step1407;
    panda$collections$ImmutableArray* args1447;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1448;
    org$pandalanguage$pandac$IRNode* c1450;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1363 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1363)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1362 = $tmp1364.value;
            if (!$tmp1362) goto $l1365;
            panda$core$Object* $tmp1366 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp1367 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1366)->payload));
            panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1367, ((panda$core$Int64) { 1 }));
            $tmp1362 = $tmp1368.value;
            $l1365:;
            panda$core$Bit $tmp1369 = { $tmp1362 };
            if ($tmp1369.value) {
            {
                panda$core$Object* $tmp1370 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1371 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1372 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1370), ((org$pandalanguage$pandac$IRNode*) $tmp1371));
                start1361 = $tmp1372;
            }
            }
            else {
            {
                panda$core$Object* $tmp1373 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                start1361 = ((org$pandalanguage$pandac$IRNode*) $tmp1373)->type;
            }
            }
            panda$core$Object* $tmp1376 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1376)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1375 = $tmp1377.value;
            if (!$tmp1375) goto $l1378;
            panda$core$Object* $tmp1379 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1380 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1379)->payload));
            panda$core$Bit $tmp1381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1380, ((panda$core$Int64) { 1 }));
            $tmp1375 = $tmp1381.value;
            $l1378:;
            panda$core$Bit $tmp1382 = { $tmp1375 };
            if ($tmp1382.value) {
            {
                panda$core$Object* $tmp1383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1384 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1385 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1383), ((org$pandalanguage$pandac$IRNode*) $tmp1384));
                end1374 = $tmp1385;
            }
            }
            else {
            {
                panda$core$Object* $tmp1386 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                end1374 = ((org$pandalanguage$pandac$IRNode*) $tmp1386)->type;
            }
            }
            panda$core$Int64 $tmp1387 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1387, ((panda$core$Int64) { 2 }));
            if ($tmp1388.value) {
            {
                panda$core$Object* $tmp1389 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1389)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1390.value) {
                {
                    panda$core$Object* $tmp1391 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1391)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1392.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1393 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1394 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1393);
                        org$pandalanguage$pandac$Type* $tmp1395 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1394);
                        return $tmp1395;
                    }
                    }
                    org$pandalanguage$pandac$Type* $tmp1396 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1374);
                    org$pandalanguage$pandac$Type* $tmp1397 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1396);
                    org$pandalanguage$pandac$Type* $tmp1398 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1397);
                    return $tmp1398;
                }
                }
                panda$core$Object* $tmp1399 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1399)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1400.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1401 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1361);
                    org$pandalanguage$pandac$Type* $tmp1402 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1401);
                    org$pandalanguage$pandac$Type* $tmp1403 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1402);
                    return $tmp1403;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1404 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1361, self, end1374);
                org$pandalanguage$pandac$Type* $tmp1405 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1404);
                org$pandalanguage$pandac$Type* $tmp1406 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1405);
                return $tmp1406;
            }
            }
            panda$core$Object* $tmp1408 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1409 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$IRNode*) $tmp1408)->type);
            step1407 = $tmp1409;
            panda$core$Object* $tmp1410 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1410)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1411.value) {
            {
                panda$core$Object* $tmp1412 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1412)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1413.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1414 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, step1407);
                    org$pandalanguage$pandac$Type* $tmp1415 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1414);
                    org$pandalanguage$pandac$Type* $tmp1416 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1415);
                    return $tmp1416;
                }
                }
                panda$core$Bit $tmp1417 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1374);
                if ($tmp1417.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1418 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1374);
                    org$pandalanguage$pandac$Type* $tmp1419 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1418);
                    org$pandalanguage$pandac$Type* $tmp1420 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1419);
                    return $tmp1420;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1421 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(end1374, self, step1407);
                org$pandalanguage$pandac$Type* $tmp1422 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1421);
                org$pandalanguage$pandac$Type* $tmp1423 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1422);
                org$pandalanguage$pandac$Type* $tmp1424 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1423);
                return $tmp1424;
            }
            }
            panda$core$Object* $tmp1425 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1425)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1426.value) {
            {
                panda$core$Bit $tmp1427 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1361);
                if ($tmp1427.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1428 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1361);
                    org$pandalanguage$pandac$Type* $tmp1429 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1428);
                    org$pandalanguage$pandac$Type* $tmp1430 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1429);
                    return $tmp1430;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1431 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1361, self, step1407);
                org$pandalanguage$pandac$Type* $tmp1432 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1431);
                org$pandalanguage$pandac$Type* $tmp1433 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1432);
                org$pandalanguage$pandac$Type* $tmp1434 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1433);
                return $tmp1434;
            }
            }
            panda$core$Bit $tmp1436 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1361);
            bool $tmp1435 = $tmp1436.value;
            if (!$tmp1435) goto $l1437;
            panda$core$Bit $tmp1438 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1374);
            $tmp1435 = $tmp1438.value;
            $l1437:;
            panda$core$Bit $tmp1439 = { $tmp1435 };
            if ($tmp1439.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1440 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1361, self, end1374);
                org$pandalanguage$pandac$Type* $tmp1441 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1440);
                org$pandalanguage$pandac$Type* $tmp1442 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1441);
                return $tmp1442;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1443 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1361, self, end1374);
            org$pandalanguage$pandac$Type* $tmp1444 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1443, self, step1407);
            org$pandalanguage$pandac$Type* $tmp1445 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1444);
            org$pandalanguage$pandac$Type* $tmp1446 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1445);
            return $tmp1446;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1448, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1449 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1448);
            args1447 = $tmp1449;
            panda$core$Object* $tmp1451 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1453 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1451), &$s1452, ((panda$collections$ListView*) args1447));
            c1450 = $tmp1453;
            if (((panda$core$Bit) { c1450 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1454 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1454;
            }
            }
            return c1450->type;
        }
        break;
        case 1046:
        {
            org$pandalanguage$pandac$Type* $tmp1455 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload)->owner);
            return $tmp1455;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1456 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1456;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1467;
    panda$core$Int64$nullable result1471;
    panda$core$Int64$nullable best1480;
    panda$collections$Iterator* t$Iter1481;
    org$pandalanguage$pandac$Type* t1493;
    panda$core$Int64$nullable cost1498;
    org$pandalanguage$pandac$ClassDecl* cl1512;
    panda$core$Int64$nullable cost1514;
    panda$collections$Iterator* intf$Iter1519;
    org$pandalanguage$pandac$Type* intf1531;
    panda$core$Int64$nullable cost1536;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1457 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1457.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1458 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1459 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1458);
    if ($tmp1459.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1460.value) {
    {
        panda$core$Bit $tmp1461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1461.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1462 = $tmp1463.value;
    if (!$tmp1462) goto $l1464;
    panda$core$Bit $tmp1465 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1462 = $tmp1465.value;
    $l1464:;
    panda$core$Bit $tmp1466 = { $tmp1462 };
    if ($tmp1466.value) {
    {
        panda$core$Object* $tmp1468 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1469 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1468), p_target);
        result1467 = $tmp1469;
        if (((panda$core$Bit) { !result1467.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1470 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1467.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1470, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1472 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1473 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1472));
            result1471 = $tmp1473;
            if (((panda$core$Bit) { !result1471.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1474 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1471.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1474, true });
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
            panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1475.value) {
            {
                panda$core$Object* $tmp1476 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1477 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1476), p_target);
                return $tmp1477;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1478 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1479 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1478, p_target);
            return $tmp1479;
        }
        break;
        case 17:
        {
            best1480 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1482 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1482->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1482 = $tmp1482->next;
                }
                $fn1484 $tmp1483 = $tmp1482->methods[0];
                panda$collections$Iterator* $tmp1485 = $tmp1483(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1481 = $tmp1485;
                $l1486:;
                ITable* $tmp1488 = t$Iter1481->$class->itable;
                while ($tmp1488->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1488 = $tmp1488->next;
                }
                $fn1490 $tmp1489 = $tmp1488->methods[0];
                panda$core$Bit $tmp1491 = $tmp1489(t$Iter1481);
                panda$core$Bit $tmp1492 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1491);
                if (!$tmp1492.value) goto $l1487;
                {
                    ITable* $tmp1494 = t$Iter1481->$class->itable;
                    while ($tmp1494->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1494 = $tmp1494->next;
                    }
                    $fn1496 $tmp1495 = $tmp1494->methods[1];
                    panda$core$Object* $tmp1497 = $tmp1495(t$Iter1481);
                    t1493 = ((org$pandalanguage$pandac$Type*) $tmp1497);
                    panda$core$Int64$nullable $tmp1499 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1493, p_target);
                    cost1498 = $tmp1499;
                    bool $tmp1500 = ((panda$core$Bit) { cost1498.nonnull }).value;
                    if (!$tmp1500) goto $l1501;
                    bool $tmp1502 = ((panda$core$Bit) { !best1480.nonnull }).value;
                    if ($tmp1502) goto $l1503;
                    panda$core$Bit $tmp1504 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1498.value), ((panda$core$Int64) best1480.value));
                    $tmp1502 = $tmp1504.value;
                    $l1503:;
                    panda$core$Bit $tmp1505 = { $tmp1502 };
                    $tmp1500 = $tmp1505.value;
                    $l1501:;
                    panda$core$Bit $tmp1506 = { $tmp1500 };
                    if ($tmp1506.value) {
                    {
                        best1480 = cost1498;
                    }
                    }
                }
                goto $l1486;
                $l1487:;
            }
            return best1480;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1507 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1507;
        }
        break;
    }
    panda$core$Bit $tmp1508 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1509 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1508);
    if ($tmp1509.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1510 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1511 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1510);
    if ($tmp1511.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1513 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1512 = $tmp1513;
    PANDA_ASSERT(((panda$core$Bit) { cl1512 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1512);
    if (((panda$core$Bit) { cl1512->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1515 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1512->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1516 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1515);
        panda$core$Int64$nullable $tmp1517 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1516, p_target);
        cost1514 = $tmp1517;
        if (((panda$core$Bit) { cost1514.nonnull }).value) {
        {
            panda$core$Int64 $tmp1518 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1514.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1518, true });
        }
        }
    }
    }
    {
        ITable* $tmp1520 = ((panda$collections$Iterable*) cl1512->rawInterfaces)->$class->itable;
        while ($tmp1520->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1520 = $tmp1520->next;
        }
        $fn1522 $tmp1521 = $tmp1520->methods[0];
        panda$collections$Iterator* $tmp1523 = $tmp1521(((panda$collections$Iterable*) cl1512->rawInterfaces));
        intf$Iter1519 = $tmp1523;
        $l1524:;
        ITable* $tmp1526 = intf$Iter1519->$class->itable;
        while ($tmp1526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1526 = $tmp1526->next;
        }
        $fn1528 $tmp1527 = $tmp1526->methods[0];
        panda$core$Bit $tmp1529 = $tmp1527(intf$Iter1519);
        panda$core$Bit $tmp1530 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1529);
        if (!$tmp1530.value) goto $l1525;
        {
            ITable* $tmp1532 = intf$Iter1519->$class->itable;
            while ($tmp1532->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1532 = $tmp1532->next;
            }
            $fn1534 $tmp1533 = $tmp1532->methods[1];
            panda$core$Object* $tmp1535 = $tmp1533(intf$Iter1519);
            intf1531 = ((org$pandalanguage$pandac$Type*) $tmp1535);
            org$pandalanguage$pandac$Type* $tmp1537 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1531);
            org$pandalanguage$pandac$Type* $tmp1538 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1537);
            panda$core$Int64$nullable $tmp1539 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1538, p_target);
            cost1536 = $tmp1539;
            if (((panda$core$Bit) { cost1536.nonnull }).value) {
            {
                panda$core$Int64 $tmp1540 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1536.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1540, true });
            }
            }
        }
        goto $l1524;
        $l1525:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1542 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1541 = $tmp1542.value;
    if (!$tmp1541) goto $l1543;
    panda$core$Bit $tmp1544 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1541 = $tmp1544.value;
    $l1543:;
    panda$core$Bit $tmp1545 = { $tmp1541 };
    if ($tmp1545.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1547 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1546 = $tmp1547.value;
    if (!$tmp1546) goto $l1548;
    panda$core$Bit $tmp1549 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1546 = $tmp1549.value;
    $l1548:;
    panda$core$Bit $tmp1550 = { $tmp1546 };
    if ($tmp1550.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1552 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1551 = $tmp1552.value;
    if (!$tmp1551) goto $l1553;
    panda$core$Bit $tmp1554 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1551 = $tmp1554.value;
    $l1553:;
    panda$core$Bit $tmp1555 = { $tmp1551 };
    if ($tmp1555.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1556 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1556.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1557 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1557.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1558 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1558.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 base1559;
    panda$core$Int64$nullable cost1573;
    panda$core$String* s1633;
    panda$collections$Iterator* utf161644;
    panda$collections$ListView* methods1663;
    panda$collections$ImmutableArray* args1665;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1666;
    panda$core$Int64$nullable bestCost1668;
    panda$collections$Iterator* m$Iter1669;
    org$pandalanguage$pandac$MethodRef* m1681;
    panda$core$Int64$nullable cost1686;
    panda$core$Int64$nullable cost11709;
    panda$core$Int64$nullable cost21713;
    panda$core$Int64 cost1722;
    panda$core$Int64$nullable cost11736;
    panda$core$Int64$nullable cost21740;
    panda$core$Int64$nullable cost31745;
    panda$collections$Array* args1753;
    org$pandalanguage$pandac$ClassDecl* targetClass1766;
    panda$collections$Iterator* m$Iter1768;
    org$pandalanguage$pandac$MethodDecl* m1780;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1787;
    panda$core$Int64$nullable cost1793;
    panda$core$Int64$nullable cost1798;
    base1559 = ((panda$core$Int64) { 0 });
    panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1561 = $tmp1562.value;
    if (!$tmp1561) goto $l1563;
    panda$core$Bit $tmp1564 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1565 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1564);
    $tmp1561 = $tmp1565.value;
    $l1563:;
    panda$core$Bit $tmp1566 = { $tmp1561 };
    bool $tmp1560 = $tmp1566.value;
    if (!$tmp1560) goto $l1567;
    panda$core$Int64 $tmp1568 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
    panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1568, ((panda$core$Int64) { 1 }));
    $tmp1560 = $tmp1569.value;
    $l1567:;
    panda$core$Bit $tmp1570 = { $tmp1560 };
    if ($tmp1570.value) {
    {
        base1559 = ((panda$core$Int64) { 3 });
    }
    }
    panda$core$Bit $tmp1571 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1571.value) {
    {
        return ((panda$core$Int64$nullable) { base1559, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1572.value) {
            {
                return ((panda$core$Int64$nullable) { base1559, true });
            }
            }
            panda$core$Object* $tmp1574 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1575 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1574));
            cost1573 = $tmp1575;
            if (((panda$core$Bit) { !cost1573.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1576.value) {
            {
                panda$core$Int64 $tmp1577 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1559, ((panda$core$Int64) cost1573.value));
                return ((panda$core$Int64$nullable) { $tmp1577, true });
            }
            }
            panda$core$Int64 $tmp1578 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1559, ((panda$core$Int64) cost1573.value));
            panda$core$Int64 $tmp1579 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1578, ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1579, true });
        }
        break;
        case 22:
        {
            panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1559, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1580.value);
            panda$core$Int64$nullable $tmp1581 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1581;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1582.value) {
            {
                return ((panda$core$Int64$nullable) { base1559, true });
            }
            }
            panda$core$Bit $tmp1583 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1583.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1584 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1585 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1584, p_target);
                return $tmp1585;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1587 = $tmp1588.value;
            if (!$tmp1587) goto $l1589;
            panda$core$Int64 $tmp1590 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1591 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1590);
            panda$core$Int64 $tmp1592 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1593 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1591, $tmp1592);
            $tmp1587 = $tmp1593.value;
            $l1589:;
            panda$core$Bit $tmp1594 = { $tmp1587 };
            bool $tmp1586 = $tmp1594.value;
            if ($tmp1586) goto $l1595;
            panda$core$Bit $tmp1597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1596 = $tmp1597.value;
            if (!$tmp1596) goto $l1598;
            panda$core$Int64 $tmp1599 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1600 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1601 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1599, $tmp1600);
            $tmp1596 = $tmp1601.value;
            $l1598:;
            panda$core$Bit $tmp1602 = { $tmp1596 };
            $tmp1586 = $tmp1602.value;
            $l1595:;
            panda$core$Bit $tmp1603 = { $tmp1586 };
            if ($tmp1603.value) {
            {
                return ((panda$core$Int64$nullable) { base1559, true });
            }
            }
            panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1604.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1605 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1606 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1605);
            if ($tmp1606.value) {
            {
                panda$core$Bit $tmp1607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1559, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1607.value);
                org$pandalanguage$pandac$Type* $tmp1608 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1609 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1608, p_target);
                return $tmp1609;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1610 = $tmp1611.value;
            if (!$tmp1610) goto $l1612;
            panda$core$Int64 $tmp1613 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1614 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1613);
            panda$core$Int64 $tmp1615 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1614);
            panda$core$Int64 $tmp1616 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1617 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1615, $tmp1616);
            $tmp1610 = $tmp1617.value;
            $l1612:;
            panda$core$Bit $tmp1618 = { $tmp1610 };
            if ($tmp1618.value) {
            {
                return ((panda$core$Int64$nullable) { base1559, true });
            }
            }
            panda$core$Bit $tmp1619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1619.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1620 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1621 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1620);
            if ($tmp1621.value) {
            {
                panda$core$Bit $tmp1622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1559, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1622.value);
                org$pandalanguage$pandac$Type* $tmp1623 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1624 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1623, p_target);
                return $tmp1624;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1625.value) {
            {
                return ((panda$core$Int64$nullable) { base1559, true });
            }
            }
            panda$core$Bit $tmp1626 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1627 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1626);
            if ($tmp1627.value) {
            {
                panda$core$Bit $tmp1628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1559, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1628.value);
                org$pandalanguage$pandac$Type* $tmp1629 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1630 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1629, p_target);
                return $tmp1630;
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1631 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1632 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1631);
            if ($tmp1632.value) {
            {
                s1633 = ((panda$core$String*) p_expr->payload);
                panda$core$Int64 $tmp1635 = panda$core$String$length$R$panda$core$Int64(s1633);
                panda$core$Bit $tmp1636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1635, ((panda$core$Int64) { 1 }));
                bool $tmp1634 = $tmp1636.value;
                if (!$tmp1634) goto $l1637;
                panda$core$Char32 $tmp1638 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(s1633, ((panda$core$Int64) { 0 }));
                panda$core$UInt32 $tmp1639 = panda$core$Char32$convert$R$panda$core$UInt32($tmp1638);
                panda$core$Bit $tmp1640 = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit($tmp1639, ((panda$core$UInt32) { 255 }));
                $tmp1634 = $tmp1640.value;
                $l1637:;
                panda$core$Bit $tmp1641 = { $tmp1634 };
                if ($tmp1641.value) {
                {
                    return ((panda$core$Int64$nullable) { base1559, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1642 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1643 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1642);
            if ($tmp1643.value) {
            {
                panda$collections$Iterator* $tmp1645 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                utf161644 = $tmp1645;
                ITable* $tmp1646 = utf161644->$class->itable;
                while ($tmp1646->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1646 = $tmp1646->next;
                }
                $fn1648 $tmp1647 = $tmp1646->methods[0];
                panda$core$Bit $tmp1649 = $tmp1647(utf161644);
                if ($tmp1649.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1650 = utf161644->$class->itable;
                while ($tmp1650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1650 = $tmp1650->next;
                }
                $fn1652 $tmp1651 = $tmp1650->methods[1];
                $tmp1651(utf161644);
                ITable* $tmp1653 = utf161644->$class->itable;
                while ($tmp1653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1653 = $tmp1653->next;
                }
                $fn1655 $tmp1654 = $tmp1653->methods[0];
                panda$core$Bit $tmp1656 = $tmp1654(utf161644);
                if ($tmp1656.value) {
                {
                    panda$core$Int64 $tmp1657 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1559, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1657, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1658 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1659 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1658);
            if ($tmp1659.value) {
            {
                panda$core$Int64 $tmp1660 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
                panda$core$Bit $tmp1661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1660, ((panda$core$Int64) { 1 }));
                if ($tmp1661.value) {
                {
                    panda$core$Int64 $tmp1662 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1559, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1662, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1664 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1663 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1664)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1666, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1667 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1666);
            args1665 = $tmp1667;
            bestCost1668 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1670 = ((panda$collections$Iterable*) methods1663)->$class->itable;
                while ($tmp1670->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1670 = $tmp1670->next;
                }
                $fn1672 $tmp1671 = $tmp1670->methods[0];
                panda$collections$Iterator* $tmp1673 = $tmp1671(((panda$collections$Iterable*) methods1663));
                m$Iter1669 = $tmp1673;
                $l1674:;
                ITable* $tmp1676 = m$Iter1669->$class->itable;
                while ($tmp1676->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1676 = $tmp1676->next;
                }
                $fn1678 $tmp1677 = $tmp1676->methods[0];
                panda$core$Bit $tmp1679 = $tmp1677(m$Iter1669);
                panda$core$Bit $tmp1680 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1679);
                if (!$tmp1680.value) goto $l1675;
                {
                    ITable* $tmp1682 = m$Iter1669->$class->itable;
                    while ($tmp1682->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1682 = $tmp1682->next;
                    }
                    $fn1684 $tmp1683 = $tmp1682->methods[1];
                    panda$core$Object* $tmp1685 = $tmp1683(m$Iter1669);
                    m1681 = ((org$pandalanguage$pandac$MethodRef*) $tmp1685);
                    panda$core$Int64$nullable $tmp1687 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1681, ((panda$collections$ListView*) args1665), p_target);
                    cost1686 = $tmp1687;
                    if (((panda$core$Bit) { !cost1686.nonnull }).value) {
                    {
                        goto $l1674;
                    }
                    }
                    bool $tmp1688 = ((panda$core$Bit) { !bestCost1668.nonnull }).value;
                    if ($tmp1688) goto $l1689;
                    panda$core$Bit $tmp1690 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1686.value), ((panda$core$Int64) bestCost1668.value));
                    $tmp1688 = $tmp1690.value;
                    $l1689:;
                    panda$core$Bit $tmp1691 = { $tmp1688 };
                    if ($tmp1691.value) {
                    {
                        bestCost1668 = cost1686;
                    }
                    }
                }
                goto $l1674;
                $l1675:;
            }
            return bestCost1668;
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1692 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1692.value) {
            {
                panda$core$Int64 $tmp1693 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1694 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1693, ((panda$core$Int64) { 2 }));
                if ($tmp1694.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1696 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1696)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1695 = $tmp1697.value;
                if (!$tmp1695) goto $l1698;
                panda$core$Object* $tmp1699 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1699)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1695 = $tmp1700.value;
                $l1698:;
                panda$core$Bit $tmp1701 = { $tmp1695 };
                if ($tmp1701.value) {
                {
                    panda$core$Object* $tmp1702 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1702)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1703.value) {
                    {
                        panda$core$Object* $tmp1704 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1705 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1704)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1706 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1705));
                        if ($tmp1706.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1559, true });
                        }
                        }
                        panda$core$Int64 $tmp1707 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1559, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1707, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1708.value);
                panda$core$Object* $tmp1710 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1711 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1712 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1710), ((org$pandalanguage$pandac$Type*) $tmp1711));
                cost11709 = $tmp1712;
                if (((panda$core$Bit) { !cost11709.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1714 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1715 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1716 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1714), ((org$pandalanguage$pandac$Type*) $tmp1715));
                cost21713 = $tmp1716;
                if (((panda$core$Bit) { !cost21713.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1717 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1559, ((panda$core$Int64) cost11709.value));
                panda$core$Int64 $tmp1718 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1717, ((panda$core$Int64) cost21713.value));
                return ((panda$core$Int64$nullable) { $tmp1718, true });
            }
            }
            panda$core$Bit $tmp1719 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1719.value) {
            {
                panda$core$Int64 $tmp1720 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1721 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1720, ((panda$core$Int64) { 3 }));
                if ($tmp1721.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1724 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1724)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1723 = $tmp1725.value;
                if (!$tmp1723) goto $l1726;
                panda$core$Object* $tmp1727 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1727)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1723 = $tmp1728.value;
                $l1726:;
                panda$core$Bit $tmp1729 = { $tmp1723 };
                if ($tmp1729.value) {
                {
                    panda$core$Object* $tmp1730 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1730)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1731.value) {
                    {
                        panda$core$Object* $tmp1732 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1733 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1732)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1734 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1733));
                        if ($tmp1734.value) {
                        {
                            cost1722 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1722 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1735.value);
                    panda$core$Object* $tmp1737 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1738 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1739 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1737), ((org$pandalanguage$pandac$Type*) $tmp1738));
                    cost11736 = $tmp1739;
                    if (((panda$core$Bit) { !cost11736.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1741 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1742 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1743 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1741), ((org$pandalanguage$pandac$Type*) $tmp1742));
                    cost21740 = $tmp1743;
                    if (((panda$core$Bit) { !cost21740.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1744 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11736.value), ((panda$core$Int64) cost21740.value));
                    cost1722 = $tmp1744;
                }
                }
                panda$core$Object* $tmp1746 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1747 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1748 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1746), ((org$pandalanguage$pandac$Type*) $tmp1747));
                cost31745 = $tmp1748;
                if (((panda$core$Bit) { !cost31745.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1749 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1559, cost1722);
                panda$core$Int64 $tmp1750 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1749, ((panda$core$Int64) cost31745.value));
                return ((panda$core$Int64$nullable) { $tmp1750, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1751 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1752 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1751, p_target);
            return $tmp1752;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1754 = (panda$collections$Array*) malloc(40);
            $tmp1754->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1754->refCount.value = 1;
            panda$collections$Array$init($tmp1754);
            args1753 = $tmp1754;
            panda$core$Object* $tmp1756 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1753, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1756)));
            panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1559, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1757.value);
            panda$core$Object* $tmp1758 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1760 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1758), &$s1759, ((panda$collections$ListView*) args1753));
            panda$core$Int64$nullable $tmp1761 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1760, p_target);
            return $tmp1761;
        }
        break;
        case 1046:
        {
            org$pandalanguage$pandac$Type* $tmp1762 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload)->owner);
            panda$core$Int64$nullable $tmp1763 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1762, p_target);
            return $tmp1763;
        }
        break;
    }
    panda$core$Bit $tmp1764 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1765 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1764);
    if ($tmp1765.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1767 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1766 = $tmp1767;
    if (((panda$core$Bit) { targetClass1766 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1769 = ((panda$collections$Iterable*) targetClass1766->methods)->$class->itable;
        while ($tmp1769->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1769 = $tmp1769->next;
        }
        $fn1771 $tmp1770 = $tmp1769->methods[0];
        panda$collections$Iterator* $tmp1772 = $tmp1770(((panda$collections$Iterable*) targetClass1766->methods));
        m$Iter1768 = $tmp1772;
        $l1773:;
        ITable* $tmp1775 = m$Iter1768->$class->itable;
        while ($tmp1775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1775 = $tmp1775->next;
        }
        $fn1777 $tmp1776 = $tmp1775->methods[0];
        panda$core$Bit $tmp1778 = $tmp1776(m$Iter1768);
        panda$core$Bit $tmp1779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1778);
        if (!$tmp1779.value) goto $l1774;
        {
            ITable* $tmp1781 = m$Iter1768->$class->itable;
            while ($tmp1781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1781 = $tmp1781->next;
            }
            $fn1783 $tmp1782 = $tmp1781->methods[1];
            panda$core$Object* $tmp1784 = $tmp1782(m$Iter1768);
            m1780 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1784);
            panda$core$Bit $tmp1785 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1780->annotations);
            if ($tmp1785.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1780);
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1787, ((panda$core$Int64) { 2 }));
                panda$core$Bit $tmp1788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1780->methodKind.$rawValue, $tmp1787.$rawValue);
                bool $tmp1786 = $tmp1788.value;
                if (!$tmp1786) goto $l1789;
                panda$core$Int64 $tmp1790 = panda$collections$Array$get_count$R$panda$core$Int64(m1780->parameters);
                panda$core$Bit $tmp1791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1790, ((panda$core$Int64) { 1 }));
                $tmp1786 = $tmp1791.value;
                $l1789:;
                panda$core$Bit $tmp1792 = { $tmp1786 };
                if ($tmp1792.value) {
                {
                    panda$core$Object* $tmp1794 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1780->parameters, ((panda$core$Int64) { 0 }));
                    panda$core$Int64$nullable $tmp1795 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1794)->type);
                    cost1793 = $tmp1795;
                    if (((panda$core$Bit) { cost1793.nonnull }).value) {
                    {
                        panda$core$Int64 $tmp1796 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1559, ((panda$core$Int64) cost1793.value));
                        panda$core$Int64 $tmp1797 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1796, ((panda$core$Int64) { 2 }));
                        return ((panda$core$Int64$nullable) { $tmp1797, true });
                    }
                    }
                }
                }
            }
            }
        }
        goto $l1773;
        $l1774:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1799 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1798 = $tmp1799;
    if (((panda$core$Bit) { cost1798.nonnull }).value) {
    {
        panda$core$Int64 $tmp1800 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1559, ((panda$core$Int64) cost1798.value));
        return ((panda$core$Int64$nullable) { $tmp1800, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1809;
    org$pandalanguage$pandac$IRNode* intermediate1814;
    org$pandalanguage$pandac$IRNode* coerced1846;
    org$pandalanguage$pandac$IRNode* coerced1872;
    org$pandalanguage$pandac$IRNode* coerced1885;
    org$pandalanguage$pandac$IRNode* varType1899;
    panda$collections$Array* args1909;
    org$pandalanguage$pandac$IRNode* target1917;
    panda$collections$Array* args1928;
    org$pandalanguage$pandac$IRNode* target1940;
    panda$collections$Array* args1951;
    org$pandalanguage$pandac$IRNode* target1959;
    org$pandalanguage$pandac$Type* param1975;
    org$pandalanguage$pandac$IRNode* start1977;
    org$pandalanguage$pandac$IRNode* end1980;
    panda$collections$Array* args1983;
    org$pandalanguage$pandac$IRNode* target1989;
    org$pandalanguage$pandac$Type* endPoint2005;
    org$pandalanguage$pandac$IRNode* start2007;
    org$pandalanguage$pandac$IRNode* end2010;
    org$pandalanguage$pandac$IRNode* step2013;
    panda$collections$Array* args2017;
    org$pandalanguage$pandac$IRNode* target2023;
    panda$collections$ImmutableArray* args2031;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2032;
    org$pandalanguage$pandac$ChoiceEntry* c2038;
    org$pandalanguage$pandac$IRNode* owner2041;
    panda$collections$Array* args2046;
    panda$core$UInt64 value2049;
    panda$collections$Array* children2082;
    org$pandalanguage$pandac$IRNode* intermediate2088;
    org$pandalanguage$pandac$ClassDecl* cl2093;
    panda$collections$Iterator* m$Iter2095;
    org$pandalanguage$pandac$MethodDecl* m2107;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2115;
    org$pandalanguage$pandac$IRNode* type2125;
    panda$collections$Array* args2130;
    panda$collections$Array* children2135;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1801 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1801.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1802 = $tmp1803.value;
    if (!$tmp1802) goto $l1804;
    panda$core$Bit $tmp1805 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1802 = $tmp1805.value;
    $l1804:;
    panda$core$Bit $tmp1806 = { $tmp1802 };
    if ($tmp1806.value) {
    {
        panda$core$Object* $tmp1807 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1808 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1807), p_target);
        if ($tmp1808.value) {
        {
            panda$collections$Array* $tmp1810 = (panda$collections$Array*) malloc(40);
            $tmp1810->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1810->refCount.value = 1;
            panda$collections$Array$init($tmp1810);
            children1809 = $tmp1810;
            panda$collections$Array$add$panda$collections$Array$T(children1809, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1812 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1812->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1812->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1812, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1809));
            return $tmp1812;
        }
        }
        panda$core$Object* $tmp1815 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1816 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1815));
        intermediate1814 = $tmp1816;
        org$pandalanguage$pandac$IRNode* $tmp1817 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1814, p_target);
        return $tmp1817;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1818 = $tmp1819.value;
            if (!$tmp1818) goto $l1820;
            panda$core$Int64 $tmp1821 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1822 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1823 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1821, $tmp1822);
            $tmp1818 = $tmp1823.value;
            $l1820:;
            panda$core$Bit $tmp1824 = { $tmp1818 };
            if ($tmp1824.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1825 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1825->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1825->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1825, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1825;
            }
            }
            else {
            panda$core$Bit $tmp1828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1827 = $tmp1828.value;
            if (!$tmp1827) goto $l1829;
            panda$core$Int64 $tmp1830 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1831 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1832 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1830, $tmp1831);
            $tmp1827 = $tmp1832.value;
            $l1829:;
            panda$core$Bit $tmp1833 = { $tmp1827 };
            if ($tmp1833.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1834 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1834->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1834->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1834, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1834;
            }
            }
            else {
            panda$core$Bit $tmp1836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1836.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1837 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1837->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1837->refCount.value = 1;
                panda$core$Real64 $tmp1839 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1837, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1839);
                return $tmp1837;
            }
            }
            }
            }
            panda$core$Bit $tmp1841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1840 = $tmp1841.value;
            if (!$tmp1840) goto $l1842;
            panda$core$Bit $tmp1843 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1844 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1843);
            $tmp1840 = $tmp1844.value;
            $l1842:;
            panda$core$Bit $tmp1845 = { $tmp1840 };
            if ($tmp1845.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1847 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1848 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1847);
                coerced1846 = $tmp1848;
                if (((panda$core$Bit) { coerced1846 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1849 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1846, p_target);
                return $tmp1849;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1850 = $tmp1851.value;
            if (!$tmp1850) goto $l1852;
            panda$core$Int64 $tmp1853 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1854 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1853);
            panda$core$Int64 $tmp1855 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1854);
            panda$core$Int64 $tmp1856 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1857 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1855, $tmp1856);
            $tmp1850 = $tmp1857.value;
            $l1852:;
            panda$core$Bit $tmp1858 = { $tmp1850 };
            if ($tmp1858.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1859 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1859->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1859->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1859, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1859;
            }
            }
            else {
            panda$core$Bit $tmp1861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1861.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1862 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1862->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1862->refCount.value = 1;
                panda$core$Real64 $tmp1864 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                panda$core$Real64 $tmp1865 = panda$core$Real64$$SUB$R$panda$core$Real64($tmp1864);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1862, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1865);
                return $tmp1862;
            }
            }
            }
            panda$core$Bit $tmp1867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1866 = $tmp1867.value;
            if (!$tmp1866) goto $l1868;
            panda$core$Bit $tmp1869 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1870 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1869);
            $tmp1866 = $tmp1870.value;
            $l1868:;
            panda$core$Bit $tmp1871 = { $tmp1866 };
            if ($tmp1871.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1873 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1874 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1873);
                coerced1872 = $tmp1874;
                if (((panda$core$Bit) { coerced1872 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1875 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1872, p_target);
                return $tmp1875;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1876.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1877 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1877->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1877->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1877, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, ((panda$core$Real64$wrapper*) p_expr->payload)->value);
                return $tmp1877;
            }
            }
            panda$core$Bit $tmp1880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1879 = $tmp1880.value;
            if (!$tmp1879) goto $l1881;
            panda$core$Bit $tmp1882 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1883 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1882);
            $tmp1879 = $tmp1883.value;
            $l1881:;
            panda$core$Bit $tmp1884 = { $tmp1879 };
            if ($tmp1884.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1886 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1887 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1886);
                coerced1885 = $tmp1887;
                if (((panda$core$Bit) { coerced1885 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1888 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1885, p_target);
                return $tmp1888;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1889 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1890 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1889);
            if ($tmp1890.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1891 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1891->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1891->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1891, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1891;
            }
            }
            panda$core$Bit $tmp1894 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1893 = $tmp1894.value;
            if (!$tmp1893) goto $l1895;
            org$pandalanguage$pandac$Type* $tmp1896 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1897 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1896);
            $tmp1893 = $tmp1897.value;
            $l1895:;
            panda$core$Bit $tmp1898 = { $tmp1893 };
            if ($tmp1898.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1900 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1901 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1900);
                varType1899 = $tmp1901;
                if (((panda$core$Bit) { varType1899 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1902 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1899, p_target);
                    return $tmp1902;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1904 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1905 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1904);
            bool $tmp1903 = $tmp1905.value;
            if (!$tmp1903) goto $l1906;
            panda$core$Int64$nullable $tmp1907 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1903 = ((panda$core$Bit) { $tmp1907.nonnull }).value;
            $l1906:;
            panda$core$Bit $tmp1908 = { $tmp1903 };
            if ($tmp1908.value) {
            {
                panda$collections$Array* $tmp1910 = (panda$collections$Array*) malloc(40);
                $tmp1910->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1910->refCount.value = 1;
                panda$collections$Array$init($tmp1910);
                args1909 = $tmp1910;
                org$pandalanguage$pandac$IRNode* $tmp1912 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1912->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1912->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1914 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1915 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1916 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1915);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1912, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1914, $tmp1916);
                panda$collections$Array$add$panda$collections$Array$T(args1909, ((panda$core$Object*) $tmp1912));
                org$pandalanguage$pandac$IRNode* $tmp1918 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1918->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1918->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1920 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1918, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1920, p_target);
                target1917 = $tmp1918;
                org$pandalanguage$pandac$IRNode* $tmp1921 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1917, ((panda$collections$ListView*) args1909));
                return $tmp1921;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1923 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1924 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1923);
            bool $tmp1922 = $tmp1924.value;
            if (!$tmp1922) goto $l1925;
            panda$core$Int64$nullable $tmp1926 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1922 = ((panda$core$Bit) { $tmp1926.nonnull }).value;
            $l1925:;
            panda$core$Bit $tmp1927 = { $tmp1922 };
            if ($tmp1927.value) {
            {
                panda$collections$Array* $tmp1929 = (panda$collections$Array*) malloc(40);
                $tmp1929->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1929->refCount.value = 1;
                panda$collections$Array$init($tmp1929);
                args1928 = $tmp1929;
                org$pandalanguage$pandac$IRNode* $tmp1931 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1931->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1931->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1933 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1934 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1935 = $tmp1934->$class->itable;
                while ($tmp1935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1935 = $tmp1935->next;
                }
                $fn1937 $tmp1936 = $tmp1935->methods[1];
                panda$core$Object* $tmp1938 = $tmp1936($tmp1934);
                panda$core$UInt64 $tmp1939 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1938)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1931, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1933, $tmp1939);
                panda$collections$Array$add$panda$collections$Array$T(args1928, ((panda$core$Object*) $tmp1931));
                org$pandalanguage$pandac$IRNode* $tmp1941 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1941->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1941->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1943 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1941, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1943, p_target);
                target1940 = $tmp1941;
                org$pandalanguage$pandac$IRNode* $tmp1944 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1940, ((panda$collections$ListView*) args1928));
                return $tmp1944;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1946 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1947 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1946);
            bool $tmp1945 = $tmp1947.value;
            if (!$tmp1945) goto $l1948;
            panda$core$Int64$nullable $tmp1949 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1945 = ((panda$core$Bit) { $tmp1949.nonnull }).value;
            $l1948:;
            panda$core$Bit $tmp1950 = { $tmp1945 };
            if ($tmp1950.value) {
            {
                panda$collections$Array* $tmp1952 = (panda$collections$Array*) malloc(40);
                $tmp1952->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1952->refCount.value = 1;
                panda$collections$Array$init($tmp1952);
                args1951 = $tmp1952;
                org$pandalanguage$pandac$IRNode* $tmp1954 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1954->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1954->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1956 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1957 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1958 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1957);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1954, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1956, $tmp1958);
                panda$collections$Array$add$panda$collections$Array$T(args1951, ((panda$core$Object*) $tmp1954));
                org$pandalanguage$pandac$IRNode* $tmp1960 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1960->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1960->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1962 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1960, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1962, p_target);
                target1959 = $tmp1960;
                org$pandalanguage$pandac$IRNode* $tmp1963 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1959, ((panda$collections$ListView*) args1951));
                return $tmp1963;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1964 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1964.value) {
            {
                panda$core$Int64 $tmp1965 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1966 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1965, ((panda$core$Int64) { 2 }));
                if ($tmp1966.value) {
                {
                    panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1967, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1968, &$s1969);
                    panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1970, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1971, &$s1972);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1973);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1974.value);
                panda$core$Object* $tmp1976 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1975 = ((org$pandalanguage$pandac$Type*) $tmp1976);
                panda$core$Object* $tmp1978 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1979 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1978), param1975);
                start1977 = $tmp1979;
                if (((panda$core$Bit) { start1977 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp1981 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp1982 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1981), param1975);
                end1980 = $tmp1982;
                if (((panda$core$Bit) { end1980 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1984 = (panda$collections$Array*) malloc(40);
                $tmp1984->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1984->refCount.value = 1;
                panda$collections$Array$init($tmp1984);
                args1983 = $tmp1984;
                panda$collections$Array$add$panda$collections$Array$T(args1983, ((panda$core$Object*) start1977));
                panda$collections$Array$add$panda$collections$Array$T(args1983, ((panda$core$Object*) end1980));
                org$pandalanguage$pandac$IRNode* $tmp1986 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1986->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1986->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1988 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1986, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp1988, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args1983, ((panda$core$Object*) $tmp1986));
                org$pandalanguage$pandac$IRNode* $tmp1990 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1990->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1990->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1992 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1990, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1992, p_target);
                target1989 = $tmp1990;
                org$pandalanguage$pandac$IRNode* $tmp1993 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1989, ((panda$collections$ListView*) args1983));
                return $tmp1993;
            }
            }
            else {
            panda$core$Bit $tmp1994 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1994.value) {
            {
                panda$core$Int64 $tmp1995 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1996 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1995, ((panda$core$Int64) { 3 }));
                if ($tmp1996.value) {
                {
                    panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1997, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp2000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1998, &$s1999);
                    panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2000, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2001, &$s2002);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2003);
                    return NULL;
                }
                }
                panda$core$Bit $tmp2004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp2004.value);
                panda$core$Object* $tmp2006 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint2005 = ((org$pandalanguage$pandac$Type*) $tmp2006);
                panda$core$Object* $tmp2008 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2009 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2008), endPoint2005);
                start2007 = $tmp2009;
                if (((panda$core$Bit) { start2007 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp2011 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp2012 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2011), endPoint2005);
                end2010 = $tmp2012;
                panda$core$Object* $tmp2014 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp2015 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp2016 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2014), ((org$pandalanguage$pandac$Type*) $tmp2015));
                step2013 = $tmp2016;
                panda$collections$Array* $tmp2018 = (panda$collections$Array*) malloc(40);
                $tmp2018->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2018->refCount.value = 1;
                panda$collections$Array$init($tmp2018);
                args2017 = $tmp2018;
                panda$collections$Array$add$panda$collections$Array$T(args2017, ((panda$core$Object*) start2007));
                panda$collections$Array$add$panda$collections$Array$T(args2017, ((panda$core$Object*) end2010));
                panda$collections$Array$add$panda$collections$Array$T(args2017, ((panda$core$Object*) step2013));
                org$pandalanguage$pandac$IRNode* $tmp2020 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2020->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2020->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2022 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2020, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp2022, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args2017, ((panda$core$Object*) $tmp2020));
                org$pandalanguage$pandac$IRNode* $tmp2024 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2024->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2024->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2026 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2024, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2026, p_target);
                target2023 = $tmp2024;
                org$pandalanguage$pandac$IRNode* $tmp2027 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2023, ((panda$collections$ListView*) args2017));
                return $tmp2027;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp2028 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp2029 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2028, p_target);
                return $tmp2029;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp2030 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp2030;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2032, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp2033 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp2032);
            args2031 = $tmp2033;
            panda$core$Object* $tmp2034 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2036 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2034), &$s2035, ((panda$collections$ListView*) args2031), p_target);
            org$pandalanguage$pandac$IRNode* $tmp2037 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2036, p_target);
            return $tmp2037;
        }
        break;
        case 1046:
        {
            c2038 = ((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload);
            panda$core$Int64 $tmp2039 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(c2038->types);
            panda$core$Bit $tmp2040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2039, ((panda$core$Int64) { 0 }));
            if ($tmp2040.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2042 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2042->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2042->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2044 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2045 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(c2038->owner);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2042, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2044, $tmp2045);
                owner2041 = $tmp2042;
                panda$collections$Array* $tmp2047 = (panda$collections$Array*) malloc(40);
                $tmp2047->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2047->refCount.value = 1;
                panda$collections$Array$init($tmp2047);
                args2046 = $tmp2047;
                panda$core$UInt64 $tmp2050 = panda$core$Int64$convert$R$panda$core$UInt64(c2038->rawValue);
                value2049 = $tmp2050;
                org$pandalanguage$pandac$IRNode* $tmp2051 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2051->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2051->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2053 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2049);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2051, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp2053, value2049);
                panda$collections$Array$add$panda$collections$Array$T(args2046, ((panda$core$Object*) $tmp2051));
                org$pandalanguage$pandac$IRNode* $tmp2054 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, owner2041, ((panda$collections$ListView*) args2046));
                org$pandalanguage$pandac$IRNode* $tmp2055 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2054, p_target);
                return $tmp2055;
            }
            }
            panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2056, ((panda$core$Object*) p_expr));
            panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2057, &$s2058);
            panda$core$Int64 $tmp2060 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(c2038->types);
            panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2059, ((panda$core$Object*) wrap_panda$core$Int64($tmp2060)));
            panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, &$s2062);
            panda$core$Int64 $tmp2065 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(c2038->types);
            panda$core$Bit $tmp2066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2065, ((panda$core$Int64) { 1 }));
            ITable* $tmp2068 = ((panda$core$Formattable*) wrap_panda$core$Bit($tmp2066))->$class->itable;
            while ($tmp2068->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2068 = $tmp2068->next;
            }
            $fn2070 $tmp2069 = $tmp2068->methods[0];
            panda$core$String* $tmp2071 = $tmp2069(((panda$core$Formattable*) wrap_panda$core$Bit($tmp2066)), &$s2067);
            panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2064, $tmp2071);
            panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2072, &$s2073);
            panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2063, $tmp2074);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2075);
            return NULL;
        }
        break;
    }
    panda$core$Bit $tmp2076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2076.value) {
    {
        panda$core$Bit $tmp2077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2077.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2078 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2078->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2078->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2078, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp2078;
        }
        }
        panda$core$Object* $tmp2080 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2081 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp2080));
        if ($tmp2081.value) {
        {
            panda$collections$Array* $tmp2083 = (panda$collections$Array*) malloc(40);
            $tmp2083->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2083->refCount.value = 1;
            panda$collections$Array$init($tmp2083);
            children2082 = $tmp2083;
            panda$collections$Array$add$panda$collections$Array$T(children2082, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp2085 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2085->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2085->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2085, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children2082));
            return $tmp2085;
        }
        }
        panda$core$Bit $tmp2087 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2087.value) {
        {
            panda$core$Object* $tmp2089 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2090 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp2089));
            intermediate2088 = $tmp2090;
            org$pandalanguage$pandac$IRNode* $tmp2091 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate2088, p_target);
            return $tmp2091;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp2092 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp2092.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2094 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl2093 = $tmp2094;
        if (((panda$core$Bit) { cl2093 != NULL }).value) {
        {
            {
                ITable* $tmp2096 = ((panda$collections$Iterable*) cl2093->methods)->$class->itable;
                while ($tmp2096->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2096 = $tmp2096->next;
                }
                $fn2098 $tmp2097 = $tmp2096->methods[0];
                panda$collections$Iterator* $tmp2099 = $tmp2097(((panda$collections$Iterable*) cl2093->methods));
                m$Iter2095 = $tmp2099;
                $l2100:;
                ITable* $tmp2102 = m$Iter2095->$class->itable;
                while ($tmp2102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2102 = $tmp2102->next;
                }
                $fn2104 $tmp2103 = $tmp2102->methods[0];
                panda$core$Bit $tmp2105 = $tmp2103(m$Iter2095);
                panda$core$Bit $tmp2106 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2105);
                if (!$tmp2106.value) goto $l2101;
                {
                    ITable* $tmp2108 = m$Iter2095->$class->itable;
                    while ($tmp2108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2108 = $tmp2108->next;
                    }
                    $fn2110 $tmp2109 = $tmp2108->methods[1];
                    panda$core$Object* $tmp2111 = $tmp2109(m$Iter2095);
                    m2107 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2111);
                    panda$core$Bit $tmp2112 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m2107->annotations);
                    if ($tmp2112.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2107);
                        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2115, ((panda$core$Int64) { 2 }));
                        panda$core$Bit $tmp2116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2107->methodKind.$rawValue, $tmp2115.$rawValue);
                        bool $tmp2114 = $tmp2116.value;
                        if (!$tmp2114) goto $l2117;
                        panda$core$Int64 $tmp2118 = panda$collections$Array$get_count$R$panda$core$Int64(m2107->parameters);
                        panda$core$Bit $tmp2119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2118, ((panda$core$Int64) { 1 }));
                        $tmp2114 = $tmp2119.value;
                        $l2117:;
                        panda$core$Bit $tmp2120 = { $tmp2114 };
                        bool $tmp2113 = $tmp2120.value;
                        if (!$tmp2113) goto $l2121;
                        panda$core$Object* $tmp2122 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m2107->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp2123 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2122)->type);
                        $tmp2113 = ((panda$core$Bit) { $tmp2123.nonnull }).value;
                        $l2121:;
                        panda$core$Bit $tmp2124 = { $tmp2113 };
                        if ($tmp2124.value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp2126 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp2126->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp2126->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp2128 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp2129 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2093);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2126, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2128, $tmp2129);
                            type2125 = $tmp2126;
                            panda$collections$Array* $tmp2131 = (panda$collections$Array*) malloc(40);
                            $tmp2131->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp2131->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp2131, ((panda$core$Int64) { 1 }));
                            args2130 = $tmp2131;
                            panda$collections$Array$add$panda$collections$Array$T(args2130, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp2133 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type2125, ((panda$collections$ListView*) args2130));
                            org$pandalanguage$pandac$IRNode* $tmp2134 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2133, p_target);
                            return $tmp2134;
                        }
                        }
                    }
                    }
                }
                goto $l2100;
                $l2101:;
            }
        }
        }
        panda$collections$Array* $tmp2136 = (panda$collections$Array*) malloc(40);
        $tmp2136->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2136->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp2136, ((panda$core$Int64) { 1 }));
        children2135 = $tmp2136;
        panda$collections$Array$add$panda$collections$Array$T(children2135, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp2138 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2138->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2138->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2138, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children2135));
        return $tmp2138;
    }
    }
    panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2140, ((panda$core$Object*) p_target));
    panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, &$s2142);
    panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2143, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2144, &$s2145);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2146);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result2147;
    org$pandalanguage$pandac$IRNode* $tmp2148 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result2147 = $tmp2148;
    bool $tmp2149 = ((panda$core$Bit) { result2147 == NULL }).value;
    if ($tmp2149) goto $l2150;
    panda$core$Bit $tmp2151 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result2147->type, p_target);
    $tmp2149 = $tmp2151.value;
    $l2150:;
    panda$core$Bit $tmp2152 = { $tmp2149 };
    PANDA_ASSERT($tmp2152.value);
    return result2147;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp2154 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp2153 = $tmp2154.value;
    if (!$tmp2153) goto $l2155;
    panda$core$Bit $tmp2156 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp2153 = $tmp2156.value;
    $l2155:;
    panda$core$Bit $tmp2157 = { $tmp2153 };
    if ($tmp2157.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp2158 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp2158.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2160 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp2159 = $tmp2160.value;
    if (!$tmp2159) goto $l2161;
    panda$core$Bit $tmp2162 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp2159 = $tmp2162.value;
    $l2161:;
    panda$core$Bit $tmp2163 = { $tmp2159 };
    if ($tmp2163.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp2164.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp2165 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp2165.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result2167;
    org$pandalanguage$pandac$IRNode* resolved2174;
    panda$core$Int64$nullable $tmp2166 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp2166.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2168 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result2167 = $tmp2168;
    panda$core$Bit $tmp2170 = panda$core$Bit$$NOT$R$panda$core$Bit(result2167);
    bool $tmp2169 = $tmp2170.value;
    if (!$tmp2169) goto $l2171;
    panda$core$Bit $tmp2172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp2169 = $tmp2172.value;
    $l2171:;
    panda$core$Bit $tmp2173 = { $tmp2169 };
    if ($tmp2173.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2175 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved2174 = $tmp2175;
        bool $tmp2176 = ((panda$core$Bit) { resolved2174 != NULL }).value;
        if (!$tmp2176) goto $l2177;
        $tmp2176 = ((panda$core$Bit) { ((panda$core$Object*) resolved2174) != ((panda$core$Object*) p_node) }).value;
        $l2177:;
        panda$core$Bit $tmp2178 = { $tmp2176 };
        if ($tmp2178.value) {
        {
            panda$core$Bit $tmp2179 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved2174, p_target);
            result2167 = $tmp2179;
        }
        }
    }
    }
    return result2167;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2200;
    panda$collections$Array* children2203;
    panda$core$Bit $tmp2180 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp2180.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2181 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2182 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2181);
    PANDA_ASSERT($tmp2182.value);
    bool $tmp2183 = p_isExplicit.value;
    if (!$tmp2183) goto $l2184;
    panda$core$Bit $tmp2185 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp2186 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2185);
    $tmp2183 = $tmp2186.value;
    $l2184:;
    panda$core$Bit $tmp2187 = { $tmp2183 };
    if ($tmp2187.value) {
    {
        panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2188, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2190);
        panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2192, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, &$s2194);
        panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, $tmp2195);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2196);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2197 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2197;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2198 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2198.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2199 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2199;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2201 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2200 = $tmp2201;
            if (((panda$core$Bit) { resolved2200 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2202 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2200, p_position, p_isExplicit, p_target);
                return $tmp2202;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2204 = (panda$collections$Array*) malloc(40);
    $tmp2204->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2204->refCount.value = 1;
    panda$collections$Array$init($tmp2204);
    children2203 = $tmp2204;
    panda$collections$Array$add$panda$collections$Array$T(children2203, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2206 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2206->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2206->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2206, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children2203));
    return $tmp2206;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2214;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2215;
    panda$core$Int64$nullable cost2230;
    panda$core$Int64$nullable cost2244;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2208 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2209 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2209->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2209 = $tmp2209->next;
    }
    $fn2211 $tmp2210 = $tmp2209->methods[0];
    panda$core$Int64 $tmp2212 = $tmp2210(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2213 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2208, $tmp2212);
    if ($tmp2213.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2214 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2216 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2215, ((panda$core$Int64) { 0 }), $tmp2216, ((panda$core$Bit) { false }));
    int64_t $tmp2218 = $tmp2215.min.value;
    panda$core$Int64 i2217 = { $tmp2218 };
    int64_t $tmp2220 = $tmp2215.max.value;
    bool $tmp2221 = $tmp2215.inclusive.value;
    if ($tmp2221) goto $l2228; else goto $l2229;
    $l2228:;
    if ($tmp2218 <= $tmp2220) goto $l2222; else goto $l2224;
    $l2229:;
    if ($tmp2218 < $tmp2220) goto $l2222; else goto $l2224;
    $l2222:;
    {
        ITable* $tmp2231 = p_args->$class->itable;
        while ($tmp2231->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2231 = $tmp2231->next;
        }
        $fn2233 $tmp2232 = $tmp2231->methods[0];
        panda$core$Object* $tmp2234 = $tmp2232(p_args, i2217);
        org$pandalanguage$pandac$Type* $tmp2235 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2217);
        panda$core$Int64$nullable $tmp2236 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2234), $tmp2235);
        cost2230 = $tmp2236;
        if (((panda$core$Bit) { !cost2230.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2237 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2214, ((panda$core$Int64) cost2230.value));
        result2214 = $tmp2237;
    }
    $l2225:;
    int64_t $tmp2239 = $tmp2220 - i2217.value;
    if ($tmp2221) goto $l2240; else goto $l2241;
    $l2240:;
    if ($tmp2239 >= 1) goto $l2238; else goto $l2224;
    $l2241:;
    if ($tmp2239 > 1) goto $l2238; else goto $l2224;
    $l2238:;
    i2217.value += 1;
    goto $l2222;
    $l2224:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2245 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2246 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2245, p_expectedReturn);
        cost2244 = $tmp2246;
        if (((panda$core$Bit) { !cost2244.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2247 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2214, ((panda$core$Int64) cost2244.value));
        result2214 = $tmp2247;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2250 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2251 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2250);
    bool $tmp2249 = $tmp2251.value;
    if (!$tmp2249) goto $l2252;
    ITable* $tmp2253 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2253->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2253 = $tmp2253->next;
    }
    $fn2255 $tmp2254 = $tmp2253->methods[0];
    panda$core$Int64 $tmp2256 = $tmp2254(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2256, ((panda$core$Int64) { 1 }));
    $tmp2249 = $tmp2257.value;
    $l2252:;
    panda$core$Bit $tmp2258 = { $tmp2249 };
    bool $tmp2248 = $tmp2258.value;
    if (!$tmp2248) goto $l2259;
    panda$core$Object* $tmp2260 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2261 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2262 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2260)->type, $tmp2261);
    $tmp2248 = $tmp2262.value;
    $l2259:;
    panda$core$Bit $tmp2263 = { $tmp2248 };
    if ($tmp2263.value) {
    {
        panda$core$Int64 $tmp2264 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2214, ((panda$core$Int64) { 1 }));
        result2214 = $tmp2264;
    }
    }
    return ((panda$core$Int64$nullable) { result2214, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2265;
    panda$core$Int64$nullable best2268;
    panda$collections$Iterator* m$Iter2269;
    org$pandalanguage$pandac$MethodRef* m2281;
    panda$core$Int64$nullable cost2286;
    panda$collections$Array* $tmp2266 = (panda$collections$Array*) malloc(40);
    $tmp2266->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2266->refCount.value = 1;
    panda$collections$Array$init($tmp2266);
    result2265 = $tmp2266;
    best2268 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2270 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2270->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2270 = $tmp2270->next;
        }
        $fn2272 $tmp2271 = $tmp2270->methods[0];
        panda$collections$Iterator* $tmp2273 = $tmp2271(((panda$collections$Iterable*) p_methods));
        m$Iter2269 = $tmp2273;
        $l2274:;
        ITable* $tmp2276 = m$Iter2269->$class->itable;
        while ($tmp2276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2276 = $tmp2276->next;
        }
        $fn2278 $tmp2277 = $tmp2276->methods[0];
        panda$core$Bit $tmp2279 = $tmp2277(m$Iter2269);
        panda$core$Bit $tmp2280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2279);
        if (!$tmp2280.value) goto $l2275;
        {
            ITable* $tmp2282 = m$Iter2269->$class->itable;
            while ($tmp2282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2282 = $tmp2282->next;
            }
            $fn2284 $tmp2283 = $tmp2282->methods[1];
            panda$core$Object* $tmp2285 = $tmp2283(m$Iter2269);
            m2281 = ((org$pandalanguage$pandac$MethodRef*) $tmp2285);
            panda$core$Int64$nullable $tmp2287 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2281, p_args, p_expectedReturn);
            cost2286 = $tmp2287;
            if (((panda$core$Bit) { !cost2286.nonnull }).value) {
            {
                goto $l2274;
            }
            }
            bool $tmp2288 = ((panda$core$Bit) { !best2268.nonnull }).value;
            if ($tmp2288) goto $l2289;
            panda$core$Bit $tmp2290 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2286.value), ((panda$core$Int64) best2268.value));
            $tmp2288 = $tmp2290.value;
            $l2289:;
            panda$core$Bit $tmp2291 = { $tmp2288 };
            if ($tmp2291.value) {
            {
                panda$collections$Array$clear(result2265);
                best2268 = cost2286;
            }
            }
            panda$core$Bit $tmp2295;
            if (((panda$core$Bit) { cost2286.nonnull }).value) goto $l2292; else goto $l2293;
            $l2292:;
            panda$core$Bit $tmp2296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2286.value), ((panda$core$Int64) best2268.value));
            $tmp2295 = $tmp2296;
            goto $l2294;
            $l2293:;
            $tmp2295 = ((panda$core$Bit) { false });
            goto $l2294;
            $l2294:;
            if ($tmp2295.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2265, ((panda$core$Object*) m2281));
            }
            }
        }
        goto $l2274;
        $l2275:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2265));
    return best2268;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs2329;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2343;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2346;
    org$pandalanguage$pandac$IRNode* selfNode2367;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2396;
    org$pandalanguage$pandac$IRNode* coerced2414;
    org$pandalanguage$pandac$IRNode* result2429;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2297 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2298 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2298->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2298 = $tmp2298->next;
    }
    $fn2300 $tmp2299 = $tmp2298->methods[0];
    panda$core$Int64 $tmp2301 = $tmp2299(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2302 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2297, $tmp2301);
    if ($tmp2302.value) {
    {
        panda$core$String* $tmp2303 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2304 = panda$core$String$convert$R$panda$core$String($tmp2303);
        panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, &$s2305);
        panda$core$Int64 $tmp2307 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2306, ((panda$core$Object*) wrap_panda$core$Int64($tmp2307)));
        panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, &$s2309);
        panda$core$Int64 $tmp2311 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2311, ((panda$core$Int64) { 1 }));
        ITable* $tmp2314 = ((panda$core$Formattable*) wrap_panda$core$Bit($tmp2312))->$class->itable;
        while ($tmp2314->$class != (panda$core$Class*) &panda$core$Formattable$class) {
            $tmp2314 = $tmp2314->next;
        }
        $fn2316 $tmp2315 = $tmp2314->methods[0];
        panda$core$String* $tmp2317 = $tmp2315(((panda$core$Formattable*) wrap_panda$core$Bit($tmp2312)), &$s2313);
        panda$core$String* $tmp2318 = panda$core$String$convert$R$panda$core$String($tmp2317);
        panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2319);
        ITable* $tmp2321 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2321->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2321 = $tmp2321->next;
        }
        $fn2323 $tmp2322 = $tmp2321->methods[0];
        panda$core$Int64 $tmp2324 = $tmp2322(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2320, ((panda$core$Object*) wrap_panda$core$Int64($tmp2324)));
        panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2325, &$s2326);
        panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2310, $tmp2327);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2328);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2330 = (panda$collections$Array*) malloc(40);
    $tmp2330->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2330->refCount.value = 1;
    panda$collections$Array$init($tmp2330);
    finalArgs2329 = $tmp2330;
    bool $tmp2333 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2333) goto $l2334;
    panda$core$Bit $tmp2335 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2333 = $tmp2335.value;
    $l2334:;
    panda$core$Bit $tmp2336 = { $tmp2333 };
    bool $tmp2332 = $tmp2336.value;
    if (!$tmp2332) goto $l2337;
    panda$core$Bit $tmp2338 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2339 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2338);
    $tmp2332 = $tmp2339.value;
    $l2337:;
    panda$core$Bit $tmp2340 = { $tmp2332 };
    if ($tmp2340.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2341 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2342 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2341);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2329, ((panda$core$Object*) $tmp2342));
    }
    }
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2343, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind.$rawValue, $tmp2343.$rawValue);
    if ($tmp2344.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2345 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2346, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp2347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2345)->methodKind.$rawValue, $tmp2346.$rawValue);
            if ($tmp2347.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2348 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2348->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2348->refCount.value = 1;
                panda$core$Object* $tmp2350 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2351 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2350));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2348, ((panda$core$Int64) { 1025 }), p_position, $tmp2351);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2329, ((panda$core$Object*) $tmp2348));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2352);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2355 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2354 = $tmp2355.value;
        if (!$tmp2354) goto $l2356;
        panda$core$Bit $tmp2357 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2354 = $tmp2357.value;
        $l2356:;
        panda$core$Bit $tmp2358 = { $tmp2354 };
        bool $tmp2353 = $tmp2358.value;
        if (!$tmp2353) goto $l2359;
        panda$core$Bit $tmp2360 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2353 = $tmp2360.value;
        $l2359:;
        panda$core$Bit $tmp2361 = { $tmp2353 };
        if ($tmp2361.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2362);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2364 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2363 = $tmp2364.value;
    if (!$tmp2363) goto $l2365;
    $tmp2363 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2365:;
    panda$core$Bit $tmp2366 = { $tmp2363 };
    if ($tmp2366.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2368 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2368->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2368->refCount.value = 1;
        panda$core$Object* $tmp2370 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2371 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2370));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2368, ((panda$core$Int64) { 1025 }), p_position, $tmp2371);
        selfNode2367 = $tmp2368;
        org$pandalanguage$pandac$Type* $tmp2372 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2373 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2367, $tmp2372);
        selfNode2367 = $tmp2373;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2367 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2329, ((panda$core$Object*) selfNode2367));
        panda$core$Object* $tmp2374 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2375 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2374));
        panda$core$Bit $tmp2376 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2375);
        if ($tmp2376.value) {
        {
            panda$core$String* $tmp2378 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2377, $tmp2378);
            panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2379, &$s2380);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2381);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2384 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2385 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2384);
    bool $tmp2383 = $tmp2385.value;
    if (!$tmp2383) goto $l2386;
    $tmp2383 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2386:;
    panda$core$Bit $tmp2387 = { $tmp2383 };
    bool $tmp2382 = $tmp2387.value;
    if (!$tmp2382) goto $l2388;
    panda$core$Bit $tmp2389 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2382 = $tmp2389.value;
    $l2388:;
    panda$core$Bit $tmp2390 = { $tmp2382 };
    if ($tmp2390.value) {
    {
        panda$core$String* $tmp2392 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2391, $tmp2392);
        panda$core$String* $tmp2395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2393, &$s2394);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2395);
    }
    }
    }
    }
    ITable* $tmp2397 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2397->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2397 = $tmp2397->next;
    }
    $fn2399 $tmp2398 = $tmp2397->methods[0];
    panda$core$Int64 $tmp2400 = $tmp2398(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2396, ((panda$core$Int64) { 0 }), $tmp2400, ((panda$core$Bit) { false }));
    int64_t $tmp2402 = $tmp2396.min.value;
    panda$core$Int64 i2401 = { $tmp2402 };
    int64_t $tmp2404 = $tmp2396.max.value;
    bool $tmp2405 = $tmp2396.inclusive.value;
    if ($tmp2405) goto $l2412; else goto $l2413;
    $l2412:;
    if ($tmp2402 <= $tmp2404) goto $l2406; else goto $l2408;
    $l2413:;
    if ($tmp2402 < $tmp2404) goto $l2406; else goto $l2408;
    $l2406:;
    {
        ITable* $tmp2415 = p_args->$class->itable;
        while ($tmp2415->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2415 = $tmp2415->next;
        }
        $fn2417 $tmp2416 = $tmp2415->methods[0];
        panda$core$Object* $tmp2418 = $tmp2416(p_args, i2401);
        org$pandalanguage$pandac$Type* $tmp2419 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2401);
        org$pandalanguage$pandac$IRNode* $tmp2420 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2418), $tmp2419);
        coerced2414 = $tmp2420;
        if (((panda$core$Bit) { coerced2414 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2421 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2401);
        org$pandalanguage$pandac$IRNode* $tmp2422 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2414, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2421)->type);
        coerced2414 = $tmp2422;
        if (((panda$core$Bit) { coerced2414 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2329, ((panda$core$Object*) coerced2414));
    }
    $l2409:;
    int64_t $tmp2424 = $tmp2404 - i2401.value;
    if ($tmp2405) goto $l2425; else goto $l2426;
    $l2425:;
    if ($tmp2424 >= 1) goto $l2423; else goto $l2408;
    $l2426:;
    if ($tmp2424 > 1) goto $l2423; else goto $l2408;
    $l2423:;
    i2401.value += 1;
    goto $l2406;
    $l2408:;
    panda$core$Bit $tmp2431 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2430);
    if ($tmp2431.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2432 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2432->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2432->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2434 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2432, ((panda$core$Int64) { 1005 }), p_position, $tmp2434, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2329));
        result2429 = $tmp2432;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2435 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2435->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2435->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2435, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2329));
        result2429 = $tmp2435;
        org$pandalanguage$pandac$Type* $tmp2437 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2438 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2429, p_position, ((panda$core$Bit) { false }), $tmp2437);
        result2429 = $tmp2438;
    }
    }
    return result2429;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2439 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2439;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$String* p_name, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2440;
    org$pandalanguage$pandac$IRNode* right2441;
    panda$collections$Array* args2448;
    left2440 = p_rawLeft;
    org$pandalanguage$pandac$IRNode* $tmp2442 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawRight);
    right2441 = $tmp2442;
    if (((panda$core$Bit) { right2441 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2443 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2441, left2440->type);
    right2441 = $tmp2443;
    if (((panda$core$Bit) { right2441 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2445 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawLeft->position, p_rawLeft, &$s2444);
    left2440 = $tmp2445;
    org$pandalanguage$pandac$IRNode* $tmp2447 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, right2441->position, right2441, &$s2446);
    right2441 = $tmp2447;
    panda$collections$Array* $tmp2449 = (panda$collections$Array*) malloc(40);
    $tmp2449->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2449->refCount.value = 1;
    panda$collections$Array$init($tmp2449);
    args2448 = $tmp2449;
    panda$collections$Array$add$panda$collections$Array$T(args2448, ((panda$core$Object*) right2441));
    org$pandalanguage$pandac$IRNode* $tmp2451 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2440, p_name, ((panda$collections$ListView*) args2448));
    return $tmp2451;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2452;
    org$pandalanguage$pandac$ClassDecl* cl2454;
    org$pandalanguage$pandac$Symbol* s2464;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2476;
    org$pandalanguage$pandac$IRNode* ref2511;
    org$pandalanguage$pandac$IRNode* $tmp2453 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2452 = $tmp2453;
    if (((panda$core$Bit) { resolved2452 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2452->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2455.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2456 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2452->payload));
        cl2454 = $tmp2456;
    }
    }
    else {
    {
        panda$core$Bit $tmp2457 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2452->type);
        panda$core$Bit $tmp2458 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2457);
        if ($tmp2458.value) {
        {
            panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2459, ((panda$core$Object*) resolved2452->type));
            panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, &$s2461);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2462);
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2463 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2452->type);
        cl2454 = $tmp2463;
    }
    }
    if (((panda$core$Bit) { cl2454 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2465 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2454);
    org$pandalanguage$pandac$Symbol* $tmp2466 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2465, p_name);
    s2464 = $tmp2466;
    if (((panda$core$Bit) { s2464 == NULL }).value) {
    {
        panda$core$Bit $tmp2469 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2468);
        bool $tmp2467 = $tmp2469.value;
        if ($tmp2467) goto $l2470;
        panda$core$Bit $tmp2474 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2473);
        bool $tmp2472 = $tmp2474.value;
        if (!$tmp2472) goto $l2475;
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2476, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp2477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl2454->classKind.$rawValue, $tmp2476.$rawValue);
        $tmp2472 = $tmp2477.value;
        $l2475:;
        panda$core$Bit $tmp2478 = { $tmp2472 };
        bool $tmp2471 = $tmp2478.value;
        if (!$tmp2471) goto $l2479;
        ITable* $tmp2480 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2480->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2480 = $tmp2480->next;
        }
        $fn2482 $tmp2481 = $tmp2480->methods[0];
        panda$core$Int64 $tmp2483 = $tmp2481(((panda$collections$CollectionView*) p_args));
        panda$core$Bit $tmp2484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2483, ((panda$core$Int64) { 1 }));
        $tmp2471 = $tmp2484.value;
        $l2479:;
        panda$core$Bit $tmp2485 = { $tmp2471 };
        $tmp2467 = $tmp2485.value;
        $l2470:;
        panda$core$Bit $tmp2486 = { $tmp2467 };
        if ($tmp2486.value) {
        {
            ITable* $tmp2487 = p_args->$class->itable;
            while ($tmp2487->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2487 = $tmp2487->next;
            }
            $fn2489 $tmp2488 = $tmp2487->methods[0];
            panda$core$Object* $tmp2490 = $tmp2488(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2491 = org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, ((org$pandalanguage$pandac$IRNode*) $tmp2490));
            return $tmp2491;
        }
        }
        panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2492, ((org$pandalanguage$pandac$Symbol*) cl2454)->name);
        panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2493, &$s2494);
        panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, p_name);
        panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2496, &$s2497);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2498);
        return NULL;
    }
    }
    panda$core$Bit $tmp2500 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2464->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2499 = $tmp2500.value;
    if (!$tmp2499) goto $l2501;
    panda$core$Bit $tmp2502 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2464->kind, ((panda$core$Int64) { 205 }));
    $tmp2499 = $tmp2502.value;
    $l2501:;
    panda$core$Bit $tmp2503 = { $tmp2499 };
    if ($tmp2503.value) {
    {
        panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2504, ((org$pandalanguage$pandac$Symbol*) cl2454)->name);
        panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2505, &$s2506);
        panda$core$String* $tmp2508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2507, p_name);
        panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2508, &$s2509);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2510);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2512 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2454);
    org$pandalanguage$pandac$IRNode* $tmp2513 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2464, $tmp2512);
    ref2511 = $tmp2513;
    if (((panda$core$Bit) { ref2511 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2514 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2511, p_args, p_expectedType);
    return $tmp2514;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2515 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2515;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2516;
    panda$collections$Array* methods2523;
    org$pandalanguage$pandac$MethodDecl* first2528;
    panda$core$MutableString* msg2533;
    panda$core$String* separator2544;
    panda$collections$Iterator* a$Iter2546;
    org$pandalanguage$pandac$IRNode* a2558;
    org$pandalanguage$pandac$IRNode* target2572;
    panda$collections$Array* children2580;
    panda$collections$Array* types2586;
    panda$collections$Iterator* m$Iter2589;
    org$pandalanguage$pandac$MethodRef* m2601;
    org$pandalanguage$pandac$IRNode* target2611;
    org$pandalanguage$pandac$IRNode* initCall2614;
    panda$collections$Array* children2618;
    org$pandalanguage$pandac$IRNode* resolved2623;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2517 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2517, ((panda$core$Int64) { 0 }));
            if ($tmp2518.value) {
            {
                target2516 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2519 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2519, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2520.value);
                panda$core$Object* $tmp2521 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2516 = ((org$pandalanguage$pandac$IRNode*) $tmp2521);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2522 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2516, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2522;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2524 = (panda$collections$Array*) malloc(40);
            $tmp2524->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2524->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2524, ((panda$collections$ListView*) p_m->payload));
            methods2523 = $tmp2524;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2523, p_args, p_expectedType);
            panda$core$Int64 $tmp2526 = panda$collections$Array$get_count$R$panda$core$Int64(methods2523);
            panda$core$Bit $tmp2527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2526, ((panda$core$Int64) { 0 }));
            if ($tmp2527.value) {
            {
                ITable* $tmp2529 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2529->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2529 = $tmp2529->next;
                }
                $fn2531 $tmp2530 = $tmp2529->methods[0];
                panda$core$Object* $tmp2532 = $tmp2530(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2528 = ((org$pandalanguage$pandac$MethodRef*) $tmp2532)->value;
                panda$core$MutableString* $tmp2534 = (panda$core$MutableString*) malloc(48);
                $tmp2534->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2534->refCount.value = 1;
                panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2536, ((org$pandalanguage$pandac$Symbol*) first2528->owner)->name);
                panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2538);
                panda$core$String* $tmp2540 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2528)->name);
                panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2540, &$s2541);
                panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2539, $tmp2542);
                panda$core$MutableString$init$panda$core$String($tmp2534, $tmp2543);
                msg2533 = $tmp2534;
                separator2544 = &$s2545;
                {
                    ITable* $tmp2547 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2547->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2547 = $tmp2547->next;
                    }
                    $fn2549 $tmp2548 = $tmp2547->methods[0];
                    panda$collections$Iterator* $tmp2550 = $tmp2548(((panda$collections$Iterable*) p_args));
                    a$Iter2546 = $tmp2550;
                    $l2551:;
                    ITable* $tmp2553 = a$Iter2546->$class->itable;
                    while ($tmp2553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2553 = $tmp2553->next;
                    }
                    $fn2555 $tmp2554 = $tmp2553->methods[0];
                    panda$core$Bit $tmp2556 = $tmp2554(a$Iter2546);
                    panda$core$Bit $tmp2557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2556);
                    if (!$tmp2557.value) goto $l2552;
                    {
                        ITable* $tmp2559 = a$Iter2546->$class->itable;
                        while ($tmp2559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2559 = $tmp2559->next;
                        }
                        $fn2561 $tmp2560 = $tmp2559->methods[1];
                        panda$core$Object* $tmp2562 = $tmp2560(a$Iter2546);
                        a2558 = ((org$pandalanguage$pandac$IRNode*) $tmp2562);
                        panda$core$MutableString$append$panda$core$String(msg2533, separator2544);
                        panda$core$MutableString$append$panda$core$Object(msg2533, ((panda$core$Object*) a2558->type));
                        separator2544 = &$s2563;
                    }
                    goto $l2551;
                    $l2552:;
                }
                panda$core$MutableString$append$panda$core$String(msg2533, &$s2564);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2565, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2566, &$s2567);
                    panda$core$MutableString$append$panda$core$String(msg2533, $tmp2568);
                }
                }
                panda$core$String* $tmp2569 = panda$core$MutableString$finish$R$panda$core$String(msg2533);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2569);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2570 = panda$collections$Array$get_count$R$panda$core$Int64(methods2523);
            panda$core$Bit $tmp2571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2570, ((panda$core$Int64) { 1 }));
            if ($tmp2571.value) {
            {
                panda$core$Int64 $tmp2573 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2573, ((panda$core$Int64) { 1 }));
                if ($tmp2574.value) {
                {
                    panda$core$Object* $tmp2575 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2572 = ((org$pandalanguage$pandac$IRNode*) $tmp2575);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2576 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2576, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2577.value);
                    target2572 = NULL;
                }
                }
                panda$core$Object* $tmp2578 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2523, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2579 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2572, ((org$pandalanguage$pandac$MethodRef*) $tmp2578), p_args);
                return $tmp2579;
            }
            }
            panda$collections$Array* $tmp2581 = (panda$collections$Array*) malloc(40);
            $tmp2581->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2581->refCount.value = 1;
            panda$collections$Array$init($tmp2581);
            children2580 = $tmp2581;
            org$pandalanguage$pandac$IRNode* $tmp2583 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2583->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2583->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2585 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2583, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2585, ((panda$core$Object*) methods2523), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2580, ((panda$core$Object*) $tmp2583));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2580, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2587 = (panda$collections$Array*) malloc(40);
            $tmp2587->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2587->refCount.value = 1;
            panda$collections$Array$init($tmp2587);
            types2586 = $tmp2587;
            {
                ITable* $tmp2590 = ((panda$collections$Iterable*) methods2523)->$class->itable;
                while ($tmp2590->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2590 = $tmp2590->next;
                }
                $fn2592 $tmp2591 = $tmp2590->methods[0];
                panda$collections$Iterator* $tmp2593 = $tmp2591(((panda$collections$Iterable*) methods2523));
                m$Iter2589 = $tmp2593;
                $l2594:;
                ITable* $tmp2596 = m$Iter2589->$class->itable;
                while ($tmp2596->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2596 = $tmp2596->next;
                }
                $fn2598 $tmp2597 = $tmp2596->methods[0];
                panda$core$Bit $tmp2599 = $tmp2597(m$Iter2589);
                panda$core$Bit $tmp2600 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2599);
                if (!$tmp2600.value) goto $l2595;
                {
                    ITable* $tmp2602 = m$Iter2589->$class->itable;
                    while ($tmp2602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2602 = $tmp2602->next;
                    }
                    $fn2604 $tmp2603 = $tmp2602->methods[1];
                    panda$core$Object* $tmp2605 = $tmp2603(m$Iter2589);
                    m2601 = ((org$pandalanguage$pandac$MethodRef*) $tmp2605);
                    org$pandalanguage$pandac$Type* $tmp2606 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2601);
                    panda$collections$Array$add$panda$collections$Array$T(types2586, ((panda$core$Object*) $tmp2606));
                }
                goto $l2594;
                $l2595:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2607 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2607->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2607->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2609 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2609->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2609->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2609, ((panda$collections$ListView*) types2586));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2607, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2609, ((panda$collections$ListView*) children2580));
            return $tmp2607;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2612 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2612->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2612->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2612, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2611 = $tmp2612;
            org$pandalanguage$pandac$IRNode* $tmp2616 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2611, &$s2615, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2617 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2616);
            initCall2614 = $tmp2617;
            if (((panda$core$Bit) { initCall2614 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2619 = (panda$collections$Array*) malloc(40);
            $tmp2619->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2619->refCount.value = 1;
            panda$collections$Array$init($tmp2619);
            children2618 = $tmp2619;
            panda$collections$Array$add$panda$collections$Array$T(children2618, ((panda$core$Object*) initCall2614));
            org$pandalanguage$pandac$IRNode* $tmp2621 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2621->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2621->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2621, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2618));
            return $tmp2621;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2624 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2623 = $tmp2624;
            if (((panda$core$Bit) { resolved2623 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2626 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2625, ((panda$core$Object*) resolved2623->type));
            panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2626, &$s2627);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2623->position, $tmp2628);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2629;
    panda$core$MutableString* typeName2632;
    panda$core$String* separator2636;
    panda$collections$Iterator* p$Iter2638;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2650;
    panda$core$Int64 kind2656;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2657;
    panda$core$Char8 $tmp2663;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2630 = (panda$collections$Array*) malloc(40);
    $tmp2630->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2630->refCount.value = 1;
    panda$collections$Array$init($tmp2630);
    subtypes2629 = $tmp2630;
    panda$core$MutableString* $tmp2633 = (panda$core$MutableString*) malloc(48);
    $tmp2633->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2633->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2633, &$s2635);
    typeName2632 = $tmp2633;
    separator2636 = &$s2637;
    {
        ITable* $tmp2639 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2639->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2639 = $tmp2639->next;
        }
        $fn2641 $tmp2640 = $tmp2639->methods[0];
        panda$collections$Iterator* $tmp2642 = $tmp2640(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2638 = $tmp2642;
        $l2643:;
        ITable* $tmp2645 = p$Iter2638->$class->itable;
        while ($tmp2645->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2645 = $tmp2645->next;
        }
        $fn2647 $tmp2646 = $tmp2645->methods[0];
        panda$core$Bit $tmp2648 = $tmp2646(p$Iter2638);
        panda$core$Bit $tmp2649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2648);
        if (!$tmp2649.value) goto $l2644;
        {
            ITable* $tmp2651 = p$Iter2638->$class->itable;
            while ($tmp2651->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2651 = $tmp2651->next;
            }
            $fn2653 $tmp2652 = $tmp2651->methods[1];
            panda$core$Object* $tmp2654 = $tmp2652(p$Iter2638);
            p2650 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2654);
            panda$core$MutableString$append$panda$core$String(typeName2632, separator2636);
            panda$core$MutableString$append$panda$core$String(typeName2632, ((org$pandalanguage$pandac$Symbol*) p2650->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2629, ((panda$core$Object*) p2650->type));
            separator2636 = &$s2655;
        }
        goto $l2643;
        $l2644:;
    }
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2657, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, $tmp2657.$rawValue);
    if ($tmp2658.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2632, &$s2659);
        kind2656 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2632, &$s2660);
        kind2656 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2629, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2661 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2662 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2661);
    if ($tmp2662.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2632, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2663, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2632, $tmp2663);
    org$pandalanguage$pandac$Type* $tmp2664 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2664->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2664->refCount.value = 1;
    panda$core$String* $tmp2666 = panda$core$MutableString$finish$R$panda$core$String(typeName2632);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2664, $tmp2666, kind2656, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2629), ((panda$core$Bit) { true }));
    return $tmp2664;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2667;
    panda$core$MutableString* typeName2670;
    panda$collections$Iterator* p$Iter2674;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2686;
    panda$core$Int64 kind2692;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp2693;
    panda$core$Char8 $tmp2699;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2668 = (panda$collections$Array*) malloc(40);
    $tmp2668->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2668->refCount.value = 1;
    panda$collections$Array$init($tmp2668);
    subtypes2667 = $tmp2668;
    panda$core$MutableString* $tmp2671 = (panda$core$MutableString*) malloc(48);
    $tmp2671->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2671->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2671, &$s2673);
    typeName2670 = $tmp2671;
    panda$core$MutableString$append$panda$core$String(typeName2670, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2667, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2675 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2675->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2675 = $tmp2675->next;
        }
        $fn2677 $tmp2676 = $tmp2675->methods[0];
        panda$collections$Iterator* $tmp2678 = $tmp2676(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2674 = $tmp2678;
        $l2679:;
        ITable* $tmp2681 = p$Iter2674->$class->itable;
        while ($tmp2681->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2681 = $tmp2681->next;
        }
        $fn2683 $tmp2682 = $tmp2681->methods[0];
        panda$core$Bit $tmp2684 = $tmp2682(p$Iter2674);
        panda$core$Bit $tmp2685 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2684);
        if (!$tmp2685.value) goto $l2680;
        {
            ITable* $tmp2687 = p$Iter2674->$class->itable;
            while ($tmp2687->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2687 = $tmp2687->next;
            }
            $fn2689 $tmp2688 = $tmp2687->methods[1];
            panda$core$Object* $tmp2690 = $tmp2688(p$Iter2674);
            p2686 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2690);
            panda$core$MutableString$append$panda$core$String(typeName2670, &$s2691);
            panda$core$MutableString$append$panda$core$String(typeName2670, ((org$pandalanguage$pandac$Symbol*) p2686->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2667, ((panda$core$Object*) p2686->type));
        }
        goto $l2679;
        $l2680:;
    }
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp2693, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, $tmp2693.$rawValue);
    if ($tmp2694.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2670, &$s2695);
        kind2692 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2670, &$s2696);
        kind2692 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2667, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2697 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2698 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2697);
    if ($tmp2698.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2670, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2699, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2670, $tmp2699);
    org$pandalanguage$pandac$Type* $tmp2700 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2700->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2700->refCount.value = 1;
    panda$core$String* $tmp2702 = panda$core$MutableString$finish$R$panda$core$String(typeName2670);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2700, $tmp2702, kind2692, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2667), ((panda$core$Bit) { true }));
    return $tmp2700;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2703;
    org$pandalanguage$pandac$MethodDecl* $tmp2704 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2703 = $tmp2704;
    if (((panda$core$Bit) { inherited2703 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2705 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2705;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2706 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2703);
    return $tmp2706;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2707 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2708 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2707);
    return $tmp2708;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2709;
    org$pandalanguage$pandac$MethodDecl* $tmp2710 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2709 = $tmp2710;
    if (((panda$core$Bit) { inherited2709 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2711 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2711;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2712 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2709, p_selfType);
    return $tmp2712;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2713;
        }
        break;
        case 52:
        {
            return &$s2714;
        }
        break;
        case 53:
        {
            return &$s2715;
        }
        break;
        case 54:
        {
            return &$s2716;
        }
        break;
        case 55:
        {
            return &$s2717;
        }
        break;
        case 56:
        {
            return &$s2718;
        }
        break;
        case 57:
        {
            return &$s2719;
        }
        break;
        case 58:
        {
            return &$s2720;
        }
        break;
        case 59:
        {
            return &$s2721;
        }
        break;
        case 63:
        {
            return &$s2722;
        }
        break;
        case 62:
        {
            return &$s2723;
        }
        break;
        case 65:
        {
            return &$s2724;
        }
        break;
        case 64:
        {
            return &$s2725;
        }
        break;
        case 68:
        {
            return &$s2726;
        }
        break;
        case 69:
        {
            return &$s2727;
        }
        break;
        case 66:
        {
            return &$s2728;
        }
        break;
        case 67:
        {
            return &$s2729;
        }
        break;
        case 70:
        {
            return &$s2730;
        }
        break;
        case 71:
        {
            return &$s2731;
        }
        break;
        case 49:
        {
            return &$s2732;
        }
        break;
        case 50:
        {
            return &$s2733;
        }
        break;
        case 72:
        {
            return &$s2734;
        }
        break;
        case 1:
        {
            return &$s2735;
        }
        break;
        case 101:
        {
            return &$s2736;
        }
        break;
        case 73:
        {
            return &$s2737;
        }
        break;
        case 60:
        {
            return &$s2738;
        }
        break;
        case 61:
        {
            return &$s2739;
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
            panda$core$Int64 $tmp2740 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2740, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2741.value);
            panda$core$Bit $tmp2742 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2742.value) {
            {
                panda$core$Object* $tmp2743 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2744 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2743));
                return $tmp2744;
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
            panda$core$Object* $tmp2745 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2746 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2745));
            return $tmp2746;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2772;
    panda$core$Int64 r2774;
    panda$core$UInt64 v2776;
    panda$core$UInt64 v2782;
    panda$core$UInt64 v2788;
    panda$core$UInt64 v2794;
    panda$core$UInt64 v2800;
    panda$core$UInt64 v2830;
    panda$core$UInt64 v2836;
    panda$core$UInt64 v2842;
    panda$core$UInt64 v2848;
    panda$core$UInt64 v2854;
    panda$core$Bit $tmp2748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2747 = $tmp2748.value;
    if ($tmp2747) goto $l2749;
    panda$core$Bit $tmp2750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2747 = $tmp2750.value;
    $l2749:;
    panda$core$Bit $tmp2751 = { $tmp2747 };
    PANDA_ASSERT($tmp2751.value);
    panda$core$Bit $tmp2753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2752 = $tmp2753.value;
    if ($tmp2752) goto $l2754;
    panda$core$Bit $tmp2755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2752 = $tmp2755.value;
    $l2754:;
    panda$core$Bit $tmp2756 = { $tmp2752 };
    PANDA_ASSERT($tmp2756.value);
    panda$core$Bit $tmp2759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2758 = $tmp2759.value;
    if ($tmp2758) goto $l2760;
    panda$core$UInt64 $tmp2762 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2763 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2762);
    bool $tmp2761 = $tmp2763.value;
    if (!$tmp2761) goto $l2764;
    panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2761 = $tmp2765.value;
    $l2764:;
    panda$core$Bit $tmp2766 = { $tmp2761 };
    $tmp2758 = $tmp2766.value;
    $l2760:;
    panda$core$Bit $tmp2767 = { $tmp2758 };
    bool $tmp2757 = $tmp2767.value;
    if ($tmp2757) goto $l2768;
    panda$core$UInt64 $tmp2769 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2770 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2769);
    $tmp2757 = $tmp2770.value;
    $l2768:;
    panda$core$Bit $tmp2771 = { $tmp2757 };
    if ($tmp2771.value) {
    {
        panda$core$Int64 $tmp2773 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2772 = $tmp2773;
        panda$core$Int64 $tmp2775 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2774 = $tmp2775;
        switch (p_op.value) {
            case 51:
            {
                panda$core$Int64 $tmp2777 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2772, r2774);
                panda$core$UInt64 $tmp2778 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2777);
                v2776 = $tmp2778;
                org$pandalanguage$pandac$IRNode* $tmp2779 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2779->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2779->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2781 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2776);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2779, ((panda$core$Int64) { 1004 }), p_position, $tmp2781, v2776);
                return $tmp2779;
            }
            break;
            case 52:
            {
                panda$core$Int64 $tmp2783 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2772, r2774);
                panda$core$UInt64 $tmp2784 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2783);
                v2782 = $tmp2784;
                org$pandalanguage$pandac$IRNode* $tmp2785 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2785->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2785->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2787 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2782);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2785, ((panda$core$Int64) { 1004 }), p_position, $tmp2787, v2782);
                return $tmp2785;
            }
            break;
            case 53:
            {
                panda$core$Int64 $tmp2789 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2772, r2774);
                panda$core$UInt64 $tmp2790 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2789);
                v2788 = $tmp2790;
                org$pandalanguage$pandac$IRNode* $tmp2791 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2791->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2791->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2793 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2788);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2791, ((panda$core$Int64) { 1004 }), p_position, $tmp2793, v2788);
                return $tmp2791;
            }
            break;
            case 55:
            {
                panda$core$Int64 $tmp2795 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2772, r2774);
                panda$core$UInt64 $tmp2796 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2795);
                v2794 = $tmp2796;
                org$pandalanguage$pandac$IRNode* $tmp2797 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2797->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2797->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2799 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2794);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2797, ((panda$core$Int64) { 1004 }), p_position, $tmp2799, v2794);
                return $tmp2797;
            }
            break;
            case 56:
            {
                panda$core$Int64 $tmp2801 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2772, r2774);
                panda$core$UInt64 $tmp2802 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2801);
                v2800 = $tmp2802;
                org$pandalanguage$pandac$IRNode* $tmp2803 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2803->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2803->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2805 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2800);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2803, ((panda$core$Int64) { 1004 }), p_position, $tmp2805, v2800);
                return $tmp2803;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2806 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2806->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2806->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2808 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2772, r2774);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2806, ((panda$core$Int64) { 1011 }), p_position, $tmp2808, $tmp2809);
                return $tmp2806;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2810 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2810->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2810->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2812 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2813 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2772, r2774);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2810, ((panda$core$Int64) { 1011 }), p_position, $tmp2812, $tmp2813);
                return $tmp2810;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2814 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2814->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2814->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2816 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2817 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2772, r2774);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2814, ((panda$core$Int64) { 1011 }), p_position, $tmp2816, $tmp2817);
                return $tmp2814;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2818 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2818->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2818->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2820 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2821 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2772, r2774);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2818, ((panda$core$Int64) { 1011 }), p_position, $tmp2820, $tmp2821);
                return $tmp2818;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2822 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2822->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2822->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2824 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2825 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2772, r2774);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2822, ((panda$core$Int64) { 1011 }), p_position, $tmp2824, $tmp2825);
                return $tmp2822;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2826 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2826->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2826->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2828 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2829 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2772, r2774);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2826, ((panda$core$Int64) { 1011 }), p_position, $tmp2828, $tmp2829);
                return $tmp2826;
            }
            break;
            case 67:
            {
                panda$core$Int64 $tmp2831 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2772, r2774);
                panda$core$UInt64 $tmp2832 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2831);
                v2830 = $tmp2832;
                org$pandalanguage$pandac$IRNode* $tmp2833 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2833->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2833->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2835 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2830);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2833, ((panda$core$Int64) { 1004 }), p_position, $tmp2835, v2830);
                return $tmp2833;
            }
            break;
            case 69:
            {
                panda$core$Int64 $tmp2837 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2772, r2774);
                panda$core$UInt64 $tmp2838 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2837);
                v2836 = $tmp2838;
                org$pandalanguage$pandac$IRNode* $tmp2839 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2839->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2839->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2841 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2836);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2839, ((panda$core$Int64) { 1004 }), p_position, $tmp2841, v2836);
                return $tmp2839;
            }
            break;
            case 71:
            {
                panda$core$Int64 $tmp2843 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2772, r2774);
                panda$core$UInt64 $tmp2844 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2843);
                v2842 = $tmp2844;
                org$pandalanguage$pandac$IRNode* $tmp2845 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2845->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2845->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2847 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2842);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2845, ((panda$core$Int64) { 1004 }), p_position, $tmp2847, v2842);
                return $tmp2845;
            }
            break;
            case 72:
            {
                panda$core$Int64 $tmp2849 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2772, r2774);
                panda$core$UInt64 $tmp2850 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2849);
                v2848 = $tmp2850;
                org$pandalanguage$pandac$IRNode* $tmp2851 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2851->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2851->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2853 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2848);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2851, ((panda$core$Int64) { 1004 }), p_position, $tmp2853, v2848);
                return $tmp2851;
            }
            break;
            case 1:
            {
                panda$core$Int64 $tmp2855 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2772, r2774);
                panda$core$UInt64 $tmp2856 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2855);
                v2854 = $tmp2856;
                org$pandalanguage$pandac$IRNode* $tmp2857 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2857->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2857->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2859 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2854);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2857, ((panda$core$Int64) { 1004 }), p_position, $tmp2859, v2854);
                return $tmp2857;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2860);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2861.value) {
    {
        panda$core$Object* $tmp2862 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2862);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2867;
    org$pandalanguage$pandac$IRNode* resolved2875;
    panda$collections$Array* children2880;
    panda$core$UInt64 baseId2886;
    org$pandalanguage$pandac$IRNode* base2887;
    panda$core$UInt64 indexId2894;
    org$pandalanguage$pandac$IRNode* index2895;
    org$pandalanguage$pandac$IRNode* baseRef2900;
    org$pandalanguage$pandac$IRNode* indexRef2903;
    org$pandalanguage$pandac$IRNode* rhsIndex2906;
    org$pandalanguage$pandac$IRNode* value2908;
    panda$core$Bit $tmp2863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2863.value);
    panda$core$Int64 $tmp2864 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2864, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2865.value);
    panda$core$Bit $tmp2866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2866.value) {
    {
        panda$collections$Array* $tmp2868 = (panda$collections$Array*) malloc(40);
        $tmp2868->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2868->refCount.value = 1;
        panda$collections$Array$init($tmp2868);
        args2867 = $tmp2868;
        panda$core$Object* $tmp2870 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2867, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2870)));
        panda$collections$Array$add$panda$collections$Array$T(args2867, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2871 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2873 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2871), &$s2872, ((panda$collections$ListView*) args2867));
        return $tmp2873;
    }
    }
    panda$core$Bit $tmp2874 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2874.value);
    org$pandalanguage$pandac$IRNode* $tmp2876 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2875 = $tmp2876;
    if (((panda$core$Bit) { resolved2875 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2877 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2875);
    resolved2875 = $tmp2877;
    panda$core$Int64 $tmp2878 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2875->children);
    panda$core$Bit $tmp2879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2878, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2879.value);
    panda$collections$Array* $tmp2881 = (panda$collections$Array*) malloc(40);
    $tmp2881->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2881->refCount.value = 1;
    panda$collections$Array$init($tmp2881);
    children2880 = $tmp2881;
    panda$core$Object* $tmp2883 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2875->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2884 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2883));
    panda$collections$Array$add$panda$collections$Array$T(children2880, ((panda$core$Object*) $tmp2884));
    panda$core$UInt64 $tmp2885 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2885;
    baseId2886 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2888 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2888->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2888->refCount.value = 1;
    panda$core$Object* $tmp2890 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2880, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2891 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2880, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2888, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2890)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2891)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2886)), ((panda$collections$ListView*) children2880));
    base2887 = $tmp2888;
    panda$collections$Array$clear(children2880);
    panda$core$Object* $tmp2892 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2875->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2880, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2892)));
    panda$core$UInt64 $tmp2893 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2893;
    indexId2894 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2896 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2896->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2896->refCount.value = 1;
    panda$core$Object* $tmp2898 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2880, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2899 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2880, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2896, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2898)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2899)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2894)), ((panda$collections$ListView*) children2880));
    index2895 = $tmp2896;
    org$pandalanguage$pandac$IRNode* $tmp2901 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2901->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2901->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2901, ((panda$core$Int64) { 1028 }), base2887->position, base2887->type, baseId2886);
    baseRef2900 = $tmp2901;
    org$pandalanguage$pandac$IRNode* $tmp2904 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2904->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2904->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2904, ((panda$core$Int64) { 1028 }), index2895->position, index2895->type, indexId2894);
    indexRef2903 = $tmp2904;
    org$pandalanguage$pandac$IRNode* $tmp2907 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2900, ((panda$core$Int64) { 101 }), indexRef2903);
    rhsIndex2906 = $tmp2907;
    if (((panda$core$Bit) { rhsIndex2906 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp2909 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp2910 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex2906, $tmp2909, p_right);
    value2908 = $tmp2910;
    if (((panda$core$Bit) { value2908 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2913 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex2906->type);
    bool $tmp2912 = $tmp2913.value;
    if (!$tmp2912) goto $l2914;
    panda$core$Bit $tmp2915 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp2912 = $tmp2915.value;
    $l2914:;
    panda$core$Bit $tmp2916 = { $tmp2912 };
    bool $tmp2911 = $tmp2916.value;
    if (!$tmp2911) goto $l2917;
    panda$core$Bit $tmp2918 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex2906->type, value2908->type);
    $tmp2911 = $tmp2918.value;
    $l2917:;
    panda$core$Bit $tmp2919 = { $tmp2911 };
    if ($tmp2919.value) {
    {
        panda$collections$Array* $tmp2921 = (panda$collections$Array*) malloc(40);
        $tmp2921->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2921->refCount.value = 1;
        panda$collections$Array$init($tmp2921);
        org$pandalanguage$pandac$IRNode* $tmp2923 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value2908, &$s2920, ((panda$collections$ListView*) $tmp2921), resolved2875->type);
        value2908 = $tmp2923;
        if (((panda$core$Bit) { value2908 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2880);
    panda$collections$Array$add$panda$collections$Array$T(children2880, ((panda$core$Object*) index2895));
    panda$collections$Array$add$panda$collections$Array$T(children2880, ((panda$core$Object*) value2908));
    org$pandalanguage$pandac$IRNode* $tmp2925 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2887, &$s2924, ((panda$collections$ListView*) children2880));
    return $tmp2925;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left2926;
    org$pandalanguage$pandac$IRNode* right2927;
    panda$core$Int64 kind2951;
    org$pandalanguage$pandac$IRNode* resolved2958;
    panda$collections$Array* children2960;
    org$pandalanguage$pandac$IRNode* resolved2967;
    panda$collections$Array* children2969;
    panda$collections$Array* children2986;
    org$pandalanguage$pandac$IRNode* reusedLeft2991;
    org$pandalanguage$pandac$IRNode* toNonNullable2994;
    org$pandalanguage$pandac$IRNode* comparison2997;
    org$pandalanguage$pandac$IRNode* nullCheck2999;
    org$pandalanguage$pandac$ClassDecl* cl3019;
    org$pandalanguage$pandac$ClassDecl* cl3036;
    org$pandalanguage$pandac$IRNode* finalLeft3052;
    org$pandalanguage$pandac$IRNode* finalRight3055;
    panda$collections$Array* children3058;
    panda$collections$Array* children3072;
    panda$collections$Array* children3084;
    org$pandalanguage$pandac$IRNode* reusedLeft3090;
    org$pandalanguage$pandac$ClassDecl* cl3108;
    panda$collections$ListView* parameters3110;
    org$pandalanguage$pandac$Symbol* methods3112;
    org$pandalanguage$pandac$Type* type3116;
    panda$collections$Array* types3117;
    org$pandalanguage$pandac$MethodDecl* m3121;
    panda$collections$Iterator* m$Iter3126;
    org$pandalanguage$pandac$MethodDecl* m3138;
    panda$collections$Array* children3149;
    panda$collections$Array* children3178;
    panda$collections$Array* children3194;
    org$pandalanguage$pandac$Type* resultType3217;
    org$pandalanguage$pandac$IRNode* result3221;
    org$pandalanguage$pandac$IRNode* resolved3224;
    org$pandalanguage$pandac$IRNode* target3230;
    left2926 = p_rawLeft;
    right2927 = p_rawRight;
    panda$core$Bit $tmp2928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2926->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp2928.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2929 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2927);
        right2927 = $tmp2929;
        if (((panda$core$Bit) { right2927 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp2930 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left2926, right2927->type);
        if (((panda$core$Bit) { $tmp2930.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2931 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2926, right2927->type);
            left2926 = $tmp2931;
        }
        }
    }
    }
    panda$core$Bit $tmp2933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2927->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp2932 = $tmp2933.value;
    if (!$tmp2932) goto $l2934;
    panda$core$Int64$nullable $tmp2935 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2927, left2926->type);
    $tmp2932 = ((panda$core$Bit) { $tmp2935.nonnull }).value;
    $l2934:;
    panda$core$Bit $tmp2936 = { $tmp2932 };
    if ($tmp2936.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2937 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2927, left2926->type);
        right2927 = $tmp2937;
    }
    }
    panda$core$Bit $tmp2941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2940 = $tmp2941.value;
    if ($tmp2940) goto $l2942;
    panda$core$Bit $tmp2943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2940 = $tmp2943.value;
    $l2942:;
    panda$core$Bit $tmp2944 = { $tmp2940 };
    bool $tmp2939 = $tmp2944.value;
    if ($tmp2939) goto $l2945;
    panda$core$Bit $tmp2946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp2939 = $tmp2946.value;
    $l2945:;
    panda$core$Bit $tmp2947 = { $tmp2939 };
    bool $tmp2938 = $tmp2947.value;
    if ($tmp2938) goto $l2948;
    panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp2938 = $tmp2949.value;
    $l2948:;
    panda$core$Bit $tmp2950 = { $tmp2938 };
    if ($tmp2950.value) {
    {
        panda$core$Bit $tmp2953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp2952 = $tmp2953.value;
        if ($tmp2952) goto $l2954;
        panda$core$Bit $tmp2955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp2952 = $tmp2955.value;
        $l2954:;
        panda$core$Bit $tmp2956 = { $tmp2952 };
        if ($tmp2956.value) {
        {
            kind2951 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind2951 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp2957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2926->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2957.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2959 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2927);
            resolved2958 = $tmp2959;
            if (((panda$core$Bit) { resolved2958 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2961 = (panda$collections$Array*) malloc(40);
            $tmp2961->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2961->refCount.value = 1;
            panda$collections$Array$init($tmp2961);
            children2960 = $tmp2961;
            panda$collections$Array$add$panda$collections$Array$T(children2960, ((panda$core$Object*) resolved2958));
            org$pandalanguage$pandac$IRNode* $tmp2963 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2963->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2963->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2965 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2963, kind2951, p_position, $tmp2965, ((panda$collections$ListView*) children2960));
            return $tmp2963;
        }
        }
        panda$core$Bit $tmp2966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2927->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2966.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2968 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2926);
            resolved2967 = $tmp2968;
            if (((panda$core$Bit) { resolved2967 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2970 = (panda$collections$Array*) malloc(40);
            $tmp2970->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2970->refCount.value = 1;
            panda$collections$Array$init($tmp2970);
            children2969 = $tmp2970;
            panda$collections$Array$add$panda$collections$Array$T(children2969, ((panda$core$Object*) resolved2967));
            org$pandalanguage$pandac$IRNode* $tmp2972 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2972->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2972->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2974 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2972, kind2951, p_position, $tmp2974, ((panda$collections$ListView*) children2969));
            return $tmp2972;
        }
        }
    }
    }
    panda$core$Bit $tmp2977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp2976 = $tmp2977.value;
    if ($tmp2976) goto $l2978;
    panda$core$Bit $tmp2979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp2976 = $tmp2979.value;
    $l2978:;
    panda$core$Bit $tmp2980 = { $tmp2976 };
    bool $tmp2975 = $tmp2980.value;
    if (!$tmp2975) goto $l2981;
    panda$core$Bit $tmp2982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2926->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp2975 = $tmp2982.value;
    $l2981:;
    panda$core$Bit $tmp2983 = { $tmp2975 };
    if ($tmp2983.value) {
    {
        panda$core$Bit $tmp2984 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right2927->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp2984.value);
        panda$core$UInt64 $tmp2985 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp2985;
        panda$collections$Array* $tmp2987 = (panda$collections$Array*) malloc(40);
        $tmp2987->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2987->refCount.value = 1;
        panda$collections$Array$init($tmp2987);
        children2986 = $tmp2987;
        panda$collections$Array$add$panda$collections$Array$T(children2986, ((panda$core$Object*) left2926));
        org$pandalanguage$pandac$IRNode* $tmp2989 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2989->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2989->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2989, ((panda$core$Int64) { 1027 }), left2926->position, left2926->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children2986));
        left2926 = $tmp2989;
        org$pandalanguage$pandac$IRNode* $tmp2992 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2992->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2992->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2992, ((panda$core$Int64) { 1028 }), left2926->position, left2926->type, self->reusedValueCount);
        reusedLeft2991 = $tmp2992;
        panda$core$Object* $tmp2995 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left2926->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2996 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft2991, ((org$pandalanguage$pandac$Type*) $tmp2995));
        toNonNullable2994 = $tmp2996;
        org$pandalanguage$pandac$IRNode* $tmp2998 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable2994, p_op, right2927);
        comparison2997 = $tmp2998;
        if (((panda$core$Bit) { comparison2997 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3000 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3000->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3000->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3002 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3000, ((panda$core$Int64) { 1030 }), p_position, $tmp3002);
        org$pandalanguage$pandac$IRNode* $tmp3003 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2926, ((panda$core$Int64) { 59 }), $tmp3000);
        nullCheck2999 = $tmp3003;
        if (((panda$core$Bit) { nullCheck2999 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children2986);
        panda$collections$Array$add$panda$collections$Array$T(children2986, ((panda$core$Object*) nullCheck2999));
        panda$collections$Array$add$panda$collections$Array$T(children2986, ((panda$core$Object*) comparison2997));
        org$pandalanguage$pandac$IRNode* $tmp3004 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3004->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3004->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3006 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3004, ((panda$core$Int64) { 1011 }), p_position, $tmp3006, $tmp3007);
        org$pandalanguage$pandac$Type* $tmp3008 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3009 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3004, $tmp3008);
        panda$collections$Array$add$panda$collections$Array$T(children2986, ((panda$core$Object*) $tmp3009));
        org$pandalanguage$pandac$IRNode* $tmp3010 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3010->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3010->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3012 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3010, ((panda$core$Int64) { 1044 }), p_position, $tmp3012, ((panda$collections$ListView*) children2986));
        return $tmp3010;
    }
    }
    panda$core$Bit $tmp3014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp3013 = $tmp3014.value;
    if ($tmp3013) goto $l3015;
    panda$core$Bit $tmp3016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp3013 = $tmp3016.value;
    $l3015:;
    panda$core$Bit $tmp3017 = { $tmp3013 };
    if ($tmp3017.value) {
    {
        panda$core$Bit $tmp3018 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2926->type);
        if ($tmp3018.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3020 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2926->type);
            cl3019 = $tmp3020;
            if (((panda$core$Bit) { cl3019 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3021 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3019);
            if ($tmp3021.value) {
            {
                panda$core$String* $tmp3023 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp3024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3022, $tmp3023);
                panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3024, &$s3025);
                panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3026, ((panda$core$Object*) left2926->type));
                panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, &$s3028);
                panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3030, ((panda$core$Object*) right2927->type));
                panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3031, &$s3032);
                panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3029, $tmp3033);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3034);
            }
            }
        }
        }
        panda$core$Bit $tmp3035 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right2927->type);
        if ($tmp3035.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3037 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right2927->type);
            cl3036 = $tmp3037;
            if (((panda$core$Bit) { cl3036 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3038 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3036);
            if ($tmp3038.value) {
            {
                panda$core$String* $tmp3040 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3039, $tmp3040);
                panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
                panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3043, ((panda$core$Object*) left2926->type));
                panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
                panda$core$String* $tmp3048 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3047, ((panda$core$Object*) right2927->type));
                panda$core$String* $tmp3050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3048, &$s3049);
                panda$core$String* $tmp3051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, $tmp3050);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3051);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp3053 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3054 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left2926, $tmp3053);
        finalLeft3052 = $tmp3054;
        if (((panda$core$Bit) { finalLeft3052 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3056 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3057 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2927, $tmp3056);
        finalRight3055 = $tmp3057;
        if (((panda$core$Bit) { finalRight3055 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3059 = (panda$collections$Array*) malloc(40);
        $tmp3059->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3059->refCount.value = 1;
        panda$collections$Array$init($tmp3059);
        children3058 = $tmp3059;
        panda$collections$Array$add$panda$collections$Array$T(children3058, ((panda$core$Object*) finalLeft3052));
        panda$collections$Array$add$panda$collections$Array$T(children3058, ((panda$core$Object*) finalRight3055));
        org$pandalanguage$pandac$IRNode* $tmp3061 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3061->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3061->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3063 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3061, ((panda$core$Int64) { 1023 }), p_position, $tmp3063, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3058));
        return $tmp3061;
    }
    }
    panda$core$Bit $tmp3064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp3064.value) {
    {
        panda$core$Bit $tmp3065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2926->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3065.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3066 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2926, p_op, right2927);
            return $tmp3066;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3067 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2926);
        left2926 = $tmp3067;
        if (((panda$core$Bit) { left2926 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3068 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2927, left2926->type);
        right2927 = $tmp3068;
        if (((panda$core$Bit) { right2927 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3069 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2926);
        panda$core$Bit $tmp3070 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3069);
        if ($tmp3070.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2926->position, &$s3071);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3073 = (panda$collections$Array*) malloc(40);
        $tmp3073->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3073->refCount.value = 1;
        panda$collections$Array$init($tmp3073);
        children3072 = $tmp3073;
        panda$collections$Array$add$panda$collections$Array$T(children3072, ((panda$core$Object*) left2926));
        panda$collections$Array$add$panda$collections$Array$T(children3072, ((panda$core$Object*) right2927));
        org$pandalanguage$pandac$IRNode* $tmp3075 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3075->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3075->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3075, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children3072));
        return $tmp3075;
    }
    }
    panda$core$Bit $tmp3077 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp3077.value) {
    {
        panda$core$Bit $tmp3078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2926->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3078.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3079 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2926, p_op, right2927);
            return $tmp3079;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3080 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2926);
        left2926 = $tmp3080;
        if (((panda$core$Bit) { left2926 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3081 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left2926);
        panda$core$Bit $tmp3082 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3081);
        if ($tmp3082.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left2926->position, &$s3083);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3085 = (panda$collections$Array*) malloc(40);
        $tmp3085->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3085->refCount.value = 1;
        panda$collections$Array$init($tmp3085);
        children3084 = $tmp3085;
        panda$collections$Array$add$panda$collections$Array$T(children3084, ((panda$core$Object*) left2926));
        panda$core$UInt64 $tmp3087 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp3087;
        org$pandalanguage$pandac$IRNode* $tmp3088 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3088->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3088->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3088, ((panda$core$Int64) { 1027 }), left2926->position, left2926->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children3084));
        left2926 = $tmp3088;
        org$pandalanguage$pandac$IRNode* $tmp3091 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3091->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3091->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3091, ((panda$core$Int64) { 1028 }), left2926->position, left2926->type, self->reusedValueCount);
        reusedLeft3090 = $tmp3091;
        panda$core$Int64 $tmp3093 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp3094 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft3090, $tmp3093, right2927);
        right2927 = $tmp3094;
        if (((panda$core$Bit) { right2927 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3096 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left2926->type);
        bool $tmp3095 = $tmp3096.value;
        if (!$tmp3095) goto $l3097;
        panda$core$Bit $tmp3098 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2926->type, right2927->type);
        $tmp3095 = $tmp3098.value;
        $l3097:;
        panda$core$Bit $tmp3099 = { $tmp3095 };
        if ($tmp3099.value) {
        {
            panda$collections$Array* $tmp3101 = (panda$collections$Array*) malloc(40);
            $tmp3101->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3101->refCount.value = 1;
            panda$collections$Array$init($tmp3101);
            org$pandalanguage$pandac$IRNode* $tmp3103 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2927, &$s3100, ((panda$collections$ListView*) $tmp3101), left2926->type);
            right2927 = $tmp3103;
            if (((panda$core$Bit) { right2927 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3104 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2926, ((panda$core$Int64) { 73 }), right2927);
        return $tmp3104;
    }
    }
    panda$core$Bit $tmp3105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp3105.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3106 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left2926);
        left2926 = $tmp3106;
        if (((panda$core$Bit) { left2926 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3107 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left2926->type);
        if ($tmp3107.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3109 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left2926->type);
            cl3108 = $tmp3109;
            if (((panda$core$Bit) { cl3108 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$ListView* $tmp3111 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left2926->type);
            parameters3110 = $tmp3111;
            org$pandalanguage$pandac$SymbolTable* $tmp3113 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3108);
            org$pandalanguage$pandac$Symbol* $tmp3115 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3113, &$s3114);
            methods3112 = $tmp3115;
            if (((panda$core$Bit) { methods3112 != NULL }).value) {
            {
                panda$collections$Array* $tmp3118 = (panda$collections$Array*) malloc(40);
                $tmp3118->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3118->refCount.value = 1;
                panda$collections$Array$init($tmp3118);
                types3117 = $tmp3118;
                panda$core$Bit $tmp3120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3112->kind, ((panda$core$Int64) { 204 }));
                if ($tmp3120.value) {
                {
                    m3121 = ((org$pandalanguage$pandac$MethodDecl*) methods3112);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3121);
                    org$pandalanguage$pandac$MethodRef* $tmp3122 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                    $tmp3122->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                    $tmp3122->refCount.value = 1;
                    org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3122, m3121, parameters3110);
                    org$pandalanguage$pandac$Type* $tmp3124 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3122);
                    panda$collections$Array$add$panda$collections$Array$T(types3117, ((panda$core$Object*) $tmp3124));
                }
                }
                else {
                {
                    panda$core$Bit $tmp3125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3112->kind, ((panda$core$Int64) { 205 }));
                    PANDA_ASSERT($tmp3125.value);
                    {
                        ITable* $tmp3127 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3112)->methods)->$class->itable;
                        while ($tmp3127->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3127 = $tmp3127->next;
                        }
                        $fn3129 $tmp3128 = $tmp3127->methods[0];
                        panda$collections$Iterator* $tmp3130 = $tmp3128(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3112)->methods));
                        m$Iter3126 = $tmp3130;
                        $l3131:;
                        ITable* $tmp3133 = m$Iter3126->$class->itable;
                        while ($tmp3133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3133 = $tmp3133->next;
                        }
                        $fn3135 $tmp3134 = $tmp3133->methods[0];
                        panda$core$Bit $tmp3136 = $tmp3134(m$Iter3126);
                        panda$core$Bit $tmp3137 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3136);
                        if (!$tmp3137.value) goto $l3132;
                        {
                            ITable* $tmp3139 = m$Iter3126->$class->itable;
                            while ($tmp3139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3139 = $tmp3139->next;
                            }
                            $fn3141 $tmp3140 = $tmp3139->methods[1];
                            panda$core$Object* $tmp3142 = $tmp3140(m$Iter3126);
                            m3138 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3142);
                            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3138);
                            org$pandalanguage$pandac$MethodRef* $tmp3143 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                            $tmp3143->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                            $tmp3143->refCount.value = 1;
                            org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3143, m3138, parameters3110);
                            org$pandalanguage$pandac$Type* $tmp3145 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3143);
                            panda$collections$Array$add$panda$collections$Array$T(types3117, ((panda$core$Object*) $tmp3145));
                        }
                        goto $l3131;
                        $l3132:;
                    }
                }
                }
                org$pandalanguage$pandac$Type* $tmp3146 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3146->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3146->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3146, ((panda$collections$ListView*) types3117));
                type3116 = $tmp3146;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp3148 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
                type3116 = $tmp3148;
            }
            }
            panda$collections$Array* $tmp3150 = (panda$collections$Array*) malloc(40);
            $tmp3150->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3150->refCount.value = 1;
            panda$collections$Array$init($tmp3150);
            children3149 = $tmp3150;
            panda$collections$Array$add$panda$collections$Array$T(children3149, ((panda$core$Object*) left2926));
            panda$collections$Array$add$panda$collections$Array$T(children3149, ((panda$core$Object*) right2927));
            org$pandalanguage$pandac$IRNode* $tmp3152 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3152->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3152->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3152, ((panda$core$Int64) { 1040 }), p_position, type3116, ((panda$collections$ListView*) children3149));
            return $tmp3152;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3154 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3155 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left2926->type, $tmp3154);
    if ($tmp3155.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3157 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3158 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right2927->type, $tmp3157);
        bool $tmp3156 = $tmp3158.value;
        if (!$tmp3156) goto $l3159;
        panda$core$Bit $tmp3164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp3163 = $tmp3164.value;
        if ($tmp3163) goto $l3165;
        panda$core$Bit $tmp3166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp3163 = $tmp3166.value;
        $l3165:;
        panda$core$Bit $tmp3167 = { $tmp3163 };
        bool $tmp3162 = $tmp3167.value;
        if ($tmp3162) goto $l3168;
        panda$core$Bit $tmp3169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp3162 = $tmp3169.value;
        $l3168:;
        panda$core$Bit $tmp3170 = { $tmp3162 };
        bool $tmp3161 = $tmp3170.value;
        if ($tmp3161) goto $l3171;
        panda$core$Bit $tmp3172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp3161 = $tmp3172.value;
        $l3171:;
        panda$core$Bit $tmp3173 = { $tmp3161 };
        bool $tmp3160 = $tmp3173.value;
        if ($tmp3160) goto $l3174;
        panda$core$Bit $tmp3175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp3160 = $tmp3175.value;
        $l3174:;
        panda$core$Bit $tmp3176 = { $tmp3160 };
        $tmp3156 = $tmp3176.value;
        $l3159:;
        panda$core$Bit $tmp3177 = { $tmp3156 };
        if ($tmp3177.value) {
        {
            panda$collections$Array* $tmp3179 = (panda$collections$Array*) malloc(40);
            $tmp3179->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3179->refCount.value = 1;
            panda$collections$Array$init($tmp3179);
            children3178 = $tmp3179;
            panda$collections$Array$add$panda$collections$Array$T(children3178, ((panda$core$Object*) left2926));
            panda$collections$Array$add$panda$collections$Array$T(children3178, ((panda$core$Object*) right2927));
            org$pandalanguage$pandac$IRNode* $tmp3181 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3181->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3181->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3181, ((panda$core$Int64) { 1023 }), p_position, left2926->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3178));
            return $tmp3181;
        }
        }
        panda$core$String* $tmp3184 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3183, $tmp3184);
        panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3185, &$s3186);
        panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3187, ((panda$core$Object*) left2926->type));
        panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, &$s3189);
        panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3190, ((panda$core$Object*) right2927->type));
        panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3193);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3195 = (panda$collections$Array*) malloc(40);
    $tmp3195->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3195->refCount.value = 1;
    panda$collections$Array$init($tmp3195);
    children3194 = $tmp3195;
    panda$core$Bit $tmp3199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2926->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3198 = $tmp3199.value;
    if ($tmp3198) goto $l3200;
    panda$core$Bit $tmp3201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left2926->kind, ((panda$core$Int64) { 1032 }));
    $tmp3198 = $tmp3201.value;
    $l3200:;
    panda$core$Bit $tmp3202 = { $tmp3198 };
    bool $tmp3197 = $tmp3202.value;
    if (!$tmp3197) goto $l3203;
    panda$core$Bit $tmp3205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2927->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3204 = $tmp3205.value;
    if ($tmp3204) goto $l3206;
    panda$core$Bit $tmp3207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right2927->kind, ((panda$core$Int64) { 1032 }));
    $tmp3204 = $tmp3207.value;
    $l3206:;
    panda$core$Bit $tmp3208 = { $tmp3204 };
    $tmp3197 = $tmp3208.value;
    $l3203:;
    panda$core$Bit $tmp3209 = { $tmp3197 };
    if ($tmp3209.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3210 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left2926, p_op, right2927);
        return $tmp3210;
    }
    }
    panda$core$Bit $tmp3212 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left2926->type);
    bool $tmp3211 = $tmp3212.value;
    if (!$tmp3211) goto $l3213;
    panda$core$Int64$nullable $tmp3214 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right2927, left2926->type);
    $tmp3211 = ((panda$core$Bit) { $tmp3214.nonnull }).value;
    $l3213:;
    panda$core$Bit $tmp3215 = { $tmp3211 };
    if ($tmp3215.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3216 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right2927, left2926->type);
        right2927 = $tmp3216;
        PANDA_ASSERT(((panda$core$Bit) { right2927 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children3194, ((panda$core$Object*) left2926));
        panda$collections$Array$add$panda$collections$Array$T(children3194, ((panda$core$Object*) right2927));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp3218 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3217 = $tmp3218;
            }
            break;
            default:
            {
                resultType3217 = left2926->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3219 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3219->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3219->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3219, ((panda$core$Int64) { 1023 }), p_position, resultType3217, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3194));
        return $tmp3219;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3194, ((panda$core$Object*) right2927));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3222 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3223 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left2926, $tmp3222, ((panda$collections$ListView*) children3194));
    result3221 = $tmp3223;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3221 == NULL }).value) {
    {
        panda$collections$Array$clear(children3194);
        panda$collections$Array$add$panda$collections$Array$T(children3194, ((panda$core$Object*) left2926));
        org$pandalanguage$pandac$IRNode* $tmp3225 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right2927);
        resolved3224 = $tmp3225;
        bool $tmp3226 = ((panda$core$Bit) { resolved3224 != NULL }).value;
        if (!$tmp3226) goto $l3227;
        panda$core$Bit $tmp3228 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved3224->type);
        $tmp3226 = $tmp3228.value;
        $l3227:;
        panda$core$Bit $tmp3229 = { $tmp3226 };
        if ($tmp3229.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children3194, ((panda$core$Object*) resolved3224));
            org$pandalanguage$pandac$IRNode* $tmp3231 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3231->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3231->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3233 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3231, ((panda$core$Int64) { 1001 }), resolved3224->position, $tmp3233, resolved3224->type);
            target3230 = $tmp3231;
            panda$core$String* $tmp3234 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3235 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3230, $tmp3234, ((panda$collections$ListView*) children3194));
            result3221 = $tmp3235;
        }
        }
    }
    }
    return result3221;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3236;
    org$pandalanguage$pandac$IRNode* right3239;
    panda$core$Object* $tmp3237 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3238 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3237));
    left3236 = $tmp3238;
    if (((panda$core$Bit) { left3236 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3240 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3241 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3240));
    right3239 = $tmp3241;
    if (((panda$core$Bit) { right3239 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3242 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left3236, ((panda$core$Int64$wrapper*) p_b->payload)->value, right3239);
    return $tmp3242;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3246;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp3243 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3243;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp3244 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3245 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3244, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3245.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3246, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3247 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3246);
            return ((panda$collections$ListView*) $tmp3247);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp3248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3249 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3248));
            return $tmp3249;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3250 = (panda$collections$Array*) malloc(40);
            $tmp3250->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3250->refCount.value = 1;
            panda$collections$Array$init($tmp3250);
            return ((panda$collections$ListView*) $tmp3250);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3252.value) {
        {
            panda$collections$ListView* $tmp3253 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3253;
        }
        }
        panda$collections$ListView* $tmp3254 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3254;
    }
    }
    panda$collections$Array* $tmp3255 = (panda$collections$Array*) malloc(40);
    $tmp3255->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3255->refCount.value = 1;
    panda$collections$Array$init($tmp3255);
    return ((panda$collections$ListView*) $tmp3255);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name3258;
    org$pandalanguage$pandac$ClassDecl* cl3260;
    org$pandalanguage$pandac$Symbol* s3262;
    org$pandalanguage$pandac$MethodDecl* m3265;
    panda$collections$Iterator* test$Iter3270;
    org$pandalanguage$pandac$MethodDecl* test3282;
    org$pandalanguage$pandac$MethodRef* ref3294;
    panda$collections$Array* children3298;
    org$pandalanguage$pandac$IRNode* methodRef3301;
    org$pandalanguage$pandac$Position $tmp3307;
    panda$collections$Array* args3308;
    panda$collections$Array* children3324;
    panda$collections$Array* children3334;
    org$pandalanguage$pandac$IRNode* coerced3343;
    panda$collections$Array* children3346;
    panda$core$Bit $tmp3257 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3257.value) {
    {
        panda$core$String* $tmp3259 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3258 = $tmp3259;
        org$pandalanguage$pandac$ClassDecl* $tmp3261 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3260 = $tmp3261;
        if (((panda$core$Bit) { cl3260 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3263 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3260);
        org$pandalanguage$pandac$Symbol* $tmp3264 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3263, name3258);
        s3262 = $tmp3264;
        if (((panda$core$Bit) { s3262 != NULL }).value) {
        {
            m3265 = NULL;
            switch (s3262->kind.value) {
                case 204:
                {
                    m3265 = ((org$pandalanguage$pandac$MethodDecl*) s3262);
                    panda$core$Int64 $tmp3266 = panda$collections$Array$get_count$R$panda$core$Int64(m3265->parameters);
                    panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3266, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3267.value);
                    panda$core$Bit $tmp3268 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3265->annotations);
                    panda$core$Bit $tmp3269 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3268);
                    PANDA_ASSERT($tmp3269.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3271 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3262)->methods)->$class->itable;
                        while ($tmp3271->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3271 = $tmp3271->next;
                        }
                        $fn3273 $tmp3272 = $tmp3271->methods[0];
                        panda$collections$Iterator* $tmp3274 = $tmp3272(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3262)->methods));
                        test$Iter3270 = $tmp3274;
                        $l3275:;
                        ITable* $tmp3277 = test$Iter3270->$class->itable;
                        while ($tmp3277->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3277 = $tmp3277->next;
                        }
                        $fn3279 $tmp3278 = $tmp3277->methods[0];
                        panda$core$Bit $tmp3280 = $tmp3278(test$Iter3270);
                        panda$core$Bit $tmp3281 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3280);
                        if (!$tmp3281.value) goto $l3276;
                        {
                            ITable* $tmp3283 = test$Iter3270->$class->itable;
                            while ($tmp3283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3283 = $tmp3283->next;
                            }
                            $fn3285 $tmp3284 = $tmp3283->methods[1];
                            panda$core$Object* $tmp3286 = $tmp3284(test$Iter3270);
                            test3282 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3286);
                            panda$core$Bit $tmp3288 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3282->annotations);
                            panda$core$Bit $tmp3289 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3288);
                            bool $tmp3287 = $tmp3289.value;
                            if (!$tmp3287) goto $l3290;
                            panda$core$Int64 $tmp3291 = panda$collections$Array$get_count$R$panda$core$Int64(test3282->parameters);
                            panda$core$Bit $tmp3292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3291, ((panda$core$Int64) { 0 }));
                            $tmp3287 = $tmp3292.value;
                            $l3290:;
                            panda$core$Bit $tmp3293 = { $tmp3287 };
                            if ($tmp3293.value) {
                            {
                                m3265 = test3282;
                                goto $l3276;
                            }
                            }
                        }
                        goto $l3275;
                        $l3276:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3265 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3265);
                org$pandalanguage$pandac$MethodRef* $tmp3295 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3295->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3295->refCount.value = 1;
                panda$collections$ListView* $tmp3297 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3295, m3265, $tmp3297);
                ref3294 = $tmp3295;
                panda$collections$Array* $tmp3299 = (panda$collections$Array*) malloc(40);
                $tmp3299->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3299->refCount.value = 1;
                panda$collections$Array$init($tmp3299);
                children3298 = $tmp3299;
                panda$collections$Array$add$panda$collections$Array$T(children3298, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3302 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3302->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3302->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3304 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3304->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3304->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3307);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3304, &$s3306, ((panda$core$Int64) { 16 }), $tmp3307, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3302, ((panda$core$Int64) { 1002 }), p_position, $tmp3304, ((panda$core$Object*) ref3294), ((panda$collections$ListView*) children3298));
                methodRef3301 = $tmp3302;
                panda$collections$Array* $tmp3309 = (panda$collections$Array*) malloc(40);
                $tmp3309->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3309->refCount.value = 1;
                panda$collections$Array$init($tmp3309);
                args3308 = $tmp3309;
                org$pandalanguage$pandac$IRNode* $tmp3311 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3301, ((panda$collections$ListView*) args3308));
                return $tmp3311;
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
                    org$pandalanguage$pandac$IRNode* $tmp3312 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3312->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3312->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3314 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3312, ((panda$core$Int64) { 1032 }), p_position, $tmp3314, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3312;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3315 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3315->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3315->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3317 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3315, ((panda$core$Int64) { 1004 }), p_position, $tmp3317, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3315;
                }
                break;
                case 1045:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3318 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3318->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3318->refCount.value = 1;
                    panda$core$Real64 $tmp3320 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$Type* $tmp3321 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type($tmp3320);
                    panda$core$Real64 $tmp3322 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3318, ((panda$core$Int64) { 1045 }), p_position, $tmp3321, $tmp3322);
                    return $tmp3318;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3323 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3323.value) {
                    {
                        panda$collections$Array* $tmp3325 = (panda$collections$Array*) malloc(40);
                        $tmp3325->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3325->refCount.value = 1;
                        panda$collections$Array$init($tmp3325);
                        children3324 = $tmp3325;
                        panda$collections$Array$add$panda$collections$Array$T(children3324, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3327 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3327->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3327->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3327, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3324));
                        return $tmp3327;
                    }
                    }
                }
            }
            panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3329, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, &$s3331);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3332);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3333 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3333.value) {
            {
                panda$collections$Array* $tmp3335 = (panda$collections$Array*) malloc(40);
                $tmp3335->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3335->refCount.value = 1;
                panda$collections$Array$init($tmp3335);
                children3334 = $tmp3335;
                panda$collections$Array$add$panda$collections$Array$T(children3334, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3337 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3337->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3337->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3337, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3334));
                return $tmp3337;
            }
            }
            else {
            {
                panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3339, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, &$s3341);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3342);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3344 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3345 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3344);
            coerced3343 = $tmp3345;
            if (((panda$core$Bit) { coerced3343 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3347 = (panda$collections$Array*) malloc(40);
            $tmp3347->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3347->refCount.value = 1;
            panda$collections$Array$init($tmp3347);
            children3346 = $tmp3347;
            panda$collections$Array$add$panda$collections$Array$T(children3346, ((panda$core$Object*) coerced3343));
            org$pandalanguage$pandac$IRNode* $tmp3349 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3349->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3349->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3349, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3346));
            return $tmp3349;
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
    org$pandalanguage$pandac$IRNode* base3354;
    panda$core$Bit $tmp3351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3351.value);
    panda$core$Int64 $tmp3352 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3352, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3353.value);
    panda$core$Object* $tmp3355 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3356 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3355));
    base3354 = $tmp3356;
    if (((panda$core$Bit) { base3354 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3357 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3354, p_p->position);
    return $tmp3357;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3359;
    panda$collections$Array* args3362;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3365;
    org$pandalanguage$pandac$IRNode* arg3380;
    panda$core$Bit $tmp3358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3358.value);
    panda$core$Object* $tmp3360 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3361 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3360));
    m3359 = $tmp3361;
    if (((panda$core$Bit) { m3359 != NULL }).value) {
    {
        panda$collections$Array* $tmp3363 = (panda$collections$Array*) malloc(40);
        $tmp3363->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3363->refCount.value = 1;
        panda$collections$Array$init($tmp3363);
        args3362 = $tmp3363;
        panda$core$Int64 $tmp3366 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3365, ((panda$core$Int64) { 1 }), $tmp3366, ((panda$core$Bit) { false }));
        int64_t $tmp3368 = $tmp3365.min.value;
        panda$core$Int64 i3367 = { $tmp3368 };
        int64_t $tmp3370 = $tmp3365.max.value;
        bool $tmp3371 = $tmp3365.inclusive.value;
        if ($tmp3371) goto $l3378; else goto $l3379;
        $l3378:;
        if ($tmp3368 <= $tmp3370) goto $l3372; else goto $l3374;
        $l3379:;
        if ($tmp3368 < $tmp3370) goto $l3372; else goto $l3374;
        $l3372:;
        {
            panda$core$Object* $tmp3381 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3367);
            org$pandalanguage$pandac$IRNode* $tmp3382 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3381));
            arg3380 = $tmp3382;
            if (((panda$core$Bit) { arg3380 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3362, ((panda$core$Object*) arg3380));
        }
        $l3375:;
        int64_t $tmp3384 = $tmp3370 - i3367.value;
        if ($tmp3371) goto $l3385; else goto $l3386;
        $l3385:;
        if ($tmp3384 >= 1) goto $l3383; else goto $l3374;
        $l3386:;
        if ($tmp3384 > 1) goto $l3383; else goto $l3374;
        $l3383:;
        i3367.value += 1;
        goto $l3372;
        $l3374:;
        org$pandalanguage$pandac$IRNode* $tmp3389 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3359, ((panda$collections$ListView*) args3362));
        return $tmp3389;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3390;
    panda$core$String* name3392;
    org$pandalanguage$pandac$ClassDecl* cl3400;
    org$pandalanguage$pandac$SymbolTable* st3419;
    org$pandalanguage$pandac$Symbol* s3421;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3391 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3390 = $tmp3391;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3394 = (($fn3393) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3395);
            panda$core$String* $tmp3397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, p_name);
            panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3397, &$s3398);
            name3392 = $tmp3399;
            org$pandalanguage$pandac$ClassDecl* $tmp3401 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3392);
            cl3400 = $tmp3401;
            if (((panda$core$Bit) { cl3400 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3402 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3402->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3402->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3404 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3405 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3400);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3402, ((panda$core$Int64) { 1001 }), p_position, $tmp3404, $tmp3405);
                return $tmp3402;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3406 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3406->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3406->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3408 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3406, ((panda$core$Int64) { 1037 }), p_position, $tmp3408, name3392);
            return $tmp3406;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3409 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3409));
            panda$core$Object* $tmp3410 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3411 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3410)->rawSuper);
            cl3390 = $tmp3411;
        }
        break;
        default:
        {
            panda$core$Bit $tmp3412 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
            panda$core$Bit $tmp3413 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3412);
            if ($tmp3413.value) {
            {
                panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3414, ((panda$core$Object*) p_base->type));
                panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, &$s3416);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3417);
                return NULL;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp3418 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3390 = $tmp3418;
        }
    }
    if (((panda$core$Bit) { cl3390 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3420 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3390);
    st3419 = $tmp3420;
    org$pandalanguage$pandac$Symbol* $tmp3422 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3419, p_name);
    s3421 = $tmp3422;
    if (((panda$core$Bit) { s3421 == NULL }).value) {
    {
        panda$core$String* $tmp3424 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3423, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3424, &$s3425);
        panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3426, p_name);
        panda$core$String* $tmp3429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3427, &$s3428);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3429);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3430 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3421, st3419);
    return $tmp3430;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3434;
    panda$core$Bit $tmp3431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3431.value);
    panda$core$Int64 $tmp3432 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3432, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3433.value);
    panda$core$Object* $tmp3435 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3436 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3435));
    base3434 = $tmp3436;
    if (((panda$core$Bit) { base3434 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3438 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3434->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3437 = $tmp3438.value;
    if (!$tmp3437) goto $l3439;
    panda$core$Bit $tmp3440 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3434->kind, ((panda$core$Int64) { 1024 }));
    $tmp3437 = $tmp3440.value;
    $l3439:;
    panda$core$Bit $tmp3441 = { $tmp3437 };
    if ($tmp3441.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3442 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3434);
        base3434 = $tmp3442;
    }
    }
    if (((panda$core$Bit) { base3434 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3443 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3434, ((panda$core$String*) p_d->payload));
    return $tmp3443;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3445;
    panda$core$Bit $tmp3444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3444.value);
    org$pandalanguage$pandac$Symbol* $tmp3446 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3445 = $tmp3446;
    if (((panda$core$Bit) { s3445 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3447 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3445 = ((org$pandalanguage$pandac$Symbol*) $tmp3447);
    }
    }
    if (((panda$core$Bit) { s3445 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3448 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3445, self->symbolTable);
        return $tmp3448;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3449 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3449->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3449->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3451 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3449, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3451, ((panda$core$String*) p_i->payload));
    return $tmp3449;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3452;
    org$pandalanguage$pandac$Type* $tmp3453 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3454 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3453);
    resolved3452 = $tmp3454;
    if (((panda$core$Bit) { resolved3452 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3455 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3455->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3455->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3457 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3455, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3457, resolved3452);
    return $tmp3455;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3465;
    org$pandalanguage$pandac$IRNode* end3473;
    org$pandalanguage$pandac$IRNode* step3481;
    panda$collections$Array* children3488;
    org$pandalanguage$pandac$Position $tmp3496;
    panda$core$Bit $tmp3459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3458 = $tmp3459.value;
    if ($tmp3458) goto $l3460;
    panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3458 = $tmp3461.value;
    $l3460:;
    panda$core$Bit $tmp3462 = { $tmp3458 };
    PANDA_ASSERT($tmp3462.value);
    panda$core$Int64 $tmp3463 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3463, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3464.value);
    panda$core$Object* $tmp3466 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3466)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3467.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3468 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3468->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3468->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3470 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3468, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3470);
        start3465 = $tmp3468;
    }
    }
    else {
    {
        panda$core$Object* $tmp3471 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3472 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3471));
        start3465 = $tmp3472;
        if (((panda$core$Bit) { start3465 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3474 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3474)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3475.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3476 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3476->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3476->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3478 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3476, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3478);
        end3473 = $tmp3476;
    }
    }
    else {
    {
        panda$core$Object* $tmp3479 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3480 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3479));
        end3473 = $tmp3480;
        if (((panda$core$Bit) { end3473 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3482 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3482)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3483.value) {
    {
        step3481 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3484 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3485 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3484));
        step3481 = $tmp3485;
        if (((panda$core$Bit) { step3481 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(step3481->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3486.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, step3481->position, &$s3487);
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3489 = (panda$collections$Array*) malloc(40);
    $tmp3489->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3489->refCount.value = 1;
    panda$collections$Array$init($tmp3489);
    children3488 = $tmp3489;
    panda$collections$Array$add$panda$collections$Array$T(children3488, ((panda$core$Object*) start3465));
    panda$collections$Array$add$panda$collections$Array$T(children3488, ((panda$core$Object*) end3473));
    if (((panda$core$Bit) { step3481 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3488, ((panda$core$Object*) step3481));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3491 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3491->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3491->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3493 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3493->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3493->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3496);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3493, &$s3495, ((panda$core$Int64) { 17 }), $tmp3496, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3491, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3493, ((panda$core$Object*) wrap_panda$core$Bit($tmp3497)), ((panda$collections$ListView*) children3488));
    return $tmp3491;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3498 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3498->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3498->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3500 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3498, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3500, ((panda$core$String*) p_s->payload));
    return $tmp3498;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3505;
    org$pandalanguage$pandac$ClassDecl* cl3506;
    panda$collections$Array* subtypes3513;
    panda$core$MutableString* name3517;
    panda$core$Char8 $tmp3520;
    panda$core$String* separator3521;
    panda$collections$Iterator* p$Iter3523;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3535;
    panda$collections$Array* pType3540;
    panda$core$String* pName3543;
    panda$core$Char8 $tmp3553;
    panda$core$Bit $tmp3501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3501.value);
    panda$core$Object* $tmp3502 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3503 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3502)->annotations);
    if ($tmp3503.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3504);
        return NULL;
    }
    }
    panda$core$Object* $tmp3507 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3506 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3507);
    ITable* $tmp3508 = ((panda$collections$CollectionView*) cl3506->parameters)->$class->itable;
    while ($tmp3508->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3508 = $tmp3508->next;
    }
    $fn3510 $tmp3509 = $tmp3508->methods[0];
    panda$core$Int64 $tmp3511 = $tmp3509(((panda$collections$CollectionView*) cl3506->parameters));
    panda$core$Bit $tmp3512 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3511, ((panda$core$Int64) { 0 }));
    if ($tmp3512.value) {
    {
        panda$collections$Array* $tmp3514 = (panda$collections$Array*) malloc(40);
        $tmp3514->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3514->refCount.value = 1;
        panda$collections$Array$init($tmp3514);
        subtypes3513 = $tmp3514;
        org$pandalanguage$pandac$Type* $tmp3516 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3506);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3513, ((panda$core$Object*) $tmp3516));
        panda$core$MutableString* $tmp3518 = (panda$core$MutableString*) malloc(48);
        $tmp3518->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3518->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3518, ((org$pandalanguage$pandac$Symbol*) cl3506)->name);
        name3517 = $tmp3518;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3520, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3517, $tmp3520);
        separator3521 = &$s3522;
        {
            ITable* $tmp3524 = ((panda$collections$Iterable*) cl3506->parameters)->$class->itable;
            while ($tmp3524->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3524 = $tmp3524->next;
            }
            $fn3526 $tmp3525 = $tmp3524->methods[0];
            panda$collections$Iterator* $tmp3527 = $tmp3525(((panda$collections$Iterable*) cl3506->parameters));
            p$Iter3523 = $tmp3527;
            $l3528:;
            ITable* $tmp3530 = p$Iter3523->$class->itable;
            while ($tmp3530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3530 = $tmp3530->next;
            }
            $fn3532 $tmp3531 = $tmp3530->methods[0];
            panda$core$Bit $tmp3533 = $tmp3531(p$Iter3523);
            panda$core$Bit $tmp3534 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3533);
            if (!$tmp3534.value) goto $l3529;
            {
                ITable* $tmp3536 = p$Iter3523->$class->itable;
                while ($tmp3536->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3536 = $tmp3536->next;
                }
                $fn3538 $tmp3537 = $tmp3536->methods[1];
                panda$core$Object* $tmp3539 = $tmp3537(p$Iter3523);
                p3535 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3539);
                panda$collections$Array* $tmp3541 = (panda$collections$Array*) malloc(40);
                $tmp3541->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3541->refCount.value = 1;
                panda$collections$Array$init($tmp3541);
                pType3540 = $tmp3541;
                panda$collections$Array$add$panda$collections$Array$T(pType3540, ((panda$core$Object*) p3535->bound));
                panda$core$String* $tmp3544 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3506)->name);
                panda$core$String* $tmp3546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3544, &$s3545);
                panda$core$String* $tmp3547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3546, ((org$pandalanguage$pandac$Symbol*) p3535)->name);
                panda$core$String* $tmp3549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3547, &$s3548);
                pName3543 = $tmp3549;
                panda$core$MutableString$append$panda$core$String(name3517, separator3521);
                panda$core$MutableString$append$panda$core$String(name3517, pName3543);
                org$pandalanguage$pandac$Type* $tmp3550 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3550->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3550->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3550, p3535);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3513, ((panda$core$Object*) $tmp3550));
                separator3521 = &$s3552;
            }
            goto $l3528;
            $l3529:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3553, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3517, $tmp3553);
        org$pandalanguage$pandac$Type* $tmp3554 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3554->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3554->refCount.value = 1;
        panda$core$String* $tmp3556 = panda$core$MutableString$finish$R$panda$core$String(name3517);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3554, $tmp3556, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3513), ((panda$core$Bit) { true }));
        type3505 = $tmp3554;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3557 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3506);
        type3505 = $tmp3557;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3558 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3558->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3558->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3558, ((panda$core$Int64) { 1025 }), p_s->position, type3505);
    return $tmp3558;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3564;
    panda$core$Bit $tmp3560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3560.value);
    panda$core$Object* $tmp3561 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3562 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3561)->annotations);
    if ($tmp3562.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3563);
        return NULL;
    }
    }
    panda$core$Object* $tmp3565 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3564 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3565);
    PANDA_ASSERT(cl3564->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3566 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3566->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3566->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3566, ((panda$core$Int64) { 1024 }), p_s->position, cl3564->rawSuper);
    return $tmp3566;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3568;
    panda$core$String$Index$nullable index3570;
    org$pandalanguage$pandac$Type* type3577;
    org$pandalanguage$pandac$IRNode* base3579;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3582;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3585;
    org$pandalanguage$pandac$Type* type3589;
    org$pandalanguage$pandac$IRNode* $tmp3569 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3568 = $tmp3569;
    if (((panda$core$Bit) { value3568 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3572 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3571);
    index3570 = $tmp3572;
    panda$core$Bit $tmp3574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3573 = $tmp3574.value;
    if (!$tmp3573) goto $l3575;
    $tmp3573 = ((panda$core$Bit) { index3570.nonnull }).value;
    $l3575:;
    panda$core$Bit $tmp3576 = { $tmp3573 };
    if ($tmp3576.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3578 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3577 = $tmp3578;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3577 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3580 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3580->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3580->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3582, ((panda$core$String$Index$nullable) { .nonnull = false }), index3570, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3583 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3582);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3580, $tmp3583, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3584 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3580);
            base3579 = $tmp3584;
            if (((panda$core$Bit) { base3579 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3586 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3570.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3585, ((panda$core$String$Index$nullable) { $tmp3586, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3587 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3585);
            org$pandalanguage$pandac$IRNode* $tmp3588 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3579, $tmp3587);
            return $tmp3588;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3590 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3589 = $tmp3590;
    if (((panda$core$Bit) { type3589 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3591 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3568, type3589);
    if (((panda$core$Bit) { $tmp3591.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3592 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3568, type3589);
        return $tmp3592;
    }
    }
    panda$core$Bit $tmp3593 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3568, type3589);
    if ($tmp3593.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3594 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3568, p_position, ((panda$core$Bit) { true }), type3589);
        return $tmp3594;
    }
    }
    else {
    {
        panda$core$String* $tmp3596 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3595, ((panda$core$Object*) value3568->type));
        panda$core$String* $tmp3598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3596, &$s3597);
        panda$core$String* $tmp3600 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3599, ((panda$core$Object*) type3589));
        panda$core$String* $tmp3602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3600, &$s3601);
        panda$core$String* $tmp3603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3598, $tmp3602);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3603);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3604.value);
    panda$core$Int64 $tmp3605 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3605, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3606.value);
    panda$core$Object* $tmp3607 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3609 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3608));
    org$pandalanguage$pandac$IRNode* $tmp3610 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3607), $tmp3609);
    return $tmp3610;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3611.value);
    org$pandalanguage$pandac$IRNode* $tmp3612 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3612->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3612->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3614 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3612, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3614);
    return $tmp3612;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3619;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3615 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3615;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3616 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3616->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3616->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3618 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3616, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3618, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3616;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3620 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3619 = $tmp3620;
            bool $tmp3621 = ((panda$core$Bit) { result3619 != NULL }).value;
            if (!$tmp3621) goto $l3622;
            org$pandalanguage$pandac$Type* $tmp3623 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3624 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3619->type, $tmp3623);
            $tmp3621 = $tmp3624.value;
            $l3622:;
            panda$core$Bit $tmp3625 = { $tmp3621 };
            if ($tmp3625.value) {
            {
                panda$core$Bit $tmp3626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3619->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3626.value);
                panda$core$String* $tmp3627 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3619->payload)->value);
                panda$core$String* $tmp3629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3627, &$s3628);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3619->position, $tmp3629);
                return NULL;
            }
            }
            return result3619;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3630 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3630;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3631 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3631;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3632 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3632->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3632->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3634 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3632, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3634, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3632;
        }
        break;
        case 157:
        {
            org$pandalanguage$pandac$IRNode* $tmp3635 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3635->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3635->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3637 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(((panda$core$Real64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3635, ((panda$core$Int64) { 1045 }), p_e->position, $tmp3637, ((panda$core$Real64$wrapper*) p_e->payload)->value);
            return $tmp3635;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3638 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3638;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3639 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3639;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3640 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3640;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3641 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3641;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3642 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3642;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3643 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3643;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3644 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3644;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3645 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3645;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3647;
    panda$collections$Array* result3650;
    panda$collections$Iterator* stmt$Iter3653;
    org$pandalanguage$pandac$ASTNode* stmt3665;
    org$pandalanguage$pandac$IRNode* compiled3670;
    panda$core$Bit $tmp3646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3646.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3648 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3648->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3648->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3648, self->symbolTable);
    symbols3647 = $tmp3648;
    self->symbolTable = symbols3647;
    panda$collections$Array* $tmp3651 = (panda$collections$Array*) malloc(40);
    $tmp3651->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3651->refCount.value = 1;
    panda$collections$Array$init($tmp3651);
    result3650 = $tmp3651;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3654 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3654->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3654 = $tmp3654->next;
            }
            $fn3656 $tmp3655 = $tmp3654->methods[0];
            panda$collections$Iterator* $tmp3657 = $tmp3655(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3653 = $tmp3657;
            $l3658:;
            ITable* $tmp3660 = stmt$Iter3653->$class->itable;
            while ($tmp3660->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3660 = $tmp3660->next;
            }
            $fn3662 $tmp3661 = $tmp3660->methods[0];
            panda$core$Bit $tmp3663 = $tmp3661(stmt$Iter3653);
            panda$core$Bit $tmp3664 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3663);
            if (!$tmp3664.value) goto $l3659;
            {
                ITable* $tmp3666 = stmt$Iter3653->$class->itable;
                while ($tmp3666->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3666 = $tmp3666->next;
                }
                $fn3668 $tmp3667 = $tmp3666->methods[1];
                panda$core$Object* $tmp3669 = $tmp3667(stmt$Iter3653);
                stmt3665 = ((org$pandalanguage$pandac$ASTNode*) $tmp3669);
                org$pandalanguage$pandac$IRNode* $tmp3671 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3665);
                compiled3670 = $tmp3671;
                if (((panda$core$Bit) { compiled3670 == NULL }).value) {
                {
                    panda$core$Object* $tmp3672 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3647->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3672);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3673 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3670->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3673.value);
                panda$collections$Array$add$panda$collections$Array$T(result3650, ((panda$core$Object*) compiled3670));
            }
            goto $l3658;
            $l3659:;
        }
    }
    }
    panda$core$Object* $tmp3674 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3647->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3674);
    org$pandalanguage$pandac$IRNode* $tmp3675 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3675->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3675->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3675, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3650));
    return $tmp3675;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3685;
    org$pandalanguage$pandac$IRNode* ifTrue3690;
    panda$collections$Array* children3693;
    org$pandalanguage$pandac$IRNode* ifFalse3698;
    panda$core$Bit $tmp3677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3677.value);
    panda$core$Int64 $tmp3679 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3679, ((panda$core$Int64) { 2 }));
    bool $tmp3678 = $tmp3680.value;
    if ($tmp3678) goto $l3681;
    panda$core$Int64 $tmp3682 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3682, ((panda$core$Int64) { 3 }));
    $tmp3678 = $tmp3683.value;
    $l3681:;
    panda$core$Bit $tmp3684 = { $tmp3678 };
    PANDA_ASSERT($tmp3684.value);
    panda$core$Object* $tmp3686 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3687 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3686));
    org$pandalanguage$pandac$Type* $tmp3688 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3689 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3687, $tmp3688);
    test3685 = $tmp3689;
    if (((panda$core$Bit) { test3685 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3691 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3692 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3691));
    ifTrue3690 = $tmp3692;
    if (((panda$core$Bit) { ifTrue3690 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3694 = (panda$collections$Array*) malloc(40);
    $tmp3694->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3694->refCount.value = 1;
    panda$collections$Array$init($tmp3694);
    children3693 = $tmp3694;
    panda$collections$Array$add$panda$collections$Array$T(children3693, ((panda$core$Object*) test3685));
    panda$collections$Array$add$panda$collections$Array$T(children3693, ((panda$core$Object*) ifTrue3690));
    panda$core$Int64 $tmp3696 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3696, ((panda$core$Int64) { 3 }));
    if ($tmp3697.value) {
    {
        panda$core$Object* $tmp3699 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3700 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3699));
        ifFalse3698 = $tmp3700;
        if (((panda$core$Bit) { ifFalse3698 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3693, ((panda$core$Object*) ifFalse3698));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3701 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3701->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3701->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3701, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3693));
    return $tmp3701;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* type13707;
    org$pandalanguage$pandac$Type* type23710;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3721;
    panda$core$Bit $tmp3703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3703.value) {
    {
        panda$core$Object* $tmp3704 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3705 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$Type*) $tmp3704));
        return $tmp3705;
    }
    }
    panda$core$Bit $tmp3706 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_type);
    if ($tmp3706.value) {
    {
        panda$core$Object* $tmp3708 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp3709 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3708));
        type13707 = $tmp3709;
        panda$core$Object* $tmp3711 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 2 }));
        type23710 = ((org$pandalanguage$pandac$Type*) $tmp3711);
        panda$core$Bit $tmp3712 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(type13707, type23710);
        if ($tmp3712.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$Bit $tmp3715 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(type13707);
        bool $tmp3714 = $tmp3715.value;
        if (!$tmp3714) goto $l3716;
        panda$core$Bit $tmp3718 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type23710)->name, &$s3717);
        $tmp3714 = $tmp3718.value;
        $l3716:;
        panda$core$Bit $tmp3719 = { $tmp3714 };
        bool $tmp3713 = $tmp3719.value;
        if (!$tmp3713) goto $l3720;
        panda$core$Int64 $tmp3723 = panda$core$String$length$R$panda$core$Int64(&$s3722);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3721, ((panda$core$Int64$nullable) { $tmp3723, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp3724 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) type23710)->name, $tmp3721);
        panda$core$Bit $tmp3725 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type13707)->name, $tmp3724);
        $tmp3713 = $tmp3725.value;
        $l3720:;
        panda$core$Bit $tmp3726 = { $tmp3713 };
        if ($tmp3726.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$String* $tmp3728 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3727, ((panda$core$Object*) p_type));
        panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3728, &$s3729);
        panda$core$String* $tmp3732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3730, &$s3731);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3732);
        return ((panda$core$Bit) { false });
    }
    }
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3733;
    org$pandalanguage$pandac$IRNode* list3734;
    org$pandalanguage$pandac$Type* t3746;
    org$pandalanguage$pandac$Type* listType3779;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3811;
    org$pandalanguage$pandac$Variable$Kind $tmp3812;
    org$pandalanguage$pandac$IRNode* body3814;
    panda$collections$Array* children3816;
    panda$core$Bit $tmp3737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3736 = $tmp3737.value;
    if (!$tmp3736) goto $l3738;
    $tmp3736 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3738:;
    panda$core$Bit $tmp3739 = { $tmp3736 };
    bool $tmp3735 = $tmp3739.value;
    if (!$tmp3735) goto $l3740;
    panda$core$Int64 $tmp3741 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3742 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3741, ((panda$core$Int64) { 0 }));
    $tmp3735 = $tmp3742.value;
    $l3740:;
    panda$core$Bit $tmp3743 = { $tmp3735 };
    if ($tmp3743.value) {
    {
        panda$core$Int64 $tmp3744 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3744, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3745.value);
        panda$core$Object* $tmp3747 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3748 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3747));
        org$pandalanguage$pandac$Type* $tmp3749 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3748);
        t3746 = $tmp3749;
        panda$core$Bit $tmp3750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t3746->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3750.value) {
        {
            panda$core$String* $tmp3752 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3751, ((panda$core$Object*) t3746));
            panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3752, &$s3753);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3754);
            return NULL;
        }
        }
        panda$core$Bit $tmp3755 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(t3746);
        panda$core$Bit $tmp3756 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3755);
        if ($tmp3756.value) {
        {
            panda$core$String* $tmp3758 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3757, ((panda$core$Object*) t3746));
            panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3758, &$s3759);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3760);
            return NULL;
        }
        }
        panda$core$Bit $tmp3761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3761.value) {
        {
            panda$core$Int64 $tmp3762 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3762, ((panda$core$Int64) { 2 }));
            if ($tmp3763.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3764 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3746);
                org$pandalanguage$pandac$IRNode* $tmp3765 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3764);
                list3734 = $tmp3765;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3766 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3766, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3767.value);
                org$pandalanguage$pandac$Type* $tmp3768 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3746);
                org$pandalanguage$pandac$IRNode* $tmp3769 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3768);
                list3734 = $tmp3769;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3770 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3770.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3771 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3746);
            org$pandalanguage$pandac$IRNode* $tmp3772 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3771);
            list3734 = $tmp3772;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3773 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3746);
        panda$core$Int64$nullable $tmp3774 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3773);
        if (((panda$core$Bit) { $tmp3774.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3775 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3746);
            org$pandalanguage$pandac$IRNode* $tmp3776 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3775);
            list3734 = $tmp3776;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3777 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3746);
            org$pandalanguage$pandac$IRNode* $tmp3778 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3777);
            list3734 = $tmp3778;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3780 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_rawList);
        listType3779 = $tmp3780;
        panda$core$Bit $tmp3782 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3779);
        bool $tmp3781 = $tmp3782.value;
        if ($tmp3781) goto $l3783;
        panda$core$Bit $tmp3784 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(listType3779);
        $tmp3781 = $tmp3784.value;
        $l3783:;
        panda$core$Bit $tmp3785 = { $tmp3781 };
        PANDA_ASSERT($tmp3785.value);
        panda$core$Object* $tmp3786 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3779->subtypes, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp3787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3786)->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3787.value) {
        {
            panda$core$Bit $tmp3788 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3779);
            if ($tmp3788.value) {
            {
                panda$core$Object* $tmp3789 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3779->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3790 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3789));
                org$pandalanguage$pandac$Type* $tmp3791 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3790);
                listType3779 = $tmp3791;
            }
            }
            else {
            {
                panda$core$Object* $tmp3792 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3779->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3793 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3792));
                org$pandalanguage$pandac$Type* $tmp3794 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3793);
                listType3779 = $tmp3794;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3795 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, listType3779);
        list3734 = $tmp3795;
    }
    }
    if (((panda$core$Bit) { list3734 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3796 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, list3734->position, list3734->type);
    panda$core$Bit $tmp3797 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3796);
    if ($tmp3797.value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3734->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3798.value) {
    {
        panda$core$Object* $tmp3799 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3734->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3799)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3800.value);
        panda$core$Object* $tmp3801 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3734->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3802 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3801)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3733 = ((org$pandalanguage$pandac$Type*) $tmp3802);
    }
    }
    else {
    {
        panda$core$Bit $tmp3803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3734->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3803.value);
        panda$core$Object* $tmp3804 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3734->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3733 = ((org$pandalanguage$pandac$Type*) $tmp3804);
    }
    }
    panda$core$Bit $tmp3805 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(elementType3733);
    panda$core$Bit $tmp3806 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3805);
    if ($tmp3806.value) {
    {
        panda$core$String* $tmp3808 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3807, ((panda$core$Object*) list3734->type));
        panda$core$String* $tmp3810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3808, &$s3809);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3734->position, $tmp3810);
    }
    }
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3812, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3813 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp3812, NULL, elementType3733);
    target3811 = $tmp3813;
    if (((panda$core$Bit) { target3811 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3811->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3815 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3814 = $tmp3815;
    if (((panda$core$Bit) { body3814 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3817 = (panda$collections$Array*) malloc(40);
    $tmp3817->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3817->refCount.value = 1;
    panda$collections$Array$init($tmp3817);
    children3816 = $tmp3817;
    panda$collections$Array$add$panda$collections$Array$T(children3816, ((panda$core$Object*) target3811->target));
    panda$collections$Array$add$panda$collections$Array$T(children3816, ((panda$core$Object*) list3734));
    panda$collections$Array$add$panda$collections$Array$T(children3816, ((panda$core$Object*) body3814));
    org$pandalanguage$pandac$IRNode* $tmp3819 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3819->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3819->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3819, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3816));
    return $tmp3819;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3828;
    org$pandalanguage$pandac$Variable$Kind $tmp3829;
    org$pandalanguage$pandac$Variable* targetVar3833;
    panda$collections$Array* subtypes3834;
    org$pandalanguage$pandac$Type* iterType3838;
    org$pandalanguage$pandac$Variable* iter3849;
    org$pandalanguage$pandac$Variable$Kind $tmp3852;
    panda$collections$Array* statements3855;
    panda$collections$Array* declChildren3858;
    panda$collections$Array* varChildren3863;
    panda$collections$Array* whileChildren3870;
    org$pandalanguage$pandac$IRNode* done3873;
    org$pandalanguage$pandac$IRNode* notCall3880;
    panda$collections$Array* valueDeclChildren3885;
    org$pandalanguage$pandac$IRNode* next3890;
    panda$collections$Array* valueVarChildren3897;
    org$pandalanguage$pandac$IRNode* block3902;
    panda$collections$Array* blockChildren3904;
    panda$core$Bit $tmp3822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3821 = $tmp3822.value;
    if (!$tmp3821) goto $l3823;
    panda$core$Object* $tmp3824 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3825 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3826 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3824), $tmp3825);
    $tmp3821 = $tmp3826.value;
    $l3823:;
    panda$core$Bit $tmp3827 = { $tmp3821 };
    PANDA_ASSERT($tmp3827.value);
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3829, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp3830 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3831 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp3829, NULL, ((org$pandalanguage$pandac$Type*) $tmp3830));
    target3828 = $tmp3831;
    if (((panda$core$Bit) { target3828 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3828->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3832.value);
    targetVar3833 = ((org$pandalanguage$pandac$Variable*) target3828->target->payload);
    panda$collections$Array* $tmp3835 = (panda$collections$Array*) malloc(40);
    $tmp3835->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3835->refCount.value = 1;
    panda$collections$Array$init($tmp3835);
    subtypes3834 = $tmp3835;
    org$pandalanguage$pandac$Type* $tmp3837 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3834, ((panda$core$Object*) $tmp3837));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3834, ((panda$core$Object*) target3828->target->type));
    org$pandalanguage$pandac$Type* $tmp3839 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3839->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3839->refCount.value = 1;
    panda$core$Object* $tmp3841 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3834, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3842 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3841));
    panda$core$String* $tmp3844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3842, &$s3843);
    panda$core$Object* $tmp3845 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3834, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3846 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3844, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3845)));
    panda$core$String* $tmp3848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3846, &$s3847);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3839, $tmp3848, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3834), ((panda$core$Bit) { true }));
    iterType3838 = $tmp3839;
    org$pandalanguage$pandac$Variable* $tmp3850 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3850->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3850->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3852, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3833)->name, &$s3853);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp3850, p_iterator->position, $tmp3852, $tmp3854, iterType3838);
    iter3849 = $tmp3850;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3849));
    panda$collections$Array* $tmp3856 = (panda$collections$Array*) malloc(40);
    $tmp3856->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3856->refCount.value = 1;
    panda$collections$Array$init($tmp3856);
    statements3855 = $tmp3856;
    panda$collections$Array* $tmp3859 = (panda$collections$Array*) malloc(40);
    $tmp3859->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3859->refCount.value = 1;
    panda$collections$Array$init($tmp3859);
    declChildren3858 = $tmp3859;
    org$pandalanguage$pandac$IRNode* $tmp3861 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3861->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3861->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3861, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3849->type, iter3849);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3858, ((panda$core$Object*) $tmp3861));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3858, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3864 = (panda$collections$Array*) malloc(40);
    $tmp3864->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3864->refCount.value = 1;
    panda$collections$Array$init($tmp3864);
    varChildren3863 = $tmp3864;
    org$pandalanguage$pandac$IRNode* $tmp3866 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3866->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3866->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3866, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3849)->position, ((panda$collections$ListView*) declChildren3858));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3863, ((panda$core$Object*) $tmp3866));
    org$pandalanguage$pandac$IRNode* $tmp3868 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3868->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3868->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3868, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3849)->position, ((panda$collections$ListView*) varChildren3863));
    panda$collections$Array$add$panda$collections$Array$T(statements3855, ((panda$core$Object*) $tmp3868));
    panda$collections$Array* $tmp3871 = (panda$collections$Array*) malloc(40);
    $tmp3871->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3871->refCount.value = 1;
    panda$collections$Array$init($tmp3871);
    whileChildren3870 = $tmp3871;
    org$pandalanguage$pandac$IRNode* $tmp3874 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3874->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3874->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3874, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3849)->position, iter3849->type, iter3849);
    panda$collections$Array* $tmp3877 = (panda$collections$Array*) malloc(40);
    $tmp3877->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3877->refCount.value = 1;
    panda$collections$Array$init($tmp3877);
    org$pandalanguage$pandac$IRNode* $tmp3879 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3874, &$s3876, ((panda$collections$ListView*) $tmp3877), NULL);
    done3873 = $tmp3879;
    if (((panda$core$Bit) { done3873 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3882 = (panda$collections$Array*) malloc(40);
    $tmp3882->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3882->refCount.value = 1;
    panda$collections$Array$init($tmp3882);
    org$pandalanguage$pandac$IRNode* $tmp3884 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3873, &$s3881, ((panda$collections$ListView*) $tmp3882), NULL);
    notCall3880 = $tmp3884;
    if (((panda$core$Bit) { notCall3880 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3870, ((panda$core$Object*) notCall3880));
    panda$collections$Array* $tmp3886 = (panda$collections$Array*) malloc(40);
    $tmp3886->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3886->refCount.value = 1;
    panda$collections$Array$init($tmp3886);
    valueDeclChildren3885 = $tmp3886;
    org$pandalanguage$pandac$IRNode* $tmp3888 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3888->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3888->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3888, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3833->type, targetVar3833);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3885, ((panda$core$Object*) $tmp3888));
    org$pandalanguage$pandac$IRNode* $tmp3891 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3891->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3891->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3891, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3849->type, iter3849);
    panda$collections$Array* $tmp3894 = (panda$collections$Array*) malloc(40);
    $tmp3894->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3894->refCount.value = 1;
    panda$collections$Array$init($tmp3894);
    org$pandalanguage$pandac$IRNode* $tmp3896 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3891, &$s3893, ((panda$collections$ListView*) $tmp3894), NULL);
    next3890 = $tmp3896;
    PANDA_ASSERT(((panda$core$Bit) { next3890 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3885, ((panda$core$Object*) next3890));
    panda$collections$Array* $tmp3898 = (panda$collections$Array*) malloc(40);
    $tmp3898->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3898->refCount.value = 1;
    panda$collections$Array$init($tmp3898);
    valueVarChildren3897 = $tmp3898;
    org$pandalanguage$pandac$IRNode* $tmp3900 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3900->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3900->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3900, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3885));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren3897, ((panda$core$Object*) $tmp3900));
    org$pandalanguage$pandac$IRNode* $tmp3903 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block3902 = $tmp3903;
    if (((panda$core$Bit) { block3902 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3905 = (panda$collections$Array*) malloc(40);
    $tmp3905->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3905->refCount.value = 1;
    panda$collections$Array$init($tmp3905);
    blockChildren3904 = $tmp3905;
    org$pandalanguage$pandac$IRNode* $tmp3907 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3907->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3907->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3907, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren3897));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren3904, ((panda$core$Object*) $tmp3907));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren3904, ((panda$collections$CollectionView*) block3902->children));
    org$pandalanguage$pandac$IRNode* $tmp3909 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3909->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3909->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3909, ((panda$core$Int64) { 1000 }), block3902->position, ((panda$collections$ListView*) blockChildren3904));
    block3902 = $tmp3909;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3870, ((panda$core$Object*) block3902));
    org$pandalanguage$pandac$IRNode* $tmp3911 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3911->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3911->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3911, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3870));
    panda$collections$Array$add$panda$collections$Array$T(statements3855, ((panda$core$Object*) $tmp3911));
    org$pandalanguage$pandac$IRNode* $tmp3913 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3913->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3913->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3913, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3855));
    return $tmp3913;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list3918;
    org$pandalanguage$pandac$SymbolTable* symbols3921;
    org$pandalanguage$pandac$IRNode* result3924;
    panda$core$Bit found3938;
    panda$collections$Iterator* intf$Iter3939;
    org$pandalanguage$pandac$Type* intf3952;
    org$pandalanguage$pandac$IRNode* iterator3964;
    org$pandalanguage$pandac$IRNode* iterable3976;
    org$pandalanguage$pandac$IRNode* iterator3978;
    panda$core$Bit $tmp3915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp3915.value);
    panda$core$Int64 $tmp3916 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3916, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3917.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp3919 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3920 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3919));
    list3918 = $tmp3920;
    if (((panda$core$Bit) { list3918 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3922 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3922->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3922->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3922, self->symbolTable);
    symbols3921 = $tmp3922;
    self->symbolTable = symbols3921;
    panda$core$Bit $tmp3927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3918->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp3926 = $tmp3927.value;
    if ($tmp3926) goto $l3928;
    panda$core$Bit $tmp3929 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list3918->type);
    $tmp3926 = $tmp3929.value;
    $l3928:;
    panda$core$Bit $tmp3930 = { $tmp3926 };
    bool $tmp3925 = $tmp3930.value;
    if ($tmp3925) goto $l3931;
    panda$core$Bit $tmp3932 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list3918->type);
    $tmp3925 = $tmp3932.value;
    $l3931:;
    panda$core$Bit $tmp3933 = { $tmp3925 };
    if ($tmp3933.value) {
    {
        panda$core$Object* $tmp3934 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3935 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3936 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3934), list3918, ((org$pandalanguage$pandac$ASTNode*) $tmp3935));
        result3924 = $tmp3936;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp3937 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list3918);
        list3918 = $tmp3937;
        if (((panda$core$Bit) { list3918 == NULL }).value) {
        {
            return NULL;
        }
        }
        found3938 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp3940 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list3918->type);
            ITable* $tmp3941 = ((panda$collections$Iterable*) $tmp3940)->$class->itable;
            while ($tmp3941->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3941 = $tmp3941->next;
            }
            $fn3943 $tmp3942 = $tmp3941->methods[0];
            panda$collections$Iterator* $tmp3944 = $tmp3942(((panda$collections$Iterable*) $tmp3940));
            intf$Iter3939 = $tmp3944;
            $l3945:;
            ITable* $tmp3947 = intf$Iter3939->$class->itable;
            while ($tmp3947->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3947 = $tmp3947->next;
            }
            $fn3949 $tmp3948 = $tmp3947->methods[0];
            panda$core$Bit $tmp3950 = $tmp3948(intf$Iter3939);
            panda$core$Bit $tmp3951 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3950);
            if (!$tmp3951.value) goto $l3946;
            {
                ITable* $tmp3953 = intf$Iter3939->$class->itable;
                while ($tmp3953->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3953 = $tmp3953->next;
                }
                $fn3955 $tmp3954 = $tmp3953->methods[1];
                panda$core$Object* $tmp3956 = $tmp3954(intf$Iter3939);
                intf3952 = ((org$pandalanguage$pandac$Type*) $tmp3956);
                panda$core$Bit $tmp3958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3952->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3957 = $tmp3958.value;
                if (!$tmp3957) goto $l3959;
                panda$core$Object* $tmp3960 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3952->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3961 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3962 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3960), $tmp3961);
                $tmp3957 = $tmp3962.value;
                $l3959:;
                panda$core$Bit $tmp3963 = { $tmp3957 };
                if ($tmp3963.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3965 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3918, intf3952);
                    iterator3964 = $tmp3965;
                    panda$core$Object* $tmp3966 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3967 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3968 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3966), iterator3964, ((org$pandalanguage$pandac$ASTNode*) $tmp3967));
                    result3924 = $tmp3968;
                    found3938 = ((panda$core$Bit) { true });
                    goto $l3946;
                }
                }
                panda$core$Bit $tmp3970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf3952->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp3969 = $tmp3970.value;
                if (!$tmp3969) goto $l3971;
                panda$core$Object* $tmp3972 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf3952->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp3973 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3974 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3972), $tmp3973);
                $tmp3969 = $tmp3974.value;
                $l3971:;
                panda$core$Bit $tmp3975 = { $tmp3969 };
                if ($tmp3975.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp3977 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list3918, intf3952);
                    iterable3976 = $tmp3977;
                    panda$collections$Array* $tmp3980 = (panda$collections$Array*) malloc(40);
                    $tmp3980->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp3980->refCount.value = 1;
                    panda$collections$Array$init($tmp3980);
                    org$pandalanguage$pandac$IRNode* $tmp3982 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable3976, &$s3979, ((panda$collections$ListView*) $tmp3980));
                    iterator3978 = $tmp3982;
                    panda$core$Object* $tmp3983 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp3984 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp3985 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp3983), iterator3978, ((org$pandalanguage$pandac$ASTNode*) $tmp3984));
                    result3924 = $tmp3985;
                    found3938 = ((panda$core$Bit) { true });
                    goto $l3946;
                }
                }
            }
            goto $l3945;
            $l3946:;
        }
        panda$core$Bit $tmp3986 = panda$core$Bit$$NOT$R$panda$core$Bit(found3938);
        if ($tmp3986.value) {
        {
            panda$core$String* $tmp3988 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3987, ((panda$core$Object*) list3918->type));
            panda$core$String* $tmp3990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3988, &$s3989);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3918->position, $tmp3990);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3991 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3921->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3991);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result3924;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test3995;
    org$pandalanguage$pandac$IRNode* stmt4000;
    panda$collections$Array* children4003;
    panda$core$Bit $tmp3992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp3992.value);
    panda$core$Int64 $tmp3993 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3993, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3994.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp3996 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3997 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3996));
    org$pandalanguage$pandac$Type* $tmp3998 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3999 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3997, $tmp3998);
    test3995 = $tmp3999;
    if (((panda$core$Bit) { test3995 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp4001 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4002 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4001));
    stmt4000 = $tmp4002;
    if (((panda$core$Bit) { stmt4000 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4004 = (panda$collections$Array*) malloc(40);
    $tmp4004->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4004->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4004, ((panda$core$Int64) { 2 }));
    children4003 = $tmp4004;
    panda$collections$Array$add$panda$collections$Array$T(children4003, ((panda$core$Object*) test3995));
    panda$collections$Array$add$panda$collections$Array$T(children4003, ((panda$core$Object*) stmt4000));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4006 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4006->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4006->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4006, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children4003));
    return $tmp4006;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt4011;
    org$pandalanguage$pandac$IRNode* test4014;
    panda$collections$Array* children4019;
    panda$core$Bit $tmp4008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp4008.value);
    panda$core$Int64 $tmp4009 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4009, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4010.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp4012 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4013 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4012));
    stmt4011 = $tmp4013;
    if (((panda$core$Bit) { stmt4011 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp4015 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4016 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4015));
    org$pandalanguage$pandac$Type* $tmp4017 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4018 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4016, $tmp4017);
    test4014 = $tmp4018;
    if (((panda$core$Bit) { test4014 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4020 = (panda$collections$Array*) malloc(40);
    $tmp4020->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4020->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4020, ((panda$core$Int64) { 2 }));
    children4019 = $tmp4020;
    panda$collections$Array$add$panda$collections$Array$T(children4019, ((panda$core$Object*) stmt4011));
    panda$collections$Array$add$panda$collections$Array$T(children4019, ((panda$core$Object*) test4014));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4022 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4022->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4022->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4022, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children4019));
    return $tmp4022;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt4027;
    panda$collections$Array* children4030;
    panda$core$Bit $tmp4024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp4024.value);
    panda$core$Int64 $tmp4025 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp4026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4025, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4026.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp4028 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4029 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4028));
    stmt4027 = $tmp4029;
    if (((panda$core$Bit) { stmt4027 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4031 = (panda$collections$Array*) malloc(40);
    $tmp4031->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4031->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4031, ((panda$core$Int64) { 1 }));
    children4030 = $tmp4031;
    panda$collections$Array$add$panda$collections$Array$T(children4030, ((panda$core$Object*) stmt4027));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4033 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4033->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4033->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4033, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children4030));
    return $tmp4033;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, org$pandalanguage$pandac$Variable$Kind p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value4035;
    org$pandalanguage$pandac$Type* type4039;
    org$pandalanguage$pandac$Variable* v4055;
    value4035 = p_rawValue;
    bool $tmp4036 = ((panda$core$Bit) { value4035 == NULL }).value;
    if ($tmp4036) goto $l4037;
    $tmp4036 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l4037:;
    panda$core$Bit $tmp4038 = { $tmp4036 };
    PANDA_ASSERT($tmp4038.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp4040 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp4040) goto $l4041;
            panda$core$Int64 $tmp4042 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp4043 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4042, ((panda$core$Int64) { 0 }));
            $tmp4040 = $tmp4043.value;
            $l4041:;
            panda$core$Bit $tmp4044 = { $tmp4040 };
            if ($tmp4044.value) {
            {
                panda$core$Int64 $tmp4045 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp4046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4045, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp4046.value);
                panda$core$Object* $tmp4047 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4048 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp4047));
                org$pandalanguage$pandac$Type* $tmp4049 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp4048);
                type4039 = $tmp4049;
            }
            }
            else {
            if (((panda$core$Bit) { value4035 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4050 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value4035);
                value4035 = $tmp4050;
                if (((panda$core$Bit) { value4035 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp4051 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value4035);
                type4039 = $tmp4051;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type4039 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s4052);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value4035 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4053 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value4035, type4039);
                value4035 = $tmp4053;
                if (((panda$core$Bit) { value4035 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp4054 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value4035->type, type4039);
                PANDA_ASSERT($tmp4054.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp4056 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4056->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4056->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4056, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type4039);
            v4055 = $tmp4056;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v4055));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4058 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp4058->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp4058->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4060 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4060->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4060->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4060, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v4055)->position, v4055->type, v4055);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4058, $tmp4060, value4035);
            return $tmp4058;
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
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d, org$pandalanguage$pandac$Variable$Kind p_varKind) {
    org$pandalanguage$pandac$IRNode* value4070;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4075;
    panda$collections$Array* children4078;
    org$pandalanguage$pandac$Variable* v4082;
    panda$core$Bit $tmp4062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp4062.value);
    panda$core$Int64 $tmp4064 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4064, ((panda$core$Int64) { 1 }));
    bool $tmp4063 = $tmp4065.value;
    if ($tmp4063) goto $l4066;
    panda$core$Int64 $tmp4067 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4067, ((panda$core$Int64) { 2 }));
    $tmp4063 = $tmp4068.value;
    $l4066:;
    panda$core$Bit $tmp4069 = { $tmp4063 };
    PANDA_ASSERT($tmp4069.value);
    panda$core$Int64 $tmp4071 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4071, ((panda$core$Int64) { 2 }));
    if ($tmp4072.value) {
    {
        panda$core$Object* $tmp4073 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4074 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4073));
        value4070 = $tmp4074;
        if (((panda$core$Bit) { value4070 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value4070 = NULL;
    }
    }
    panda$core$Object* $tmp4076 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4077 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4076), p_varKind, value4070, NULL);
    target4075 = $tmp4077;
    if (((panda$core$Bit) { target4075 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4079 = (panda$collections$Array*) malloc(40);
    $tmp4079->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4079->refCount.value = 1;
    panda$collections$Array$init($tmp4079);
    children4078 = $tmp4079;
    panda$collections$Array$add$panda$collections$Array$T(children4078, ((panda$core$Object*) target4075->target));
    if (((panda$core$Bit) { target4075->value != NULL }).value) {
    {
        panda$core$Bit $tmp4081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4075->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp4081.value);
        v4082 = ((org$pandalanguage$pandac$Variable*) target4075->target->payload);
        v4082->initialValue = target4075->value;
        panda$collections$Array$add$panda$collections$Array$T(children4078, ((panda$core$Object*) target4075->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4083 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4083->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4083->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4083, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children4078));
    return $tmp4083;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found4086;
    panda$collections$Iterator* label$Iter4087;
    panda$core$String* label4099;
    panda$core$Bit $tmp4085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp4085.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found4086 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4088 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4088->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4088 = $tmp4088->next;
            }
            $fn4090 $tmp4089 = $tmp4088->methods[0];
            panda$collections$Iterator* $tmp4091 = $tmp4089(((panda$collections$Iterable*) self->loops));
            label$Iter4087 = $tmp4091;
            $l4092:;
            ITable* $tmp4094 = label$Iter4087->$class->itable;
            while ($tmp4094->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4094 = $tmp4094->next;
            }
            $fn4096 $tmp4095 = $tmp4094->methods[0];
            panda$core$Bit $tmp4097 = $tmp4095(label$Iter4087);
            panda$core$Bit $tmp4098 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4097);
            if (!$tmp4098.value) goto $l4093;
            {
                ITable* $tmp4100 = label$Iter4087->$class->itable;
                while ($tmp4100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4100 = $tmp4100->next;
                }
                $fn4102 $tmp4101 = $tmp4100->methods[1];
                panda$core$Object* $tmp4103 = $tmp4101(label$Iter4087);
                label4099 = ((panda$core$String*) $tmp4103);
                bool $tmp4104 = ((panda$core$Bit) { label4099 != NULL }).value;
                if (!$tmp4104) goto $l4105;
                panda$core$Bit $tmp4109;
                if (((panda$core$Bit) { label4099 != NULL }).value) goto $l4106; else goto $l4107;
                $l4106:;
                panda$core$Bit $tmp4110 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4099, ((panda$core$String*) p_b->payload));
                $tmp4109 = $tmp4110;
                goto $l4108;
                $l4107:;
                $tmp4109 = ((panda$core$Bit) { false });
                goto $l4108;
                $l4108:;
                $tmp4104 = $tmp4109.value;
                $l4105:;
                panda$core$Bit $tmp4111 = { $tmp4104 };
                if ($tmp4111.value) {
                {
                    found4086 = ((panda$core$Bit) { true });
                    goto $l4093;
                }
                }
            }
            goto $l4092;
            $l4093:;
        }
        panda$core$Bit $tmp4112 = panda$core$Bit$$NOT$R$panda$core$Bit(found4086);
        if ($tmp4112.value) {
        {
            panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4113, p_b->payload);
            panda$core$String* $tmp4116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4114, &$s4115);
            panda$core$String* $tmp4118 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4117, p_b->payload);
            panda$core$String* $tmp4120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4118, &$s4119);
            panda$core$String* $tmp4121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4116, $tmp4120);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp4121);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4122 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4122, ((panda$core$Int64) { 0 }));
    if ($tmp4123.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s4124);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4125 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4125->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4125->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4125, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp4125;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found4128;
    panda$collections$Iterator* label$Iter4129;
    panda$core$String* label4141;
    panda$core$Bit $tmp4127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp4127.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found4128 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4130 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4130->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4130 = $tmp4130->next;
            }
            $fn4132 $tmp4131 = $tmp4130->methods[0];
            panda$collections$Iterator* $tmp4133 = $tmp4131(((panda$collections$Iterable*) self->loops));
            label$Iter4129 = $tmp4133;
            $l4134:;
            ITable* $tmp4136 = label$Iter4129->$class->itable;
            while ($tmp4136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4136 = $tmp4136->next;
            }
            $fn4138 $tmp4137 = $tmp4136->methods[0];
            panda$core$Bit $tmp4139 = $tmp4137(label$Iter4129);
            panda$core$Bit $tmp4140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4139);
            if (!$tmp4140.value) goto $l4135;
            {
                ITable* $tmp4142 = label$Iter4129->$class->itable;
                while ($tmp4142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4142 = $tmp4142->next;
                }
                $fn4144 $tmp4143 = $tmp4142->methods[1];
                panda$core$Object* $tmp4145 = $tmp4143(label$Iter4129);
                label4141 = ((panda$core$String*) $tmp4145);
                bool $tmp4146 = ((panda$core$Bit) { label4141 != NULL }).value;
                if (!$tmp4146) goto $l4147;
                panda$core$Bit $tmp4151;
                if (((panda$core$Bit) { label4141 != NULL }).value) goto $l4148; else goto $l4149;
                $l4148:;
                panda$core$Bit $tmp4152 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4141, ((panda$core$String*) p_c->payload));
                $tmp4151 = $tmp4152;
                goto $l4150;
                $l4149:;
                $tmp4151 = ((panda$core$Bit) { false });
                goto $l4150;
                $l4150:;
                $tmp4146 = $tmp4151.value;
                $l4147:;
                panda$core$Bit $tmp4153 = { $tmp4146 };
                if ($tmp4153.value) {
                {
                    found4128 = ((panda$core$Bit) { true });
                    goto $l4135;
                }
                }
            }
            goto $l4134;
            $l4135:;
        }
        panda$core$Bit $tmp4154 = panda$core$Bit$$NOT$R$panda$core$Bit(found4128);
        if ($tmp4154.value) {
        {
            panda$core$String* $tmp4156 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4155, p_c->payload);
            panda$core$String* $tmp4158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4156, &$s4157);
            panda$core$String* $tmp4160 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4159, p_c->payload);
            panda$core$String* $tmp4162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4160, &$s4161);
            panda$core$String* $tmp4163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4158, $tmp4162);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp4163);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4164 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4164, ((panda$core$Int64) { 0 }));
    if ($tmp4165.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s4166);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4167 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4167->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4167->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4167, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp4167;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value4181;
    panda$collections$Array* children4186;
    panda$core$Bit $tmp4169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp4169.value);
    bool $tmp4170 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp4170) goto $l4171;
    panda$core$Int64 $tmp4172 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp4173 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4172, ((panda$core$Int64) { 0 }));
    $tmp4170 = $tmp4173.value;
    $l4171:;
    panda$core$Bit $tmp4174 = { $tmp4170 };
    if ($tmp4174.value) {
    {
        panda$core$Int64 $tmp4175 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp4176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4175, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4176.value);
        panda$core$Object* $tmp4177 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp4178 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4179 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4177)->returnType, $tmp4178);
        if ($tmp4179.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4180);
            return NULL;
        }
        }
        panda$core$Object* $tmp4182 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp4183 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4182));
        panda$core$Object* $tmp4184 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp4185 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4183, ((org$pandalanguage$pandac$MethodDecl*) $tmp4184)->returnType);
        value4181 = $tmp4185;
        if (((panda$core$Bit) { value4181 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4187 = (panda$collections$Array*) malloc(40);
        $tmp4187->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4187->refCount.value = 1;
        panda$collections$Array$init($tmp4187);
        children4186 = $tmp4187;
        panda$collections$Array$add$panda$collections$Array$T(children4186, ((panda$core$Object*) value4181));
        org$pandalanguage$pandac$IRNode* $tmp4189 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4189->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4189->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4189, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children4186));
        return $tmp4189;
    }
    }
    panda$core$Object* $tmp4191 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp4192 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4193 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4191)->returnType, $tmp4192);
    if ($tmp4193.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4194);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4195 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4195->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4195->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp4195, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp4195;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test4205;
    org$pandalanguage$pandac$ClassDecl* bit4210;
    org$pandalanguage$pandac$Symbol* value4213;
    panda$collections$Array* fieldChildren4216;
    panda$collections$Array* children4222;
    org$pandalanguage$pandac$IRNode* msg4227;
    panda$core$Bit $tmp4197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp4197.value);
    panda$core$Int64 $tmp4199 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4199, ((panda$core$Int64) { 1 }));
    bool $tmp4198 = $tmp4200.value;
    if ($tmp4198) goto $l4201;
    panda$core$Int64 $tmp4202 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4202, ((panda$core$Int64) { 2 }));
    $tmp4198 = $tmp4203.value;
    $l4201:;
    panda$core$Bit $tmp4204 = { $tmp4198 };
    PANDA_ASSERT($tmp4204.value);
    panda$core$Object* $tmp4206 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4207 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4206));
    test4205 = $tmp4207;
    if (((panda$core$Bit) { test4205 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4208 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4209 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test4205, $tmp4208);
    test4205 = $tmp4209;
    if (((panda$core$Bit) { test4205 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4211 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4212 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp4211);
    bit4210 = $tmp4212;
    PANDA_ASSERT(((panda$core$Bit) { bit4210 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp4215 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit4210->symbolTable, &$s4214);
    value4213 = $tmp4215;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value4213));
    panda$collections$Array* $tmp4217 = (panda$collections$Array*) malloc(40);
    $tmp4217->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4217->refCount.value = 1;
    panda$collections$Array$init($tmp4217);
    fieldChildren4216 = $tmp4217;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren4216, ((panda$core$Object*) test4205));
    org$pandalanguage$pandac$IRNode* $tmp4219 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4219->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4219->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4221 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4219, ((panda$core$Int64) { 1026 }), p_a->position, $tmp4221, ((panda$core$Object*) value4213), ((panda$collections$ListView*) fieldChildren4216));
    test4205 = $tmp4219;
    panda$collections$Array* $tmp4223 = (panda$collections$Array*) malloc(40);
    $tmp4223->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4223->refCount.value = 1;
    panda$collections$Array$init($tmp4223);
    children4222 = $tmp4223;
    panda$collections$Array$add$panda$collections$Array$T(children4222, ((panda$core$Object*) test4205));
    panda$core$Int64 $tmp4225 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4225, ((panda$core$Int64) { 2 }));
    if ($tmp4226.value) {
    {
        panda$core$Object* $tmp4228 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4229 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4228));
        msg4227 = $tmp4229;
        if (((panda$core$Bit) { msg4227 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4230 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4231 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg4227, $tmp4230);
        msg4227 = $tmp4231;
        if (((panda$core$Bit) { msg4227 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4222, ((panda$core$Object*) msg4227));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4232 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4232->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4232->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4232, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children4222));
    return $tmp4232;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind4247;
    org$pandalanguage$pandac$Variable$Kind varKind4248;
    org$pandalanguage$pandac$Variable$Kind $tmp4249;
    org$pandalanguage$pandac$Variable$Kind $tmp4250;
    org$pandalanguage$pandac$Variable$Kind $tmp4251;
    org$pandalanguage$pandac$Variable$Kind $tmp4252;
    panda$collections$Array* decls4253;
    panda$collections$Iterator* astDecl$Iter4256;
    org$pandalanguage$pandac$ASTNode* astDecl4268;
    org$pandalanguage$pandac$IRNode* decl4273;
    panda$core$Bit $tmp4237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp4236 = $tmp4237.value;
    if ($tmp4236) goto $l4238;
    panda$core$Bit $tmp4239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp4236 = $tmp4239.value;
    $l4238:;
    panda$core$Bit $tmp4240 = { $tmp4236 };
    bool $tmp4235 = $tmp4240.value;
    if ($tmp4235) goto $l4241;
    panda$core$Bit $tmp4242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp4235 = $tmp4242.value;
    $l4241:;
    panda$core$Bit $tmp4243 = { $tmp4235 };
    bool $tmp4234 = $tmp4243.value;
    if ($tmp4234) goto $l4244;
    panda$core$Bit $tmp4245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp4234 = $tmp4245.value;
    $l4244:;
    panda$core$Bit $tmp4246 = { $tmp4234 };
    PANDA_ASSERT($tmp4246.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind4247 = ((panda$core$Int64) { 1017 });
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4249, ((panda$core$Int64) { 0 }));
            varKind4248 = $tmp4249;
        }
        break;
        case 131:
        {
            nodeKind4247 = ((panda$core$Int64) { 1018 });
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4250, ((panda$core$Int64) { 1 }));
            varKind4248 = $tmp4250;
        }
        break;
        case 132:
        {
            nodeKind4247 = ((panda$core$Int64) { 1019 });
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4251, ((panda$core$Int64) { 2 }));
            varKind4248 = $tmp4251;
        }
        break;
        case 133:
        {
            nodeKind4247 = ((panda$core$Int64) { 1020 });
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4252, ((panda$core$Int64) { 3 }));
            varKind4248 = $tmp4252;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp4254 = (panda$collections$Array*) malloc(40);
    $tmp4254->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4254->refCount.value = 1;
    panda$collections$Array$init($tmp4254);
    decls4253 = $tmp4254;
    {
        ITable* $tmp4257 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp4257->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4257 = $tmp4257->next;
        }
        $fn4259 $tmp4258 = $tmp4257->methods[0];
        panda$collections$Iterator* $tmp4260 = $tmp4258(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter4256 = $tmp4260;
        $l4261:;
        ITable* $tmp4263 = astDecl$Iter4256->$class->itable;
        while ($tmp4263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4263 = $tmp4263->next;
        }
        $fn4265 $tmp4264 = $tmp4263->methods[0];
        panda$core$Bit $tmp4266 = $tmp4264(astDecl$Iter4256);
        panda$core$Bit $tmp4267 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4266);
        if (!$tmp4267.value) goto $l4262;
        {
            ITable* $tmp4269 = astDecl$Iter4256->$class->itable;
            while ($tmp4269->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4269 = $tmp4269->next;
            }
            $fn4271 $tmp4270 = $tmp4269->methods[1];
            panda$core$Object* $tmp4272 = $tmp4270(astDecl$Iter4256);
            astDecl4268 = ((org$pandalanguage$pandac$ASTNode*) $tmp4272);
            org$pandalanguage$pandac$IRNode* $tmp4274 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl4268, varKind4248);
            decl4273 = $tmp4274;
            if (((panda$core$Bit) { decl4273 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls4253, ((panda$core$Object*) decl4273));
        }
        goto $l4261;
        $l4262:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4275 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4275->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4275->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4275, nodeKind4247, p_v->position, ((panda$collections$ListView*) decls4253));
    return $tmp4275;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4277;
    panda$collections$Array* callChildren4280;
    org$pandalanguage$pandac$IRNode* testValue4283;
    org$pandalanguage$pandac$IRNode* $tmp4278 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4278->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4278->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4278, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target4277 = $tmp4278;
    panda$collections$Array* $tmp4281 = (panda$collections$Array*) malloc(40);
    $tmp4281->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4281->refCount.value = 1;
    panda$collections$Array$init($tmp4281);
    callChildren4280 = $tmp4281;
    org$pandalanguage$pandac$IRNode* $tmp4284 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue4283 = $tmp4284;
    if (((panda$core$Bit) { testValue4283 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(callChildren4280, ((panda$core$Object*) testValue4283));
    org$pandalanguage$pandac$IRNode* $tmp4286 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4277, &$s4285, ((panda$collections$ListView*) callChildren4280));
    return $tmp4286;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4295;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4299;
    org$pandalanguage$pandac$IRNode* nextTest4315;
    panda$collections$Array* callChildren4319;
    panda$collections$Array* statements4332;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4335;
    org$pandalanguage$pandac$IRNode* statement4350;
    panda$collections$Array* children4360;
    panda$core$Bit $tmp4287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4287.value);
    panda$core$Int64 $tmp4288 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4289 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4288, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4289.value);
    panda$core$Object* $tmp4290 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4290)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4291.value);
    panda$core$Object* $tmp4292 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4293 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4292)->children);
    panda$core$Bit $tmp4294 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4293, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4294.value);
    panda$core$Object* $tmp4296 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4297 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4296)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4298 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4297));
    test4295 = $tmp4298;
    if (((panda$core$Bit) { test4295 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4300 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4301 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4300)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4299, ((panda$core$Int64) { 1 }), $tmp4301, ((panda$core$Bit) { false }));
    int64_t $tmp4303 = $tmp4299.min.value;
    panda$core$Int64 i4302 = { $tmp4303 };
    int64_t $tmp4305 = $tmp4299.max.value;
    bool $tmp4306 = $tmp4299.inclusive.value;
    if ($tmp4306) goto $l4313; else goto $l4314;
    $l4313:;
    if ($tmp4303 <= $tmp4305) goto $l4307; else goto $l4309;
    $l4314:;
    if ($tmp4303 < $tmp4305) goto $l4307; else goto $l4309;
    $l4307:;
    {
        panda$core$Object* $tmp4316 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4317 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4316)->children, i4302);
        org$pandalanguage$pandac$IRNode* $tmp4318 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4317));
        nextTest4315 = $tmp4318;
        if (((panda$core$Bit) { nextTest4315 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4320 = (panda$collections$Array*) malloc(40);
        $tmp4320->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4320->refCount.value = 1;
        panda$collections$Array$init($tmp4320);
        callChildren4319 = $tmp4320;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4319, ((panda$core$Object*) nextTest4315));
        org$pandalanguage$pandac$IRNode* $tmp4323 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4295, &$s4322, ((panda$collections$ListView*) callChildren4319));
        test4295 = $tmp4323;
        if (((panda$core$Bit) { test4295 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4310:;
    int64_t $tmp4325 = $tmp4305 - i4302.value;
    if ($tmp4306) goto $l4326; else goto $l4327;
    $l4326:;
    if ($tmp4325 >= 1) goto $l4324; else goto $l4309;
    $l4327:;
    if ($tmp4325 > 1) goto $l4324; else goto $l4309;
    $l4324:;
    i4302.value += 1;
    goto $l4307;
    $l4309:;
    org$pandalanguage$pandac$SymbolTable* $tmp4330 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4330->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4330->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4330, self->symbolTable);
    self->symbolTable = $tmp4330;
    panda$collections$Array* $tmp4333 = (panda$collections$Array*) malloc(40);
    $tmp4333->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4333->refCount.value = 1;
    panda$collections$Array$init($tmp4333);
    statements4332 = $tmp4333;
    panda$core$Int64 $tmp4336 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4335, ((panda$core$Int64) { 1 }), $tmp4336, ((panda$core$Bit) { false }));
    int64_t $tmp4338 = $tmp4335.min.value;
    panda$core$Int64 i4337 = { $tmp4338 };
    int64_t $tmp4340 = $tmp4335.max.value;
    bool $tmp4341 = $tmp4335.inclusive.value;
    if ($tmp4341) goto $l4348; else goto $l4349;
    $l4348:;
    if ($tmp4338 <= $tmp4340) goto $l4342; else goto $l4344;
    $l4349:;
    if ($tmp4338 < $tmp4340) goto $l4342; else goto $l4344;
    $l4342:;
    {
        panda$core$Object* $tmp4351 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4337);
        org$pandalanguage$pandac$IRNode* $tmp4352 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4351));
        statement4350 = $tmp4352;
        if (((panda$core$Bit) { statement4350 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4332, ((panda$core$Object*) statement4350));
    }
    $l4345:;
    int64_t $tmp4354 = $tmp4340 - i4337.value;
    if ($tmp4341) goto $l4355; else goto $l4356;
    $l4355:;
    if ($tmp4354 >= 1) goto $l4353; else goto $l4344;
    $l4356:;
    if ($tmp4354 > 1) goto $l4353; else goto $l4344;
    $l4353:;
    i4337.value += 1;
    goto $l4342;
    $l4344:;
    panda$core$Object* $tmp4359 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4359);
    panda$collections$Array* $tmp4361 = (panda$collections$Array*) malloc(40);
    $tmp4361->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4361->refCount.value = 1;
    panda$collections$Array$init($tmp4361);
    children4360 = $tmp4361;
    panda$collections$Array$add$panda$collections$Array$T(children4360, ((panda$core$Object*) test4295));
    org$pandalanguage$pandac$IRNode* $tmp4363 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4363->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4363->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4363, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4332));
    panda$collections$Array$add$panda$collections$Array$T(children4360, ((panda$core$Object*) $tmp4363));
    org$pandalanguage$pandac$IRNode* $tmp4365 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4365->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4365->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4365, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4360));
    return $tmp4365;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4367;
    org$pandalanguage$pandac$Variable* valueVar4370;
    org$pandalanguage$pandac$Variable$Kind $tmp4373;
    panda$collections$Array* declChildren4381;
    panda$collections$Array* varChildren4386;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4393;
    org$pandalanguage$pandac$ASTNode* c4408;
    org$pandalanguage$pandac$IRNode* w4410;
    panda$collections$Array* statements4412;
    panda$collections$Iterator* astStatement$Iter4415;
    org$pandalanguage$pandac$ASTNode* astStatement4427;
    org$pandalanguage$pandac$IRNode* stmt4432;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4442;
    panda$collections$Array* newChildren4470;
    panda$collections$Array* $tmp4368 = (panda$collections$Array*) malloc(40);
    $tmp4368->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4368->refCount.value = 1;
    panda$collections$Array$init($tmp4368);
    children4367 = $tmp4368;
    org$pandalanguage$pandac$Variable* $tmp4371 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4371->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4371->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4373, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4375 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4374, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp4377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4375, &$s4376);
    panda$core$String* $tmp4378 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4377, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp4380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4378, &$s4379);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4371, p_m->position, $tmp4373, $tmp4380, p_value->type);
    valueVar4370 = $tmp4371;
    panda$collections$Array* $tmp4382 = (panda$collections$Array*) malloc(40);
    $tmp4382->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4382->refCount.value = 1;
    panda$collections$Array$init($tmp4382);
    declChildren4381 = $tmp4382;
    org$pandalanguage$pandac$IRNode* $tmp4384 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4384->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4384->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4384, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4370->type, valueVar4370);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4381, ((panda$core$Object*) $tmp4384));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4381, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4387 = (panda$collections$Array*) malloc(40);
    $tmp4387->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4387->refCount.value = 1;
    panda$collections$Array$init($tmp4387);
    varChildren4386 = $tmp4387;
    org$pandalanguage$pandac$IRNode* $tmp4389 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4389->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4389->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4389, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4370)->position, ((panda$collections$ListView*) declChildren4381));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4386, ((panda$core$Object*) $tmp4389));
    org$pandalanguage$pandac$IRNode* $tmp4391 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4391->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4391->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4391, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4370)->position, ((panda$collections$ListView*) varChildren4386));
    panda$collections$Array$add$panda$collections$Array$T(children4367, ((panda$core$Object*) $tmp4391));
    panda$core$Int64 $tmp4394 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4393, ((panda$core$Int64) { 1 }), $tmp4394, ((panda$core$Bit) { false }));
    int64_t $tmp4396 = $tmp4393.min.value;
    panda$core$Int64 i4395 = { $tmp4396 };
    int64_t $tmp4398 = $tmp4393.max.value;
    bool $tmp4399 = $tmp4393.inclusive.value;
    if ($tmp4399) goto $l4406; else goto $l4407;
    $l4406:;
    if ($tmp4396 <= $tmp4398) goto $l4400; else goto $l4402;
    $l4407:;
    if ($tmp4396 < $tmp4398) goto $l4400; else goto $l4402;
    $l4400:;
    {
        panda$core$Object* $tmp4409 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4395);
        c4408 = ((org$pandalanguage$pandac$ASTNode*) $tmp4409);
        switch (c4408->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4411 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4370, c4408);
                w4410 = $tmp4411;
                if (((panda$core$Bit) { w4410 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4367, ((panda$core$Object*) w4410));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4413 = (panda$collections$Array*) malloc(40);
                $tmp4413->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4413->refCount.value = 1;
                panda$collections$Array$init($tmp4413);
                statements4412 = $tmp4413;
                {
                    ITable* $tmp4416 = ((panda$collections$Iterable*) c4408->children)->$class->itable;
                    while ($tmp4416->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4416 = $tmp4416->next;
                    }
                    $fn4418 $tmp4417 = $tmp4416->methods[0];
                    panda$collections$Iterator* $tmp4419 = $tmp4417(((panda$collections$Iterable*) c4408->children));
                    astStatement$Iter4415 = $tmp4419;
                    $l4420:;
                    ITable* $tmp4422 = astStatement$Iter4415->$class->itable;
                    while ($tmp4422->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4422 = $tmp4422->next;
                    }
                    $fn4424 $tmp4423 = $tmp4422->methods[0];
                    panda$core$Bit $tmp4425 = $tmp4423(astStatement$Iter4415);
                    panda$core$Bit $tmp4426 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4425);
                    if (!$tmp4426.value) goto $l4421;
                    {
                        ITable* $tmp4428 = astStatement$Iter4415->$class->itable;
                        while ($tmp4428->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4428 = $tmp4428->next;
                        }
                        $fn4430 $tmp4429 = $tmp4428->methods[1];
                        panda$core$Object* $tmp4431 = $tmp4429(astStatement$Iter4415);
                        astStatement4427 = ((org$pandalanguage$pandac$ASTNode*) $tmp4431);
                        org$pandalanguage$pandac$IRNode* $tmp4433 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4427);
                        stmt4432 = $tmp4433;
                        if (((panda$core$Bit) { stmt4432 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4412, ((panda$core$Object*) stmt4432));
                    }
                    goto $l4420;
                    $l4421:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4434 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4434->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4434->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4434, ((panda$core$Int64) { 1000 }), c4408->position, ((panda$collections$ListView*) statements4412));
                panda$collections$Array$add$panda$collections$Array$T(children4367, ((panda$core$Object*) $tmp4434));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4403:;
    int64_t $tmp4437 = $tmp4398 - i4395.value;
    if ($tmp4399) goto $l4438; else goto $l4439;
    $l4438:;
    if ($tmp4437 >= 1) goto $l4436; else goto $l4402;
    $l4439:;
    if ($tmp4437 > 1) goto $l4436; else goto $l4402;
    $l4436:;
    i4395.value += 1;
    goto $l4400;
    $l4402:;
    panda$core$Int64 $tmp4443 = panda$collections$Array$get_count$R$panda$core$Int64(children4367);
    panda$core$Int64 $tmp4444 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4443, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4442, $tmp4444, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4446 = $tmp4442.start.value;
    panda$core$Int64 i4445 = { $tmp4446 };
    int64_t $tmp4448 = $tmp4442.end.value;
    int64_t $tmp4449 = $tmp4442.step.value;
    bool $tmp4450 = $tmp4442.inclusive.value;
    bool $tmp4457 = $tmp4449 > 0;
    if ($tmp4457) goto $l4455; else goto $l4456;
    $l4455:;
    if ($tmp4450) goto $l4458; else goto $l4459;
    $l4458:;
    if ($tmp4446 <= $tmp4448) goto $l4451; else goto $l4453;
    $l4459:;
    if ($tmp4446 < $tmp4448) goto $l4451; else goto $l4453;
    $l4456:;
    if ($tmp4450) goto $l4460; else goto $l4461;
    $l4460:;
    if ($tmp4446 >= $tmp4448) goto $l4451; else goto $l4453;
    $l4461:;
    if ($tmp4446 > $tmp4448) goto $l4451; else goto $l4453;
    $l4451:;
    {
        panda$core$Int64 $tmp4463 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4445, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4464 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4367, $tmp4463);
        panda$core$Bit $tmp4465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4464)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4465.value);
        panda$core$Int64 $tmp4466 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4445, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4467 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4367, $tmp4466);
        panda$core$Int64 $tmp4468 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4467)->children);
        panda$core$Bit $tmp4469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4468, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4469.value);
        panda$collections$Array* $tmp4471 = (panda$collections$Array*) malloc(40);
        $tmp4471->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4471->refCount.value = 1;
        panda$core$Int64 $tmp4473 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4445, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4474 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4367, $tmp4473);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4471, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4474)->children));
        newChildren4470 = $tmp4471;
        panda$core$Object* $tmp4475 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4367, i4445);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4470, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4475)));
        panda$core$Int64 $tmp4476 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4445, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4477 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4477->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4477->refCount.value = 1;
        panda$core$Int64 $tmp4479 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4445, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4480 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4367, $tmp4479);
        panda$core$Int64 $tmp4481 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4445, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4367, $tmp4481);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4477, ((org$pandalanguage$pandac$IRNode*) $tmp4480)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4482)->position, ((panda$collections$ListView*) newChildren4470));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4367, $tmp4476, ((panda$core$Object*) $tmp4477));
        panda$core$Int64 $tmp4483 = panda$collections$Array$get_count$R$panda$core$Int64(children4367);
        panda$core$Int64 $tmp4484 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4483, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4367, $tmp4484);
    }
    $l4454:;
    if ($tmp4457) goto $l4486; else goto $l4487;
    $l4486:;
    int64_t $tmp4488 = $tmp4448 - i4445.value;
    if ($tmp4450) goto $l4489; else goto $l4490;
    $l4489:;
    if ($tmp4488 >= $tmp4449) goto $l4485; else goto $l4453;
    $l4490:;
    if ($tmp4488 > $tmp4449) goto $l4485; else goto $l4453;
    $l4487:;
    int64_t $tmp4492 = i4445.value - $tmp4448;
    if ($tmp4450) goto $l4493; else goto $l4494;
    $l4493:;
    if ($tmp4492 >= -$tmp4449) goto $l4485; else goto $l4453;
    $l4494:;
    if ($tmp4492 > -$tmp4449) goto $l4485; else goto $l4453;
    $l4485:;
    i4445.value += $tmp4449;
    goto $l4451;
    $l4453:;
    org$pandalanguage$pandac$IRNode* $tmp4496 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4496->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4496->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4496, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4367));
    return $tmp4496;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4506;
    panda$collections$Iterator* expr$Iter4509;
    org$pandalanguage$pandac$ASTNode* expr4522;
    org$pandalanguage$pandac$IRNode* compiled4527;
    panda$collections$Array* statements4532;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4535;
    org$pandalanguage$pandac$IRNode* statement4550;
    panda$core$Bit $tmp4498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4498.value);
    panda$core$Int64 $tmp4499 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4500 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4499, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4500.value);
    panda$core$Object* $tmp4501 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4501)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4502.value);
    panda$core$Object* $tmp4503 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4504 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4503)->children);
    panda$core$Bit $tmp4505 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4504, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4505.value);
    panda$collections$Array* $tmp4507 = (panda$collections$Array*) malloc(40);
    $tmp4507->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4507->refCount.value = 1;
    panda$collections$Array$init($tmp4507);
    children4506 = $tmp4507;
    {
        panda$core$Object* $tmp4510 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4511 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4510)->children)->$class->itable;
        while ($tmp4511->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4511 = $tmp4511->next;
        }
        $fn4513 $tmp4512 = $tmp4511->methods[0];
        panda$collections$Iterator* $tmp4514 = $tmp4512(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4510)->children));
        expr$Iter4509 = $tmp4514;
        $l4515:;
        ITable* $tmp4517 = expr$Iter4509->$class->itable;
        while ($tmp4517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4517 = $tmp4517->next;
        }
        $fn4519 $tmp4518 = $tmp4517->methods[0];
        panda$core$Bit $tmp4520 = $tmp4518(expr$Iter4509);
        panda$core$Bit $tmp4521 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4520);
        if (!$tmp4521.value) goto $l4516;
        {
            ITable* $tmp4523 = expr$Iter4509->$class->itable;
            while ($tmp4523->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4523 = $tmp4523->next;
            }
            $fn4525 $tmp4524 = $tmp4523->methods[1];
            panda$core$Object* $tmp4526 = $tmp4524(expr$Iter4509);
            expr4522 = ((org$pandalanguage$pandac$ASTNode*) $tmp4526);
            org$pandalanguage$pandac$IRNode* $tmp4528 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4522);
            org$pandalanguage$pandac$IRNode* $tmp4529 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4528, p_type);
            compiled4527 = $tmp4529;
            if (((panda$core$Bit) { compiled4527 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4506, ((panda$core$Object*) compiled4527));
        }
        goto $l4515;
        $l4516:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4530 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4530->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4530->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4530, self->symbolTable);
    self->symbolTable = $tmp4530;
    panda$collections$Array* $tmp4533 = (panda$collections$Array*) malloc(40);
    $tmp4533->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4533->refCount.value = 1;
    panda$collections$Array$init($tmp4533);
    statements4532 = $tmp4533;
    panda$core$Int64 $tmp4536 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4535, ((panda$core$Int64) { 1 }), $tmp4536, ((panda$core$Bit) { false }));
    int64_t $tmp4538 = $tmp4535.min.value;
    panda$core$Int64 i4537 = { $tmp4538 };
    int64_t $tmp4540 = $tmp4535.max.value;
    bool $tmp4541 = $tmp4535.inclusive.value;
    if ($tmp4541) goto $l4548; else goto $l4549;
    $l4548:;
    if ($tmp4538 <= $tmp4540) goto $l4542; else goto $l4544;
    $l4549:;
    if ($tmp4538 < $tmp4540) goto $l4542; else goto $l4544;
    $l4542:;
    {
        panda$core$Object* $tmp4551 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4537);
        org$pandalanguage$pandac$IRNode* $tmp4552 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4551));
        statement4550 = $tmp4552;
        if (((panda$core$Bit) { statement4550 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4532, ((panda$core$Object*) statement4550));
    }
    $l4545:;
    int64_t $tmp4554 = $tmp4540 - i4537.value;
    if ($tmp4541) goto $l4555; else goto $l4556;
    $l4555:;
    if ($tmp4554 >= 1) goto $l4553; else goto $l4544;
    $l4556:;
    if ($tmp4554 > 1) goto $l4553; else goto $l4544;
    $l4553:;
    i4537.value += 1;
    goto $l4542;
    $l4544:;
    panda$core$Object* $tmp4559 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4559);
    org$pandalanguage$pandac$IRNode* $tmp4560 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4560->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4560->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4560, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4532));
    panda$collections$Array$add$panda$collections$Array$T(children4506, ((panda$core$Object*) $tmp4560));
    org$pandalanguage$pandac$IRNode* $tmp4562 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4562->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4562->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4562, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4506));
    return $tmp4562;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4565;
    panda$collections$Array* statements4570;
    panda$collections$Iterator* s$Iter4573;
    org$pandalanguage$pandac$ASTNode* s4585;
    org$pandalanguage$pandac$IRNode* statement4590;
    panda$core$Bit $tmp4564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4564.value);
    panda$collections$Array* $tmp4566 = (panda$collections$Array*) malloc(40);
    $tmp4566->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4566->refCount.value = 1;
    panda$collections$Array$init($tmp4566);
    children4565 = $tmp4566;
    org$pandalanguage$pandac$SymbolTable* $tmp4568 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4568->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4568->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4568, self->symbolTable);
    self->symbolTable = $tmp4568;
    panda$collections$Array* $tmp4571 = (panda$collections$Array*) malloc(40);
    $tmp4571->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4571->refCount.value = 1;
    panda$collections$Array$init($tmp4571);
    statements4570 = $tmp4571;
    {
        ITable* $tmp4574 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4574->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4574 = $tmp4574->next;
        }
        $fn4576 $tmp4575 = $tmp4574->methods[0];
        panda$collections$Iterator* $tmp4577 = $tmp4575(((panda$collections$Iterable*) p_o->children));
        s$Iter4573 = $tmp4577;
        $l4578:;
        ITable* $tmp4580 = s$Iter4573->$class->itable;
        while ($tmp4580->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4580 = $tmp4580->next;
        }
        $fn4582 $tmp4581 = $tmp4580->methods[0];
        panda$core$Bit $tmp4583 = $tmp4581(s$Iter4573);
        panda$core$Bit $tmp4584 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4583);
        if (!$tmp4584.value) goto $l4579;
        {
            ITable* $tmp4586 = s$Iter4573->$class->itable;
            while ($tmp4586->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4586 = $tmp4586->next;
            }
            $fn4588 $tmp4587 = $tmp4586->methods[1];
            panda$core$Object* $tmp4589 = $tmp4587(s$Iter4573);
            s4585 = ((org$pandalanguage$pandac$ASTNode*) $tmp4589);
            org$pandalanguage$pandac$IRNode* $tmp4591 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4585);
            statement4590 = $tmp4591;
            if (((panda$core$Bit) { statement4590 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4570, ((panda$core$Object*) statement4590));
        }
        goto $l4578;
        $l4579:;
    }
    panda$core$Object* $tmp4592 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4592);
    org$pandalanguage$pandac$IRNode* $tmp4593 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4593->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4593->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4593, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4570));
    panda$collections$Array$add$panda$collections$Array$T(children4565, ((panda$core$Object*) $tmp4593));
    org$pandalanguage$pandac$IRNode* $tmp4595 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4595->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4595->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4595, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4565));
    return $tmp4595;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4604;
    org$pandalanguage$pandac$Variable* v4613;
    org$pandalanguage$pandac$Variable$Kind $tmp4615;
    org$pandalanguage$pandac$Variable$Kind $tmp4620;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4598 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4597 = $tmp4598.value;
            if (!$tmp4597) goto $l4599;
            panda$core$Object* $tmp4600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4601 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4600)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4602 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4601));
            $tmp4597 = $tmp4602.value;
            $l4599:;
            panda$core$Bit $tmp4603 = { $tmp4597 };
            return $tmp4603;
        }
        break;
        case 1026:
        {
            f4604 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4604->resolved.value);
            panda$core$Bit $tmp4607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4604->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4606 = $tmp4607.value;
            if (!$tmp4606) goto $l4608;
            $tmp4606 = ((panda$core$Bit) { f4604->value != NULL }).value;
            $l4608:;
            panda$core$Bit $tmp4609 = { $tmp4606 };
            bool $tmp4605 = $tmp4609.value;
            if (!$tmp4605) goto $l4610;
            panda$core$Bit $tmp4611 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4604->value);
            $tmp4605 = $tmp4611.value;
            $l4610:;
            panda$core$Bit $tmp4612 = { $tmp4605 };
            return $tmp4612;
        }
        break;
        case 1016:
        {
            v4613 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4615, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp4616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4613->varKind.$rawValue, $tmp4615.$rawValue);
            bool $tmp4614 = $tmp4616.value;
            if ($tmp4614) goto $l4617;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4620, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp4621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4613->varKind.$rawValue, $tmp4620.$rawValue);
            bool $tmp4619 = $tmp4621.value;
            if (!$tmp4619) goto $l4622;
            $tmp4619 = ((panda$core$Bit) { v4613->initialValue != NULL }).value;
            $l4622:;
            panda$core$Bit $tmp4623 = { $tmp4619 };
            bool $tmp4618 = $tmp4623.value;
            if (!$tmp4618) goto $l4624;
            panda$core$Bit $tmp4625 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4613->initialValue);
            $tmp4618 = $tmp4625.value;
            $l4624:;
            panda$core$Bit $tmp4626 = { $tmp4618 };
            $tmp4614 = $tmp4626.value;
            $l4617:;
            panda$core$Bit $tmp4627 = { $tmp4614 };
            return $tmp4627;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4632;
    org$pandalanguage$pandac$Variable* v4634;
    panda$core$Bit $tmp4628 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4628.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4629 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4630 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4629)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4631 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4630));
            return $tmp4631;
        }
        break;
        case 1026:
        {
            f4632 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4633 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4632->value);
            return $tmp4633;
        }
        break;
        case 1016:
        {
            v4634 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4635 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4634->initialValue);
            return $tmp4635;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4639;
    panda$collections$Array* children4646;
    panda$collections$Iterator* rawWhen$Iter4649;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4650;
    org$pandalanguage$pandac$ASTNode* rawWhen4663;
    org$pandalanguage$pandac$IRNode* o4669;
    org$pandalanguage$pandac$IRNode* w4671;
    panda$core$Bit $tmp4636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4636.value);
    panda$core$Int64 $tmp4637 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4638 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4637, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4638.value);
    panda$core$Object* $tmp4640 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4641 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4640));
    org$pandalanguage$pandac$IRNode* $tmp4642 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4641);
    value4639 = $tmp4642;
    if (((panda$core$Bit) { value4639 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4643 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4639->type);
    panda$core$Bit $tmp4644 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4643);
    if ($tmp4644.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4645 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4639);
        return $tmp4645;
    }
    }
    panda$collections$Array* $tmp4647 = (panda$collections$Array*) malloc(40);
    $tmp4647->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4647->refCount.value = 1;
    panda$collections$Array$init($tmp4647);
    children4646 = $tmp4647;
    panda$collections$Array$add$panda$collections$Array$T(children4646, ((panda$core$Object*) value4639));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4650, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4651 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4650);
        ITable* $tmp4652 = ((panda$collections$Iterable*) $tmp4651)->$class->itable;
        while ($tmp4652->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4652 = $tmp4652->next;
        }
        $fn4654 $tmp4653 = $tmp4652->methods[0];
        panda$collections$Iterator* $tmp4655 = $tmp4653(((panda$collections$Iterable*) $tmp4651));
        rawWhen$Iter4649 = $tmp4655;
        $l4656:;
        ITable* $tmp4658 = rawWhen$Iter4649->$class->itable;
        while ($tmp4658->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4658 = $tmp4658->next;
        }
        $fn4660 $tmp4659 = $tmp4658->methods[0];
        panda$core$Bit $tmp4661 = $tmp4659(rawWhen$Iter4649);
        panda$core$Bit $tmp4662 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4661);
        if (!$tmp4662.value) goto $l4657;
        {
            ITable* $tmp4664 = rawWhen$Iter4649->$class->itable;
            while ($tmp4664->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4664 = $tmp4664->next;
            }
            $fn4666 $tmp4665 = $tmp4664->methods[1];
            panda$core$Object* $tmp4667 = $tmp4665(rawWhen$Iter4649);
            rawWhen4663 = ((org$pandalanguage$pandac$ASTNode*) $tmp4667);
            panda$core$Bit $tmp4668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4663->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4668.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4670 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4663);
                o4669 = $tmp4670;
                if (((panda$core$Bit) { o4669 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4646, ((panda$core$Object*) o4669));
                goto $l4656;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4672 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4639->type, rawWhen4663);
            w4671 = $tmp4672;
            if (((panda$core$Bit) { w4671 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4673 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4671->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4674 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4673));
            panda$core$Bit $tmp4675 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4674);
            if ($tmp4675.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4676 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4639);
                return $tmp4676;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4646, ((panda$core$Object*) w4671));
        }
        goto $l4656;
        $l4657:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4677 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4677->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4677->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4677, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4646));
    return $tmp4677;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4692;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4679 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4679;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4680 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4681 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4680);
            return $tmp4681;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4682 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4682;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4683 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4683;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4684 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4684;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4685 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4685;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4686 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4686;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4687 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4687;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4688 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4688;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4689 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4689;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4690 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4690;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4691 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4691;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4693 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4694 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4693);
            result4692 = $tmp4694;
            if (((panda$core$Bit) { result4692 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4695 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4692);
                result4692 = $tmp4695;
            }
            }
            return result4692;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4696 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4696;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4697;
    org$pandalanguage$pandac$SymbolTable* symbols4699;
    panda$collections$Iterator* p$Iter4702;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4714;
    org$pandalanguage$pandac$Variable$Kind $tmp4721;
    org$pandalanguage$pandac$Variable$Storage $tmp4722;
    panda$collections$Array* fieldInitializers4723;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4724;
    panda$collections$Iterator* f$Iter4728;
    org$pandalanguage$pandac$FieldDecl* f4741;
    panda$collections$Array* children4751;
    org$pandalanguage$pandac$IRNode* fieldRef4758;
    org$pandalanguage$pandac$IRNode* compiled4763;
    panda$collections$Array* children4765;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4697 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4698 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4698;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4700 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4700->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4700->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4700, self->symbolTable);
    symbols4699 = $tmp4700;
    {
        ITable* $tmp4703 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4703->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4703 = $tmp4703->next;
        }
        $fn4705 $tmp4704 = $tmp4703->methods[0];
        panda$collections$Iterator* $tmp4706 = $tmp4704(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4702 = $tmp4706;
        $l4707:;
        ITable* $tmp4709 = p$Iter4702->$class->itable;
        while ($tmp4709->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4709 = $tmp4709->next;
        }
        $fn4711 $tmp4710 = $tmp4709->methods[0];
        panda$core$Bit $tmp4712 = $tmp4710(p$Iter4702);
        panda$core$Bit $tmp4713 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4712);
        if (!$tmp4713.value) goto $l4708;
        {
            ITable* $tmp4715 = p$Iter4702->$class->itable;
            while ($tmp4715->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4715 = $tmp4715->next;
            }
            $fn4717 $tmp4716 = $tmp4715->methods[1];
            panda$core$Object* $tmp4718 = $tmp4716(p$Iter4702);
            p4714 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4718);
            org$pandalanguage$pandac$Variable* $tmp4719 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4719->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4719->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp4721, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(&$tmp4722, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage($tmp4719, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4721, p4714->name, p4714->type, $tmp4722);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4699, ((org$pandalanguage$pandac$Symbol*) $tmp4719));
        }
        goto $l4707;
        $l4708:;
    }
    self->symbolTable = symbols4699;
    fieldInitializers4723 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4724, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp4725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind.$rawValue, $tmp4724.$rawValue);
    if ($tmp4725.value) {
    {
        panda$collections$Array* $tmp4726 = (panda$collections$Array*) malloc(40);
        $tmp4726->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4726->refCount.value = 1;
        panda$collections$Array$init($tmp4726);
        fieldInitializers4723 = $tmp4726;
        {
            panda$core$Object* $tmp4729 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4730 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4729)->fields)->$class->itable;
            while ($tmp4730->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4730 = $tmp4730->next;
            }
            $fn4732 $tmp4731 = $tmp4730->methods[0];
            panda$collections$Iterator* $tmp4733 = $tmp4731(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4729)->fields));
            f$Iter4728 = $tmp4733;
            $l4734:;
            ITable* $tmp4736 = f$Iter4728->$class->itable;
            while ($tmp4736->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4736 = $tmp4736->next;
            }
            $fn4738 $tmp4737 = $tmp4736->methods[0];
            panda$core$Bit $tmp4739 = $tmp4737(f$Iter4728);
            panda$core$Bit $tmp4740 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4739);
            if (!$tmp4740.value) goto $l4735;
            {
                ITable* $tmp4742 = f$Iter4728->$class->itable;
                while ($tmp4742->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4742 = $tmp4742->next;
                }
                $fn4744 $tmp4743 = $tmp4742->methods[1];
                panda$core$Object* $tmp4745 = $tmp4743(f$Iter4728);
                f4741 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4745);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f4741);
                panda$core$Bit $tmp4747 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f4741->annotations);
                panda$core$Bit $tmp4748 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4747);
                bool $tmp4746 = $tmp4748.value;
                if (!$tmp4746) goto $l4749;
                $tmp4746 = ((panda$core$Bit) { f4741->value != NULL }).value;
                $l4749:;
                panda$core$Bit $tmp4750 = { $tmp4746 };
                if ($tmp4750.value) {
                {
                    panda$collections$Array* $tmp4752 = (panda$collections$Array*) malloc(40);
                    $tmp4752->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4752->refCount.value = 1;
                    panda$collections$Array$init($tmp4752);
                    children4751 = $tmp4752;
                    org$pandalanguage$pandac$IRNode* $tmp4754 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4754->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4754->refCount.value = 1;
                    panda$core$Object* $tmp4756 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp4757 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp4756));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp4754, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4757);
                    panda$collections$Array$add$panda$collections$Array$T(children4751, ((panda$core$Object*) $tmp4754));
                    org$pandalanguage$pandac$IRNode* $tmp4759 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4759->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4759->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4759, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f4741->type, ((panda$core$Object*) f4741), ((panda$collections$ListView*) children4751));
                    fieldRef4758 = $tmp4759;
                    panda$collections$Array$clear(children4751);
                    panda$collections$Array$add$panda$collections$Array$T(children4751, ((panda$core$Object*) fieldRef4758));
                    panda$collections$Array$add$panda$collections$Array$T(children4751, ((panda$core$Object*) f4741->value));
                    org$pandalanguage$pandac$IRNode* $tmp4761 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4761->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4761->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4761, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f4741)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children4751));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4723, ((panda$core$Object*) $tmp4761));
                }
                }
            }
            goto $l4734;
            $l4735:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4764 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled4763 = $tmp4764;
    if (((panda$core$Bit) { compiled4763 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4723 != NULL }).value) {
        {
            panda$collections$Array* $tmp4766 = (panda$collections$Array*) malloc(40);
            $tmp4766->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4766->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4766, ((panda$collections$ListView*) fieldInitializers4723));
            children4765 = $tmp4766;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children4765, ((panda$collections$CollectionView*) compiled4763->children));
            org$pandalanguage$pandac$IRNode* $tmp4768 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4768->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4768->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4768, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children4765));
            compiled4763 = $tmp4768;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4699) }).value);
    self->symbolTable = old4697;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp4770 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp4770.value) {
    {
        p_m->compiledBody = compiled4763;
    }
    }
    return compiled4763;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled4771;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4772 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled4771 = $tmp4772;
        panda$core$Bit $tmp4774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, ((panda$core$Int64) { 0 }));
        bool $tmp4773 = $tmp4774.value;
        if (!$tmp4773) goto $l4775;
        $tmp4773 = ((panda$core$Bit) { compiled4771 != NULL }).value;
        $l4775:;
        panda$core$Bit $tmp4776 = { $tmp4773 };
        if ($tmp4776.value) {
        {
            ITable* $tmp4777 = self->codeGenerator->$class->itable;
            while ($tmp4777->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp4777 = $tmp4777->next;
            }
            $fn4779 $tmp4778 = $tmp4777->methods[3];
            $tmp4778(self->codeGenerator, p_m, compiled4771);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp4780 = self->codeGenerator->$class->itable;
        while ($tmp4780->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4780 = $tmp4780->next;
        }
        $fn4782 $tmp4781 = $tmp4780->methods[2];
        $tmp4781(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter4783;
    org$pandalanguage$pandac$ClassDecl* inner4795;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp4784 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp4784->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4784 = $tmp4784->next;
        }
        $fn4786 $tmp4785 = $tmp4784->methods[0];
        panda$collections$Iterator* $tmp4787 = $tmp4785(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter4783 = $tmp4787;
        $l4788:;
        ITable* $tmp4790 = inner$Iter4783->$class->itable;
        while ($tmp4790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4790 = $tmp4790->next;
        }
        $fn4792 $tmp4791 = $tmp4790->methods[0];
        panda$core$Bit $tmp4793 = $tmp4791(inner$Iter4783);
        panda$core$Bit $tmp4794 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4793);
        if (!$tmp4794.value) goto $l4789;
        {
            ITable* $tmp4796 = inner$Iter4783->$class->itable;
            while ($tmp4796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4796 = $tmp4796->next;
            }
            $fn4798 $tmp4797 = $tmp4796->methods[1];
            panda$core$Object* $tmp4799 = $tmp4797(inner$Iter4783);
            inner4795 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4799);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner4795);
        }
        goto $l4788;
        $l4789:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old4807;
    panda$collections$Iterator* m$Iter4812;
    org$pandalanguage$pandac$MethodDecl* m4824;
    org$pandalanguage$pandac$ClassDecl* next4834;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp4800 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp4800.value) {
    {
        ITable* $tmp4801 = self->codeGenerator->$class->itable;
        while ($tmp4801->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4801 = $tmp4801->next;
        }
        $fn4803 $tmp4802 = $tmp4801->methods[1];
        $tmp4802(self->codeGenerator, p_cl);
        ITable* $tmp4804 = self->codeGenerator->$class->itable;
        while ($tmp4804->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp4804 = $tmp4804->next;
        }
        $fn4806 $tmp4805 = $tmp4804->methods[4];
        $tmp4805(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old4807 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4808 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp4808;
    ITable* $tmp4809 = self->codeGenerator->$class->itable;
    while ($tmp4809->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4809 = $tmp4809->next;
    }
    $fn4811 $tmp4810 = $tmp4809->methods[1];
    $tmp4810(self->codeGenerator, p_cl);
    {
        ITable* $tmp4813 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp4813->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4813 = $tmp4813->next;
        }
        $fn4815 $tmp4814 = $tmp4813->methods[0];
        panda$collections$Iterator* $tmp4816 = $tmp4814(((panda$collections$Iterable*) p_cl->methods));
        m$Iter4812 = $tmp4816;
        $l4817:;
        ITable* $tmp4819 = m$Iter4812->$class->itable;
        while ($tmp4819->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4819 = $tmp4819->next;
        }
        $fn4821 $tmp4820 = $tmp4819->methods[0];
        panda$core$Bit $tmp4822 = $tmp4820(m$Iter4812);
        panda$core$Bit $tmp4823 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4822);
        if (!$tmp4823.value) goto $l4818;
        {
            ITable* $tmp4825 = m$Iter4812->$class->itable;
            while ($tmp4825->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4825 = $tmp4825->next;
            }
            $fn4827 $tmp4826 = $tmp4825->methods[1];
            panda$core$Object* $tmp4828 = $tmp4826(m$Iter4812);
            m4824 = ((org$pandalanguage$pandac$MethodDecl*) $tmp4828);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m4824);
        }
        goto $l4817;
        $l4818:;
    }
    ITable* $tmp4829 = self->codeGenerator->$class->itable;
    while ($tmp4829->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4829 = $tmp4829->next;
    }
    $fn4831 $tmp4830 = $tmp4829->methods[4];
    $tmp4830(self->codeGenerator, p_cl);
    self->symbolTable = old4807;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp4832 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4833 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4832, ((panda$core$Int64) { 0 }));
    if ($tmp4833.value) {
    {
        panda$core$Object* $tmp4835 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next4834 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4835);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next4834);
    }
    }
    panda$core$Int64 $tmp4836 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp4837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4836, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp4837.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result4838;
    org$pandalanguage$pandac$ASTNode* parsed4841;
    panda$collections$Iterator* cl$Iter4844;
    org$pandalanguage$pandac$ClassDecl* cl4856;
    panda$core$Object* $tmp4839 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result4838 = ((panda$collections$ListView*) $tmp4839);
    if (((panda$core$Bit) { result4838 == NULL }).value) {
    {
        panda$core$String* $tmp4840 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp4840);
        org$pandalanguage$pandac$ASTNode* $tmp4842 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed4841 = $tmp4842;
        if (((panda$core$Bit) { parsed4841 != NULL }).value) {
        {
            panda$collections$ListView* $tmp4843 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed4841);
            result4838 = $tmp4843;
            {
                ITable* $tmp4845 = ((panda$collections$Iterable*) result4838)->$class->itable;
                while ($tmp4845->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp4845 = $tmp4845->next;
                }
                $fn4847 $tmp4846 = $tmp4845->methods[0];
                panda$collections$Iterator* $tmp4848 = $tmp4846(((panda$collections$Iterable*) result4838));
                cl$Iter4844 = $tmp4848;
                $l4849:;
                ITable* $tmp4851 = cl$Iter4844->$class->itable;
                while ($tmp4851->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4851 = $tmp4851->next;
                }
                $fn4853 $tmp4852 = $tmp4851->methods[0];
                panda$core$Bit $tmp4854 = $tmp4852(cl$Iter4844);
                panda$core$Bit $tmp4855 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4854);
                if (!$tmp4855.value) goto $l4850;
                {
                    ITable* $tmp4857 = cl$Iter4844->$class->itable;
                    while ($tmp4857->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4857 = $tmp4857->next;
                    }
                    $fn4859 $tmp4858 = $tmp4857->methods[1];
                    panda$core$Object* $tmp4860 = $tmp4858(cl$Iter4844);
                    cl4856 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4860);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl4856)->name), ((panda$core$Object*) cl4856));
                }
                goto $l4849;
                $l4850:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp4861 = (panda$collections$Array*) malloc(40);
            $tmp4861->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp4861->refCount.value = 1;
            panda$collections$Array$init($tmp4861);
            result4838 = ((panda$collections$ListView*) $tmp4861);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result4838));
    }
    }
    return result4838;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes4863;
    panda$collections$Iterator* cl$Iter4865;
    org$pandalanguage$pandac$ClassDecl* cl4877;
    panda$collections$ListView* $tmp4864 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes4863 = $tmp4864;
    {
        ITable* $tmp4866 = ((panda$collections$Iterable*) classes4863)->$class->itable;
        while ($tmp4866->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4866 = $tmp4866->next;
        }
        $fn4868 $tmp4867 = $tmp4866->methods[0];
        panda$collections$Iterator* $tmp4869 = $tmp4867(((panda$collections$Iterable*) classes4863));
        cl$Iter4865 = $tmp4869;
        $l4870:;
        ITable* $tmp4872 = cl$Iter4865->$class->itable;
        while ($tmp4872->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4872 = $tmp4872->next;
        }
        $fn4874 $tmp4873 = $tmp4872->methods[0];
        panda$core$Bit $tmp4875 = $tmp4873(cl$Iter4865);
        panda$core$Bit $tmp4876 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4875);
        if (!$tmp4876.value) goto $l4871;
        {
            ITable* $tmp4878 = cl$Iter4865->$class->itable;
            while ($tmp4878->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4878 = $tmp4878->next;
            }
            $fn4880 $tmp4879 = $tmp4878->methods[1];
            panda$core$Object* $tmp4881 = $tmp4879(cl$Iter4865);
            cl4877 = ((org$pandalanguage$pandac$ClassDecl*) $tmp4881);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl4877);
        }
        goto $l4870;
        $l4871:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp4882 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp4882)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp4883 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp4883;
        panda$core$String* $tmp4884 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp4885 = panda$core$String$convert$R$panda$core$String($tmp4884);
        panda$core$String* $tmp4887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4885, &$s4886);
        panda$core$String* $tmp4888 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4887, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp4890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4888, &$s4889);
        panda$core$String* $tmp4891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4890, p_msg);
        panda$core$String* $tmp4893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4891, &$s4892);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp4893));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp4894 = self->codeGenerator->$class->itable;
    while ($tmp4894->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp4894 = $tmp4894->next;
    }
    $fn4896 $tmp4895 = $tmp4894->methods[5];
    $tmp4895(self->codeGenerator);
}

