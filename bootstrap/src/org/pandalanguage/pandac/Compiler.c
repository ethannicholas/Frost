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
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/Pair.h"
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
#include "panda/core/UInt32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char16.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

typedef void (*$fn23)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$Compiler*);
typedef panda$core$Object* (*$fn127)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn172)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn179)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn196)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Object* (*$fn225)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn239)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn249)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn257)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn264)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn362)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn368)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn374)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn381)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn387)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn393)(panda$collections$Iterator*);
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
typedef panda$collections$Iterator* (*$fn614)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn620)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn626)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn655)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn687)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn693)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn699)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn719)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn725)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn731)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn757)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn763)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn769)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn818)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn824)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn830)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn839)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn856)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn874)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn880)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn886)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn894)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn900)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn906)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn918)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn924)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn930)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn953)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn959)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn965)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1004)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1010)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1016)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1029)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1035)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1041)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1056)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1062)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1068)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1084)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1090)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1096)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1110)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1116)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1122)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1135)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1141)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1147)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1192)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1198)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1204)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1211)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1217)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1223)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1243)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1249)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1255)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1338)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1509)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1515)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1521)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1547)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1553)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1559)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1673)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1677)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1680)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1697)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1703)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1709)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1796)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1802)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1808)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1962)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2097)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2126)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2132)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2138)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2240)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2262)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2284)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2301)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2307)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2313)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2329)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2347)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2354)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2429)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2447)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2533)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2540)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2582)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2600)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2606)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2612)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2643)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2649)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2655)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2678)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2697)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2704)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2722)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2740)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2774)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2780)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2786)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2809)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2815)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2821)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3266)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3278)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3412)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3418)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3424)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3535)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3653)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3669)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3675)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3681)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3815)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3821)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3827)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4105)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4111)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4117)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4252)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4258)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4264)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4294)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4300)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4306)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4431)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4437)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn4509)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4739)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4745)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4751)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4834)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4840)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4846)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4897)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4903)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4909)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4973)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4979)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4985)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5024)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5030)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5036)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5052)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5058)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5064)(panda$collections$Iterator*);
typedef void (*$fn5100)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5103)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn5107)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5113)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5119)(panda$collections$Iterator*);
typedef void (*$fn5124)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5127)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5132)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5136)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5142)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5148)(panda$collections$Iterator*);
typedef void (*$fn5152)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5168)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5180)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5189)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5201)(panda$collections$Iterator*);
typedef void (*$fn5218)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x67\x65\x6e\x65\x72\x69\x63\x20", 9, 1451350792886950498, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6d\x65\x74\x65\x72", 9, 2317006540128003462, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x20\x27", 19, -7104957698969262010, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 9, 2306627197047234467, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x74\x79\x70\x65\x20\x27", 14, 1254433276954177894, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 2825576507357767077, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x65\x78\x74\x65\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 22, -8406128752343392811, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73\x20\x27", 12, 3706067405940886645, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6f\x66\x20\x63\x6c\x61\x73\x73\x20\x27", 12, -633030867692887714, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6f\x72\x65\x20\x61\x6e\x79\x20\x73\x75\x70\x65\x72\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 33, 4787050402069409712, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6d\x6f\x72\x65\x20\x74\x68\x61\x6e\x20\x6f\x6e\x65\x20\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73", 30, -759923653827872275, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x69\x73\x20\x6e\x6f\x74\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 27, -5223536864783252703, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73", 37, 7193225585860914176, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x2c\x20\x62\x75\x74\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68\x69\x6e\x67\x20", 38, -6085226934842474132, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x73\x74\x73\x20\x61\x6d\x6f\x6e\x67\x20\x69\x74\x73\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 33, -5331763662845728394, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6c\x64\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 36, 5735293162260763604, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6f\x72\x20\x61\x6d\x62\x69\x67\x75\x6f\x75\x73\x20\x6d\x61\x74\x63\x68\x20\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6c\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x63\x6f\x6e\x74\x61\x69\x6e\x20\x61\x20\x63\x6c\x61\x73\x73\x20\x6e\x61\x6d\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x66\x69\x6c\x65\x20\x6e\x61\x6d\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20\x61\x6e\x79\x20\x69\x6d\x70\x6f\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x30", 13, 2997537454666094288, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 15, -6693247693629641489, NULL };
static panda$core$String $s2358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x63\x6f\x6e\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x6e\x20\x6e\x6f\x6e\x2d\x63\x6c\x61\x73\x73\x20\x74\x79\x70\x65\x20\x27", 40, 2057026257004143426, NULL };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s2708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e", 25, 9019145596080302696, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s3321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s3330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s3469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x20\x27", 6, 2293399544522, NULL };
static panda$core$String $s3558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x63\x6c\x61\x73\x73", 16, 3306529650949529468, NULL };
static panda$core$String $s3565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x61\x6e\x67\x65\x20\x73\x74\x65\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6e\x75\x6c\x6c", 25, 4479279434458851015, NULL };
static panda$core$String $s3637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x72\x61\x6e\x67\x65\x3e", 18, -1293962867859660245, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x65\x6c\x66\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static panda$core$String $s3888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20\x74\x79\x70\x65\x73\x20", 27, 6843179484913102436, NULL };
static panda$core$String $s3890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 18, -4303734005461819726, NULL };
static panda$core$String $s3910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static panda$core$String $s3912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20\x27", 48, 6391877092008549907, NULL };
static panda$core$String $s3918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 46, 6859502832880265551, NULL };
static panda$core$String $s3968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s4008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s4015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s4038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static panda$core$String $s4043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s4055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s4141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6f\x72", 8, 22210198075044275, NULL };
static panda$core$String $s4149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s4151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s4275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x20", 7, 149654778879689, NULL };
static panda$core$String $s4277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s4317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s4319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s4342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s4356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s4376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s4501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s4506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s4512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s4516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 22, 417303976175476333, NULL };
static panda$core$String $s4640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s4693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6d\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s4700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s5211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s5214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    org$pandalanguage$pandac$Type* object206;
    panda$core$Range$LTpanda$core$Int64$GT $tmp208;
    org$pandalanguage$pandac$Type* bound222;
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
        panda$core$Int64$wrapper* $tmp186;
        $tmp186 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp186->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp186->refCount = 1;
        $tmp186->value = expectedCount169;
        panda$core$String* $tmp187 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp185, ((panda$core$Object*) $tmp186));
        panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp187, &$s188);
        panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(expectedCount169, ((panda$core$Int64) { 1 }));
        panda$core$Bit$wrapper* $tmp192;
        $tmp192 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp192->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp192->refCount = 1;
        $tmp192->value = $tmp191;
        ITable* $tmp194 = ((panda$core$Formattable*) $tmp192)->$class->itable;
        while ($tmp194->$class != (panda$core$Class*) &panda$core$Formattable$class) {
            $tmp194 = $tmp194->next;
        }
        $fn196 $tmp195 = $tmp194->methods[0];
        panda$core$String* $tmp197 = $tmp195(((panda$core$Formattable*) $tmp192), &$s193);
        panda$core$String* $tmp198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s190, $tmp197);
        panda$core$String* $tmp200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp198, &$s199);
        panda$core$Int64$wrapper* $tmp201;
        $tmp201 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp201->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp201->refCount = 1;
        $tmp201->value = foundCount176;
        panda$core$String* $tmp202 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp200, ((panda$core$Object*) $tmp201));
        panda$core$String* $tmp204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp202, &$s203);
        panda$core$String* $tmp205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, $tmp204);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp205);
        return ((panda$core$Bit) { false });
    }
    }
    org$pandalanguage$pandac$Type* $tmp207 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    object206 = $tmp207;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp208, ((panda$core$Int64) { 0 }), expectedCount169, ((panda$core$Bit) { false }));
    int64_t $tmp210 = $tmp208.min.value;
    panda$core$Int64 i209 = { $tmp210 };
    int64_t $tmp212 = $tmp208.max.value;
    bool $tmp213 = $tmp208.inclusive.value;
    if ($tmp213) goto $l220; else goto $l221;
    $l220:;
    if ($tmp210 <= $tmp212) goto $l214; else goto $l216;
    $l221:;
    if ($tmp210 < $tmp212) goto $l214; else goto $l216;
    $l214:;
    {
        ITable* $tmp223 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
        while ($tmp223->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp223 = $tmp223->next;
        }
        $fn225 $tmp224 = $tmp223->methods[0];
        panda$core$Object* $tmp226 = $tmp224(((panda$collections$ListView*) p_cl->parameters), i209);
        bound222 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp226)->bound;
        panda$core$Bit $tmp228 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(bound222, object206);
        bool $tmp227 = $tmp228.value;
        if ($tmp227) goto $l229;
        panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(bound222->typeKind, ((panda$core$Int64) { 11 }));
        bool $tmp230 = $tmp231.value;
        if (!$tmp230) goto $l232;
        panda$core$Object* $tmp233 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(bound222->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp234 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp233), object206);
        $tmp230 = $tmp234.value;
        $l232:;
        panda$core$Bit $tmp235 = { $tmp230 };
        $tmp227 = $tmp235.value;
        $l229:;
        panda$core$Bit $tmp236 = { $tmp227 };
        if ($tmp236.value) {
        {
            goto $l217;
        }
        }
        ITable* $tmp237 = foundTypes174->$class->itable;
        while ($tmp237->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp237 = $tmp237->next;
        }
        $fn239 $tmp238 = $tmp237->methods[0];
        panda$core$Object* $tmp240 = $tmp238(foundTypes174, i209);
        org$pandalanguage$pandac$Type* $tmp241 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, bound222);
        panda$core$Int64$nullable $tmp242 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp240), $tmp241);
        if (((panda$core$Bit) { !$tmp242.nonnull }).value) {
        {
            panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s243, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s245);
            ITable* $tmp247 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp247->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp247 = $tmp247->next;
            }
            $fn249 $tmp248 = $tmp247->methods[0];
            panda$core$Object* $tmp250 = $tmp248(((panda$collections$ListView*) p_cl->parameters), i209);
            panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp250))->name);
            panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s252);
            ITable* $tmp255 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp255->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp255 = $tmp255->next;
            }
            $fn257 $tmp256 = $tmp255->methods[0];
            panda$core$Object* $tmp258 = $tmp256(((panda$collections$ListView*) p_cl->parameters), i209);
            panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s254, ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp258)->bound));
            panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s260);
            ITable* $tmp262 = foundTypes174->$class->itable;
            while ($tmp262->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp262 = $tmp262->next;
            }
            $fn264 $tmp263 = $tmp262->methods[0];
            panda$core$Object* $tmp265 = $tmp263(foundTypes174, i209);
            panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp261, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp265)));
            panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, &$s267);
            panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, $tmp268);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp269);
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l217:;
    int64_t $tmp271 = $tmp212 - i209.value;
    if ($tmp213) goto $l272; else goto $l273;
    $l272:;
    if ((uint64_t) $tmp271 >= 1) goto $l270; else goto $l216;
    $l273:;
    if ((uint64_t) $tmp271 > 1) goto $l270; else goto $l216;
    $l270:;
    i209.value += 1;
    goto $l214;
    $l216:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, panda$core$Bit p_checkParameters) {
    org$pandalanguage$pandac$ClassDecl* resolved276;
    org$pandalanguage$pandac$Type* result278;
    org$pandalanguage$pandac$Symbol* s282;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* gp286;
    panda$collections$Array* subtypes297;
    org$pandalanguage$pandac$Type* sub300;
    panda$collections$Array* subtypes310;
    org$pandalanguage$pandac$Type* base313;
    panda$core$MutableString* name316;
    panda$core$Char8 $tmp320;
    panda$core$String* separator321;
    panda$core$Range$LTpanda$core$Int64$GT $tmp323;
    org$pandalanguage$pandac$Type* resolved338;
    panda$core$Char8 $tmp348;
    org$pandalanguage$pandac$Type* result349;
    if (p_type->resolved.value) {
    {
        return p_type;
    }
    }
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp277 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            resolved276 = $tmp277;
            if (((panda$core$Bit) { resolved276 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp279 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(resolved276);
                result278 = $tmp279;
                if (p_checkParameters.value) {
                {
                    panda$core$Bit $tmp280 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, resolved276, result278);
                    panda$core$Bit $tmp281 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp280);
                    if ($tmp281.value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                return result278;
            }
            }
            org$pandalanguage$pandac$Symbol* $tmp283 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            s282 = $tmp283;
            if (((panda$core$Bit) { s282 != NULL }).value) {
            {
                switch (s282->kind.value) {
                    case 200:
                    {
                        org$pandalanguage$pandac$Type* $tmp284 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp284->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp284->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp284, ((org$pandalanguage$pandac$Alias*) s282)->fullName, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$core$Bit) { true }));
                        return $tmp284;
                    }
                    break;
                    case 203:
                    {
                        gp286 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) s282);
                        org$pandalanguage$pandac$ClassDecl* $tmp287 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, gp286->owner);
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, $tmp287);
                        org$pandalanguage$pandac$Type* $tmp288 = (org$pandalanguage$pandac$Type*) malloc(96);
                        $tmp288->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                        $tmp288->refCount.value = 1;
                        org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp288, gp286);
                        return $tmp288;
                    }
                    break;
                    case 207:
                    {
                        return ((org$pandalanguage$pandac$Type*) s282);
                    }
                    break;
                    case 201:
                    {
                        org$pandalanguage$pandac$Type* $tmp290 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) s282));
                        return $tmp290;
                    }
                    break;
                }
            }
            }
            panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s291, ((panda$core$Object*) p_type));
            panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s293);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp294);
            return NULL;
        }
        break;
        case 11:
        {
            panda$core$Int64 $tmp295 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp295, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp296.value);
            panda$collections$Array* $tmp298 = (panda$collections$Array*) malloc(40);
            $tmp298->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp298->refCount.value = 1;
            panda$collections$Array$init($tmp298);
            subtypes297 = $tmp298;
            panda$core$Object* $tmp301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp302 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp301));
            sub300 = $tmp302;
            if (((panda$core$Bit) { sub300 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes297, ((panda$core$Object*) sub300));
            org$pandalanguage$pandac$Type* $tmp303 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp303->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp303->refCount.value = 1;
            panda$core$Object* $tmp305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes297, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp305))->name, &$s306);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp303, $tmp307, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes297), ((panda$core$Bit) { true }));
            return $tmp303;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp308 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp309 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp308, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp309.value);
            panda$collections$Array* $tmp311 = (panda$collections$Array*) malloc(40);
            $tmp311->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp311->refCount.value = 1;
            panda$collections$Array$init($tmp311);
            subtypes310 = $tmp311;
            panda$core$Object* $tmp314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp315 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp314), ((panda$core$Bit) { false }));
            base313 = $tmp315;
            if (((panda$core$Bit) { base313 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(subtypes310, ((panda$core$Object*) base313));
            panda$core$MutableString* $tmp317 = (panda$core$MutableString*) malloc(48);
            $tmp317->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp317->refCount.value = 1;
            panda$core$Object* $tmp319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes310, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$init$panda$core$String($tmp317, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp319))->name);
            name316 = $tmp317;
            panda$core$Char8$init$panda$core$UInt8(&$tmp320, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name316, $tmp320);
            separator321 = &$s322;
            panda$core$Int64 $tmp324 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp323, ((panda$core$Int64) { 1 }), $tmp324, ((panda$core$Bit) { false }));
            int64_t $tmp326 = $tmp323.min.value;
            panda$core$Int64 i325 = { $tmp326 };
            int64_t $tmp328 = $tmp323.max.value;
            bool $tmp329 = $tmp323.inclusive.value;
            if ($tmp329) goto $l336; else goto $l337;
            $l336:;
            if ($tmp326 <= $tmp328) goto $l330; else goto $l332;
            $l337:;
            if ($tmp326 < $tmp328) goto $l330; else goto $l332;
            $l330:;
            {
                panda$core$Object* $tmp339 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, i325);
                org$pandalanguage$pandac$Type* $tmp340 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp339));
                resolved338 = $tmp340;
                if (((panda$core$Bit) { resolved338 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes310, ((panda$core$Object*) resolved338));
                panda$core$MutableString$append$panda$core$String(name316, separator321);
                panda$core$MutableString$append$panda$core$String(name316, ((org$pandalanguage$pandac$Symbol*) resolved338)->name);
                separator321 = &$s341;
            }
            $l333:;
            int64_t $tmp343 = $tmp328 - i325.value;
            if ($tmp329) goto $l344; else goto $l345;
            $l344:;
            if ((uint64_t) $tmp343 >= 1) goto $l342; else goto $l332;
            $l345:;
            if ((uint64_t) $tmp343 > 1) goto $l342; else goto $l332;
            $l342:;
            i325.value += 1;
            goto $l330;
            $l332:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp348, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name316, $tmp348);
            org$pandalanguage$pandac$Type* $tmp350 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp350->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp350->refCount.value = 1;
            panda$core$String* $tmp352 = panda$core$MutableString$finish$R$panda$core$String(name316);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp350, $tmp352, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((panda$collections$ListView*) subtypes310), ((panda$core$Bit) { true }));
            result349 = $tmp350;
            if (p_checkParameters.value) {
            {
                panda$core$Object* $tmp353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(result349->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$ClassDecl* $tmp354 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp353));
                panda$core$Bit $tmp355 = org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, $tmp354, result349);
                panda$core$Bit $tmp356 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp355);
                if ($tmp356.value) {
                {
                    return NULL;
                }
                }
            }
            }
            return result349;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp357 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p_type, ((panda$core$Bit) { true }));
    return $tmp357;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old358;
    panda$collections$Iterator* p$Iter359;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p371;
    org$pandalanguage$pandac$Type* resolved376;
    panda$collections$Iterator* rawS$Iter378;
    org$pandalanguage$pandac$Type* rawS390;
    org$pandalanguage$pandac$Type* s395;
    org$pandalanguage$pandac$ClassDecl* sClass397;
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
    old358 = self->symbolTable;
    self->symbolTable = p_cl->symbolTable;
    {
        ITable* $tmp360 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp360->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp360 = $tmp360->next;
        }
        $fn362 $tmp361 = $tmp360->methods[0];
        panda$collections$Iterator* $tmp363 = $tmp361(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter359 = $tmp363;
        $l364:;
        ITable* $tmp366 = p$Iter359->$class->itable;
        while ($tmp366->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp366 = $tmp366->next;
        }
        $fn368 $tmp367 = $tmp366->methods[0];
        panda$core$Bit $tmp369 = $tmp367(p$Iter359);
        panda$core$Bit $tmp370 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp369);
        if (!$tmp370.value) goto $l365;
        {
            ITable* $tmp372 = p$Iter359->$class->itable;
            while ($tmp372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp372 = $tmp372->next;
            }
            $fn374 $tmp373 = $tmp372->methods[1];
            panda$core$Object* $tmp375 = $tmp373(p$Iter359);
            p371 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp375);
            org$pandalanguage$pandac$Type* $tmp377 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, p371->bound, ((panda$core$Bit) { false }));
            resolved376 = $tmp377;
            if (((panda$core$Bit) { resolved376 != NULL }).value) {
            {
                p371->bound = resolved376;
            }
            }
        }
        goto $l364;
        $l365:;
    }
    {
        ITable* $tmp379 = ((panda$collections$Iterable*) p_cl->declaredSupers)->$class->itable;
        while ($tmp379->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp379 = $tmp379->next;
        }
        $fn381 $tmp380 = $tmp379->methods[0];
        panda$collections$Iterator* $tmp382 = $tmp380(((panda$collections$Iterable*) p_cl->declaredSupers));
        rawS$Iter378 = $tmp382;
        $l383:;
        ITable* $tmp385 = rawS$Iter378->$class->itable;
        while ($tmp385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp385 = $tmp385->next;
        }
        $fn387 $tmp386 = $tmp385->methods[0];
        panda$core$Bit $tmp388 = $tmp386(rawS$Iter378);
        panda$core$Bit $tmp389 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp388);
        if (!$tmp389.value) goto $l384;
        {
            ITable* $tmp391 = rawS$Iter378->$class->itable;
            while ($tmp391->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp391 = $tmp391->next;
            }
            $fn393 $tmp392 = $tmp391->methods[1];
            panda$core$Object* $tmp394 = $tmp392(rawS$Iter378);
            rawS390 = ((org$pandalanguage$pandac$Type*) $tmp394);
            org$pandalanguage$pandac$Type* $tmp396 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q(self, rawS390, ((panda$core$Bit) { false }));
            s395 = $tmp396;
            if (((panda$core$Bit) { s395 != NULL }).value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp398 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, s395);
                sClass397 = $tmp398;
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, sClass397);
                if (((panda$core$Bit) { sClass397 != NULL }).value) {
                {
                    panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass397->classKind->$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp399.value) {
                    {
                        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind->$rawValue, ((panda$core$Int64) { 1 }));
                        if ($tmp400.value) {
                        {
                            panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s401, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, &$s403);
                            panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s405, ((org$pandalanguage$pandac$Symbol*) s395)->name);
                            panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s407);
                            panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, $tmp408);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s395)->position, $tmp409);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s395;
                            panda$core$Int64 $tmp410 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp411 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp410, ((panda$core$Int64) { 0 }));
                            if ($tmp411.value) {
                            {
                                panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s412, ((panda$core$Object*) s395));
                                panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp413, &$s414);
                                panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp416, &$s417);
                                panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp418, &$s419);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s395)->position, $tmp420);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s421, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp422, &$s423);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s395)->position, $tmp424);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass397->classKind->$rawValue, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp425.value);
                        panda$collections$Array$add$panda$collections$Array$T(p_cl->rawInterfaces, ((panda$core$Object*) s395));
                    }
                    }
                }
                }
            }
            }
        }
        goto $l383;
        $l384:;
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
    self->symbolTable = old358;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old504;
    panda$collections$Iterator* p$Iter505;
    org$pandalanguage$pandac$MethodDecl$Parameter* p517;
    org$pandalanguage$pandac$MethodDecl* overridden525;
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
            panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 0 }));
            bool $tmp539 = $tmp540.value;
            if (!$tmp539) goto $l541;
            panda$core$Bit $tmp542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden525->methodKind->$rawValue, ((panda$core$Int64) { 1 }));
            $tmp539 = $tmp542.value;
            $l541:;
            panda$core$Bit $tmp543 = { $tmp539 };
            if ($tmp543.value) {
            {
                panda$core$String* $tmp544 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp545 = panda$core$String$convert$R$panda$core$String($tmp544);
                panda$core$String* $tmp547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s546);
                panda$core$String* $tmp548 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden525);
                panda$core$String* $tmp549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, $tmp548);
                panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s550);
                panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, &$s552);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp553);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp554 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        if ($tmp554.value) {
        {
            panda$core$String* $tmp555 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp556 = panda$core$String$convert$R$panda$core$String($tmp555);
            panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, &$s557);
            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, &$s559);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp560);
        }
        }
        }
    }
    }
    self->symbolTable = old504;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old561;
    org$pandalanguage$pandac$Type* resolved564;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old561 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp562 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp563 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp562);
    if ($tmp563.value) {
    {
        org$pandalanguage$pandac$Type* $tmp565 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved564 = $tmp565;
        if (((panda$core$Bit) { resolved564 != NULL }).value) {
        {
            p_f->type = resolved564;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp566 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp567 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp566, p_f->type);
                p_f->value = $tmp567;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old561;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s568);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old561;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp569 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp569;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old561;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp570 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp570;
    org$pandalanguage$pandac$IRNode* $tmp571 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp571;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old561;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ChoiceEntry* p_c) {
    org$pandalanguage$pandac$SymbolTable* old574;
    panda$core$Range$LTpanda$core$Int64$GT $tmp575;
    if (p_c->resolved.value) {
    {
        return;
    }
    }
    p_c->resolved = ((panda$core$Bit) { true });
    panda$core$Int64 $tmp572 = panda$collections$Array$get_count$R$panda$core$Int64(p_c->fields);
    panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp572, ((panda$core$Int64) { 0 }));
    if ($tmp573.value) {
    {
        return;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_c->owner));
    old574 = self->symbolTable;
    self->symbolTable = p_c->owner->symbolTable;
    panda$core$Int64 $tmp576 = panda$collections$Array$get_count$R$panda$core$Int64(p_c->fields);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp575, ((panda$core$Int64) { 0 }), $tmp576, ((panda$core$Bit) { false }));
    int64_t $tmp578 = $tmp575.min.value;
    panda$core$Int64 i577 = { $tmp578 };
    int64_t $tmp580 = $tmp575.max.value;
    bool $tmp581 = $tmp575.inclusive.value;
    if ($tmp581) goto $l588; else goto $l589;
    $l588:;
    if ($tmp578 <= $tmp580) goto $l582; else goto $l584;
    $l589:;
    if ($tmp578 < $tmp580) goto $l582; else goto $l584;
    $l582:;
    {
        org$pandalanguage$pandac$Pair* $tmp590 = (org$pandalanguage$pandac$Pair*) malloc(32);
        $tmp590->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
        $tmp590->refCount.value = 1;
        panda$core$Object* $tmp592 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_c->fields, i577);
        panda$core$Object* $tmp593 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_c->fields, i577);
        org$pandalanguage$pandac$Type* $tmp594 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp593)->second));
        org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp590, ((panda$core$Object*) ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp592)->first)), ((panda$core$Object*) $tmp594));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_c->fields, i577, ((panda$core$Object*) $tmp590));
    }
    $l585:;
    int64_t $tmp596 = $tmp580 - i577.value;
    if ($tmp581) goto $l597; else goto $l598;
    $l597:;
    if ((uint64_t) $tmp596 >= 1) goto $l595; else goto $l584;
    $l598:;
    if ((uint64_t) $tmp596 > 1) goto $l595; else goto $l584;
    $l595:;
    i577.value += 1;
    goto $l582;
    $l584:;
    self->symbolTable = old574;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$ListView* methods602;
    panda$collections$ImmutableArray* args604;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp605;
    panda$collections$Array* best607;
    panda$core$Int64$nullable bestCost610;
    panda$collections$Iterator* m$Iter611;
    org$pandalanguage$pandac$MethodRef* m623;
    panda$core$Int64$nullable cost628;
    org$pandalanguage$pandac$IRNode* callTarget638;
    org$pandalanguage$pandac$IRNode* result644;
    panda$core$Bit $tmp601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1039 }));
    PANDA_ASSERT($tmp601.value);
    panda$core$Object* $tmp603 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    methods602 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp603)->payload);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp605, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$collections$ImmutableArray* $tmp606 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp605);
    args604 = $tmp606;
    panda$collections$Array* $tmp608 = (panda$collections$Array*) malloc(40);
    $tmp608->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp608->refCount.value = 1;
    panda$collections$Array$init($tmp608);
    best607 = $tmp608;
    bestCost610 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp612 = ((panda$collections$Iterable*) methods602)->$class->itable;
        while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp612 = $tmp612->next;
        }
        $fn614 $tmp613 = $tmp612->methods[0];
        panda$collections$Iterator* $tmp615 = $tmp613(((panda$collections$Iterable*) methods602));
        m$Iter611 = $tmp615;
        $l616:;
        ITable* $tmp618 = m$Iter611->$class->itable;
        while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp618 = $tmp618->next;
        }
        $fn620 $tmp619 = $tmp618->methods[0];
        panda$core$Bit $tmp621 = $tmp619(m$Iter611);
        panda$core$Bit $tmp622 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp621);
        if (!$tmp622.value) goto $l617;
        {
            ITable* $tmp624 = m$Iter611->$class->itable;
            while ($tmp624->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp624 = $tmp624->next;
            }
            $fn626 $tmp625 = $tmp624->methods[1];
            panda$core$Object* $tmp627 = $tmp625(m$Iter611);
            m623 = ((org$pandalanguage$pandac$MethodRef*) $tmp627);
            panda$core$Int64$nullable $tmp629 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m623, ((panda$collections$ListView*) args604), p_target);
            cost628 = $tmp629;
            if (((panda$core$Bit) { !cost628.nonnull }).value) {
            {
                goto $l616;
            }
            }
            if (((panda$core$Bit) { !bestCost610.nonnull }).value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best607, ((panda$core$Object*) m623));
                bestCost610 = cost628;
                goto $l616;
            }
            }
            panda$core$Bit $tmp630 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost628.value), ((panda$core$Int64) bestCost610.value));
            if ($tmp630.value) {
            {
                panda$collections$Array$clear(best607);
                bestCost610 = cost628;
            }
            }
            panda$core$Bit $tmp634;
            if (((panda$core$Bit) { cost628.nonnull }).value) goto $l631; else goto $l632;
            $l631:;
            panda$core$Bit $tmp635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost628.value), ((panda$core$Int64) bestCost610.value));
            $tmp634 = $tmp635;
            goto $l633;
            $l632:;
            $tmp634 = ((panda$core$Bit) { false });
            goto $l633;
            $l633:;
            if ($tmp634.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best607, ((panda$core$Object*) m623));
            }
            }
        }
        goto $l616;
        $l617:;
    }
    panda$core$Int64 $tmp636 = panda$collections$Array$get_count$R$panda$core$Int64(best607);
    panda$core$Bit $tmp637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp636, ((panda$core$Int64) { 1 }));
    if ($tmp637.value) {
    {
        panda$core$Object* $tmp639 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp640 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp639)->children);
        panda$core$Bit $tmp641 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp640, ((panda$core$Int64) { 0 }));
        if ($tmp641.value) {
        {
            panda$core$Object* $tmp642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp643 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp642)->children, ((panda$core$Int64) { 0 }));
            callTarget638 = ((org$pandalanguage$pandac$IRNode*) $tmp643);
        }
        }
        else {
        {
            callTarget638 = NULL;
        }
        }
        panda$core$Object* $tmp645 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best607, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp646 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget638, ((org$pandalanguage$pandac$MethodRef*) $tmp645), ((panda$collections$ListView*) args604));
        result644 = $tmp646;
        if (((panda$core$Bit) { p_target != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp647 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result644, p_target);
            result644 = $tmp647;
        }
        }
        return result644;
    }
    }
    org$pandalanguage$pandac$Position$wrapper* $tmp649;
    $tmp649 = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
    $tmp649->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
    $tmp649->refCount = 1;
    $tmp649->value = p_expr->position;
    panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s648, ((panda$core$Object*) $tmp649));
    panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp650, &$s651);
    ITable* $tmp653 = methods602->$class->itable;
    while ($tmp653->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp653 = $tmp653->next;
    }
    $fn655 $tmp654 = $tmp653->methods[0];
    panda$core$Object* $tmp656 = $tmp654(methods602, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp652, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp656)->value)->name);
    panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp657, &$s658);
    panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp659, ((panda$core$Object*) best607));
    panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp660, &$s661);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp662));
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s663);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp664 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp664;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s665);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp666 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp667 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp666);
            return $tmp667;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp668 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp668) goto $l669;
    panda$core$Bit $tmp671 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s670);
    $tmp668 = $tmp671.value;
    $l669:;
    panda$core$Bit $tmp672 = { $tmp668 };
    return $tmp672;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result673;
    org$pandalanguage$pandac$ClassDecl* s681;
    panda$collections$Iterator* f$Iter684;
    org$pandalanguage$pandac$FieldDecl* f696;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp674 = (panda$collections$Array*) malloc(40);
    $tmp674->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp674->refCount.value = 1;
    panda$collections$Array$init($tmp674);
    result673 = $tmp674;
    panda$core$Bit $tmp677 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp678 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp677);
    bool $tmp676 = $tmp678.value;
    if (!$tmp676) goto $l679;
    $tmp676 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l679:;
    panda$core$Bit $tmp680 = { $tmp676 };
    if ($tmp680.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp682 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s681 = $tmp682;
        if (((panda$core$Bit) { s681 != NULL }).value) {
        {
            panda$collections$ListView* $tmp683 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s681);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result673, ((panda$collections$CollectionView*) $tmp683));
        }
        }
    }
    }
    {
        ITable* $tmp685 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp685->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp685 = $tmp685->next;
        }
        $fn687 $tmp686 = $tmp685->methods[0];
        panda$collections$Iterator* $tmp688 = $tmp686(((panda$collections$Iterable*) p_cl->fields));
        f$Iter684 = $tmp688;
        $l689:;
        ITable* $tmp691 = f$Iter684->$class->itable;
        while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp691 = $tmp691->next;
        }
        $fn693 $tmp692 = $tmp691->methods[0];
        panda$core$Bit $tmp694 = $tmp692(f$Iter684);
        panda$core$Bit $tmp695 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp694);
        if (!$tmp695.value) goto $l690;
        {
            ITable* $tmp697 = f$Iter684->$class->itable;
            while ($tmp697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp697 = $tmp697->next;
            }
            $fn699 $tmp698 = $tmp697->methods[1];
            panda$core$Object* $tmp700 = $tmp698(f$Iter684);
            f696 = ((org$pandalanguage$pandac$FieldDecl*) $tmp700);
            panda$core$Bit $tmp701 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f696->annotations);
            panda$core$Bit $tmp702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp701);
            if ($tmp702.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result673, ((panda$core$Object*) f696));
            }
            }
        }
        goto $l689;
        $l690:;
    }
    return ((panda$collections$ListView*) result673);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result703;
    panda$core$Bit $tmp705;
    panda$core$Object* $tmp704 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result703 = ($tmp704 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp704)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result703.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp705, p_f);
        result703 = ((panda$core$Bit$nullable) { $tmp705, true });
        panda$core$Bit$wrapper* $tmp706;
        $tmp706 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp706->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp706->refCount = 1;
        $tmp706->value = ((panda$core$Bit) result703.value);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) $tmp706));
    }
    }
    return ((panda$core$Bit) result703.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result707;
    panda$core$String* suffix709;
    panda$core$Bit found715;
    panda$collections$Iterator* dir$Iter716;
    panda$io$File* dir728;
    panda$io$File* f733;
    panda$core$String$Index$nullable index737;
    org$pandalanguage$pandac$ClassDecl* parent740;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp741;
    panda$core$Object* $tmp708 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result707 = ((org$pandalanguage$pandac$ClassDecl*) $tmp708);
    if (((panda$core$Bit) { result707 == NULL }).value) {
    {
        panda$core$String* $tmp712 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s710, &$s711);
        panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp712, &$s713);
        suffix709 = $tmp714;
        found715 = ((panda$core$Bit) { false });
        {
            ITable* $tmp717 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp717->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp717 = $tmp717->next;
            }
            $fn719 $tmp718 = $tmp717->methods[0];
            panda$collections$Iterator* $tmp720 = $tmp718(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter716 = $tmp720;
            $l721:;
            ITable* $tmp723 = dir$Iter716->$class->itable;
            while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp723 = $tmp723->next;
            }
            $fn725 $tmp724 = $tmp723->methods[0];
            panda$core$Bit $tmp726 = $tmp724(dir$Iter716);
            panda$core$Bit $tmp727 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp726);
            if (!$tmp727.value) goto $l722;
            {
                ITable* $tmp729 = dir$Iter716->$class->itable;
                while ($tmp729->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp729 = $tmp729->next;
                }
                $fn731 $tmp730 = $tmp729->methods[1];
                panda$core$Object* $tmp732 = $tmp730(dir$Iter716);
                dir728 = ((panda$io$File*) $tmp732);
                panda$io$File* $tmp734 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir728, suffix709);
                f733 = $tmp734;
                panda$core$Bit $tmp735 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f733);
                if ($tmp735.value) {
                {
                    found715 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f733);
                    panda$core$Object* $tmp736 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result707 = ((org$pandalanguage$pandac$ClassDecl*) $tmp736);
                }
                }
            }
            goto $l721;
            $l722:;
        }
    }
    }
    if (((panda$core$Bit) { result707 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp739 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s738);
        index737 = $tmp739;
        if (((panda$core$Bit) { index737.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp741, ((panda$core$String$Index$nullable) { .nonnull = false }), index737, ((panda$core$Bit) { false }));
            panda$core$String* $tmp742 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp741);
            org$pandalanguage$pandac$ClassDecl* $tmp743 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp742);
            parent740 = $tmp743;
            if (((panda$core$Bit) { parent740 != NULL }).value) {
            {
                panda$core$Object* $tmp744 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result707 = ((org$pandalanguage$pandac$ClassDecl*) $tmp744);
            }
            }
        }
        }
    }
    }
    return result707;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result745;
    panda$core$String* suffix747;
    panda$core$Bit found753;
    panda$collections$Iterator* dir$Iter754;
    panda$io$File* dir766;
    panda$io$File* f771;
    panda$core$Int64 oldErrorCount774;
    org$pandalanguage$pandac$Position $tmp780;
    panda$core$Object* $tmp746 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result745 = ((org$pandalanguage$pandac$ClassDecl*) $tmp746);
    if (((panda$core$Bit) { result745 == NULL }).value) {
    {
        panda$core$String* $tmp750 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s748, &$s749);
        panda$core$String* $tmp752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp750, &$s751);
        suffix747 = $tmp752;
        found753 = ((panda$core$Bit) { false });
        {
            ITable* $tmp755 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp755->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp755 = $tmp755->next;
            }
            $fn757 $tmp756 = $tmp755->methods[0];
            panda$collections$Iterator* $tmp758 = $tmp756(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter754 = $tmp758;
            $l759:;
            ITable* $tmp761 = dir$Iter754->$class->itable;
            while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp761 = $tmp761->next;
            }
            $fn763 $tmp762 = $tmp761->methods[0];
            panda$core$Bit $tmp764 = $tmp762(dir$Iter754);
            panda$core$Bit $tmp765 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp764);
            if (!$tmp765.value) goto $l760;
            {
                ITable* $tmp767 = dir$Iter754->$class->itable;
                while ($tmp767->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp767 = $tmp767->next;
                }
                $fn769 $tmp768 = $tmp767->methods[1];
                panda$core$Object* $tmp770 = $tmp768(dir$Iter754);
                dir766 = ((panda$io$File*) $tmp770);
                panda$io$File* $tmp772 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir766, suffix747);
                f771 = $tmp772;
                panda$core$Bit $tmp773 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f771);
                if ($tmp773.value) {
                {
                    found753 = ((panda$core$Bit) { true });
                    oldErrorCount774 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f771);
                    panda$core$Object* $tmp775 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result745 = ((org$pandalanguage$pandac$ClassDecl*) $tmp775);
                    bool $tmp776 = ((panda$core$Bit) { result745 == NULL }).value;
                    if (!$tmp776) goto $l777;
                    panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount774);
                    $tmp776 = $tmp778.value;
                    $l777:;
                    panda$core$Bit $tmp779 = { $tmp776 };
                    if ($tmp779.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp780, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s781, ((panda$core$Object*) f771));
                        panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp782, &$s783);
                        panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp784, p_fullName);
                        panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp785, &$s786);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f771, $tmp780, $tmp787);
                    }
                    }
                }
                }
            }
            goto $l759;
            $l760:;
        }
        panda$core$Bit $tmp788 = panda$core$Bit$$NOT$R$panda$core$Bit(found753);
        if ($tmp788.value) {
        {
            panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s789, suffix747);
            panda$core$String* $tmp792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, &$s791);
            panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp792, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp793, &$s794);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp795);
        }
        }
    }
    }
    return result745;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type796;
    org$pandalanguage$pandac$ClassDecl* result803;
    org$pandalanguage$pandac$Annotations* annotations805;
    panda$collections$Array* supertypes811;
    panda$collections$Iterator* intf$Iter815;
    org$pandalanguage$pandac$Type* intf827;
    panda$collections$HashMap* aliases833;
    panda$core$Range$LTpanda$core$Int64$GT $tmp836;
    panda$collections$Iterator* m$Iter871;
    org$pandalanguage$pandac$MethodDecl* m883;
    panda$collections$Array* parameters888;
    panda$collections$Iterator* p$Iter891;
    org$pandalanguage$pandac$MethodDecl$Parameter* p903;
    org$pandalanguage$pandac$MethodDecl* clone911;
    panda$collections$Iterator* f$Iter915;
    org$pandalanguage$pandac$FieldDecl* f927;
    org$pandalanguage$pandac$FieldDecl* clone932;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    org$pandalanguage$pandac$Type* $tmp797 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type796 = $tmp797;
    panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type796->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp798.value) {
    {
        panda$core$Object* $tmp799 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type796->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp800 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp799));
        return $tmp800;
    }
    }
    panda$core$Bit $tmp801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type796->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp801.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type796->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp802.value);
    panda$core$Object* $tmp804 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type796)->name));
    result803 = ((org$pandalanguage$pandac$ClassDecl*) $tmp804);
    if (((panda$core$Bit) { result803 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp806 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp806->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp806->refCount.value = 1;
        panda$core$Int64 $tmp808 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp809 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp808);
        panda$core$Int64 $tmp810 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp809);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp806, $tmp810);
        annotations805 = $tmp806;
        panda$collections$Array* $tmp812 = (panda$collections$Array*) malloc(40);
        $tmp812->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp812->refCount.value = 1;
        panda$collections$Array$init($tmp812);
        supertypes811 = $tmp812;
        org$pandalanguage$pandac$Type* $tmp814 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type796, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes811, ((panda$core$Object*) $tmp814));
        {
            ITable* $tmp816 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp816->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp816 = $tmp816->next;
            }
            $fn818 $tmp817 = $tmp816->methods[0];
            panda$collections$Iterator* $tmp819 = $tmp817(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter815 = $tmp819;
            $l820:;
            ITable* $tmp822 = intf$Iter815->$class->itable;
            while ($tmp822->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp822 = $tmp822->next;
            }
            $fn824 $tmp823 = $tmp822->methods[0];
            panda$core$Bit $tmp825 = $tmp823(intf$Iter815);
            panda$core$Bit $tmp826 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp825);
            if (!$tmp826.value) goto $l821;
            {
                ITable* $tmp828 = intf$Iter815->$class->itable;
                while ($tmp828->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp828 = $tmp828->next;
                }
                $fn830 $tmp829 = $tmp828->methods[1];
                panda$core$Object* $tmp831 = $tmp829(intf$Iter815);
                intf827 = ((org$pandalanguage$pandac$Type*) $tmp831);
                org$pandalanguage$pandac$Type* $tmp832 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type796, intf827);
                panda$collections$Array$add$panda$collections$Array$T(supertypes811, ((panda$core$Object*) $tmp832));
            }
            goto $l820;
            $l821:;
        }
        panda$collections$HashMap* $tmp834 = (panda$collections$HashMap*) malloc(56);
        $tmp834->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp834->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp834, p_cl->aliases);
        aliases833 = $tmp834;
        ITable* $tmp837 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp837->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp837 = $tmp837->next;
        }
        $fn839 $tmp838 = $tmp837->methods[0];
        panda$core$Int64 $tmp840 = $tmp838(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp836, ((panda$core$Int64) { 0 }), $tmp840, ((panda$core$Bit) { false }));
        int64_t $tmp842 = $tmp836.min.value;
        panda$core$Int64 i841 = { $tmp842 };
        int64_t $tmp844 = $tmp836.max.value;
        bool $tmp845 = $tmp836.inclusive.value;
        if ($tmp845) goto $l852; else goto $l853;
        $l852:;
        if ($tmp842 <= $tmp844) goto $l846; else goto $l848;
        $l853:;
        if ($tmp842 < $tmp844) goto $l846; else goto $l848;
        $l846:;
        {
            ITable* $tmp854 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp854->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp854 = $tmp854->next;
            }
            $fn856 $tmp855 = $tmp854->methods[0];
            panda$core$Object* $tmp857 = $tmp855(((panda$collections$ListView*) p_cl->parameters), i841);
            panda$core$Int64 $tmp858 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i841, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp859 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type796->subtypes, $tmp858);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases833, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp857))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp859))->name));
        }
        $l849:;
        int64_t $tmp861 = $tmp844 - i841.value;
        if ($tmp845) goto $l862; else goto $l863;
        $l862:;
        if ((uint64_t) $tmp861 >= 1) goto $l860; else goto $l848;
        $l863:;
        if ((uint64_t) $tmp861 > 1) goto $l860; else goto $l848;
        $l860:;
        i841.value += 1;
        goto $l846;
        $l848:;
        org$pandalanguage$pandac$ClassDecl* $tmp866 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
        $tmp866->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp866->refCount.value = 1;
        panda$collections$Array* $tmp868 = (panda$collections$Array*) malloc(40);
        $tmp868->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp868->refCount.value = 1;
        panda$collections$Array$init($tmp868);
        panda$core$Object* $tmp870 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp866, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases833), p_cl->doccomment, annotations805, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type796)->name, ((panda$collections$ListView*) supertypes811), $tmp868, ((org$pandalanguage$pandac$SymbolTable*) $tmp870));
        result803 = $tmp866;
        result803->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp872 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp872->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp872 = $tmp872->next;
            }
            $fn874 $tmp873 = $tmp872->methods[0];
            panda$collections$Iterator* $tmp875 = $tmp873(((panda$collections$Iterable*) p_cl->methods));
            m$Iter871 = $tmp875;
            $l876:;
            ITable* $tmp878 = m$Iter871->$class->itable;
            while ($tmp878->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp878 = $tmp878->next;
            }
            $fn880 $tmp879 = $tmp878->methods[0];
            panda$core$Bit $tmp881 = $tmp879(m$Iter871);
            panda$core$Bit $tmp882 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp881);
            if (!$tmp882.value) goto $l877;
            {
                ITable* $tmp884 = m$Iter871->$class->itable;
                while ($tmp884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp884 = $tmp884->next;
                }
                $fn886 $tmp885 = $tmp884->methods[1];
                panda$core$Object* $tmp887 = $tmp885(m$Iter871);
                m883 = ((org$pandalanguage$pandac$MethodDecl*) $tmp887);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m883);
                panda$collections$Array* $tmp889 = (panda$collections$Array*) malloc(40);
                $tmp889->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp889->refCount.value = 1;
                panda$collections$Array$init($tmp889);
                parameters888 = $tmp889;
                {
                    ITable* $tmp892 = ((panda$collections$Iterable*) m883->parameters)->$class->itable;
                    while ($tmp892->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp892 = $tmp892->next;
                    }
                    $fn894 $tmp893 = $tmp892->methods[0];
                    panda$collections$Iterator* $tmp895 = $tmp893(((panda$collections$Iterable*) m883->parameters));
                    p$Iter891 = $tmp895;
                    $l896:;
                    ITable* $tmp898 = p$Iter891->$class->itable;
                    while ($tmp898->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp898 = $tmp898->next;
                    }
                    $fn900 $tmp899 = $tmp898->methods[0];
                    panda$core$Bit $tmp901 = $tmp899(p$Iter891);
                    panda$core$Bit $tmp902 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp901);
                    if (!$tmp902.value) goto $l897;
                    {
                        ITable* $tmp904 = p$Iter891->$class->itable;
                        while ($tmp904->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp904 = $tmp904->next;
                        }
                        $fn906 $tmp905 = $tmp904->methods[1];
                        panda$core$Object* $tmp907 = $tmp905(p$Iter891);
                        p903 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp907);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp908 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp908->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp908->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp910 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type796, p903->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp908, p903->name, $tmp910);
                        panda$collections$Array$add$panda$collections$Array$T(parameters888, ((panda$core$Object*) $tmp908));
                    }
                    goto $l896;
                    $l897:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp912 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
                $tmp912->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp912->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp914 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type796, m883->returnType);
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp912, result803, ((org$pandalanguage$pandac$Symbol*) m883)->position, m883->doccomment, m883->annotations, m883->methodKind, ((org$pandalanguage$pandac$Symbol*) m883)->name, parameters888, $tmp914, m883->body);
                clone911 = $tmp912;
                panda$collections$Array$add$panda$collections$Array$T(result803->methods, ((panda$core$Object*) clone911));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result803->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone911));
            }
            goto $l876;
            $l877:;
        }
        {
            ITable* $tmp916 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp916->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp916 = $tmp916->next;
            }
            $fn918 $tmp917 = $tmp916->methods[0];
            panda$collections$Iterator* $tmp919 = $tmp917(((panda$collections$Iterable*) p_cl->fields));
            f$Iter915 = $tmp919;
            $l920:;
            ITable* $tmp922 = f$Iter915->$class->itable;
            while ($tmp922->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp922 = $tmp922->next;
            }
            $fn924 $tmp923 = $tmp922->methods[0];
            panda$core$Bit $tmp925 = $tmp923(f$Iter915);
            panda$core$Bit $tmp926 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp925);
            if (!$tmp926.value) goto $l921;
            {
                ITable* $tmp928 = f$Iter915->$class->itable;
                while ($tmp928->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp928 = $tmp928->next;
                }
                $fn930 $tmp929 = $tmp928->methods[1];
                panda$core$Object* $tmp931 = $tmp929(f$Iter915);
                f927 = ((org$pandalanguage$pandac$FieldDecl*) $tmp931);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f927);
                org$pandalanguage$pandac$FieldDecl* $tmp933 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp933->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp933->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp935 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type796, f927->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp933, result803, ((org$pandalanguage$pandac$Symbol*) f927)->position, f927->doccomment, f927->annotations, f927->fieldKind, ((org$pandalanguage$pandac$Symbol*) f927)->name, $tmp935, f927->rawValue);
                clone932 = $tmp933;
                panda$collections$Array$add$panda$collections$Array$T(result803->fields, ((panda$core$Object*) clone932));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result803->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone932));
            }
            goto $l920;
            $l921:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result803)->name), ((panda$core$Object*) result803));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result803));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, result803);
    }
    }
    return result803;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result936;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp937 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result936 = $tmp937;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp938 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp939 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp938));
            result936 = $tmp939;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp940 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp940;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp941 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result936->annotations);
    if ($tmp941.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp942 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result936, p_type);
        result936 = $tmp942;
    }
    }
    return result936;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl943;
    panda$collections$Set* result945;
    panda$collections$Iterator* intf$Iter950;
    org$pandalanguage$pandac$Type* intf962;
    org$pandalanguage$pandac$ClassDecl* $tmp944 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl943 = $tmp944;
    PANDA_ASSERT(((panda$core$Bit) { cl943 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl943);
    panda$collections$Set* $tmp946 = (panda$collections$Set*) malloc(24);
    $tmp946->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp946->refCount.value = 1;
    panda$collections$Set$init($tmp946);
    result945 = $tmp946;
    if (((panda$core$Bit) { cl943->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp948 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl943->rawSuper);
        panda$collections$Set* $tmp949 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp948);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result945, ((panda$collections$CollectionView*) $tmp949));
    }
    }
    {
        ITable* $tmp951 = ((panda$collections$Iterable*) cl943->rawInterfaces)->$class->itable;
        while ($tmp951->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp951 = $tmp951->next;
        }
        $fn953 $tmp952 = $tmp951->methods[0];
        panda$collections$Iterator* $tmp954 = $tmp952(((panda$collections$Iterable*) cl943->rawInterfaces));
        intf$Iter950 = $tmp954;
        $l955:;
        ITable* $tmp957 = intf$Iter950->$class->itable;
        while ($tmp957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp957 = $tmp957->next;
        }
        $fn959 $tmp958 = $tmp957->methods[0];
        panda$core$Bit $tmp960 = $tmp958(intf$Iter950);
        panda$core$Bit $tmp961 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp960);
        if (!$tmp961.value) goto $l956;
        {
            ITable* $tmp963 = intf$Iter950->$class->itable;
            while ($tmp963->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp963 = $tmp963->next;
            }
            $fn965 $tmp964 = $tmp963->methods[1];
            panda$core$Object* $tmp966 = $tmp964(intf$Iter950);
            intf962 = ((org$pandalanguage$pandac$Type*) $tmp966);
            org$pandalanguage$pandac$Type* $tmp967 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf962);
            panda$collections$Set* $tmp968 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp967);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result945, ((panda$collections$CollectionView*) $tmp968));
        }
        goto $l955;
        $l956:;
    }
    panda$core$Bit $tmp969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl943->classKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp969.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result945, ((panda$collections$Key*) p_t));
    }
    }
    return result945;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp975;
    panda$core$Bit $tmp970 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp970.value);
    panda$core$Bit $tmp971 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp971.value);
    panda$core$Int64 $tmp972 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp973 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp974 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp972, $tmp973);
    if ($tmp974.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp976 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp975, ((panda$core$Int64) { 0 }), $tmp976, ((panda$core$Bit) { false }));
    int64_t $tmp978 = $tmp975.min.value;
    panda$core$Int64 i977 = { $tmp978 };
    int64_t $tmp980 = $tmp975.max.value;
    bool $tmp981 = $tmp975.inclusive.value;
    if ($tmp981) goto $l988; else goto $l989;
    $l988:;
    if ($tmp978 <= $tmp980) goto $l982; else goto $l984;
    $l989:;
    if ($tmp978 < $tmp980) goto $l982; else goto $l984;
    $l982:;
    {
        panda$core$Object* $tmp990 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i977);
        panda$core$Object* $tmp991 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i977);
        panda$core$Bit $tmp992 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp990), ((org$pandalanguage$pandac$Type*) $tmp991));
        if ($tmp992.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l985:;
    int64_t $tmp994 = $tmp980 - i977.value;
    if ($tmp981) goto $l995; else goto $l996;
    $l995:;
    if ((uint64_t) $tmp994 >= 1) goto $l993; else goto $l984;
    $l996:;
    if ((uint64_t) $tmp994 > 1) goto $l993; else goto $l984;
    $l993:;
    i977.value += 1;
    goto $l982;
    $l984:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl999;
    panda$collections$Iterator* test$Iter1001;
    org$pandalanguage$pandac$MethodDecl* test1013;
    panda$collections$Iterator* raw$Iter1026;
    org$pandalanguage$pandac$Type* raw1038;
    org$pandalanguage$pandac$MethodDecl* result1043;
    org$pandalanguage$pandac$ClassDecl* $tmp1000 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl999 = $tmp1000;
    PANDA_ASSERT(((panda$core$Bit) { cl999 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl999);
    {
        ITable* $tmp1002 = ((panda$collections$Iterable*) cl999->methods)->$class->itable;
        while ($tmp1002->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1002 = $tmp1002->next;
        }
        $fn1004 $tmp1003 = $tmp1002->methods[0];
        panda$collections$Iterator* $tmp1005 = $tmp1003(((panda$collections$Iterable*) cl999->methods));
        test$Iter1001 = $tmp1005;
        $l1006:;
        ITable* $tmp1008 = test$Iter1001->$class->itable;
        while ($tmp1008->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1008 = $tmp1008->next;
        }
        $fn1010 $tmp1009 = $tmp1008->methods[0];
        panda$core$Bit $tmp1011 = $tmp1009(test$Iter1001);
        panda$core$Bit $tmp1012 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1011);
        if (!$tmp1012.value) goto $l1007;
        {
            ITable* $tmp1014 = test$Iter1001->$class->itable;
            while ($tmp1014->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1014 = $tmp1014->next;
            }
            $fn1016 $tmp1015 = $tmp1014->methods[1];
            panda$core$Object* $tmp1017 = $tmp1015(test$Iter1001);
            test1013 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1017);
            panda$core$Bit $tmp1018 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test1013)->name, p_name);
            if ($tmp1018.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test1013);
                org$pandalanguage$pandac$Type* $tmp1019 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test1013);
                org$pandalanguage$pandac$Type* $tmp1020 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp1019);
                panda$core$Bit $tmp1021 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1020, p_methodType);
                if ($tmp1021.value) {
                {
                    return test1013;
                }
                }
            }
            }
        }
        goto $l1006;
        $l1007:;
    }
    bool $tmp1022 = p_checkInterfaces.value;
    if ($tmp1022) goto $l1023;
    panda$core$Bit $tmp1024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl999->classKind->$rawValue, ((panda$core$Int64) { 1 }));
    $tmp1022 = $tmp1024.value;
    $l1023:;
    panda$core$Bit $tmp1025 = { $tmp1022 };
    if ($tmp1025.value) {
    {
        {
            ITable* $tmp1027 = ((panda$collections$Iterable*) cl999->rawInterfaces)->$class->itable;
            while ($tmp1027->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1027 = $tmp1027->next;
            }
            $fn1029 $tmp1028 = $tmp1027->methods[0];
            panda$collections$Iterator* $tmp1030 = $tmp1028(((panda$collections$Iterable*) cl999->rawInterfaces));
            raw$Iter1026 = $tmp1030;
            $l1031:;
            ITable* $tmp1033 = raw$Iter1026->$class->itable;
            while ($tmp1033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1033 = $tmp1033->next;
            }
            $fn1035 $tmp1034 = $tmp1033->methods[0];
            panda$core$Bit $tmp1036 = $tmp1034(raw$Iter1026);
            panda$core$Bit $tmp1037 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1036);
            if (!$tmp1037.value) goto $l1032;
            {
                ITable* $tmp1039 = raw$Iter1026->$class->itable;
                while ($tmp1039->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1039 = $tmp1039->next;
                }
                $fn1041 $tmp1040 = $tmp1039->methods[1];
                panda$core$Object* $tmp1042 = $tmp1040(raw$Iter1026);
                raw1038 = ((org$pandalanguage$pandac$Type*) $tmp1042);
                org$pandalanguage$pandac$Type* $tmp1044 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw1038);
                org$pandalanguage$pandac$MethodDecl* $tmp1045 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1044, p_name, p_methodType, p_checkInterfaces);
                result1043 = $tmp1045;
                if (((panda$core$Bit) { result1043 != NULL }).value) {
                {
                    return result1043;
                }
                }
            }
            goto $l1031;
            $l1032:;
        }
    }
    }
    if (((panda$core$Bit) { cl999->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1046 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl999->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1047 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1046, p_name, p_methodType, p_checkInterfaces);
        return $tmp1047;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1049;
    org$pandalanguage$pandac$Type* owner1051;
    panda$collections$Iterator* raw$Iter1053;
    org$pandalanguage$pandac$Type* raw1065;
    org$pandalanguage$pandac$MethodDecl* result1070;
    org$pandalanguage$pandac$MethodDecl* result1073;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    panda$core$Bit $tmp1048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1048.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1050 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1049 = $tmp1050;
    org$pandalanguage$pandac$Type* $tmp1052 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1051 = $tmp1052;
    {
        ITable* $tmp1054 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1054->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1054 = $tmp1054->next;
        }
        $fn1056 $tmp1055 = $tmp1054->methods[0];
        panda$collections$Iterator* $tmp1057 = $tmp1055(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1053 = $tmp1057;
        $l1058:;
        ITable* $tmp1060 = raw$Iter1053->$class->itable;
        while ($tmp1060->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1060 = $tmp1060->next;
        }
        $fn1062 $tmp1061 = $tmp1060->methods[0];
        panda$core$Bit $tmp1063 = $tmp1061(raw$Iter1053);
        panda$core$Bit $tmp1064 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1063);
        if (!$tmp1064.value) goto $l1059;
        {
            ITable* $tmp1066 = raw$Iter1053->$class->itable;
            while ($tmp1066->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1066 = $tmp1066->next;
            }
            $fn1068 $tmp1067 = $tmp1066->methods[1];
            panda$core$Object* $tmp1069 = $tmp1067(raw$Iter1053);
            raw1065 = ((org$pandalanguage$pandac$Type*) $tmp1069);
            org$pandalanguage$pandac$Type* $tmp1071 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1051, raw1065);
            org$pandalanguage$pandac$MethodDecl* $tmp1072 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1071, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1049, ((panda$core$Bit) { true }));
            result1070 = $tmp1072;
            if (((panda$core$Bit) { result1070 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1070;
                return result1070;
            }
            }
        }
        goto $l1058;
        $l1059:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1074 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1051, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1075 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1074, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1049, ((panda$core$Bit) { true }));
        result1073 = $tmp1075;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1073;
        return result1073;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1076;
    panda$collections$Array* result1078;
    panda$collections$Iterator* m$Iter1081;
    org$pandalanguage$pandac$MethodDecl* m1093;
    org$pandalanguage$pandac$MethodDecl* found1098;
    org$pandalanguage$pandac$ClassDecl* $tmp1077 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1076 = $tmp1077;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1076 != NULL }).value);
    panda$collections$Array* $tmp1079 = (panda$collections$Array*) malloc(40);
    $tmp1079->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1079->refCount.value = 1;
    panda$collections$Array$init($tmp1079);
    result1078 = $tmp1079;
    {
        ITable* $tmp1082 = ((panda$collections$Iterable*) intfClass1076->methods)->$class->itable;
        while ($tmp1082->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1082 = $tmp1082->next;
        }
        $fn1084 $tmp1083 = $tmp1082->methods[0];
        panda$collections$Iterator* $tmp1085 = $tmp1083(((panda$collections$Iterable*) intfClass1076->methods));
        m$Iter1081 = $tmp1085;
        $l1086:;
        ITable* $tmp1088 = m$Iter1081->$class->itable;
        while ($tmp1088->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1088 = $tmp1088->next;
        }
        $fn1090 $tmp1089 = $tmp1088->methods[0];
        panda$core$Bit $tmp1091 = $tmp1089(m$Iter1081);
        panda$core$Bit $tmp1092 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1091);
        if (!$tmp1092.value) goto $l1087;
        {
            ITable* $tmp1094 = m$Iter1081->$class->itable;
            while ($tmp1094->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1094 = $tmp1094->next;
            }
            $fn1096 $tmp1095 = $tmp1094->methods[1];
            panda$core$Object* $tmp1097 = $tmp1095(m$Iter1081);
            m1093 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1097);
            org$pandalanguage$pandac$Type* $tmp1099 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1100 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1093);
            org$pandalanguage$pandac$Type* $tmp1101 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1100);
            org$pandalanguage$pandac$MethodDecl* $tmp1102 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1099, ((org$pandalanguage$pandac$Symbol*) m1093)->name, $tmp1101, ((panda$core$Bit) { false }));
            found1098 = $tmp1102;
            PANDA_ASSERT(((panda$core$Bit) { found1098 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1078, ((panda$core$Object*) found1098));
        }
        goto $l1086;
        $l1087:;
    }
    return ((panda$collections$ListView*) result1078);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1104;
    panda$collections$Iterator* rawIntf$Iter1107;
    org$pandalanguage$pandac$Type* rawIntf1119;
    org$pandalanguage$pandac$ClassDecl* intf1124;
    panda$core$Bit $tmp1103 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1103.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1105 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1104 = $tmp1105;
            if (((panda$core$Bit) { superCl1104 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1106 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1104);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1106));
            }
            }
        }
        }
        {
            ITable* $tmp1108 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1108->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1108 = $tmp1108->next;
            }
            $fn1110 $tmp1109 = $tmp1108->methods[0];
            panda$collections$Iterator* $tmp1111 = $tmp1109(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1107 = $tmp1111;
            $l1112:;
            ITable* $tmp1114 = rawIntf$Iter1107->$class->itable;
            while ($tmp1114->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1114 = $tmp1114->next;
            }
            $fn1116 $tmp1115 = $tmp1114->methods[0];
            panda$core$Bit $tmp1117 = $tmp1115(rawIntf$Iter1107);
            panda$core$Bit $tmp1118 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1117);
            if (!$tmp1118.value) goto $l1113;
            {
                ITable* $tmp1120 = rawIntf$Iter1107->$class->itable;
                while ($tmp1120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1120 = $tmp1120->next;
                }
                $fn1122 $tmp1121 = $tmp1120->methods[1];
                panda$core$Object* $tmp1123 = $tmp1121(rawIntf$Iter1107);
                rawIntf1119 = ((org$pandalanguage$pandac$Type*) $tmp1123);
                org$pandalanguage$pandac$ClassDecl* $tmp1125 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1119);
                intf1124 = $tmp1125;
                if (((panda$core$Bit) { intf1124 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1126 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1124);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1126));
                }
                }
            }
            goto $l1112;
            $l1113:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1129;
    panda$collections$Iterator* derived$Iter1132;
    org$pandalanguage$pandac$MethodDecl* derived1144;
    panda$core$Bit found1154;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1155;
    org$pandalanguage$pandac$MethodDecl* base1170;
    panda$core$Int64 $tmp1127 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1127, ((panda$core$Int64) { 0 }));
    if ($tmp1128.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1130 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1129 = $tmp1130;
            if (((panda$core$Bit) { superCl1129 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1131 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1129);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1131));
        }
        }
        {
            ITable* $tmp1133 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1133->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1133 = $tmp1133->next;
            }
            $fn1135 $tmp1134 = $tmp1133->methods[0];
            panda$collections$Iterator* $tmp1136 = $tmp1134(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1132 = $tmp1136;
            $l1137:;
            ITable* $tmp1139 = derived$Iter1132->$class->itable;
            while ($tmp1139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1139 = $tmp1139->next;
            }
            $fn1141 $tmp1140 = $tmp1139->methods[0];
            panda$core$Bit $tmp1142 = $tmp1140(derived$Iter1132);
            panda$core$Bit $tmp1143 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1142);
            if (!$tmp1143.value) goto $l1138;
            {
                ITable* $tmp1145 = derived$Iter1132->$class->itable;
                while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1145 = $tmp1145->next;
                }
                $fn1147 $tmp1146 = $tmp1145->methods[1];
                panda$core$Object* $tmp1148 = $tmp1146(derived$Iter1132);
                derived1144 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1148);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1144);
                panda$core$Bit $tmp1150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1144->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
                bool $tmp1149 = $tmp1150.value;
                if ($tmp1149) goto $l1151;
                panda$core$Bit $tmp1152 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1144->annotations);
                $tmp1149 = $tmp1152.value;
                $l1151:;
                panda$core$Bit $tmp1153 = { $tmp1149 };
                if ($tmp1153.value) {
                {
                    goto $l1137;
                }
                }
                found1154 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1156 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1155, ((panda$core$Int64) { 0 }), $tmp1156, ((panda$core$Bit) { false }));
                int64_t $tmp1158 = $tmp1155.min.value;
                panda$core$Int64 i1157 = { $tmp1158 };
                int64_t $tmp1160 = $tmp1155.max.value;
                bool $tmp1161 = $tmp1155.inclusive.value;
                if ($tmp1161) goto $l1168; else goto $l1169;
                $l1168:;
                if ($tmp1158 <= $tmp1160) goto $l1162; else goto $l1164;
                $l1169:;
                if ($tmp1158 < $tmp1160) goto $l1162; else goto $l1164;
                $l1162:;
                {
                    panda$core$Object* $tmp1171 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1157);
                    base1170 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1171);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1170);
                    panda$core$Bit $tmp1172 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1144, base1170);
                    if ($tmp1172.value) {
                    {
                        found1154 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1157, ((panda$core$Object*) derived1144));
                        goto $l1164;
                    }
                    }
                }
                $l1165:;
                int64_t $tmp1174 = $tmp1160 - i1157.value;
                if ($tmp1161) goto $l1175; else goto $l1176;
                $l1175:;
                if ((uint64_t) $tmp1174 >= 1) goto $l1173; else goto $l1164;
                $l1176:;
                if ((uint64_t) $tmp1174 > 1) goto $l1173; else goto $l1164;
                $l1173:;
                i1157.value += 1;
                goto $l1162;
                $l1164:;
                panda$core$Bit $tmp1179 = panda$core$Bit$$NOT$R$panda$core$Bit(found1154);
                if ($tmp1179.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1144));
                }
                }
            }
            goto $l1137;
            $l1138:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1180;
    org$pandalanguage$pandac$Symbol* s1183;
    panda$collections$Iterator* m$Iter1189;
    org$pandalanguage$pandac$MethodDecl* m1201;
    panda$collections$Iterator* p$Iter1208;
    org$pandalanguage$pandac$SymbolTable* p1220;
    panda$collections$Array* children1225;
    panda$collections$Array* types1237;
    panda$collections$Iterator* m$Iter1240;
    org$pandalanguage$pandac$MethodRef* m1252;
    panda$collections$Array* $tmp1181 = (panda$collections$Array*) malloc(40);
    $tmp1181->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1181->refCount.value = 1;
    panda$collections$Array$init($tmp1181);
    methods1180 = $tmp1181;
    org$pandalanguage$pandac$Symbol* $tmp1184 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1183 = $tmp1184;
    PANDA_ASSERT(((panda$core$Bit) { s1183 != NULL }).value);
    panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1183->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1185.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1183));
        org$pandalanguage$pandac$MethodRef* $tmp1186 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1186->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1186->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1186, ((org$pandalanguage$pandac$MethodDecl*) s1183), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1180, ((panda$core$Object*) $tmp1186));
    }
    }
    else {
    {
        panda$core$Bit $tmp1188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1183->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1188.value);
        {
            ITable* $tmp1190 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1183)->methods)->$class->itable;
            while ($tmp1190->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1190 = $tmp1190->next;
            }
            $fn1192 $tmp1191 = $tmp1190->methods[0];
            panda$collections$Iterator* $tmp1193 = $tmp1191(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1183)->methods));
            m$Iter1189 = $tmp1193;
            $l1194:;
            ITable* $tmp1196 = m$Iter1189->$class->itable;
            while ($tmp1196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1196 = $tmp1196->next;
            }
            $fn1198 $tmp1197 = $tmp1196->methods[0];
            panda$core$Bit $tmp1199 = $tmp1197(m$Iter1189);
            panda$core$Bit $tmp1200 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1199);
            if (!$tmp1200.value) goto $l1195;
            {
                ITable* $tmp1202 = m$Iter1189->$class->itable;
                while ($tmp1202->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1202 = $tmp1202->next;
                }
                $fn1204 $tmp1203 = $tmp1202->methods[1];
                panda$core$Object* $tmp1205 = $tmp1203(m$Iter1189);
                m1201 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1205);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1201);
                org$pandalanguage$pandac$MethodRef* $tmp1206 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1206->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1206->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1206, m1201, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1180, ((panda$core$Object*) $tmp1206));
            }
            goto $l1194;
            $l1195:;
        }
    }
    }
    {
        ITable* $tmp1209 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1209->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1209 = $tmp1209->next;
        }
        $fn1211 $tmp1210 = $tmp1209->methods[0];
        panda$collections$Iterator* $tmp1212 = $tmp1210(((panda$collections$Iterable*) p_st->parents));
        p$Iter1208 = $tmp1212;
        $l1213:;
        ITable* $tmp1215 = p$Iter1208->$class->itable;
        while ($tmp1215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1215 = $tmp1215->next;
        }
        $fn1217 $tmp1216 = $tmp1215->methods[0];
        panda$core$Bit $tmp1218 = $tmp1216(p$Iter1208);
        panda$core$Bit $tmp1219 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1218);
        if (!$tmp1219.value) goto $l1214;
        {
            ITable* $tmp1221 = p$Iter1208->$class->itable;
            while ($tmp1221->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1221 = $tmp1221->next;
            }
            $fn1223 $tmp1222 = $tmp1221->methods[1];
            panda$core$Object* $tmp1224 = $tmp1222(p$Iter1208);
            p1220 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1224);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1220, p_name, methods1180, p_types);
        }
        goto $l1213;
        $l1214:;
    }
    panda$collections$Array* $tmp1226 = (panda$collections$Array*) malloc(40);
    $tmp1226->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1226->refCount.value = 1;
    panda$collections$Array$init($tmp1226);
    children1225 = $tmp1226;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1225, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1228 = panda$collections$Array$get_count$R$panda$core$Int64(methods1180);
    panda$core$Bit $tmp1229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1228, ((panda$core$Int64) { 1 }));
    if ($tmp1229.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1230 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1230->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1230->refCount.value = 1;
        panda$core$Object* $tmp1232 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1180, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1233 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1232));
        panda$core$Object* $tmp1234 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1180, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1230, ((panda$core$Int64) { 1002 }), p_position, $tmp1233, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1234)), ((panda$collections$ListView*) children1225));
        return $tmp1230;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1235 = panda$collections$Array$get_count$R$panda$core$Int64(methods1180);
        panda$core$Bit $tmp1236 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1235, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1236.value);
        panda$collections$Array* $tmp1238 = (panda$collections$Array*) malloc(40);
        $tmp1238->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1238->refCount.value = 1;
        panda$collections$Array$init($tmp1238);
        types1237 = $tmp1238;
        {
            ITable* $tmp1241 = ((panda$collections$Iterable*) methods1180)->$class->itable;
            while ($tmp1241->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1241 = $tmp1241->next;
            }
            $fn1243 $tmp1242 = $tmp1241->methods[0];
            panda$collections$Iterator* $tmp1244 = $tmp1242(((panda$collections$Iterable*) methods1180));
            m$Iter1240 = $tmp1244;
            $l1245:;
            ITable* $tmp1247 = m$Iter1240->$class->itable;
            while ($tmp1247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1247 = $tmp1247->next;
            }
            $fn1249 $tmp1248 = $tmp1247->methods[0];
            panda$core$Bit $tmp1250 = $tmp1248(m$Iter1240);
            panda$core$Bit $tmp1251 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1250);
            if (!$tmp1251.value) goto $l1246;
            {
                ITable* $tmp1253 = m$Iter1240->$class->itable;
                while ($tmp1253->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1253 = $tmp1253->next;
                }
                $fn1255 $tmp1254 = $tmp1253->methods[1];
                panda$core$Object* $tmp1256 = $tmp1254(m$Iter1240);
                m1252 = ((org$pandalanguage$pandac$MethodRef*) $tmp1256);
                org$pandalanguage$pandac$Type* $tmp1257 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1252);
                panda$collections$Array$add$panda$collections$Array$T(types1237, ((panda$core$Object*) $tmp1257));
            }
            goto $l1245;
            $l1246:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1258 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1258->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1258->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1260 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1260->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1260->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1260, ((panda$collections$ListView*) types1237));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1258, ((panda$core$Int64) { 1003 }), p_position, $tmp1260, ((panda$core$Object*) methods1180), ((panda$collections$ListView*) children1225));
        return $tmp1258;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1262;
    org$pandalanguage$pandac$FieldDecl* f1278;
    panda$collections$Array* children1281;
    org$pandalanguage$pandac$Type* effectiveType1286;
    org$pandalanguage$pandac$IRNode* result1291;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1263 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1262 = $tmp1263;
            if (((panda$core$Bit) { cl1262 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1264 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1262);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1262, $tmp1264);
                org$pandalanguage$pandac$IRNode* $tmp1265 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1265->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1265->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1267 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1268 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1262);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1265, ((panda$core$Int64) { 1001 }), p_position, $tmp1267, $tmp1268);
                return $tmp1265;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1269 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1269);
            org$pandalanguage$pandac$IRNode* $tmp1270 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1270->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1270->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1272 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1273 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1270, ((panda$core$Int64) { 1001 }), p_position, $tmp1272, $tmp1273);
            return $tmp1270;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1274 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1275 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1274);
            return $tmp1275;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1276 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1276->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1276->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1276, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1276;
        }
        break;
        case 202:
        {
            f1278 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1278);
            org$pandalanguage$pandac$Type* $tmp1279 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1280 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1278->type, $tmp1279);
            if ($tmp1280.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1282 = (panda$collections$Array*) malloc(40);
            $tmp1282->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1282->refCount.value = 1;
            panda$collections$Array$init($tmp1282);
            children1281 = $tmp1282;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1284.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1285);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1287 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1278->type);
                effectiveType1286 = $tmp1287;
                panda$core$Bit $tmp1288 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1278->annotations);
                if ($tmp1288.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1281, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1289 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1278->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1290 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1289);
                    panda$collections$Array$add$panda$collections$Array$T(children1281, ((panda$core$Object*) $tmp1290));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1292 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1292->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1292->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1292, ((panda$core$Int64) { 1026 }), p_position, f1278->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1281));
                result1291 = $tmp1292;
                panda$core$Bit $tmp1294 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1286, result1291->type);
                if ($tmp1294.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1295 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1291, p_position, ((panda$core$Bit) { false }), effectiveType1286);
                    result1291 = $tmp1295;
                }
                }
                return result1291;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1296 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1296->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1296->refCount.value = 1;
                panda$core$Object* $tmp1298 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1299 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1298));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1296, ((panda$core$Int64) { 1025 }), p_position, $tmp1299);
                panda$collections$Array$add$panda$collections$Array$T(children1281, ((panda$core$Object*) $tmp1296));
                org$pandalanguage$pandac$IRNode* $tmp1300 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1300->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1300->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1300, ((panda$core$Int64) { 1026 }), p_position, f1278->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1281));
                return $tmp1300;
            }
            }
        }
        break;
        case 209:
        {
            org$pandalanguage$pandac$IRNode* $tmp1302 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1302->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1302->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1304 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Symbol($tmp1302, ((panda$core$Int64) { 1046 }), p_position, $tmp1304, p_s);
            return $tmp1302;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_context, org$pandalanguage$pandac$Type* p_raw) {
    panda$collections$HashMap* typeMap1311;
    org$pandalanguage$pandac$Type* base1314;
    org$pandalanguage$pandac$ClassDecl* cl1316;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1318;
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
            panda$core$Int64 $tmp1305 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1305, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1306.value);
            panda$core$Object* $tmp1307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1308 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1307), p_raw);
            return $tmp1308;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1309 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1310 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1309, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1310.value);
            panda$collections$HashMap* $tmp1312 = (panda$collections$HashMap*) malloc(56);
            $tmp1312->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1312->refCount.value = 1;
            panda$collections$HashMap$init($tmp1312);
            typeMap1311 = $tmp1312;
            panda$core$Object* $tmp1315 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1314 = ((org$pandalanguage$pandac$Type*) $tmp1315);
            org$pandalanguage$pandac$ClassDecl* $tmp1317 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1314)->name);
            cl1316 = $tmp1317;
            PANDA_ASSERT(((panda$core$Bit) { cl1316 != NULL }).value);
            panda$core$Int64 $tmp1319 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1318, ((panda$core$Int64) { 1 }), $tmp1319, ((panda$core$Bit) { false }));
            int64_t $tmp1321 = $tmp1318.min.value;
            panda$core$Int64 i1320 = { $tmp1321 };
            int64_t $tmp1323 = $tmp1318.max.value;
            bool $tmp1324 = $tmp1318.inclusive.value;
            if ($tmp1324) goto $l1331; else goto $l1332;
            $l1331:;
            if ($tmp1321 <= $tmp1323) goto $l1325; else goto $l1327;
            $l1332:;
            if ($tmp1321 < $tmp1323) goto $l1325; else goto $l1327;
            $l1325:;
            {
                panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1316)->name, &$s1333);
                panda$core$Int64 $tmp1335 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1320, ((panda$core$Int64) { 1 }));
                ITable* $tmp1336 = ((panda$collections$ListView*) cl1316->parameters)->$class->itable;
                while ($tmp1336->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1336 = $tmp1336->next;
                }
                $fn1338 $tmp1337 = $tmp1336->methods[0];
                panda$core$Object* $tmp1339 = $tmp1337(((panda$collections$ListView*) cl1316->parameters), $tmp1335);
                panda$core$String* $tmp1340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1334, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1339))->name);
                panda$core$Object* $tmp1341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1320);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1311, ((panda$collections$Key*) $tmp1340), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1341)));
            }
            $l1328:;
            int64_t $tmp1343 = $tmp1323 - i1320.value;
            if ($tmp1324) goto $l1344; else goto $l1345;
            $l1344:;
            if ((uint64_t) $tmp1343 >= 1) goto $l1342; else goto $l1327;
            $l1345:;
            if ((uint64_t) $tmp1343 > 1) goto $l1342; else goto $l1327;
            $l1342:;
            i1320.value += 1;
            goto $l1325;
            $l1327:;
            org$pandalanguage$pandac$Type* $tmp1348 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1311);
            return $tmp1348;
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
    panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp1349.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1350;
    }
    }
    panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 26 }));
    if ($tmp1351.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
        return $tmp1352;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1353 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1354 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1353);
    if ($tmp1354.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1355 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1355;
    }
    }
    panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1356.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1357 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1357;
    }
    }
    return p_type;
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char) {
    panda$core$Int32 c1361;
    panda$core$Bit $tmp1358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_char->kind, ((panda$core$Int64) { 1033 }));
    PANDA_ASSERT($tmp1358.value);
    panda$core$Int64 $tmp1359 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_char->payload));
    panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1359, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1360.value);
    panda$core$Char32 $tmp1362 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_char->payload), ((panda$core$Int64) { 0 }));
    panda$core$Int32 $tmp1363 = panda$core$Char32$convert$R$panda$core$Int32($tmp1362);
    c1361 = $tmp1363;
    panda$core$Bit $tmp1364 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1361, ((panda$core$Int32) { 255 }));
    if ($tmp1364.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1365 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1361, ((panda$core$Int32) { 65535 }));
    if ($tmp1365.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    return ((panda$core$Int64) { 32 });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char, org$pandalanguage$pandac$IRNode* p_other) {
    panda$core$Int64 result1366;
    org$pandalanguage$pandac$Type* $match$1044_91376;
    panda$core$Int64 $tmp1367 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_char);
    result1366 = $tmp1367;
    panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1368 = $tmp1369.value;
    if (!$tmp1368) goto $l1370;
    panda$core$Int64 $tmp1371 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_other->payload));
    panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1371, ((panda$core$Int64) { 1 }));
    $tmp1368 = $tmp1372.value;
    $l1370:;
    panda$core$Bit $tmp1373 = { $tmp1368 };
    if ($tmp1373.value) {
    {
        panda$core$Int64 $tmp1374 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_other);
        panda$core$Int64 $tmp1375 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1366, $tmp1374);
        result1366 = $tmp1375;
    }
    }
    {
        $match$1044_91376 = p_other->type;
        org$pandalanguage$pandac$Type* $tmp1377 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1378 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1044_91376, $tmp1377);
        if ($tmp1378.value) {
        {
            panda$core$Int64 $tmp1379 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1366, ((panda$core$Int64) { 16 }));
            result1366 = $tmp1379;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp1380 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1381 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1044_91376, $tmp1380);
        if ($tmp1381.value) {
        {
            panda$core$Int64 $tmp1382 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1366, ((panda$core$Int64) { 32 }));
            result1366 = $tmp1382;
        }
        }
        }
    }
    switch (result1366.value) {
        case 8:
        {
            org$pandalanguage$pandac$Type* $tmp1383 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            return $tmp1383;
        }
        break;
        case 16:
        {
            org$pandalanguage$pandac$Type* $tmp1384 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            return $tmp1384;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$Type* $tmp1385 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            return $tmp1385;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* start1386;
    org$pandalanguage$pandac$Type* end1399;
    org$pandalanguage$pandac$Type* step1432;
    panda$collections$ImmutableArray* args1472;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1473;
    org$pandalanguage$pandac$IRNode* c1475;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1388)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1387 = $tmp1389.value;
            if (!$tmp1387) goto $l1390;
            panda$core$Object* $tmp1391 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp1392 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1391)->payload));
            panda$core$Bit $tmp1393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1392, ((panda$core$Int64) { 1 }));
            $tmp1387 = $tmp1393.value;
            $l1390:;
            panda$core$Bit $tmp1394 = { $tmp1387 };
            if ($tmp1394.value) {
            {
                panda$core$Object* $tmp1395 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1396 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1397 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1395), ((org$pandalanguage$pandac$IRNode*) $tmp1396));
                start1386 = $tmp1397;
            }
            }
            else {
            {
                panda$core$Object* $tmp1398 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                start1386 = ((org$pandalanguage$pandac$IRNode*) $tmp1398)->type;
            }
            }
            panda$core$Object* $tmp1401 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1401)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1400 = $tmp1402.value;
            if (!$tmp1400) goto $l1403;
            panda$core$Object* $tmp1404 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1405 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1404)->payload));
            panda$core$Bit $tmp1406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1405, ((panda$core$Int64) { 1 }));
            $tmp1400 = $tmp1406.value;
            $l1403:;
            panda$core$Bit $tmp1407 = { $tmp1400 };
            if ($tmp1407.value) {
            {
                panda$core$Object* $tmp1408 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1409 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1410 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1408), ((org$pandalanguage$pandac$IRNode*) $tmp1409));
                end1399 = $tmp1410;
            }
            }
            else {
            {
                panda$core$Object* $tmp1411 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                end1399 = ((org$pandalanguage$pandac$IRNode*) $tmp1411)->type;
            }
            }
            panda$core$Int64 $tmp1412 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1412, ((panda$core$Int64) { 2 }));
            if ($tmp1413.value) {
            {
                panda$core$Object* $tmp1414 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1414)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1415.value) {
                {
                    panda$core$Object* $tmp1416 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1416)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1417.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1418 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1419 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1418);
                        org$pandalanguage$pandac$Type* $tmp1420 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1419);
                        return $tmp1420;
                    }
                    }
                    org$pandalanguage$pandac$Type* $tmp1421 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1399);
                    org$pandalanguage$pandac$Type* $tmp1422 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1421);
                    org$pandalanguage$pandac$Type* $tmp1423 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1422);
                    return $tmp1423;
                }
                }
                panda$core$Object* $tmp1424 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1424)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1425.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1426 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1386);
                    org$pandalanguage$pandac$Type* $tmp1427 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1426);
                    org$pandalanguage$pandac$Type* $tmp1428 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1427);
                    return $tmp1428;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1429 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1386, self, end1399);
                org$pandalanguage$pandac$Type* $tmp1430 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1429);
                org$pandalanguage$pandac$Type* $tmp1431 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1430);
                return $tmp1431;
            }
            }
            panda$core$Object* $tmp1433 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1434 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$IRNode*) $tmp1433)->type);
            step1432 = $tmp1434;
            panda$core$Object* $tmp1435 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1435)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1436.value) {
            {
                panda$core$Object* $tmp1437 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1437)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1438.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1439 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, step1432);
                    org$pandalanguage$pandac$Type* $tmp1440 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1439);
                    org$pandalanguage$pandac$Type* $tmp1441 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1440);
                    return $tmp1441;
                }
                }
                panda$core$Bit $tmp1442 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1399);
                if ($tmp1442.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1443 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1399);
                    org$pandalanguage$pandac$Type* $tmp1444 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1443);
                    org$pandalanguage$pandac$Type* $tmp1445 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1444);
                    return $tmp1445;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1446 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(end1399, self, step1432);
                org$pandalanguage$pandac$Type* $tmp1447 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1446);
                org$pandalanguage$pandac$Type* $tmp1448 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1447);
                org$pandalanguage$pandac$Type* $tmp1449 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1448);
                return $tmp1449;
            }
            }
            panda$core$Object* $tmp1450 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1450)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1451.value) {
            {
                panda$core$Bit $tmp1452 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1386);
                if ($tmp1452.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1453 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1386);
                    org$pandalanguage$pandac$Type* $tmp1454 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1453);
                    org$pandalanguage$pandac$Type* $tmp1455 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1454);
                    return $tmp1455;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1456 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1386, self, step1432);
                org$pandalanguage$pandac$Type* $tmp1457 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1456);
                org$pandalanguage$pandac$Type* $tmp1458 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1457);
                org$pandalanguage$pandac$Type* $tmp1459 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1458);
                return $tmp1459;
            }
            }
            panda$core$Bit $tmp1461 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1386);
            bool $tmp1460 = $tmp1461.value;
            if (!$tmp1460) goto $l1462;
            panda$core$Bit $tmp1463 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1399);
            $tmp1460 = $tmp1463.value;
            $l1462:;
            panda$core$Bit $tmp1464 = { $tmp1460 };
            if ($tmp1464.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1465 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1386, self, end1399);
                org$pandalanguage$pandac$Type* $tmp1466 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1465);
                org$pandalanguage$pandac$Type* $tmp1467 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1466);
                return $tmp1467;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1468 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1386, self, end1399);
            org$pandalanguage$pandac$Type* $tmp1469 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1468, self, step1432);
            org$pandalanguage$pandac$Type* $tmp1470 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1469);
            org$pandalanguage$pandac$Type* $tmp1471 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1470);
            return $tmp1471;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1473, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1474 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1473);
            args1472 = $tmp1474;
            panda$core$Object* $tmp1476 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1478 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1476), &$s1477, ((panda$collections$ListView*) args1472));
            c1475 = $tmp1478;
            if (((panda$core$Bit) { c1475 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1479 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1479;
            }
            }
            return c1475->type;
        }
        break;
        case 1046:
        {
            org$pandalanguage$pandac$Type* $tmp1480 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload)->owner);
            return $tmp1480;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1481 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1481;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1492;
    panda$core$Int64$nullable result1496;
    panda$core$Int64$nullable best1505;
    panda$collections$Iterator* t$Iter1506;
    org$pandalanguage$pandac$Type* t1518;
    panda$core$Int64$nullable cost1523;
    org$pandalanguage$pandac$ClassDecl* cl1537;
    panda$core$Int64$nullable cost1539;
    panda$collections$Iterator* intf$Iter1544;
    org$pandalanguage$pandac$Type* intf1556;
    panda$core$Int64$nullable cost1561;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1482 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1482.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1483 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1484 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1483);
    if ($tmp1484.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1485.value) {
    {
        panda$core$Bit $tmp1486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1486.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1487 = $tmp1488.value;
    if (!$tmp1487) goto $l1489;
    panda$core$Bit $tmp1490 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1487 = $tmp1490.value;
    $l1489:;
    panda$core$Bit $tmp1491 = { $tmp1487 };
    if ($tmp1491.value) {
    {
        panda$core$Object* $tmp1493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1494 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1493), p_target);
        result1492 = $tmp1494;
        if (((panda$core$Bit) { !result1492.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1495 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1492.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1495, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1498 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1497));
            result1496 = $tmp1498;
            if (((panda$core$Bit) { !result1496.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1499 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1496.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1499, true });
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
            panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1500.value) {
            {
                panda$core$Object* $tmp1501 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1502 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1501), p_target);
                return $tmp1502;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1503 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1504 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1503, p_target);
            return $tmp1504;
        }
        break;
        case 17:
        {
            best1505 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1507 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1507->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1507 = $tmp1507->next;
                }
                $fn1509 $tmp1508 = $tmp1507->methods[0];
                panda$collections$Iterator* $tmp1510 = $tmp1508(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1506 = $tmp1510;
                $l1511:;
                ITable* $tmp1513 = t$Iter1506->$class->itable;
                while ($tmp1513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1513 = $tmp1513->next;
                }
                $fn1515 $tmp1514 = $tmp1513->methods[0];
                panda$core$Bit $tmp1516 = $tmp1514(t$Iter1506);
                panda$core$Bit $tmp1517 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1516);
                if (!$tmp1517.value) goto $l1512;
                {
                    ITable* $tmp1519 = t$Iter1506->$class->itable;
                    while ($tmp1519->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1519 = $tmp1519->next;
                    }
                    $fn1521 $tmp1520 = $tmp1519->methods[1];
                    panda$core$Object* $tmp1522 = $tmp1520(t$Iter1506);
                    t1518 = ((org$pandalanguage$pandac$Type*) $tmp1522);
                    panda$core$Int64$nullable $tmp1524 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1518, p_target);
                    cost1523 = $tmp1524;
                    bool $tmp1525 = ((panda$core$Bit) { cost1523.nonnull }).value;
                    if (!$tmp1525) goto $l1526;
                    bool $tmp1527 = ((panda$core$Bit) { !best1505.nonnull }).value;
                    if ($tmp1527) goto $l1528;
                    panda$core$Bit $tmp1529 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1523.value), ((panda$core$Int64) best1505.value));
                    $tmp1527 = $tmp1529.value;
                    $l1528:;
                    panda$core$Bit $tmp1530 = { $tmp1527 };
                    $tmp1525 = $tmp1530.value;
                    $l1526:;
                    panda$core$Bit $tmp1531 = { $tmp1525 };
                    if ($tmp1531.value) {
                    {
                        best1505 = cost1523;
                    }
                    }
                }
                goto $l1511;
                $l1512:;
            }
            return best1505;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1532 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1532;
        }
        break;
    }
    panda$core$Bit $tmp1533 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1534 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1533);
    if ($tmp1534.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1535 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1536 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1535);
    if ($tmp1536.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1538 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1537 = $tmp1538;
    PANDA_ASSERT(((panda$core$Bit) { cl1537 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1537);
    if (((panda$core$Bit) { cl1537->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1540 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1537->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1541 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1540);
        panda$core$Int64$nullable $tmp1542 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1541, p_target);
        cost1539 = $tmp1542;
        if (((panda$core$Bit) { cost1539.nonnull }).value) {
        {
            panda$core$Int64 $tmp1543 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1539.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1543, true });
        }
        }
    }
    }
    {
        ITable* $tmp1545 = ((panda$collections$Iterable*) cl1537->rawInterfaces)->$class->itable;
        while ($tmp1545->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1545 = $tmp1545->next;
        }
        $fn1547 $tmp1546 = $tmp1545->methods[0];
        panda$collections$Iterator* $tmp1548 = $tmp1546(((panda$collections$Iterable*) cl1537->rawInterfaces));
        intf$Iter1544 = $tmp1548;
        $l1549:;
        ITable* $tmp1551 = intf$Iter1544->$class->itable;
        while ($tmp1551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1551 = $tmp1551->next;
        }
        $fn1553 $tmp1552 = $tmp1551->methods[0];
        panda$core$Bit $tmp1554 = $tmp1552(intf$Iter1544);
        panda$core$Bit $tmp1555 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1554);
        if (!$tmp1555.value) goto $l1550;
        {
            ITable* $tmp1557 = intf$Iter1544->$class->itable;
            while ($tmp1557->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1557 = $tmp1557->next;
            }
            $fn1559 $tmp1558 = $tmp1557->methods[1];
            panda$core$Object* $tmp1560 = $tmp1558(intf$Iter1544);
            intf1556 = ((org$pandalanguage$pandac$Type*) $tmp1560);
            org$pandalanguage$pandac$Type* $tmp1562 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1556);
            org$pandalanguage$pandac$Type* $tmp1563 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1562);
            panda$core$Int64$nullable $tmp1564 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1563, p_target);
            cost1561 = $tmp1564;
            if (((panda$core$Bit) { cost1561.nonnull }).value) {
            {
                panda$core$Int64 $tmp1565 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1561.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1565, true });
            }
            }
        }
        goto $l1549;
        $l1550:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1567 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1566 = $tmp1567.value;
    if (!$tmp1566) goto $l1568;
    panda$core$Bit $tmp1569 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1566 = $tmp1569.value;
    $l1568:;
    panda$core$Bit $tmp1570 = { $tmp1566 };
    if ($tmp1570.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1572 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1571 = $tmp1572.value;
    if (!$tmp1571) goto $l1573;
    panda$core$Bit $tmp1574 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1571 = $tmp1574.value;
    $l1573:;
    panda$core$Bit $tmp1575 = { $tmp1571 };
    if ($tmp1575.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1577 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1576 = $tmp1577.value;
    if (!$tmp1576) goto $l1578;
    panda$core$Bit $tmp1579 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1576 = $tmp1579.value;
    $l1578:;
    panda$core$Bit $tmp1580 = { $tmp1576 };
    if ($tmp1580.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1581 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1581.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1582 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1582.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1583 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1583.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 base1584;
    panda$core$Int64$nullable cost1598;
    panda$core$String* s1658;
    panda$collections$Iterator* utf161669;
    panda$collections$ListView* methods1688;
    panda$collections$ImmutableArray* args1690;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1691;
    panda$core$Int64$nullable bestCost1693;
    panda$collections$Iterator* m$Iter1694;
    org$pandalanguage$pandac$MethodRef* m1706;
    panda$core$Int64$nullable cost1711;
    panda$core$Int64$nullable cost11734;
    panda$core$Int64$nullable cost21738;
    panda$core$Int64 cost1747;
    panda$core$Int64$nullable cost11761;
    panda$core$Int64$nullable cost21765;
    panda$core$Int64$nullable cost31770;
    panda$collections$Array* args1778;
    org$pandalanguage$pandac$ClassDecl* targetClass1791;
    panda$collections$Iterator* m$Iter1793;
    org$pandalanguage$pandac$MethodDecl* m1805;
    panda$core$Int64$nullable cost1817;
    panda$core$Int64$nullable cost1822;
    base1584 = ((panda$core$Int64) { 0 });
    panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1586 = $tmp1587.value;
    if (!$tmp1586) goto $l1588;
    panda$core$Bit $tmp1589 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1590 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1589);
    $tmp1586 = $tmp1590.value;
    $l1588:;
    panda$core$Bit $tmp1591 = { $tmp1586 };
    bool $tmp1585 = $tmp1591.value;
    if (!$tmp1585) goto $l1592;
    panda$core$Int64 $tmp1593 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
    panda$core$Bit $tmp1594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1593, ((panda$core$Int64) { 1 }));
    $tmp1585 = $tmp1594.value;
    $l1592:;
    panda$core$Bit $tmp1595 = { $tmp1585 };
    if ($tmp1595.value) {
    {
        base1584 = ((panda$core$Int64) { 3 });
    }
    }
    panda$core$Bit $tmp1596 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1596.value) {
    {
        return ((panda$core$Int64$nullable) { base1584, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1597.value) {
            {
                return ((panda$core$Int64$nullable) { base1584, true });
            }
            }
            panda$core$Object* $tmp1599 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1600 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1599));
            cost1598 = $tmp1600;
            if (((panda$core$Bit) { !cost1598.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1601.value) {
            {
                panda$core$Int64 $tmp1602 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1584, ((panda$core$Int64) cost1598.value));
                return ((panda$core$Int64$nullable) { $tmp1602, true });
            }
            }
            panda$core$Int64 $tmp1603 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1584, ((panda$core$Int64) cost1598.value));
            panda$core$Int64 $tmp1604 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1603, ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1604, true });
        }
        break;
        case 22:
        {
            panda$core$Bit $tmp1605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1584, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1605.value);
            panda$core$Int64$nullable $tmp1606 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1606;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1607.value) {
            {
                return ((panda$core$Int64$nullable) { base1584, true });
            }
            }
            panda$core$Bit $tmp1608 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1608.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1609 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1610 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1609, p_target);
                return $tmp1610;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1612 = $tmp1613.value;
            if (!$tmp1612) goto $l1614;
            panda$core$Int64 $tmp1615 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1616 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1615);
            panda$core$Int64 $tmp1617 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1618 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1616, $tmp1617);
            $tmp1612 = $tmp1618.value;
            $l1614:;
            panda$core$Bit $tmp1619 = { $tmp1612 };
            bool $tmp1611 = $tmp1619.value;
            if ($tmp1611) goto $l1620;
            panda$core$Bit $tmp1622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1621 = $tmp1622.value;
            if (!$tmp1621) goto $l1623;
            panda$core$Int64 $tmp1624 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1625 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1626 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1624, $tmp1625);
            $tmp1621 = $tmp1626.value;
            $l1623:;
            panda$core$Bit $tmp1627 = { $tmp1621 };
            $tmp1611 = $tmp1627.value;
            $l1620:;
            panda$core$Bit $tmp1628 = { $tmp1611 };
            if ($tmp1628.value) {
            {
                return ((panda$core$Int64$nullable) { base1584, true });
            }
            }
            panda$core$Bit $tmp1629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1629.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1630 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1631 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1630);
            if ($tmp1631.value) {
            {
                panda$core$Bit $tmp1632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1584, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1632.value);
                org$pandalanguage$pandac$Type* $tmp1633 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1634 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1633, p_target);
                return $tmp1634;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1635 = $tmp1636.value;
            if (!$tmp1635) goto $l1637;
            panda$core$Int64 $tmp1638 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1639 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1638);
            panda$core$Int64 $tmp1640 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1639);
            panda$core$Int64 $tmp1641 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1642 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1640, $tmp1641);
            $tmp1635 = $tmp1642.value;
            $l1637:;
            panda$core$Bit $tmp1643 = { $tmp1635 };
            if ($tmp1643.value) {
            {
                return ((panda$core$Int64$nullable) { base1584, true });
            }
            }
            panda$core$Bit $tmp1644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1644.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1645 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1645);
            if ($tmp1646.value) {
            {
                panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1584, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1647.value);
                org$pandalanguage$pandac$Type* $tmp1648 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1649 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1648, p_target);
                return $tmp1649;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1650.value) {
            {
                return ((panda$core$Int64$nullable) { base1584, true });
            }
            }
            panda$core$Bit $tmp1651 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1652 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1651);
            if ($tmp1652.value) {
            {
                panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1584, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1653.value);
                org$pandalanguage$pandac$Type* $tmp1654 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1655 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1654, p_target);
                return $tmp1655;
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1656 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1657 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1656);
            if ($tmp1657.value) {
            {
                s1658 = ((panda$core$String*) p_expr->payload);
                panda$core$Int64 $tmp1660 = panda$core$String$length$R$panda$core$Int64(s1658);
                panda$core$Bit $tmp1661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1660, ((panda$core$Int64) { 1 }));
                bool $tmp1659 = $tmp1661.value;
                if (!$tmp1659) goto $l1662;
                panda$core$Char32 $tmp1663 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(s1658, ((panda$core$Int64) { 0 }));
                panda$core$UInt32 $tmp1664 = panda$core$Char32$convert$R$panda$core$UInt32($tmp1663);
                panda$core$Bit $tmp1665 = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit($tmp1664, ((panda$core$UInt32) { 255 }));
                $tmp1659 = $tmp1665.value;
                $l1662:;
                panda$core$Bit $tmp1666 = { $tmp1659 };
                if ($tmp1666.value) {
                {
                    return ((panda$core$Int64$nullable) { base1584, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1667 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1668 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1667);
            if ($tmp1668.value) {
            {
                panda$collections$Iterator* $tmp1670 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                utf161669 = $tmp1670;
                ITable* $tmp1671 = utf161669->$class->itable;
                while ($tmp1671->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1671 = $tmp1671->next;
                }
                $fn1673 $tmp1672 = $tmp1671->methods[0];
                panda$core$Bit $tmp1674 = $tmp1672(utf161669);
                if ($tmp1674.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1675 = utf161669->$class->itable;
                while ($tmp1675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1675 = $tmp1675->next;
                }
                $fn1677 $tmp1676 = $tmp1675->methods[1];
                $tmp1676(utf161669);
                ITable* $tmp1678 = utf161669->$class->itable;
                while ($tmp1678->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1678 = $tmp1678->next;
                }
                $fn1680 $tmp1679 = $tmp1678->methods[0];
                panda$core$Bit $tmp1681 = $tmp1679(utf161669);
                if ($tmp1681.value) {
                {
                    panda$core$Int64 $tmp1682 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1584, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1682, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1683 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1684 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1683);
            if ($tmp1684.value) {
            {
                panda$core$Int64 $tmp1685 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
                panda$core$Bit $tmp1686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1685, ((panda$core$Int64) { 1 }));
                if ($tmp1686.value) {
                {
                    panda$core$Int64 $tmp1687 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1584, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1687, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1689 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1688 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1689)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1691, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1692 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1691);
            args1690 = $tmp1692;
            bestCost1693 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1695 = ((panda$collections$Iterable*) methods1688)->$class->itable;
                while ($tmp1695->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1695 = $tmp1695->next;
                }
                $fn1697 $tmp1696 = $tmp1695->methods[0];
                panda$collections$Iterator* $tmp1698 = $tmp1696(((panda$collections$Iterable*) methods1688));
                m$Iter1694 = $tmp1698;
                $l1699:;
                ITable* $tmp1701 = m$Iter1694->$class->itable;
                while ($tmp1701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1701 = $tmp1701->next;
                }
                $fn1703 $tmp1702 = $tmp1701->methods[0];
                panda$core$Bit $tmp1704 = $tmp1702(m$Iter1694);
                panda$core$Bit $tmp1705 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1704);
                if (!$tmp1705.value) goto $l1700;
                {
                    ITable* $tmp1707 = m$Iter1694->$class->itable;
                    while ($tmp1707->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1707 = $tmp1707->next;
                    }
                    $fn1709 $tmp1708 = $tmp1707->methods[1];
                    panda$core$Object* $tmp1710 = $tmp1708(m$Iter1694);
                    m1706 = ((org$pandalanguage$pandac$MethodRef*) $tmp1710);
                    panda$core$Int64$nullable $tmp1712 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1706, ((panda$collections$ListView*) args1690), p_target);
                    cost1711 = $tmp1712;
                    if (((panda$core$Bit) { !cost1711.nonnull }).value) {
                    {
                        goto $l1699;
                    }
                    }
                    bool $tmp1713 = ((panda$core$Bit) { !bestCost1693.nonnull }).value;
                    if ($tmp1713) goto $l1714;
                    panda$core$Bit $tmp1715 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1711.value), ((panda$core$Int64) bestCost1693.value));
                    $tmp1713 = $tmp1715.value;
                    $l1714:;
                    panda$core$Bit $tmp1716 = { $tmp1713 };
                    if ($tmp1716.value) {
                    {
                        bestCost1693 = cost1711;
                    }
                    }
                }
                goto $l1699;
                $l1700:;
            }
            return bestCost1693;
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1717 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1717.value) {
            {
                panda$core$Int64 $tmp1718 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1719 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1718, ((panda$core$Int64) { 2 }));
                if ($tmp1719.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1721 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1721)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1720 = $tmp1722.value;
                if (!$tmp1720) goto $l1723;
                panda$core$Object* $tmp1724 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1724)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1720 = $tmp1725.value;
                $l1723:;
                panda$core$Bit $tmp1726 = { $tmp1720 };
                if ($tmp1726.value) {
                {
                    panda$core$Object* $tmp1727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1727)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1728.value) {
                    {
                        panda$core$Object* $tmp1729 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1730 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1729)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1731 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1730));
                        if ($tmp1731.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1584, true });
                        }
                        }
                        panda$core$Int64 $tmp1732 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1584, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1732, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1733.value);
                panda$core$Object* $tmp1735 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1736 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1737 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1735), ((org$pandalanguage$pandac$Type*) $tmp1736));
                cost11734 = $tmp1737;
                if (((panda$core$Bit) { !cost11734.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1739 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1740 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1741 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1739), ((org$pandalanguage$pandac$Type*) $tmp1740));
                cost21738 = $tmp1741;
                if (((panda$core$Bit) { !cost21738.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1742 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1584, ((panda$core$Int64) cost11734.value));
                panda$core$Int64 $tmp1743 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1742, ((panda$core$Int64) cost21738.value));
                return ((panda$core$Int64$nullable) { $tmp1743, true });
            }
            }
            panda$core$Bit $tmp1744 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1744.value) {
            {
                panda$core$Int64 $tmp1745 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1746 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1745, ((panda$core$Int64) { 3 }));
                if ($tmp1746.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1749 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1749)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1748 = $tmp1750.value;
                if (!$tmp1748) goto $l1751;
                panda$core$Object* $tmp1752 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1752)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1748 = $tmp1753.value;
                $l1751:;
                panda$core$Bit $tmp1754 = { $tmp1748 };
                if ($tmp1754.value) {
                {
                    panda$core$Object* $tmp1755 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1755)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1756.value) {
                    {
                        panda$core$Object* $tmp1757 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1757)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1759 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1758));
                        if ($tmp1759.value) {
                        {
                            cost1747 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1747 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1760.value);
                    panda$core$Object* $tmp1762 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1763 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1764 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1762), ((org$pandalanguage$pandac$Type*) $tmp1763));
                    cost11761 = $tmp1764;
                    if (((panda$core$Bit) { !cost11761.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1766 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1767 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1768 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1766), ((org$pandalanguage$pandac$Type*) $tmp1767));
                    cost21765 = $tmp1768;
                    if (((panda$core$Bit) { !cost21765.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1769 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11761.value), ((panda$core$Int64) cost21765.value));
                    cost1747 = $tmp1769;
                }
                }
                panda$core$Object* $tmp1771 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1772 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1773 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1771), ((org$pandalanguage$pandac$Type*) $tmp1772));
                cost31770 = $tmp1773;
                if (((panda$core$Bit) { !cost31770.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1774 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1584, cost1747);
                panda$core$Int64 $tmp1775 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1774, ((panda$core$Int64) cost31770.value));
                return ((panda$core$Int64$nullable) { $tmp1775, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1776 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1777 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1776, p_target);
            return $tmp1777;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1779 = (panda$collections$Array*) malloc(40);
            $tmp1779->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1779->refCount.value = 1;
            panda$collections$Array$init($tmp1779);
            args1778 = $tmp1779;
            panda$core$Object* $tmp1781 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1778, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1781)));
            panda$core$Bit $tmp1782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1584, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1782.value);
            panda$core$Object* $tmp1783 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1785 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1783), &$s1784, ((panda$collections$ListView*) args1778));
            panda$core$Int64$nullable $tmp1786 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1785, p_target);
            return $tmp1786;
        }
        break;
        case 1046:
        {
            org$pandalanguage$pandac$Type* $tmp1787 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload)->owner);
            panda$core$Int64$nullable $tmp1788 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1787, p_target);
            return $tmp1788;
        }
        break;
    }
    panda$core$Bit $tmp1789 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1790 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1789);
    if ($tmp1790.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1792 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1791 = $tmp1792;
    if (((panda$core$Bit) { targetClass1791 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1794 = ((panda$collections$Iterable*) targetClass1791->methods)->$class->itable;
        while ($tmp1794->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1794 = $tmp1794->next;
        }
        $fn1796 $tmp1795 = $tmp1794->methods[0];
        panda$collections$Iterator* $tmp1797 = $tmp1795(((panda$collections$Iterable*) targetClass1791->methods));
        m$Iter1793 = $tmp1797;
        $l1798:;
        ITable* $tmp1800 = m$Iter1793->$class->itable;
        while ($tmp1800->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1800 = $tmp1800->next;
        }
        $fn1802 $tmp1801 = $tmp1800->methods[0];
        panda$core$Bit $tmp1803 = $tmp1801(m$Iter1793);
        panda$core$Bit $tmp1804 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1803);
        if (!$tmp1804.value) goto $l1799;
        {
            ITable* $tmp1806 = m$Iter1793->$class->itable;
            while ($tmp1806->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1806 = $tmp1806->next;
            }
            $fn1808 $tmp1807 = $tmp1806->methods[1];
            panda$core$Object* $tmp1809 = $tmp1807(m$Iter1793);
            m1805 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1809);
            panda$core$Bit $tmp1810 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1805->annotations);
            if ($tmp1810.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1805);
                panda$core$Bit $tmp1812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1805->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
                bool $tmp1811 = $tmp1812.value;
                if (!$tmp1811) goto $l1813;
                panda$core$Int64 $tmp1814 = panda$collections$Array$get_count$R$panda$core$Int64(m1805->parameters);
                panda$core$Bit $tmp1815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1814, ((panda$core$Int64) { 1 }));
                $tmp1811 = $tmp1815.value;
                $l1813:;
                panda$core$Bit $tmp1816 = { $tmp1811 };
                if ($tmp1816.value) {
                {
                    panda$core$Object* $tmp1818 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1805->parameters, ((panda$core$Int64) { 0 }));
                    panda$core$Int64$nullable $tmp1819 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1818)->type);
                    cost1817 = $tmp1819;
                    if (((panda$core$Bit) { cost1817.nonnull }).value) {
                    {
                        panda$core$Int64 $tmp1820 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1584, ((panda$core$Int64) cost1817.value));
                        panda$core$Int64 $tmp1821 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1820, ((panda$core$Int64) { 2 }));
                        return ((panda$core$Int64$nullable) { $tmp1821, true });
                    }
                    }
                }
                }
            }
            }
        }
        goto $l1798;
        $l1799:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1823 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1822 = $tmp1823;
    if (((panda$core$Bit) { cost1822.nonnull }).value) {
    {
        panda$core$Int64 $tmp1824 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1584, ((panda$core$Int64) cost1822.value));
        return ((panda$core$Int64$nullable) { $tmp1824, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1833;
    org$pandalanguage$pandac$IRNode* intermediate1839;
    org$pandalanguage$pandac$IRNode* coerced1871;
    org$pandalanguage$pandac$IRNode* coerced1897;
    org$pandalanguage$pandac$IRNode* coerced1910;
    org$pandalanguage$pandac$IRNode* varType1924;
    panda$collections$Array* args1934;
    org$pandalanguage$pandac$IRNode* target1942;
    panda$collections$Array* args1953;
    org$pandalanguage$pandac$IRNode* target1965;
    panda$collections$Array* args1976;
    org$pandalanguage$pandac$IRNode* target1984;
    org$pandalanguage$pandac$Type* param2000;
    org$pandalanguage$pandac$IRNode* start2002;
    org$pandalanguage$pandac$IRNode* end2005;
    panda$collections$Array* args2008;
    org$pandalanguage$pandac$IRNode* target2014;
    org$pandalanguage$pandac$Type* endPoint2030;
    org$pandalanguage$pandac$IRNode* start2032;
    org$pandalanguage$pandac$IRNode* end2035;
    org$pandalanguage$pandac$IRNode* step2038;
    panda$collections$Array* args2042;
    org$pandalanguage$pandac$IRNode* target2048;
    panda$collections$ImmutableArray* args2056;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2057;
    org$pandalanguage$pandac$ChoiceEntry* c2063;
    org$pandalanguage$pandac$IRNode* owner2066;
    panda$collections$Array* args2071;
    panda$core$UInt64 value2074;
    panda$collections$Array* children2109;
    org$pandalanguage$pandac$IRNode* intermediate2116;
    org$pandalanguage$pandac$ClassDecl* cl2121;
    panda$collections$Iterator* m$Iter2123;
    org$pandalanguage$pandac$MethodDecl* m2135;
    org$pandalanguage$pandac$IRNode* type2152;
    panda$collections$Array* args2157;
    panda$collections$Array* children2162;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1825 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1825.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1826 = $tmp1827.value;
    if (!$tmp1826) goto $l1828;
    panda$core$Bit $tmp1829 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1826 = $tmp1829.value;
    $l1828:;
    panda$core$Bit $tmp1830 = { $tmp1826 };
    if ($tmp1830.value) {
    {
        panda$core$Object* $tmp1831 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1832 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1831), p_target);
        if ($tmp1832.value) {
        {
            panda$collections$Array* $tmp1834 = (panda$collections$Array*) malloc(40);
            $tmp1834->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1834->refCount.value = 1;
            panda$collections$Array$init($tmp1834);
            children1833 = $tmp1834;
            panda$collections$Array$add$panda$collections$Array$T(children1833, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1836 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1836->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1836->refCount.value = 1;
            panda$core$Bit$wrapper* $tmp1838;
            $tmp1838 = (panda$core$Bit$wrapper*) malloc(13);
            $tmp1838->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
            $tmp1838->refCount = 1;
            $tmp1838->value = ((panda$core$Bit) { false });
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1836, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) $tmp1838), ((panda$collections$ListView*) children1833));
            return $tmp1836;
        }
        }
        panda$core$Object* $tmp1840 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1841 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1840));
        intermediate1839 = $tmp1841;
        org$pandalanguage$pandac$IRNode* $tmp1842 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1839, p_target);
        return $tmp1842;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1843 = $tmp1844.value;
            if (!$tmp1843) goto $l1845;
            panda$core$Int64 $tmp1846 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1847 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1848 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1846, $tmp1847);
            $tmp1843 = $tmp1848.value;
            $l1845:;
            panda$core$Bit $tmp1849 = { $tmp1843 };
            if ($tmp1849.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1850 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1850->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1850->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1850, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1850;
            }
            }
            else {
            panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1852 = $tmp1853.value;
            if (!$tmp1852) goto $l1854;
            panda$core$Int64 $tmp1855 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1856 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1857 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1855, $tmp1856);
            $tmp1852 = $tmp1857.value;
            $l1854:;
            panda$core$Bit $tmp1858 = { $tmp1852 };
            if ($tmp1858.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1859 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1859->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1859->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1859, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
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
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1862, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1864);
                return $tmp1862;
            }
            }
            }
            }
            panda$core$Bit $tmp1866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1865 = $tmp1866.value;
            if (!$tmp1865) goto $l1867;
            panda$core$Bit $tmp1868 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1869 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1868);
            $tmp1865 = $tmp1869.value;
            $l1867:;
            panda$core$Bit $tmp1870 = { $tmp1865 };
            if ($tmp1870.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1872 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1873 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1872);
                coerced1871 = $tmp1873;
                if (((panda$core$Bit) { coerced1871 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1874 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1871, p_target);
                return $tmp1874;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1875 = $tmp1876.value;
            if (!$tmp1875) goto $l1877;
            panda$core$Int64 $tmp1878 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1879 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1878);
            panda$core$Int64 $tmp1880 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1879);
            panda$core$Int64 $tmp1881 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1882 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1880, $tmp1881);
            $tmp1875 = $tmp1882.value;
            $l1877:;
            panda$core$Bit $tmp1883 = { $tmp1875 };
            if ($tmp1883.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1884 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1884->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1884->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1884, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1884;
            }
            }
            else {
            panda$core$Bit $tmp1886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1886.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1887 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1887->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1887->refCount.value = 1;
                panda$core$Real64 $tmp1889 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                panda$core$Real64 $tmp1890 = panda$core$Real64$$SUB$R$panda$core$Real64($tmp1889);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1887, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1890);
                return $tmp1887;
            }
            }
            }
            panda$core$Bit $tmp1892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1891 = $tmp1892.value;
            if (!$tmp1891) goto $l1893;
            panda$core$Bit $tmp1894 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1895 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1894);
            $tmp1891 = $tmp1895.value;
            $l1893:;
            panda$core$Bit $tmp1896 = { $tmp1891 };
            if ($tmp1896.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1898 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1899 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1898);
                coerced1897 = $tmp1899;
                if (((panda$core$Bit) { coerced1897 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1900 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1897, p_target);
                return $tmp1900;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1901.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1902 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1902->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1902->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1902, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, ((panda$core$Real64$wrapper*) p_expr->payload)->value);
                return $tmp1902;
            }
            }
            panda$core$Bit $tmp1905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1904 = $tmp1905.value;
            if (!$tmp1904) goto $l1906;
            panda$core$Bit $tmp1907 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1908 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1907);
            $tmp1904 = $tmp1908.value;
            $l1906:;
            panda$core$Bit $tmp1909 = { $tmp1904 };
            if ($tmp1909.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1911 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1912 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1911);
                coerced1910 = $tmp1912;
                if (((panda$core$Bit) { coerced1910 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1913 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1910, p_target);
                return $tmp1913;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1914 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1915 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1914);
            if ($tmp1915.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1916 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1916->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1916->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1916, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1916;
            }
            }
            panda$core$Bit $tmp1919 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1918 = $tmp1919.value;
            if (!$tmp1918) goto $l1920;
            org$pandalanguage$pandac$Type* $tmp1921 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1922 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1921);
            $tmp1918 = $tmp1922.value;
            $l1920:;
            panda$core$Bit $tmp1923 = { $tmp1918 };
            if ($tmp1923.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1925 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1926 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1925);
                varType1924 = $tmp1926;
                if (((panda$core$Bit) { varType1924 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1927 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1924, p_target);
                    return $tmp1927;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1929 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1930 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1929);
            bool $tmp1928 = $tmp1930.value;
            if (!$tmp1928) goto $l1931;
            panda$core$Int64$nullable $tmp1932 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1928 = ((panda$core$Bit) { $tmp1932.nonnull }).value;
            $l1931:;
            panda$core$Bit $tmp1933 = { $tmp1928 };
            if ($tmp1933.value) {
            {
                panda$collections$Array* $tmp1935 = (panda$collections$Array*) malloc(40);
                $tmp1935->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1935->refCount.value = 1;
                panda$collections$Array$init($tmp1935);
                args1934 = $tmp1935;
                org$pandalanguage$pandac$IRNode* $tmp1937 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1937->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1937->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1939 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1940 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1941 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1940);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1937, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1939, $tmp1941);
                panda$collections$Array$add$panda$collections$Array$T(args1934, ((panda$core$Object*) $tmp1937));
                org$pandalanguage$pandac$IRNode* $tmp1943 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1943->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1943->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1945 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1943, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1945, p_target);
                target1942 = $tmp1943;
                org$pandalanguage$pandac$IRNode* $tmp1946 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1942, ((panda$collections$ListView*) args1934));
                return $tmp1946;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1948 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1949 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1948);
            bool $tmp1947 = $tmp1949.value;
            if (!$tmp1947) goto $l1950;
            panda$core$Int64$nullable $tmp1951 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1947 = ((panda$core$Bit) { $tmp1951.nonnull }).value;
            $l1950:;
            panda$core$Bit $tmp1952 = { $tmp1947 };
            if ($tmp1952.value) {
            {
                panda$collections$Array* $tmp1954 = (panda$collections$Array*) malloc(40);
                $tmp1954->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1954->refCount.value = 1;
                panda$collections$Array$init($tmp1954);
                args1953 = $tmp1954;
                org$pandalanguage$pandac$IRNode* $tmp1956 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1956->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1956->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1958 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1959 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1960 = $tmp1959->$class->itable;
                while ($tmp1960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1960 = $tmp1960->next;
                }
                $fn1962 $tmp1961 = $tmp1960->methods[1];
                panda$core$Object* $tmp1963 = $tmp1961($tmp1959);
                panda$core$UInt64 $tmp1964 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1963)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1956, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1958, $tmp1964);
                panda$collections$Array$add$panda$collections$Array$T(args1953, ((panda$core$Object*) $tmp1956));
                org$pandalanguage$pandac$IRNode* $tmp1966 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1966->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1966->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1968 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1966, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1968, p_target);
                target1965 = $tmp1966;
                org$pandalanguage$pandac$IRNode* $tmp1969 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1965, ((panda$collections$ListView*) args1953));
                return $tmp1969;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1971 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1972 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1971);
            bool $tmp1970 = $tmp1972.value;
            if (!$tmp1970) goto $l1973;
            panda$core$Int64$nullable $tmp1974 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1970 = ((panda$core$Bit) { $tmp1974.nonnull }).value;
            $l1973:;
            panda$core$Bit $tmp1975 = { $tmp1970 };
            if ($tmp1975.value) {
            {
                panda$collections$Array* $tmp1977 = (panda$collections$Array*) malloc(40);
                $tmp1977->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1977->refCount.value = 1;
                panda$collections$Array$init($tmp1977);
                args1976 = $tmp1977;
                org$pandalanguage$pandac$IRNode* $tmp1979 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1979->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1979->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1981 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1982 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1983 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1982);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1979, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1981, $tmp1983);
                panda$collections$Array$add$panda$collections$Array$T(args1976, ((panda$core$Object*) $tmp1979));
                org$pandalanguage$pandac$IRNode* $tmp1985 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1985->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1985->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1987 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1985, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1987, p_target);
                target1984 = $tmp1985;
                org$pandalanguage$pandac$IRNode* $tmp1988 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1984, ((panda$collections$ListView*) args1976));
                return $tmp1988;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1989 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1989.value) {
            {
                panda$core$Int64 $tmp1990 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1991 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1990, ((panda$core$Int64) { 2 }));
                if ($tmp1991.value) {
                {
                    panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1992, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1993, &$s1994);
                    panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1995, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1996, &$s1997);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1998);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1999.value);
                panda$core$Object* $tmp2001 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param2000 = ((org$pandalanguage$pandac$Type*) $tmp2001);
                panda$core$Object* $tmp2003 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2004 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2003), param2000);
                start2002 = $tmp2004;
                if (((panda$core$Bit) { start2002 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp2006 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp2007 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2006), param2000);
                end2005 = $tmp2007;
                if (((panda$core$Bit) { end2005 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp2009 = (panda$collections$Array*) malloc(40);
                $tmp2009->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2009->refCount.value = 1;
                panda$collections$Array$init($tmp2009);
                args2008 = $tmp2009;
                panda$collections$Array$add$panda$collections$Array$T(args2008, ((panda$core$Object*) start2002));
                panda$collections$Array$add$panda$collections$Array$T(args2008, ((panda$core$Object*) end2005));
                org$pandalanguage$pandac$IRNode* $tmp2011 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2011->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2011->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2013 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2011, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp2013, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args2008, ((panda$core$Object*) $tmp2011));
                org$pandalanguage$pandac$IRNode* $tmp2015 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2015->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2017 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2015, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2017, p_target);
                target2014 = $tmp2015;
                org$pandalanguage$pandac$IRNode* $tmp2018 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2014, ((panda$collections$ListView*) args2008));
                return $tmp2018;
            }
            }
            else {
            panda$core$Bit $tmp2019 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp2019.value) {
            {
                panda$core$Int64 $tmp2020 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp2021 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2020, ((panda$core$Int64) { 3 }));
                if ($tmp2021.value) {
                {
                    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2022, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
                    panda$core$String* $tmp2026 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2025, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2026, &$s2027);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2028);
                    return NULL;
                }
                }
                panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp2029.value);
                panda$core$Object* $tmp2031 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint2030 = ((org$pandalanguage$pandac$Type*) $tmp2031);
                panda$core$Object* $tmp2033 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2034 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2033), endPoint2030);
                start2032 = $tmp2034;
                if (((panda$core$Bit) { start2032 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp2036 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp2037 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2036), endPoint2030);
                end2035 = $tmp2037;
                panda$core$Object* $tmp2039 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp2040 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp2041 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2039), ((org$pandalanguage$pandac$Type*) $tmp2040));
                step2038 = $tmp2041;
                panda$collections$Array* $tmp2043 = (panda$collections$Array*) malloc(40);
                $tmp2043->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2043->refCount.value = 1;
                panda$collections$Array$init($tmp2043);
                args2042 = $tmp2043;
                panda$collections$Array$add$panda$collections$Array$T(args2042, ((panda$core$Object*) start2032));
                panda$collections$Array$add$panda$collections$Array$T(args2042, ((panda$core$Object*) end2035));
                panda$collections$Array$add$panda$collections$Array$T(args2042, ((panda$core$Object*) step2038));
                org$pandalanguage$pandac$IRNode* $tmp2045 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2045->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2045->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2047 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2045, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp2047, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args2042, ((panda$core$Object*) $tmp2045));
                org$pandalanguage$pandac$IRNode* $tmp2049 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2049->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2049->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2051 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2049, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2051, p_target);
                target2048 = $tmp2049;
                org$pandalanguage$pandac$IRNode* $tmp2052 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2048, ((panda$collections$ListView*) args2042));
                return $tmp2052;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp2053 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp2054 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2053, p_target);
                return $tmp2054;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp2055 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp2055;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2057, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp2058 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp2057);
            args2056 = $tmp2058;
            panda$core$Object* $tmp2059 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2061 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2059), &$s2060, ((panda$collections$ListView*) args2056), p_target);
            org$pandalanguage$pandac$IRNode* $tmp2062 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2061, p_target);
            return $tmp2062;
        }
        break;
        case 1046:
        {
            c2063 = ((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload);
            panda$core$Int64 $tmp2064 = panda$collections$Array$get_count$R$panda$core$Int64(c2063->fields);
            panda$core$Bit $tmp2065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2064, ((panda$core$Int64) { 0 }));
            if ($tmp2065.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2067 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2067->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2067->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2069 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2070 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(c2063->owner);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2067, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2069, $tmp2070);
                owner2066 = $tmp2067;
                panda$collections$Array* $tmp2072 = (panda$collections$Array*) malloc(40);
                $tmp2072->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2072->refCount.value = 1;
                panda$collections$Array$init($tmp2072);
                args2071 = $tmp2072;
                panda$core$UInt64 $tmp2075 = panda$core$Int64$convert$R$panda$core$UInt64(c2063->rawValue);
                value2074 = $tmp2075;
                org$pandalanguage$pandac$IRNode* $tmp2076 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2076->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2076->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2078 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2074);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2076, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp2078, value2074);
                panda$collections$Array$add$panda$collections$Array$T(args2071, ((panda$core$Object*) $tmp2076));
                org$pandalanguage$pandac$IRNode* $tmp2079 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, owner2066, ((panda$collections$ListView*) args2071));
                org$pandalanguage$pandac$IRNode* $tmp2080 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2079, p_target);
                return $tmp2080;
            }
            }
            panda$core$String* $tmp2082 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2081, ((panda$core$Object*) p_expr));
            panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2082, &$s2083);
            panda$core$Int64 $tmp2085 = panda$collections$Array$get_count$R$panda$core$Int64(c2063->fields);
            panda$core$Int64$wrapper* $tmp2086;
            $tmp2086 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp2086->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2086->refCount = 1;
            $tmp2086->value = $tmp2085;
            panda$core$String* $tmp2087 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2084, ((panda$core$Object*) $tmp2086));
            panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2087, &$s2088);
            panda$core$Int64 $tmp2091 = panda$collections$Array$get_count$R$panda$core$Int64(c2063->fields);
            panda$core$Bit $tmp2092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2091, ((panda$core$Int64) { 1 }));
            panda$core$Bit$wrapper* $tmp2093;
            $tmp2093 = (panda$core$Bit$wrapper*) malloc(13);
            $tmp2093->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
            $tmp2093->refCount = 1;
            $tmp2093->value = $tmp2092;
            ITable* $tmp2095 = ((panda$core$Formattable*) $tmp2093)->$class->itable;
            while ($tmp2095->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2095 = $tmp2095->next;
            }
            $fn2097 $tmp2096 = $tmp2095->methods[0];
            panda$core$String* $tmp2098 = $tmp2096(((panda$core$Formattable*) $tmp2093), &$s2094);
            panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2090, $tmp2098);
            panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, &$s2100);
            panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, $tmp2101);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2102);
            return NULL;
        }
        break;
    }
    panda$core$Bit $tmp2103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2103.value) {
    {
        panda$core$Bit $tmp2104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2104.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2105 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2105->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2105->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2105, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp2105;
        }
        }
        panda$core$Object* $tmp2107 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2108 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp2107));
        if ($tmp2108.value) {
        {
            panda$collections$Array* $tmp2110 = (panda$collections$Array*) malloc(40);
            $tmp2110->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2110->refCount.value = 1;
            panda$collections$Array$init($tmp2110);
            children2109 = $tmp2110;
            panda$collections$Array$add$panda$collections$Array$T(children2109, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp2112 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2112->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2112->refCount.value = 1;
            panda$core$Bit$wrapper* $tmp2114;
            $tmp2114 = (panda$core$Bit$wrapper*) malloc(13);
            $tmp2114->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
            $tmp2114->refCount = 1;
            $tmp2114->value = ((panda$core$Bit) { false });
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2112, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) $tmp2114), ((panda$collections$ListView*) children2109));
            return $tmp2112;
        }
        }
        panda$core$Bit $tmp2115 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2115.value) {
        {
            panda$core$Object* $tmp2117 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2118 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp2117));
            intermediate2116 = $tmp2118;
            org$pandalanguage$pandac$IRNode* $tmp2119 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate2116, p_target);
            return $tmp2119;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp2120 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp2120.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2122 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl2121 = $tmp2122;
        if (((panda$core$Bit) { cl2121 != NULL }).value) {
        {
            {
                ITable* $tmp2124 = ((panda$collections$Iterable*) cl2121->methods)->$class->itable;
                while ($tmp2124->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2124 = $tmp2124->next;
                }
                $fn2126 $tmp2125 = $tmp2124->methods[0];
                panda$collections$Iterator* $tmp2127 = $tmp2125(((panda$collections$Iterable*) cl2121->methods));
                m$Iter2123 = $tmp2127;
                $l2128:;
                ITable* $tmp2130 = m$Iter2123->$class->itable;
                while ($tmp2130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2130 = $tmp2130->next;
                }
                $fn2132 $tmp2131 = $tmp2130->methods[0];
                panda$core$Bit $tmp2133 = $tmp2131(m$Iter2123);
                panda$core$Bit $tmp2134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2133);
                if (!$tmp2134.value) goto $l2129;
                {
                    ITable* $tmp2136 = m$Iter2123->$class->itable;
                    while ($tmp2136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2136 = $tmp2136->next;
                    }
                    $fn2138 $tmp2137 = $tmp2136->methods[1];
                    panda$core$Object* $tmp2139 = $tmp2137(m$Iter2123);
                    m2135 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2139);
                    panda$core$Bit $tmp2140 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m2135->annotations);
                    if ($tmp2140.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2135);
                        panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2135->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
                        bool $tmp2142 = $tmp2143.value;
                        if (!$tmp2142) goto $l2144;
                        panda$core$Int64 $tmp2145 = panda$collections$Array$get_count$R$panda$core$Int64(m2135->parameters);
                        panda$core$Bit $tmp2146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2145, ((panda$core$Int64) { 1 }));
                        $tmp2142 = $tmp2146.value;
                        $l2144:;
                        panda$core$Bit $tmp2147 = { $tmp2142 };
                        bool $tmp2141 = $tmp2147.value;
                        if (!$tmp2141) goto $l2148;
                        panda$core$Object* $tmp2149 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m2135->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp2150 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2149)->type);
                        $tmp2141 = ((panda$core$Bit) { $tmp2150.nonnull }).value;
                        $l2148:;
                        panda$core$Bit $tmp2151 = { $tmp2141 };
                        if ($tmp2151.value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp2153 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp2153->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp2153->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp2155 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp2156 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2121);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2153, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2155, $tmp2156);
                            type2152 = $tmp2153;
                            panda$collections$Array* $tmp2158 = (panda$collections$Array*) malloc(40);
                            $tmp2158->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp2158->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp2158, ((panda$core$Int64) { 1 }));
                            args2157 = $tmp2158;
                            panda$collections$Array$add$panda$collections$Array$T(args2157, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp2160 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type2152, ((panda$collections$ListView*) args2157));
                            org$pandalanguage$pandac$IRNode* $tmp2161 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2160, p_target);
                            return $tmp2161;
                        }
                        }
                    }
                    }
                }
                goto $l2128;
                $l2129:;
            }
        }
        }
        panda$collections$Array* $tmp2163 = (panda$collections$Array*) malloc(40);
        $tmp2163->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2163->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp2163, ((panda$core$Int64) { 1 }));
        children2162 = $tmp2163;
        panda$collections$Array$add$panda$collections$Array$T(children2162, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp2165 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2165->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2165->refCount.value = 1;
        panda$core$Bit$wrapper* $tmp2167;
        $tmp2167 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp2167->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp2167->refCount = 1;
        $tmp2167->value = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2165, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) $tmp2167), ((panda$collections$ListView*) children2162));
        return $tmp2165;
    }
    }
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2168, ((panda$core$Object*) p_target));
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2171, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2172, &$s2173);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2174);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result2175;
    org$pandalanguage$pandac$IRNode* $tmp2176 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result2175 = $tmp2176;
    bool $tmp2177 = ((panda$core$Bit) { result2175 == NULL }).value;
    if ($tmp2177) goto $l2178;
    panda$core$Bit $tmp2179 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result2175->type, p_target);
    $tmp2177 = $tmp2179.value;
    $l2178:;
    panda$core$Bit $tmp2180 = { $tmp2177 };
    PANDA_ASSERT($tmp2180.value);
    return result2175;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp2182 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp2181 = $tmp2182.value;
    if (!$tmp2181) goto $l2183;
    panda$core$Bit $tmp2184 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp2181 = $tmp2184.value;
    $l2183:;
    panda$core$Bit $tmp2185 = { $tmp2181 };
    if ($tmp2185.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp2186 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp2186.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2188 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp2187 = $tmp2188.value;
    if (!$tmp2187) goto $l2189;
    panda$core$Bit $tmp2190 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp2187 = $tmp2190.value;
    $l2189:;
    panda$core$Bit $tmp2191 = { $tmp2187 };
    if ($tmp2191.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp2192.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp2193 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp2193.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result2195;
    org$pandalanguage$pandac$IRNode* resolved2202;
    panda$core$Int64$nullable $tmp2194 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp2194.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2196 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result2195 = $tmp2196;
    panda$core$Bit $tmp2198 = panda$core$Bit$$NOT$R$panda$core$Bit(result2195);
    bool $tmp2197 = $tmp2198.value;
    if (!$tmp2197) goto $l2199;
    panda$core$Bit $tmp2200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp2197 = $tmp2200.value;
    $l2199:;
    panda$core$Bit $tmp2201 = { $tmp2197 };
    if ($tmp2201.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2203 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved2202 = $tmp2203;
        bool $tmp2204 = ((panda$core$Bit) { resolved2202 != NULL }).value;
        if (!$tmp2204) goto $l2205;
        $tmp2204 = ((panda$core$Bit) { ((panda$core$Object*) resolved2202) != ((panda$core$Object*) p_node) }).value;
        $l2205:;
        panda$core$Bit $tmp2206 = { $tmp2204 };
        if ($tmp2206.value) {
        {
            panda$core$Bit $tmp2207 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved2202, p_target);
            result2195 = $tmp2207;
        }
        }
    }
    }
    return result2195;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2228;
    panda$collections$Array* children2231;
    panda$core$Bit $tmp2208 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp2208.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2209 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2210 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2209);
    PANDA_ASSERT($tmp2210.value);
    bool $tmp2211 = p_isExplicit.value;
    if (!$tmp2211) goto $l2212;
    panda$core$Bit $tmp2213 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp2214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2213);
    $tmp2211 = $tmp2214.value;
    $l2212:;
    panda$core$Bit $tmp2215 = { $tmp2211 };
    if ($tmp2215.value) {
    {
        panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2216, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2217, &$s2218);
        panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2220, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2221, &$s2222);
        panda$core$String* $tmp2224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, $tmp2223);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2224);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2225 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2225;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2226 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2226.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2227 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2227;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2229 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2228 = $tmp2229;
            if (((panda$core$Bit) { resolved2228 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2230 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2228, p_position, p_isExplicit, p_target);
                return $tmp2230;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2232 = (panda$collections$Array*) malloc(40);
    $tmp2232->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2232->refCount.value = 1;
    panda$collections$Array$init($tmp2232);
    children2231 = $tmp2232;
    panda$collections$Array$add$panda$collections$Array$T(children2231, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2234 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2234->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2234->refCount.value = 1;
    panda$core$Bit$wrapper* $tmp2236;
    $tmp2236 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp2236->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp2236->refCount = 1;
    $tmp2236->value = p_isExplicit;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2234, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) $tmp2236), ((panda$collections$ListView*) children2231));
    return $tmp2234;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2243;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2244;
    panda$core$Int64$nullable cost2259;
    panda$core$Int64$nullable cost2273;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2237 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2238 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2238->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2238 = $tmp2238->next;
    }
    $fn2240 $tmp2239 = $tmp2238->methods[0];
    panda$core$Int64 $tmp2241 = $tmp2239(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2242 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2237, $tmp2241);
    if ($tmp2242.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2243 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2245 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2244, ((panda$core$Int64) { 0 }), $tmp2245, ((panda$core$Bit) { false }));
    int64_t $tmp2247 = $tmp2244.min.value;
    panda$core$Int64 i2246 = { $tmp2247 };
    int64_t $tmp2249 = $tmp2244.max.value;
    bool $tmp2250 = $tmp2244.inclusive.value;
    if ($tmp2250) goto $l2257; else goto $l2258;
    $l2257:;
    if ($tmp2247 <= $tmp2249) goto $l2251; else goto $l2253;
    $l2258:;
    if ($tmp2247 < $tmp2249) goto $l2251; else goto $l2253;
    $l2251:;
    {
        ITable* $tmp2260 = p_args->$class->itable;
        while ($tmp2260->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2260 = $tmp2260->next;
        }
        $fn2262 $tmp2261 = $tmp2260->methods[0];
        panda$core$Object* $tmp2263 = $tmp2261(p_args, i2246);
        org$pandalanguage$pandac$Type* $tmp2264 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2246);
        panda$core$Int64$nullable $tmp2265 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2263), $tmp2264);
        cost2259 = $tmp2265;
        if (((panda$core$Bit) { !cost2259.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2266 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2243, ((panda$core$Int64) cost2259.value));
        result2243 = $tmp2266;
    }
    $l2254:;
    int64_t $tmp2268 = $tmp2249 - i2246.value;
    if ($tmp2250) goto $l2269; else goto $l2270;
    $l2269:;
    if ((uint64_t) $tmp2268 >= 1) goto $l2267; else goto $l2253;
    $l2270:;
    if ((uint64_t) $tmp2268 > 1) goto $l2267; else goto $l2253;
    $l2267:;
    i2246.value += 1;
    goto $l2251;
    $l2253:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2274 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2275 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2274, p_expectedReturn);
        cost2273 = $tmp2275;
        if (((panda$core$Bit) { !cost2273.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2276 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2243, ((panda$core$Int64) cost2273.value));
        result2243 = $tmp2276;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2279 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2280 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2279);
    bool $tmp2278 = $tmp2280.value;
    if (!$tmp2278) goto $l2281;
    ITable* $tmp2282 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2282->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2282 = $tmp2282->next;
    }
    $fn2284 $tmp2283 = $tmp2282->methods[0];
    panda$core$Int64 $tmp2285 = $tmp2283(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2285, ((panda$core$Int64) { 1 }));
    $tmp2278 = $tmp2286.value;
    $l2281:;
    panda$core$Bit $tmp2287 = { $tmp2278 };
    bool $tmp2277 = $tmp2287.value;
    if (!$tmp2277) goto $l2288;
    panda$core$Object* $tmp2289 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2290 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2291 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2289)->type, $tmp2290);
    $tmp2277 = $tmp2291.value;
    $l2288:;
    panda$core$Bit $tmp2292 = { $tmp2277 };
    if ($tmp2292.value) {
    {
        panda$core$Int64 $tmp2293 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2243, ((panda$core$Int64) { 1 }));
        result2243 = $tmp2293;
    }
    }
    return ((panda$core$Int64$nullable) { result2243, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2294;
    panda$core$Int64$nullable best2297;
    panda$collections$Iterator* m$Iter2298;
    org$pandalanguage$pandac$MethodRef* m2310;
    panda$core$Int64$nullable cost2315;
    panda$collections$Array* $tmp2295 = (panda$collections$Array*) malloc(40);
    $tmp2295->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2295->refCount.value = 1;
    panda$collections$Array$init($tmp2295);
    result2294 = $tmp2295;
    best2297 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2299 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2299->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2299 = $tmp2299->next;
        }
        $fn2301 $tmp2300 = $tmp2299->methods[0];
        panda$collections$Iterator* $tmp2302 = $tmp2300(((panda$collections$Iterable*) p_methods));
        m$Iter2298 = $tmp2302;
        $l2303:;
        ITable* $tmp2305 = m$Iter2298->$class->itable;
        while ($tmp2305->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2305 = $tmp2305->next;
        }
        $fn2307 $tmp2306 = $tmp2305->methods[0];
        panda$core$Bit $tmp2308 = $tmp2306(m$Iter2298);
        panda$core$Bit $tmp2309 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2308);
        if (!$tmp2309.value) goto $l2304;
        {
            ITable* $tmp2311 = m$Iter2298->$class->itable;
            while ($tmp2311->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2311 = $tmp2311->next;
            }
            $fn2313 $tmp2312 = $tmp2311->methods[1];
            panda$core$Object* $tmp2314 = $tmp2312(m$Iter2298);
            m2310 = ((org$pandalanguage$pandac$MethodRef*) $tmp2314);
            panda$core$Int64$nullable $tmp2316 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2310, p_args, p_expectedReturn);
            cost2315 = $tmp2316;
            if (((panda$core$Bit) { !cost2315.nonnull }).value) {
            {
                goto $l2303;
            }
            }
            bool $tmp2317 = ((panda$core$Bit) { !best2297.nonnull }).value;
            if ($tmp2317) goto $l2318;
            panda$core$Bit $tmp2319 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2315.value), ((panda$core$Int64) best2297.value));
            $tmp2317 = $tmp2319.value;
            $l2318:;
            panda$core$Bit $tmp2320 = { $tmp2317 };
            if ($tmp2320.value) {
            {
                panda$collections$Array$clear(result2294);
                best2297 = cost2315;
            }
            }
            panda$core$Bit $tmp2324;
            if (((panda$core$Bit) { cost2315.nonnull }).value) goto $l2321; else goto $l2322;
            $l2321:;
            panda$core$Bit $tmp2325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2315.value), ((panda$core$Int64) best2297.value));
            $tmp2324 = $tmp2325;
            goto $l2323;
            $l2322:;
            $tmp2324 = ((panda$core$Bit) { false });
            goto $l2323;
            $l2323:;
            if ($tmp2324.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2294, ((panda$core$Object*) m2310));
            }
            }
        }
        goto $l2303;
        $l2304:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2294));
    return best2297;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs2361;
    org$pandalanguage$pandac$IRNode* selfNode2397;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2426;
    org$pandalanguage$pandac$IRNode* coerced2444;
    org$pandalanguage$pandac$IRNode* result2459;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2326 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2327 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2327->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2327 = $tmp2327->next;
    }
    $fn2329 $tmp2328 = $tmp2327->methods[0];
    panda$core$Int64 $tmp2330 = $tmp2328(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2331 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2326, $tmp2330);
    if ($tmp2331.value) {
    {
        panda$core$String* $tmp2332 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2333 = panda$core$String$convert$R$panda$core$String($tmp2332);
        panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2333, &$s2334);
        panda$core$Int64 $tmp2336 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Int64$wrapper* $tmp2337;
        $tmp2337 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2337->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2337->refCount = 1;
        $tmp2337->value = $tmp2336;
        panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2335, ((panda$core$Object*) $tmp2337));
        panda$core$String* $tmp2340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, &$s2339);
        panda$core$Int64 $tmp2341 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2341, ((panda$core$Int64) { 1 }));
        panda$core$Bit$wrapper* $tmp2343;
        $tmp2343 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp2343->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp2343->refCount = 1;
        $tmp2343->value = $tmp2342;
        ITable* $tmp2345 = ((panda$core$Formattable*) $tmp2343)->$class->itable;
        while ($tmp2345->$class != (panda$core$Class*) &panda$core$Formattable$class) {
            $tmp2345 = $tmp2345->next;
        }
        $fn2347 $tmp2346 = $tmp2345->methods[0];
        panda$core$String* $tmp2348 = $tmp2346(((panda$core$Formattable*) $tmp2343), &$s2344);
        panda$core$String* $tmp2349 = panda$core$String$convert$R$panda$core$String($tmp2348);
        panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, &$s2350);
        ITable* $tmp2352 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2352->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2352 = $tmp2352->next;
        }
        $fn2354 $tmp2353 = $tmp2352->methods[0];
        panda$core$Int64 $tmp2355 = $tmp2353(((panda$collections$CollectionView*) p_args));
        panda$core$Int64$wrapper* $tmp2356;
        $tmp2356 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2356->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2356->refCount = 1;
        $tmp2356->value = $tmp2355;
        panda$core$String* $tmp2357 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2351, ((panda$core$Object*) $tmp2356));
        panda$core$String* $tmp2359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2357, &$s2358);
        panda$core$String* $tmp2360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2340, $tmp2359);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2360);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2362 = (panda$collections$Array*) malloc(40);
    $tmp2362->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2362->refCount.value = 1;
    panda$collections$Array$init($tmp2362);
    finalArgs2361 = $tmp2362;
    bool $tmp2365 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2365) goto $l2366;
    panda$core$Bit $tmp2367 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2365 = $tmp2367.value;
    $l2366:;
    panda$core$Bit $tmp2368 = { $tmp2365 };
    bool $tmp2364 = $tmp2368.value;
    if (!$tmp2364) goto $l2369;
    panda$core$Bit $tmp2370 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2371 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2370);
    $tmp2364 = $tmp2371.value;
    $l2369:;
    panda$core$Bit $tmp2372 = { $tmp2364 };
    if ($tmp2372.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2373 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2374 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2373);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2361, ((panda$core$Object*) $tmp2374));
    }
    }
    panda$core$Bit $tmp2375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp2375.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2376 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2376)->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2377.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2378 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2378->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2378->refCount.value = 1;
                panda$core$Object* $tmp2380 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2381 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2380));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2378, ((panda$core$Int64) { 1025 }), p_position, $tmp2381);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2361, ((panda$core$Object*) $tmp2378));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2382);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2385 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2384 = $tmp2385.value;
        if (!$tmp2384) goto $l2386;
        panda$core$Bit $tmp2387 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2384 = $tmp2387.value;
        $l2386:;
        panda$core$Bit $tmp2388 = { $tmp2384 };
        bool $tmp2383 = $tmp2388.value;
        if (!$tmp2383) goto $l2389;
        panda$core$Bit $tmp2390 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2383 = $tmp2390.value;
        $l2389:;
        panda$core$Bit $tmp2391 = { $tmp2383 };
        if ($tmp2391.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2392);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2394 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2393 = $tmp2394.value;
    if (!$tmp2393) goto $l2395;
    $tmp2393 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2395:;
    panda$core$Bit $tmp2396 = { $tmp2393 };
    if ($tmp2396.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2398 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2398->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2398->refCount.value = 1;
        panda$core$Object* $tmp2400 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2401 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2400));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2398, ((panda$core$Int64) { 1025 }), p_position, $tmp2401);
        selfNode2397 = $tmp2398;
        org$pandalanguage$pandac$Type* $tmp2402 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2403 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2397, $tmp2402);
        selfNode2397 = $tmp2403;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2397 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2361, ((panda$core$Object*) selfNode2397));
        panda$core$Object* $tmp2404 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2405 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2404));
        panda$core$Bit $tmp2406 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2405);
        if ($tmp2406.value) {
        {
            panda$core$String* $tmp2408 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2407, $tmp2408);
            panda$core$String* $tmp2411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2409, &$s2410);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2411);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2414 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2415 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2414);
    bool $tmp2413 = $tmp2415.value;
    if (!$tmp2413) goto $l2416;
    $tmp2413 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2416:;
    panda$core$Bit $tmp2417 = { $tmp2413 };
    bool $tmp2412 = $tmp2417.value;
    if (!$tmp2412) goto $l2418;
    panda$core$Bit $tmp2419 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2412 = $tmp2419.value;
    $l2418:;
    panda$core$Bit $tmp2420 = { $tmp2412 };
    if ($tmp2420.value) {
    {
        panda$core$String* $tmp2422 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2421, $tmp2422);
        panda$core$String* $tmp2425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2423, &$s2424);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2425);
    }
    }
    }
    }
    ITable* $tmp2427 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2427->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2427 = $tmp2427->next;
    }
    $fn2429 $tmp2428 = $tmp2427->methods[0];
    panda$core$Int64 $tmp2430 = $tmp2428(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2426, ((panda$core$Int64) { 0 }), $tmp2430, ((panda$core$Bit) { false }));
    int64_t $tmp2432 = $tmp2426.min.value;
    panda$core$Int64 i2431 = { $tmp2432 };
    int64_t $tmp2434 = $tmp2426.max.value;
    bool $tmp2435 = $tmp2426.inclusive.value;
    if ($tmp2435) goto $l2442; else goto $l2443;
    $l2442:;
    if ($tmp2432 <= $tmp2434) goto $l2436; else goto $l2438;
    $l2443:;
    if ($tmp2432 < $tmp2434) goto $l2436; else goto $l2438;
    $l2436:;
    {
        ITable* $tmp2445 = p_args->$class->itable;
        while ($tmp2445->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2445 = $tmp2445->next;
        }
        $fn2447 $tmp2446 = $tmp2445->methods[0];
        panda$core$Object* $tmp2448 = $tmp2446(p_args, i2431);
        org$pandalanguage$pandac$Type* $tmp2449 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2431);
        org$pandalanguage$pandac$IRNode* $tmp2450 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2448), $tmp2449);
        coerced2444 = $tmp2450;
        if (((panda$core$Bit) { coerced2444 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2451 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2431);
        org$pandalanguage$pandac$IRNode* $tmp2452 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2444, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2451)->type);
        coerced2444 = $tmp2452;
        if (((panda$core$Bit) { coerced2444 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2361, ((panda$core$Object*) coerced2444));
    }
    $l2439:;
    int64_t $tmp2454 = $tmp2434 - i2431.value;
    if ($tmp2435) goto $l2455; else goto $l2456;
    $l2455:;
    if ((uint64_t) $tmp2454 >= 1) goto $l2453; else goto $l2438;
    $l2456:;
    if ((uint64_t) $tmp2454 > 1) goto $l2453; else goto $l2438;
    $l2453:;
    i2431.value += 1;
    goto $l2436;
    $l2438:;
    panda$core$Bit $tmp2461 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2460);
    if ($tmp2461.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2462 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2462->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2462->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2464 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2462, ((panda$core$Int64) { 1005 }), p_position, $tmp2464, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2361));
        result2459 = $tmp2462;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2465 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2465->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2465->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2465, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2361));
        result2459 = $tmp2465;
        org$pandalanguage$pandac$Type* $tmp2467 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2468 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2459, p_position, ((panda$core$Bit) { false }), $tmp2467);
        result2459 = $tmp2468;
    }
    }
    return result2459;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2469 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2469;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$String* p_name, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2470;
    org$pandalanguage$pandac$ChoiceEntry* rightEntry2474;
    org$pandalanguage$pandac$IRNode* leftValue2475;
    panda$core$UInt64 rightValue2478;
    org$pandalanguage$pandac$IRNode* leftValue2487;
    org$pandalanguage$pandac$IRNode* rightValue2490;
    panda$collections$Array* $tmp2471 = (panda$collections$Array*) malloc(40);
    $tmp2471->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2471->refCount.value = 1;
    panda$collections$Array$init($tmp2471);
    args2470 = $tmp2471;
    panda$core$Bit $tmp2473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1046 }));
    if ($tmp2473.value) {
    {
        rightEntry2474 = ((org$pandalanguage$pandac$ChoiceEntry*) p_right->payload);
        org$pandalanguage$pandac$IRNode* $tmp2477 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_left->position, p_left, &$s2476);
        leftValue2475 = $tmp2477;
        panda$core$UInt64 $tmp2479 = panda$core$Int64$convert$R$panda$core$UInt64(rightEntry2474->rawValue);
        rightValue2478 = $tmp2479;
        org$pandalanguage$pandac$IRNode* $tmp2480 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2480->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2480->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2482 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(rightValue2478);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2480, ((panda$core$Int64) { 1004 }), p_right->position, $tmp2482, rightValue2478);
        panda$collections$Array$add$panda$collections$Array$T(args2470, ((panda$core$Object*) $tmp2480));
        org$pandalanguage$pandac$IRNode* $tmp2483 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, leftValue2475, p_name, ((panda$collections$ListView*) args2470));
        return $tmp2483;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2484 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_right->type);
    org$pandalanguage$pandac$Type* $tmp2485 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_left->type);
    panda$core$Bit $tmp2486 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2484, $tmp2485);
    if ($tmp2486.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2489 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_left->position, p_left, &$s2488);
        leftValue2487 = $tmp2489;
        PANDA_ASSERT(((panda$core$Bit) { leftValue2487 != NULL }).value);
        org$pandalanguage$pandac$IRNode* $tmp2492 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_right->position, p_right, &$s2491);
        rightValue2490 = $tmp2492;
        PANDA_ASSERT(((panda$core$Bit) { rightValue2490 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(args2470, ((panda$core$Object*) rightValue2490));
        org$pandalanguage$pandac$IRNode* $tmp2493 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, leftValue2487, p_name, ((panda$collections$ListView*) args2470));
        return $tmp2493;
    }
    }
    panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2494, p_name);
    panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, &$s2496);
    panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2497, ((panda$core$Object*) p_left->type));
    panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, &$s2499);
    panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2500, ((panda$core$Object*) p_right->type));
    panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2501, &$s2502);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_left->position, $tmp2503);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2504;
    org$pandalanguage$pandac$ClassDecl* cl2506;
    org$pandalanguage$pandac$Symbol* s2516;
    org$pandalanguage$pandac$IRNode* ref2562;
    org$pandalanguage$pandac$IRNode* $tmp2505 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2504 = $tmp2505;
    if (((panda$core$Bit) { resolved2504 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2504->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2507.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2508 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2504->payload));
        cl2506 = $tmp2508;
    }
    }
    else {
    {
        panda$core$Bit $tmp2509 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2504->type);
        panda$core$Bit $tmp2510 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2509);
        if ($tmp2510.value) {
        {
            panda$core$String* $tmp2512 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2511, ((panda$core$Object*) resolved2504->type));
            panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, &$s2513);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2514);
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2515 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2504->type);
        cl2506 = $tmp2515;
    }
    }
    if (((panda$core$Bit) { cl2506 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2517 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2506);
    org$pandalanguage$pandac$Symbol* $tmp2518 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2517, p_name);
    s2516 = $tmp2518;
    if (((panda$core$Bit) { s2516 == NULL }).value) {
    {
        panda$core$Bit $tmp2521 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2520);
        bool $tmp2519 = $tmp2521.value;
        if ($tmp2519) goto $l2522;
        panda$core$Bit $tmp2526 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2525);
        bool $tmp2524 = $tmp2526.value;
        if (!$tmp2524) goto $l2527;
        panda$core$Bit $tmp2528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl2506->classKind->$rawValue, ((panda$core$Int64) { 2 }));
        $tmp2524 = $tmp2528.value;
        $l2527:;
        panda$core$Bit $tmp2529 = { $tmp2524 };
        bool $tmp2523 = $tmp2529.value;
        if (!$tmp2523) goto $l2530;
        ITable* $tmp2531 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2531->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2531 = $tmp2531->next;
        }
        $fn2533 $tmp2532 = $tmp2531->methods[0];
        panda$core$Int64 $tmp2534 = $tmp2532(((panda$collections$CollectionView*) p_args));
        panda$core$Bit $tmp2535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2534, ((panda$core$Int64) { 1 }));
        $tmp2523 = $tmp2535.value;
        $l2530:;
        panda$core$Bit $tmp2536 = { $tmp2523 };
        $tmp2519 = $tmp2536.value;
        $l2522:;
        panda$core$Bit $tmp2537 = { $tmp2519 };
        if ($tmp2537.value) {
        {
            ITable* $tmp2538 = p_args->$class->itable;
            while ($tmp2538->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2538 = $tmp2538->next;
            }
            $fn2540 $tmp2539 = $tmp2538->methods[0];
            panda$core$Object* $tmp2541 = $tmp2539(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2542 = org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, ((org$pandalanguage$pandac$IRNode*) $tmp2541));
            return $tmp2542;
        }
        }
        panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2543, ((org$pandalanguage$pandac$Symbol*) cl2506)->name);
        panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, &$s2545);
        panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, p_name);
        panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, &$s2548);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2549);
        return NULL;
    }
    }
    panda$core$Bit $tmp2551 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2516->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2550 = $tmp2551.value;
    if (!$tmp2550) goto $l2552;
    panda$core$Bit $tmp2553 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2516->kind, ((panda$core$Int64) { 205 }));
    $tmp2550 = $tmp2553.value;
    $l2552:;
    panda$core$Bit $tmp2554 = { $tmp2550 };
    if ($tmp2554.value) {
    {
        panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2555, ((org$pandalanguage$pandac$Symbol*) cl2506)->name);
        panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, &$s2557);
        panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, p_name);
        panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, &$s2560);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2561);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2563 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2506);
    org$pandalanguage$pandac$IRNode* $tmp2564 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2516, $tmp2563);
    ref2562 = $tmp2564;
    if (((panda$core$Bit) { ref2562 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2565 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2562, p_args, p_expectedType);
    return $tmp2565;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2566 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2566;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2567;
    panda$collections$Array* methods2574;
    org$pandalanguage$pandac$MethodDecl* first2579;
    panda$core$MutableString* msg2584;
    panda$core$String* separator2595;
    panda$collections$Iterator* a$Iter2597;
    org$pandalanguage$pandac$IRNode* a2609;
    org$pandalanguage$pandac$IRNode* target2623;
    panda$collections$Array* children2631;
    panda$collections$Array* types2637;
    panda$collections$Iterator* m$Iter2640;
    org$pandalanguage$pandac$MethodRef* m2652;
    org$pandalanguage$pandac$IRNode* target2662;
    org$pandalanguage$pandac$IRNode* initCall2665;
    panda$collections$Array* children2669;
    org$pandalanguage$pandac$ChoiceEntry* c2674;
    panda$collections$Array* finalArgs2711;
    panda$core$UInt64 value2714;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2719;
    org$pandalanguage$pandac$IRNode* arg2737;
    org$pandalanguage$pandac$IRNode* owner2750;
    org$pandalanguage$pandac$IRNode* resolved2756;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2568 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2568, ((panda$core$Int64) { 0 }));
            if ($tmp2569.value) {
            {
                target2567 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2570 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2570, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2571.value);
                panda$core$Object* $tmp2572 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2567 = ((org$pandalanguage$pandac$IRNode*) $tmp2572);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2573 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2567, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2573;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2575 = (panda$collections$Array*) malloc(40);
            $tmp2575->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2575->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2575, ((panda$collections$ListView*) p_m->payload));
            methods2574 = $tmp2575;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2574, p_args, p_expectedType);
            panda$core$Int64 $tmp2577 = panda$collections$Array$get_count$R$panda$core$Int64(methods2574);
            panda$core$Bit $tmp2578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2577, ((panda$core$Int64) { 0 }));
            if ($tmp2578.value) {
            {
                ITable* $tmp2580 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2580->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2580 = $tmp2580->next;
                }
                $fn2582 $tmp2581 = $tmp2580->methods[0];
                panda$core$Object* $tmp2583 = $tmp2581(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2579 = ((org$pandalanguage$pandac$MethodRef*) $tmp2583)->value;
                panda$core$MutableString* $tmp2585 = (panda$core$MutableString*) malloc(48);
                $tmp2585->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2585->refCount.value = 1;
                panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2587, ((org$pandalanguage$pandac$Symbol*) first2579->owner)->name);
                panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
                panda$core$String* $tmp2591 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2579)->name);
                panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
                panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, $tmp2593);
                panda$core$MutableString$init$panda$core$String($tmp2585, $tmp2594);
                msg2584 = $tmp2585;
                separator2595 = &$s2596;
                {
                    ITable* $tmp2598 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2598->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2598 = $tmp2598->next;
                    }
                    $fn2600 $tmp2599 = $tmp2598->methods[0];
                    panda$collections$Iterator* $tmp2601 = $tmp2599(((panda$collections$Iterable*) p_args));
                    a$Iter2597 = $tmp2601;
                    $l2602:;
                    ITable* $tmp2604 = a$Iter2597->$class->itable;
                    while ($tmp2604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2604 = $tmp2604->next;
                    }
                    $fn2606 $tmp2605 = $tmp2604->methods[0];
                    panda$core$Bit $tmp2607 = $tmp2605(a$Iter2597);
                    panda$core$Bit $tmp2608 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2607);
                    if (!$tmp2608.value) goto $l2603;
                    {
                        ITable* $tmp2610 = a$Iter2597->$class->itable;
                        while ($tmp2610->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2610 = $tmp2610->next;
                        }
                        $fn2612 $tmp2611 = $tmp2610->methods[1];
                        panda$core$Object* $tmp2613 = $tmp2611(a$Iter2597);
                        a2609 = ((org$pandalanguage$pandac$IRNode*) $tmp2613);
                        panda$core$MutableString$append$panda$core$String(msg2584, separator2595);
                        panda$core$MutableString$append$panda$core$Object(msg2584, ((panda$core$Object*) a2609->type));
                        separator2595 = &$s2614;
                    }
                    goto $l2602;
                    $l2603:;
                }
                panda$core$MutableString$append$panda$core$String(msg2584, &$s2615);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2616, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2617, &$s2618);
                    panda$core$MutableString$append$panda$core$String(msg2584, $tmp2619);
                }
                }
                panda$core$String* $tmp2620 = panda$core$MutableString$finish$R$panda$core$String(msg2584);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2620);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2621 = panda$collections$Array$get_count$R$panda$core$Int64(methods2574);
            panda$core$Bit $tmp2622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2621, ((panda$core$Int64) { 1 }));
            if ($tmp2622.value) {
            {
                panda$core$Int64 $tmp2624 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2624, ((panda$core$Int64) { 1 }));
                if ($tmp2625.value) {
                {
                    panda$core$Object* $tmp2626 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2623 = ((org$pandalanguage$pandac$IRNode*) $tmp2626);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2627 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2627, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2628.value);
                    target2623 = NULL;
                }
                }
                panda$core$Object* $tmp2629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2574, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2630 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2623, ((org$pandalanguage$pandac$MethodRef*) $tmp2629), p_args);
                return $tmp2630;
            }
            }
            panda$collections$Array* $tmp2632 = (panda$collections$Array*) malloc(40);
            $tmp2632->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2632->refCount.value = 1;
            panda$collections$Array$init($tmp2632);
            children2631 = $tmp2632;
            org$pandalanguage$pandac$IRNode* $tmp2634 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2634->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2634->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2636 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2634, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2636, ((panda$core$Object*) methods2574), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2631, ((panda$core$Object*) $tmp2634));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2631, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2638 = (panda$collections$Array*) malloc(40);
            $tmp2638->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2638->refCount.value = 1;
            panda$collections$Array$init($tmp2638);
            types2637 = $tmp2638;
            {
                ITable* $tmp2641 = ((panda$collections$Iterable*) methods2574)->$class->itable;
                while ($tmp2641->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2641 = $tmp2641->next;
                }
                $fn2643 $tmp2642 = $tmp2641->methods[0];
                panda$collections$Iterator* $tmp2644 = $tmp2642(((panda$collections$Iterable*) methods2574));
                m$Iter2640 = $tmp2644;
                $l2645:;
                ITable* $tmp2647 = m$Iter2640->$class->itable;
                while ($tmp2647->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2647 = $tmp2647->next;
                }
                $fn2649 $tmp2648 = $tmp2647->methods[0];
                panda$core$Bit $tmp2650 = $tmp2648(m$Iter2640);
                panda$core$Bit $tmp2651 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2650);
                if (!$tmp2651.value) goto $l2646;
                {
                    ITable* $tmp2653 = m$Iter2640->$class->itable;
                    while ($tmp2653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2653 = $tmp2653->next;
                    }
                    $fn2655 $tmp2654 = $tmp2653->methods[1];
                    panda$core$Object* $tmp2656 = $tmp2654(m$Iter2640);
                    m2652 = ((org$pandalanguage$pandac$MethodRef*) $tmp2656);
                    org$pandalanguage$pandac$Type* $tmp2657 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2652);
                    panda$collections$Array$add$panda$collections$Array$T(types2637, ((panda$core$Object*) $tmp2657));
                }
                goto $l2645;
                $l2646:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2658 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2658->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2658->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2660 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2660->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2660->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2660, ((panda$collections$ListView*) types2637));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2658, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2660, ((panda$collections$ListView*) children2631));
            return $tmp2658;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2663 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2663->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2663->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2663, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2662 = $tmp2663;
            org$pandalanguage$pandac$IRNode* $tmp2667 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2662, &$s2666, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2668 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2667);
            initCall2665 = $tmp2668;
            if (((panda$core$Bit) { initCall2665 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2670 = (panda$collections$Array*) malloc(40);
            $tmp2670->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2670->refCount.value = 1;
            panda$collections$Array$init($tmp2670);
            children2669 = $tmp2670;
            panda$collections$Array$add$panda$collections$Array$T(children2669, ((panda$core$Object*) initCall2665));
            org$pandalanguage$pandac$IRNode* $tmp2672 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2672->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2672->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2672, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2669));
            return $tmp2672;
        }
        break;
        case 1046:
        {
            c2674 = ((org$pandalanguage$pandac$ChoiceEntry*) p_m->payload);
            panda$core$Int64 $tmp2675 = panda$collections$Array$get_count$R$panda$core$Int64(c2674->fields);
            ITable* $tmp2676 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2676->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2676 = $tmp2676->next;
            }
            $fn2678 $tmp2677 = $tmp2676->methods[0];
            panda$core$Int64 $tmp2679 = $tmp2677(((panda$collections$CollectionView*) p_args));
            panda$core$Bit $tmp2680 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2675, $tmp2679);
            if ($tmp2680.value) {
            {
                panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2681, ((panda$core$Object*) p_m));
                panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2683);
                panda$core$Int64 $tmp2685 = panda$collections$Array$get_count$R$panda$core$Int64(c2674->fields);
                panda$core$Int64$wrapper* $tmp2686;
                $tmp2686 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp2686->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2686->refCount = 1;
                $tmp2686->value = $tmp2685;
                panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2684, ((panda$core$Object*) $tmp2686));
                panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, &$s2688);
                panda$core$Int64 $tmp2691 = panda$collections$Array$get_count$R$panda$core$Int64(c2674->fields);
                panda$core$Bit $tmp2692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2691, ((panda$core$Int64) { 1 }));
                panda$core$Bit$wrapper* $tmp2693;
                $tmp2693 = (panda$core$Bit$wrapper*) malloc(13);
                $tmp2693->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp2693->refCount = 1;
                $tmp2693->value = $tmp2692;
                ITable* $tmp2695 = ((panda$core$Formattable*) $tmp2693)->$class->itable;
                while ($tmp2695->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                    $tmp2695 = $tmp2695->next;
                }
                $fn2697 $tmp2696 = $tmp2695->methods[0];
                panda$core$String* $tmp2698 = $tmp2696(((panda$core$Formattable*) $tmp2693), &$s2694);
                panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2690, $tmp2698);
                panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2699, &$s2700);
                ITable* $tmp2702 = ((panda$collections$CollectionView*) p_args)->$class->itable;
                while ($tmp2702->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp2702 = $tmp2702->next;
                }
                $fn2704 $tmp2703 = $tmp2702->methods[0];
                panda$core$Int64 $tmp2705 = $tmp2703(((panda$collections$CollectionView*) p_args));
                panda$core$Int64$wrapper* $tmp2706;
                $tmp2706 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp2706->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2706->refCount = 1;
                $tmp2706->value = $tmp2705;
                panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2701, ((panda$core$Object*) $tmp2706));
                panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, &$s2708);
                panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, $tmp2709);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2710);
                return NULL;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, c2674);
            panda$collections$Array* $tmp2712 = (panda$collections$Array*) malloc(40);
            $tmp2712->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2712->refCount.value = 1;
            panda$collections$Array$init($tmp2712);
            finalArgs2711 = $tmp2712;
            panda$core$UInt64 $tmp2715 = panda$core$Int64$convert$R$panda$core$UInt64(c2674->rawValue);
            value2714 = $tmp2715;
            org$pandalanguage$pandac$IRNode* $tmp2716 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2716->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2716->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2718 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2714);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2716, ((panda$core$Int64) { 1004 }), p_m->position, $tmp2718, value2714);
            panda$collections$Array$add$panda$collections$Array$T(finalArgs2711, ((panda$core$Object*) $tmp2716));
            ITable* $tmp2720 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2720->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2720 = $tmp2720->next;
            }
            $fn2722 $tmp2721 = $tmp2720->methods[0];
            panda$core$Int64 $tmp2723 = $tmp2721(((panda$collections$CollectionView*) p_args));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2719, ((panda$core$Int64) { 0 }), $tmp2723, ((panda$core$Bit) { false }));
            int64_t $tmp2725 = $tmp2719.min.value;
            panda$core$Int64 i2724 = { $tmp2725 };
            int64_t $tmp2727 = $tmp2719.max.value;
            bool $tmp2728 = $tmp2719.inclusive.value;
            if ($tmp2728) goto $l2735; else goto $l2736;
            $l2735:;
            if ($tmp2725 <= $tmp2727) goto $l2729; else goto $l2731;
            $l2736:;
            if ($tmp2725 < $tmp2727) goto $l2729; else goto $l2731;
            $l2729:;
            {
                ITable* $tmp2738 = p_args->$class->itable;
                while ($tmp2738->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2738 = $tmp2738->next;
                }
                $fn2740 $tmp2739 = $tmp2738->methods[0];
                panda$core$Object* $tmp2741 = $tmp2739(p_args, i2724);
                panda$core$Object* $tmp2742 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(c2674->fields, i2724);
                org$pandalanguage$pandac$IRNode* $tmp2743 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2741), ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp2742)->second));
                arg2737 = $tmp2743;
                if (((panda$core$Bit) { arg2737 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2711, ((panda$core$Object*) arg2737));
            }
            $l2732:;
            int64_t $tmp2745 = $tmp2727 - i2724.value;
            if ($tmp2728) goto $l2746; else goto $l2747;
            $l2746:;
            if ((uint64_t) $tmp2745 >= 1) goto $l2744; else goto $l2731;
            $l2747:;
            if ((uint64_t) $tmp2745 > 1) goto $l2744; else goto $l2731;
            $l2744:;
            i2724.value += 1;
            goto $l2729;
            $l2731:;
            org$pandalanguage$pandac$IRNode* $tmp2751 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2751->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2751->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2753 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp2754 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(c2674->owner);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2751, ((panda$core$Int64) { 1001 }), p_m->position, $tmp2753, $tmp2754);
            owner2750 = $tmp2751;
            org$pandalanguage$pandac$IRNode* $tmp2755 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, owner2750, ((panda$collections$ListView*) finalArgs2711));
            return $tmp2755;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2757 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2756 = $tmp2757;
            if (((panda$core$Bit) { resolved2756 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2759 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2758, ((panda$core$Object*) resolved2756->type));
            panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2759, &$s2760);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2756->position, $tmp2761);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2762;
    panda$core$MutableString* typeName2765;
    panda$core$String* separator2769;
    panda$collections$Iterator* p$Iter2771;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2783;
    panda$core$Int64 kind2789;
    panda$core$Char8 $tmp2795;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2763 = (panda$collections$Array*) malloc(40);
    $tmp2763->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2763->refCount.value = 1;
    panda$collections$Array$init($tmp2763);
    subtypes2762 = $tmp2763;
    panda$core$MutableString* $tmp2766 = (panda$core$MutableString*) malloc(48);
    $tmp2766->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2766->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2766, &$s2768);
    typeName2765 = $tmp2766;
    separator2769 = &$s2770;
    {
        ITable* $tmp2772 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2772->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2772 = $tmp2772->next;
        }
        $fn2774 $tmp2773 = $tmp2772->methods[0];
        panda$collections$Iterator* $tmp2775 = $tmp2773(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2771 = $tmp2775;
        $l2776:;
        ITable* $tmp2778 = p$Iter2771->$class->itable;
        while ($tmp2778->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2778 = $tmp2778->next;
        }
        $fn2780 $tmp2779 = $tmp2778->methods[0];
        panda$core$Bit $tmp2781 = $tmp2779(p$Iter2771);
        panda$core$Bit $tmp2782 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2781);
        if (!$tmp2782.value) goto $l2777;
        {
            ITable* $tmp2784 = p$Iter2771->$class->itable;
            while ($tmp2784->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2784 = $tmp2784->next;
            }
            $fn2786 $tmp2785 = $tmp2784->methods[1];
            panda$core$Object* $tmp2787 = $tmp2785(p$Iter2771);
            p2783 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2787);
            panda$core$MutableString$append$panda$core$String(typeName2765, separator2769);
            panda$core$MutableString$append$panda$core$String(typeName2765, ((org$pandalanguage$pandac$Symbol*) p2783->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2762, ((panda$core$Object*) p2783->type));
            separator2769 = &$s2788;
        }
        goto $l2776;
        $l2777:;
    }
    panda$core$Bit $tmp2790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp2790.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2765, &$s2791);
        kind2789 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2765, &$s2792);
        kind2789 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2762, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2793 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2794 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2793);
    if ($tmp2794.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2765, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2795, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2765, $tmp2795);
    org$pandalanguage$pandac$Type* $tmp2796 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2796->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2796->refCount.value = 1;
    panda$core$String* $tmp2798 = panda$core$MutableString$finish$R$panda$core$String(typeName2765);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2796, $tmp2798, kind2789, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2762), ((panda$core$Bit) { true }));
    return $tmp2796;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2799;
    panda$core$MutableString* typeName2802;
    panda$collections$Iterator* p$Iter2806;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2818;
    panda$core$Int64 kind2824;
    panda$core$Char8 $tmp2830;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2800 = (panda$collections$Array*) malloc(40);
    $tmp2800->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2800->refCount.value = 1;
    panda$collections$Array$init($tmp2800);
    subtypes2799 = $tmp2800;
    panda$core$MutableString* $tmp2803 = (panda$core$MutableString*) malloc(48);
    $tmp2803->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2803->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2803, &$s2805);
    typeName2802 = $tmp2803;
    panda$core$MutableString$append$panda$core$String(typeName2802, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2799, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2807 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2807->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2807 = $tmp2807->next;
        }
        $fn2809 $tmp2808 = $tmp2807->methods[0];
        panda$collections$Iterator* $tmp2810 = $tmp2808(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2806 = $tmp2810;
        $l2811:;
        ITable* $tmp2813 = p$Iter2806->$class->itable;
        while ($tmp2813->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2813 = $tmp2813->next;
        }
        $fn2815 $tmp2814 = $tmp2813->methods[0];
        panda$core$Bit $tmp2816 = $tmp2814(p$Iter2806);
        panda$core$Bit $tmp2817 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2816);
        if (!$tmp2817.value) goto $l2812;
        {
            ITable* $tmp2819 = p$Iter2806->$class->itable;
            while ($tmp2819->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2819 = $tmp2819->next;
            }
            $fn2821 $tmp2820 = $tmp2819->methods[1];
            panda$core$Object* $tmp2822 = $tmp2820(p$Iter2806);
            p2818 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2822);
            panda$core$MutableString$append$panda$core$String(typeName2802, &$s2823);
            panda$core$MutableString$append$panda$core$String(typeName2802, ((org$pandalanguage$pandac$Symbol*) p2818->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2799, ((panda$core$Object*) p2818->type));
        }
        goto $l2811;
        $l2812:;
    }
    panda$core$Bit $tmp2825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp2825.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2802, &$s2826);
        kind2824 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2802, &$s2827);
        kind2824 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2799, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2828 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2829 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2828);
    if ($tmp2829.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2802, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2830, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2802, $tmp2830);
    org$pandalanguage$pandac$Type* $tmp2831 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2831->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2831->refCount.value = 1;
    panda$core$String* $tmp2833 = panda$core$MutableString$finish$R$panda$core$String(typeName2802);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2831, $tmp2833, kind2824, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2799), ((panda$core$Bit) { true }));
    return $tmp2831;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2834;
    org$pandalanguage$pandac$MethodDecl* $tmp2835 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2834 = $tmp2835;
    if (((panda$core$Bit) { inherited2834 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2836 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2836;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2837 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2834);
    return $tmp2837;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2838 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2839 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2838);
    return $tmp2839;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2840;
    org$pandalanguage$pandac$MethodDecl* $tmp2841 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2840 = $tmp2841;
    if (((panda$core$Bit) { inherited2840 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2842 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2842;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2843 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2840, p_selfType);
    return $tmp2843;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2844;
        }
        break;
        case 52:
        {
            return &$s2845;
        }
        break;
        case 53:
        {
            return &$s2846;
        }
        break;
        case 54:
        {
            return &$s2847;
        }
        break;
        case 55:
        {
            return &$s2848;
        }
        break;
        case 56:
        {
            return &$s2849;
        }
        break;
        case 57:
        {
            return &$s2850;
        }
        break;
        case 58:
        {
            return &$s2851;
        }
        break;
        case 59:
        {
            return &$s2852;
        }
        break;
        case 63:
        {
            return &$s2853;
        }
        break;
        case 62:
        {
            return &$s2854;
        }
        break;
        case 65:
        {
            return &$s2855;
        }
        break;
        case 64:
        {
            return &$s2856;
        }
        break;
        case 68:
        {
            return &$s2857;
        }
        break;
        case 69:
        {
            return &$s2858;
        }
        break;
        case 66:
        {
            return &$s2859;
        }
        break;
        case 67:
        {
            return &$s2860;
        }
        break;
        case 70:
        {
            return &$s2861;
        }
        break;
        case 71:
        {
            return &$s2862;
        }
        break;
        case 49:
        {
            return &$s2863;
        }
        break;
        case 50:
        {
            return &$s2864;
        }
        break;
        case 72:
        {
            return &$s2865;
        }
        break;
        case 1:
        {
            return &$s2866;
        }
        break;
        case 101:
        {
            return &$s2867;
        }
        break;
        case 73:
        {
            return &$s2868;
        }
        break;
        case 60:
        {
            return &$s2869;
        }
        break;
        case 61:
        {
            return &$s2870;
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
            panda$core$Int64 $tmp2871 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2871, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2872.value);
            panda$core$Bit $tmp2873 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2873.value) {
            {
                panda$core$Object* $tmp2874 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2875 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2874));
                return $tmp2875;
            }
            }
            return ((panda$core$Bit) { false });
        }
        break;
        case 1026:
        case 1016:
        case 1047:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2876 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2877 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2876));
            return $tmp2877;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2903;
    panda$core$Int64 r2905;
    panda$core$UInt64 v2907;
    panda$core$UInt64 v2913;
    panda$core$UInt64 v2919;
    panda$core$UInt64 v2925;
    panda$core$UInt64 v2931;
    panda$core$UInt64 v2961;
    panda$core$UInt64 v2967;
    panda$core$UInt64 v2973;
    panda$core$UInt64 v2979;
    panda$core$UInt64 v2985;
    panda$core$Bit $tmp2879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2878 = $tmp2879.value;
    if ($tmp2878) goto $l2880;
    panda$core$Bit $tmp2881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2878 = $tmp2881.value;
    $l2880:;
    panda$core$Bit $tmp2882 = { $tmp2878 };
    PANDA_ASSERT($tmp2882.value);
    panda$core$Bit $tmp2884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2883 = $tmp2884.value;
    if ($tmp2883) goto $l2885;
    panda$core$Bit $tmp2886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2883 = $tmp2886.value;
    $l2885:;
    panda$core$Bit $tmp2887 = { $tmp2883 };
    PANDA_ASSERT($tmp2887.value);
    panda$core$Bit $tmp2890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2889 = $tmp2890.value;
    if ($tmp2889) goto $l2891;
    panda$core$UInt64 $tmp2893 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2894 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2893);
    bool $tmp2892 = $tmp2894.value;
    if (!$tmp2892) goto $l2895;
    panda$core$Bit $tmp2896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2892 = $tmp2896.value;
    $l2895:;
    panda$core$Bit $tmp2897 = { $tmp2892 };
    $tmp2889 = $tmp2897.value;
    $l2891:;
    panda$core$Bit $tmp2898 = { $tmp2889 };
    bool $tmp2888 = $tmp2898.value;
    if ($tmp2888) goto $l2899;
    panda$core$UInt64 $tmp2900 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2901 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2900);
    $tmp2888 = $tmp2901.value;
    $l2899:;
    panda$core$Bit $tmp2902 = { $tmp2888 };
    if ($tmp2902.value) {
    {
        panda$core$Int64 $tmp2904 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2903 = $tmp2904;
        panda$core$Int64 $tmp2906 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2905 = $tmp2906;
        switch (p_op.value) {
            case 51:
            {
                panda$core$Int64 $tmp2908 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2903, r2905);
                panda$core$UInt64 $tmp2909 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2908);
                v2907 = $tmp2909;
                org$pandalanguage$pandac$IRNode* $tmp2910 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2910->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2910->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2912 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2907);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2910, ((panda$core$Int64) { 1004 }), p_position, $tmp2912, v2907);
                return $tmp2910;
            }
            break;
            case 52:
            {
                panda$core$Int64 $tmp2914 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2903, r2905);
                panda$core$UInt64 $tmp2915 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2914);
                v2913 = $tmp2915;
                org$pandalanguage$pandac$IRNode* $tmp2916 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2916->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2916->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2918 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2913);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2916, ((panda$core$Int64) { 1004 }), p_position, $tmp2918, v2913);
                return $tmp2916;
            }
            break;
            case 53:
            {
                panda$core$Int64 $tmp2920 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2903, r2905);
                panda$core$UInt64 $tmp2921 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2920);
                v2919 = $tmp2921;
                org$pandalanguage$pandac$IRNode* $tmp2922 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2922->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2922->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2924 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2919);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2922, ((panda$core$Int64) { 1004 }), p_position, $tmp2924, v2919);
                return $tmp2922;
            }
            break;
            case 55:
            {
                panda$core$Int64 $tmp2926 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2903, r2905);
                panda$core$UInt64 $tmp2927 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2926);
                v2925 = $tmp2927;
                org$pandalanguage$pandac$IRNode* $tmp2928 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2928->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2928->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2930 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2925);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2928, ((panda$core$Int64) { 1004 }), p_position, $tmp2930, v2925);
                return $tmp2928;
            }
            break;
            case 56:
            {
                panda$core$Int64 $tmp2932 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2903, r2905);
                panda$core$UInt64 $tmp2933 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2932);
                v2931 = $tmp2933;
                org$pandalanguage$pandac$IRNode* $tmp2934 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2934->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2934->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2936 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2931);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2934, ((panda$core$Int64) { 1004 }), p_position, $tmp2936, v2931);
                return $tmp2934;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2937 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2937->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2937->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2939 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2903, r2905);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2937, ((panda$core$Int64) { 1011 }), p_position, $tmp2939, $tmp2940);
                return $tmp2937;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2941 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2941->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2941->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2943 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2944 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2903, r2905);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2941, ((panda$core$Int64) { 1011 }), p_position, $tmp2943, $tmp2944);
                return $tmp2941;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2945 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2945->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2945->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2947 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2948 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2903, r2905);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2945, ((panda$core$Int64) { 1011 }), p_position, $tmp2947, $tmp2948);
                return $tmp2945;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2949 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2949->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2949->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2951 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2952 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2903, r2905);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2949, ((panda$core$Int64) { 1011 }), p_position, $tmp2951, $tmp2952);
                return $tmp2949;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2953 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2953->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2953->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2955 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2956 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2903, r2905);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2953, ((panda$core$Int64) { 1011 }), p_position, $tmp2955, $tmp2956);
                return $tmp2953;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2957 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2957->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2957->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2959 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2960 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2903, r2905);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2957, ((panda$core$Int64) { 1011 }), p_position, $tmp2959, $tmp2960);
                return $tmp2957;
            }
            break;
            case 67:
            {
                panda$core$Int64 $tmp2962 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2903, r2905);
                panda$core$UInt64 $tmp2963 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2962);
                v2961 = $tmp2963;
                org$pandalanguage$pandac$IRNode* $tmp2964 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2964->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2964->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2966 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2961);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2964, ((panda$core$Int64) { 1004 }), p_position, $tmp2966, v2961);
                return $tmp2964;
            }
            break;
            case 69:
            {
                panda$core$Int64 $tmp2968 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2903, r2905);
                panda$core$UInt64 $tmp2969 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2968);
                v2967 = $tmp2969;
                org$pandalanguage$pandac$IRNode* $tmp2970 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2970->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2970->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2972 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2967);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2970, ((panda$core$Int64) { 1004 }), p_position, $tmp2972, v2967);
                return $tmp2970;
            }
            break;
            case 71:
            {
                panda$core$Int64 $tmp2974 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2903, r2905);
                panda$core$UInt64 $tmp2975 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2974);
                v2973 = $tmp2975;
                org$pandalanguage$pandac$IRNode* $tmp2976 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2976->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2976->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2978 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2973);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2976, ((panda$core$Int64) { 1004 }), p_position, $tmp2978, v2973);
                return $tmp2976;
            }
            break;
            case 72:
            {
                panda$core$Int64 $tmp2980 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2903, r2905);
                panda$core$UInt64 $tmp2981 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2980);
                v2979 = $tmp2981;
                org$pandalanguage$pandac$IRNode* $tmp2982 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2982->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2982->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2984 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2979);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2982, ((panda$core$Int64) { 1004 }), p_position, $tmp2984, v2979);
                return $tmp2982;
            }
            break;
            case 1:
            {
                panda$core$Int64 $tmp2986 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2903, r2905);
                panda$core$UInt64 $tmp2987 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2986);
                v2985 = $tmp2987;
                org$pandalanguage$pandac$IRNode* $tmp2988 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2988->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2988->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2990 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2985);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2988, ((panda$core$Int64) { 1004 }), p_position, $tmp2990, v2985);
                return $tmp2988;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2991);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2992.value) {
    {
        panda$core$Object* $tmp2993 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2993);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2998;
    org$pandalanguage$pandac$IRNode* resolved3006;
    panda$collections$Array* children3011;
    panda$core$UInt64 baseId3017;
    org$pandalanguage$pandac$IRNode* base3018;
    panda$core$UInt64 indexId3026;
    org$pandalanguage$pandac$IRNode* index3027;
    org$pandalanguage$pandac$IRNode* baseRef3033;
    org$pandalanguage$pandac$IRNode* indexRef3036;
    org$pandalanguage$pandac$IRNode* rhsIndex3039;
    org$pandalanguage$pandac$IRNode* value3041;
    panda$core$Bit $tmp2994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2994.value);
    panda$core$Int64 $tmp2995 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2995, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2996.value);
    panda$core$Bit $tmp2997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2997.value) {
    {
        panda$collections$Array* $tmp2999 = (panda$collections$Array*) malloc(40);
        $tmp2999->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2999->refCount.value = 1;
        panda$collections$Array$init($tmp2999);
        args2998 = $tmp2999;
        panda$core$Object* $tmp3001 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2998, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3001)));
        panda$collections$Array$add$panda$collections$Array$T(args2998, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp3002 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3004 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp3002), &$s3003, ((panda$collections$ListView*) args2998));
        return $tmp3004;
    }
    }
    panda$core$Bit $tmp3005 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp3005.value);
    org$pandalanguage$pandac$IRNode* $tmp3007 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved3006 = $tmp3007;
    if (((panda$core$Bit) { resolved3006 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3008 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved3006);
    resolved3006 = $tmp3008;
    panda$core$Int64 $tmp3009 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved3006->children);
    panda$core$Bit $tmp3010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3009, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3010.value);
    panda$collections$Array* $tmp3012 = (panda$collections$Array*) malloc(40);
    $tmp3012->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3012->refCount.value = 1;
    panda$collections$Array$init($tmp3012);
    children3011 = $tmp3012;
    panda$core$Object* $tmp3014 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved3006->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3015 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp3014));
    panda$collections$Array$add$panda$collections$Array$T(children3011, ((panda$core$Object*) $tmp3015));
    panda$core$UInt64 $tmp3016 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp3016;
    baseId3017 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp3019 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3019->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3019->refCount.value = 1;
    panda$core$Object* $tmp3021 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3011, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3022 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3011, ((panda$core$Int64) { 0 }));
    panda$core$UInt64$wrapper* $tmp3023;
    $tmp3023 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp3023->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp3023->refCount = 1;
    $tmp3023->value = baseId3017;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3019, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp3021)->position, ((org$pandalanguage$pandac$IRNode*) $tmp3022)->type, ((panda$core$Object*) $tmp3023), ((panda$collections$ListView*) children3011));
    base3018 = $tmp3019;
    panda$collections$Array$clear(children3011);
    panda$core$Object* $tmp3024 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved3006->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children3011, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3024)));
    panda$core$UInt64 $tmp3025 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp3025;
    indexId3026 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp3028 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3028->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3028->refCount.value = 1;
    panda$core$Object* $tmp3030 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3011, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3031 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3011, ((panda$core$Int64) { 0 }));
    panda$core$UInt64$wrapper* $tmp3032;
    $tmp3032 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp3032->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp3032->refCount = 1;
    $tmp3032->value = indexId3026;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3028, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp3030)->position, ((org$pandalanguage$pandac$IRNode*) $tmp3031)->type, ((panda$core$Object*) $tmp3032), ((panda$collections$ListView*) children3011));
    index3027 = $tmp3028;
    org$pandalanguage$pandac$IRNode* $tmp3034 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3034->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3034->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3034, ((panda$core$Int64) { 1028 }), base3018->position, base3018->type, baseId3017);
    baseRef3033 = $tmp3034;
    org$pandalanguage$pandac$IRNode* $tmp3037 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3037->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3037->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3037, ((panda$core$Int64) { 1028 }), index3027->position, index3027->type, indexId3026);
    indexRef3036 = $tmp3037;
    org$pandalanguage$pandac$IRNode* $tmp3040 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef3033, ((panda$core$Int64) { 101 }), indexRef3036);
    rhsIndex3039 = $tmp3040;
    if (((panda$core$Bit) { rhsIndex3039 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp3042 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3043 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex3039, $tmp3042, p_right);
    value3041 = $tmp3043;
    if (((panda$core$Bit) { value3041 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3046 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex3039->type);
    bool $tmp3045 = $tmp3046.value;
    if (!$tmp3045) goto $l3047;
    panda$core$Bit $tmp3048 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp3045 = $tmp3048.value;
    $l3047:;
    panda$core$Bit $tmp3049 = { $tmp3045 };
    bool $tmp3044 = $tmp3049.value;
    if (!$tmp3044) goto $l3050;
    panda$core$Bit $tmp3051 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex3039->type, value3041->type);
    $tmp3044 = $tmp3051.value;
    $l3050:;
    panda$core$Bit $tmp3052 = { $tmp3044 };
    if ($tmp3052.value) {
    {
        panda$collections$Array* $tmp3054 = (panda$collections$Array*) malloc(40);
        $tmp3054->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3054->refCount.value = 1;
        panda$collections$Array$init($tmp3054);
        org$pandalanguage$pandac$IRNode* $tmp3056 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3041, &$s3053, ((panda$collections$ListView*) $tmp3054), resolved3006->type);
        value3041 = $tmp3056;
        if (((panda$core$Bit) { value3041 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children3011);
    panda$collections$Array$add$panda$collections$Array$T(children3011, ((panda$core$Object*) index3027));
    panda$collections$Array$add$panda$collections$Array$T(children3011, ((panda$core$Object*) value3041));
    org$pandalanguage$pandac$IRNode* $tmp3058 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base3018, &$s3057, ((panda$collections$ListView*) children3011));
    return $tmp3058;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left3059;
    org$pandalanguage$pandac$IRNode* right3060;
    panda$core$Int64 kind3084;
    org$pandalanguage$pandac$IRNode* resolved3091;
    panda$collections$Array* children3093;
    org$pandalanguage$pandac$IRNode* resolved3100;
    panda$collections$Array* children3102;
    panda$collections$Array* children3119;
    org$pandalanguage$pandac$IRNode* reusedLeft3125;
    org$pandalanguage$pandac$IRNode* toNonNullable3128;
    org$pandalanguage$pandac$IRNode* comparison3131;
    org$pandalanguage$pandac$IRNode* nullCheck3133;
    org$pandalanguage$pandac$ClassDecl* cl3153;
    org$pandalanguage$pandac$ClassDecl* cl3170;
    org$pandalanguage$pandac$IRNode* finalLeft3186;
    org$pandalanguage$pandac$IRNode* finalRight3189;
    panda$collections$Array* children3192;
    panda$collections$Array* children3207;
    panda$collections$Array* children3220;
    org$pandalanguage$pandac$IRNode* reusedLeft3227;
    org$pandalanguage$pandac$ClassDecl* cl3245;
    panda$collections$ListView* parameters3247;
    org$pandalanguage$pandac$Symbol* methods3249;
    org$pandalanguage$pandac$Type* type3253;
    panda$collections$Array* types3254;
    org$pandalanguage$pandac$MethodDecl* m3258;
    panda$collections$Iterator* m$Iter3263;
    org$pandalanguage$pandac$MethodDecl* m3275;
    panda$collections$Array* children3286;
    panda$collections$Array* children3315;
    panda$collections$Array* children3332;
    org$pandalanguage$pandac$Type* resultType3355;
    org$pandalanguage$pandac$IRNode* result3360;
    org$pandalanguage$pandac$IRNode* resolved3363;
    org$pandalanguage$pandac$IRNode* target3369;
    left3059 = p_rawLeft;
    right3060 = p_rawRight;
    panda$core$Bit $tmp3061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3059->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp3061.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3062 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3060);
        right3060 = $tmp3062;
        if (((panda$core$Bit) { right3060 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp3063 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left3059, right3060->type);
        if (((panda$core$Bit) { $tmp3063.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3064 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3059, right3060->type);
            left3059 = $tmp3064;
        }
        }
    }
    }
    panda$core$Bit $tmp3066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3060->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp3065 = $tmp3066.value;
    if (!$tmp3065) goto $l3067;
    panda$core$Int64$nullable $tmp3068 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3060, left3059->type);
    $tmp3065 = ((panda$core$Bit) { $tmp3068.nonnull }).value;
    $l3067:;
    panda$core$Bit $tmp3069 = { $tmp3065 };
    if ($tmp3069.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3070 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3060, left3059->type);
        right3060 = $tmp3070;
    }
    }
    panda$core$Bit $tmp3074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp3073 = $tmp3074.value;
    if ($tmp3073) goto $l3075;
    panda$core$Bit $tmp3076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp3073 = $tmp3076.value;
    $l3075:;
    panda$core$Bit $tmp3077 = { $tmp3073 };
    bool $tmp3072 = $tmp3077.value;
    if ($tmp3072) goto $l3078;
    panda$core$Bit $tmp3079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp3072 = $tmp3079.value;
    $l3078:;
    panda$core$Bit $tmp3080 = { $tmp3072 };
    bool $tmp3071 = $tmp3080.value;
    if ($tmp3071) goto $l3081;
    panda$core$Bit $tmp3082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp3071 = $tmp3082.value;
    $l3081:;
    panda$core$Bit $tmp3083 = { $tmp3071 };
    if ($tmp3083.value) {
    {
        panda$core$Bit $tmp3086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp3085 = $tmp3086.value;
        if ($tmp3085) goto $l3087;
        panda$core$Bit $tmp3088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp3085 = $tmp3088.value;
        $l3087:;
        panda$core$Bit $tmp3089 = { $tmp3085 };
        if ($tmp3089.value) {
        {
            kind3084 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind3084 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp3090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3059->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3090.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3092 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3060);
            resolved3091 = $tmp3092;
            if (((panda$core$Bit) { resolved3091 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3094 = (panda$collections$Array*) malloc(40);
            $tmp3094->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3094->refCount.value = 1;
            panda$collections$Array$init($tmp3094);
            children3093 = $tmp3094;
            panda$collections$Array$add$panda$collections$Array$T(children3093, ((panda$core$Object*) resolved3091));
            org$pandalanguage$pandac$IRNode* $tmp3096 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3096->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3096->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3098 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3096, kind3084, p_position, $tmp3098, ((panda$collections$ListView*) children3093));
            return $tmp3096;
        }
        }
        panda$core$Bit $tmp3099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3060->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3099.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3101 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3059);
            resolved3100 = $tmp3101;
            if (((panda$core$Bit) { resolved3100 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3103 = (panda$collections$Array*) malloc(40);
            $tmp3103->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3103->refCount.value = 1;
            panda$collections$Array$init($tmp3103);
            children3102 = $tmp3103;
            panda$collections$Array$add$panda$collections$Array$T(children3102, ((panda$core$Object*) resolved3100));
            org$pandalanguage$pandac$IRNode* $tmp3105 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3105->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3105->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3107 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3105, kind3084, p_position, $tmp3107, ((panda$collections$ListView*) children3102));
            return $tmp3105;
        }
        }
    }
    }
    panda$core$Bit $tmp3110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp3109 = $tmp3110.value;
    if ($tmp3109) goto $l3111;
    panda$core$Bit $tmp3112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp3109 = $tmp3112.value;
    $l3111:;
    panda$core$Bit $tmp3113 = { $tmp3109 };
    bool $tmp3108 = $tmp3113.value;
    if (!$tmp3108) goto $l3114;
    panda$core$Bit $tmp3115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3059->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp3108 = $tmp3115.value;
    $l3114:;
    panda$core$Bit $tmp3116 = { $tmp3108 };
    if ($tmp3116.value) {
    {
        panda$core$Bit $tmp3117 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right3060->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp3117.value);
        panda$core$UInt64 $tmp3118 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp3118;
        panda$collections$Array* $tmp3120 = (panda$collections$Array*) malloc(40);
        $tmp3120->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3120->refCount.value = 1;
        panda$collections$Array$init($tmp3120);
        children3119 = $tmp3120;
        panda$collections$Array$add$panda$collections$Array$T(children3119, ((panda$core$Object*) left3059));
        org$pandalanguage$pandac$IRNode* $tmp3122 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3122->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3122->refCount.value = 1;
        panda$core$UInt64$wrapper* $tmp3124;
        $tmp3124 = (panda$core$UInt64$wrapper*) malloc(24);
        $tmp3124->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
        $tmp3124->refCount = 1;
        $tmp3124->value = self->reusedValueCount;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3122, ((panda$core$Int64) { 1027 }), left3059->position, left3059->type, ((panda$core$Object*) $tmp3124), ((panda$collections$ListView*) children3119));
        left3059 = $tmp3122;
        org$pandalanguage$pandac$IRNode* $tmp3126 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3126->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3126->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3126, ((panda$core$Int64) { 1028 }), left3059->position, left3059->type, self->reusedValueCount);
        reusedLeft3125 = $tmp3126;
        panda$core$Object* $tmp3129 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left3059->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3130 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft3125, ((org$pandalanguage$pandac$Type*) $tmp3129));
        toNonNullable3128 = $tmp3130;
        org$pandalanguage$pandac$IRNode* $tmp3132 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable3128, p_op, right3060);
        comparison3131 = $tmp3132;
        if (((panda$core$Bit) { comparison3131 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3134 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3134->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3134->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3136 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3134, ((panda$core$Int64) { 1030 }), p_position, $tmp3136);
        org$pandalanguage$pandac$IRNode* $tmp3137 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3059, ((panda$core$Int64) { 59 }), $tmp3134);
        nullCheck3133 = $tmp3137;
        if (((panda$core$Bit) { nullCheck3133 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children3119);
        panda$collections$Array$add$panda$collections$Array$T(children3119, ((panda$core$Object*) nullCheck3133));
        panda$collections$Array$add$panda$collections$Array$T(children3119, ((panda$core$Object*) comparison3131));
        org$pandalanguage$pandac$IRNode* $tmp3138 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3138->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3138->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3140 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3138, ((panda$core$Int64) { 1011 }), p_position, $tmp3140, $tmp3141);
        org$pandalanguage$pandac$Type* $tmp3142 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3143 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3138, $tmp3142);
        panda$collections$Array$add$panda$collections$Array$T(children3119, ((panda$core$Object*) $tmp3143));
        org$pandalanguage$pandac$IRNode* $tmp3144 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3144->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3144->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3146 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3144, ((panda$core$Int64) { 1044 }), p_position, $tmp3146, ((panda$collections$ListView*) children3119));
        return $tmp3144;
    }
    }
    panda$core$Bit $tmp3148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp3147 = $tmp3148.value;
    if ($tmp3147) goto $l3149;
    panda$core$Bit $tmp3150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp3147 = $tmp3150.value;
    $l3149:;
    panda$core$Bit $tmp3151 = { $tmp3147 };
    if ($tmp3151.value) {
    {
        panda$core$Bit $tmp3152 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left3059->type);
        if ($tmp3152.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3154 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left3059->type);
            cl3153 = $tmp3154;
            if (((panda$core$Bit) { cl3153 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3155 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3153);
            if ($tmp3155.value) {
            {
                panda$core$String* $tmp3157 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3156, $tmp3157);
                panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3159);
                panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3160, ((panda$core$Object*) left3059->type));
                panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, &$s3162);
                panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3164, ((panda$core$Object*) right3060->type));
                panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, &$s3166);
                panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, $tmp3167);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3168);
            }
            }
        }
        }
        panda$core$Bit $tmp3169 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right3060->type);
        if ($tmp3169.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3171 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right3060->type);
            cl3170 = $tmp3171;
            if (((panda$core$Bit) { cl3170 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3172 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3170);
            if ($tmp3172.value) {
            {
                panda$core$String* $tmp3174 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3173, $tmp3174);
                panda$core$String* $tmp3177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3175, &$s3176);
                panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3177, ((panda$core$Object*) left3059->type));
                panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, &$s3179);
                panda$core$String* $tmp3182 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3181, ((panda$core$Object*) right3060->type));
                panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3182, &$s3183);
                panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3180, $tmp3184);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3185);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp3187 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3188 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3059, $tmp3187);
        finalLeft3186 = $tmp3188;
        if (((panda$core$Bit) { finalLeft3186 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3190 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3191 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3060, $tmp3190);
        finalRight3189 = $tmp3191;
        if (((panda$core$Bit) { finalRight3189 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3193 = (panda$collections$Array*) malloc(40);
        $tmp3193->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3193->refCount.value = 1;
        panda$collections$Array$init($tmp3193);
        children3192 = $tmp3193;
        panda$collections$Array$add$panda$collections$Array$T(children3192, ((panda$core$Object*) finalLeft3186));
        panda$collections$Array$add$panda$collections$Array$T(children3192, ((panda$core$Object*) finalRight3189));
        org$pandalanguage$pandac$IRNode* $tmp3195 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3195->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3195->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3197 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        panda$core$Int64$wrapper* $tmp3198;
        $tmp3198 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp3198->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp3198->refCount = 1;
        $tmp3198->value = p_op;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3195, ((panda$core$Int64) { 1023 }), p_position, $tmp3197, ((panda$core$Object*) $tmp3198), ((panda$collections$ListView*) children3192));
        return $tmp3195;
    }
    }
    panda$core$Bit $tmp3199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp3199.value) {
    {
        panda$core$Bit $tmp3200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3059->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3200.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3201 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3059, p_op, right3060);
            return $tmp3201;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3202 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3059);
        left3059 = $tmp3202;
        if (((panda$core$Bit) { left3059 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3203 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3060, left3059->type);
        right3060 = $tmp3203;
        if (((panda$core$Bit) { right3060 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3204 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3059);
        panda$core$Bit $tmp3205 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3204);
        if ($tmp3205.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left3059->position, &$s3206);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3208 = (panda$collections$Array*) malloc(40);
        $tmp3208->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3208->refCount.value = 1;
        panda$collections$Array$init($tmp3208);
        children3207 = $tmp3208;
        panda$collections$Array$add$panda$collections$Array$T(children3207, ((panda$core$Object*) left3059));
        panda$collections$Array$add$panda$collections$Array$T(children3207, ((panda$core$Object*) right3060));
        org$pandalanguage$pandac$IRNode* $tmp3210 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3210->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3210->refCount.value = 1;
        panda$core$Int64$wrapper* $tmp3212;
        $tmp3212 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp3212->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp3212->refCount = 1;
        $tmp3212->value = ((panda$core$Int64) { 73 });
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3210, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) $tmp3212), ((panda$collections$ListView*) children3207));
        return $tmp3210;
    }
    }
    panda$core$Bit $tmp3213 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp3213.value) {
    {
        panda$core$Bit $tmp3214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3059->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3214.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3215 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3059, p_op, right3060);
            return $tmp3215;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3216 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3059);
        left3059 = $tmp3216;
        if (((panda$core$Bit) { left3059 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3217 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3059);
        panda$core$Bit $tmp3218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3217);
        if ($tmp3218.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left3059->position, &$s3219);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3221 = (panda$collections$Array*) malloc(40);
        $tmp3221->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3221->refCount.value = 1;
        panda$collections$Array$init($tmp3221);
        children3220 = $tmp3221;
        panda$collections$Array$add$panda$collections$Array$T(children3220, ((panda$core$Object*) left3059));
        panda$core$UInt64 $tmp3223 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp3223;
        org$pandalanguage$pandac$IRNode* $tmp3224 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3224->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3224->refCount.value = 1;
        panda$core$UInt64$wrapper* $tmp3226;
        $tmp3226 = (panda$core$UInt64$wrapper*) malloc(24);
        $tmp3226->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
        $tmp3226->refCount = 1;
        $tmp3226->value = self->reusedValueCount;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3224, ((panda$core$Int64) { 1027 }), left3059->position, left3059->type, ((panda$core$Object*) $tmp3226), ((panda$collections$ListView*) children3220));
        left3059 = $tmp3224;
        org$pandalanguage$pandac$IRNode* $tmp3228 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3228->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3228->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3228, ((panda$core$Int64) { 1028 }), left3059->position, left3059->type, self->reusedValueCount);
        reusedLeft3227 = $tmp3228;
        panda$core$Int64 $tmp3230 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp3231 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft3227, $tmp3230, right3060);
        right3060 = $tmp3231;
        if (((panda$core$Bit) { right3060 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3233 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left3059->type);
        bool $tmp3232 = $tmp3233.value;
        if (!$tmp3232) goto $l3234;
        panda$core$Bit $tmp3235 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left3059->type, right3060->type);
        $tmp3232 = $tmp3235.value;
        $l3234:;
        panda$core$Bit $tmp3236 = { $tmp3232 };
        if ($tmp3236.value) {
        {
            panda$collections$Array* $tmp3238 = (panda$collections$Array*) malloc(40);
            $tmp3238->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3238->refCount.value = 1;
            panda$collections$Array$init($tmp3238);
            org$pandalanguage$pandac$IRNode* $tmp3240 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3060, &$s3237, ((panda$collections$ListView*) $tmp3238), left3059->type);
            right3060 = $tmp3240;
            if (((panda$core$Bit) { right3060 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3241 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3059, ((panda$core$Int64) { 73 }), right3060);
        return $tmp3241;
    }
    }
    panda$core$Bit $tmp3242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp3242.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3243 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3059);
        left3059 = $tmp3243;
        if (((panda$core$Bit) { left3059 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3244 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left3059->type);
        if ($tmp3244.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3246 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left3059->type);
            cl3245 = $tmp3246;
            if (((panda$core$Bit) { cl3245 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$ListView* $tmp3248 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left3059->type);
            parameters3247 = $tmp3248;
            org$pandalanguage$pandac$SymbolTable* $tmp3250 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3245);
            org$pandalanguage$pandac$Symbol* $tmp3252 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3250, &$s3251);
            methods3249 = $tmp3252;
            if (((panda$core$Bit) { methods3249 != NULL }).value) {
            {
                panda$collections$Array* $tmp3255 = (panda$collections$Array*) malloc(40);
                $tmp3255->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3255->refCount.value = 1;
                panda$collections$Array$init($tmp3255);
                types3254 = $tmp3255;
                panda$core$Bit $tmp3257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3249->kind, ((panda$core$Int64) { 204 }));
                if ($tmp3257.value) {
                {
                    m3258 = ((org$pandalanguage$pandac$MethodDecl*) methods3249);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3258);
                    org$pandalanguage$pandac$MethodRef* $tmp3259 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                    $tmp3259->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                    $tmp3259->refCount.value = 1;
                    org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3259, m3258, parameters3247);
                    org$pandalanguage$pandac$Type* $tmp3261 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3259);
                    panda$collections$Array$add$panda$collections$Array$T(types3254, ((panda$core$Object*) $tmp3261));
                }
                }
                else {
                {
                    panda$core$Bit $tmp3262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3249->kind, ((panda$core$Int64) { 205 }));
                    PANDA_ASSERT($tmp3262.value);
                    {
                        ITable* $tmp3264 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3249)->methods)->$class->itable;
                        while ($tmp3264->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3264 = $tmp3264->next;
                        }
                        $fn3266 $tmp3265 = $tmp3264->methods[0];
                        panda$collections$Iterator* $tmp3267 = $tmp3265(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3249)->methods));
                        m$Iter3263 = $tmp3267;
                        $l3268:;
                        ITable* $tmp3270 = m$Iter3263->$class->itable;
                        while ($tmp3270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3270 = $tmp3270->next;
                        }
                        $fn3272 $tmp3271 = $tmp3270->methods[0];
                        panda$core$Bit $tmp3273 = $tmp3271(m$Iter3263);
                        panda$core$Bit $tmp3274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3273);
                        if (!$tmp3274.value) goto $l3269;
                        {
                            ITable* $tmp3276 = m$Iter3263->$class->itable;
                            while ($tmp3276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3276 = $tmp3276->next;
                            }
                            $fn3278 $tmp3277 = $tmp3276->methods[1];
                            panda$core$Object* $tmp3279 = $tmp3277(m$Iter3263);
                            m3275 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3279);
                            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3275);
                            org$pandalanguage$pandac$MethodRef* $tmp3280 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                            $tmp3280->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                            $tmp3280->refCount.value = 1;
                            org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3280, m3275, parameters3247);
                            org$pandalanguage$pandac$Type* $tmp3282 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3280);
                            panda$collections$Array$add$panda$collections$Array$T(types3254, ((panda$core$Object*) $tmp3282));
                        }
                        goto $l3268;
                        $l3269:;
                    }
                }
                }
                org$pandalanguage$pandac$Type* $tmp3283 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3283->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3283->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3283, ((panda$collections$ListView*) types3254));
                type3253 = $tmp3283;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp3285 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
                type3253 = $tmp3285;
            }
            }
            panda$collections$Array* $tmp3287 = (panda$collections$Array*) malloc(40);
            $tmp3287->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3287->refCount.value = 1;
            panda$collections$Array$init($tmp3287);
            children3286 = $tmp3287;
            panda$collections$Array$add$panda$collections$Array$T(children3286, ((panda$core$Object*) left3059));
            panda$collections$Array$add$panda$collections$Array$T(children3286, ((panda$core$Object*) right3060));
            org$pandalanguage$pandac$IRNode* $tmp3289 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3289->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3289->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3289, ((panda$core$Int64) { 1040 }), p_position, type3253, ((panda$collections$ListView*) children3286));
            return $tmp3289;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3291 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3292 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left3059->type, $tmp3291);
    if ($tmp3292.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3294 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3295 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right3060->type, $tmp3294);
        bool $tmp3293 = $tmp3295.value;
        if (!$tmp3293) goto $l3296;
        panda$core$Bit $tmp3301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp3300 = $tmp3301.value;
        if ($tmp3300) goto $l3302;
        panda$core$Bit $tmp3303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp3300 = $tmp3303.value;
        $l3302:;
        panda$core$Bit $tmp3304 = { $tmp3300 };
        bool $tmp3299 = $tmp3304.value;
        if ($tmp3299) goto $l3305;
        panda$core$Bit $tmp3306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp3299 = $tmp3306.value;
        $l3305:;
        panda$core$Bit $tmp3307 = { $tmp3299 };
        bool $tmp3298 = $tmp3307.value;
        if ($tmp3298) goto $l3308;
        panda$core$Bit $tmp3309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp3298 = $tmp3309.value;
        $l3308:;
        panda$core$Bit $tmp3310 = { $tmp3298 };
        bool $tmp3297 = $tmp3310.value;
        if ($tmp3297) goto $l3311;
        panda$core$Bit $tmp3312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp3297 = $tmp3312.value;
        $l3311:;
        panda$core$Bit $tmp3313 = { $tmp3297 };
        $tmp3293 = $tmp3313.value;
        $l3296:;
        panda$core$Bit $tmp3314 = { $tmp3293 };
        if ($tmp3314.value) {
        {
            panda$collections$Array* $tmp3316 = (panda$collections$Array*) malloc(40);
            $tmp3316->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3316->refCount.value = 1;
            panda$collections$Array$init($tmp3316);
            children3315 = $tmp3316;
            panda$collections$Array$add$panda$collections$Array$T(children3315, ((panda$core$Object*) left3059));
            panda$collections$Array$add$panda$collections$Array$T(children3315, ((panda$core$Object*) right3060));
            org$pandalanguage$pandac$IRNode* $tmp3318 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3318->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3318->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp3320;
            $tmp3320 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp3320->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3320->refCount = 1;
            $tmp3320->value = p_op;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3318, ((panda$core$Int64) { 1023 }), p_position, left3059->type, ((panda$core$Object*) $tmp3320), ((panda$collections$ListView*) children3315));
            return $tmp3318;
        }
        }
        panda$core$String* $tmp3322 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp3323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3321, $tmp3322);
        panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, &$s3324);
        panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3325, ((panda$core$Object*) left3059->type));
        panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, &$s3327);
        panda$core$String* $tmp3329 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3328, ((panda$core$Object*) right3060->type));
        panda$core$String* $tmp3331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3329, &$s3330);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3331);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3333 = (panda$collections$Array*) malloc(40);
    $tmp3333->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3333->refCount.value = 1;
    panda$collections$Array$init($tmp3333);
    children3332 = $tmp3333;
    panda$core$Bit $tmp3337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3059->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3336 = $tmp3337.value;
    if ($tmp3336) goto $l3338;
    panda$core$Bit $tmp3339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3059->kind, ((panda$core$Int64) { 1032 }));
    $tmp3336 = $tmp3339.value;
    $l3338:;
    panda$core$Bit $tmp3340 = { $tmp3336 };
    bool $tmp3335 = $tmp3340.value;
    if (!$tmp3335) goto $l3341;
    panda$core$Bit $tmp3343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3060->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3342 = $tmp3343.value;
    if ($tmp3342) goto $l3344;
    panda$core$Bit $tmp3345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3060->kind, ((panda$core$Int64) { 1032 }));
    $tmp3342 = $tmp3345.value;
    $l3344:;
    panda$core$Bit $tmp3346 = { $tmp3342 };
    $tmp3335 = $tmp3346.value;
    $l3341:;
    panda$core$Bit $tmp3347 = { $tmp3335 };
    if ($tmp3347.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3348 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3059, p_op, right3060);
        return $tmp3348;
    }
    }
    panda$core$Bit $tmp3350 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left3059->type);
    bool $tmp3349 = $tmp3350.value;
    if (!$tmp3349) goto $l3351;
    panda$core$Int64$nullable $tmp3352 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3060, left3059->type);
    $tmp3349 = ((panda$core$Bit) { $tmp3352.nonnull }).value;
    $l3351:;
    panda$core$Bit $tmp3353 = { $tmp3349 };
    if ($tmp3353.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3354 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3060, left3059->type);
        right3060 = $tmp3354;
        PANDA_ASSERT(((panda$core$Bit) { right3060 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children3332, ((panda$core$Object*) left3059));
        panda$collections$Array$add$panda$collections$Array$T(children3332, ((panda$core$Object*) right3060));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp3356 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3355 = $tmp3356;
            }
            break;
            default:
            {
                resultType3355 = left3059->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3357 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3357->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3357->refCount.value = 1;
        panda$core$Int64$wrapper* $tmp3359;
        $tmp3359 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp3359->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp3359->refCount = 1;
        $tmp3359->value = p_op;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3357, ((panda$core$Int64) { 1023 }), p_position, resultType3355, ((panda$core$Object*) $tmp3359), ((panda$collections$ListView*) children3332));
        return $tmp3357;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3332, ((panda$core$Object*) right3060));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3361 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3362 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left3059, $tmp3361, ((panda$collections$ListView*) children3332));
    result3360 = $tmp3362;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3360 == NULL }).value) {
    {
        panda$collections$Array$clear(children3332);
        panda$collections$Array$add$panda$collections$Array$T(children3332, ((panda$core$Object*) left3059));
        org$pandalanguage$pandac$IRNode* $tmp3364 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3060);
        resolved3363 = $tmp3364;
        bool $tmp3365 = ((panda$core$Bit) { resolved3363 != NULL }).value;
        if (!$tmp3365) goto $l3366;
        panda$core$Bit $tmp3367 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved3363->type);
        $tmp3365 = $tmp3367.value;
        $l3366:;
        panda$core$Bit $tmp3368 = { $tmp3365 };
        if ($tmp3368.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children3332, ((panda$core$Object*) resolved3363));
            org$pandalanguage$pandac$IRNode* $tmp3370 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3370->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3370->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3372 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3370, ((panda$core$Int64) { 1001 }), resolved3363->position, $tmp3372, resolved3363->type);
            target3369 = $tmp3370;
            panda$core$String* $tmp3373 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3374 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3369, $tmp3373, ((panda$collections$ListView*) children3332));
            result3360 = $tmp3374;
        }
        }
    }
    }
    return result3360;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3375;
    org$pandalanguage$pandac$IRNode* right3378;
    panda$core$Object* $tmp3376 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3377 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3376));
    left3375 = $tmp3377;
    if (((panda$core$Bit) { left3375 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3379 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3380 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3379));
    right3378 = $tmp3380;
    if (((panda$core$Bit) { right3378 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3381 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left3375, ((panda$core$Int64$wrapper*) p_b->payload)->value, right3378);
    return $tmp3381;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3385;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp3382 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3382;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp3383 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3384 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3383, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3384.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3385, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3386 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3385);
            return ((panda$collections$ListView*) $tmp3386);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp3387 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3388 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3387));
            return $tmp3388;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3389 = (panda$collections$Array*) malloc(40);
            $tmp3389->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3389->refCount.value = 1;
            panda$collections$Array$init($tmp3389);
            return ((panda$collections$ListView*) $tmp3389);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3391.value) {
        {
            panda$collections$ListView* $tmp3392 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3392;
        }
        }
        panda$collections$ListView* $tmp3393 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3393;
    }
    }
    panda$collections$Array* $tmp3394 = (panda$collections$Array*) malloc(40);
    $tmp3394->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3394->refCount.value = 1;
    panda$collections$Array$init($tmp3394);
    return ((panda$collections$ListView*) $tmp3394);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name3397;
    org$pandalanguage$pandac$ClassDecl* cl3399;
    org$pandalanguage$pandac$Symbol* s3401;
    org$pandalanguage$pandac$MethodDecl* m3404;
    panda$collections$Iterator* test$Iter3409;
    org$pandalanguage$pandac$MethodDecl* test3421;
    org$pandalanguage$pandac$MethodRef* ref3433;
    panda$collections$Array* children3437;
    org$pandalanguage$pandac$IRNode* methodRef3440;
    org$pandalanguage$pandac$Position $tmp3446;
    panda$collections$Array* args3447;
    panda$collections$Array* children3463;
    panda$collections$Array* children3474;
    org$pandalanguage$pandac$IRNode* coerced3484;
    panda$collections$Array* children3487;
    panda$core$Bit $tmp3396 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3396.value) {
    {
        panda$core$String* $tmp3398 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3397 = $tmp3398;
        org$pandalanguage$pandac$ClassDecl* $tmp3400 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3399 = $tmp3400;
        if (((panda$core$Bit) { cl3399 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3402 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3399);
        org$pandalanguage$pandac$Symbol* $tmp3403 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3402, name3397);
        s3401 = $tmp3403;
        if (((panda$core$Bit) { s3401 != NULL }).value) {
        {
            m3404 = NULL;
            switch (s3401->kind.value) {
                case 204:
                {
                    m3404 = ((org$pandalanguage$pandac$MethodDecl*) s3401);
                    panda$core$Int64 $tmp3405 = panda$collections$Array$get_count$R$panda$core$Int64(m3404->parameters);
                    panda$core$Bit $tmp3406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3405, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3406.value);
                    panda$core$Bit $tmp3407 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3404->annotations);
                    panda$core$Bit $tmp3408 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3407);
                    PANDA_ASSERT($tmp3408.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3410 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3401)->methods)->$class->itable;
                        while ($tmp3410->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3410 = $tmp3410->next;
                        }
                        $fn3412 $tmp3411 = $tmp3410->methods[0];
                        panda$collections$Iterator* $tmp3413 = $tmp3411(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3401)->methods));
                        test$Iter3409 = $tmp3413;
                        $l3414:;
                        ITable* $tmp3416 = test$Iter3409->$class->itable;
                        while ($tmp3416->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3416 = $tmp3416->next;
                        }
                        $fn3418 $tmp3417 = $tmp3416->methods[0];
                        panda$core$Bit $tmp3419 = $tmp3417(test$Iter3409);
                        panda$core$Bit $tmp3420 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3419);
                        if (!$tmp3420.value) goto $l3415;
                        {
                            ITable* $tmp3422 = test$Iter3409->$class->itable;
                            while ($tmp3422->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3422 = $tmp3422->next;
                            }
                            $fn3424 $tmp3423 = $tmp3422->methods[1];
                            panda$core$Object* $tmp3425 = $tmp3423(test$Iter3409);
                            test3421 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3425);
                            panda$core$Bit $tmp3427 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3421->annotations);
                            panda$core$Bit $tmp3428 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3427);
                            bool $tmp3426 = $tmp3428.value;
                            if (!$tmp3426) goto $l3429;
                            panda$core$Int64 $tmp3430 = panda$collections$Array$get_count$R$panda$core$Int64(test3421->parameters);
                            panda$core$Bit $tmp3431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3430, ((panda$core$Int64) { 0 }));
                            $tmp3426 = $tmp3431.value;
                            $l3429:;
                            panda$core$Bit $tmp3432 = { $tmp3426 };
                            if ($tmp3432.value) {
                            {
                                m3404 = test3421;
                                goto $l3415;
                            }
                            }
                        }
                        goto $l3414;
                        $l3415:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3404 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3404);
                org$pandalanguage$pandac$MethodRef* $tmp3434 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3434->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3434->refCount.value = 1;
                panda$collections$ListView* $tmp3436 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3434, m3404, $tmp3436);
                ref3433 = $tmp3434;
                panda$collections$Array* $tmp3438 = (panda$collections$Array*) malloc(40);
                $tmp3438->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3438->refCount.value = 1;
                panda$collections$Array$init($tmp3438);
                children3437 = $tmp3438;
                panda$collections$Array$add$panda$collections$Array$T(children3437, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3441 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3441->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3441->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3443 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3443->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3443->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3446);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3443, &$s3445, ((panda$core$Int64) { 16 }), $tmp3446, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3441, ((panda$core$Int64) { 1002 }), p_position, $tmp3443, ((panda$core$Object*) ref3433), ((panda$collections$ListView*) children3437));
                methodRef3440 = $tmp3441;
                panda$collections$Array* $tmp3448 = (panda$collections$Array*) malloc(40);
                $tmp3448->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3448->refCount.value = 1;
                panda$collections$Array$init($tmp3448);
                args3447 = $tmp3448;
                org$pandalanguage$pandac$IRNode* $tmp3450 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3440, ((panda$collections$ListView*) args3447));
                return $tmp3450;
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
                    org$pandalanguage$pandac$IRNode* $tmp3451 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3451->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3451->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3453 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3451, ((panda$core$Int64) { 1032 }), p_position, $tmp3453, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3451;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3454 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3454->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3454->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3456 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3454, ((panda$core$Int64) { 1004 }), p_position, $tmp3456, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3454;
                }
                break;
                case 1045:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3457 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3457->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3457->refCount.value = 1;
                    panda$core$Real64 $tmp3459 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$Type* $tmp3460 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type($tmp3459);
                    panda$core$Real64 $tmp3461 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3457, ((panda$core$Int64) { 1045 }), p_position, $tmp3460, $tmp3461);
                    return $tmp3457;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3462 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3462.value) {
                    {
                        panda$collections$Array* $tmp3464 = (panda$collections$Array*) malloc(40);
                        $tmp3464->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3464->refCount.value = 1;
                        panda$collections$Array$init($tmp3464);
                        children3463 = $tmp3464;
                        panda$collections$Array$add$panda$collections$Array$T(children3463, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3466 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3466->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3466->refCount.value = 1;
                        panda$core$Int64$wrapper* $tmp3468;
                        $tmp3468 = (panda$core$Int64$wrapper*) malloc(24);
                        $tmp3468->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                        $tmp3468->refCount = 1;
                        $tmp3468->value = ((panda$core$Int64) { 52 });
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3466, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3468), ((panda$collections$ListView*) children3463));
                        return $tmp3466;
                    }
                    }
                }
            }
            panda$core$String* $tmp3470 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3469, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3470, &$s3471);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3472);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3473 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3473.value) {
            {
                panda$collections$Array* $tmp3475 = (panda$collections$Array*) malloc(40);
                $tmp3475->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3475->refCount.value = 1;
                panda$collections$Array$init($tmp3475);
                children3474 = $tmp3475;
                panda$collections$Array$add$panda$collections$Array$T(children3474, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3477 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3477->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3477->refCount.value = 1;
                panda$core$Int64$wrapper* $tmp3479;
                $tmp3479 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp3479->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp3479->refCount = 1;
                $tmp3479->value = ((panda$core$Int64) { 50 });
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3477, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3479), ((panda$collections$ListView*) children3474));
                return $tmp3477;
            }
            }
            else {
            {
                panda$core$String* $tmp3481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3480, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3481, &$s3482);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3483);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3485 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3486 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3485);
            coerced3484 = $tmp3486;
            if (((panda$core$Bit) { coerced3484 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3488 = (panda$collections$Array*) malloc(40);
            $tmp3488->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3488->refCount.value = 1;
            panda$collections$Array$init($tmp3488);
            children3487 = $tmp3488;
            panda$collections$Array$add$panda$collections$Array$T(children3487, ((panda$core$Object*) coerced3484));
            org$pandalanguage$pandac$IRNode* $tmp3490 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3490->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3490->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp3492;
            $tmp3492 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp3492->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3492->refCount = 1;
            $tmp3492->value = ((panda$core$Int64) { 49 });
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3490, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3492), ((panda$collections$ListView*) children3487));
            return $tmp3490;
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
    org$pandalanguage$pandac$IRNode* base3496;
    panda$core$Bit $tmp3493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3493.value);
    panda$core$Int64 $tmp3494 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3494, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3495.value);
    panda$core$Object* $tmp3497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3498 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3497));
    base3496 = $tmp3498;
    if (((panda$core$Bit) { base3496 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3499 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3496, p_p->position);
    return $tmp3499;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3501;
    panda$collections$Array* args3504;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3507;
    org$pandalanguage$pandac$IRNode* arg3522;
    panda$core$Bit $tmp3500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3500.value);
    panda$core$Object* $tmp3502 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3503 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3502));
    m3501 = $tmp3503;
    if (((panda$core$Bit) { m3501 != NULL }).value) {
    {
        panda$collections$Array* $tmp3505 = (panda$collections$Array*) malloc(40);
        $tmp3505->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3505->refCount.value = 1;
        panda$collections$Array$init($tmp3505);
        args3504 = $tmp3505;
        panda$core$Int64 $tmp3508 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3507, ((panda$core$Int64) { 1 }), $tmp3508, ((panda$core$Bit) { false }));
        int64_t $tmp3510 = $tmp3507.min.value;
        panda$core$Int64 i3509 = { $tmp3510 };
        int64_t $tmp3512 = $tmp3507.max.value;
        bool $tmp3513 = $tmp3507.inclusive.value;
        if ($tmp3513) goto $l3520; else goto $l3521;
        $l3520:;
        if ($tmp3510 <= $tmp3512) goto $l3514; else goto $l3516;
        $l3521:;
        if ($tmp3510 < $tmp3512) goto $l3514; else goto $l3516;
        $l3514:;
        {
            panda$core$Object* $tmp3523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3509);
            org$pandalanguage$pandac$IRNode* $tmp3524 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3523));
            arg3522 = $tmp3524;
            if (((panda$core$Bit) { arg3522 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3504, ((panda$core$Object*) arg3522));
        }
        $l3517:;
        int64_t $tmp3526 = $tmp3512 - i3509.value;
        if ($tmp3513) goto $l3527; else goto $l3528;
        $l3527:;
        if ((uint64_t) $tmp3526 >= 1) goto $l3525; else goto $l3516;
        $l3528:;
        if ((uint64_t) $tmp3526 > 1) goto $l3525; else goto $l3516;
        $l3525:;
        i3509.value += 1;
        goto $l3514;
        $l3516:;
        org$pandalanguage$pandac$IRNode* $tmp3531 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3501, ((panda$collections$ListView*) args3504));
        return $tmp3531;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3532;
    panda$core$String* name3534;
    org$pandalanguage$pandac$ClassDecl* cl3542;
    org$pandalanguage$pandac$SymbolTable* st3561;
    org$pandalanguage$pandac$Symbol* s3563;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3533 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3532 = $tmp3533;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3536 = (($fn3535) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3536, &$s3537);
            panda$core$String* $tmp3539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3538, p_name);
            panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3539, &$s3540);
            name3534 = $tmp3541;
            org$pandalanguage$pandac$ClassDecl* $tmp3543 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3534);
            cl3542 = $tmp3543;
            if (((panda$core$Bit) { cl3542 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3544 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3544->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3544->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3546 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3547 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3542);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3544, ((panda$core$Int64) { 1001 }), p_position, $tmp3546, $tmp3547);
                return $tmp3544;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3548 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3548->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3548->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3550 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3548, ((panda$core$Int64) { 1037 }), p_position, $tmp3550, name3534);
            return $tmp3548;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3551 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3551));
            panda$core$Object* $tmp3552 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3553 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3552)->rawSuper);
            cl3532 = $tmp3553;
        }
        break;
        default:
        {
            panda$core$Bit $tmp3554 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
            panda$core$Bit $tmp3555 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3554);
            if ($tmp3555.value) {
            {
                panda$core$String* $tmp3557 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3556, ((panda$core$Object*) p_base->type));
                panda$core$String* $tmp3559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3557, &$s3558);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3559);
                return NULL;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp3560 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3532 = $tmp3560;
        }
    }
    if (((panda$core$Bit) { cl3532 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3562 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3532);
    st3561 = $tmp3562;
    org$pandalanguage$pandac$Symbol* $tmp3564 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3561, p_name);
    s3563 = $tmp3564;
    if (((panda$core$Bit) { s3563 == NULL }).value) {
    {
        panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3565, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3566, &$s3567);
        panda$core$String* $tmp3569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3568, p_name);
        panda$core$String* $tmp3571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3569, &$s3570);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3571);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3572 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3563, st3561);
    return $tmp3572;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3576;
    panda$core$Bit $tmp3573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3573.value);
    panda$core$Int64 $tmp3574 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3574, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3575.value);
    panda$core$Object* $tmp3577 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3578 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3577));
    base3576 = $tmp3578;
    if (((panda$core$Bit) { base3576 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3580 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3576->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3579 = $tmp3580.value;
    if (!$tmp3579) goto $l3581;
    panda$core$Bit $tmp3582 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3576->kind, ((panda$core$Int64) { 1024 }));
    $tmp3579 = $tmp3582.value;
    $l3581:;
    panda$core$Bit $tmp3583 = { $tmp3579 };
    if ($tmp3583.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3584 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3576);
        base3576 = $tmp3584;
    }
    }
    if (((panda$core$Bit) { base3576 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3585 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3576, ((panda$core$String*) p_d->payload));
    return $tmp3585;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3587;
    panda$core$Bit $tmp3586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3586.value);
    org$pandalanguage$pandac$Symbol* $tmp3588 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3587 = $tmp3588;
    if (((panda$core$Bit) { s3587 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3589 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3587 = ((org$pandalanguage$pandac$Symbol*) $tmp3589);
    }
    }
    if (((panda$core$Bit) { s3587 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3590 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3587, self->symbolTable);
        return $tmp3590;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3591 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3591->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3591->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3593 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3591, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3593, ((panda$core$String*) p_i->payload));
    return $tmp3591;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3594;
    org$pandalanguage$pandac$Type* $tmp3595 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3596 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3595);
    resolved3594 = $tmp3596;
    if (((panda$core$Bit) { resolved3594 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3597 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3597->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3597->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3599 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3597, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3599, resolved3594);
    return $tmp3597;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3607;
    org$pandalanguage$pandac$IRNode* end3615;
    org$pandalanguage$pandac$IRNode* step3623;
    panda$collections$Array* children3630;
    org$pandalanguage$pandac$Position $tmp3638;
    panda$core$Bit $tmp3601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3600 = $tmp3601.value;
    if ($tmp3600) goto $l3602;
    panda$core$Bit $tmp3603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3600 = $tmp3603.value;
    $l3602:;
    panda$core$Bit $tmp3604 = { $tmp3600 };
    PANDA_ASSERT($tmp3604.value);
    panda$core$Int64 $tmp3605 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3605, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3606.value);
    panda$core$Object* $tmp3608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3608)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3609.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3610 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3610->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3610->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3612 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3610, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3612);
        start3607 = $tmp3610;
    }
    }
    else {
    {
        panda$core$Object* $tmp3613 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3614 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3613));
        start3607 = $tmp3614;
        if (((panda$core$Bit) { start3607 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3616 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3616)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3617.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3618 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3618->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3618->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3620 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3618, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3620);
        end3615 = $tmp3618;
    }
    }
    else {
    {
        panda$core$Object* $tmp3621 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3622 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3621));
        end3615 = $tmp3622;
        if (((panda$core$Bit) { end3615 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3624 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3624)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3625.value) {
    {
        step3623 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3626 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3627 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3626));
        step3623 = $tmp3627;
        if (((panda$core$Bit) { step3623 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(step3623->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3628.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, step3623->position, &$s3629);
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3631 = (panda$collections$Array*) malloc(40);
    $tmp3631->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3631->refCount.value = 1;
    panda$collections$Array$init($tmp3631);
    children3630 = $tmp3631;
    panda$collections$Array$add$panda$collections$Array$T(children3630, ((panda$core$Object*) start3607));
    panda$collections$Array$add$panda$collections$Array$T(children3630, ((panda$core$Object*) end3615));
    if (((panda$core$Bit) { step3623 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3630, ((panda$core$Object*) step3623));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3633 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3633->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3633->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3635 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3635->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3635->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3638);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3635, &$s3637, ((panda$core$Int64) { 17 }), $tmp3638, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    panda$core$Bit$wrapper* $tmp3640;
    $tmp3640 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp3640->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp3640->refCount = 1;
    $tmp3640->value = $tmp3639;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3633, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3635, ((panda$core$Object*) $tmp3640), ((panda$collections$ListView*) children3630));
    return $tmp3633;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3641 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3641->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3641->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3643 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3641, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3643, ((panda$core$String*) p_s->payload));
    return $tmp3641;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3648;
    org$pandalanguage$pandac$ClassDecl* cl3649;
    panda$collections$Array* subtypes3656;
    panda$core$MutableString* name3660;
    panda$core$Char8 $tmp3663;
    panda$core$String* separator3664;
    panda$collections$Iterator* p$Iter3666;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3678;
    panda$collections$Array* pType3683;
    panda$core$String* pName3686;
    panda$core$Char8 $tmp3696;
    panda$core$Bit $tmp3644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3644.value);
    panda$core$Object* $tmp3645 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3646 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3645)->annotations);
    if ($tmp3646.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3647);
        return NULL;
    }
    }
    panda$core$Object* $tmp3650 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3649 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3650);
    ITable* $tmp3651 = ((panda$collections$CollectionView*) cl3649->parameters)->$class->itable;
    while ($tmp3651->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3651 = $tmp3651->next;
    }
    $fn3653 $tmp3652 = $tmp3651->methods[0];
    panda$core$Int64 $tmp3654 = $tmp3652(((panda$collections$CollectionView*) cl3649->parameters));
    panda$core$Bit $tmp3655 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3654, ((panda$core$Int64) { 0 }));
    if ($tmp3655.value) {
    {
        panda$collections$Array* $tmp3657 = (panda$collections$Array*) malloc(40);
        $tmp3657->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3657->refCount.value = 1;
        panda$collections$Array$init($tmp3657);
        subtypes3656 = $tmp3657;
        org$pandalanguage$pandac$Type* $tmp3659 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3649);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3656, ((panda$core$Object*) $tmp3659));
        panda$core$MutableString* $tmp3661 = (panda$core$MutableString*) malloc(48);
        $tmp3661->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3661->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3661, ((org$pandalanguage$pandac$Symbol*) cl3649)->name);
        name3660 = $tmp3661;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3663, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3660, $tmp3663);
        separator3664 = &$s3665;
        {
            ITable* $tmp3667 = ((panda$collections$Iterable*) cl3649->parameters)->$class->itable;
            while ($tmp3667->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3667 = $tmp3667->next;
            }
            $fn3669 $tmp3668 = $tmp3667->methods[0];
            panda$collections$Iterator* $tmp3670 = $tmp3668(((panda$collections$Iterable*) cl3649->parameters));
            p$Iter3666 = $tmp3670;
            $l3671:;
            ITable* $tmp3673 = p$Iter3666->$class->itable;
            while ($tmp3673->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3673 = $tmp3673->next;
            }
            $fn3675 $tmp3674 = $tmp3673->methods[0];
            panda$core$Bit $tmp3676 = $tmp3674(p$Iter3666);
            panda$core$Bit $tmp3677 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3676);
            if (!$tmp3677.value) goto $l3672;
            {
                ITable* $tmp3679 = p$Iter3666->$class->itable;
                while ($tmp3679->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3679 = $tmp3679->next;
                }
                $fn3681 $tmp3680 = $tmp3679->methods[1];
                panda$core$Object* $tmp3682 = $tmp3680(p$Iter3666);
                p3678 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3682);
                panda$collections$Array* $tmp3684 = (panda$collections$Array*) malloc(40);
                $tmp3684->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3684->refCount.value = 1;
                panda$collections$Array$init($tmp3684);
                pType3683 = $tmp3684;
                panda$collections$Array$add$panda$collections$Array$T(pType3683, ((panda$core$Object*) p3678->bound));
                panda$core$String* $tmp3687 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3649)->name);
                panda$core$String* $tmp3689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3687, &$s3688);
                panda$core$String* $tmp3690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3689, ((org$pandalanguage$pandac$Symbol*) p3678)->name);
                panda$core$String* $tmp3692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3690, &$s3691);
                pName3686 = $tmp3692;
                panda$core$MutableString$append$panda$core$String(name3660, separator3664);
                panda$core$MutableString$append$panda$core$String(name3660, pName3686);
                org$pandalanguage$pandac$Type* $tmp3693 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3693->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3693->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3693, p3678);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3656, ((panda$core$Object*) $tmp3693));
                separator3664 = &$s3695;
            }
            goto $l3671;
            $l3672:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3696, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3660, $tmp3696);
        org$pandalanguage$pandac$Type* $tmp3697 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3697->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3697->refCount.value = 1;
        panda$core$String* $tmp3699 = panda$core$MutableString$finish$R$panda$core$String(name3660);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3697, $tmp3699, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3656), ((panda$core$Bit) { true }));
        type3648 = $tmp3697;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3700 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3649);
        type3648 = $tmp3700;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3701 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3701->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3701->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3701, ((panda$core$Int64) { 1025 }), p_s->position, type3648);
    return $tmp3701;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3707;
    panda$core$Bit $tmp3703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3703.value);
    panda$core$Object* $tmp3704 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3705 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3704)->annotations);
    if ($tmp3705.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3706);
        return NULL;
    }
    }
    panda$core$Object* $tmp3708 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3707 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3708);
    PANDA_ASSERT(cl3707->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3709 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3709->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3709->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3709, ((panda$core$Int64) { 1024 }), p_s->position, cl3707->rawSuper);
    return $tmp3709;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3711;
    panda$core$String$Index$nullable index3713;
    org$pandalanguage$pandac$Type* type3720;
    org$pandalanguage$pandac$IRNode* base3722;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3725;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3728;
    org$pandalanguage$pandac$Type* type3732;
    org$pandalanguage$pandac$IRNode* $tmp3712 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3711 = $tmp3712;
    if (((panda$core$Bit) { value3711 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3715 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3714);
    index3713 = $tmp3715;
    panda$core$Bit $tmp3717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3716 = $tmp3717.value;
    if (!$tmp3716) goto $l3718;
    $tmp3716 = ((panda$core$Bit) { index3713.nonnull }).value;
    $l3718:;
    panda$core$Bit $tmp3719 = { $tmp3716 };
    if ($tmp3719.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3721 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3720 = $tmp3721;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3720 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3723 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3723->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3723->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3725, ((panda$core$String$Index$nullable) { .nonnull = false }), index3713, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3726 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3725);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3723, $tmp3726, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3727 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3723);
            base3722 = $tmp3727;
            if (((panda$core$Bit) { base3722 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3729 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3713.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3728, ((panda$core$String$Index$nullable) { $tmp3729, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3730 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3728);
            org$pandalanguage$pandac$IRNode* $tmp3731 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3722, $tmp3730);
            return $tmp3731;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3733 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3732 = $tmp3733;
    if (((panda$core$Bit) { type3732 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3734 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3711, type3732);
    if (((panda$core$Bit) { $tmp3734.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3735 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3711, type3732);
        return $tmp3735;
    }
    }
    panda$core$Bit $tmp3736 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3711, type3732);
    if ($tmp3736.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3737 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3711, p_position, ((panda$core$Bit) { true }), type3732);
        return $tmp3737;
    }
    }
    else {
    {
        panda$core$String* $tmp3739 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3738, ((panda$core$Object*) value3711->type));
        panda$core$String* $tmp3741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3739, &$s3740);
        panda$core$String* $tmp3743 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3742, ((panda$core$Object*) type3732));
        panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3743, &$s3744);
        panda$core$String* $tmp3746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3741, $tmp3745);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3746);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3747.value);
    panda$core$Int64 $tmp3748 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3748, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3749.value);
    panda$core$Object* $tmp3750 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3751 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3752 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3751));
    org$pandalanguage$pandac$IRNode* $tmp3753 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3750), $tmp3752);
    return $tmp3753;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3754.value);
    org$pandalanguage$pandac$IRNode* $tmp3755 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3755->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3755->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3757 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3755, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3757);
    return $tmp3755;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$Pair* cf3758;
    panda$collections$Array* children3764;
    org$pandalanguage$pandac$IRNode* base3767;
    cf3758 = ((org$pandalanguage$pandac$Pair*) p_f->payload);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, ((org$pandalanguage$pandac$ChoiceEntry*) cf3758->first));
    bool $tmp3759 = ((panda$core$Bit) { p_f->children != NULL }).value;
    if (!$tmp3759) goto $l3760;
    panda$core$Int64 $tmp3761 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3761, ((panda$core$Int64) { 1 }));
    $tmp3759 = $tmp3762.value;
    $l3760:;
    panda$core$Bit $tmp3763 = { $tmp3759 };
    PANDA_ASSERT($tmp3763.value);
    panda$collections$Array* $tmp3765 = (panda$collections$Array*) malloc(40);
    $tmp3765->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3765->refCount.value = 1;
    panda$collections$Array$init($tmp3765);
    children3764 = $tmp3765;
    panda$core$Object* $tmp3768 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3769 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3768));
    base3767 = $tmp3769;
    if (((panda$core$Bit) { base3767 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3764, ((panda$core$Object*) base3767));
    org$pandalanguage$pandac$IRNode* $tmp3770 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3770->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3770->refCount.value = 1;
    panda$core$Object* $tmp3772 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$ChoiceEntry*) cf3758->first)->fields, ((panda$core$Int64$wrapper*) cf3758->second)->value);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3770, ((panda$core$Int64) { 1047 }), p_f->position, ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp3772)->second), ((panda$core$Object*) cf3758), ((panda$collections$ListView*) children3764));
    return $tmp3770;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3777;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3773 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3773;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3774 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3774->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3774->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3776 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3774, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3776, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3774;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3778 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3777 = $tmp3778;
            bool $tmp3779 = ((panda$core$Bit) { result3777 != NULL }).value;
            if (!$tmp3779) goto $l3780;
            org$pandalanguage$pandac$Type* $tmp3781 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3782 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3777->type, $tmp3781);
            $tmp3779 = $tmp3782.value;
            $l3780:;
            panda$core$Bit $tmp3783 = { $tmp3779 };
            if ($tmp3783.value) {
            {
                panda$core$Bit $tmp3784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3777->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3784.value);
                panda$core$String* $tmp3785 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3777->payload)->value);
                panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3785, &$s3786);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3777->position, $tmp3787);
                return NULL;
            }
            }
            return result3777;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3788 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3788;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3789 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3789;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3790 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3790->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3790->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3792 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3790, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3792, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3790;
        }
        break;
        case 157:
        {
            org$pandalanguage$pandac$IRNode* $tmp3793 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3793->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3793->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3795 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(((panda$core$Real64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3793, ((panda$core$Int64) { 1045 }), p_e->position, $tmp3795, ((panda$core$Real64$wrapper*) p_e->payload)->value);
            return $tmp3793;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3796 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3796;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3797 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3797;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3798 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3798;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3799 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3799;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3800 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3800;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3801 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3801;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3802 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3802;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3803 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3803;
        }
        break;
        case 158:
        {
            org$pandalanguage$pandac$IRNode* $tmp3804 = org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3804;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3806;
    panda$collections$Array* result3809;
    panda$collections$Iterator* stmt$Iter3812;
    org$pandalanguage$pandac$ASTNode* stmt3824;
    org$pandalanguage$pandac$IRNode* compiled3829;
    panda$core$Bit $tmp3805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3805.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3807 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3807->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3807->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3807, self->symbolTable);
    symbols3806 = $tmp3807;
    self->symbolTable = symbols3806;
    panda$collections$Array* $tmp3810 = (panda$collections$Array*) malloc(40);
    $tmp3810->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3810->refCount.value = 1;
    panda$collections$Array$init($tmp3810);
    result3809 = $tmp3810;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3813 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3813->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3813 = $tmp3813->next;
            }
            $fn3815 $tmp3814 = $tmp3813->methods[0];
            panda$collections$Iterator* $tmp3816 = $tmp3814(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3812 = $tmp3816;
            $l3817:;
            ITable* $tmp3819 = stmt$Iter3812->$class->itable;
            while ($tmp3819->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3819 = $tmp3819->next;
            }
            $fn3821 $tmp3820 = $tmp3819->methods[0];
            panda$core$Bit $tmp3822 = $tmp3820(stmt$Iter3812);
            panda$core$Bit $tmp3823 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3822);
            if (!$tmp3823.value) goto $l3818;
            {
                ITable* $tmp3825 = stmt$Iter3812->$class->itable;
                while ($tmp3825->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3825 = $tmp3825->next;
                }
                $fn3827 $tmp3826 = $tmp3825->methods[1];
                panda$core$Object* $tmp3828 = $tmp3826(stmt$Iter3812);
                stmt3824 = ((org$pandalanguage$pandac$ASTNode*) $tmp3828);
                org$pandalanguage$pandac$IRNode* $tmp3830 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3824);
                compiled3829 = $tmp3830;
                if (((panda$core$Bit) { compiled3829 == NULL }).value) {
                {
                    panda$core$Object* $tmp3831 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3806->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3831);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3832 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3829->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3832.value);
                panda$collections$Array$add$panda$collections$Array$T(result3809, ((panda$core$Object*) compiled3829));
            }
            goto $l3817;
            $l3818:;
        }
    }
    }
    panda$core$Object* $tmp3833 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3806->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3833);
    org$pandalanguage$pandac$IRNode* $tmp3834 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3834->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3834->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3834, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3809));
    return $tmp3834;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3844;
    org$pandalanguage$pandac$IRNode* ifTrue3849;
    panda$collections$Array* children3852;
    org$pandalanguage$pandac$IRNode* ifFalse3857;
    panda$core$Bit $tmp3836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3836.value);
    panda$core$Int64 $tmp3838 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3838, ((panda$core$Int64) { 2 }));
    bool $tmp3837 = $tmp3839.value;
    if ($tmp3837) goto $l3840;
    panda$core$Int64 $tmp3841 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3841, ((panda$core$Int64) { 3 }));
    $tmp3837 = $tmp3842.value;
    $l3840:;
    panda$core$Bit $tmp3843 = { $tmp3837 };
    PANDA_ASSERT($tmp3843.value);
    panda$core$Object* $tmp3845 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3846 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3845));
    org$pandalanguage$pandac$Type* $tmp3847 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3848 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3846, $tmp3847);
    test3844 = $tmp3848;
    if (((panda$core$Bit) { test3844 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3850 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3851 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3850));
    ifTrue3849 = $tmp3851;
    if (((panda$core$Bit) { ifTrue3849 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3853 = (panda$collections$Array*) malloc(40);
    $tmp3853->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3853->refCount.value = 1;
    panda$collections$Array$init($tmp3853);
    children3852 = $tmp3853;
    panda$collections$Array$add$panda$collections$Array$T(children3852, ((panda$core$Object*) test3844));
    panda$collections$Array$add$panda$collections$Array$T(children3852, ((panda$core$Object*) ifTrue3849));
    panda$core$Int64 $tmp3855 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3855, ((panda$core$Int64) { 3 }));
    if ($tmp3856.value) {
    {
        panda$core$Object* $tmp3858 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3859 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3858));
        ifFalse3857 = $tmp3859;
        if (((panda$core$Bit) { ifFalse3857 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3852, ((panda$core$Object*) ifFalse3857));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3860 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3860->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3860->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3860, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3852));
    return $tmp3860;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* type13866;
    org$pandalanguage$pandac$Type* type23869;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3880;
    panda$core$Bit $tmp3862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3862.value) {
    {
        panda$core$Object* $tmp3863 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3864 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$Type*) $tmp3863));
        return $tmp3864;
    }
    }
    panda$core$Bit $tmp3865 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_type);
    if ($tmp3865.value) {
    {
        panda$core$Object* $tmp3867 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp3868 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3867));
        type13866 = $tmp3868;
        panda$core$Object* $tmp3870 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 2 }));
        type23869 = ((org$pandalanguage$pandac$Type*) $tmp3870);
        panda$core$Bit $tmp3871 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(type13866, type23869);
        if ($tmp3871.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$Bit $tmp3874 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(type13866);
        bool $tmp3873 = $tmp3874.value;
        if (!$tmp3873) goto $l3875;
        panda$core$Bit $tmp3877 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type23869)->name, &$s3876);
        $tmp3873 = $tmp3877.value;
        $l3875:;
        panda$core$Bit $tmp3878 = { $tmp3873 };
        bool $tmp3872 = $tmp3878.value;
        if (!$tmp3872) goto $l3879;
        panda$core$Int64 $tmp3882 = panda$core$String$length$R$panda$core$Int64(&$s3881);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3880, ((panda$core$Int64$nullable) { $tmp3882, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp3883 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) type23869)->name, $tmp3880);
        panda$core$Bit $tmp3884 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type13866)->name, $tmp3883);
        $tmp3872 = $tmp3884.value;
        $l3879:;
        panda$core$Bit $tmp3885 = { $tmp3872 };
        if ($tmp3885.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$String* $tmp3887 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3886, ((panda$core$Object*) p_type));
        panda$core$String* $tmp3889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3887, &$s3888);
        panda$core$String* $tmp3891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3889, &$s3890);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3891);
        return ((panda$core$Bit) { false });
    }
    }
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3892;
    org$pandalanguage$pandac$IRNode* list3893;
    org$pandalanguage$pandac$Type* t3905;
    org$pandalanguage$pandac$Type* listType3938;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3970;
    org$pandalanguage$pandac$IRNode* body3974;
    panda$collections$Array* children3976;
    panda$core$Bit $tmp3896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3895 = $tmp3896.value;
    if (!$tmp3895) goto $l3897;
    $tmp3895 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3897:;
    panda$core$Bit $tmp3898 = { $tmp3895 };
    bool $tmp3894 = $tmp3898.value;
    if (!$tmp3894) goto $l3899;
    panda$core$Int64 $tmp3900 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3901 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3900, ((panda$core$Int64) { 0 }));
    $tmp3894 = $tmp3901.value;
    $l3899:;
    panda$core$Bit $tmp3902 = { $tmp3894 };
    if ($tmp3902.value) {
    {
        panda$core$Int64 $tmp3903 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3903, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3904.value);
        panda$core$Object* $tmp3906 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3907 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3906));
        org$pandalanguage$pandac$Type* $tmp3908 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3907);
        t3905 = $tmp3908;
        panda$core$Bit $tmp3909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t3905->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3909.value) {
        {
            panda$core$String* $tmp3911 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3910, ((panda$core$Object*) t3905));
            panda$core$String* $tmp3913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3911, &$s3912);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3913);
            return NULL;
        }
        }
        panda$core$Bit $tmp3914 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(t3905);
        panda$core$Bit $tmp3915 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3914);
        if ($tmp3915.value) {
        {
            panda$core$String* $tmp3917 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3916, ((panda$core$Object*) t3905));
            panda$core$String* $tmp3919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3917, &$s3918);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3919);
            return NULL;
        }
        }
        panda$core$Bit $tmp3920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3920.value) {
        {
            panda$core$Int64 $tmp3921 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3921, ((panda$core$Int64) { 2 }));
            if ($tmp3922.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3923 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3905);
                org$pandalanguage$pandac$IRNode* $tmp3924 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3923);
                list3893 = $tmp3924;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3925 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3925, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3926.value);
                org$pandalanguage$pandac$Type* $tmp3927 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3905);
                org$pandalanguage$pandac$IRNode* $tmp3928 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3927);
                list3893 = $tmp3928;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3929 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3929.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3930 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3905);
            org$pandalanguage$pandac$IRNode* $tmp3931 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3930);
            list3893 = $tmp3931;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3932 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3905);
        panda$core$Int64$nullable $tmp3933 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3932);
        if (((panda$core$Bit) { $tmp3933.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3934 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3905);
            org$pandalanguage$pandac$IRNode* $tmp3935 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3934);
            list3893 = $tmp3935;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3936 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3905);
            org$pandalanguage$pandac$IRNode* $tmp3937 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3936);
            list3893 = $tmp3937;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3939 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_rawList);
        listType3938 = $tmp3939;
        panda$core$Bit $tmp3941 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3938);
        bool $tmp3940 = $tmp3941.value;
        if ($tmp3940) goto $l3942;
        panda$core$Bit $tmp3943 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(listType3938);
        $tmp3940 = $tmp3943.value;
        $l3942:;
        panda$core$Bit $tmp3944 = { $tmp3940 };
        PANDA_ASSERT($tmp3944.value);
        panda$core$Object* $tmp3945 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3938->subtypes, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp3946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3945)->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3946.value) {
        {
            panda$core$Bit $tmp3947 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3938);
            if ($tmp3947.value) {
            {
                panda$core$Object* $tmp3948 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3938->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3949 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3948));
                org$pandalanguage$pandac$Type* $tmp3950 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3949);
                listType3938 = $tmp3950;
            }
            }
            else {
            {
                panda$core$Object* $tmp3951 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3938->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3952 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3951));
                org$pandalanguage$pandac$Type* $tmp3953 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3952);
                listType3938 = $tmp3953;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3954 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, listType3938);
        list3893 = $tmp3954;
    }
    }
    if (((panda$core$Bit) { list3893 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3955 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, list3893->position, list3893->type);
    panda$core$Bit $tmp3956 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3955);
    if ($tmp3956.value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3893->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3957.value) {
    {
        panda$core$Object* $tmp3958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3893->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3958)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3959.value);
        panda$core$Object* $tmp3960 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3893->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3961 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3960)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3892 = ((org$pandalanguage$pandac$Type*) $tmp3961);
    }
    }
    else {
    {
        panda$core$Bit $tmp3962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3893->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3962.value);
        panda$core$Object* $tmp3963 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3893->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3892 = ((org$pandalanguage$pandac$Type*) $tmp3963);
    }
    }
    panda$core$Bit $tmp3964 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(elementType3892);
    panda$core$Bit $tmp3965 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3964);
    if ($tmp3965.value) {
    {
        panda$core$String* $tmp3967 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3966, ((panda$core$Object*) list3893->type));
        panda$core$String* $tmp3969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3967, &$s3968);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3893->position, $tmp3969);
    }
    }
    org$pandalanguage$pandac$Variable$Kind* $tmp3971 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp3971->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp3971->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3971, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3973 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp3971, NULL, elementType3892);
    target3970 = $tmp3973;
    if (((panda$core$Bit) { target3970 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3970->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3975 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3974 = $tmp3975;
    if (((panda$core$Bit) { body3974 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3977 = (panda$collections$Array*) malloc(40);
    $tmp3977->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3977->refCount.value = 1;
    panda$collections$Array$init($tmp3977);
    children3976 = $tmp3977;
    panda$collections$Array$add$panda$collections$Array$T(children3976, ((panda$core$Object*) target3970->target));
    panda$collections$Array$add$panda$collections$Array$T(children3976, ((panda$core$Object*) list3893));
    panda$collections$Array$add$panda$collections$Array$T(children3976, ((panda$core$Object*) body3974));
    org$pandalanguage$pandac$IRNode* $tmp3979 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3979->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3979->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3979, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3976));
    return $tmp3979;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3988;
    org$pandalanguage$pandac$Variable* targetVar3994;
    panda$collections$Array* subtypes3995;
    org$pandalanguage$pandac$Type* iterType3999;
    org$pandalanguage$pandac$Variable* iter4010;
    panda$collections$Array* statements4017;
    panda$collections$Array* declChildren4020;
    panda$collections$Array* varChildren4025;
    panda$collections$Array* whileChildren4032;
    org$pandalanguage$pandac$IRNode* done4035;
    org$pandalanguage$pandac$IRNode* notCall4042;
    panda$collections$Array* valueDeclChildren4047;
    org$pandalanguage$pandac$IRNode* next4052;
    panda$collections$Array* valueVarChildren4059;
    org$pandalanguage$pandac$IRNode* block4064;
    panda$collections$Array* blockChildren4066;
    panda$core$Bit $tmp3982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3981 = $tmp3982.value;
    if (!$tmp3981) goto $l3983;
    panda$core$Object* $tmp3984 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3985 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3986 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3984), $tmp3985);
    $tmp3981 = $tmp3986.value;
    $l3983:;
    panda$core$Bit $tmp3987 = { $tmp3981 };
    PANDA_ASSERT($tmp3987.value);
    org$pandalanguage$pandac$Variable$Kind* $tmp3989 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp3989->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp3989->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3989, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp3991 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3992 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp3989, NULL, ((org$pandalanguage$pandac$Type*) $tmp3991));
    target3988 = $tmp3992;
    if (((panda$core$Bit) { target3988 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3988->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3993.value);
    targetVar3994 = ((org$pandalanguage$pandac$Variable*) target3988->target->payload);
    panda$collections$Array* $tmp3996 = (panda$collections$Array*) malloc(40);
    $tmp3996->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3996->refCount.value = 1;
    panda$collections$Array$init($tmp3996);
    subtypes3995 = $tmp3996;
    org$pandalanguage$pandac$Type* $tmp3998 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3995, ((panda$core$Object*) $tmp3998));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3995, ((panda$core$Object*) target3988->target->type));
    org$pandalanguage$pandac$Type* $tmp4000 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp4000->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp4000->refCount.value = 1;
    panda$core$Object* $tmp4002 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3995, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4003 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp4002));
    panda$core$String* $tmp4005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4003, &$s4004);
    panda$core$Object* $tmp4006 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3995, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4007 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4005, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp4006)));
    panda$core$String* $tmp4009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4007, &$s4008);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp4000, $tmp4009, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3995), ((panda$core$Bit) { true }));
    iterType3999 = $tmp4000;
    org$pandalanguage$pandac$Variable* $tmp4011 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4011->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4011->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind* $tmp4013 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp4013->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp4013->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4013, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3994)->name, &$s4015);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4011, p_iterator->position, $tmp4013, $tmp4016, iterType3999);
    iter4010 = $tmp4011;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter4010));
    panda$collections$Array* $tmp4018 = (panda$collections$Array*) malloc(40);
    $tmp4018->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4018->refCount.value = 1;
    panda$collections$Array$init($tmp4018);
    statements4017 = $tmp4018;
    panda$collections$Array* $tmp4021 = (panda$collections$Array*) malloc(40);
    $tmp4021->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4021->refCount.value = 1;
    panda$collections$Array$init($tmp4021);
    declChildren4020 = $tmp4021;
    org$pandalanguage$pandac$IRNode* $tmp4023 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4023->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4023->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4023, ((panda$core$Int64) { 1016 }), p_iterator->position, iter4010->type, iter4010);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4020, ((panda$core$Object*) $tmp4023));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4020, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp4026 = (panda$collections$Array*) malloc(40);
    $tmp4026->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4026->refCount.value = 1;
    panda$collections$Array$init($tmp4026);
    varChildren4025 = $tmp4026;
    org$pandalanguage$pandac$IRNode* $tmp4028 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4028->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4028->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4028, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter4010)->position, ((panda$collections$ListView*) declChildren4020));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4025, ((panda$core$Object*) $tmp4028));
    org$pandalanguage$pandac$IRNode* $tmp4030 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4030->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4030->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4030, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter4010)->position, ((panda$collections$ListView*) varChildren4025));
    panda$collections$Array$add$panda$collections$Array$T(statements4017, ((panda$core$Object*) $tmp4030));
    panda$collections$Array* $tmp4033 = (panda$collections$Array*) malloc(40);
    $tmp4033->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4033->refCount.value = 1;
    panda$collections$Array$init($tmp4033);
    whileChildren4032 = $tmp4033;
    org$pandalanguage$pandac$IRNode* $tmp4036 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4036->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4036->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4036, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter4010)->position, iter4010->type, iter4010);
    panda$collections$Array* $tmp4039 = (panda$collections$Array*) malloc(40);
    $tmp4039->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4039->refCount.value = 1;
    panda$collections$Array$init($tmp4039);
    org$pandalanguage$pandac$IRNode* $tmp4041 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4036, &$s4038, ((panda$collections$ListView*) $tmp4039), NULL);
    done4035 = $tmp4041;
    if (((panda$core$Bit) { done4035 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4044 = (panda$collections$Array*) malloc(40);
    $tmp4044->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4044->refCount.value = 1;
    panda$collections$Array$init($tmp4044);
    org$pandalanguage$pandac$IRNode* $tmp4046 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done4035, &$s4043, ((panda$collections$ListView*) $tmp4044), NULL);
    notCall4042 = $tmp4046;
    if (((panda$core$Bit) { notCall4042 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren4032, ((panda$core$Object*) notCall4042));
    panda$collections$Array* $tmp4048 = (panda$collections$Array*) malloc(40);
    $tmp4048->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4048->refCount.value = 1;
    panda$collections$Array$init($tmp4048);
    valueDeclChildren4047 = $tmp4048;
    org$pandalanguage$pandac$IRNode* $tmp4050 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4050->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4050->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4050, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3994->type, targetVar3994);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren4047, ((panda$core$Object*) $tmp4050));
    org$pandalanguage$pandac$IRNode* $tmp4053 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4053->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4053->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4053, ((panda$core$Int64) { 1016 }), p_iterator->position, iter4010->type, iter4010);
    panda$collections$Array* $tmp4056 = (panda$collections$Array*) malloc(40);
    $tmp4056->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4056->refCount.value = 1;
    panda$collections$Array$init($tmp4056);
    org$pandalanguage$pandac$IRNode* $tmp4058 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4053, &$s4055, ((panda$collections$ListView*) $tmp4056), NULL);
    next4052 = $tmp4058;
    PANDA_ASSERT(((panda$core$Bit) { next4052 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren4047, ((panda$core$Object*) next4052));
    panda$collections$Array* $tmp4060 = (panda$collections$Array*) malloc(40);
    $tmp4060->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4060->refCount.value = 1;
    panda$collections$Array$init($tmp4060);
    valueVarChildren4059 = $tmp4060;
    org$pandalanguage$pandac$IRNode* $tmp4062 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4062->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4062->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4062, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren4047));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren4059, ((panda$core$Object*) $tmp4062));
    org$pandalanguage$pandac$IRNode* $tmp4065 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block4064 = $tmp4065;
    if (((panda$core$Bit) { block4064 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4067 = (panda$collections$Array*) malloc(40);
    $tmp4067->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4067->refCount.value = 1;
    panda$collections$Array$init($tmp4067);
    blockChildren4066 = $tmp4067;
    org$pandalanguage$pandac$IRNode* $tmp4069 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4069->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4069->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4069, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren4059));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren4066, ((panda$core$Object*) $tmp4069));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren4066, ((panda$collections$CollectionView*) block4064->children));
    org$pandalanguage$pandac$IRNode* $tmp4071 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4071->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4071->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4071, ((panda$core$Int64) { 1000 }), block4064->position, ((panda$collections$ListView*) blockChildren4066));
    block4064 = $tmp4071;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren4032, ((panda$core$Object*) block4064));
    org$pandalanguage$pandac$IRNode* $tmp4073 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4073->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4073->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4073, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren4032));
    panda$collections$Array$add$panda$collections$Array$T(statements4017, ((panda$core$Object*) $tmp4073));
    org$pandalanguage$pandac$IRNode* $tmp4075 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4075->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4075->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4075, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements4017));
    return $tmp4075;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list4080;
    org$pandalanguage$pandac$SymbolTable* symbols4083;
    org$pandalanguage$pandac$IRNode* result4086;
    panda$core$Bit found4100;
    panda$collections$Iterator* intf$Iter4101;
    org$pandalanguage$pandac$Type* intf4114;
    org$pandalanguage$pandac$IRNode* iterator4126;
    org$pandalanguage$pandac$IRNode* iterable4138;
    org$pandalanguage$pandac$IRNode* iterator4140;
    panda$core$Bit $tmp4077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp4077.value);
    panda$core$Int64 $tmp4078 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4078, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4079.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp4081 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4082 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4081));
    list4080 = $tmp4082;
    if (((panda$core$Bit) { list4080 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4084 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4084->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4084->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4084, self->symbolTable);
    symbols4083 = $tmp4084;
    self->symbolTable = symbols4083;
    panda$core$Bit $tmp4089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list4080->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp4088 = $tmp4089.value;
    if ($tmp4088) goto $l4090;
    panda$core$Bit $tmp4091 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list4080->type);
    $tmp4088 = $tmp4091.value;
    $l4090:;
    panda$core$Bit $tmp4092 = { $tmp4088 };
    bool $tmp4087 = $tmp4092.value;
    if ($tmp4087) goto $l4093;
    panda$core$Bit $tmp4094 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list4080->type);
    $tmp4087 = $tmp4094.value;
    $l4093:;
    panda$core$Bit $tmp4095 = { $tmp4087 };
    if ($tmp4095.value) {
    {
        panda$core$Object* $tmp4096 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4097 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp4098 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4096), list4080, ((org$pandalanguage$pandac$ASTNode*) $tmp4097));
        result4086 = $tmp4098;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp4099 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list4080);
        list4080 = $tmp4099;
        if (((panda$core$Bit) { list4080 == NULL }).value) {
        {
            return NULL;
        }
        }
        found4100 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp4102 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list4080->type);
            ITable* $tmp4103 = ((panda$collections$Iterable*) $tmp4102)->$class->itable;
            while ($tmp4103->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4103 = $tmp4103->next;
            }
            $fn4105 $tmp4104 = $tmp4103->methods[0];
            panda$collections$Iterator* $tmp4106 = $tmp4104(((panda$collections$Iterable*) $tmp4102));
            intf$Iter4101 = $tmp4106;
            $l4107:;
            ITable* $tmp4109 = intf$Iter4101->$class->itable;
            while ($tmp4109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4109 = $tmp4109->next;
            }
            $fn4111 $tmp4110 = $tmp4109->methods[0];
            panda$core$Bit $tmp4112 = $tmp4110(intf$Iter4101);
            panda$core$Bit $tmp4113 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4112);
            if (!$tmp4113.value) goto $l4108;
            {
                ITable* $tmp4115 = intf$Iter4101->$class->itable;
                while ($tmp4115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4115 = $tmp4115->next;
                }
                $fn4117 $tmp4116 = $tmp4115->methods[1];
                panda$core$Object* $tmp4118 = $tmp4116(intf$Iter4101);
                intf4114 = ((org$pandalanguage$pandac$Type*) $tmp4118);
                panda$core$Bit $tmp4120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4114->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4119 = $tmp4120.value;
                if (!$tmp4119) goto $l4121;
                panda$core$Object* $tmp4122 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4114->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4123 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4124 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4122), $tmp4123);
                $tmp4119 = $tmp4124.value;
                $l4121:;
                panda$core$Bit $tmp4125 = { $tmp4119 };
                if ($tmp4125.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4127 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4080, intf4114);
                    iterator4126 = $tmp4127;
                    panda$core$Object* $tmp4128 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp4129 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp4130 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4128), iterator4126, ((org$pandalanguage$pandac$ASTNode*) $tmp4129));
                    result4086 = $tmp4130;
                    found4100 = ((panda$core$Bit) { true });
                    goto $l4108;
                }
                }
                panda$core$Bit $tmp4132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4114->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4131 = $tmp4132.value;
                if (!$tmp4131) goto $l4133;
                panda$core$Object* $tmp4134 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4114->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4135 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4136 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4134), $tmp4135);
                $tmp4131 = $tmp4136.value;
                $l4133:;
                panda$core$Bit $tmp4137 = { $tmp4131 };
                if ($tmp4137.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4139 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4080, intf4114);
                    iterable4138 = $tmp4139;
                    panda$collections$Array* $tmp4142 = (panda$collections$Array*) malloc(40);
                    $tmp4142->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4142->refCount.value = 1;
                    panda$collections$Array$init($tmp4142);
                    org$pandalanguage$pandac$IRNode* $tmp4144 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable4138, &$s4141, ((panda$collections$ListView*) $tmp4142));
                    iterator4140 = $tmp4144;
                    panda$core$Object* $tmp4145 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp4146 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp4147 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4145), iterator4140, ((org$pandalanguage$pandac$ASTNode*) $tmp4146));
                    result4086 = $tmp4147;
                    found4100 = ((panda$core$Bit) { true });
                    goto $l4108;
                }
                }
            }
            goto $l4107;
            $l4108:;
        }
        panda$core$Bit $tmp4148 = panda$core$Bit$$NOT$R$panda$core$Bit(found4100);
        if ($tmp4148.value) {
        {
            panda$core$String* $tmp4150 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4149, ((panda$core$Object*) list4080->type));
            panda$core$String* $tmp4152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4150, &$s4151);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list4080->position, $tmp4152);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp4153 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols4083->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4153);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result4086;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4157;
    org$pandalanguage$pandac$IRNode* stmt4162;
    panda$collections$Array* children4165;
    panda$core$Bit $tmp4154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp4154.value);
    panda$core$Int64 $tmp4155 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4155, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4156.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp4158 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4159 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4158));
    org$pandalanguage$pandac$Type* $tmp4160 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4161 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4159, $tmp4160);
    test4157 = $tmp4161;
    if (((panda$core$Bit) { test4157 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp4163 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4164 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4163));
    stmt4162 = $tmp4164;
    if (((panda$core$Bit) { stmt4162 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4166 = (panda$collections$Array*) malloc(40);
    $tmp4166->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4166->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4166, ((panda$core$Int64) { 2 }));
    children4165 = $tmp4166;
    panda$collections$Array$add$panda$collections$Array$T(children4165, ((panda$core$Object*) test4157));
    panda$collections$Array$add$panda$collections$Array$T(children4165, ((panda$core$Object*) stmt4162));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4168 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4168->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4168->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4168, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children4165));
    return $tmp4168;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt4173;
    org$pandalanguage$pandac$IRNode* test4176;
    panda$collections$Array* children4181;
    panda$core$Bit $tmp4170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp4170.value);
    panda$core$Int64 $tmp4171 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4171, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4172.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp4174 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4175 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4174));
    stmt4173 = $tmp4175;
    if (((panda$core$Bit) { stmt4173 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp4177 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4178 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4177));
    org$pandalanguage$pandac$Type* $tmp4179 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4180 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4178, $tmp4179);
    test4176 = $tmp4180;
    if (((panda$core$Bit) { test4176 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4182 = (panda$collections$Array*) malloc(40);
    $tmp4182->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4182->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4182, ((panda$core$Int64) { 2 }));
    children4181 = $tmp4182;
    panda$collections$Array$add$panda$collections$Array$T(children4181, ((panda$core$Object*) stmt4173));
    panda$collections$Array$add$panda$collections$Array$T(children4181, ((panda$core$Object*) test4176));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4184 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4184->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4184->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4184, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children4181));
    return $tmp4184;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt4189;
    panda$collections$Array* children4192;
    panda$core$Bit $tmp4186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp4186.value);
    panda$core$Int64 $tmp4187 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp4188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4187, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4188.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp4190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4191 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4190));
    stmt4189 = $tmp4191;
    if (((panda$core$Bit) { stmt4189 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4193 = (panda$collections$Array*) malloc(40);
    $tmp4193->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4193->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4193, ((panda$core$Int64) { 1 }));
    children4192 = $tmp4193;
    panda$collections$Array$add$panda$collections$Array$T(children4192, ((panda$core$Object*) stmt4189));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4195 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4195->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4195->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4195, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children4192));
    return $tmp4195;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, org$pandalanguage$pandac$Variable$Kind* p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value4197;
    org$pandalanguage$pandac$Type* type4201;
    org$pandalanguage$pandac$Variable* v4217;
    value4197 = p_rawValue;
    bool $tmp4198 = ((panda$core$Bit) { value4197 == NULL }).value;
    if ($tmp4198) goto $l4199;
    $tmp4198 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l4199:;
    panda$core$Bit $tmp4200 = { $tmp4198 };
    PANDA_ASSERT($tmp4200.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp4202 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp4202) goto $l4203;
            panda$core$Int64 $tmp4204 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp4205 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4204, ((panda$core$Int64) { 0 }));
            $tmp4202 = $tmp4205.value;
            $l4203:;
            panda$core$Bit $tmp4206 = { $tmp4202 };
            if ($tmp4206.value) {
            {
                panda$core$Int64 $tmp4207 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp4208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4207, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp4208.value);
                panda$core$Object* $tmp4209 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4210 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp4209));
                org$pandalanguage$pandac$Type* $tmp4211 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp4210);
                type4201 = $tmp4211;
            }
            }
            else {
            if (((panda$core$Bit) { value4197 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4212 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value4197);
                value4197 = $tmp4212;
                if (((panda$core$Bit) { value4197 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp4213 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value4197);
                type4201 = $tmp4213;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type4201 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s4214);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value4197 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4215 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value4197, type4201);
                value4197 = $tmp4215;
                if (((panda$core$Bit) { value4197 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp4216 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value4197->type, type4201);
                PANDA_ASSERT($tmp4216.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp4218 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4218->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4218->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4218, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type4201);
            v4217 = $tmp4218;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v4217));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4220 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp4220->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp4220->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4222 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4222->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4222->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4222, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v4217)->position, v4217->type, v4217);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4220, $tmp4222, value4197);
            return $tmp4220;
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
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d, org$pandalanguage$pandac$Variable$Kind* p_varKind) {
    org$pandalanguage$pandac$IRNode* value4232;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4237;
    panda$collections$Array* children4240;
    org$pandalanguage$pandac$Variable* v4244;
    panda$core$Bit $tmp4224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp4224.value);
    panda$core$Int64 $tmp4226 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4226, ((panda$core$Int64) { 1 }));
    bool $tmp4225 = $tmp4227.value;
    if ($tmp4225) goto $l4228;
    panda$core$Int64 $tmp4229 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4229, ((panda$core$Int64) { 2 }));
    $tmp4225 = $tmp4230.value;
    $l4228:;
    panda$core$Bit $tmp4231 = { $tmp4225 };
    PANDA_ASSERT($tmp4231.value);
    panda$core$Int64 $tmp4233 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4233, ((panda$core$Int64) { 2 }));
    if ($tmp4234.value) {
    {
        panda$core$Object* $tmp4235 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4236 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4235));
        value4232 = $tmp4236;
        if (((panda$core$Bit) { value4232 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value4232 = NULL;
    }
    }
    panda$core$Object* $tmp4238 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4239 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4238), p_varKind, value4232, NULL);
    target4237 = $tmp4239;
    if (((panda$core$Bit) { target4237 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4241 = (panda$collections$Array*) malloc(40);
    $tmp4241->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4241->refCount.value = 1;
    panda$collections$Array$init($tmp4241);
    children4240 = $tmp4241;
    panda$collections$Array$add$panda$collections$Array$T(children4240, ((panda$core$Object*) target4237->target));
    if (((panda$core$Bit) { target4237->value != NULL }).value) {
    {
        panda$core$Bit $tmp4243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4237->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp4243.value);
        v4244 = ((org$pandalanguage$pandac$Variable*) target4237->target->payload);
        v4244->initialValue = target4237->value;
        panda$collections$Array$add$panda$collections$Array$T(children4240, ((panda$core$Object*) target4237->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4245 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4245->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4245->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4245, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children4240));
    return $tmp4245;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found4248;
    panda$collections$Iterator* label$Iter4249;
    panda$core$String* label4261;
    panda$core$Bit $tmp4247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp4247.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found4248 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4250 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4250->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4250 = $tmp4250->next;
            }
            $fn4252 $tmp4251 = $tmp4250->methods[0];
            panda$collections$Iterator* $tmp4253 = $tmp4251(((panda$collections$Iterable*) self->loops));
            label$Iter4249 = $tmp4253;
            $l4254:;
            ITable* $tmp4256 = label$Iter4249->$class->itable;
            while ($tmp4256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4256 = $tmp4256->next;
            }
            $fn4258 $tmp4257 = $tmp4256->methods[0];
            panda$core$Bit $tmp4259 = $tmp4257(label$Iter4249);
            panda$core$Bit $tmp4260 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4259);
            if (!$tmp4260.value) goto $l4255;
            {
                ITable* $tmp4262 = label$Iter4249->$class->itable;
                while ($tmp4262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4262 = $tmp4262->next;
                }
                $fn4264 $tmp4263 = $tmp4262->methods[1];
                panda$core$Object* $tmp4265 = $tmp4263(label$Iter4249);
                label4261 = ((panda$core$String*) $tmp4265);
                bool $tmp4266 = ((panda$core$Bit) { label4261 != NULL }).value;
                if (!$tmp4266) goto $l4267;
                panda$core$Bit $tmp4271;
                if (((panda$core$Bit) { label4261 != NULL }).value) goto $l4268; else goto $l4269;
                $l4268:;
                panda$core$Bit $tmp4272 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4261, ((panda$core$String*) p_b->payload));
                $tmp4271 = $tmp4272;
                goto $l4270;
                $l4269:;
                $tmp4271 = ((panda$core$Bit) { false });
                goto $l4270;
                $l4270:;
                $tmp4266 = $tmp4271.value;
                $l4267:;
                panda$core$Bit $tmp4273 = { $tmp4266 };
                if ($tmp4273.value) {
                {
                    found4248 = ((panda$core$Bit) { true });
                    goto $l4255;
                }
                }
            }
            goto $l4254;
            $l4255:;
        }
        panda$core$Bit $tmp4274 = panda$core$Bit$$NOT$R$panda$core$Bit(found4248);
        if ($tmp4274.value) {
        {
            panda$core$String* $tmp4276 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4275, p_b->payload);
            panda$core$String* $tmp4278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4276, &$s4277);
            panda$core$String* $tmp4280 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4279, p_b->payload);
            panda$core$String* $tmp4282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4280, &$s4281);
            panda$core$String* $tmp4283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4278, $tmp4282);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp4283);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4284 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4284, ((panda$core$Int64) { 0 }));
    if ($tmp4285.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s4286);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4287 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4287->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4287->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4287, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp4287;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found4290;
    panda$collections$Iterator* label$Iter4291;
    panda$core$String* label4303;
    panda$core$Bit $tmp4289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp4289.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found4290 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4292 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4292->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4292 = $tmp4292->next;
            }
            $fn4294 $tmp4293 = $tmp4292->methods[0];
            panda$collections$Iterator* $tmp4295 = $tmp4293(((panda$collections$Iterable*) self->loops));
            label$Iter4291 = $tmp4295;
            $l4296:;
            ITable* $tmp4298 = label$Iter4291->$class->itable;
            while ($tmp4298->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4298 = $tmp4298->next;
            }
            $fn4300 $tmp4299 = $tmp4298->methods[0];
            panda$core$Bit $tmp4301 = $tmp4299(label$Iter4291);
            panda$core$Bit $tmp4302 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4301);
            if (!$tmp4302.value) goto $l4297;
            {
                ITable* $tmp4304 = label$Iter4291->$class->itable;
                while ($tmp4304->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4304 = $tmp4304->next;
                }
                $fn4306 $tmp4305 = $tmp4304->methods[1];
                panda$core$Object* $tmp4307 = $tmp4305(label$Iter4291);
                label4303 = ((panda$core$String*) $tmp4307);
                bool $tmp4308 = ((panda$core$Bit) { label4303 != NULL }).value;
                if (!$tmp4308) goto $l4309;
                panda$core$Bit $tmp4313;
                if (((panda$core$Bit) { label4303 != NULL }).value) goto $l4310; else goto $l4311;
                $l4310:;
                panda$core$Bit $tmp4314 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4303, ((panda$core$String*) p_c->payload));
                $tmp4313 = $tmp4314;
                goto $l4312;
                $l4311:;
                $tmp4313 = ((panda$core$Bit) { false });
                goto $l4312;
                $l4312:;
                $tmp4308 = $tmp4313.value;
                $l4309:;
                panda$core$Bit $tmp4315 = { $tmp4308 };
                if ($tmp4315.value) {
                {
                    found4290 = ((panda$core$Bit) { true });
                    goto $l4297;
                }
                }
            }
            goto $l4296;
            $l4297:;
        }
        panda$core$Bit $tmp4316 = panda$core$Bit$$NOT$R$panda$core$Bit(found4290);
        if ($tmp4316.value) {
        {
            panda$core$String* $tmp4318 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4317, p_c->payload);
            panda$core$String* $tmp4320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4318, &$s4319);
            panda$core$String* $tmp4322 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4321, p_c->payload);
            panda$core$String* $tmp4324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4322, &$s4323);
            panda$core$String* $tmp4325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4320, $tmp4324);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp4325);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4326 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4326, ((panda$core$Int64) { 0 }));
    if ($tmp4327.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s4328);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4329 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4329->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4329->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4329, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp4329;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value4343;
    panda$collections$Array* children4348;
    panda$core$Bit $tmp4331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp4331.value);
    bool $tmp4332 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp4332) goto $l4333;
    panda$core$Int64 $tmp4334 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp4335 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4334, ((panda$core$Int64) { 0 }));
    $tmp4332 = $tmp4335.value;
    $l4333:;
    panda$core$Bit $tmp4336 = { $tmp4332 };
    if ($tmp4336.value) {
    {
        panda$core$Int64 $tmp4337 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp4338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4337, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4338.value);
        panda$core$Object* $tmp4339 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp4340 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4341 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4339)->returnType, $tmp4340);
        if ($tmp4341.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4342);
            return NULL;
        }
        }
        panda$core$Object* $tmp4344 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp4345 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4344));
        panda$core$Object* $tmp4346 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp4347 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4345, ((org$pandalanguage$pandac$MethodDecl*) $tmp4346)->returnType);
        value4343 = $tmp4347;
        if (((panda$core$Bit) { value4343 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4349 = (panda$collections$Array*) malloc(40);
        $tmp4349->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4349->refCount.value = 1;
        panda$collections$Array$init($tmp4349);
        children4348 = $tmp4349;
        panda$collections$Array$add$panda$collections$Array$T(children4348, ((panda$core$Object*) value4343));
        org$pandalanguage$pandac$IRNode* $tmp4351 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4351->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4351->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4351, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children4348));
        return $tmp4351;
    }
    }
    panda$core$Object* $tmp4353 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp4354 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4355 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4353)->returnType, $tmp4354);
    if ($tmp4355.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4356);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4357 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4357->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4357->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp4357, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp4357;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test4367;
    org$pandalanguage$pandac$ClassDecl* bit4372;
    org$pandalanguage$pandac$Symbol* value4375;
    panda$collections$Array* fieldChildren4378;
    panda$collections$Array* children4384;
    org$pandalanguage$pandac$IRNode* msg4389;
    panda$core$Bit $tmp4359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp4359.value);
    panda$core$Int64 $tmp4361 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4361, ((panda$core$Int64) { 1 }));
    bool $tmp4360 = $tmp4362.value;
    if ($tmp4360) goto $l4363;
    panda$core$Int64 $tmp4364 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4364, ((panda$core$Int64) { 2 }));
    $tmp4360 = $tmp4365.value;
    $l4363:;
    panda$core$Bit $tmp4366 = { $tmp4360 };
    PANDA_ASSERT($tmp4366.value);
    panda$core$Object* $tmp4368 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4369 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4368));
    test4367 = $tmp4369;
    if (((panda$core$Bit) { test4367 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4370 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4371 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test4367, $tmp4370);
    test4367 = $tmp4371;
    if (((panda$core$Bit) { test4367 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4373 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4374 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp4373);
    bit4372 = $tmp4374;
    PANDA_ASSERT(((panda$core$Bit) { bit4372 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp4377 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit4372->symbolTable, &$s4376);
    value4375 = $tmp4377;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value4375));
    panda$collections$Array* $tmp4379 = (panda$collections$Array*) malloc(40);
    $tmp4379->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4379->refCount.value = 1;
    panda$collections$Array$init($tmp4379);
    fieldChildren4378 = $tmp4379;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren4378, ((panda$core$Object*) test4367));
    org$pandalanguage$pandac$IRNode* $tmp4381 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4381->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4381->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4383 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4381, ((panda$core$Int64) { 1026 }), p_a->position, $tmp4383, ((panda$core$Object*) value4375), ((panda$collections$ListView*) fieldChildren4378));
    test4367 = $tmp4381;
    panda$collections$Array* $tmp4385 = (panda$collections$Array*) malloc(40);
    $tmp4385->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4385->refCount.value = 1;
    panda$collections$Array$init($tmp4385);
    children4384 = $tmp4385;
    panda$collections$Array$add$panda$collections$Array$T(children4384, ((panda$core$Object*) test4367));
    panda$core$Int64 $tmp4387 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4387, ((panda$core$Int64) { 2 }));
    if ($tmp4388.value) {
    {
        panda$core$Object* $tmp4390 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4391 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4390));
        msg4389 = $tmp4391;
        if (((panda$core$Bit) { msg4389 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4392 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4393 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg4389, $tmp4392);
        msg4389 = $tmp4393;
        if (((panda$core$Bit) { msg4389 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4384, ((panda$core$Object*) msg4389));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4394 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4394->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4394->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4394, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children4384));
    return $tmp4394;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind4409;
    org$pandalanguage$pandac$Variable$Kind* varKind4410;
    panda$collections$Array* decls4419;
    panda$collections$Iterator* astDecl$Iter4422;
    org$pandalanguage$pandac$ASTNode* astDecl4434;
    org$pandalanguage$pandac$IRNode* decl4439;
    panda$core$Bit $tmp4399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp4398 = $tmp4399.value;
    if ($tmp4398) goto $l4400;
    panda$core$Bit $tmp4401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp4398 = $tmp4401.value;
    $l4400:;
    panda$core$Bit $tmp4402 = { $tmp4398 };
    bool $tmp4397 = $tmp4402.value;
    if ($tmp4397) goto $l4403;
    panda$core$Bit $tmp4404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp4397 = $tmp4404.value;
    $l4403:;
    panda$core$Bit $tmp4405 = { $tmp4397 };
    bool $tmp4396 = $tmp4405.value;
    if ($tmp4396) goto $l4406;
    panda$core$Bit $tmp4407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp4396 = $tmp4407.value;
    $l4406:;
    panda$core$Bit $tmp4408 = { $tmp4396 };
    PANDA_ASSERT($tmp4408.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind4409 = ((panda$core$Int64) { 1017 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4411 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4411->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4411->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4411, ((panda$core$Int64) { 0 }));
            varKind4410 = $tmp4411;
        }
        break;
        case 131:
        {
            nodeKind4409 = ((panda$core$Int64) { 1018 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4413 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4413->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4413->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4413, ((panda$core$Int64) { 1 }));
            varKind4410 = $tmp4413;
        }
        break;
        case 132:
        {
            nodeKind4409 = ((panda$core$Int64) { 1019 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4415 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4415->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4415->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4415, ((panda$core$Int64) { 2 }));
            varKind4410 = $tmp4415;
        }
        break;
        case 133:
        {
            nodeKind4409 = ((panda$core$Int64) { 1020 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4417 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4417->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4417->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4417, ((panda$core$Int64) { 3 }));
            varKind4410 = $tmp4417;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp4420 = (panda$collections$Array*) malloc(40);
    $tmp4420->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4420->refCount.value = 1;
    panda$collections$Array$init($tmp4420);
    decls4419 = $tmp4420;
    {
        ITable* $tmp4423 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp4423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4423 = $tmp4423->next;
        }
        $fn4425 $tmp4424 = $tmp4423->methods[0];
        panda$collections$Iterator* $tmp4426 = $tmp4424(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter4422 = $tmp4426;
        $l4427:;
        ITable* $tmp4429 = astDecl$Iter4422->$class->itable;
        while ($tmp4429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4429 = $tmp4429->next;
        }
        $fn4431 $tmp4430 = $tmp4429->methods[0];
        panda$core$Bit $tmp4432 = $tmp4430(astDecl$Iter4422);
        panda$core$Bit $tmp4433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4432);
        if (!$tmp4433.value) goto $l4428;
        {
            ITable* $tmp4435 = astDecl$Iter4422->$class->itable;
            while ($tmp4435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4435 = $tmp4435->next;
            }
            $fn4437 $tmp4436 = $tmp4435->methods[1];
            panda$core$Object* $tmp4438 = $tmp4436(astDecl$Iter4422);
            astDecl4434 = ((org$pandalanguage$pandac$ASTNode*) $tmp4438);
            org$pandalanguage$pandac$IRNode* $tmp4440 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl4434, varKind4410);
            decl4439 = $tmp4440;
            if (((panda$core$Bit) { decl4439 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls4419, ((panda$core$Object*) decl4439));
        }
        goto $l4427;
        $l4428:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4441 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4441->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4441->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4441, nodeKind4409, p_v->position, ((panda$collections$ListView*) decls4419));
    return $tmp4441;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4443;
    org$pandalanguage$pandac$IRNode* testValue4446;
    panda$collections$Array* callChildren4448;
    org$pandalanguage$pandac$IRNode* $tmp4444 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4444->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4444->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4444, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target4443 = $tmp4444;
    org$pandalanguage$pandac$IRNode* $tmp4447 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue4446 = $tmp4447;
    if (((panda$core$Bit) { testValue4446 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4449 = (panda$collections$Array*) malloc(40);
    $tmp4449->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4449->refCount.value = 1;
    panda$collections$Array$init($tmp4449);
    callChildren4448 = $tmp4449;
    panda$collections$Array$add$panda$collections$Array$T(callChildren4448, ((panda$core$Object*) testValue4446));
    org$pandalanguage$pandac$IRNode* $tmp4452 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4443, &$s4451, ((panda$collections$ListView*) callChildren4448));
    return $tmp4452;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$ASTNode* test4464;
    org$pandalanguage$pandac$ClassDecl* cl4472;
    org$pandalanguage$pandac$IRNode* base4475;
    panda$collections$Array* callChildren4479;
    org$pandalanguage$pandac$IRNode* target4482;
    org$pandalanguage$pandac$IRNode* check4485;
    org$pandalanguage$pandac$ChoiceEntry* entry4488;
    panda$core$Int64 requiredCount4489;
    panda$core$Int64 actualCount4491;
    panda$collections$Array* statements4521;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4524;
    org$pandalanguage$pandac$Variable* variable4543;
    panda$collections$Array* declChildren4552;
    panda$collections$Array* fieldRefChildren4557;
    panda$collections$Array* varChildren4568;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4581;
    org$pandalanguage$pandac$IRNode* statement4596;
    panda$collections$Array* children4606;
    org$pandalanguage$pandac$IRNode* test4613;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4617;
    org$pandalanguage$pandac$IRNode* nextTest4633;
    panda$collections$Array* callChildren4637;
    panda$collections$Array* statements4650;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4653;
    org$pandalanguage$pandac$IRNode* statement4668;
    panda$collections$Array* children4678;
    panda$core$Bit $tmp4453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4453.value);
    panda$core$Int64 $tmp4454 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4455 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4454, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4455.value);
    panda$core$Object* $tmp4456 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4456)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4457.value);
    panda$core$Object* $tmp4458 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4459 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4458)->children);
    panda$core$Bit $tmp4460 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4459, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4460.value);
    panda$core$Object* $tmp4461 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4462 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4461)->children);
    panda$core$Bit $tmp4463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4462, ((panda$core$Int64) { 1 }));
    if ($tmp4463.value) {
    {
        panda$core$Object* $tmp4465 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4466 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4465)->children, ((panda$core$Int64) { 0 }));
        test4464 = ((org$pandalanguage$pandac$ASTNode*) $tmp4466);
        panda$core$Bit $tmp4468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(test4464->kind, ((panda$core$Int64) { 107 }));
        bool $tmp4467 = $tmp4468.value;
        if (!$tmp4467) goto $l4469;
        panda$core$Bit $tmp4470 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_value->type);
        $tmp4467 = $tmp4470.value;
        $l4469:;
        panda$core$Bit $tmp4471 = { $tmp4467 };
        if ($tmp4471.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp4473 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_value->type);
            cl4472 = $tmp4473;
            panda$core$Bit $tmp4474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl4472->classKind->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp4474.value) {
            {
                panda$core$Object* $tmp4476 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4464->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp4477 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4476));
                base4475 = $tmp4477;
                if (((panda$core$Bit) { base4475 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp4478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base4475->kind, ((panda$core$Int64) { 1046 }));
                if ($tmp4478.value) {
                {
                    panda$collections$Array* $tmp4480 = (panda$collections$Array*) malloc(40);
                    $tmp4480->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4480->refCount.value = 1;
                    panda$collections$Array$init($tmp4480);
                    callChildren4479 = $tmp4480;
                    panda$collections$Array$add$panda$collections$Array$T(callChildren4479, ((panda$core$Object*) base4475));
                    org$pandalanguage$pandac$IRNode* $tmp4483 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4483->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4483->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4483, ((panda$core$Int64) { 1016 }), test4464->position, p_value->type, p_value);
                    target4482 = $tmp4483;
                    org$pandalanguage$pandac$IRNode* $tmp4487 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4482, &$s4486, ((panda$collections$ListView*) callChildren4479));
                    check4485 = $tmp4487;
                    if (((panda$core$Bit) { check4485 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    entry4488 = ((org$pandalanguage$pandac$ChoiceEntry*) base4475->payload);
                    panda$core$Int64 $tmp4490 = panda$collections$Array$get_count$R$panda$core$Int64(entry4488->fields);
                    requiredCount4489 = $tmp4490;
                    panda$core$Int64 $tmp4492 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(test4464->children);
                    panda$core$Int64 $tmp4493 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4492, ((panda$core$Int64) { 1 }));
                    actualCount4491 = $tmp4493;
                    panda$core$Bit $tmp4494 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(actualCount4491, requiredCount4489);
                    if ($tmp4494.value) {
                    {
                        panda$core$String* $tmp4496 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4495, base4475->payload);
                        panda$core$String* $tmp4498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4496, &$s4497);
                        panda$core$Int64$wrapper* $tmp4499;
                        $tmp4499 = (panda$core$Int64$wrapper*) malloc(24);
                        $tmp4499->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                        $tmp4499->refCount = 1;
                        $tmp4499->value = requiredCount4489;
                        panda$core$String* $tmp4500 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4498, ((panda$core$Object*) $tmp4499));
                        panda$core$String* $tmp4502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4500, &$s4501);
                        panda$core$Bit $tmp4504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(requiredCount4489, ((panda$core$Int64) { 1 }));
                        panda$core$Bit$wrapper* $tmp4505;
                        $tmp4505 = (panda$core$Bit$wrapper*) malloc(13);
                        $tmp4505->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                        $tmp4505->refCount = 1;
                        $tmp4505->value = $tmp4504;
                        ITable* $tmp4507 = ((panda$core$Formattable*) $tmp4505)->$class->itable;
                        while ($tmp4507->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                            $tmp4507 = $tmp4507->next;
                        }
                        $fn4509 $tmp4508 = $tmp4507->methods[0];
                        panda$core$String* $tmp4510 = $tmp4508(((panda$core$Formattable*) $tmp4505), &$s4506);
                        panda$core$String* $tmp4511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4503, $tmp4510);
                        panda$core$String* $tmp4513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4511, &$s4512);
                        panda$core$Int64$wrapper* $tmp4514;
                        $tmp4514 = (panda$core$Int64$wrapper*) malloc(24);
                        $tmp4514->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                        $tmp4514->refCount = 1;
                        $tmp4514->value = actualCount4491;
                        panda$core$String* $tmp4515 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4513, ((panda$core$Object*) $tmp4514));
                        panda$core$String* $tmp4517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4515, &$s4516);
                        panda$core$String* $tmp4518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4502, $tmp4517);
                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, test4464->position, $tmp4518);
                        return NULL;
                    }
                    }
                    org$pandalanguage$pandac$SymbolTable* $tmp4519 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
                    $tmp4519->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
                    $tmp4519->refCount.value = 1;
                    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4519, self->symbolTable);
                    self->symbolTable = $tmp4519;
                    panda$collections$Array* $tmp4522 = (panda$collections$Array*) malloc(40);
                    $tmp4522->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4522->refCount.value = 1;
                    panda$collections$Array$init($tmp4522);
                    statements4521 = $tmp4522;
                    panda$core$Int64 $tmp4525 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(test4464->children);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4524, ((panda$core$Int64) { 1 }), $tmp4525, ((panda$core$Bit) { false }));
                    int64_t $tmp4527 = $tmp4524.min.value;
                    panda$core$Int64 i4526 = { $tmp4527 };
                    int64_t $tmp4529 = $tmp4524.max.value;
                    bool $tmp4530 = $tmp4524.inclusive.value;
                    if ($tmp4530) goto $l4537; else goto $l4538;
                    $l4537:;
                    if ($tmp4527 <= $tmp4529) goto $l4531; else goto $l4533;
                    $l4538:;
                    if ($tmp4527 < $tmp4529) goto $l4531; else goto $l4533;
                    $l4531:;
                    {
                        panda$core$Object* $tmp4539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4464->children, i4526);
                        panda$core$Bit $tmp4540 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4539)->kind, ((panda$core$Int64) { 106 }));
                        if ($tmp4540.value) {
                        {
                            panda$core$Object* $tmp4541 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4464->children, i4526);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4541)->position, &$s4542);
                            return NULL;
                        }
                        }
                        org$pandalanguage$pandac$Variable* $tmp4544 = (org$pandalanguage$pandac$Variable*) malloc(88);
                        $tmp4544->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
                        $tmp4544->refCount.value = 1;
                        panda$core$Object* $tmp4546 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4464->children, i4526);
                        org$pandalanguage$pandac$Variable$Kind* $tmp4547 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
                        $tmp4547->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
                        $tmp4547->refCount.value = 1;
                        org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4547, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp4549 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4464->children, i4526);
                        panda$core$Int64 $tmp4550 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4526, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp4551 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(entry4488->fields, $tmp4550);
                        org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4544, ((org$pandalanguage$pandac$ASTNode*) $tmp4546)->position, $tmp4547, ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp4549)->payload), ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp4551)->second));
                        variable4543 = $tmp4544;
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) variable4543));
                        panda$collections$Array* $tmp4553 = (panda$collections$Array*) malloc(40);
                        $tmp4553->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4553->refCount.value = 1;
                        panda$collections$Array$init($tmp4553);
                        declChildren4552 = $tmp4553;
                        org$pandalanguage$pandac$IRNode* $tmp4555 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4555->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4555->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4555, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) variable4543)->position, variable4543->type, variable4543);
                        panda$collections$Array$add$panda$collections$Array$T(declChildren4552, ((panda$core$Object*) $tmp4555));
                        panda$collections$Array* $tmp4558 = (panda$collections$Array*) malloc(40);
                        $tmp4558->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4558->refCount.value = 1;
                        panda$collections$Array$init($tmp4558);
                        fieldRefChildren4557 = $tmp4558;
                        org$pandalanguage$pandac$IRNode* $tmp4560 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4560->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4560->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4560, ((panda$core$Int64) { 1016 }), test4464->position, p_value->type, p_value);
                        panda$collections$Array$add$panda$collections$Array$T(fieldRefChildren4557, ((panda$core$Object*) $tmp4560));
                        org$pandalanguage$pandac$IRNode* $tmp4562 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4562->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4562->refCount.value = 1;
                        org$pandalanguage$pandac$Pair* $tmp4564 = (org$pandalanguage$pandac$Pair*) malloc(32);
                        $tmp4564->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
                        $tmp4564->refCount.value = 1;
                        panda$core$Int64 $tmp4566 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4526, ((panda$core$Int64) { 1 }));
                        panda$core$Int64$wrapper* $tmp4567;
                        $tmp4567 = (panda$core$Int64$wrapper*) malloc(24);
                        $tmp4567->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                        $tmp4567->refCount = 1;
                        $tmp4567->value = $tmp4566;
                        org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp4564, ((panda$core$Object*) entry4488), ((panda$core$Object*) $tmp4567));
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4562, ((panda$core$Int64) { 1047 }), ((org$pandalanguage$pandac$Symbol*) variable4543)->position, variable4543->type, ((panda$core$Object*) $tmp4564), ((panda$collections$ListView*) fieldRefChildren4557));
                        panda$collections$Array$add$panda$collections$Array$T(declChildren4552, ((panda$core$Object*) $tmp4562));
                        panda$collections$Array* $tmp4569 = (panda$collections$Array*) malloc(40);
                        $tmp4569->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4569->refCount.value = 1;
                        panda$collections$Array$init($tmp4569);
                        varChildren4568 = $tmp4569;
                        org$pandalanguage$pandac$IRNode* $tmp4571 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4571->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4571->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4571, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) variable4543)->position, ((panda$collections$ListView*) declChildren4552));
                        panda$collections$Array$add$panda$collections$Array$T(varChildren4568, ((panda$core$Object*) $tmp4571));
                        org$pandalanguage$pandac$IRNode* $tmp4573 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4573->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4573->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4573, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) variable4543)->position, ((panda$collections$ListView*) varChildren4568));
                        panda$collections$Array$add$panda$collections$Array$T(statements4521, ((panda$core$Object*) $tmp4573));
                    }
                    $l4534:;
                    int64_t $tmp4576 = $tmp4529 - i4526.value;
                    if ($tmp4530) goto $l4577; else goto $l4578;
                    $l4577:;
                    if ((uint64_t) $tmp4576 >= 1) goto $l4575; else goto $l4533;
                    $l4578:;
                    if ((uint64_t) $tmp4576 > 1) goto $l4575; else goto $l4533;
                    $l4575:;
                    i4526.value += 1;
                    goto $l4531;
                    $l4533:;
                    panda$core$Int64 $tmp4582 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4581, ((panda$core$Int64) { 1 }), $tmp4582, ((panda$core$Bit) { false }));
                    int64_t $tmp4584 = $tmp4581.min.value;
                    panda$core$Int64 i4583 = { $tmp4584 };
                    int64_t $tmp4586 = $tmp4581.max.value;
                    bool $tmp4587 = $tmp4581.inclusive.value;
                    if ($tmp4587) goto $l4594; else goto $l4595;
                    $l4594:;
                    if ($tmp4584 <= $tmp4586) goto $l4588; else goto $l4590;
                    $l4595:;
                    if ($tmp4584 < $tmp4586) goto $l4588; else goto $l4590;
                    $l4588:;
                    {
                        panda$core$Object* $tmp4597 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4583);
                        org$pandalanguage$pandac$IRNode* $tmp4598 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4597));
                        statement4596 = $tmp4598;
                        if (((panda$core$Bit) { statement4596 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4521, ((panda$core$Object*) statement4596));
                    }
                    $l4591:;
                    int64_t $tmp4600 = $tmp4586 - i4583.value;
                    if ($tmp4587) goto $l4601; else goto $l4602;
                    $l4601:;
                    if ((uint64_t) $tmp4600 >= 1) goto $l4599; else goto $l4590;
                    $l4602:;
                    if ((uint64_t) $tmp4600 > 1) goto $l4599; else goto $l4590;
                    $l4599:;
                    i4583.value += 1;
                    goto $l4588;
                    $l4590:;
                    panda$core$Object* $tmp4605 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4605);
                    panda$collections$Array* $tmp4607 = (panda$collections$Array*) malloc(40);
                    $tmp4607->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4607->refCount.value = 1;
                    panda$collections$Array$init($tmp4607);
                    children4606 = $tmp4607;
                    panda$collections$Array$add$panda$collections$Array$T(children4606, ((panda$core$Object*) check4485));
                    org$pandalanguage$pandac$IRNode* $tmp4609 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4609->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4609->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4609, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4521));
                    panda$collections$Array$add$panda$collections$Array$T(children4606, ((panda$core$Object*) $tmp4609));
                    org$pandalanguage$pandac$IRNode* $tmp4611 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4611->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4611->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4611, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4606));
                    return $tmp4611;
                }
                }
            }
            }
        }
        }
    }
    }
    panda$core$Object* $tmp4614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4615 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4614)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4616 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4615));
    test4613 = $tmp4616;
    if (((panda$core$Bit) { test4613 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4618 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4619 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4618)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4617, ((panda$core$Int64) { 1 }), $tmp4619, ((panda$core$Bit) { false }));
    int64_t $tmp4621 = $tmp4617.min.value;
    panda$core$Int64 i4620 = { $tmp4621 };
    int64_t $tmp4623 = $tmp4617.max.value;
    bool $tmp4624 = $tmp4617.inclusive.value;
    if ($tmp4624) goto $l4631; else goto $l4632;
    $l4631:;
    if ($tmp4621 <= $tmp4623) goto $l4625; else goto $l4627;
    $l4632:;
    if ($tmp4621 < $tmp4623) goto $l4625; else goto $l4627;
    $l4625:;
    {
        panda$core$Object* $tmp4634 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4634)->children, i4620);
        org$pandalanguage$pandac$IRNode* $tmp4636 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4635));
        nextTest4633 = $tmp4636;
        if (((panda$core$Bit) { nextTest4633 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4638 = (panda$collections$Array*) malloc(40);
        $tmp4638->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4638->refCount.value = 1;
        panda$collections$Array$init($tmp4638);
        callChildren4637 = $tmp4638;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4637, ((panda$core$Object*) nextTest4633));
        org$pandalanguage$pandac$IRNode* $tmp4641 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4613, &$s4640, ((panda$collections$ListView*) callChildren4637));
        test4613 = $tmp4641;
        if (((panda$core$Bit) { test4613 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4628:;
    int64_t $tmp4643 = $tmp4623 - i4620.value;
    if ($tmp4624) goto $l4644; else goto $l4645;
    $l4644:;
    if ((uint64_t) $tmp4643 >= 1) goto $l4642; else goto $l4627;
    $l4645:;
    if ((uint64_t) $tmp4643 > 1) goto $l4642; else goto $l4627;
    $l4642:;
    i4620.value += 1;
    goto $l4625;
    $l4627:;
    org$pandalanguage$pandac$SymbolTable* $tmp4648 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4648->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4648->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4648, self->symbolTable);
    self->symbolTable = $tmp4648;
    panda$collections$Array* $tmp4651 = (panda$collections$Array*) malloc(40);
    $tmp4651->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4651->refCount.value = 1;
    panda$collections$Array$init($tmp4651);
    statements4650 = $tmp4651;
    panda$core$Int64 $tmp4654 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4653, ((panda$core$Int64) { 1 }), $tmp4654, ((panda$core$Bit) { false }));
    int64_t $tmp4656 = $tmp4653.min.value;
    panda$core$Int64 i4655 = { $tmp4656 };
    int64_t $tmp4658 = $tmp4653.max.value;
    bool $tmp4659 = $tmp4653.inclusive.value;
    if ($tmp4659) goto $l4666; else goto $l4667;
    $l4666:;
    if ($tmp4656 <= $tmp4658) goto $l4660; else goto $l4662;
    $l4667:;
    if ($tmp4656 < $tmp4658) goto $l4660; else goto $l4662;
    $l4660:;
    {
        panda$core$Object* $tmp4669 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4655);
        org$pandalanguage$pandac$IRNode* $tmp4670 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4669));
        statement4668 = $tmp4670;
        if (((panda$core$Bit) { statement4668 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4650, ((panda$core$Object*) statement4668));
    }
    $l4663:;
    int64_t $tmp4672 = $tmp4658 - i4655.value;
    if ($tmp4659) goto $l4673; else goto $l4674;
    $l4673:;
    if ((uint64_t) $tmp4672 >= 1) goto $l4671; else goto $l4662;
    $l4674:;
    if ((uint64_t) $tmp4672 > 1) goto $l4671; else goto $l4662;
    $l4671:;
    i4655.value += 1;
    goto $l4660;
    $l4662:;
    panda$core$Object* $tmp4677 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4677);
    panda$collections$Array* $tmp4679 = (panda$collections$Array*) malloc(40);
    $tmp4679->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4679->refCount.value = 1;
    panda$collections$Array$init($tmp4679);
    children4678 = $tmp4679;
    panda$collections$Array$add$panda$collections$Array$T(children4678, ((panda$core$Object*) test4613));
    org$pandalanguage$pandac$IRNode* $tmp4681 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4681->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4681->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4681, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4650));
    panda$collections$Array$add$panda$collections$Array$T(children4678, ((panda$core$Object*) $tmp4681));
    org$pandalanguage$pandac$IRNode* $tmp4683 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4683->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4683->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4683, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4678));
    return $tmp4683;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4685;
    org$pandalanguage$pandac$Variable* valueVar4688;
    panda$collections$Array* declChildren4702;
    panda$collections$Array* varChildren4707;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4714;
    org$pandalanguage$pandac$ASTNode* c4729;
    org$pandalanguage$pandac$IRNode* w4731;
    panda$collections$Array* statements4733;
    panda$collections$Iterator* astStatement$Iter4736;
    org$pandalanguage$pandac$ASTNode* astStatement4748;
    org$pandalanguage$pandac$IRNode* stmt4753;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4763;
    panda$collections$Array* newChildren4791;
    panda$collections$Array* $tmp4686 = (panda$collections$Array*) malloc(40);
    $tmp4686->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4686->refCount.value = 1;
    panda$collections$Array$init($tmp4686);
    children4685 = $tmp4686;
    org$pandalanguage$pandac$Variable* $tmp4689 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4689->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4689->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind* $tmp4691 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp4691->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp4691->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4691, ((panda$core$Int64) { 1 }));
    panda$core$Int64$wrapper* $tmp4694;
    $tmp4694 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp4694->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp4694->refCount = 1;
    $tmp4694->value = p_m->position.line;
    panda$core$String* $tmp4695 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4693, ((panda$core$Object*) $tmp4694));
    panda$core$String* $tmp4697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4695, &$s4696);
    panda$core$Int64$wrapper* $tmp4698;
    $tmp4698 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp4698->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp4698->refCount = 1;
    $tmp4698->value = p_m->position.column;
    panda$core$String* $tmp4699 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4697, ((panda$core$Object*) $tmp4698));
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4699, &$s4700);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4689, p_m->position, $tmp4691, $tmp4701, p_value->type);
    valueVar4688 = $tmp4689;
    panda$collections$Array* $tmp4703 = (panda$collections$Array*) malloc(40);
    $tmp4703->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4703->refCount.value = 1;
    panda$collections$Array$init($tmp4703);
    declChildren4702 = $tmp4703;
    org$pandalanguage$pandac$IRNode* $tmp4705 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4705->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4705->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4705, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4688->type, valueVar4688);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4702, ((panda$core$Object*) $tmp4705));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4702, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4708 = (panda$collections$Array*) malloc(40);
    $tmp4708->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4708->refCount.value = 1;
    panda$collections$Array$init($tmp4708);
    varChildren4707 = $tmp4708;
    org$pandalanguage$pandac$IRNode* $tmp4710 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4710->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4710->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4710, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4688)->position, ((panda$collections$ListView*) declChildren4702));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4707, ((panda$core$Object*) $tmp4710));
    org$pandalanguage$pandac$IRNode* $tmp4712 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4712->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4712->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4712, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4688)->position, ((panda$collections$ListView*) varChildren4707));
    panda$collections$Array$add$panda$collections$Array$T(children4685, ((panda$core$Object*) $tmp4712));
    panda$core$Int64 $tmp4715 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4714, ((panda$core$Int64) { 1 }), $tmp4715, ((panda$core$Bit) { false }));
    int64_t $tmp4717 = $tmp4714.min.value;
    panda$core$Int64 i4716 = { $tmp4717 };
    int64_t $tmp4719 = $tmp4714.max.value;
    bool $tmp4720 = $tmp4714.inclusive.value;
    if ($tmp4720) goto $l4727; else goto $l4728;
    $l4727:;
    if ($tmp4717 <= $tmp4719) goto $l4721; else goto $l4723;
    $l4728:;
    if ($tmp4717 < $tmp4719) goto $l4721; else goto $l4723;
    $l4721:;
    {
        panda$core$Object* $tmp4730 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4716);
        c4729 = ((org$pandalanguage$pandac$ASTNode*) $tmp4730);
        switch (c4729->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4732 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4688, c4729);
                w4731 = $tmp4732;
                if (((panda$core$Bit) { w4731 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4685, ((panda$core$Object*) w4731));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4734 = (panda$collections$Array*) malloc(40);
                $tmp4734->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4734->refCount.value = 1;
                panda$collections$Array$init($tmp4734);
                statements4733 = $tmp4734;
                {
                    ITable* $tmp4737 = ((panda$collections$Iterable*) c4729->children)->$class->itable;
                    while ($tmp4737->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4737 = $tmp4737->next;
                    }
                    $fn4739 $tmp4738 = $tmp4737->methods[0];
                    panda$collections$Iterator* $tmp4740 = $tmp4738(((panda$collections$Iterable*) c4729->children));
                    astStatement$Iter4736 = $tmp4740;
                    $l4741:;
                    ITable* $tmp4743 = astStatement$Iter4736->$class->itable;
                    while ($tmp4743->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4743 = $tmp4743->next;
                    }
                    $fn4745 $tmp4744 = $tmp4743->methods[0];
                    panda$core$Bit $tmp4746 = $tmp4744(astStatement$Iter4736);
                    panda$core$Bit $tmp4747 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4746);
                    if (!$tmp4747.value) goto $l4742;
                    {
                        ITable* $tmp4749 = astStatement$Iter4736->$class->itable;
                        while ($tmp4749->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4749 = $tmp4749->next;
                        }
                        $fn4751 $tmp4750 = $tmp4749->methods[1];
                        panda$core$Object* $tmp4752 = $tmp4750(astStatement$Iter4736);
                        astStatement4748 = ((org$pandalanguage$pandac$ASTNode*) $tmp4752);
                        org$pandalanguage$pandac$IRNode* $tmp4754 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4748);
                        stmt4753 = $tmp4754;
                        if (((panda$core$Bit) { stmt4753 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4733, ((panda$core$Object*) stmt4753));
                    }
                    goto $l4741;
                    $l4742:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4755 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4755->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4755->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4755, ((panda$core$Int64) { 1000 }), c4729->position, ((panda$collections$ListView*) statements4733));
                panda$collections$Array$add$panda$collections$Array$T(children4685, ((panda$core$Object*) $tmp4755));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4724:;
    int64_t $tmp4758 = $tmp4719 - i4716.value;
    if ($tmp4720) goto $l4759; else goto $l4760;
    $l4759:;
    if ((uint64_t) $tmp4758 >= 1) goto $l4757; else goto $l4723;
    $l4760:;
    if ((uint64_t) $tmp4758 > 1) goto $l4757; else goto $l4723;
    $l4757:;
    i4716.value += 1;
    goto $l4721;
    $l4723:;
    panda$core$Int64 $tmp4764 = panda$collections$Array$get_count$R$panda$core$Int64(children4685);
    panda$core$Int64 $tmp4765 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4764, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4763, $tmp4765, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4767 = $tmp4763.start.value;
    panda$core$Int64 i4766 = { $tmp4767 };
    int64_t $tmp4769 = $tmp4763.end.value;
    int64_t $tmp4770 = $tmp4763.step.value;
    bool $tmp4771 = $tmp4763.inclusive.value;
    bool $tmp4778 = $tmp4770 > 0;
    if ($tmp4778) goto $l4776; else goto $l4777;
    $l4776:;
    if ($tmp4771) goto $l4779; else goto $l4780;
    $l4779:;
    if ($tmp4767 <= $tmp4769) goto $l4772; else goto $l4774;
    $l4780:;
    if ($tmp4767 < $tmp4769) goto $l4772; else goto $l4774;
    $l4777:;
    if ($tmp4771) goto $l4781; else goto $l4782;
    $l4781:;
    if ($tmp4767 >= $tmp4769) goto $l4772; else goto $l4774;
    $l4782:;
    if ($tmp4767 > $tmp4769) goto $l4772; else goto $l4774;
    $l4772:;
    {
        panda$core$Int64 $tmp4784 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4766, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4685, $tmp4784);
        panda$core$Bit $tmp4786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4785)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4786.value);
        panda$core$Int64 $tmp4787 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4766, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4788 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4685, $tmp4787);
        panda$core$Int64 $tmp4789 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4788)->children);
        panda$core$Bit $tmp4790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4789, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4790.value);
        panda$collections$Array* $tmp4792 = (panda$collections$Array*) malloc(40);
        $tmp4792->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4792->refCount.value = 1;
        panda$core$Int64 $tmp4794 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4766, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4685, $tmp4794);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4792, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4795)->children));
        newChildren4791 = $tmp4792;
        panda$core$Object* $tmp4796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4685, i4766);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4791, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4796)));
        panda$core$Int64 $tmp4797 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4766, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4798 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4798->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4798->refCount.value = 1;
        panda$core$Int64 $tmp4800 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4766, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4801 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4685, $tmp4800);
        panda$core$Int64 $tmp4802 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4766, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4803 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4685, $tmp4802);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4798, ((org$pandalanguage$pandac$IRNode*) $tmp4801)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4803)->position, ((panda$collections$ListView*) newChildren4791));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4685, $tmp4797, ((panda$core$Object*) $tmp4798));
        panda$core$Int64 $tmp4804 = panda$collections$Array$get_count$R$panda$core$Int64(children4685);
        panda$core$Int64 $tmp4805 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4804, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4685, $tmp4805);
    }
    $l4775:;
    if ($tmp4778) goto $l4807; else goto $l4808;
    $l4807:;
    int64_t $tmp4809 = $tmp4769 - i4766.value;
    if ($tmp4771) goto $l4810; else goto $l4811;
    $l4810:;
    if ((uint64_t) $tmp4809 >= $tmp4770) goto $l4806; else goto $l4774;
    $l4811:;
    if ((uint64_t) $tmp4809 > $tmp4770) goto $l4806; else goto $l4774;
    $l4808:;
    int64_t $tmp4813 = i4766.value - $tmp4769;
    if ($tmp4771) goto $l4814; else goto $l4815;
    $l4814:;
    if ((uint64_t) $tmp4813 >= -$tmp4770) goto $l4806; else goto $l4774;
    $l4815:;
    if ((uint64_t) $tmp4813 > -$tmp4770) goto $l4806; else goto $l4774;
    $l4806:;
    i4766.value += $tmp4770;
    goto $l4772;
    $l4774:;
    org$pandalanguage$pandac$IRNode* $tmp4817 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4817->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4817->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4817, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4685));
    return $tmp4817;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4827;
    panda$collections$Iterator* expr$Iter4830;
    org$pandalanguage$pandac$ASTNode* expr4843;
    org$pandalanguage$pandac$IRNode* compiled4848;
    panda$collections$Array* statements4853;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4856;
    org$pandalanguage$pandac$IRNode* statement4871;
    panda$core$Bit $tmp4819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4819.value);
    panda$core$Int64 $tmp4820 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4821 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4820, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4821.value);
    panda$core$Object* $tmp4822 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4822)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4823.value);
    panda$core$Object* $tmp4824 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4825 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4824)->children);
    panda$core$Bit $tmp4826 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4825, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4826.value);
    panda$collections$Array* $tmp4828 = (panda$collections$Array*) malloc(40);
    $tmp4828->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4828->refCount.value = 1;
    panda$collections$Array$init($tmp4828);
    children4827 = $tmp4828;
    {
        panda$core$Object* $tmp4831 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4832 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4831)->children)->$class->itable;
        while ($tmp4832->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4832 = $tmp4832->next;
        }
        $fn4834 $tmp4833 = $tmp4832->methods[0];
        panda$collections$Iterator* $tmp4835 = $tmp4833(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4831)->children));
        expr$Iter4830 = $tmp4835;
        $l4836:;
        ITable* $tmp4838 = expr$Iter4830->$class->itable;
        while ($tmp4838->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4838 = $tmp4838->next;
        }
        $fn4840 $tmp4839 = $tmp4838->methods[0];
        panda$core$Bit $tmp4841 = $tmp4839(expr$Iter4830);
        panda$core$Bit $tmp4842 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4841);
        if (!$tmp4842.value) goto $l4837;
        {
            ITable* $tmp4844 = expr$Iter4830->$class->itable;
            while ($tmp4844->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4844 = $tmp4844->next;
            }
            $fn4846 $tmp4845 = $tmp4844->methods[1];
            panda$core$Object* $tmp4847 = $tmp4845(expr$Iter4830);
            expr4843 = ((org$pandalanguage$pandac$ASTNode*) $tmp4847);
            org$pandalanguage$pandac$IRNode* $tmp4849 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4843);
            org$pandalanguage$pandac$IRNode* $tmp4850 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4849, p_type);
            compiled4848 = $tmp4850;
            if (((panda$core$Bit) { compiled4848 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4827, ((panda$core$Object*) compiled4848));
        }
        goto $l4836;
        $l4837:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4851 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4851->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4851->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4851, self->symbolTable);
    self->symbolTable = $tmp4851;
    panda$collections$Array* $tmp4854 = (panda$collections$Array*) malloc(40);
    $tmp4854->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4854->refCount.value = 1;
    panda$collections$Array$init($tmp4854);
    statements4853 = $tmp4854;
    panda$core$Int64 $tmp4857 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4856, ((panda$core$Int64) { 1 }), $tmp4857, ((panda$core$Bit) { false }));
    int64_t $tmp4859 = $tmp4856.min.value;
    panda$core$Int64 i4858 = { $tmp4859 };
    int64_t $tmp4861 = $tmp4856.max.value;
    bool $tmp4862 = $tmp4856.inclusive.value;
    if ($tmp4862) goto $l4869; else goto $l4870;
    $l4869:;
    if ($tmp4859 <= $tmp4861) goto $l4863; else goto $l4865;
    $l4870:;
    if ($tmp4859 < $tmp4861) goto $l4863; else goto $l4865;
    $l4863:;
    {
        panda$core$Object* $tmp4872 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4858);
        org$pandalanguage$pandac$IRNode* $tmp4873 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4872));
        statement4871 = $tmp4873;
        if (((panda$core$Bit) { statement4871 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4853, ((panda$core$Object*) statement4871));
    }
    $l4866:;
    int64_t $tmp4875 = $tmp4861 - i4858.value;
    if ($tmp4862) goto $l4876; else goto $l4877;
    $l4876:;
    if ((uint64_t) $tmp4875 >= 1) goto $l4874; else goto $l4865;
    $l4877:;
    if ((uint64_t) $tmp4875 > 1) goto $l4874; else goto $l4865;
    $l4874:;
    i4858.value += 1;
    goto $l4863;
    $l4865:;
    panda$core$Object* $tmp4880 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4880);
    org$pandalanguage$pandac$IRNode* $tmp4881 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4881->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4881->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4881, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4853));
    panda$collections$Array$add$panda$collections$Array$T(children4827, ((panda$core$Object*) $tmp4881));
    org$pandalanguage$pandac$IRNode* $tmp4883 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4883->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4883->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4883, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4827));
    return $tmp4883;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4886;
    panda$collections$Array* statements4891;
    panda$collections$Iterator* s$Iter4894;
    org$pandalanguage$pandac$ASTNode* s4906;
    org$pandalanguage$pandac$IRNode* statement4911;
    panda$core$Bit $tmp4885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4885.value);
    panda$collections$Array* $tmp4887 = (panda$collections$Array*) malloc(40);
    $tmp4887->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4887->refCount.value = 1;
    panda$collections$Array$init($tmp4887);
    children4886 = $tmp4887;
    org$pandalanguage$pandac$SymbolTable* $tmp4889 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4889->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4889->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4889, self->symbolTable);
    self->symbolTable = $tmp4889;
    panda$collections$Array* $tmp4892 = (panda$collections$Array*) malloc(40);
    $tmp4892->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4892->refCount.value = 1;
    panda$collections$Array$init($tmp4892);
    statements4891 = $tmp4892;
    {
        ITable* $tmp4895 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4895->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4895 = $tmp4895->next;
        }
        $fn4897 $tmp4896 = $tmp4895->methods[0];
        panda$collections$Iterator* $tmp4898 = $tmp4896(((panda$collections$Iterable*) p_o->children));
        s$Iter4894 = $tmp4898;
        $l4899:;
        ITable* $tmp4901 = s$Iter4894->$class->itable;
        while ($tmp4901->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4901 = $tmp4901->next;
        }
        $fn4903 $tmp4902 = $tmp4901->methods[0];
        panda$core$Bit $tmp4904 = $tmp4902(s$Iter4894);
        panda$core$Bit $tmp4905 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4904);
        if (!$tmp4905.value) goto $l4900;
        {
            ITable* $tmp4907 = s$Iter4894->$class->itable;
            while ($tmp4907->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4907 = $tmp4907->next;
            }
            $fn4909 $tmp4908 = $tmp4907->methods[1];
            panda$core$Object* $tmp4910 = $tmp4908(s$Iter4894);
            s4906 = ((org$pandalanguage$pandac$ASTNode*) $tmp4910);
            org$pandalanguage$pandac$IRNode* $tmp4912 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4906);
            statement4911 = $tmp4912;
            if (((panda$core$Bit) { statement4911 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4891, ((panda$core$Object*) statement4911));
        }
        goto $l4899;
        $l4900:;
    }
    panda$core$Object* $tmp4913 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4913);
    org$pandalanguage$pandac$IRNode* $tmp4914 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4914->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4914->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4914, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4891));
    panda$collections$Array$add$panda$collections$Array$T(children4886, ((panda$core$Object*) $tmp4914));
    org$pandalanguage$pandac$IRNode* $tmp4916 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4916->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4916->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4916, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4886));
    return $tmp4916;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4925;
    org$pandalanguage$pandac$Variable* v4934;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4919 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4918 = $tmp4919.value;
            if (!$tmp4918) goto $l4920;
            panda$core$Object* $tmp4921 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4922 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4921)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4923 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4922));
            $tmp4918 = $tmp4923.value;
            $l4920:;
            panda$core$Bit $tmp4924 = { $tmp4918 };
            return $tmp4924;
        }
        break;
        case 1026:
        {
            f4925 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4925->resolved.value);
            panda$core$Bit $tmp4928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4925->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4927 = $tmp4928.value;
            if (!$tmp4927) goto $l4929;
            $tmp4927 = ((panda$core$Bit) { f4925->value != NULL }).value;
            $l4929:;
            panda$core$Bit $tmp4930 = { $tmp4927 };
            bool $tmp4926 = $tmp4930.value;
            if (!$tmp4926) goto $l4931;
            panda$core$Bit $tmp4932 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4925->value);
            $tmp4926 = $tmp4932.value;
            $l4931:;
            panda$core$Bit $tmp4933 = { $tmp4926 };
            return $tmp4933;
        }
        break;
        case 1016:
        {
            v4934 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4934->varKind->$rawValue, ((panda$core$Int64) { 1 }));
            bool $tmp4935 = $tmp4936.value;
            if ($tmp4935) goto $l4937;
            panda$core$Bit $tmp4940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4934->varKind->$rawValue, ((panda$core$Int64) { 2 }));
            bool $tmp4939 = $tmp4940.value;
            if (!$tmp4939) goto $l4941;
            $tmp4939 = ((panda$core$Bit) { v4934->initialValue != NULL }).value;
            $l4941:;
            panda$core$Bit $tmp4942 = { $tmp4939 };
            bool $tmp4938 = $tmp4942.value;
            if (!$tmp4938) goto $l4943;
            panda$core$Bit $tmp4944 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4934->initialValue);
            $tmp4938 = $tmp4944.value;
            $l4943:;
            panda$core$Bit $tmp4945 = { $tmp4938 };
            $tmp4935 = $tmp4945.value;
            $l4937:;
            panda$core$Bit $tmp4946 = { $tmp4935 };
            return $tmp4946;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4951;
    org$pandalanguage$pandac$Variable* v4953;
    panda$core$Bit $tmp4947 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4947.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4948 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4949 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4948)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4950 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4949));
            return $tmp4950;
        }
        break;
        case 1026:
        {
            f4951 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4952 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4951->value);
            return $tmp4952;
        }
        break;
        case 1016:
        {
            v4953 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4954 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4953->initialValue);
            return $tmp4954;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4958;
    panda$collections$Array* children4965;
    panda$collections$Iterator* rawWhen$Iter4968;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4969;
    org$pandalanguage$pandac$ASTNode* rawWhen4982;
    org$pandalanguage$pandac$IRNode* o4988;
    org$pandalanguage$pandac$IRNode* w4990;
    panda$core$Bit $tmp4955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4955.value);
    panda$core$Int64 $tmp4956 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4957 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4956, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4957.value);
    panda$core$Object* $tmp4959 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4960 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4959));
    org$pandalanguage$pandac$IRNode* $tmp4961 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4960);
    value4958 = $tmp4961;
    if (((panda$core$Bit) { value4958 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4962 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4958->type);
    panda$core$Bit $tmp4963 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4962);
    if ($tmp4963.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4964 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4958);
        return $tmp4964;
    }
    }
    panda$collections$Array* $tmp4966 = (panda$collections$Array*) malloc(40);
    $tmp4966->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4966->refCount.value = 1;
    panda$collections$Array$init($tmp4966);
    children4965 = $tmp4966;
    panda$collections$Array$add$panda$collections$Array$T(children4965, ((panda$core$Object*) value4958));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4969, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4970 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4969);
        ITable* $tmp4971 = ((panda$collections$Iterable*) $tmp4970)->$class->itable;
        while ($tmp4971->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4971 = $tmp4971->next;
        }
        $fn4973 $tmp4972 = $tmp4971->methods[0];
        panda$collections$Iterator* $tmp4974 = $tmp4972(((panda$collections$Iterable*) $tmp4970));
        rawWhen$Iter4968 = $tmp4974;
        $l4975:;
        ITable* $tmp4977 = rawWhen$Iter4968->$class->itable;
        while ($tmp4977->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4977 = $tmp4977->next;
        }
        $fn4979 $tmp4978 = $tmp4977->methods[0];
        panda$core$Bit $tmp4980 = $tmp4978(rawWhen$Iter4968);
        panda$core$Bit $tmp4981 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4980);
        if (!$tmp4981.value) goto $l4976;
        {
            ITable* $tmp4983 = rawWhen$Iter4968->$class->itable;
            while ($tmp4983->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4983 = $tmp4983->next;
            }
            $fn4985 $tmp4984 = $tmp4983->methods[1];
            panda$core$Object* $tmp4986 = $tmp4984(rawWhen$Iter4968);
            rawWhen4982 = ((org$pandalanguage$pandac$ASTNode*) $tmp4986);
            panda$core$Bit $tmp4987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4982->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4987.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4989 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4982);
                o4988 = $tmp4989;
                if (((panda$core$Bit) { o4988 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4965, ((panda$core$Object*) o4988));
                goto $l4975;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4991 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4958->type, rawWhen4982);
            w4990 = $tmp4991;
            if (((panda$core$Bit) { w4990 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4992 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4990->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4993 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4992));
            panda$core$Bit $tmp4994 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4993);
            if ($tmp4994.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4995 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4958);
                return $tmp4995;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4965, ((panda$core$Object*) w4990));
        }
        goto $l4975;
        $l4976:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4996 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4996->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4996->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4996, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4965));
    return $tmp4996;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result5011;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4998 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4998;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4999 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp5000 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4999);
            return $tmp5000;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp5001 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5001;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp5002 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5002;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp5003 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5003;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp5004 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5004;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp5005 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5005;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp5006 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5006;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp5007 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5007;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp5008 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5008;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp5009 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5009;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp5010 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5010;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp5012 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp5013 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5012);
            result5011 = $tmp5013;
            if (((panda$core$Bit) { result5011 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp5014 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result5011);
                result5011 = $tmp5014;
            }
            }
            return result5011;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp5015 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5015;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old5016;
    org$pandalanguage$pandac$SymbolTable* symbols5018;
    panda$collections$Iterator* p$Iter5021;
    org$pandalanguage$pandac$MethodDecl$Parameter* p5033;
    panda$collections$Array* fieldInitializers5044;
    panda$collections$Iterator* f$Iter5048;
    org$pandalanguage$pandac$FieldDecl* f5061;
    panda$collections$Array* children5071;
    org$pandalanguage$pandac$IRNode* fieldRef5078;
    org$pandalanguage$pandac$IRNode* compiled5084;
    panda$collections$Array* children5086;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old5016 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp5017 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp5017;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp5019 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp5019->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp5019->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp5019, self->symbolTable);
    symbols5018 = $tmp5019;
    {
        ITable* $tmp5022 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp5022->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5022 = $tmp5022->next;
        }
        $fn5024 $tmp5023 = $tmp5022->methods[0];
        panda$collections$Iterator* $tmp5025 = $tmp5023(((panda$collections$Iterable*) p_m->parameters));
        p$Iter5021 = $tmp5025;
        $l5026:;
        ITable* $tmp5028 = p$Iter5021->$class->itable;
        while ($tmp5028->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5028 = $tmp5028->next;
        }
        $fn5030 $tmp5029 = $tmp5028->methods[0];
        panda$core$Bit $tmp5031 = $tmp5029(p$Iter5021);
        panda$core$Bit $tmp5032 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5031);
        if (!$tmp5032.value) goto $l5027;
        {
            ITable* $tmp5034 = p$Iter5021->$class->itable;
            while ($tmp5034->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5034 = $tmp5034->next;
            }
            $fn5036 $tmp5035 = $tmp5034->methods[1];
            panda$core$Object* $tmp5037 = $tmp5035(p$Iter5021);
            p5033 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5037);
            org$pandalanguage$pandac$Variable* $tmp5038 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp5038->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp5038->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind* $tmp5040 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp5040->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp5040->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp5040, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$Storage* $tmp5042 = (org$pandalanguage$pandac$Variable$Storage*) malloc(24);
            $tmp5042->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Storage$class;
            $tmp5042->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64($tmp5042, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage($tmp5038, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp5040, p5033->name, p5033->type, $tmp5042);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols5018, ((org$pandalanguage$pandac$Symbol*) $tmp5038));
        }
        goto $l5026;
        $l5027:;
    }
    self->symbolTable = symbols5018;
    fieldInitializers5044 = NULL;
    panda$core$Bit $tmp5045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp5045.value) {
    {
        panda$collections$Array* $tmp5046 = (panda$collections$Array*) malloc(40);
        $tmp5046->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp5046->refCount.value = 1;
        panda$collections$Array$init($tmp5046);
        fieldInitializers5044 = $tmp5046;
        {
            panda$core$Object* $tmp5049 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp5050 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp5049)->fields)->$class->itable;
            while ($tmp5050->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp5050 = $tmp5050->next;
            }
            $fn5052 $tmp5051 = $tmp5050->methods[0];
            panda$collections$Iterator* $tmp5053 = $tmp5051(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp5049)->fields));
            f$Iter5048 = $tmp5053;
            $l5054:;
            ITable* $tmp5056 = f$Iter5048->$class->itable;
            while ($tmp5056->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5056 = $tmp5056->next;
            }
            $fn5058 $tmp5057 = $tmp5056->methods[0];
            panda$core$Bit $tmp5059 = $tmp5057(f$Iter5048);
            panda$core$Bit $tmp5060 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5059);
            if (!$tmp5060.value) goto $l5055;
            {
                ITable* $tmp5062 = f$Iter5048->$class->itable;
                while ($tmp5062->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5062 = $tmp5062->next;
                }
                $fn5064 $tmp5063 = $tmp5062->methods[1];
                panda$core$Object* $tmp5065 = $tmp5063(f$Iter5048);
                f5061 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5065);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f5061);
                panda$core$Bit $tmp5067 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f5061->annotations);
                panda$core$Bit $tmp5068 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5067);
                bool $tmp5066 = $tmp5068.value;
                if (!$tmp5066) goto $l5069;
                $tmp5066 = ((panda$core$Bit) { f5061->value != NULL }).value;
                $l5069:;
                panda$core$Bit $tmp5070 = { $tmp5066 };
                if ($tmp5070.value) {
                {
                    panda$collections$Array* $tmp5072 = (panda$collections$Array*) malloc(40);
                    $tmp5072->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp5072->refCount.value = 1;
                    panda$collections$Array$init($tmp5072);
                    children5071 = $tmp5072;
                    org$pandalanguage$pandac$IRNode* $tmp5074 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5074->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5074->refCount.value = 1;
                    panda$core$Object* $tmp5076 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp5077 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp5076));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp5074, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp5077);
                    panda$collections$Array$add$panda$collections$Array$T(children5071, ((panda$core$Object*) $tmp5074));
                    org$pandalanguage$pandac$IRNode* $tmp5079 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5079->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5079->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp5079, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f5061->type, ((panda$core$Object*) f5061), ((panda$collections$ListView*) children5071));
                    fieldRef5078 = $tmp5079;
                    panda$collections$Array$clear(children5071);
                    panda$collections$Array$add$panda$collections$Array$T(children5071, ((panda$core$Object*) fieldRef5078));
                    panda$collections$Array$add$panda$collections$Array$T(children5071, ((panda$core$Object*) f5061->value));
                    org$pandalanguage$pandac$IRNode* $tmp5081 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5081->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5081->refCount.value = 1;
                    panda$core$Int64$wrapper* $tmp5083;
                    $tmp5083 = (panda$core$Int64$wrapper*) malloc(24);
                    $tmp5083->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                    $tmp5083->refCount = 1;
                    $tmp5083->value = ((panda$core$Int64) { 73 });
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5081, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f5061)->position, ((panda$core$Object*) $tmp5083), ((panda$collections$ListView*) children5071));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers5044, ((panda$core$Object*) $tmp5081));
                }
                }
            }
            goto $l5054;
            $l5055:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp5085 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled5084 = $tmp5085;
    if (((panda$core$Bit) { compiled5084 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers5044 != NULL }).value) {
        {
            panda$collections$Array* $tmp5087 = (panda$collections$Array*) malloc(40);
            $tmp5087->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5087->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp5087, ((panda$collections$ListView*) fieldInitializers5044));
            children5086 = $tmp5087;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children5086, ((panda$collections$CollectionView*) compiled5084->children));
            org$pandalanguage$pandac$IRNode* $tmp5089 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp5089->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp5089->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5089, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children5086));
            compiled5084 = $tmp5089;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols5018) }).value);
    self->symbolTable = old5016;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp5091 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp5091.value) {
    {
        p_m->compiledBody = compiled5084;
    }
    }
    return compiled5084;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled5092;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp5093 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled5092 = $tmp5093;
        panda$core$Bit $tmp5095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, ((panda$core$Int64) { 0 }));
        bool $tmp5094 = $tmp5095.value;
        if (!$tmp5094) goto $l5096;
        $tmp5094 = ((panda$core$Bit) { compiled5092 != NULL }).value;
        $l5096:;
        panda$core$Bit $tmp5097 = { $tmp5094 };
        if ($tmp5097.value) {
        {
            ITable* $tmp5098 = self->codeGenerator->$class->itable;
            while ($tmp5098->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp5098 = $tmp5098->next;
            }
            $fn5100 $tmp5099 = $tmp5098->methods[3];
            $tmp5099(self->codeGenerator, p_m, compiled5092);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp5101 = self->codeGenerator->$class->itable;
        while ($tmp5101->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5101 = $tmp5101->next;
        }
        $fn5103 $tmp5102 = $tmp5101->methods[2];
        $tmp5102(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter5104;
    org$pandalanguage$pandac$ClassDecl* inner5116;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp5105 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp5105->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5105 = $tmp5105->next;
        }
        $fn5107 $tmp5106 = $tmp5105->methods[0];
        panda$collections$Iterator* $tmp5108 = $tmp5106(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter5104 = $tmp5108;
        $l5109:;
        ITable* $tmp5111 = inner$Iter5104->$class->itable;
        while ($tmp5111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5111 = $tmp5111->next;
        }
        $fn5113 $tmp5112 = $tmp5111->methods[0];
        panda$core$Bit $tmp5114 = $tmp5112(inner$Iter5104);
        panda$core$Bit $tmp5115 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5114);
        if (!$tmp5115.value) goto $l5110;
        {
            ITable* $tmp5117 = inner$Iter5104->$class->itable;
            while ($tmp5117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5117 = $tmp5117->next;
            }
            $fn5119 $tmp5118 = $tmp5117->methods[1];
            panda$core$Object* $tmp5120 = $tmp5118(inner$Iter5104);
            inner5116 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5120);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner5116);
        }
        goto $l5109;
        $l5110:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old5128;
    panda$collections$Iterator* m$Iter5133;
    org$pandalanguage$pandac$MethodDecl* m5145;
    org$pandalanguage$pandac$ClassDecl* next5155;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp5121 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp5121.value) {
    {
        ITable* $tmp5122 = self->codeGenerator->$class->itable;
        while ($tmp5122->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5122 = $tmp5122->next;
        }
        $fn5124 $tmp5123 = $tmp5122->methods[1];
        $tmp5123(self->codeGenerator, p_cl);
        ITable* $tmp5125 = self->codeGenerator->$class->itable;
        while ($tmp5125->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5125 = $tmp5125->next;
        }
        $fn5127 $tmp5126 = $tmp5125->methods[4];
        $tmp5126(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old5128 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp5129 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp5129;
    ITable* $tmp5130 = self->codeGenerator->$class->itable;
    while ($tmp5130->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5130 = $tmp5130->next;
    }
    $fn5132 $tmp5131 = $tmp5130->methods[1];
    $tmp5131(self->codeGenerator, p_cl);
    {
        ITable* $tmp5134 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp5134->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5134 = $tmp5134->next;
        }
        $fn5136 $tmp5135 = $tmp5134->methods[0];
        panda$collections$Iterator* $tmp5137 = $tmp5135(((panda$collections$Iterable*) p_cl->methods));
        m$Iter5133 = $tmp5137;
        $l5138:;
        ITable* $tmp5140 = m$Iter5133->$class->itable;
        while ($tmp5140->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5140 = $tmp5140->next;
        }
        $fn5142 $tmp5141 = $tmp5140->methods[0];
        panda$core$Bit $tmp5143 = $tmp5141(m$Iter5133);
        panda$core$Bit $tmp5144 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5143);
        if (!$tmp5144.value) goto $l5139;
        {
            ITable* $tmp5146 = m$Iter5133->$class->itable;
            while ($tmp5146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5146 = $tmp5146->next;
            }
            $fn5148 $tmp5147 = $tmp5146->methods[1];
            panda$core$Object* $tmp5149 = $tmp5147(m$Iter5133);
            m5145 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5149);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m5145);
        }
        goto $l5138;
        $l5139:;
    }
    ITable* $tmp5150 = self->codeGenerator->$class->itable;
    while ($tmp5150->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5150 = $tmp5150->next;
    }
    $fn5152 $tmp5151 = $tmp5150->methods[4];
    $tmp5151(self->codeGenerator, p_cl);
    self->symbolTable = old5128;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp5153 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5154 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5153, ((panda$core$Int64) { 0 }));
    if ($tmp5154.value) {
    {
        panda$core$Object* $tmp5156 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next5155 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5156);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next5155);
    }
    }
    panda$core$Int64 $tmp5157 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5157, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5158.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result5159;
    org$pandalanguage$pandac$ASTNode* parsed5162;
    panda$collections$Iterator* cl$Iter5165;
    org$pandalanguage$pandac$ClassDecl* cl5177;
    panda$core$Object* $tmp5160 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result5159 = ((panda$collections$ListView*) $tmp5160);
    if (((panda$core$Bit) { result5159 == NULL }).value) {
    {
        panda$core$String* $tmp5161 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp5161);
        org$pandalanguage$pandac$ASTNode* $tmp5163 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed5162 = $tmp5163;
        if (((panda$core$Bit) { parsed5162 != NULL }).value) {
        {
            panda$collections$ListView* $tmp5164 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed5162);
            result5159 = $tmp5164;
            {
                ITable* $tmp5166 = ((panda$collections$Iterable*) result5159)->$class->itable;
                while ($tmp5166->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp5166 = $tmp5166->next;
                }
                $fn5168 $tmp5167 = $tmp5166->methods[0];
                panda$collections$Iterator* $tmp5169 = $tmp5167(((panda$collections$Iterable*) result5159));
                cl$Iter5165 = $tmp5169;
                $l5170:;
                ITable* $tmp5172 = cl$Iter5165->$class->itable;
                while ($tmp5172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5172 = $tmp5172->next;
                }
                $fn5174 $tmp5173 = $tmp5172->methods[0];
                panda$core$Bit $tmp5175 = $tmp5173(cl$Iter5165);
                panda$core$Bit $tmp5176 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5175);
                if (!$tmp5176.value) goto $l5171;
                {
                    ITable* $tmp5178 = cl$Iter5165->$class->itable;
                    while ($tmp5178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp5178 = $tmp5178->next;
                    }
                    $fn5180 $tmp5179 = $tmp5178->methods[1];
                    panda$core$Object* $tmp5181 = $tmp5179(cl$Iter5165);
                    cl5177 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5181);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl5177)->name), ((panda$core$Object*) cl5177));
                }
                goto $l5170;
                $l5171:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp5182 = (panda$collections$Array*) malloc(40);
            $tmp5182->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5182->refCount.value = 1;
            panda$collections$Array$init($tmp5182);
            result5159 = ((panda$collections$ListView*) $tmp5182);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result5159));
    }
    }
    return result5159;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes5184;
    panda$collections$Iterator* cl$Iter5186;
    org$pandalanguage$pandac$ClassDecl* cl5198;
    panda$collections$ListView* $tmp5185 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes5184 = $tmp5185;
    {
        ITable* $tmp5187 = ((panda$collections$Iterable*) classes5184)->$class->itable;
        while ($tmp5187->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5187 = $tmp5187->next;
        }
        $fn5189 $tmp5188 = $tmp5187->methods[0];
        panda$collections$Iterator* $tmp5190 = $tmp5188(((panda$collections$Iterable*) classes5184));
        cl$Iter5186 = $tmp5190;
        $l5191:;
        ITable* $tmp5193 = cl$Iter5186->$class->itable;
        while ($tmp5193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5193 = $tmp5193->next;
        }
        $fn5195 $tmp5194 = $tmp5193->methods[0];
        panda$core$Bit $tmp5196 = $tmp5194(cl$Iter5186);
        panda$core$Bit $tmp5197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5196);
        if (!$tmp5197.value) goto $l5192;
        {
            ITable* $tmp5199 = cl$Iter5186->$class->itable;
            while ($tmp5199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5199 = $tmp5199->next;
            }
            $fn5201 $tmp5200 = $tmp5199->methods[1];
            panda$core$Object* $tmp5202 = $tmp5200(cl$Iter5186);
            cl5198 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5202);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl5198);
        }
        goto $l5191;
        $l5192:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp5203 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp5203)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp5204 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp5204;
        panda$core$String* $tmp5205 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp5206 = panda$core$String$convert$R$panda$core$String($tmp5205);
        panda$core$String* $tmp5208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5206, &$s5207);
        org$pandalanguage$pandac$Position$wrapper* $tmp5209;
        $tmp5209 = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
        $tmp5209->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
        $tmp5209->refCount = 1;
        $tmp5209->value = p_pos;
        panda$core$String* $tmp5210 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5208, ((panda$core$Object*) $tmp5209));
        panda$core$String* $tmp5212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5210, &$s5211);
        panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5212, p_msg);
        panda$core$String* $tmp5215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5213, &$s5214);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp5215));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp5216 = self->codeGenerator->$class->itable;
    while ($tmp5216->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5216 = $tmp5216->next;
    }
    $fn5218 $tmp5217 = $tmp5216->methods[5];
    $tmp5217(self->codeGenerator);
}

