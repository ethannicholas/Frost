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
typedef panda$core$Int64 (*$fn2523)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2530)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2572)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2590)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2596)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2602)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2633)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2639)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2645)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2668)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2687)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2694)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2712)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2730)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2764)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2770)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2776)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2799)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2805)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2811)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3256)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3262)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3268)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3402)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3408)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3414)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3525)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3643)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3659)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3665)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3671)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3805)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3811)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3817)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4095)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4101)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4107)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4242)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4248)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4254)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4284)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4290)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4296)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4415)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4421)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4427)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn4499)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4729)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4735)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4741)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4824)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4830)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4836)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4887)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4893)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4899)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4963)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4969)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4975)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5014)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5020)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5026)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5042)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5048)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5054)(panda$collections$Iterator*);
typedef void (*$fn5090)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5093)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn5097)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5103)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5109)(panda$collections$Iterator*);
typedef void (*$fn5114)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5117)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5122)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5126)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5132)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5138)(panda$collections$Iterator*);
typedef void (*$fn5142)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5158)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5164)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5170)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5179)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5191)(panda$collections$Iterator*);
typedef void (*$fn5208)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x6e\x20\x6e\x6f\x6e\x2d\x63\x6c\x61\x73\x73\x20\x74\x79\x70\x65\x20\x27", 40, 2057026257004143426, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e", 25, 9019145596080302696, NULL };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s3320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s3459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x20\x27", 6, 2293399544522, NULL };
static panda$core$String $s3548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x63\x6c\x61\x73\x73", 16, 3306529650949529468, NULL };
static panda$core$String $s3555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x61\x6e\x67\x65\x20\x73\x74\x65\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6e\x75\x6c\x6c", 25, 4479279434458851015, NULL };
static panda$core$String $s3627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x72\x61\x6e\x67\x65\x3e", 18, -1293962867859660245, NULL };
static panda$core$String $s3637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x65\x6c\x66\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20\x74\x79\x70\x65\x73\x20", 27, 6843179484913102436, NULL };
static panda$core$String $s3880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 18, -4303734005461819726, NULL };
static panda$core$String $s3900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static panda$core$String $s3902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20\x27", 48, 6391877092008549907, NULL };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 46, 6859502832880265551, NULL };
static panda$core$String $s3958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s4005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s4028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static panda$core$String $s4033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s4045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s4131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6f\x72", 8, 22210198075044275, NULL };
static panda$core$String $s4139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s4141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s4265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x20", 7, 149654778879689, NULL };
static panda$core$String $s4267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s4307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s4309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s4332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s4346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s4366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s4491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s4496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s4502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s4506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 22, 417303976175476333, NULL };
static panda$core$String $s4630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s4683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6d\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s4690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s5201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s5204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2484, p_name);
    panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, &$s2486);
    panda$core$String* $tmp2488 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2487, ((panda$core$Object*) p_left->type));
    panda$core$String* $tmp2490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2488, &$s2489);
    panda$core$String* $tmp2491 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2490, ((panda$core$Object*) p_right->type));
    panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2491, &$s2492);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_left->position, $tmp2493);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2494;
    org$pandalanguage$pandac$ClassDecl* cl2496;
    org$pandalanguage$pandac$Symbol* s2506;
    org$pandalanguage$pandac$IRNode* ref2552;
    org$pandalanguage$pandac$IRNode* $tmp2495 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2494 = $tmp2495;
    if (((panda$core$Bit) { resolved2494 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2494->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2497.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2498 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2494->payload));
        cl2496 = $tmp2498;
    }
    }
    else {
    {
        panda$core$Bit $tmp2499 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2494->type);
        panda$core$Bit $tmp2500 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2499);
        if ($tmp2500.value) {
        {
            panda$core$String* $tmp2502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2501, ((panda$core$Object*) resolved2494->type));
            panda$core$String* $tmp2504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2502, &$s2503);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2504);
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2505 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2494->type);
        cl2496 = $tmp2505;
    }
    }
    if (((panda$core$Bit) { cl2496 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2507 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2496);
    org$pandalanguage$pandac$Symbol* $tmp2508 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2507, p_name);
    s2506 = $tmp2508;
    if (((panda$core$Bit) { s2506 == NULL }).value) {
    {
        panda$core$Bit $tmp2511 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2510);
        bool $tmp2509 = $tmp2511.value;
        if ($tmp2509) goto $l2512;
        panda$core$Bit $tmp2516 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2515);
        bool $tmp2514 = $tmp2516.value;
        if (!$tmp2514) goto $l2517;
        panda$core$Bit $tmp2518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl2496->classKind->$rawValue, ((panda$core$Int64) { 2 }));
        $tmp2514 = $tmp2518.value;
        $l2517:;
        panda$core$Bit $tmp2519 = { $tmp2514 };
        bool $tmp2513 = $tmp2519.value;
        if (!$tmp2513) goto $l2520;
        ITable* $tmp2521 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2521->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2521 = $tmp2521->next;
        }
        $fn2523 $tmp2522 = $tmp2521->methods[0];
        panda$core$Int64 $tmp2524 = $tmp2522(((panda$collections$CollectionView*) p_args));
        panda$core$Bit $tmp2525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2524, ((panda$core$Int64) { 1 }));
        $tmp2513 = $tmp2525.value;
        $l2520:;
        panda$core$Bit $tmp2526 = { $tmp2513 };
        $tmp2509 = $tmp2526.value;
        $l2512:;
        panda$core$Bit $tmp2527 = { $tmp2509 };
        if ($tmp2527.value) {
        {
            ITable* $tmp2528 = p_args->$class->itable;
            while ($tmp2528->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2528 = $tmp2528->next;
            }
            $fn2530 $tmp2529 = $tmp2528->methods[0];
            panda$core$Object* $tmp2531 = $tmp2529(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2532 = org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, ((org$pandalanguage$pandac$IRNode*) $tmp2531));
            return $tmp2532;
        }
        }
        panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2533, ((org$pandalanguage$pandac$Symbol*) cl2496)->name);
        panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2535);
        panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, p_name);
        panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2538);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2539);
        return NULL;
    }
    }
    panda$core$Bit $tmp2541 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2506->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2540 = $tmp2541.value;
    if (!$tmp2540) goto $l2542;
    panda$core$Bit $tmp2543 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2506->kind, ((panda$core$Int64) { 205 }));
    $tmp2540 = $tmp2543.value;
    $l2542:;
    panda$core$Bit $tmp2544 = { $tmp2540 };
    if ($tmp2544.value) {
    {
        panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2545, ((org$pandalanguage$pandac$Symbol*) cl2496)->name);
        panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, &$s2547);
        panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, p_name);
        panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, &$s2550);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2551);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2553 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2496);
    org$pandalanguage$pandac$IRNode* $tmp2554 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2506, $tmp2553);
    ref2552 = $tmp2554;
    if (((panda$core$Bit) { ref2552 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2555 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2552, p_args, p_expectedType);
    return $tmp2555;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2556 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2556;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2557;
    panda$collections$Array* methods2564;
    org$pandalanguage$pandac$MethodDecl* first2569;
    panda$core$MutableString* msg2574;
    panda$core$String* separator2585;
    panda$collections$Iterator* a$Iter2587;
    org$pandalanguage$pandac$IRNode* a2599;
    org$pandalanguage$pandac$IRNode* target2613;
    panda$collections$Array* children2621;
    panda$collections$Array* types2627;
    panda$collections$Iterator* m$Iter2630;
    org$pandalanguage$pandac$MethodRef* m2642;
    org$pandalanguage$pandac$IRNode* target2652;
    org$pandalanguage$pandac$IRNode* initCall2655;
    panda$collections$Array* children2659;
    org$pandalanguage$pandac$ChoiceEntry* c2664;
    panda$collections$Array* finalArgs2701;
    panda$core$UInt64 value2704;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2709;
    org$pandalanguage$pandac$IRNode* arg2727;
    org$pandalanguage$pandac$IRNode* owner2740;
    org$pandalanguage$pandac$IRNode* resolved2746;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2558 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2558, ((panda$core$Int64) { 0 }));
            if ($tmp2559.value) {
            {
                target2557 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2560 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2560, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2561.value);
                panda$core$Object* $tmp2562 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2557 = ((org$pandalanguage$pandac$IRNode*) $tmp2562);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2563 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2557, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2563;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2565 = (panda$collections$Array*) malloc(40);
            $tmp2565->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2565->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2565, ((panda$collections$ListView*) p_m->payload));
            methods2564 = $tmp2565;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2564, p_args, p_expectedType);
            panda$core$Int64 $tmp2567 = panda$collections$Array$get_count$R$panda$core$Int64(methods2564);
            panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2567, ((panda$core$Int64) { 0 }));
            if ($tmp2568.value) {
            {
                ITable* $tmp2570 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2570->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2570 = $tmp2570->next;
                }
                $fn2572 $tmp2571 = $tmp2570->methods[0];
                panda$core$Object* $tmp2573 = $tmp2571(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2569 = ((org$pandalanguage$pandac$MethodRef*) $tmp2573)->value;
                panda$core$MutableString* $tmp2575 = (panda$core$MutableString*) malloc(48);
                $tmp2575->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2575->refCount.value = 1;
                panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2577, ((org$pandalanguage$pandac$Symbol*) first2569->owner)->name);
                panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, &$s2579);
                panda$core$String* $tmp2581 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2569)->name);
                panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2581, &$s2582);
                panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, $tmp2583);
                panda$core$MutableString$init$panda$core$String($tmp2575, $tmp2584);
                msg2574 = $tmp2575;
                separator2585 = &$s2586;
                {
                    ITable* $tmp2588 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2588->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2588 = $tmp2588->next;
                    }
                    $fn2590 $tmp2589 = $tmp2588->methods[0];
                    panda$collections$Iterator* $tmp2591 = $tmp2589(((panda$collections$Iterable*) p_args));
                    a$Iter2587 = $tmp2591;
                    $l2592:;
                    ITable* $tmp2594 = a$Iter2587->$class->itable;
                    while ($tmp2594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2594 = $tmp2594->next;
                    }
                    $fn2596 $tmp2595 = $tmp2594->methods[0];
                    panda$core$Bit $tmp2597 = $tmp2595(a$Iter2587);
                    panda$core$Bit $tmp2598 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2597);
                    if (!$tmp2598.value) goto $l2593;
                    {
                        ITable* $tmp2600 = a$Iter2587->$class->itable;
                        while ($tmp2600->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2600 = $tmp2600->next;
                        }
                        $fn2602 $tmp2601 = $tmp2600->methods[1];
                        panda$core$Object* $tmp2603 = $tmp2601(a$Iter2587);
                        a2599 = ((org$pandalanguage$pandac$IRNode*) $tmp2603);
                        panda$core$MutableString$append$panda$core$String(msg2574, separator2585);
                        panda$core$MutableString$append$panda$core$Object(msg2574, ((panda$core$Object*) a2599->type));
                        separator2585 = &$s2604;
                    }
                    goto $l2592;
                    $l2593:;
                }
                panda$core$MutableString$append$panda$core$String(msg2574, &$s2605);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2606, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2607, &$s2608);
                    panda$core$MutableString$append$panda$core$String(msg2574, $tmp2609);
                }
                }
                panda$core$String* $tmp2610 = panda$core$MutableString$finish$R$panda$core$String(msg2574);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2610);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2611 = panda$collections$Array$get_count$R$panda$core$Int64(methods2564);
            panda$core$Bit $tmp2612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2611, ((panda$core$Int64) { 1 }));
            if ($tmp2612.value) {
            {
                panda$core$Int64 $tmp2614 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2614, ((panda$core$Int64) { 1 }));
                if ($tmp2615.value) {
                {
                    panda$core$Object* $tmp2616 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2613 = ((org$pandalanguage$pandac$IRNode*) $tmp2616);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2617 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2617, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2618.value);
                    target2613 = NULL;
                }
                }
                panda$core$Object* $tmp2619 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2564, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2620 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2613, ((org$pandalanguage$pandac$MethodRef*) $tmp2619), p_args);
                return $tmp2620;
            }
            }
            panda$collections$Array* $tmp2622 = (panda$collections$Array*) malloc(40);
            $tmp2622->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2622->refCount.value = 1;
            panda$collections$Array$init($tmp2622);
            children2621 = $tmp2622;
            org$pandalanguage$pandac$IRNode* $tmp2624 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2624->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2624->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2626 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2624, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2626, ((panda$core$Object*) methods2564), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2621, ((panda$core$Object*) $tmp2624));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2621, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2628 = (panda$collections$Array*) malloc(40);
            $tmp2628->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2628->refCount.value = 1;
            panda$collections$Array$init($tmp2628);
            types2627 = $tmp2628;
            {
                ITable* $tmp2631 = ((panda$collections$Iterable*) methods2564)->$class->itable;
                while ($tmp2631->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2631 = $tmp2631->next;
                }
                $fn2633 $tmp2632 = $tmp2631->methods[0];
                panda$collections$Iterator* $tmp2634 = $tmp2632(((panda$collections$Iterable*) methods2564));
                m$Iter2630 = $tmp2634;
                $l2635:;
                ITable* $tmp2637 = m$Iter2630->$class->itable;
                while ($tmp2637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2637 = $tmp2637->next;
                }
                $fn2639 $tmp2638 = $tmp2637->methods[0];
                panda$core$Bit $tmp2640 = $tmp2638(m$Iter2630);
                panda$core$Bit $tmp2641 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2640);
                if (!$tmp2641.value) goto $l2636;
                {
                    ITable* $tmp2643 = m$Iter2630->$class->itable;
                    while ($tmp2643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2643 = $tmp2643->next;
                    }
                    $fn2645 $tmp2644 = $tmp2643->methods[1];
                    panda$core$Object* $tmp2646 = $tmp2644(m$Iter2630);
                    m2642 = ((org$pandalanguage$pandac$MethodRef*) $tmp2646);
                    org$pandalanguage$pandac$Type* $tmp2647 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2642);
                    panda$collections$Array$add$panda$collections$Array$T(types2627, ((panda$core$Object*) $tmp2647));
                }
                goto $l2635;
                $l2636:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2648 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2648->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2648->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2650 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2650->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2650->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2650, ((panda$collections$ListView*) types2627));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2648, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2650, ((panda$collections$ListView*) children2621));
            return $tmp2648;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2653 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2653->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2653->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2653, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2652 = $tmp2653;
            org$pandalanguage$pandac$IRNode* $tmp2657 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2652, &$s2656, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2658 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2657);
            initCall2655 = $tmp2658;
            if (((panda$core$Bit) { initCall2655 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2660 = (panda$collections$Array*) malloc(40);
            $tmp2660->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2660->refCount.value = 1;
            panda$collections$Array$init($tmp2660);
            children2659 = $tmp2660;
            panda$collections$Array$add$panda$collections$Array$T(children2659, ((panda$core$Object*) initCall2655));
            org$pandalanguage$pandac$IRNode* $tmp2662 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2662->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2662->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2662, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2659));
            return $tmp2662;
        }
        break;
        case 1046:
        {
            c2664 = ((org$pandalanguage$pandac$ChoiceEntry*) p_m->payload);
            panda$core$Int64 $tmp2665 = panda$collections$Array$get_count$R$panda$core$Int64(c2664->fields);
            ITable* $tmp2666 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2666->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2666 = $tmp2666->next;
            }
            $fn2668 $tmp2667 = $tmp2666->methods[0];
            panda$core$Int64 $tmp2669 = $tmp2667(((panda$collections$CollectionView*) p_args));
            panda$core$Bit $tmp2670 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2665, $tmp2669);
            if ($tmp2670.value) {
            {
                panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2671, ((panda$core$Object*) p_m));
                panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, &$s2673);
                panda$core$Int64 $tmp2675 = panda$collections$Array$get_count$R$panda$core$Int64(c2664->fields);
                panda$core$Int64$wrapper* $tmp2676;
                $tmp2676 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp2676->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2676->refCount = 1;
                $tmp2676->value = $tmp2675;
                panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2674, ((panda$core$Object*) $tmp2676));
                panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, &$s2678);
                panda$core$Int64 $tmp2681 = panda$collections$Array$get_count$R$panda$core$Int64(c2664->fields);
                panda$core$Bit $tmp2682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2681, ((panda$core$Int64) { 1 }));
                panda$core$Bit$wrapper* $tmp2683;
                $tmp2683 = (panda$core$Bit$wrapper*) malloc(13);
                $tmp2683->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp2683->refCount = 1;
                $tmp2683->value = $tmp2682;
                ITable* $tmp2685 = ((panda$core$Formattable*) $tmp2683)->$class->itable;
                while ($tmp2685->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                    $tmp2685 = $tmp2685->next;
                }
                $fn2687 $tmp2686 = $tmp2685->methods[0];
                panda$core$String* $tmp2688 = $tmp2686(((panda$core$Formattable*) $tmp2683), &$s2684);
                panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2680, $tmp2688);
                panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, &$s2690);
                ITable* $tmp2692 = ((panda$collections$CollectionView*) p_args)->$class->itable;
                while ($tmp2692->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp2692 = $tmp2692->next;
                }
                $fn2694 $tmp2693 = $tmp2692->methods[0];
                panda$core$Int64 $tmp2695 = $tmp2693(((panda$collections$CollectionView*) p_args));
                panda$core$Int64$wrapper* $tmp2696;
                $tmp2696 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp2696->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2696->refCount = 1;
                $tmp2696->value = $tmp2695;
                panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2691, ((panda$core$Object*) $tmp2696));
                panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, &$s2698);
                panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, $tmp2699);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2700);
                return NULL;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, c2664);
            panda$collections$Array* $tmp2702 = (panda$collections$Array*) malloc(40);
            $tmp2702->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2702->refCount.value = 1;
            panda$collections$Array$init($tmp2702);
            finalArgs2701 = $tmp2702;
            panda$core$UInt64 $tmp2705 = panda$core$Int64$convert$R$panda$core$UInt64(c2664->rawValue);
            value2704 = $tmp2705;
            org$pandalanguage$pandac$IRNode* $tmp2706 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2706->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2706->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2708 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2704);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2706, ((panda$core$Int64) { 1004 }), p_m->position, $tmp2708, value2704);
            panda$collections$Array$add$panda$collections$Array$T(finalArgs2701, ((panda$core$Object*) $tmp2706));
            ITable* $tmp2710 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2710->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2710 = $tmp2710->next;
            }
            $fn2712 $tmp2711 = $tmp2710->methods[0];
            panda$core$Int64 $tmp2713 = $tmp2711(((panda$collections$CollectionView*) p_args));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2709, ((panda$core$Int64) { 0 }), $tmp2713, ((panda$core$Bit) { false }));
            int64_t $tmp2715 = $tmp2709.min.value;
            panda$core$Int64 i2714 = { $tmp2715 };
            int64_t $tmp2717 = $tmp2709.max.value;
            bool $tmp2718 = $tmp2709.inclusive.value;
            if ($tmp2718) goto $l2725; else goto $l2726;
            $l2725:;
            if ($tmp2715 <= $tmp2717) goto $l2719; else goto $l2721;
            $l2726:;
            if ($tmp2715 < $tmp2717) goto $l2719; else goto $l2721;
            $l2719:;
            {
                ITable* $tmp2728 = p_args->$class->itable;
                while ($tmp2728->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2728 = $tmp2728->next;
                }
                $fn2730 $tmp2729 = $tmp2728->methods[0];
                panda$core$Object* $tmp2731 = $tmp2729(p_args, i2714);
                panda$core$Object* $tmp2732 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(c2664->fields, i2714);
                org$pandalanguage$pandac$IRNode* $tmp2733 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2731), ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp2732)->second));
                arg2727 = $tmp2733;
                if (((panda$core$Bit) { arg2727 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2701, ((panda$core$Object*) arg2727));
            }
            $l2722:;
            int64_t $tmp2735 = $tmp2717 - i2714.value;
            if ($tmp2718) goto $l2736; else goto $l2737;
            $l2736:;
            if ((uint64_t) $tmp2735 >= 1) goto $l2734; else goto $l2721;
            $l2737:;
            if ((uint64_t) $tmp2735 > 1) goto $l2734; else goto $l2721;
            $l2734:;
            i2714.value += 1;
            goto $l2719;
            $l2721:;
            org$pandalanguage$pandac$IRNode* $tmp2741 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2741->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2741->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2743 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp2744 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(c2664->owner);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2741, ((panda$core$Int64) { 1001 }), p_m->position, $tmp2743, $tmp2744);
            owner2740 = $tmp2741;
            org$pandalanguage$pandac$IRNode* $tmp2745 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, owner2740, ((panda$collections$ListView*) finalArgs2701));
            return $tmp2745;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2747 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2746 = $tmp2747;
            if (((panda$core$Bit) { resolved2746 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2748, ((panda$core$Object*) resolved2746->type));
            panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, &$s2750);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2746->position, $tmp2751);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2752;
    panda$core$MutableString* typeName2755;
    panda$core$String* separator2759;
    panda$collections$Iterator* p$Iter2761;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2773;
    panda$core$Int64 kind2779;
    panda$core$Char8 $tmp2785;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2753 = (panda$collections$Array*) malloc(40);
    $tmp2753->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2753->refCount.value = 1;
    panda$collections$Array$init($tmp2753);
    subtypes2752 = $tmp2753;
    panda$core$MutableString* $tmp2756 = (panda$core$MutableString*) malloc(48);
    $tmp2756->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2756->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2756, &$s2758);
    typeName2755 = $tmp2756;
    separator2759 = &$s2760;
    {
        ITable* $tmp2762 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2762->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2762 = $tmp2762->next;
        }
        $fn2764 $tmp2763 = $tmp2762->methods[0];
        panda$collections$Iterator* $tmp2765 = $tmp2763(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2761 = $tmp2765;
        $l2766:;
        ITable* $tmp2768 = p$Iter2761->$class->itable;
        while ($tmp2768->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2768 = $tmp2768->next;
        }
        $fn2770 $tmp2769 = $tmp2768->methods[0];
        panda$core$Bit $tmp2771 = $tmp2769(p$Iter2761);
        panda$core$Bit $tmp2772 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2771);
        if (!$tmp2772.value) goto $l2767;
        {
            ITable* $tmp2774 = p$Iter2761->$class->itable;
            while ($tmp2774->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2774 = $tmp2774->next;
            }
            $fn2776 $tmp2775 = $tmp2774->methods[1];
            panda$core$Object* $tmp2777 = $tmp2775(p$Iter2761);
            p2773 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2777);
            panda$core$MutableString$append$panda$core$String(typeName2755, separator2759);
            panda$core$MutableString$append$panda$core$String(typeName2755, ((org$pandalanguage$pandac$Symbol*) p2773->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2752, ((panda$core$Object*) p2773->type));
            separator2759 = &$s2778;
        }
        goto $l2766;
        $l2767:;
    }
    panda$core$Bit $tmp2780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp2780.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2755, &$s2781);
        kind2779 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2755, &$s2782);
        kind2779 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2752, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2783 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2784 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2783);
    if ($tmp2784.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2755, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2785, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2755, $tmp2785);
    org$pandalanguage$pandac$Type* $tmp2786 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2786->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2786->refCount.value = 1;
    panda$core$String* $tmp2788 = panda$core$MutableString$finish$R$panda$core$String(typeName2755);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2786, $tmp2788, kind2779, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2752), ((panda$core$Bit) { true }));
    return $tmp2786;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2789;
    panda$core$MutableString* typeName2792;
    panda$collections$Iterator* p$Iter2796;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2808;
    panda$core$Int64 kind2814;
    panda$core$Char8 $tmp2820;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2790 = (panda$collections$Array*) malloc(40);
    $tmp2790->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2790->refCount.value = 1;
    panda$collections$Array$init($tmp2790);
    subtypes2789 = $tmp2790;
    panda$core$MutableString* $tmp2793 = (panda$core$MutableString*) malloc(48);
    $tmp2793->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2793->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2793, &$s2795);
    typeName2792 = $tmp2793;
    panda$core$MutableString$append$panda$core$String(typeName2792, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2789, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2797 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2797->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2797 = $tmp2797->next;
        }
        $fn2799 $tmp2798 = $tmp2797->methods[0];
        panda$collections$Iterator* $tmp2800 = $tmp2798(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2796 = $tmp2800;
        $l2801:;
        ITable* $tmp2803 = p$Iter2796->$class->itable;
        while ($tmp2803->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2803 = $tmp2803->next;
        }
        $fn2805 $tmp2804 = $tmp2803->methods[0];
        panda$core$Bit $tmp2806 = $tmp2804(p$Iter2796);
        panda$core$Bit $tmp2807 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2806);
        if (!$tmp2807.value) goto $l2802;
        {
            ITable* $tmp2809 = p$Iter2796->$class->itable;
            while ($tmp2809->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2809 = $tmp2809->next;
            }
            $fn2811 $tmp2810 = $tmp2809->methods[1];
            panda$core$Object* $tmp2812 = $tmp2810(p$Iter2796);
            p2808 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2812);
            panda$core$MutableString$append$panda$core$String(typeName2792, &$s2813);
            panda$core$MutableString$append$panda$core$String(typeName2792, ((org$pandalanguage$pandac$Symbol*) p2808->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2789, ((panda$core$Object*) p2808->type));
        }
        goto $l2801;
        $l2802:;
    }
    panda$core$Bit $tmp2815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp2815.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2792, &$s2816);
        kind2814 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2792, &$s2817);
        kind2814 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2789, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2818 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2819 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2818);
    if ($tmp2819.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2792, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2820, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2792, $tmp2820);
    org$pandalanguage$pandac$Type* $tmp2821 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2821->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2821->refCount.value = 1;
    panda$core$String* $tmp2823 = panda$core$MutableString$finish$R$panda$core$String(typeName2792);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2821, $tmp2823, kind2814, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2789), ((panda$core$Bit) { true }));
    return $tmp2821;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2824;
    org$pandalanguage$pandac$MethodDecl* $tmp2825 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2824 = $tmp2825;
    if (((panda$core$Bit) { inherited2824 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2826 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2826;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2827 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2824);
    return $tmp2827;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2828 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2829 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2828);
    return $tmp2829;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2830;
    org$pandalanguage$pandac$MethodDecl* $tmp2831 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2830 = $tmp2831;
    if (((panda$core$Bit) { inherited2830 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2832 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2832;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2833 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2830, p_selfType);
    return $tmp2833;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2834;
        }
        break;
        case 52:
        {
            return &$s2835;
        }
        break;
        case 53:
        {
            return &$s2836;
        }
        break;
        case 54:
        {
            return &$s2837;
        }
        break;
        case 55:
        {
            return &$s2838;
        }
        break;
        case 56:
        {
            return &$s2839;
        }
        break;
        case 57:
        {
            return &$s2840;
        }
        break;
        case 58:
        {
            return &$s2841;
        }
        break;
        case 59:
        {
            return &$s2842;
        }
        break;
        case 63:
        {
            return &$s2843;
        }
        break;
        case 62:
        {
            return &$s2844;
        }
        break;
        case 65:
        {
            return &$s2845;
        }
        break;
        case 64:
        {
            return &$s2846;
        }
        break;
        case 68:
        {
            return &$s2847;
        }
        break;
        case 69:
        {
            return &$s2848;
        }
        break;
        case 66:
        {
            return &$s2849;
        }
        break;
        case 67:
        {
            return &$s2850;
        }
        break;
        case 70:
        {
            return &$s2851;
        }
        break;
        case 71:
        {
            return &$s2852;
        }
        break;
        case 49:
        {
            return &$s2853;
        }
        break;
        case 50:
        {
            return &$s2854;
        }
        break;
        case 72:
        {
            return &$s2855;
        }
        break;
        case 1:
        {
            return &$s2856;
        }
        break;
        case 101:
        {
            return &$s2857;
        }
        break;
        case 73:
        {
            return &$s2858;
        }
        break;
        case 60:
        {
            return &$s2859;
        }
        break;
        case 61:
        {
            return &$s2860;
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
            panda$core$Int64 $tmp2861 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2861, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2862.value);
            panda$core$Bit $tmp2863 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2863.value) {
            {
                panda$core$Object* $tmp2864 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2865 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2864));
                return $tmp2865;
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
            panda$core$Object* $tmp2866 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2867 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2866));
            return $tmp2867;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2893;
    panda$core$Int64 r2895;
    panda$core$UInt64 v2897;
    panda$core$UInt64 v2903;
    panda$core$UInt64 v2909;
    panda$core$UInt64 v2915;
    panda$core$UInt64 v2921;
    panda$core$UInt64 v2951;
    panda$core$UInt64 v2957;
    panda$core$UInt64 v2963;
    panda$core$UInt64 v2969;
    panda$core$UInt64 v2975;
    panda$core$Bit $tmp2869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2868 = $tmp2869.value;
    if ($tmp2868) goto $l2870;
    panda$core$Bit $tmp2871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2868 = $tmp2871.value;
    $l2870:;
    panda$core$Bit $tmp2872 = { $tmp2868 };
    PANDA_ASSERT($tmp2872.value);
    panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2873 = $tmp2874.value;
    if ($tmp2873) goto $l2875;
    panda$core$Bit $tmp2876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2873 = $tmp2876.value;
    $l2875:;
    panda$core$Bit $tmp2877 = { $tmp2873 };
    PANDA_ASSERT($tmp2877.value);
    panda$core$Bit $tmp2880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2879 = $tmp2880.value;
    if ($tmp2879) goto $l2881;
    panda$core$UInt64 $tmp2883 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2884 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2883);
    bool $tmp2882 = $tmp2884.value;
    if (!$tmp2882) goto $l2885;
    panda$core$Bit $tmp2886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2882 = $tmp2886.value;
    $l2885:;
    panda$core$Bit $tmp2887 = { $tmp2882 };
    $tmp2879 = $tmp2887.value;
    $l2881:;
    panda$core$Bit $tmp2888 = { $tmp2879 };
    bool $tmp2878 = $tmp2888.value;
    if ($tmp2878) goto $l2889;
    panda$core$UInt64 $tmp2890 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2891 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2890);
    $tmp2878 = $tmp2891.value;
    $l2889:;
    panda$core$Bit $tmp2892 = { $tmp2878 };
    if ($tmp2892.value) {
    {
        panda$core$Int64 $tmp2894 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2893 = $tmp2894;
        panda$core$Int64 $tmp2896 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2895 = $tmp2896;
        switch (p_op.value) {
            case 51:
            {
                panda$core$Int64 $tmp2898 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2893, r2895);
                panda$core$UInt64 $tmp2899 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2898);
                v2897 = $tmp2899;
                org$pandalanguage$pandac$IRNode* $tmp2900 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2900->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2900->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2902 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2897);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2900, ((panda$core$Int64) { 1004 }), p_position, $tmp2902, v2897);
                return $tmp2900;
            }
            break;
            case 52:
            {
                panda$core$Int64 $tmp2904 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2893, r2895);
                panda$core$UInt64 $tmp2905 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2904);
                v2903 = $tmp2905;
                org$pandalanguage$pandac$IRNode* $tmp2906 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2906->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2906->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2908 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2903);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2906, ((panda$core$Int64) { 1004 }), p_position, $tmp2908, v2903);
                return $tmp2906;
            }
            break;
            case 53:
            {
                panda$core$Int64 $tmp2910 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2893, r2895);
                panda$core$UInt64 $tmp2911 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2910);
                v2909 = $tmp2911;
                org$pandalanguage$pandac$IRNode* $tmp2912 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2912->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2912->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2914 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2909);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2912, ((panda$core$Int64) { 1004 }), p_position, $tmp2914, v2909);
                return $tmp2912;
            }
            break;
            case 55:
            {
                panda$core$Int64 $tmp2916 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2893, r2895);
                panda$core$UInt64 $tmp2917 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2916);
                v2915 = $tmp2917;
                org$pandalanguage$pandac$IRNode* $tmp2918 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2918->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2918->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2920 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2915);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2918, ((panda$core$Int64) { 1004 }), p_position, $tmp2920, v2915);
                return $tmp2918;
            }
            break;
            case 56:
            {
                panda$core$Int64 $tmp2922 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2893, r2895);
                panda$core$UInt64 $tmp2923 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2922);
                v2921 = $tmp2923;
                org$pandalanguage$pandac$IRNode* $tmp2924 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2924->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2924->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2926 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2921);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2924, ((panda$core$Int64) { 1004 }), p_position, $tmp2926, v2921);
                return $tmp2924;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2927 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2927->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2927->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2929 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2893, r2895);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2927, ((panda$core$Int64) { 1011 }), p_position, $tmp2929, $tmp2930);
                return $tmp2927;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2931 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2931->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2931->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2933 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2934 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2893, r2895);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2931, ((panda$core$Int64) { 1011 }), p_position, $tmp2933, $tmp2934);
                return $tmp2931;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2935 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2935->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2935->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2937 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2938 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2893, r2895);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2935, ((panda$core$Int64) { 1011 }), p_position, $tmp2937, $tmp2938);
                return $tmp2935;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2939 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2939->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2939->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2941 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2942 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2893, r2895);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2939, ((panda$core$Int64) { 1011 }), p_position, $tmp2941, $tmp2942);
                return $tmp2939;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2943 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2943->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2943->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2945 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2946 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2893, r2895);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2943, ((panda$core$Int64) { 1011 }), p_position, $tmp2945, $tmp2946);
                return $tmp2943;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2947 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2947->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2947->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2949 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2950 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2893, r2895);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2947, ((panda$core$Int64) { 1011 }), p_position, $tmp2949, $tmp2950);
                return $tmp2947;
            }
            break;
            case 67:
            {
                panda$core$Int64 $tmp2952 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2893, r2895);
                panda$core$UInt64 $tmp2953 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2952);
                v2951 = $tmp2953;
                org$pandalanguage$pandac$IRNode* $tmp2954 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2954->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2954->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2956 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2951);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2954, ((panda$core$Int64) { 1004 }), p_position, $tmp2956, v2951);
                return $tmp2954;
            }
            break;
            case 69:
            {
                panda$core$Int64 $tmp2958 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2893, r2895);
                panda$core$UInt64 $tmp2959 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2958);
                v2957 = $tmp2959;
                org$pandalanguage$pandac$IRNode* $tmp2960 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2960->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2960->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2962 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2957);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2960, ((panda$core$Int64) { 1004 }), p_position, $tmp2962, v2957);
                return $tmp2960;
            }
            break;
            case 71:
            {
                panda$core$Int64 $tmp2964 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2893, r2895);
                panda$core$UInt64 $tmp2965 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2964);
                v2963 = $tmp2965;
                org$pandalanguage$pandac$IRNode* $tmp2966 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2966->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2966->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2968 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2963);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2966, ((panda$core$Int64) { 1004 }), p_position, $tmp2968, v2963);
                return $tmp2966;
            }
            break;
            case 72:
            {
                panda$core$Int64 $tmp2970 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2893, r2895);
                panda$core$UInt64 $tmp2971 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2970);
                v2969 = $tmp2971;
                org$pandalanguage$pandac$IRNode* $tmp2972 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2972->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2972->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2974 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2969);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2972, ((panda$core$Int64) { 1004 }), p_position, $tmp2974, v2969);
                return $tmp2972;
            }
            break;
            case 1:
            {
                panda$core$Int64 $tmp2976 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2893, r2895);
                panda$core$UInt64 $tmp2977 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2976);
                v2975 = $tmp2977;
                org$pandalanguage$pandac$IRNode* $tmp2978 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2978->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2978->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2980 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2975);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2978, ((panda$core$Int64) { 1004 }), p_position, $tmp2980, v2975);
                return $tmp2978;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2981);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2982.value) {
    {
        panda$core$Object* $tmp2983 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2983);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2988;
    org$pandalanguage$pandac$IRNode* resolved2996;
    panda$collections$Array* children3001;
    panda$core$UInt64 baseId3007;
    org$pandalanguage$pandac$IRNode* base3008;
    panda$core$UInt64 indexId3016;
    org$pandalanguage$pandac$IRNode* index3017;
    org$pandalanguage$pandac$IRNode* baseRef3023;
    org$pandalanguage$pandac$IRNode* indexRef3026;
    org$pandalanguage$pandac$IRNode* rhsIndex3029;
    org$pandalanguage$pandac$IRNode* value3031;
    panda$core$Bit $tmp2984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2984.value);
    panda$core$Int64 $tmp2985 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2985, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2986.value);
    panda$core$Bit $tmp2987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2987.value) {
    {
        panda$collections$Array* $tmp2989 = (panda$collections$Array*) malloc(40);
        $tmp2989->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2989->refCount.value = 1;
        panda$collections$Array$init($tmp2989);
        args2988 = $tmp2989;
        panda$core$Object* $tmp2991 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2988, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2991)));
        panda$collections$Array$add$panda$collections$Array$T(args2988, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2992 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2994 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2992), &$s2993, ((panda$collections$ListView*) args2988));
        return $tmp2994;
    }
    }
    panda$core$Bit $tmp2995 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2995.value);
    org$pandalanguage$pandac$IRNode* $tmp2997 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2996 = $tmp2997;
    if (((panda$core$Bit) { resolved2996 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2998 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2996);
    resolved2996 = $tmp2998;
    panda$core$Int64 $tmp2999 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2996->children);
    panda$core$Bit $tmp3000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2999, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3000.value);
    panda$collections$Array* $tmp3002 = (panda$collections$Array*) malloc(40);
    $tmp3002->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3002->refCount.value = 1;
    panda$collections$Array$init($tmp3002);
    children3001 = $tmp3002;
    panda$core$Object* $tmp3004 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2996->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3005 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp3004));
    panda$collections$Array$add$panda$collections$Array$T(children3001, ((panda$core$Object*) $tmp3005));
    panda$core$UInt64 $tmp3006 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp3006;
    baseId3007 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp3009 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3009->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3009->refCount.value = 1;
    panda$core$Object* $tmp3011 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3001, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3012 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3001, ((panda$core$Int64) { 0 }));
    panda$core$UInt64$wrapper* $tmp3013;
    $tmp3013 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp3013->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp3013->refCount = 1;
    $tmp3013->value = baseId3007;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3009, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp3011)->position, ((org$pandalanguage$pandac$IRNode*) $tmp3012)->type, ((panda$core$Object*) $tmp3013), ((panda$collections$ListView*) children3001));
    base3008 = $tmp3009;
    panda$collections$Array$clear(children3001);
    panda$core$Object* $tmp3014 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2996->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children3001, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3014)));
    panda$core$UInt64 $tmp3015 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp3015;
    indexId3016 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp3018 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3018->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3018->refCount.value = 1;
    panda$core$Object* $tmp3020 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3001, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3021 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3001, ((panda$core$Int64) { 0 }));
    panda$core$UInt64$wrapper* $tmp3022;
    $tmp3022 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp3022->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp3022->refCount = 1;
    $tmp3022->value = indexId3016;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3018, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp3020)->position, ((org$pandalanguage$pandac$IRNode*) $tmp3021)->type, ((panda$core$Object*) $tmp3022), ((panda$collections$ListView*) children3001));
    index3017 = $tmp3018;
    org$pandalanguage$pandac$IRNode* $tmp3024 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3024->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3024->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3024, ((panda$core$Int64) { 1028 }), base3008->position, base3008->type, baseId3007);
    baseRef3023 = $tmp3024;
    org$pandalanguage$pandac$IRNode* $tmp3027 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3027->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3027->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3027, ((panda$core$Int64) { 1028 }), index3017->position, index3017->type, indexId3016);
    indexRef3026 = $tmp3027;
    org$pandalanguage$pandac$IRNode* $tmp3030 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef3023, ((panda$core$Int64) { 101 }), indexRef3026);
    rhsIndex3029 = $tmp3030;
    if (((panda$core$Bit) { rhsIndex3029 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp3032 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3033 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex3029, $tmp3032, p_right);
    value3031 = $tmp3033;
    if (((panda$core$Bit) { value3031 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3036 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex3029->type);
    bool $tmp3035 = $tmp3036.value;
    if (!$tmp3035) goto $l3037;
    panda$core$Bit $tmp3038 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp3035 = $tmp3038.value;
    $l3037:;
    panda$core$Bit $tmp3039 = { $tmp3035 };
    bool $tmp3034 = $tmp3039.value;
    if (!$tmp3034) goto $l3040;
    panda$core$Bit $tmp3041 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex3029->type, value3031->type);
    $tmp3034 = $tmp3041.value;
    $l3040:;
    panda$core$Bit $tmp3042 = { $tmp3034 };
    if ($tmp3042.value) {
    {
        panda$collections$Array* $tmp3044 = (panda$collections$Array*) malloc(40);
        $tmp3044->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3044->refCount.value = 1;
        panda$collections$Array$init($tmp3044);
        org$pandalanguage$pandac$IRNode* $tmp3046 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3031, &$s3043, ((panda$collections$ListView*) $tmp3044), resolved2996->type);
        value3031 = $tmp3046;
        if (((panda$core$Bit) { value3031 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children3001);
    panda$collections$Array$add$panda$collections$Array$T(children3001, ((panda$core$Object*) index3017));
    panda$collections$Array$add$panda$collections$Array$T(children3001, ((panda$core$Object*) value3031));
    org$pandalanguage$pandac$IRNode* $tmp3048 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base3008, &$s3047, ((panda$collections$ListView*) children3001));
    return $tmp3048;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left3049;
    org$pandalanguage$pandac$IRNode* right3050;
    panda$core$Int64 kind3074;
    org$pandalanguage$pandac$IRNode* resolved3081;
    panda$collections$Array* children3083;
    org$pandalanguage$pandac$IRNode* resolved3090;
    panda$collections$Array* children3092;
    panda$collections$Array* children3109;
    org$pandalanguage$pandac$IRNode* reusedLeft3115;
    org$pandalanguage$pandac$IRNode* toNonNullable3118;
    org$pandalanguage$pandac$IRNode* comparison3121;
    org$pandalanguage$pandac$IRNode* nullCheck3123;
    org$pandalanguage$pandac$ClassDecl* cl3143;
    org$pandalanguage$pandac$ClassDecl* cl3160;
    org$pandalanguage$pandac$IRNode* finalLeft3176;
    org$pandalanguage$pandac$IRNode* finalRight3179;
    panda$collections$Array* children3182;
    panda$collections$Array* children3197;
    panda$collections$Array* children3210;
    org$pandalanguage$pandac$IRNode* reusedLeft3217;
    org$pandalanguage$pandac$ClassDecl* cl3235;
    panda$collections$ListView* parameters3237;
    org$pandalanguage$pandac$Symbol* methods3239;
    org$pandalanguage$pandac$Type* type3243;
    panda$collections$Array* types3244;
    org$pandalanguage$pandac$MethodDecl* m3248;
    panda$collections$Iterator* m$Iter3253;
    org$pandalanguage$pandac$MethodDecl* m3265;
    panda$collections$Array* children3276;
    panda$collections$Array* children3305;
    panda$collections$Array* children3322;
    org$pandalanguage$pandac$Type* resultType3345;
    org$pandalanguage$pandac$IRNode* result3350;
    org$pandalanguage$pandac$IRNode* resolved3353;
    org$pandalanguage$pandac$IRNode* target3359;
    left3049 = p_rawLeft;
    right3050 = p_rawRight;
    panda$core$Bit $tmp3051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3049->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp3051.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3052 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3050);
        right3050 = $tmp3052;
        if (((panda$core$Bit) { right3050 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp3053 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left3049, right3050->type);
        if (((panda$core$Bit) { $tmp3053.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3054 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3049, right3050->type);
            left3049 = $tmp3054;
        }
        }
    }
    }
    panda$core$Bit $tmp3056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3050->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp3055 = $tmp3056.value;
    if (!$tmp3055) goto $l3057;
    panda$core$Int64$nullable $tmp3058 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3050, left3049->type);
    $tmp3055 = ((panda$core$Bit) { $tmp3058.nonnull }).value;
    $l3057:;
    panda$core$Bit $tmp3059 = { $tmp3055 };
    if ($tmp3059.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3060 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3050, left3049->type);
        right3050 = $tmp3060;
    }
    }
    panda$core$Bit $tmp3064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp3063 = $tmp3064.value;
    if ($tmp3063) goto $l3065;
    panda$core$Bit $tmp3066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp3063 = $tmp3066.value;
    $l3065:;
    panda$core$Bit $tmp3067 = { $tmp3063 };
    bool $tmp3062 = $tmp3067.value;
    if ($tmp3062) goto $l3068;
    panda$core$Bit $tmp3069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp3062 = $tmp3069.value;
    $l3068:;
    panda$core$Bit $tmp3070 = { $tmp3062 };
    bool $tmp3061 = $tmp3070.value;
    if ($tmp3061) goto $l3071;
    panda$core$Bit $tmp3072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp3061 = $tmp3072.value;
    $l3071:;
    panda$core$Bit $tmp3073 = { $tmp3061 };
    if ($tmp3073.value) {
    {
        panda$core$Bit $tmp3076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp3075 = $tmp3076.value;
        if ($tmp3075) goto $l3077;
        panda$core$Bit $tmp3078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp3075 = $tmp3078.value;
        $l3077:;
        panda$core$Bit $tmp3079 = { $tmp3075 };
        if ($tmp3079.value) {
        {
            kind3074 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind3074 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp3080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3049->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3080.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3082 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3050);
            resolved3081 = $tmp3082;
            if (((panda$core$Bit) { resolved3081 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3084 = (panda$collections$Array*) malloc(40);
            $tmp3084->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3084->refCount.value = 1;
            panda$collections$Array$init($tmp3084);
            children3083 = $tmp3084;
            panda$collections$Array$add$panda$collections$Array$T(children3083, ((panda$core$Object*) resolved3081));
            org$pandalanguage$pandac$IRNode* $tmp3086 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3086->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3086->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3088 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3086, kind3074, p_position, $tmp3088, ((panda$collections$ListView*) children3083));
            return $tmp3086;
        }
        }
        panda$core$Bit $tmp3089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3050->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3089.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3091 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3049);
            resolved3090 = $tmp3091;
            if (((panda$core$Bit) { resolved3090 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3093 = (panda$collections$Array*) malloc(40);
            $tmp3093->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3093->refCount.value = 1;
            panda$collections$Array$init($tmp3093);
            children3092 = $tmp3093;
            panda$collections$Array$add$panda$collections$Array$T(children3092, ((panda$core$Object*) resolved3090));
            org$pandalanguage$pandac$IRNode* $tmp3095 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3095->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3095->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3097 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3095, kind3074, p_position, $tmp3097, ((panda$collections$ListView*) children3092));
            return $tmp3095;
        }
        }
    }
    }
    panda$core$Bit $tmp3100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp3099 = $tmp3100.value;
    if ($tmp3099) goto $l3101;
    panda$core$Bit $tmp3102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp3099 = $tmp3102.value;
    $l3101:;
    panda$core$Bit $tmp3103 = { $tmp3099 };
    bool $tmp3098 = $tmp3103.value;
    if (!$tmp3098) goto $l3104;
    panda$core$Bit $tmp3105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3049->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp3098 = $tmp3105.value;
    $l3104:;
    panda$core$Bit $tmp3106 = { $tmp3098 };
    if ($tmp3106.value) {
    {
        panda$core$Bit $tmp3107 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right3050->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp3107.value);
        panda$core$UInt64 $tmp3108 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp3108;
        panda$collections$Array* $tmp3110 = (panda$collections$Array*) malloc(40);
        $tmp3110->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3110->refCount.value = 1;
        panda$collections$Array$init($tmp3110);
        children3109 = $tmp3110;
        panda$collections$Array$add$panda$collections$Array$T(children3109, ((panda$core$Object*) left3049));
        org$pandalanguage$pandac$IRNode* $tmp3112 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3112->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3112->refCount.value = 1;
        panda$core$UInt64$wrapper* $tmp3114;
        $tmp3114 = (panda$core$UInt64$wrapper*) malloc(24);
        $tmp3114->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
        $tmp3114->refCount = 1;
        $tmp3114->value = self->reusedValueCount;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3112, ((panda$core$Int64) { 1027 }), left3049->position, left3049->type, ((panda$core$Object*) $tmp3114), ((panda$collections$ListView*) children3109));
        left3049 = $tmp3112;
        org$pandalanguage$pandac$IRNode* $tmp3116 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3116->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3116->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3116, ((panda$core$Int64) { 1028 }), left3049->position, left3049->type, self->reusedValueCount);
        reusedLeft3115 = $tmp3116;
        panda$core$Object* $tmp3119 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left3049->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3120 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft3115, ((org$pandalanguage$pandac$Type*) $tmp3119));
        toNonNullable3118 = $tmp3120;
        org$pandalanguage$pandac$IRNode* $tmp3122 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable3118, p_op, right3050);
        comparison3121 = $tmp3122;
        if (((panda$core$Bit) { comparison3121 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3124 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3124->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3124->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3126 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3124, ((panda$core$Int64) { 1030 }), p_position, $tmp3126);
        org$pandalanguage$pandac$IRNode* $tmp3127 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3049, ((panda$core$Int64) { 59 }), $tmp3124);
        nullCheck3123 = $tmp3127;
        if (((panda$core$Bit) { nullCheck3123 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children3109);
        panda$collections$Array$add$panda$collections$Array$T(children3109, ((panda$core$Object*) nullCheck3123));
        panda$collections$Array$add$panda$collections$Array$T(children3109, ((panda$core$Object*) comparison3121));
        org$pandalanguage$pandac$IRNode* $tmp3128 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3128->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3128->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3130 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3128, ((panda$core$Int64) { 1011 }), p_position, $tmp3130, $tmp3131);
        org$pandalanguage$pandac$Type* $tmp3132 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3133 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3128, $tmp3132);
        panda$collections$Array$add$panda$collections$Array$T(children3109, ((panda$core$Object*) $tmp3133));
        org$pandalanguage$pandac$IRNode* $tmp3134 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3134->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3134->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3136 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3134, ((panda$core$Int64) { 1044 }), p_position, $tmp3136, ((panda$collections$ListView*) children3109));
        return $tmp3134;
    }
    }
    panda$core$Bit $tmp3138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp3137 = $tmp3138.value;
    if ($tmp3137) goto $l3139;
    panda$core$Bit $tmp3140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp3137 = $tmp3140.value;
    $l3139:;
    panda$core$Bit $tmp3141 = { $tmp3137 };
    if ($tmp3141.value) {
    {
        panda$core$Bit $tmp3142 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left3049->type);
        if ($tmp3142.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3144 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left3049->type);
            cl3143 = $tmp3144;
            if (((panda$core$Bit) { cl3143 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3145 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3143);
            if ($tmp3145.value) {
            {
                panda$core$String* $tmp3147 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3146, $tmp3147);
                panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3148, &$s3149);
                panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3150, ((panda$core$Object*) left3049->type));
                panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, &$s3152);
                panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3154, ((panda$core$Object*) right3050->type));
                panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, &$s3156);
                panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, $tmp3157);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3158);
            }
            }
        }
        }
        panda$core$Bit $tmp3159 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right3050->type);
        if ($tmp3159.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3161 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right3050->type);
            cl3160 = $tmp3161;
            if (((panda$core$Bit) { cl3160 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3162 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3160);
            if ($tmp3162.value) {
            {
                panda$core$String* $tmp3164 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3163, $tmp3164);
                panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, &$s3166);
                panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3167, ((panda$core$Object*) left3049->type));
                panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3168, &$s3169);
                panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3171, ((panda$core$Object*) right3050->type));
                panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, &$s3173);
                panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, $tmp3174);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3175);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp3177 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3178 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3049, $tmp3177);
        finalLeft3176 = $tmp3178;
        if (((panda$core$Bit) { finalLeft3176 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3180 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3181 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3050, $tmp3180);
        finalRight3179 = $tmp3181;
        if (((panda$core$Bit) { finalRight3179 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3183 = (panda$collections$Array*) malloc(40);
        $tmp3183->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3183->refCount.value = 1;
        panda$collections$Array$init($tmp3183);
        children3182 = $tmp3183;
        panda$collections$Array$add$panda$collections$Array$T(children3182, ((panda$core$Object*) finalLeft3176));
        panda$collections$Array$add$panda$collections$Array$T(children3182, ((panda$core$Object*) finalRight3179));
        org$pandalanguage$pandac$IRNode* $tmp3185 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3185->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3185->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3187 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        panda$core$Int64$wrapper* $tmp3188;
        $tmp3188 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp3188->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp3188->refCount = 1;
        $tmp3188->value = p_op;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3185, ((panda$core$Int64) { 1023 }), p_position, $tmp3187, ((panda$core$Object*) $tmp3188), ((panda$collections$ListView*) children3182));
        return $tmp3185;
    }
    }
    panda$core$Bit $tmp3189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp3189.value) {
    {
        panda$core$Bit $tmp3190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3049->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3190.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3191 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3049, p_op, right3050);
            return $tmp3191;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3192 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3049);
        left3049 = $tmp3192;
        if (((panda$core$Bit) { left3049 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3193 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3050, left3049->type);
        right3050 = $tmp3193;
        if (((panda$core$Bit) { right3050 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3194 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3049);
        panda$core$Bit $tmp3195 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3194);
        if ($tmp3195.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left3049->position, &$s3196);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3198 = (panda$collections$Array*) malloc(40);
        $tmp3198->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3198->refCount.value = 1;
        panda$collections$Array$init($tmp3198);
        children3197 = $tmp3198;
        panda$collections$Array$add$panda$collections$Array$T(children3197, ((panda$core$Object*) left3049));
        panda$collections$Array$add$panda$collections$Array$T(children3197, ((panda$core$Object*) right3050));
        org$pandalanguage$pandac$IRNode* $tmp3200 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3200->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3200->refCount.value = 1;
        panda$core$Int64$wrapper* $tmp3202;
        $tmp3202 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp3202->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp3202->refCount = 1;
        $tmp3202->value = ((panda$core$Int64) { 73 });
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3200, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) $tmp3202), ((panda$collections$ListView*) children3197));
        return $tmp3200;
    }
    }
    panda$core$Bit $tmp3203 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp3203.value) {
    {
        panda$core$Bit $tmp3204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3049->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3204.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3205 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3049, p_op, right3050);
            return $tmp3205;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3206 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3049);
        left3049 = $tmp3206;
        if (((panda$core$Bit) { left3049 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3207 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3049);
        panda$core$Bit $tmp3208 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3207);
        if ($tmp3208.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left3049->position, &$s3209);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3211 = (panda$collections$Array*) malloc(40);
        $tmp3211->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3211->refCount.value = 1;
        panda$collections$Array$init($tmp3211);
        children3210 = $tmp3211;
        panda$collections$Array$add$panda$collections$Array$T(children3210, ((panda$core$Object*) left3049));
        panda$core$UInt64 $tmp3213 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp3213;
        org$pandalanguage$pandac$IRNode* $tmp3214 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3214->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3214->refCount.value = 1;
        panda$core$UInt64$wrapper* $tmp3216;
        $tmp3216 = (panda$core$UInt64$wrapper*) malloc(24);
        $tmp3216->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
        $tmp3216->refCount = 1;
        $tmp3216->value = self->reusedValueCount;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3214, ((panda$core$Int64) { 1027 }), left3049->position, left3049->type, ((panda$core$Object*) $tmp3216), ((panda$collections$ListView*) children3210));
        left3049 = $tmp3214;
        org$pandalanguage$pandac$IRNode* $tmp3218 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3218->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3218->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3218, ((panda$core$Int64) { 1028 }), left3049->position, left3049->type, self->reusedValueCount);
        reusedLeft3217 = $tmp3218;
        panda$core$Int64 $tmp3220 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp3221 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft3217, $tmp3220, right3050);
        right3050 = $tmp3221;
        if (((panda$core$Bit) { right3050 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3223 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left3049->type);
        bool $tmp3222 = $tmp3223.value;
        if (!$tmp3222) goto $l3224;
        panda$core$Bit $tmp3225 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left3049->type, right3050->type);
        $tmp3222 = $tmp3225.value;
        $l3224:;
        panda$core$Bit $tmp3226 = { $tmp3222 };
        if ($tmp3226.value) {
        {
            panda$collections$Array* $tmp3228 = (panda$collections$Array*) malloc(40);
            $tmp3228->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3228->refCount.value = 1;
            panda$collections$Array$init($tmp3228);
            org$pandalanguage$pandac$IRNode* $tmp3230 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3050, &$s3227, ((panda$collections$ListView*) $tmp3228), left3049->type);
            right3050 = $tmp3230;
            if (((panda$core$Bit) { right3050 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3231 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3049, ((panda$core$Int64) { 73 }), right3050);
        return $tmp3231;
    }
    }
    panda$core$Bit $tmp3232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp3232.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3233 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3049);
        left3049 = $tmp3233;
        if (((panda$core$Bit) { left3049 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3234 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left3049->type);
        if ($tmp3234.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3236 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left3049->type);
            cl3235 = $tmp3236;
            if (((panda$core$Bit) { cl3235 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$ListView* $tmp3238 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left3049->type);
            parameters3237 = $tmp3238;
            org$pandalanguage$pandac$SymbolTable* $tmp3240 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3235);
            org$pandalanguage$pandac$Symbol* $tmp3242 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3240, &$s3241);
            methods3239 = $tmp3242;
            if (((panda$core$Bit) { methods3239 != NULL }).value) {
            {
                panda$collections$Array* $tmp3245 = (panda$collections$Array*) malloc(40);
                $tmp3245->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3245->refCount.value = 1;
                panda$collections$Array$init($tmp3245);
                types3244 = $tmp3245;
                panda$core$Bit $tmp3247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3239->kind, ((panda$core$Int64) { 204 }));
                if ($tmp3247.value) {
                {
                    m3248 = ((org$pandalanguage$pandac$MethodDecl*) methods3239);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3248);
                    org$pandalanguage$pandac$MethodRef* $tmp3249 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                    $tmp3249->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                    $tmp3249->refCount.value = 1;
                    org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3249, m3248, parameters3237);
                    org$pandalanguage$pandac$Type* $tmp3251 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3249);
                    panda$collections$Array$add$panda$collections$Array$T(types3244, ((panda$core$Object*) $tmp3251));
                }
                }
                else {
                {
                    panda$core$Bit $tmp3252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3239->kind, ((panda$core$Int64) { 205 }));
                    PANDA_ASSERT($tmp3252.value);
                    {
                        ITable* $tmp3254 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3239)->methods)->$class->itable;
                        while ($tmp3254->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3254 = $tmp3254->next;
                        }
                        $fn3256 $tmp3255 = $tmp3254->methods[0];
                        panda$collections$Iterator* $tmp3257 = $tmp3255(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3239)->methods));
                        m$Iter3253 = $tmp3257;
                        $l3258:;
                        ITable* $tmp3260 = m$Iter3253->$class->itable;
                        while ($tmp3260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3260 = $tmp3260->next;
                        }
                        $fn3262 $tmp3261 = $tmp3260->methods[0];
                        panda$core$Bit $tmp3263 = $tmp3261(m$Iter3253);
                        panda$core$Bit $tmp3264 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3263);
                        if (!$tmp3264.value) goto $l3259;
                        {
                            ITable* $tmp3266 = m$Iter3253->$class->itable;
                            while ($tmp3266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3266 = $tmp3266->next;
                            }
                            $fn3268 $tmp3267 = $tmp3266->methods[1];
                            panda$core$Object* $tmp3269 = $tmp3267(m$Iter3253);
                            m3265 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3269);
                            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3265);
                            org$pandalanguage$pandac$MethodRef* $tmp3270 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                            $tmp3270->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                            $tmp3270->refCount.value = 1;
                            org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3270, m3265, parameters3237);
                            org$pandalanguage$pandac$Type* $tmp3272 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3270);
                            panda$collections$Array$add$panda$collections$Array$T(types3244, ((panda$core$Object*) $tmp3272));
                        }
                        goto $l3258;
                        $l3259:;
                    }
                }
                }
                org$pandalanguage$pandac$Type* $tmp3273 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3273->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3273->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3273, ((panda$collections$ListView*) types3244));
                type3243 = $tmp3273;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp3275 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
                type3243 = $tmp3275;
            }
            }
            panda$collections$Array* $tmp3277 = (panda$collections$Array*) malloc(40);
            $tmp3277->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3277->refCount.value = 1;
            panda$collections$Array$init($tmp3277);
            children3276 = $tmp3277;
            panda$collections$Array$add$panda$collections$Array$T(children3276, ((panda$core$Object*) left3049));
            panda$collections$Array$add$panda$collections$Array$T(children3276, ((panda$core$Object*) right3050));
            org$pandalanguage$pandac$IRNode* $tmp3279 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3279->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3279->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3279, ((panda$core$Int64) { 1040 }), p_position, type3243, ((panda$collections$ListView*) children3276));
            return $tmp3279;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3281 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3282 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left3049->type, $tmp3281);
    if ($tmp3282.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3284 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3285 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right3050->type, $tmp3284);
        bool $tmp3283 = $tmp3285.value;
        if (!$tmp3283) goto $l3286;
        panda$core$Bit $tmp3291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp3290 = $tmp3291.value;
        if ($tmp3290) goto $l3292;
        panda$core$Bit $tmp3293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp3290 = $tmp3293.value;
        $l3292:;
        panda$core$Bit $tmp3294 = { $tmp3290 };
        bool $tmp3289 = $tmp3294.value;
        if ($tmp3289) goto $l3295;
        panda$core$Bit $tmp3296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp3289 = $tmp3296.value;
        $l3295:;
        panda$core$Bit $tmp3297 = { $tmp3289 };
        bool $tmp3288 = $tmp3297.value;
        if ($tmp3288) goto $l3298;
        panda$core$Bit $tmp3299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp3288 = $tmp3299.value;
        $l3298:;
        panda$core$Bit $tmp3300 = { $tmp3288 };
        bool $tmp3287 = $tmp3300.value;
        if ($tmp3287) goto $l3301;
        panda$core$Bit $tmp3302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp3287 = $tmp3302.value;
        $l3301:;
        panda$core$Bit $tmp3303 = { $tmp3287 };
        $tmp3283 = $tmp3303.value;
        $l3286:;
        panda$core$Bit $tmp3304 = { $tmp3283 };
        if ($tmp3304.value) {
        {
            panda$collections$Array* $tmp3306 = (panda$collections$Array*) malloc(40);
            $tmp3306->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3306->refCount.value = 1;
            panda$collections$Array$init($tmp3306);
            children3305 = $tmp3306;
            panda$collections$Array$add$panda$collections$Array$T(children3305, ((panda$core$Object*) left3049));
            panda$collections$Array$add$panda$collections$Array$T(children3305, ((panda$core$Object*) right3050));
            org$pandalanguage$pandac$IRNode* $tmp3308 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3308->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3308->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp3310;
            $tmp3310 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp3310->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3310->refCount = 1;
            $tmp3310->value = p_op;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3308, ((panda$core$Int64) { 1023 }), p_position, left3049->type, ((panda$core$Object*) $tmp3310), ((panda$collections$ListView*) children3305));
            return $tmp3308;
        }
        }
        panda$core$String* $tmp3312 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3311, $tmp3312);
        panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, &$s3314);
        panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3315, ((panda$core$Object*) left3049->type));
        panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3316, &$s3317);
        panda$core$String* $tmp3319 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3318, ((panda$core$Object*) right3050->type));
        panda$core$String* $tmp3321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3319, &$s3320);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3321);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3323 = (panda$collections$Array*) malloc(40);
    $tmp3323->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3323->refCount.value = 1;
    panda$collections$Array$init($tmp3323);
    children3322 = $tmp3323;
    panda$core$Bit $tmp3327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3049->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3326 = $tmp3327.value;
    if ($tmp3326) goto $l3328;
    panda$core$Bit $tmp3329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3049->kind, ((panda$core$Int64) { 1032 }));
    $tmp3326 = $tmp3329.value;
    $l3328:;
    panda$core$Bit $tmp3330 = { $tmp3326 };
    bool $tmp3325 = $tmp3330.value;
    if (!$tmp3325) goto $l3331;
    panda$core$Bit $tmp3333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3050->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3332 = $tmp3333.value;
    if ($tmp3332) goto $l3334;
    panda$core$Bit $tmp3335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3050->kind, ((panda$core$Int64) { 1032 }));
    $tmp3332 = $tmp3335.value;
    $l3334:;
    panda$core$Bit $tmp3336 = { $tmp3332 };
    $tmp3325 = $tmp3336.value;
    $l3331:;
    panda$core$Bit $tmp3337 = { $tmp3325 };
    if ($tmp3337.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3338 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3049, p_op, right3050);
        return $tmp3338;
    }
    }
    panda$core$Bit $tmp3340 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left3049->type);
    bool $tmp3339 = $tmp3340.value;
    if (!$tmp3339) goto $l3341;
    panda$core$Int64$nullable $tmp3342 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3050, left3049->type);
    $tmp3339 = ((panda$core$Bit) { $tmp3342.nonnull }).value;
    $l3341:;
    panda$core$Bit $tmp3343 = { $tmp3339 };
    if ($tmp3343.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3344 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3050, left3049->type);
        right3050 = $tmp3344;
        PANDA_ASSERT(((panda$core$Bit) { right3050 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children3322, ((panda$core$Object*) left3049));
        panda$collections$Array$add$panda$collections$Array$T(children3322, ((panda$core$Object*) right3050));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp3346 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3345 = $tmp3346;
            }
            break;
            default:
            {
                resultType3345 = left3049->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3347 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3347->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3347->refCount.value = 1;
        panda$core$Int64$wrapper* $tmp3349;
        $tmp3349 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp3349->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp3349->refCount = 1;
        $tmp3349->value = p_op;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3347, ((panda$core$Int64) { 1023 }), p_position, resultType3345, ((panda$core$Object*) $tmp3349), ((panda$collections$ListView*) children3322));
        return $tmp3347;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3322, ((panda$core$Object*) right3050));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3351 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3352 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left3049, $tmp3351, ((panda$collections$ListView*) children3322));
    result3350 = $tmp3352;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3350 == NULL }).value) {
    {
        panda$collections$Array$clear(children3322);
        panda$collections$Array$add$panda$collections$Array$T(children3322, ((panda$core$Object*) left3049));
        org$pandalanguage$pandac$IRNode* $tmp3354 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3050);
        resolved3353 = $tmp3354;
        bool $tmp3355 = ((panda$core$Bit) { resolved3353 != NULL }).value;
        if (!$tmp3355) goto $l3356;
        panda$core$Bit $tmp3357 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved3353->type);
        $tmp3355 = $tmp3357.value;
        $l3356:;
        panda$core$Bit $tmp3358 = { $tmp3355 };
        if ($tmp3358.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children3322, ((panda$core$Object*) resolved3353));
            org$pandalanguage$pandac$IRNode* $tmp3360 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3360->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3360->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3362 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3360, ((panda$core$Int64) { 1001 }), resolved3353->position, $tmp3362, resolved3353->type);
            target3359 = $tmp3360;
            panda$core$String* $tmp3363 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3364 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3359, $tmp3363, ((panda$collections$ListView*) children3322));
            result3350 = $tmp3364;
        }
        }
    }
    }
    return result3350;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3365;
    org$pandalanguage$pandac$IRNode* right3368;
    panda$core$Object* $tmp3366 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3367 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3366));
    left3365 = $tmp3367;
    if (((panda$core$Bit) { left3365 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3369 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3370 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3369));
    right3368 = $tmp3370;
    if (((panda$core$Bit) { right3368 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3371 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left3365, ((panda$core$Int64$wrapper*) p_b->payload)->value, right3368);
    return $tmp3371;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3375;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp3372 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3372;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp3373 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3374 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3373, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3374.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3375, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3376 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3375);
            return ((panda$collections$ListView*) $tmp3376);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp3377 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3378 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3377));
            return $tmp3378;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3379 = (panda$collections$Array*) malloc(40);
            $tmp3379->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3379->refCount.value = 1;
            panda$collections$Array$init($tmp3379);
            return ((panda$collections$ListView*) $tmp3379);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3381.value) {
        {
            panda$collections$ListView* $tmp3382 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3382;
        }
        }
        panda$collections$ListView* $tmp3383 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3383;
    }
    }
    panda$collections$Array* $tmp3384 = (panda$collections$Array*) malloc(40);
    $tmp3384->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3384->refCount.value = 1;
    panda$collections$Array$init($tmp3384);
    return ((panda$collections$ListView*) $tmp3384);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name3387;
    org$pandalanguage$pandac$ClassDecl* cl3389;
    org$pandalanguage$pandac$Symbol* s3391;
    org$pandalanguage$pandac$MethodDecl* m3394;
    panda$collections$Iterator* test$Iter3399;
    org$pandalanguage$pandac$MethodDecl* test3411;
    org$pandalanguage$pandac$MethodRef* ref3423;
    panda$collections$Array* children3427;
    org$pandalanguage$pandac$IRNode* methodRef3430;
    org$pandalanguage$pandac$Position $tmp3436;
    panda$collections$Array* args3437;
    panda$collections$Array* children3453;
    panda$collections$Array* children3464;
    org$pandalanguage$pandac$IRNode* coerced3474;
    panda$collections$Array* children3477;
    panda$core$Bit $tmp3386 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3386.value) {
    {
        panda$core$String* $tmp3388 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3387 = $tmp3388;
        org$pandalanguage$pandac$ClassDecl* $tmp3390 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3389 = $tmp3390;
        if (((panda$core$Bit) { cl3389 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3392 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3389);
        org$pandalanguage$pandac$Symbol* $tmp3393 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3392, name3387);
        s3391 = $tmp3393;
        if (((panda$core$Bit) { s3391 != NULL }).value) {
        {
            m3394 = NULL;
            switch (s3391->kind.value) {
                case 204:
                {
                    m3394 = ((org$pandalanguage$pandac$MethodDecl*) s3391);
                    panda$core$Int64 $tmp3395 = panda$collections$Array$get_count$R$panda$core$Int64(m3394->parameters);
                    panda$core$Bit $tmp3396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3395, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3396.value);
                    panda$core$Bit $tmp3397 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3394->annotations);
                    panda$core$Bit $tmp3398 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3397);
                    PANDA_ASSERT($tmp3398.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3400 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3391)->methods)->$class->itable;
                        while ($tmp3400->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3400 = $tmp3400->next;
                        }
                        $fn3402 $tmp3401 = $tmp3400->methods[0];
                        panda$collections$Iterator* $tmp3403 = $tmp3401(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3391)->methods));
                        test$Iter3399 = $tmp3403;
                        $l3404:;
                        ITable* $tmp3406 = test$Iter3399->$class->itable;
                        while ($tmp3406->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3406 = $tmp3406->next;
                        }
                        $fn3408 $tmp3407 = $tmp3406->methods[0];
                        panda$core$Bit $tmp3409 = $tmp3407(test$Iter3399);
                        panda$core$Bit $tmp3410 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3409);
                        if (!$tmp3410.value) goto $l3405;
                        {
                            ITable* $tmp3412 = test$Iter3399->$class->itable;
                            while ($tmp3412->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3412 = $tmp3412->next;
                            }
                            $fn3414 $tmp3413 = $tmp3412->methods[1];
                            panda$core$Object* $tmp3415 = $tmp3413(test$Iter3399);
                            test3411 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3415);
                            panda$core$Bit $tmp3417 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3411->annotations);
                            panda$core$Bit $tmp3418 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3417);
                            bool $tmp3416 = $tmp3418.value;
                            if (!$tmp3416) goto $l3419;
                            panda$core$Int64 $tmp3420 = panda$collections$Array$get_count$R$panda$core$Int64(test3411->parameters);
                            panda$core$Bit $tmp3421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3420, ((panda$core$Int64) { 0 }));
                            $tmp3416 = $tmp3421.value;
                            $l3419:;
                            panda$core$Bit $tmp3422 = { $tmp3416 };
                            if ($tmp3422.value) {
                            {
                                m3394 = test3411;
                                goto $l3405;
                            }
                            }
                        }
                        goto $l3404;
                        $l3405:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3394 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3394);
                org$pandalanguage$pandac$MethodRef* $tmp3424 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3424->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3424->refCount.value = 1;
                panda$collections$ListView* $tmp3426 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3424, m3394, $tmp3426);
                ref3423 = $tmp3424;
                panda$collections$Array* $tmp3428 = (panda$collections$Array*) malloc(40);
                $tmp3428->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3428->refCount.value = 1;
                panda$collections$Array$init($tmp3428);
                children3427 = $tmp3428;
                panda$collections$Array$add$panda$collections$Array$T(children3427, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3431 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3431->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3431->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3433 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3433->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3433->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3436);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3433, &$s3435, ((panda$core$Int64) { 16 }), $tmp3436, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3431, ((panda$core$Int64) { 1002 }), p_position, $tmp3433, ((panda$core$Object*) ref3423), ((panda$collections$ListView*) children3427));
                methodRef3430 = $tmp3431;
                panda$collections$Array* $tmp3438 = (panda$collections$Array*) malloc(40);
                $tmp3438->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3438->refCount.value = 1;
                panda$collections$Array$init($tmp3438);
                args3437 = $tmp3438;
                org$pandalanguage$pandac$IRNode* $tmp3440 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3430, ((panda$collections$ListView*) args3437));
                return $tmp3440;
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
                    org$pandalanguage$pandac$IRNode* $tmp3441 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3441->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3441->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3443 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3441, ((panda$core$Int64) { 1032 }), p_position, $tmp3443, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3441;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3444 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3444->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3444->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3446 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3444, ((panda$core$Int64) { 1004 }), p_position, $tmp3446, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3444;
                }
                break;
                case 1045:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3447 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3447->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3447->refCount.value = 1;
                    panda$core$Real64 $tmp3449 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$Type* $tmp3450 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type($tmp3449);
                    panda$core$Real64 $tmp3451 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3447, ((panda$core$Int64) { 1045 }), p_position, $tmp3450, $tmp3451);
                    return $tmp3447;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3452 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3452.value) {
                    {
                        panda$collections$Array* $tmp3454 = (panda$collections$Array*) malloc(40);
                        $tmp3454->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3454->refCount.value = 1;
                        panda$collections$Array$init($tmp3454);
                        children3453 = $tmp3454;
                        panda$collections$Array$add$panda$collections$Array$T(children3453, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3456 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3456->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3456->refCount.value = 1;
                        panda$core$Int64$wrapper* $tmp3458;
                        $tmp3458 = (panda$core$Int64$wrapper*) malloc(24);
                        $tmp3458->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                        $tmp3458->refCount = 1;
                        $tmp3458->value = ((panda$core$Int64) { 52 });
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3456, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3458), ((panda$collections$ListView*) children3453));
                        return $tmp3456;
                    }
                    }
                }
            }
            panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3459, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3460, &$s3461);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3462);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3463 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3463.value) {
            {
                panda$collections$Array* $tmp3465 = (panda$collections$Array*) malloc(40);
                $tmp3465->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3465->refCount.value = 1;
                panda$collections$Array$init($tmp3465);
                children3464 = $tmp3465;
                panda$collections$Array$add$panda$collections$Array$T(children3464, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3467 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3467->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3467->refCount.value = 1;
                panda$core$Int64$wrapper* $tmp3469;
                $tmp3469 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp3469->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp3469->refCount = 1;
                $tmp3469->value = ((panda$core$Int64) { 50 });
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3467, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3469), ((panda$collections$ListView*) children3464));
                return $tmp3467;
            }
            }
            else {
            {
                panda$core$String* $tmp3471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3470, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3471, &$s3472);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3473);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3475 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3476 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3475);
            coerced3474 = $tmp3476;
            if (((panda$core$Bit) { coerced3474 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3478 = (panda$collections$Array*) malloc(40);
            $tmp3478->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3478->refCount.value = 1;
            panda$collections$Array$init($tmp3478);
            children3477 = $tmp3478;
            panda$collections$Array$add$panda$collections$Array$T(children3477, ((panda$core$Object*) coerced3474));
            org$pandalanguage$pandac$IRNode* $tmp3480 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3480->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3480->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp3482;
            $tmp3482 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp3482->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp3482->refCount = 1;
            $tmp3482->value = ((panda$core$Int64) { 49 });
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3480, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3482), ((panda$collections$ListView*) children3477));
            return $tmp3480;
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
    org$pandalanguage$pandac$IRNode* base3486;
    panda$core$Bit $tmp3483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3483.value);
    panda$core$Int64 $tmp3484 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3484, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3485.value);
    panda$core$Object* $tmp3487 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3488 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3487));
    base3486 = $tmp3488;
    if (((panda$core$Bit) { base3486 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3489 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3486, p_p->position);
    return $tmp3489;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3491;
    panda$collections$Array* args3494;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3497;
    org$pandalanguage$pandac$IRNode* arg3512;
    panda$core$Bit $tmp3490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3490.value);
    panda$core$Object* $tmp3492 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3493 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3492));
    m3491 = $tmp3493;
    if (((panda$core$Bit) { m3491 != NULL }).value) {
    {
        panda$collections$Array* $tmp3495 = (panda$collections$Array*) malloc(40);
        $tmp3495->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3495->refCount.value = 1;
        panda$collections$Array$init($tmp3495);
        args3494 = $tmp3495;
        panda$core$Int64 $tmp3498 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3497, ((panda$core$Int64) { 1 }), $tmp3498, ((panda$core$Bit) { false }));
        int64_t $tmp3500 = $tmp3497.min.value;
        panda$core$Int64 i3499 = { $tmp3500 };
        int64_t $tmp3502 = $tmp3497.max.value;
        bool $tmp3503 = $tmp3497.inclusive.value;
        if ($tmp3503) goto $l3510; else goto $l3511;
        $l3510:;
        if ($tmp3500 <= $tmp3502) goto $l3504; else goto $l3506;
        $l3511:;
        if ($tmp3500 < $tmp3502) goto $l3504; else goto $l3506;
        $l3504:;
        {
            panda$core$Object* $tmp3513 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3499);
            org$pandalanguage$pandac$IRNode* $tmp3514 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3513));
            arg3512 = $tmp3514;
            if (((panda$core$Bit) { arg3512 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3494, ((panda$core$Object*) arg3512));
        }
        $l3507:;
        int64_t $tmp3516 = $tmp3502 - i3499.value;
        if ($tmp3503) goto $l3517; else goto $l3518;
        $l3517:;
        if ((uint64_t) $tmp3516 >= 1) goto $l3515; else goto $l3506;
        $l3518:;
        if ((uint64_t) $tmp3516 > 1) goto $l3515; else goto $l3506;
        $l3515:;
        i3499.value += 1;
        goto $l3504;
        $l3506:;
        org$pandalanguage$pandac$IRNode* $tmp3521 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3491, ((panda$collections$ListView*) args3494));
        return $tmp3521;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3522;
    panda$core$String* name3524;
    org$pandalanguage$pandac$ClassDecl* cl3532;
    org$pandalanguage$pandac$SymbolTable* st3551;
    org$pandalanguage$pandac$Symbol* s3553;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3523 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3522 = $tmp3523;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3526 = (($fn3525) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3526, &$s3527);
            panda$core$String* $tmp3529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3528, p_name);
            panda$core$String* $tmp3531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3529, &$s3530);
            name3524 = $tmp3531;
            org$pandalanguage$pandac$ClassDecl* $tmp3533 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3524);
            cl3532 = $tmp3533;
            if (((panda$core$Bit) { cl3532 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3534 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3534->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3534->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3536 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3537 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3532);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3534, ((panda$core$Int64) { 1001 }), p_position, $tmp3536, $tmp3537);
                return $tmp3534;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3538 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3538->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3538->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3540 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3538, ((panda$core$Int64) { 1037 }), p_position, $tmp3540, name3524);
            return $tmp3538;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3541 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3541));
            panda$core$Object* $tmp3542 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3543 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3542)->rawSuper);
            cl3522 = $tmp3543;
        }
        break;
        default:
        {
            panda$core$Bit $tmp3544 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
            panda$core$Bit $tmp3545 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3544);
            if ($tmp3545.value) {
            {
                panda$core$String* $tmp3547 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3546, ((panda$core$Object*) p_base->type));
                panda$core$String* $tmp3549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3547, &$s3548);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3549);
                return NULL;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp3550 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3522 = $tmp3550;
        }
    }
    if (((panda$core$Bit) { cl3522 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3552 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3522);
    st3551 = $tmp3552;
    org$pandalanguage$pandac$Symbol* $tmp3554 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3551, p_name);
    s3553 = $tmp3554;
    if (((panda$core$Bit) { s3553 == NULL }).value) {
    {
        panda$core$String* $tmp3556 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3555, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3556, &$s3557);
        panda$core$String* $tmp3559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3558, p_name);
        panda$core$String* $tmp3561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3559, &$s3560);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3561);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3562 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3553, st3551);
    return $tmp3562;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3566;
    panda$core$Bit $tmp3563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3563.value);
    panda$core$Int64 $tmp3564 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3564, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3565.value);
    panda$core$Object* $tmp3567 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3568 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3567));
    base3566 = $tmp3568;
    if (((panda$core$Bit) { base3566 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3570 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3566->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3569 = $tmp3570.value;
    if (!$tmp3569) goto $l3571;
    panda$core$Bit $tmp3572 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3566->kind, ((panda$core$Int64) { 1024 }));
    $tmp3569 = $tmp3572.value;
    $l3571:;
    panda$core$Bit $tmp3573 = { $tmp3569 };
    if ($tmp3573.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3574 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3566);
        base3566 = $tmp3574;
    }
    }
    if (((panda$core$Bit) { base3566 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3575 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3566, ((panda$core$String*) p_d->payload));
    return $tmp3575;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3577;
    panda$core$Bit $tmp3576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3576.value);
    org$pandalanguage$pandac$Symbol* $tmp3578 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3577 = $tmp3578;
    if (((panda$core$Bit) { s3577 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3579 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3577 = ((org$pandalanguage$pandac$Symbol*) $tmp3579);
    }
    }
    if (((panda$core$Bit) { s3577 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3580 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3577, self->symbolTable);
        return $tmp3580;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3581 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3581->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3581->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3583 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3581, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3583, ((panda$core$String*) p_i->payload));
    return $tmp3581;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3584;
    org$pandalanguage$pandac$Type* $tmp3585 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3586 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3585);
    resolved3584 = $tmp3586;
    if (((panda$core$Bit) { resolved3584 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3587 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3587->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3587->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3589 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3587, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3589, resolved3584);
    return $tmp3587;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3597;
    org$pandalanguage$pandac$IRNode* end3605;
    org$pandalanguage$pandac$IRNode* step3613;
    panda$collections$Array* children3620;
    org$pandalanguage$pandac$Position $tmp3628;
    panda$core$Bit $tmp3591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3590 = $tmp3591.value;
    if ($tmp3590) goto $l3592;
    panda$core$Bit $tmp3593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3590 = $tmp3593.value;
    $l3592:;
    panda$core$Bit $tmp3594 = { $tmp3590 };
    PANDA_ASSERT($tmp3594.value);
    panda$core$Int64 $tmp3595 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3595, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3596.value);
    panda$core$Object* $tmp3598 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3598)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3599.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3600 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3600->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3600->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3602 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3600, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3602);
        start3597 = $tmp3600;
    }
    }
    else {
    {
        panda$core$Object* $tmp3603 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3604 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3603));
        start3597 = $tmp3604;
        if (((panda$core$Bit) { start3597 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3606)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3607.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3608 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3608->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3608->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3610 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3608, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3610);
        end3605 = $tmp3608;
    }
    }
    else {
    {
        panda$core$Object* $tmp3611 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3612 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3611));
        end3605 = $tmp3612;
        if (((panda$core$Bit) { end3605 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3614 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3614)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3615.value) {
    {
        step3613 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3616 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3617 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3616));
        step3613 = $tmp3617;
        if (((panda$core$Bit) { step3613 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(step3613->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3618.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, step3613->position, &$s3619);
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3621 = (panda$collections$Array*) malloc(40);
    $tmp3621->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3621->refCount.value = 1;
    panda$collections$Array$init($tmp3621);
    children3620 = $tmp3621;
    panda$collections$Array$add$panda$collections$Array$T(children3620, ((panda$core$Object*) start3597));
    panda$collections$Array$add$panda$collections$Array$T(children3620, ((panda$core$Object*) end3605));
    if (((panda$core$Bit) { step3613 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3620, ((panda$core$Object*) step3613));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3623 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3623->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3623->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3625 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3625->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3625->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3628);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3625, &$s3627, ((panda$core$Int64) { 17 }), $tmp3628, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    panda$core$Bit$wrapper* $tmp3630;
    $tmp3630 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp3630->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp3630->refCount = 1;
    $tmp3630->value = $tmp3629;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3623, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3625, ((panda$core$Object*) $tmp3630), ((panda$collections$ListView*) children3620));
    return $tmp3623;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3631 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3631->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3631->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3633 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3631, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3633, ((panda$core$String*) p_s->payload));
    return $tmp3631;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3638;
    org$pandalanguage$pandac$ClassDecl* cl3639;
    panda$collections$Array* subtypes3646;
    panda$core$MutableString* name3650;
    panda$core$Char8 $tmp3653;
    panda$core$String* separator3654;
    panda$collections$Iterator* p$Iter3656;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3668;
    panda$collections$Array* pType3673;
    panda$core$String* pName3676;
    panda$core$Char8 $tmp3686;
    panda$core$Bit $tmp3634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3634.value);
    panda$core$Object* $tmp3635 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3636 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3635)->annotations);
    if ($tmp3636.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3637);
        return NULL;
    }
    }
    panda$core$Object* $tmp3640 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3639 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3640);
    ITable* $tmp3641 = ((panda$collections$CollectionView*) cl3639->parameters)->$class->itable;
    while ($tmp3641->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3641 = $tmp3641->next;
    }
    $fn3643 $tmp3642 = $tmp3641->methods[0];
    panda$core$Int64 $tmp3644 = $tmp3642(((panda$collections$CollectionView*) cl3639->parameters));
    panda$core$Bit $tmp3645 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3644, ((panda$core$Int64) { 0 }));
    if ($tmp3645.value) {
    {
        panda$collections$Array* $tmp3647 = (panda$collections$Array*) malloc(40);
        $tmp3647->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3647->refCount.value = 1;
        panda$collections$Array$init($tmp3647);
        subtypes3646 = $tmp3647;
        org$pandalanguage$pandac$Type* $tmp3649 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3639);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3646, ((panda$core$Object*) $tmp3649));
        panda$core$MutableString* $tmp3651 = (panda$core$MutableString*) malloc(48);
        $tmp3651->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3651->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3651, ((org$pandalanguage$pandac$Symbol*) cl3639)->name);
        name3650 = $tmp3651;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3653, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3650, $tmp3653);
        separator3654 = &$s3655;
        {
            ITable* $tmp3657 = ((panda$collections$Iterable*) cl3639->parameters)->$class->itable;
            while ($tmp3657->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3657 = $tmp3657->next;
            }
            $fn3659 $tmp3658 = $tmp3657->methods[0];
            panda$collections$Iterator* $tmp3660 = $tmp3658(((panda$collections$Iterable*) cl3639->parameters));
            p$Iter3656 = $tmp3660;
            $l3661:;
            ITable* $tmp3663 = p$Iter3656->$class->itable;
            while ($tmp3663->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3663 = $tmp3663->next;
            }
            $fn3665 $tmp3664 = $tmp3663->methods[0];
            panda$core$Bit $tmp3666 = $tmp3664(p$Iter3656);
            panda$core$Bit $tmp3667 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3666);
            if (!$tmp3667.value) goto $l3662;
            {
                ITable* $tmp3669 = p$Iter3656->$class->itable;
                while ($tmp3669->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3669 = $tmp3669->next;
                }
                $fn3671 $tmp3670 = $tmp3669->methods[1];
                panda$core$Object* $tmp3672 = $tmp3670(p$Iter3656);
                p3668 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3672);
                panda$collections$Array* $tmp3674 = (panda$collections$Array*) malloc(40);
                $tmp3674->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3674->refCount.value = 1;
                panda$collections$Array$init($tmp3674);
                pType3673 = $tmp3674;
                panda$collections$Array$add$panda$collections$Array$T(pType3673, ((panda$core$Object*) p3668->bound));
                panda$core$String* $tmp3677 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3639)->name);
                panda$core$String* $tmp3679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3677, &$s3678);
                panda$core$String* $tmp3680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3679, ((org$pandalanguage$pandac$Symbol*) p3668)->name);
                panda$core$String* $tmp3682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3680, &$s3681);
                pName3676 = $tmp3682;
                panda$core$MutableString$append$panda$core$String(name3650, separator3654);
                panda$core$MutableString$append$panda$core$String(name3650, pName3676);
                org$pandalanguage$pandac$Type* $tmp3683 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3683->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3683->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3683, p3668);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3646, ((panda$core$Object*) $tmp3683));
                separator3654 = &$s3685;
            }
            goto $l3661;
            $l3662:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3686, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3650, $tmp3686);
        org$pandalanguage$pandac$Type* $tmp3687 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3687->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3687->refCount.value = 1;
        panda$core$String* $tmp3689 = panda$core$MutableString$finish$R$panda$core$String(name3650);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3687, $tmp3689, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3646), ((panda$core$Bit) { true }));
        type3638 = $tmp3687;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3690 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3639);
        type3638 = $tmp3690;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3691 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3691->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3691->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3691, ((panda$core$Int64) { 1025 }), p_s->position, type3638);
    return $tmp3691;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3697;
    panda$core$Bit $tmp3693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3693.value);
    panda$core$Object* $tmp3694 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3695 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3694)->annotations);
    if ($tmp3695.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3696);
        return NULL;
    }
    }
    panda$core$Object* $tmp3698 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3697 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3698);
    PANDA_ASSERT(cl3697->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3699 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3699->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3699->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3699, ((panda$core$Int64) { 1024 }), p_s->position, cl3697->rawSuper);
    return $tmp3699;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3701;
    panda$core$String$Index$nullable index3703;
    org$pandalanguage$pandac$Type* type3710;
    org$pandalanguage$pandac$IRNode* base3712;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3715;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3718;
    org$pandalanguage$pandac$Type* type3722;
    org$pandalanguage$pandac$IRNode* $tmp3702 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3701 = $tmp3702;
    if (((panda$core$Bit) { value3701 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3705 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3704);
    index3703 = $tmp3705;
    panda$core$Bit $tmp3707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3706 = $tmp3707.value;
    if (!$tmp3706) goto $l3708;
    $tmp3706 = ((panda$core$Bit) { index3703.nonnull }).value;
    $l3708:;
    panda$core$Bit $tmp3709 = { $tmp3706 };
    if ($tmp3709.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3711 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3710 = $tmp3711;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3710 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3713 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3713->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3713->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3715, ((panda$core$String$Index$nullable) { .nonnull = false }), index3703, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3716 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3715);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3713, $tmp3716, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3717 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3713);
            base3712 = $tmp3717;
            if (((panda$core$Bit) { base3712 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3719 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3703.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3718, ((panda$core$String$Index$nullable) { $tmp3719, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3720 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3718);
            org$pandalanguage$pandac$IRNode* $tmp3721 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3712, $tmp3720);
            return $tmp3721;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3723 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3722 = $tmp3723;
    if (((panda$core$Bit) { type3722 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3724 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3701, type3722);
    if (((panda$core$Bit) { $tmp3724.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3725 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3701, type3722);
        return $tmp3725;
    }
    }
    panda$core$Bit $tmp3726 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3701, type3722);
    if ($tmp3726.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3727 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3701, p_position, ((panda$core$Bit) { true }), type3722);
        return $tmp3727;
    }
    }
    else {
    {
        panda$core$String* $tmp3729 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3728, ((panda$core$Object*) value3701->type));
        panda$core$String* $tmp3731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3729, &$s3730);
        panda$core$String* $tmp3733 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3732, ((panda$core$Object*) type3722));
        panda$core$String* $tmp3735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3733, &$s3734);
        panda$core$String* $tmp3736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3731, $tmp3735);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3736);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3737.value);
    panda$core$Int64 $tmp3738 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3738, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3739.value);
    panda$core$Object* $tmp3740 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3741 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3742 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3741));
    org$pandalanguage$pandac$IRNode* $tmp3743 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3740), $tmp3742);
    return $tmp3743;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3744.value);
    org$pandalanguage$pandac$IRNode* $tmp3745 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3745->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3745->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3747 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3745, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3747);
    return $tmp3745;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$Pair* cf3748;
    panda$collections$Array* children3754;
    org$pandalanguage$pandac$IRNode* base3757;
    cf3748 = ((org$pandalanguage$pandac$Pair*) p_f->payload);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, ((org$pandalanguage$pandac$ChoiceEntry*) cf3748->first));
    bool $tmp3749 = ((panda$core$Bit) { p_f->children != NULL }).value;
    if (!$tmp3749) goto $l3750;
    panda$core$Int64 $tmp3751 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3751, ((panda$core$Int64) { 1 }));
    $tmp3749 = $tmp3752.value;
    $l3750:;
    panda$core$Bit $tmp3753 = { $tmp3749 };
    PANDA_ASSERT($tmp3753.value);
    panda$collections$Array* $tmp3755 = (panda$collections$Array*) malloc(40);
    $tmp3755->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3755->refCount.value = 1;
    panda$collections$Array$init($tmp3755);
    children3754 = $tmp3755;
    panda$core$Object* $tmp3758 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3759 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3758));
    base3757 = $tmp3759;
    if (((panda$core$Bit) { base3757 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3754, ((panda$core$Object*) base3757));
    org$pandalanguage$pandac$IRNode* $tmp3760 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3760->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3760->refCount.value = 1;
    panda$core$Object* $tmp3762 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$ChoiceEntry*) cf3748->first)->fields, ((panda$core$Int64$wrapper*) cf3748->second)->value);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3760, ((panda$core$Int64) { 1047 }), p_f->position, ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp3762)->second), ((panda$core$Object*) cf3748), ((panda$collections$ListView*) children3754));
    return $tmp3760;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3767;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3763 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3763;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3764 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3764->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3764->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3766 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3764, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3766, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3764;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3768 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3767 = $tmp3768;
            bool $tmp3769 = ((panda$core$Bit) { result3767 != NULL }).value;
            if (!$tmp3769) goto $l3770;
            org$pandalanguage$pandac$Type* $tmp3771 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3772 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3767->type, $tmp3771);
            $tmp3769 = $tmp3772.value;
            $l3770:;
            panda$core$Bit $tmp3773 = { $tmp3769 };
            if ($tmp3773.value) {
            {
                panda$core$Bit $tmp3774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3767->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3774.value);
                panda$core$String* $tmp3775 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3767->payload)->value);
                panda$core$String* $tmp3777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3775, &$s3776);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3767->position, $tmp3777);
                return NULL;
            }
            }
            return result3767;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3778 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3778;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3779 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3779;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3780 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3780->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3780->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3782 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3780, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3782, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3780;
        }
        break;
        case 157:
        {
            org$pandalanguage$pandac$IRNode* $tmp3783 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3783->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3783->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3785 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(((panda$core$Real64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3783, ((panda$core$Int64) { 1045 }), p_e->position, $tmp3785, ((panda$core$Real64$wrapper*) p_e->payload)->value);
            return $tmp3783;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3786 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3786;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3787 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3787;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3788 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3788;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3789 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3789;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3790 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3790;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3791 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3791;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3792 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3792;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3793 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3793;
        }
        break;
        case 158:
        {
            org$pandalanguage$pandac$IRNode* $tmp3794 = org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3794;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3796;
    panda$collections$Array* result3799;
    panda$collections$Iterator* stmt$Iter3802;
    org$pandalanguage$pandac$ASTNode* stmt3814;
    org$pandalanguage$pandac$IRNode* compiled3819;
    panda$core$Bit $tmp3795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3795.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3797 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3797->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3797->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3797, self->symbolTable);
    symbols3796 = $tmp3797;
    self->symbolTable = symbols3796;
    panda$collections$Array* $tmp3800 = (panda$collections$Array*) malloc(40);
    $tmp3800->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3800->refCount.value = 1;
    panda$collections$Array$init($tmp3800);
    result3799 = $tmp3800;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3803 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3803->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3803 = $tmp3803->next;
            }
            $fn3805 $tmp3804 = $tmp3803->methods[0];
            panda$collections$Iterator* $tmp3806 = $tmp3804(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3802 = $tmp3806;
            $l3807:;
            ITable* $tmp3809 = stmt$Iter3802->$class->itable;
            while ($tmp3809->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3809 = $tmp3809->next;
            }
            $fn3811 $tmp3810 = $tmp3809->methods[0];
            panda$core$Bit $tmp3812 = $tmp3810(stmt$Iter3802);
            panda$core$Bit $tmp3813 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3812);
            if (!$tmp3813.value) goto $l3808;
            {
                ITable* $tmp3815 = stmt$Iter3802->$class->itable;
                while ($tmp3815->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3815 = $tmp3815->next;
                }
                $fn3817 $tmp3816 = $tmp3815->methods[1];
                panda$core$Object* $tmp3818 = $tmp3816(stmt$Iter3802);
                stmt3814 = ((org$pandalanguage$pandac$ASTNode*) $tmp3818);
                org$pandalanguage$pandac$IRNode* $tmp3820 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3814);
                compiled3819 = $tmp3820;
                if (((panda$core$Bit) { compiled3819 == NULL }).value) {
                {
                    panda$core$Object* $tmp3821 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3796->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3821);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3822 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3819->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3822.value);
                panda$collections$Array$add$panda$collections$Array$T(result3799, ((panda$core$Object*) compiled3819));
            }
            goto $l3807;
            $l3808:;
        }
    }
    }
    panda$core$Object* $tmp3823 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3796->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3823);
    org$pandalanguage$pandac$IRNode* $tmp3824 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3824->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3824->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3824, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3799));
    return $tmp3824;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3834;
    org$pandalanguage$pandac$IRNode* ifTrue3839;
    panda$collections$Array* children3842;
    org$pandalanguage$pandac$IRNode* ifFalse3847;
    panda$core$Bit $tmp3826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3826.value);
    panda$core$Int64 $tmp3828 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3828, ((panda$core$Int64) { 2 }));
    bool $tmp3827 = $tmp3829.value;
    if ($tmp3827) goto $l3830;
    panda$core$Int64 $tmp3831 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3831, ((panda$core$Int64) { 3 }));
    $tmp3827 = $tmp3832.value;
    $l3830:;
    panda$core$Bit $tmp3833 = { $tmp3827 };
    PANDA_ASSERT($tmp3833.value);
    panda$core$Object* $tmp3835 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3836 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3835));
    org$pandalanguage$pandac$Type* $tmp3837 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3838 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3836, $tmp3837);
    test3834 = $tmp3838;
    if (((panda$core$Bit) { test3834 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3840 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3841 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3840));
    ifTrue3839 = $tmp3841;
    if (((panda$core$Bit) { ifTrue3839 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3843 = (panda$collections$Array*) malloc(40);
    $tmp3843->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3843->refCount.value = 1;
    panda$collections$Array$init($tmp3843);
    children3842 = $tmp3843;
    panda$collections$Array$add$panda$collections$Array$T(children3842, ((panda$core$Object*) test3834));
    panda$collections$Array$add$panda$collections$Array$T(children3842, ((panda$core$Object*) ifTrue3839));
    panda$core$Int64 $tmp3845 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3845, ((panda$core$Int64) { 3 }));
    if ($tmp3846.value) {
    {
        panda$core$Object* $tmp3848 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3849 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3848));
        ifFalse3847 = $tmp3849;
        if (((panda$core$Bit) { ifFalse3847 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3842, ((panda$core$Object*) ifFalse3847));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3850 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3850->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3850->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3850, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3842));
    return $tmp3850;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* type13856;
    org$pandalanguage$pandac$Type* type23859;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3870;
    panda$core$Bit $tmp3852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3852.value) {
    {
        panda$core$Object* $tmp3853 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3854 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$Type*) $tmp3853));
        return $tmp3854;
    }
    }
    panda$core$Bit $tmp3855 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_type);
    if ($tmp3855.value) {
    {
        panda$core$Object* $tmp3857 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp3858 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3857));
        type13856 = $tmp3858;
        panda$core$Object* $tmp3860 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 2 }));
        type23859 = ((org$pandalanguage$pandac$Type*) $tmp3860);
        panda$core$Bit $tmp3861 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(type13856, type23859);
        if ($tmp3861.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$Bit $tmp3864 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(type13856);
        bool $tmp3863 = $tmp3864.value;
        if (!$tmp3863) goto $l3865;
        panda$core$Bit $tmp3867 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type23859)->name, &$s3866);
        $tmp3863 = $tmp3867.value;
        $l3865:;
        panda$core$Bit $tmp3868 = { $tmp3863 };
        bool $tmp3862 = $tmp3868.value;
        if (!$tmp3862) goto $l3869;
        panda$core$Int64 $tmp3872 = panda$core$String$length$R$panda$core$Int64(&$s3871);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3870, ((panda$core$Int64$nullable) { $tmp3872, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp3873 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) type23859)->name, $tmp3870);
        panda$core$Bit $tmp3874 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type13856)->name, $tmp3873);
        $tmp3862 = $tmp3874.value;
        $l3869:;
        panda$core$Bit $tmp3875 = { $tmp3862 };
        if ($tmp3875.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$String* $tmp3877 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3876, ((panda$core$Object*) p_type));
        panda$core$String* $tmp3879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3877, &$s3878);
        panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3879, &$s3880);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3881);
        return ((panda$core$Bit) { false });
    }
    }
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3882;
    org$pandalanguage$pandac$IRNode* list3883;
    org$pandalanguage$pandac$Type* t3895;
    org$pandalanguage$pandac$Type* listType3928;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3960;
    org$pandalanguage$pandac$IRNode* body3964;
    panda$collections$Array* children3966;
    panda$core$Bit $tmp3886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3885 = $tmp3886.value;
    if (!$tmp3885) goto $l3887;
    $tmp3885 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3887:;
    panda$core$Bit $tmp3888 = { $tmp3885 };
    bool $tmp3884 = $tmp3888.value;
    if (!$tmp3884) goto $l3889;
    panda$core$Int64 $tmp3890 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3891 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3890, ((panda$core$Int64) { 0 }));
    $tmp3884 = $tmp3891.value;
    $l3889:;
    panda$core$Bit $tmp3892 = { $tmp3884 };
    if ($tmp3892.value) {
    {
        panda$core$Int64 $tmp3893 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3893, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3894.value);
        panda$core$Object* $tmp3896 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3897 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3896));
        org$pandalanguage$pandac$Type* $tmp3898 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3897);
        t3895 = $tmp3898;
        panda$core$Bit $tmp3899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t3895->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3899.value) {
        {
            panda$core$String* $tmp3901 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3900, ((panda$core$Object*) t3895));
            panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3901, &$s3902);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3903);
            return NULL;
        }
        }
        panda$core$Bit $tmp3904 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(t3895);
        panda$core$Bit $tmp3905 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3904);
        if ($tmp3905.value) {
        {
            panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3906, ((panda$core$Object*) t3895));
            panda$core$String* $tmp3909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3907, &$s3908);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3909);
            return NULL;
        }
        }
        panda$core$Bit $tmp3910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3910.value) {
        {
            panda$core$Int64 $tmp3911 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3911, ((panda$core$Int64) { 2 }));
            if ($tmp3912.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3913 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3895);
                org$pandalanguage$pandac$IRNode* $tmp3914 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3913);
                list3883 = $tmp3914;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3915 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3915, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3916.value);
                org$pandalanguage$pandac$Type* $tmp3917 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3895);
                org$pandalanguage$pandac$IRNode* $tmp3918 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3917);
                list3883 = $tmp3918;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3919 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3919.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3920 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3895);
            org$pandalanguage$pandac$IRNode* $tmp3921 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3920);
            list3883 = $tmp3921;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3922 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3895);
        panda$core$Int64$nullable $tmp3923 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3922);
        if (((panda$core$Bit) { $tmp3923.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3924 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3895);
            org$pandalanguage$pandac$IRNode* $tmp3925 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3924);
            list3883 = $tmp3925;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3926 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3895);
            org$pandalanguage$pandac$IRNode* $tmp3927 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3926);
            list3883 = $tmp3927;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3929 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_rawList);
        listType3928 = $tmp3929;
        panda$core$Bit $tmp3931 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3928);
        bool $tmp3930 = $tmp3931.value;
        if ($tmp3930) goto $l3932;
        panda$core$Bit $tmp3933 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(listType3928);
        $tmp3930 = $tmp3933.value;
        $l3932:;
        panda$core$Bit $tmp3934 = { $tmp3930 };
        PANDA_ASSERT($tmp3934.value);
        panda$core$Object* $tmp3935 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3928->subtypes, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp3936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3935)->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3936.value) {
        {
            panda$core$Bit $tmp3937 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3928);
            if ($tmp3937.value) {
            {
                panda$core$Object* $tmp3938 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3928->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3939 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3938));
                org$pandalanguage$pandac$Type* $tmp3940 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3939);
                listType3928 = $tmp3940;
            }
            }
            else {
            {
                panda$core$Object* $tmp3941 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3928->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3942 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3941));
                org$pandalanguage$pandac$Type* $tmp3943 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3942);
                listType3928 = $tmp3943;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3944 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, listType3928);
        list3883 = $tmp3944;
    }
    }
    if (((panda$core$Bit) { list3883 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3945 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, list3883->position, list3883->type);
    panda$core$Bit $tmp3946 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3945);
    if ($tmp3946.value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3883->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3947.value) {
    {
        panda$core$Object* $tmp3948 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3883->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3948)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3949.value);
        panda$core$Object* $tmp3950 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3883->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3951 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3950)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3882 = ((org$pandalanguage$pandac$Type*) $tmp3951);
    }
    }
    else {
    {
        panda$core$Bit $tmp3952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3883->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3952.value);
        panda$core$Object* $tmp3953 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3883->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3882 = ((org$pandalanguage$pandac$Type*) $tmp3953);
    }
    }
    panda$core$Bit $tmp3954 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(elementType3882);
    panda$core$Bit $tmp3955 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3954);
    if ($tmp3955.value) {
    {
        panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3956, ((panda$core$Object*) list3883->type));
        panda$core$String* $tmp3959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, &$s3958);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3883->position, $tmp3959);
    }
    }
    org$pandalanguage$pandac$Variable$Kind* $tmp3961 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp3961->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp3961->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3961, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3963 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp3961, NULL, elementType3882);
    target3960 = $tmp3963;
    if (((panda$core$Bit) { target3960 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3960->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3965 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3964 = $tmp3965;
    if (((panda$core$Bit) { body3964 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3967 = (panda$collections$Array*) malloc(40);
    $tmp3967->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3967->refCount.value = 1;
    panda$collections$Array$init($tmp3967);
    children3966 = $tmp3967;
    panda$collections$Array$add$panda$collections$Array$T(children3966, ((panda$core$Object*) target3960->target));
    panda$collections$Array$add$panda$collections$Array$T(children3966, ((panda$core$Object*) list3883));
    panda$collections$Array$add$panda$collections$Array$T(children3966, ((panda$core$Object*) body3964));
    org$pandalanguage$pandac$IRNode* $tmp3969 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3969->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3969->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3969, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3966));
    return $tmp3969;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3978;
    org$pandalanguage$pandac$Variable* targetVar3984;
    panda$collections$Array* subtypes3985;
    org$pandalanguage$pandac$Type* iterType3989;
    org$pandalanguage$pandac$Variable* iter4000;
    panda$collections$Array* statements4007;
    panda$collections$Array* declChildren4010;
    panda$collections$Array* varChildren4015;
    panda$collections$Array* whileChildren4022;
    org$pandalanguage$pandac$IRNode* done4025;
    org$pandalanguage$pandac$IRNode* notCall4032;
    panda$collections$Array* valueDeclChildren4037;
    org$pandalanguage$pandac$IRNode* next4042;
    panda$collections$Array* valueVarChildren4049;
    org$pandalanguage$pandac$IRNode* block4054;
    panda$collections$Array* blockChildren4056;
    panda$core$Bit $tmp3972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3971 = $tmp3972.value;
    if (!$tmp3971) goto $l3973;
    panda$core$Object* $tmp3974 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3975 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3976 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3974), $tmp3975);
    $tmp3971 = $tmp3976.value;
    $l3973:;
    panda$core$Bit $tmp3977 = { $tmp3971 };
    PANDA_ASSERT($tmp3977.value);
    org$pandalanguage$pandac$Variable$Kind* $tmp3979 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp3979->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp3979->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3979, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp3981 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3982 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp3979, NULL, ((org$pandalanguage$pandac$Type*) $tmp3981));
    target3978 = $tmp3982;
    if (((panda$core$Bit) { target3978 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3978->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3983.value);
    targetVar3984 = ((org$pandalanguage$pandac$Variable*) target3978->target->payload);
    panda$collections$Array* $tmp3986 = (panda$collections$Array*) malloc(40);
    $tmp3986->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3986->refCount.value = 1;
    panda$collections$Array$init($tmp3986);
    subtypes3985 = $tmp3986;
    org$pandalanguage$pandac$Type* $tmp3988 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3985, ((panda$core$Object*) $tmp3988));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3985, ((panda$core$Object*) target3978->target->type));
    org$pandalanguage$pandac$Type* $tmp3990 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3990->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3990->refCount.value = 1;
    panda$core$Object* $tmp3992 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3985, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3993 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3992));
    panda$core$String* $tmp3995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3993, &$s3994);
    panda$core$Object* $tmp3996 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3985, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3997 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3995, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3996)));
    panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3997, &$s3998);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3990, $tmp3999, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3985), ((panda$core$Bit) { true }));
    iterType3989 = $tmp3990;
    org$pandalanguage$pandac$Variable* $tmp4001 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4001->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4001->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind* $tmp4003 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp4003->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp4003->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4003, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3984)->name, &$s4005);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4001, p_iterator->position, $tmp4003, $tmp4006, iterType3989);
    iter4000 = $tmp4001;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter4000));
    panda$collections$Array* $tmp4008 = (panda$collections$Array*) malloc(40);
    $tmp4008->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4008->refCount.value = 1;
    panda$collections$Array$init($tmp4008);
    statements4007 = $tmp4008;
    panda$collections$Array* $tmp4011 = (panda$collections$Array*) malloc(40);
    $tmp4011->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4011->refCount.value = 1;
    panda$collections$Array$init($tmp4011);
    declChildren4010 = $tmp4011;
    org$pandalanguage$pandac$IRNode* $tmp4013 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4013->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4013->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4013, ((panda$core$Int64) { 1016 }), p_iterator->position, iter4000->type, iter4000);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4010, ((panda$core$Object*) $tmp4013));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4010, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp4016 = (panda$collections$Array*) malloc(40);
    $tmp4016->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4016->refCount.value = 1;
    panda$collections$Array$init($tmp4016);
    varChildren4015 = $tmp4016;
    org$pandalanguage$pandac$IRNode* $tmp4018 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4018->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4018->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4018, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter4000)->position, ((panda$collections$ListView*) declChildren4010));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4015, ((panda$core$Object*) $tmp4018));
    org$pandalanguage$pandac$IRNode* $tmp4020 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4020->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4020->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4020, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter4000)->position, ((panda$collections$ListView*) varChildren4015));
    panda$collections$Array$add$panda$collections$Array$T(statements4007, ((panda$core$Object*) $tmp4020));
    panda$collections$Array* $tmp4023 = (panda$collections$Array*) malloc(40);
    $tmp4023->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4023->refCount.value = 1;
    panda$collections$Array$init($tmp4023);
    whileChildren4022 = $tmp4023;
    org$pandalanguage$pandac$IRNode* $tmp4026 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4026->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4026->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4026, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter4000)->position, iter4000->type, iter4000);
    panda$collections$Array* $tmp4029 = (panda$collections$Array*) malloc(40);
    $tmp4029->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4029->refCount.value = 1;
    panda$collections$Array$init($tmp4029);
    org$pandalanguage$pandac$IRNode* $tmp4031 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4026, &$s4028, ((panda$collections$ListView*) $tmp4029), NULL);
    done4025 = $tmp4031;
    if (((panda$core$Bit) { done4025 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4034 = (panda$collections$Array*) malloc(40);
    $tmp4034->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4034->refCount.value = 1;
    panda$collections$Array$init($tmp4034);
    org$pandalanguage$pandac$IRNode* $tmp4036 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done4025, &$s4033, ((panda$collections$ListView*) $tmp4034), NULL);
    notCall4032 = $tmp4036;
    if (((panda$core$Bit) { notCall4032 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren4022, ((panda$core$Object*) notCall4032));
    panda$collections$Array* $tmp4038 = (panda$collections$Array*) malloc(40);
    $tmp4038->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4038->refCount.value = 1;
    panda$collections$Array$init($tmp4038);
    valueDeclChildren4037 = $tmp4038;
    org$pandalanguage$pandac$IRNode* $tmp4040 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4040->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4040->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4040, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3984->type, targetVar3984);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren4037, ((panda$core$Object*) $tmp4040));
    org$pandalanguage$pandac$IRNode* $tmp4043 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4043->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4043->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4043, ((panda$core$Int64) { 1016 }), p_iterator->position, iter4000->type, iter4000);
    panda$collections$Array* $tmp4046 = (panda$collections$Array*) malloc(40);
    $tmp4046->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4046->refCount.value = 1;
    panda$collections$Array$init($tmp4046);
    org$pandalanguage$pandac$IRNode* $tmp4048 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4043, &$s4045, ((panda$collections$ListView*) $tmp4046), NULL);
    next4042 = $tmp4048;
    PANDA_ASSERT(((panda$core$Bit) { next4042 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren4037, ((panda$core$Object*) next4042));
    panda$collections$Array* $tmp4050 = (panda$collections$Array*) malloc(40);
    $tmp4050->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4050->refCount.value = 1;
    panda$collections$Array$init($tmp4050);
    valueVarChildren4049 = $tmp4050;
    org$pandalanguage$pandac$IRNode* $tmp4052 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4052->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4052->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4052, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren4037));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren4049, ((panda$core$Object*) $tmp4052));
    org$pandalanguage$pandac$IRNode* $tmp4055 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block4054 = $tmp4055;
    if (((panda$core$Bit) { block4054 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4057 = (panda$collections$Array*) malloc(40);
    $tmp4057->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4057->refCount.value = 1;
    panda$collections$Array$init($tmp4057);
    blockChildren4056 = $tmp4057;
    org$pandalanguage$pandac$IRNode* $tmp4059 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4059->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4059->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4059, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren4049));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren4056, ((panda$core$Object*) $tmp4059));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren4056, ((panda$collections$CollectionView*) block4054->children));
    org$pandalanguage$pandac$IRNode* $tmp4061 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4061->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4061->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4061, ((panda$core$Int64) { 1000 }), block4054->position, ((panda$collections$ListView*) blockChildren4056));
    block4054 = $tmp4061;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren4022, ((panda$core$Object*) block4054));
    org$pandalanguage$pandac$IRNode* $tmp4063 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4063->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4063->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4063, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren4022));
    panda$collections$Array$add$panda$collections$Array$T(statements4007, ((panda$core$Object*) $tmp4063));
    org$pandalanguage$pandac$IRNode* $tmp4065 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4065->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4065->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4065, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements4007));
    return $tmp4065;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list4070;
    org$pandalanguage$pandac$SymbolTable* symbols4073;
    org$pandalanguage$pandac$IRNode* result4076;
    panda$core$Bit found4090;
    panda$collections$Iterator* intf$Iter4091;
    org$pandalanguage$pandac$Type* intf4104;
    org$pandalanguage$pandac$IRNode* iterator4116;
    org$pandalanguage$pandac$IRNode* iterable4128;
    org$pandalanguage$pandac$IRNode* iterator4130;
    panda$core$Bit $tmp4067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp4067.value);
    panda$core$Int64 $tmp4068 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4068, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4069.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp4071 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4072 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4071));
    list4070 = $tmp4072;
    if (((panda$core$Bit) { list4070 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4074 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4074->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4074->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4074, self->symbolTable);
    symbols4073 = $tmp4074;
    self->symbolTable = symbols4073;
    panda$core$Bit $tmp4079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list4070->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp4078 = $tmp4079.value;
    if ($tmp4078) goto $l4080;
    panda$core$Bit $tmp4081 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list4070->type);
    $tmp4078 = $tmp4081.value;
    $l4080:;
    panda$core$Bit $tmp4082 = { $tmp4078 };
    bool $tmp4077 = $tmp4082.value;
    if ($tmp4077) goto $l4083;
    panda$core$Bit $tmp4084 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list4070->type);
    $tmp4077 = $tmp4084.value;
    $l4083:;
    panda$core$Bit $tmp4085 = { $tmp4077 };
    if ($tmp4085.value) {
    {
        panda$core$Object* $tmp4086 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4087 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp4088 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4086), list4070, ((org$pandalanguage$pandac$ASTNode*) $tmp4087));
        result4076 = $tmp4088;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp4089 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list4070);
        list4070 = $tmp4089;
        if (((panda$core$Bit) { list4070 == NULL }).value) {
        {
            return NULL;
        }
        }
        found4090 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp4092 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list4070->type);
            ITable* $tmp4093 = ((panda$collections$Iterable*) $tmp4092)->$class->itable;
            while ($tmp4093->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4093 = $tmp4093->next;
            }
            $fn4095 $tmp4094 = $tmp4093->methods[0];
            panda$collections$Iterator* $tmp4096 = $tmp4094(((panda$collections$Iterable*) $tmp4092));
            intf$Iter4091 = $tmp4096;
            $l4097:;
            ITable* $tmp4099 = intf$Iter4091->$class->itable;
            while ($tmp4099->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4099 = $tmp4099->next;
            }
            $fn4101 $tmp4100 = $tmp4099->methods[0];
            panda$core$Bit $tmp4102 = $tmp4100(intf$Iter4091);
            panda$core$Bit $tmp4103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4102);
            if (!$tmp4103.value) goto $l4098;
            {
                ITable* $tmp4105 = intf$Iter4091->$class->itable;
                while ($tmp4105->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4105 = $tmp4105->next;
                }
                $fn4107 $tmp4106 = $tmp4105->methods[1];
                panda$core$Object* $tmp4108 = $tmp4106(intf$Iter4091);
                intf4104 = ((org$pandalanguage$pandac$Type*) $tmp4108);
                panda$core$Bit $tmp4110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4104->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4109 = $tmp4110.value;
                if (!$tmp4109) goto $l4111;
                panda$core$Object* $tmp4112 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4104->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4113 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4114 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4112), $tmp4113);
                $tmp4109 = $tmp4114.value;
                $l4111:;
                panda$core$Bit $tmp4115 = { $tmp4109 };
                if ($tmp4115.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4117 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4070, intf4104);
                    iterator4116 = $tmp4117;
                    panda$core$Object* $tmp4118 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp4119 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp4120 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4118), iterator4116, ((org$pandalanguage$pandac$ASTNode*) $tmp4119));
                    result4076 = $tmp4120;
                    found4090 = ((panda$core$Bit) { true });
                    goto $l4098;
                }
                }
                panda$core$Bit $tmp4122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4104->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4121 = $tmp4122.value;
                if (!$tmp4121) goto $l4123;
                panda$core$Object* $tmp4124 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4104->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4125 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4126 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4124), $tmp4125);
                $tmp4121 = $tmp4126.value;
                $l4123:;
                panda$core$Bit $tmp4127 = { $tmp4121 };
                if ($tmp4127.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4129 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4070, intf4104);
                    iterable4128 = $tmp4129;
                    panda$collections$Array* $tmp4132 = (panda$collections$Array*) malloc(40);
                    $tmp4132->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4132->refCount.value = 1;
                    panda$collections$Array$init($tmp4132);
                    org$pandalanguage$pandac$IRNode* $tmp4134 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable4128, &$s4131, ((panda$collections$ListView*) $tmp4132));
                    iterator4130 = $tmp4134;
                    panda$core$Object* $tmp4135 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp4136 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp4137 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4135), iterator4130, ((org$pandalanguage$pandac$ASTNode*) $tmp4136));
                    result4076 = $tmp4137;
                    found4090 = ((panda$core$Bit) { true });
                    goto $l4098;
                }
                }
            }
            goto $l4097;
            $l4098:;
        }
        panda$core$Bit $tmp4138 = panda$core$Bit$$NOT$R$panda$core$Bit(found4090);
        if ($tmp4138.value) {
        {
            panda$core$String* $tmp4140 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4139, ((panda$core$Object*) list4070->type));
            panda$core$String* $tmp4142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4140, &$s4141);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list4070->position, $tmp4142);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp4143 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols4073->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4143);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result4076;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4147;
    org$pandalanguage$pandac$IRNode* stmt4152;
    panda$collections$Array* children4155;
    panda$core$Bit $tmp4144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp4144.value);
    panda$core$Int64 $tmp4145 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4145, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4146.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp4148 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4149 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4148));
    org$pandalanguage$pandac$Type* $tmp4150 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4151 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4149, $tmp4150);
    test4147 = $tmp4151;
    if (((panda$core$Bit) { test4147 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp4153 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4154 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4153));
    stmt4152 = $tmp4154;
    if (((panda$core$Bit) { stmt4152 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4156 = (panda$collections$Array*) malloc(40);
    $tmp4156->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4156->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4156, ((panda$core$Int64) { 2 }));
    children4155 = $tmp4156;
    panda$collections$Array$add$panda$collections$Array$T(children4155, ((panda$core$Object*) test4147));
    panda$collections$Array$add$panda$collections$Array$T(children4155, ((panda$core$Object*) stmt4152));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4158 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4158->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4158->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4158, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children4155));
    return $tmp4158;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt4163;
    org$pandalanguage$pandac$IRNode* test4166;
    panda$collections$Array* children4171;
    panda$core$Bit $tmp4160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp4160.value);
    panda$core$Int64 $tmp4161 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4161, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4162.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp4164 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4165 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4164));
    stmt4163 = $tmp4165;
    if (((panda$core$Bit) { stmt4163 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp4167 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4168 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4167));
    org$pandalanguage$pandac$Type* $tmp4169 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4170 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4168, $tmp4169);
    test4166 = $tmp4170;
    if (((panda$core$Bit) { test4166 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4172 = (panda$collections$Array*) malloc(40);
    $tmp4172->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4172->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4172, ((panda$core$Int64) { 2 }));
    children4171 = $tmp4172;
    panda$collections$Array$add$panda$collections$Array$T(children4171, ((panda$core$Object*) stmt4163));
    panda$collections$Array$add$panda$collections$Array$T(children4171, ((panda$core$Object*) test4166));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4174 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4174->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4174->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4174, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children4171));
    return $tmp4174;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt4179;
    panda$collections$Array* children4182;
    panda$core$Bit $tmp4176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp4176.value);
    panda$core$Int64 $tmp4177 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp4178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4177, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4178.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp4180 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4181 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4180));
    stmt4179 = $tmp4181;
    if (((panda$core$Bit) { stmt4179 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4183 = (panda$collections$Array*) malloc(40);
    $tmp4183->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4183->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4183, ((panda$core$Int64) { 1 }));
    children4182 = $tmp4183;
    panda$collections$Array$add$panda$collections$Array$T(children4182, ((panda$core$Object*) stmt4179));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4185 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4185->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4185->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4185, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children4182));
    return $tmp4185;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, org$pandalanguage$pandac$Variable$Kind* p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value4187;
    org$pandalanguage$pandac$Type* type4191;
    org$pandalanguage$pandac$Variable* v4207;
    value4187 = p_rawValue;
    bool $tmp4188 = ((panda$core$Bit) { value4187 == NULL }).value;
    if ($tmp4188) goto $l4189;
    $tmp4188 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l4189:;
    panda$core$Bit $tmp4190 = { $tmp4188 };
    PANDA_ASSERT($tmp4190.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp4192 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp4192) goto $l4193;
            panda$core$Int64 $tmp4194 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp4195 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4194, ((panda$core$Int64) { 0 }));
            $tmp4192 = $tmp4195.value;
            $l4193:;
            panda$core$Bit $tmp4196 = { $tmp4192 };
            if ($tmp4196.value) {
            {
                panda$core$Int64 $tmp4197 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp4198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4197, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp4198.value);
                panda$core$Object* $tmp4199 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4200 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp4199));
                org$pandalanguage$pandac$Type* $tmp4201 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp4200);
                type4191 = $tmp4201;
            }
            }
            else {
            if (((panda$core$Bit) { value4187 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4202 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value4187);
                value4187 = $tmp4202;
                if (((panda$core$Bit) { value4187 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp4203 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value4187);
                type4191 = $tmp4203;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type4191 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s4204);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value4187 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4205 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value4187, type4191);
                value4187 = $tmp4205;
                if (((panda$core$Bit) { value4187 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp4206 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value4187->type, type4191);
                PANDA_ASSERT($tmp4206.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp4208 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4208->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4208->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4208, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type4191);
            v4207 = $tmp4208;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v4207));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4210 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp4210->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp4210->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4212 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4212->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4212->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4212, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v4207)->position, v4207->type, v4207);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4210, $tmp4212, value4187);
            return $tmp4210;
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
    org$pandalanguage$pandac$IRNode* value4222;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4227;
    panda$collections$Array* children4230;
    org$pandalanguage$pandac$Variable* v4234;
    panda$core$Bit $tmp4214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp4214.value);
    panda$core$Int64 $tmp4216 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4216, ((panda$core$Int64) { 1 }));
    bool $tmp4215 = $tmp4217.value;
    if ($tmp4215) goto $l4218;
    panda$core$Int64 $tmp4219 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4219, ((panda$core$Int64) { 2 }));
    $tmp4215 = $tmp4220.value;
    $l4218:;
    panda$core$Bit $tmp4221 = { $tmp4215 };
    PANDA_ASSERT($tmp4221.value);
    panda$core$Int64 $tmp4223 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4223, ((panda$core$Int64) { 2 }));
    if ($tmp4224.value) {
    {
        panda$core$Object* $tmp4225 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4226 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4225));
        value4222 = $tmp4226;
        if (((panda$core$Bit) { value4222 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value4222 = NULL;
    }
    }
    panda$core$Object* $tmp4228 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4229 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4228), p_varKind, value4222, NULL);
    target4227 = $tmp4229;
    if (((panda$core$Bit) { target4227 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4231 = (panda$collections$Array*) malloc(40);
    $tmp4231->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4231->refCount.value = 1;
    panda$collections$Array$init($tmp4231);
    children4230 = $tmp4231;
    panda$collections$Array$add$panda$collections$Array$T(children4230, ((panda$core$Object*) target4227->target));
    if (((panda$core$Bit) { target4227->value != NULL }).value) {
    {
        panda$core$Bit $tmp4233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4227->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp4233.value);
        v4234 = ((org$pandalanguage$pandac$Variable*) target4227->target->payload);
        v4234->initialValue = target4227->value;
        panda$collections$Array$add$panda$collections$Array$T(children4230, ((panda$core$Object*) target4227->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4235 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4235->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4235->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4235, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children4230));
    return $tmp4235;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found4238;
    panda$collections$Iterator* label$Iter4239;
    panda$core$String* label4251;
    panda$core$Bit $tmp4237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp4237.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found4238 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4240 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4240->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4240 = $tmp4240->next;
            }
            $fn4242 $tmp4241 = $tmp4240->methods[0];
            panda$collections$Iterator* $tmp4243 = $tmp4241(((panda$collections$Iterable*) self->loops));
            label$Iter4239 = $tmp4243;
            $l4244:;
            ITable* $tmp4246 = label$Iter4239->$class->itable;
            while ($tmp4246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4246 = $tmp4246->next;
            }
            $fn4248 $tmp4247 = $tmp4246->methods[0];
            panda$core$Bit $tmp4249 = $tmp4247(label$Iter4239);
            panda$core$Bit $tmp4250 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4249);
            if (!$tmp4250.value) goto $l4245;
            {
                ITable* $tmp4252 = label$Iter4239->$class->itable;
                while ($tmp4252->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4252 = $tmp4252->next;
                }
                $fn4254 $tmp4253 = $tmp4252->methods[1];
                panda$core$Object* $tmp4255 = $tmp4253(label$Iter4239);
                label4251 = ((panda$core$String*) $tmp4255);
                bool $tmp4256 = ((panda$core$Bit) { label4251 != NULL }).value;
                if (!$tmp4256) goto $l4257;
                panda$core$Bit $tmp4261;
                if (((panda$core$Bit) { label4251 != NULL }).value) goto $l4258; else goto $l4259;
                $l4258:;
                panda$core$Bit $tmp4262 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4251, ((panda$core$String*) p_b->payload));
                $tmp4261 = $tmp4262;
                goto $l4260;
                $l4259:;
                $tmp4261 = ((panda$core$Bit) { false });
                goto $l4260;
                $l4260:;
                $tmp4256 = $tmp4261.value;
                $l4257:;
                panda$core$Bit $tmp4263 = { $tmp4256 };
                if ($tmp4263.value) {
                {
                    found4238 = ((panda$core$Bit) { true });
                    goto $l4245;
                }
                }
            }
            goto $l4244;
            $l4245:;
        }
        panda$core$Bit $tmp4264 = panda$core$Bit$$NOT$R$panda$core$Bit(found4238);
        if ($tmp4264.value) {
        {
            panda$core$String* $tmp4266 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4265, p_b->payload);
            panda$core$String* $tmp4268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4266, &$s4267);
            panda$core$String* $tmp4270 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4269, p_b->payload);
            panda$core$String* $tmp4272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4270, &$s4271);
            panda$core$String* $tmp4273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4268, $tmp4272);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp4273);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4274 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4274, ((panda$core$Int64) { 0 }));
    if ($tmp4275.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s4276);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4277 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4277->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4277->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4277, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp4277;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found4280;
    panda$collections$Iterator* label$Iter4281;
    panda$core$String* label4293;
    panda$core$Bit $tmp4279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp4279.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found4280 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4282 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4282->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4282 = $tmp4282->next;
            }
            $fn4284 $tmp4283 = $tmp4282->methods[0];
            panda$collections$Iterator* $tmp4285 = $tmp4283(((panda$collections$Iterable*) self->loops));
            label$Iter4281 = $tmp4285;
            $l4286:;
            ITable* $tmp4288 = label$Iter4281->$class->itable;
            while ($tmp4288->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4288 = $tmp4288->next;
            }
            $fn4290 $tmp4289 = $tmp4288->methods[0];
            panda$core$Bit $tmp4291 = $tmp4289(label$Iter4281);
            panda$core$Bit $tmp4292 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4291);
            if (!$tmp4292.value) goto $l4287;
            {
                ITable* $tmp4294 = label$Iter4281->$class->itable;
                while ($tmp4294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4294 = $tmp4294->next;
                }
                $fn4296 $tmp4295 = $tmp4294->methods[1];
                panda$core$Object* $tmp4297 = $tmp4295(label$Iter4281);
                label4293 = ((panda$core$String*) $tmp4297);
                bool $tmp4298 = ((panda$core$Bit) { label4293 != NULL }).value;
                if (!$tmp4298) goto $l4299;
                panda$core$Bit $tmp4303;
                if (((panda$core$Bit) { label4293 != NULL }).value) goto $l4300; else goto $l4301;
                $l4300:;
                panda$core$Bit $tmp4304 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4293, ((panda$core$String*) p_c->payload));
                $tmp4303 = $tmp4304;
                goto $l4302;
                $l4301:;
                $tmp4303 = ((panda$core$Bit) { false });
                goto $l4302;
                $l4302:;
                $tmp4298 = $tmp4303.value;
                $l4299:;
                panda$core$Bit $tmp4305 = { $tmp4298 };
                if ($tmp4305.value) {
                {
                    found4280 = ((panda$core$Bit) { true });
                    goto $l4287;
                }
                }
            }
            goto $l4286;
            $l4287:;
        }
        panda$core$Bit $tmp4306 = panda$core$Bit$$NOT$R$panda$core$Bit(found4280);
        if ($tmp4306.value) {
        {
            panda$core$String* $tmp4308 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4307, p_c->payload);
            panda$core$String* $tmp4310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4308, &$s4309);
            panda$core$String* $tmp4312 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4311, p_c->payload);
            panda$core$String* $tmp4314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4312, &$s4313);
            panda$core$String* $tmp4315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4310, $tmp4314);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp4315);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4316 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4316, ((panda$core$Int64) { 0 }));
    if ($tmp4317.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s4318);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4319 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4319->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4319->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4319, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp4319;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value4333;
    panda$collections$Array* children4338;
    panda$core$Bit $tmp4321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp4321.value);
    bool $tmp4322 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp4322) goto $l4323;
    panda$core$Int64 $tmp4324 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp4325 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4324, ((panda$core$Int64) { 0 }));
    $tmp4322 = $tmp4325.value;
    $l4323:;
    panda$core$Bit $tmp4326 = { $tmp4322 };
    if ($tmp4326.value) {
    {
        panda$core$Int64 $tmp4327 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp4328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4327, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4328.value);
        panda$core$Object* $tmp4329 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp4330 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4331 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4329)->returnType, $tmp4330);
        if ($tmp4331.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4332);
            return NULL;
        }
        }
        panda$core$Object* $tmp4334 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp4335 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4334));
        panda$core$Object* $tmp4336 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp4337 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4335, ((org$pandalanguage$pandac$MethodDecl*) $tmp4336)->returnType);
        value4333 = $tmp4337;
        if (((panda$core$Bit) { value4333 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4339 = (panda$collections$Array*) malloc(40);
        $tmp4339->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4339->refCount.value = 1;
        panda$collections$Array$init($tmp4339);
        children4338 = $tmp4339;
        panda$collections$Array$add$panda$collections$Array$T(children4338, ((panda$core$Object*) value4333));
        org$pandalanguage$pandac$IRNode* $tmp4341 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4341->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4341->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4341, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children4338));
        return $tmp4341;
    }
    }
    panda$core$Object* $tmp4343 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp4344 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4345 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4343)->returnType, $tmp4344);
    if ($tmp4345.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4346);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4347 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4347->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4347->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp4347, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp4347;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test4357;
    org$pandalanguage$pandac$ClassDecl* bit4362;
    org$pandalanguage$pandac$Symbol* value4365;
    panda$collections$Array* fieldChildren4368;
    panda$collections$Array* children4374;
    org$pandalanguage$pandac$IRNode* msg4379;
    panda$core$Bit $tmp4349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp4349.value);
    panda$core$Int64 $tmp4351 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4351, ((panda$core$Int64) { 1 }));
    bool $tmp4350 = $tmp4352.value;
    if ($tmp4350) goto $l4353;
    panda$core$Int64 $tmp4354 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4354, ((panda$core$Int64) { 2 }));
    $tmp4350 = $tmp4355.value;
    $l4353:;
    panda$core$Bit $tmp4356 = { $tmp4350 };
    PANDA_ASSERT($tmp4356.value);
    panda$core$Object* $tmp4358 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4359 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4358));
    test4357 = $tmp4359;
    if (((panda$core$Bit) { test4357 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4360 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4361 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test4357, $tmp4360);
    test4357 = $tmp4361;
    if (((panda$core$Bit) { test4357 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4363 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4364 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp4363);
    bit4362 = $tmp4364;
    PANDA_ASSERT(((panda$core$Bit) { bit4362 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp4367 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit4362->symbolTable, &$s4366);
    value4365 = $tmp4367;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value4365));
    panda$collections$Array* $tmp4369 = (panda$collections$Array*) malloc(40);
    $tmp4369->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4369->refCount.value = 1;
    panda$collections$Array$init($tmp4369);
    fieldChildren4368 = $tmp4369;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren4368, ((panda$core$Object*) test4357));
    org$pandalanguage$pandac$IRNode* $tmp4371 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4371->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4371->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4373 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4371, ((panda$core$Int64) { 1026 }), p_a->position, $tmp4373, ((panda$core$Object*) value4365), ((panda$collections$ListView*) fieldChildren4368));
    test4357 = $tmp4371;
    panda$collections$Array* $tmp4375 = (panda$collections$Array*) malloc(40);
    $tmp4375->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4375->refCount.value = 1;
    panda$collections$Array$init($tmp4375);
    children4374 = $tmp4375;
    panda$collections$Array$add$panda$collections$Array$T(children4374, ((panda$core$Object*) test4357));
    panda$core$Int64 $tmp4377 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4377, ((panda$core$Int64) { 2 }));
    if ($tmp4378.value) {
    {
        panda$core$Object* $tmp4380 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4381 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4380));
        msg4379 = $tmp4381;
        if (((panda$core$Bit) { msg4379 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4382 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4383 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg4379, $tmp4382);
        msg4379 = $tmp4383;
        if (((panda$core$Bit) { msg4379 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4374, ((panda$core$Object*) msg4379));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4384 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4384->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4384->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4384, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children4374));
    return $tmp4384;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind4399;
    org$pandalanguage$pandac$Variable$Kind* varKind4400;
    panda$collections$Array* decls4409;
    panda$collections$Iterator* astDecl$Iter4412;
    org$pandalanguage$pandac$ASTNode* astDecl4424;
    org$pandalanguage$pandac$IRNode* decl4429;
    panda$core$Bit $tmp4389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp4388 = $tmp4389.value;
    if ($tmp4388) goto $l4390;
    panda$core$Bit $tmp4391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp4388 = $tmp4391.value;
    $l4390:;
    panda$core$Bit $tmp4392 = { $tmp4388 };
    bool $tmp4387 = $tmp4392.value;
    if ($tmp4387) goto $l4393;
    panda$core$Bit $tmp4394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp4387 = $tmp4394.value;
    $l4393:;
    panda$core$Bit $tmp4395 = { $tmp4387 };
    bool $tmp4386 = $tmp4395.value;
    if ($tmp4386) goto $l4396;
    panda$core$Bit $tmp4397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp4386 = $tmp4397.value;
    $l4396:;
    panda$core$Bit $tmp4398 = { $tmp4386 };
    PANDA_ASSERT($tmp4398.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind4399 = ((panda$core$Int64) { 1017 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4401 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4401->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4401->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4401, ((panda$core$Int64) { 0 }));
            varKind4400 = $tmp4401;
        }
        break;
        case 131:
        {
            nodeKind4399 = ((panda$core$Int64) { 1018 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4403 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4403->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4403->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4403, ((panda$core$Int64) { 1 }));
            varKind4400 = $tmp4403;
        }
        break;
        case 132:
        {
            nodeKind4399 = ((panda$core$Int64) { 1019 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4405 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4405->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4405->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4405, ((panda$core$Int64) { 2 }));
            varKind4400 = $tmp4405;
        }
        break;
        case 133:
        {
            nodeKind4399 = ((panda$core$Int64) { 1020 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4407 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4407->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4407->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4407, ((panda$core$Int64) { 3 }));
            varKind4400 = $tmp4407;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp4410 = (panda$collections$Array*) malloc(40);
    $tmp4410->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4410->refCount.value = 1;
    panda$collections$Array$init($tmp4410);
    decls4409 = $tmp4410;
    {
        ITable* $tmp4413 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp4413->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4413 = $tmp4413->next;
        }
        $fn4415 $tmp4414 = $tmp4413->methods[0];
        panda$collections$Iterator* $tmp4416 = $tmp4414(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter4412 = $tmp4416;
        $l4417:;
        ITable* $tmp4419 = astDecl$Iter4412->$class->itable;
        while ($tmp4419->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4419 = $tmp4419->next;
        }
        $fn4421 $tmp4420 = $tmp4419->methods[0];
        panda$core$Bit $tmp4422 = $tmp4420(astDecl$Iter4412);
        panda$core$Bit $tmp4423 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4422);
        if (!$tmp4423.value) goto $l4418;
        {
            ITable* $tmp4425 = astDecl$Iter4412->$class->itable;
            while ($tmp4425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4425 = $tmp4425->next;
            }
            $fn4427 $tmp4426 = $tmp4425->methods[1];
            panda$core$Object* $tmp4428 = $tmp4426(astDecl$Iter4412);
            astDecl4424 = ((org$pandalanguage$pandac$ASTNode*) $tmp4428);
            org$pandalanguage$pandac$IRNode* $tmp4430 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl4424, varKind4400);
            decl4429 = $tmp4430;
            if (((panda$core$Bit) { decl4429 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls4409, ((panda$core$Object*) decl4429));
        }
        goto $l4417;
        $l4418:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4431 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4431->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4431->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4431, nodeKind4399, p_v->position, ((panda$collections$ListView*) decls4409));
    return $tmp4431;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4433;
    org$pandalanguage$pandac$IRNode* testValue4436;
    panda$collections$Array* callChildren4438;
    org$pandalanguage$pandac$IRNode* $tmp4434 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4434->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4434->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4434, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target4433 = $tmp4434;
    org$pandalanguage$pandac$IRNode* $tmp4437 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue4436 = $tmp4437;
    if (((panda$core$Bit) { testValue4436 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4439 = (panda$collections$Array*) malloc(40);
    $tmp4439->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4439->refCount.value = 1;
    panda$collections$Array$init($tmp4439);
    callChildren4438 = $tmp4439;
    panda$collections$Array$add$panda$collections$Array$T(callChildren4438, ((panda$core$Object*) testValue4436));
    org$pandalanguage$pandac$IRNode* $tmp4442 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4433, &$s4441, ((panda$collections$ListView*) callChildren4438));
    return $tmp4442;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$ASTNode* test4454;
    org$pandalanguage$pandac$ClassDecl* cl4462;
    org$pandalanguage$pandac$IRNode* base4465;
    panda$collections$Array* callChildren4469;
    org$pandalanguage$pandac$IRNode* target4472;
    org$pandalanguage$pandac$IRNode* check4475;
    org$pandalanguage$pandac$ChoiceEntry* entry4478;
    panda$core$Int64 requiredCount4479;
    panda$core$Int64 actualCount4481;
    panda$collections$Array* statements4511;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4514;
    org$pandalanguage$pandac$Variable* variable4533;
    panda$collections$Array* declChildren4542;
    panda$collections$Array* fieldRefChildren4547;
    panda$collections$Array* varChildren4558;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4571;
    org$pandalanguage$pandac$IRNode* statement4586;
    panda$collections$Array* children4596;
    org$pandalanguage$pandac$IRNode* test4603;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4607;
    org$pandalanguage$pandac$IRNode* nextTest4623;
    panda$collections$Array* callChildren4627;
    panda$collections$Array* statements4640;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4643;
    org$pandalanguage$pandac$IRNode* statement4658;
    panda$collections$Array* children4668;
    panda$core$Bit $tmp4443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4443.value);
    panda$core$Int64 $tmp4444 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4445 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4444, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4445.value);
    panda$core$Object* $tmp4446 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4446)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4447.value);
    panda$core$Object* $tmp4448 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4449 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4448)->children);
    panda$core$Bit $tmp4450 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4449, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4450.value);
    panda$core$Object* $tmp4451 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4452 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4451)->children);
    panda$core$Bit $tmp4453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4452, ((panda$core$Int64) { 1 }));
    if ($tmp4453.value) {
    {
        panda$core$Object* $tmp4455 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4456 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4455)->children, ((panda$core$Int64) { 0 }));
        test4454 = ((org$pandalanguage$pandac$ASTNode*) $tmp4456);
        panda$core$Bit $tmp4458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(test4454->kind, ((panda$core$Int64) { 107 }));
        bool $tmp4457 = $tmp4458.value;
        if (!$tmp4457) goto $l4459;
        panda$core$Bit $tmp4460 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_value->type);
        $tmp4457 = $tmp4460.value;
        $l4459:;
        panda$core$Bit $tmp4461 = { $tmp4457 };
        if ($tmp4461.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp4463 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_value->type);
            cl4462 = $tmp4463;
            panda$core$Bit $tmp4464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl4462->classKind->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp4464.value) {
            {
                panda$core$Object* $tmp4466 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4454->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp4467 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4466));
                base4465 = $tmp4467;
                if (((panda$core$Bit) { base4465 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp4468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base4465->kind, ((panda$core$Int64) { 1046 }));
                if ($tmp4468.value) {
                {
                    panda$collections$Array* $tmp4470 = (panda$collections$Array*) malloc(40);
                    $tmp4470->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4470->refCount.value = 1;
                    panda$collections$Array$init($tmp4470);
                    callChildren4469 = $tmp4470;
                    panda$collections$Array$add$panda$collections$Array$T(callChildren4469, ((panda$core$Object*) base4465));
                    org$pandalanguage$pandac$IRNode* $tmp4473 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4473->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4473->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4473, ((panda$core$Int64) { 1016 }), test4454->position, p_value->type, p_value);
                    target4472 = $tmp4473;
                    org$pandalanguage$pandac$IRNode* $tmp4477 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4472, &$s4476, ((panda$collections$ListView*) callChildren4469));
                    check4475 = $tmp4477;
                    if (((panda$core$Bit) { check4475 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    entry4478 = ((org$pandalanguage$pandac$ChoiceEntry*) base4465->payload);
                    panda$core$Int64 $tmp4480 = panda$collections$Array$get_count$R$panda$core$Int64(entry4478->fields);
                    requiredCount4479 = $tmp4480;
                    panda$core$Int64 $tmp4482 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(test4454->children);
                    panda$core$Int64 $tmp4483 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4482, ((panda$core$Int64) { 1 }));
                    actualCount4481 = $tmp4483;
                    panda$core$Bit $tmp4484 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(actualCount4481, requiredCount4479);
                    if ($tmp4484.value) {
                    {
                        panda$core$String* $tmp4486 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4485, base4465->payload);
                        panda$core$String* $tmp4488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4486, &$s4487);
                        panda$core$Int64$wrapper* $tmp4489;
                        $tmp4489 = (panda$core$Int64$wrapper*) malloc(24);
                        $tmp4489->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                        $tmp4489->refCount = 1;
                        $tmp4489->value = requiredCount4479;
                        panda$core$String* $tmp4490 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4488, ((panda$core$Object*) $tmp4489));
                        panda$core$String* $tmp4492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4490, &$s4491);
                        panda$core$Bit $tmp4494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(requiredCount4479, ((panda$core$Int64) { 1 }));
                        panda$core$Bit$wrapper* $tmp4495;
                        $tmp4495 = (panda$core$Bit$wrapper*) malloc(13);
                        $tmp4495->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                        $tmp4495->refCount = 1;
                        $tmp4495->value = $tmp4494;
                        ITable* $tmp4497 = ((panda$core$Formattable*) $tmp4495)->$class->itable;
                        while ($tmp4497->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                            $tmp4497 = $tmp4497->next;
                        }
                        $fn4499 $tmp4498 = $tmp4497->methods[0];
                        panda$core$String* $tmp4500 = $tmp4498(((panda$core$Formattable*) $tmp4495), &$s4496);
                        panda$core$String* $tmp4501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4493, $tmp4500);
                        panda$core$String* $tmp4503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4501, &$s4502);
                        panda$core$Int64$wrapper* $tmp4504;
                        $tmp4504 = (panda$core$Int64$wrapper*) malloc(24);
                        $tmp4504->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                        $tmp4504->refCount = 1;
                        $tmp4504->value = actualCount4481;
                        panda$core$String* $tmp4505 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4503, ((panda$core$Object*) $tmp4504));
                        panda$core$String* $tmp4507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4505, &$s4506);
                        panda$core$String* $tmp4508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4492, $tmp4507);
                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, test4454->position, $tmp4508);
                        return NULL;
                    }
                    }
                    org$pandalanguage$pandac$SymbolTable* $tmp4509 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
                    $tmp4509->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
                    $tmp4509->refCount.value = 1;
                    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4509, self->symbolTable);
                    self->symbolTable = $tmp4509;
                    panda$collections$Array* $tmp4512 = (panda$collections$Array*) malloc(40);
                    $tmp4512->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4512->refCount.value = 1;
                    panda$collections$Array$init($tmp4512);
                    statements4511 = $tmp4512;
                    panda$core$Int64 $tmp4515 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(test4454->children);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4514, ((panda$core$Int64) { 1 }), $tmp4515, ((panda$core$Bit) { false }));
                    int64_t $tmp4517 = $tmp4514.min.value;
                    panda$core$Int64 i4516 = { $tmp4517 };
                    int64_t $tmp4519 = $tmp4514.max.value;
                    bool $tmp4520 = $tmp4514.inclusive.value;
                    if ($tmp4520) goto $l4527; else goto $l4528;
                    $l4527:;
                    if ($tmp4517 <= $tmp4519) goto $l4521; else goto $l4523;
                    $l4528:;
                    if ($tmp4517 < $tmp4519) goto $l4521; else goto $l4523;
                    $l4521:;
                    {
                        panda$core$Object* $tmp4529 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4454->children, i4516);
                        panda$core$Bit $tmp4530 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4529)->kind, ((panda$core$Int64) { 106 }));
                        if ($tmp4530.value) {
                        {
                            panda$core$Object* $tmp4531 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4454->children, i4516);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4531)->position, &$s4532);
                            return NULL;
                        }
                        }
                        org$pandalanguage$pandac$Variable* $tmp4534 = (org$pandalanguage$pandac$Variable*) malloc(88);
                        $tmp4534->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
                        $tmp4534->refCount.value = 1;
                        panda$core$Object* $tmp4536 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4454->children, i4516);
                        org$pandalanguage$pandac$Variable$Kind* $tmp4537 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
                        $tmp4537->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
                        $tmp4537->refCount.value = 1;
                        org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4537, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp4539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4454->children, i4516);
                        panda$core$Int64 $tmp4540 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4516, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp4541 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(entry4478->fields, $tmp4540);
                        org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4534, ((org$pandalanguage$pandac$ASTNode*) $tmp4536)->position, $tmp4537, ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp4539)->payload), ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp4541)->second));
                        variable4533 = $tmp4534;
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) variable4533));
                        panda$collections$Array* $tmp4543 = (panda$collections$Array*) malloc(40);
                        $tmp4543->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4543->refCount.value = 1;
                        panda$collections$Array$init($tmp4543);
                        declChildren4542 = $tmp4543;
                        org$pandalanguage$pandac$IRNode* $tmp4545 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4545->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4545->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4545, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) variable4533)->position, variable4533->type, variable4533);
                        panda$collections$Array$add$panda$collections$Array$T(declChildren4542, ((panda$core$Object*) $tmp4545));
                        panda$collections$Array* $tmp4548 = (panda$collections$Array*) malloc(40);
                        $tmp4548->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4548->refCount.value = 1;
                        panda$collections$Array$init($tmp4548);
                        fieldRefChildren4547 = $tmp4548;
                        org$pandalanguage$pandac$IRNode* $tmp4550 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4550->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4550->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4550, ((panda$core$Int64) { 1016 }), test4454->position, p_value->type, p_value);
                        panda$collections$Array$add$panda$collections$Array$T(fieldRefChildren4547, ((panda$core$Object*) $tmp4550));
                        org$pandalanguage$pandac$IRNode* $tmp4552 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4552->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4552->refCount.value = 1;
                        org$pandalanguage$pandac$Pair* $tmp4554 = (org$pandalanguage$pandac$Pair*) malloc(32);
                        $tmp4554->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
                        $tmp4554->refCount.value = 1;
                        panda$core$Int64 $tmp4556 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4516, ((panda$core$Int64) { 1 }));
                        panda$core$Int64$wrapper* $tmp4557;
                        $tmp4557 = (panda$core$Int64$wrapper*) malloc(24);
                        $tmp4557->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                        $tmp4557->refCount = 1;
                        $tmp4557->value = $tmp4556;
                        org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp4554, ((panda$core$Object*) entry4478), ((panda$core$Object*) $tmp4557));
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4552, ((panda$core$Int64) { 1047 }), ((org$pandalanguage$pandac$Symbol*) variable4533)->position, variable4533->type, ((panda$core$Object*) $tmp4554), ((panda$collections$ListView*) fieldRefChildren4547));
                        panda$collections$Array$add$panda$collections$Array$T(declChildren4542, ((panda$core$Object*) $tmp4552));
                        panda$collections$Array* $tmp4559 = (panda$collections$Array*) malloc(40);
                        $tmp4559->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4559->refCount.value = 1;
                        panda$collections$Array$init($tmp4559);
                        varChildren4558 = $tmp4559;
                        org$pandalanguage$pandac$IRNode* $tmp4561 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4561->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4561->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4561, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) variable4533)->position, ((panda$collections$ListView*) declChildren4542));
                        panda$collections$Array$add$panda$collections$Array$T(varChildren4558, ((panda$core$Object*) $tmp4561));
                        org$pandalanguage$pandac$IRNode* $tmp4563 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4563->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4563->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4563, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) variable4533)->position, ((panda$collections$ListView*) varChildren4558));
                        panda$collections$Array$add$panda$collections$Array$T(statements4511, ((panda$core$Object*) $tmp4563));
                    }
                    $l4524:;
                    int64_t $tmp4566 = $tmp4519 - i4516.value;
                    if ($tmp4520) goto $l4567; else goto $l4568;
                    $l4567:;
                    if ((uint64_t) $tmp4566 >= 1) goto $l4565; else goto $l4523;
                    $l4568:;
                    if ((uint64_t) $tmp4566 > 1) goto $l4565; else goto $l4523;
                    $l4565:;
                    i4516.value += 1;
                    goto $l4521;
                    $l4523:;
                    panda$core$Int64 $tmp4572 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4571, ((panda$core$Int64) { 1 }), $tmp4572, ((panda$core$Bit) { false }));
                    int64_t $tmp4574 = $tmp4571.min.value;
                    panda$core$Int64 i4573 = { $tmp4574 };
                    int64_t $tmp4576 = $tmp4571.max.value;
                    bool $tmp4577 = $tmp4571.inclusive.value;
                    if ($tmp4577) goto $l4584; else goto $l4585;
                    $l4584:;
                    if ($tmp4574 <= $tmp4576) goto $l4578; else goto $l4580;
                    $l4585:;
                    if ($tmp4574 < $tmp4576) goto $l4578; else goto $l4580;
                    $l4578:;
                    {
                        panda$core$Object* $tmp4587 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4573);
                        org$pandalanguage$pandac$IRNode* $tmp4588 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4587));
                        statement4586 = $tmp4588;
                        if (((panda$core$Bit) { statement4586 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4511, ((panda$core$Object*) statement4586));
                    }
                    $l4581:;
                    int64_t $tmp4590 = $tmp4576 - i4573.value;
                    if ($tmp4577) goto $l4591; else goto $l4592;
                    $l4591:;
                    if ((uint64_t) $tmp4590 >= 1) goto $l4589; else goto $l4580;
                    $l4592:;
                    if ((uint64_t) $tmp4590 > 1) goto $l4589; else goto $l4580;
                    $l4589:;
                    i4573.value += 1;
                    goto $l4578;
                    $l4580:;
                    panda$core$Object* $tmp4595 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4595);
                    panda$collections$Array* $tmp4597 = (panda$collections$Array*) malloc(40);
                    $tmp4597->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4597->refCount.value = 1;
                    panda$collections$Array$init($tmp4597);
                    children4596 = $tmp4597;
                    panda$collections$Array$add$panda$collections$Array$T(children4596, ((panda$core$Object*) check4475));
                    org$pandalanguage$pandac$IRNode* $tmp4599 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4599->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4599->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4599, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4511));
                    panda$collections$Array$add$panda$collections$Array$T(children4596, ((panda$core$Object*) $tmp4599));
                    org$pandalanguage$pandac$IRNode* $tmp4601 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4601->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4601->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4601, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4596));
                    return $tmp4601;
                }
                }
            }
            }
        }
        }
    }
    }
    panda$core$Object* $tmp4604 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4605 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4604)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4606 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4605));
    test4603 = $tmp4606;
    if (((panda$core$Bit) { test4603 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4609 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4608)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4607, ((panda$core$Int64) { 1 }), $tmp4609, ((panda$core$Bit) { false }));
    int64_t $tmp4611 = $tmp4607.min.value;
    panda$core$Int64 i4610 = { $tmp4611 };
    int64_t $tmp4613 = $tmp4607.max.value;
    bool $tmp4614 = $tmp4607.inclusive.value;
    if ($tmp4614) goto $l4621; else goto $l4622;
    $l4621:;
    if ($tmp4611 <= $tmp4613) goto $l4615; else goto $l4617;
    $l4622:;
    if ($tmp4611 < $tmp4613) goto $l4615; else goto $l4617;
    $l4615:;
    {
        panda$core$Object* $tmp4624 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4625 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4624)->children, i4610);
        org$pandalanguage$pandac$IRNode* $tmp4626 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4625));
        nextTest4623 = $tmp4626;
        if (((panda$core$Bit) { nextTest4623 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4628 = (panda$collections$Array*) malloc(40);
        $tmp4628->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4628->refCount.value = 1;
        panda$collections$Array$init($tmp4628);
        callChildren4627 = $tmp4628;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4627, ((panda$core$Object*) nextTest4623));
        org$pandalanguage$pandac$IRNode* $tmp4631 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4603, &$s4630, ((panda$collections$ListView*) callChildren4627));
        test4603 = $tmp4631;
        if (((panda$core$Bit) { test4603 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4618:;
    int64_t $tmp4633 = $tmp4613 - i4610.value;
    if ($tmp4614) goto $l4634; else goto $l4635;
    $l4634:;
    if ((uint64_t) $tmp4633 >= 1) goto $l4632; else goto $l4617;
    $l4635:;
    if ((uint64_t) $tmp4633 > 1) goto $l4632; else goto $l4617;
    $l4632:;
    i4610.value += 1;
    goto $l4615;
    $l4617:;
    org$pandalanguage$pandac$SymbolTable* $tmp4638 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4638->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4638->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4638, self->symbolTable);
    self->symbolTable = $tmp4638;
    panda$collections$Array* $tmp4641 = (panda$collections$Array*) malloc(40);
    $tmp4641->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4641->refCount.value = 1;
    panda$collections$Array$init($tmp4641);
    statements4640 = $tmp4641;
    panda$core$Int64 $tmp4644 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4643, ((panda$core$Int64) { 1 }), $tmp4644, ((panda$core$Bit) { false }));
    int64_t $tmp4646 = $tmp4643.min.value;
    panda$core$Int64 i4645 = { $tmp4646 };
    int64_t $tmp4648 = $tmp4643.max.value;
    bool $tmp4649 = $tmp4643.inclusive.value;
    if ($tmp4649) goto $l4656; else goto $l4657;
    $l4656:;
    if ($tmp4646 <= $tmp4648) goto $l4650; else goto $l4652;
    $l4657:;
    if ($tmp4646 < $tmp4648) goto $l4650; else goto $l4652;
    $l4650:;
    {
        panda$core$Object* $tmp4659 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4645);
        org$pandalanguage$pandac$IRNode* $tmp4660 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4659));
        statement4658 = $tmp4660;
        if (((panda$core$Bit) { statement4658 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4640, ((panda$core$Object*) statement4658));
    }
    $l4653:;
    int64_t $tmp4662 = $tmp4648 - i4645.value;
    if ($tmp4649) goto $l4663; else goto $l4664;
    $l4663:;
    if ((uint64_t) $tmp4662 >= 1) goto $l4661; else goto $l4652;
    $l4664:;
    if ((uint64_t) $tmp4662 > 1) goto $l4661; else goto $l4652;
    $l4661:;
    i4645.value += 1;
    goto $l4650;
    $l4652:;
    panda$core$Object* $tmp4667 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4667);
    panda$collections$Array* $tmp4669 = (panda$collections$Array*) malloc(40);
    $tmp4669->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4669->refCount.value = 1;
    panda$collections$Array$init($tmp4669);
    children4668 = $tmp4669;
    panda$collections$Array$add$panda$collections$Array$T(children4668, ((panda$core$Object*) test4603));
    org$pandalanguage$pandac$IRNode* $tmp4671 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4671->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4671->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4671, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4640));
    panda$collections$Array$add$panda$collections$Array$T(children4668, ((panda$core$Object*) $tmp4671));
    org$pandalanguage$pandac$IRNode* $tmp4673 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4673->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4673->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4673, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4668));
    return $tmp4673;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4675;
    org$pandalanguage$pandac$Variable* valueVar4678;
    panda$collections$Array* declChildren4692;
    panda$collections$Array* varChildren4697;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4704;
    org$pandalanguage$pandac$ASTNode* c4719;
    org$pandalanguage$pandac$IRNode* w4721;
    panda$collections$Array* statements4723;
    panda$collections$Iterator* astStatement$Iter4726;
    org$pandalanguage$pandac$ASTNode* astStatement4738;
    org$pandalanguage$pandac$IRNode* stmt4743;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4753;
    panda$collections$Array* newChildren4781;
    panda$collections$Array* $tmp4676 = (panda$collections$Array*) malloc(40);
    $tmp4676->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4676->refCount.value = 1;
    panda$collections$Array$init($tmp4676);
    children4675 = $tmp4676;
    org$pandalanguage$pandac$Variable* $tmp4679 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4679->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4679->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind* $tmp4681 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp4681->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp4681->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4681, ((panda$core$Int64) { 1 }));
    panda$core$Int64$wrapper* $tmp4684;
    $tmp4684 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp4684->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp4684->refCount = 1;
    $tmp4684->value = p_m->position.line;
    panda$core$String* $tmp4685 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4683, ((panda$core$Object*) $tmp4684));
    panda$core$String* $tmp4687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4685, &$s4686);
    panda$core$Int64$wrapper* $tmp4688;
    $tmp4688 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp4688->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp4688->refCount = 1;
    $tmp4688->value = p_m->position.column;
    panda$core$String* $tmp4689 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4687, ((panda$core$Object*) $tmp4688));
    panda$core$String* $tmp4691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4689, &$s4690);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4679, p_m->position, $tmp4681, $tmp4691, p_value->type);
    valueVar4678 = $tmp4679;
    panda$collections$Array* $tmp4693 = (panda$collections$Array*) malloc(40);
    $tmp4693->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4693->refCount.value = 1;
    panda$collections$Array$init($tmp4693);
    declChildren4692 = $tmp4693;
    org$pandalanguage$pandac$IRNode* $tmp4695 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4695->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4695->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4695, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4678->type, valueVar4678);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4692, ((panda$core$Object*) $tmp4695));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4692, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4698 = (panda$collections$Array*) malloc(40);
    $tmp4698->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4698->refCount.value = 1;
    panda$collections$Array$init($tmp4698);
    varChildren4697 = $tmp4698;
    org$pandalanguage$pandac$IRNode* $tmp4700 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4700->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4700->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4700, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4678)->position, ((panda$collections$ListView*) declChildren4692));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4697, ((panda$core$Object*) $tmp4700));
    org$pandalanguage$pandac$IRNode* $tmp4702 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4702->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4702->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4702, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4678)->position, ((panda$collections$ListView*) varChildren4697));
    panda$collections$Array$add$panda$collections$Array$T(children4675, ((panda$core$Object*) $tmp4702));
    panda$core$Int64 $tmp4705 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4704, ((panda$core$Int64) { 1 }), $tmp4705, ((panda$core$Bit) { false }));
    int64_t $tmp4707 = $tmp4704.min.value;
    panda$core$Int64 i4706 = { $tmp4707 };
    int64_t $tmp4709 = $tmp4704.max.value;
    bool $tmp4710 = $tmp4704.inclusive.value;
    if ($tmp4710) goto $l4717; else goto $l4718;
    $l4717:;
    if ($tmp4707 <= $tmp4709) goto $l4711; else goto $l4713;
    $l4718:;
    if ($tmp4707 < $tmp4709) goto $l4711; else goto $l4713;
    $l4711:;
    {
        panda$core$Object* $tmp4720 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4706);
        c4719 = ((org$pandalanguage$pandac$ASTNode*) $tmp4720);
        switch (c4719->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4722 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4678, c4719);
                w4721 = $tmp4722;
                if (((panda$core$Bit) { w4721 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4675, ((panda$core$Object*) w4721));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4724 = (panda$collections$Array*) malloc(40);
                $tmp4724->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4724->refCount.value = 1;
                panda$collections$Array$init($tmp4724);
                statements4723 = $tmp4724;
                {
                    ITable* $tmp4727 = ((panda$collections$Iterable*) c4719->children)->$class->itable;
                    while ($tmp4727->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4727 = $tmp4727->next;
                    }
                    $fn4729 $tmp4728 = $tmp4727->methods[0];
                    panda$collections$Iterator* $tmp4730 = $tmp4728(((panda$collections$Iterable*) c4719->children));
                    astStatement$Iter4726 = $tmp4730;
                    $l4731:;
                    ITable* $tmp4733 = astStatement$Iter4726->$class->itable;
                    while ($tmp4733->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4733 = $tmp4733->next;
                    }
                    $fn4735 $tmp4734 = $tmp4733->methods[0];
                    panda$core$Bit $tmp4736 = $tmp4734(astStatement$Iter4726);
                    panda$core$Bit $tmp4737 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4736);
                    if (!$tmp4737.value) goto $l4732;
                    {
                        ITable* $tmp4739 = astStatement$Iter4726->$class->itable;
                        while ($tmp4739->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4739 = $tmp4739->next;
                        }
                        $fn4741 $tmp4740 = $tmp4739->methods[1];
                        panda$core$Object* $tmp4742 = $tmp4740(astStatement$Iter4726);
                        astStatement4738 = ((org$pandalanguage$pandac$ASTNode*) $tmp4742);
                        org$pandalanguage$pandac$IRNode* $tmp4744 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4738);
                        stmt4743 = $tmp4744;
                        if (((panda$core$Bit) { stmt4743 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4723, ((panda$core$Object*) stmt4743));
                    }
                    goto $l4731;
                    $l4732:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4745 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4745->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4745->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4745, ((panda$core$Int64) { 1000 }), c4719->position, ((panda$collections$ListView*) statements4723));
                panda$collections$Array$add$panda$collections$Array$T(children4675, ((panda$core$Object*) $tmp4745));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4714:;
    int64_t $tmp4748 = $tmp4709 - i4706.value;
    if ($tmp4710) goto $l4749; else goto $l4750;
    $l4749:;
    if ((uint64_t) $tmp4748 >= 1) goto $l4747; else goto $l4713;
    $l4750:;
    if ((uint64_t) $tmp4748 > 1) goto $l4747; else goto $l4713;
    $l4747:;
    i4706.value += 1;
    goto $l4711;
    $l4713:;
    panda$core$Int64 $tmp4754 = panda$collections$Array$get_count$R$panda$core$Int64(children4675);
    panda$core$Int64 $tmp4755 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4754, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4753, $tmp4755, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4757 = $tmp4753.start.value;
    panda$core$Int64 i4756 = { $tmp4757 };
    int64_t $tmp4759 = $tmp4753.end.value;
    int64_t $tmp4760 = $tmp4753.step.value;
    bool $tmp4761 = $tmp4753.inclusive.value;
    bool $tmp4768 = $tmp4760 > 0;
    if ($tmp4768) goto $l4766; else goto $l4767;
    $l4766:;
    if ($tmp4761) goto $l4769; else goto $l4770;
    $l4769:;
    if ($tmp4757 <= $tmp4759) goto $l4762; else goto $l4764;
    $l4770:;
    if ($tmp4757 < $tmp4759) goto $l4762; else goto $l4764;
    $l4767:;
    if ($tmp4761) goto $l4771; else goto $l4772;
    $l4771:;
    if ($tmp4757 >= $tmp4759) goto $l4762; else goto $l4764;
    $l4772:;
    if ($tmp4757 > $tmp4759) goto $l4762; else goto $l4764;
    $l4762:;
    {
        panda$core$Int64 $tmp4774 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4756, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4775 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4675, $tmp4774);
        panda$core$Bit $tmp4776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4775)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4776.value);
        panda$core$Int64 $tmp4777 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4756, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4778 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4675, $tmp4777);
        panda$core$Int64 $tmp4779 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4778)->children);
        panda$core$Bit $tmp4780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4779, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4780.value);
        panda$collections$Array* $tmp4782 = (panda$collections$Array*) malloc(40);
        $tmp4782->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4782->refCount.value = 1;
        panda$core$Int64 $tmp4784 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4756, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4675, $tmp4784);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4782, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4785)->children));
        newChildren4781 = $tmp4782;
        panda$core$Object* $tmp4786 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4675, i4756);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4781, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4786)));
        panda$core$Int64 $tmp4787 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4756, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4788 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4788->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4788->refCount.value = 1;
        panda$core$Int64 $tmp4790 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4756, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4791 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4675, $tmp4790);
        panda$core$Int64 $tmp4792 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4756, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4675, $tmp4792);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4788, ((org$pandalanguage$pandac$IRNode*) $tmp4791)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4793)->position, ((panda$collections$ListView*) newChildren4781));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4675, $tmp4787, ((panda$core$Object*) $tmp4788));
        panda$core$Int64 $tmp4794 = panda$collections$Array$get_count$R$panda$core$Int64(children4675);
        panda$core$Int64 $tmp4795 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4794, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4675, $tmp4795);
    }
    $l4765:;
    if ($tmp4768) goto $l4797; else goto $l4798;
    $l4797:;
    int64_t $tmp4799 = $tmp4759 - i4756.value;
    if ($tmp4761) goto $l4800; else goto $l4801;
    $l4800:;
    if ((uint64_t) $tmp4799 >= $tmp4760) goto $l4796; else goto $l4764;
    $l4801:;
    if ((uint64_t) $tmp4799 > $tmp4760) goto $l4796; else goto $l4764;
    $l4798:;
    int64_t $tmp4803 = i4756.value - $tmp4759;
    if ($tmp4761) goto $l4804; else goto $l4805;
    $l4804:;
    if ((uint64_t) $tmp4803 >= -$tmp4760) goto $l4796; else goto $l4764;
    $l4805:;
    if ((uint64_t) $tmp4803 > -$tmp4760) goto $l4796; else goto $l4764;
    $l4796:;
    i4756.value += $tmp4760;
    goto $l4762;
    $l4764:;
    org$pandalanguage$pandac$IRNode* $tmp4807 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4807->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4807->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4807, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4675));
    return $tmp4807;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4817;
    panda$collections$Iterator* expr$Iter4820;
    org$pandalanguage$pandac$ASTNode* expr4833;
    org$pandalanguage$pandac$IRNode* compiled4838;
    panda$collections$Array* statements4843;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4846;
    org$pandalanguage$pandac$IRNode* statement4861;
    panda$core$Bit $tmp4809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4809.value);
    panda$core$Int64 $tmp4810 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4811 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4810, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4811.value);
    panda$core$Object* $tmp4812 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4812)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4813.value);
    panda$core$Object* $tmp4814 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4815 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4814)->children);
    panda$core$Bit $tmp4816 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4815, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4816.value);
    panda$collections$Array* $tmp4818 = (panda$collections$Array*) malloc(40);
    $tmp4818->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4818->refCount.value = 1;
    panda$collections$Array$init($tmp4818);
    children4817 = $tmp4818;
    {
        panda$core$Object* $tmp4821 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4822 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4821)->children)->$class->itable;
        while ($tmp4822->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4822 = $tmp4822->next;
        }
        $fn4824 $tmp4823 = $tmp4822->methods[0];
        panda$collections$Iterator* $tmp4825 = $tmp4823(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4821)->children));
        expr$Iter4820 = $tmp4825;
        $l4826:;
        ITable* $tmp4828 = expr$Iter4820->$class->itable;
        while ($tmp4828->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4828 = $tmp4828->next;
        }
        $fn4830 $tmp4829 = $tmp4828->methods[0];
        panda$core$Bit $tmp4831 = $tmp4829(expr$Iter4820);
        panda$core$Bit $tmp4832 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4831);
        if (!$tmp4832.value) goto $l4827;
        {
            ITable* $tmp4834 = expr$Iter4820->$class->itable;
            while ($tmp4834->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4834 = $tmp4834->next;
            }
            $fn4836 $tmp4835 = $tmp4834->methods[1];
            panda$core$Object* $tmp4837 = $tmp4835(expr$Iter4820);
            expr4833 = ((org$pandalanguage$pandac$ASTNode*) $tmp4837);
            org$pandalanguage$pandac$IRNode* $tmp4839 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4833);
            org$pandalanguage$pandac$IRNode* $tmp4840 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4839, p_type);
            compiled4838 = $tmp4840;
            if (((panda$core$Bit) { compiled4838 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4817, ((panda$core$Object*) compiled4838));
        }
        goto $l4826;
        $l4827:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4841 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4841->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4841->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4841, self->symbolTable);
    self->symbolTable = $tmp4841;
    panda$collections$Array* $tmp4844 = (panda$collections$Array*) malloc(40);
    $tmp4844->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4844->refCount.value = 1;
    panda$collections$Array$init($tmp4844);
    statements4843 = $tmp4844;
    panda$core$Int64 $tmp4847 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4846, ((panda$core$Int64) { 1 }), $tmp4847, ((panda$core$Bit) { false }));
    int64_t $tmp4849 = $tmp4846.min.value;
    panda$core$Int64 i4848 = { $tmp4849 };
    int64_t $tmp4851 = $tmp4846.max.value;
    bool $tmp4852 = $tmp4846.inclusive.value;
    if ($tmp4852) goto $l4859; else goto $l4860;
    $l4859:;
    if ($tmp4849 <= $tmp4851) goto $l4853; else goto $l4855;
    $l4860:;
    if ($tmp4849 < $tmp4851) goto $l4853; else goto $l4855;
    $l4853:;
    {
        panda$core$Object* $tmp4862 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4848);
        org$pandalanguage$pandac$IRNode* $tmp4863 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4862));
        statement4861 = $tmp4863;
        if (((panda$core$Bit) { statement4861 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4843, ((panda$core$Object*) statement4861));
    }
    $l4856:;
    int64_t $tmp4865 = $tmp4851 - i4848.value;
    if ($tmp4852) goto $l4866; else goto $l4867;
    $l4866:;
    if ((uint64_t) $tmp4865 >= 1) goto $l4864; else goto $l4855;
    $l4867:;
    if ((uint64_t) $tmp4865 > 1) goto $l4864; else goto $l4855;
    $l4864:;
    i4848.value += 1;
    goto $l4853;
    $l4855:;
    panda$core$Object* $tmp4870 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4870);
    org$pandalanguage$pandac$IRNode* $tmp4871 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4871->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4871->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4871, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4843));
    panda$collections$Array$add$panda$collections$Array$T(children4817, ((panda$core$Object*) $tmp4871));
    org$pandalanguage$pandac$IRNode* $tmp4873 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4873->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4873->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4873, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4817));
    return $tmp4873;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4876;
    panda$collections$Array* statements4881;
    panda$collections$Iterator* s$Iter4884;
    org$pandalanguage$pandac$ASTNode* s4896;
    org$pandalanguage$pandac$IRNode* statement4901;
    panda$core$Bit $tmp4875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4875.value);
    panda$collections$Array* $tmp4877 = (panda$collections$Array*) malloc(40);
    $tmp4877->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4877->refCount.value = 1;
    panda$collections$Array$init($tmp4877);
    children4876 = $tmp4877;
    org$pandalanguage$pandac$SymbolTable* $tmp4879 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4879->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4879->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4879, self->symbolTable);
    self->symbolTable = $tmp4879;
    panda$collections$Array* $tmp4882 = (panda$collections$Array*) malloc(40);
    $tmp4882->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4882->refCount.value = 1;
    panda$collections$Array$init($tmp4882);
    statements4881 = $tmp4882;
    {
        ITable* $tmp4885 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4885->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4885 = $tmp4885->next;
        }
        $fn4887 $tmp4886 = $tmp4885->methods[0];
        panda$collections$Iterator* $tmp4888 = $tmp4886(((panda$collections$Iterable*) p_o->children));
        s$Iter4884 = $tmp4888;
        $l4889:;
        ITable* $tmp4891 = s$Iter4884->$class->itable;
        while ($tmp4891->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4891 = $tmp4891->next;
        }
        $fn4893 $tmp4892 = $tmp4891->methods[0];
        panda$core$Bit $tmp4894 = $tmp4892(s$Iter4884);
        panda$core$Bit $tmp4895 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4894);
        if (!$tmp4895.value) goto $l4890;
        {
            ITable* $tmp4897 = s$Iter4884->$class->itable;
            while ($tmp4897->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4897 = $tmp4897->next;
            }
            $fn4899 $tmp4898 = $tmp4897->methods[1];
            panda$core$Object* $tmp4900 = $tmp4898(s$Iter4884);
            s4896 = ((org$pandalanguage$pandac$ASTNode*) $tmp4900);
            org$pandalanguage$pandac$IRNode* $tmp4902 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4896);
            statement4901 = $tmp4902;
            if (((panda$core$Bit) { statement4901 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4881, ((panda$core$Object*) statement4901));
        }
        goto $l4889;
        $l4890:;
    }
    panda$core$Object* $tmp4903 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4903);
    org$pandalanguage$pandac$IRNode* $tmp4904 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4904->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4904->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4904, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4881));
    panda$collections$Array$add$panda$collections$Array$T(children4876, ((panda$core$Object*) $tmp4904));
    org$pandalanguage$pandac$IRNode* $tmp4906 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4906->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4906->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4906, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4876));
    return $tmp4906;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4915;
    org$pandalanguage$pandac$Variable* v4924;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4909 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4908 = $tmp4909.value;
            if (!$tmp4908) goto $l4910;
            panda$core$Object* $tmp4911 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4912 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4911)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4913 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4912));
            $tmp4908 = $tmp4913.value;
            $l4910:;
            panda$core$Bit $tmp4914 = { $tmp4908 };
            return $tmp4914;
        }
        break;
        case 1026:
        {
            f4915 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4915->resolved.value);
            panda$core$Bit $tmp4918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4915->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4917 = $tmp4918.value;
            if (!$tmp4917) goto $l4919;
            $tmp4917 = ((panda$core$Bit) { f4915->value != NULL }).value;
            $l4919:;
            panda$core$Bit $tmp4920 = { $tmp4917 };
            bool $tmp4916 = $tmp4920.value;
            if (!$tmp4916) goto $l4921;
            panda$core$Bit $tmp4922 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4915->value);
            $tmp4916 = $tmp4922.value;
            $l4921:;
            panda$core$Bit $tmp4923 = { $tmp4916 };
            return $tmp4923;
        }
        break;
        case 1016:
        {
            v4924 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4924->varKind->$rawValue, ((panda$core$Int64) { 1 }));
            bool $tmp4925 = $tmp4926.value;
            if ($tmp4925) goto $l4927;
            panda$core$Bit $tmp4930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4924->varKind->$rawValue, ((panda$core$Int64) { 2 }));
            bool $tmp4929 = $tmp4930.value;
            if (!$tmp4929) goto $l4931;
            $tmp4929 = ((panda$core$Bit) { v4924->initialValue != NULL }).value;
            $l4931:;
            panda$core$Bit $tmp4932 = { $tmp4929 };
            bool $tmp4928 = $tmp4932.value;
            if (!$tmp4928) goto $l4933;
            panda$core$Bit $tmp4934 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4924->initialValue);
            $tmp4928 = $tmp4934.value;
            $l4933:;
            panda$core$Bit $tmp4935 = { $tmp4928 };
            $tmp4925 = $tmp4935.value;
            $l4927:;
            panda$core$Bit $tmp4936 = { $tmp4925 };
            return $tmp4936;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4941;
    org$pandalanguage$pandac$Variable* v4943;
    panda$core$Bit $tmp4937 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4937.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4938 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4939 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4938)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4940 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4939));
            return $tmp4940;
        }
        break;
        case 1026:
        {
            f4941 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4942 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4941->value);
            return $tmp4942;
        }
        break;
        case 1016:
        {
            v4943 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4944 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4943->initialValue);
            return $tmp4944;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4948;
    panda$collections$Array* children4955;
    panda$collections$Iterator* rawWhen$Iter4958;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4959;
    org$pandalanguage$pandac$ASTNode* rawWhen4972;
    org$pandalanguage$pandac$IRNode* o4978;
    org$pandalanguage$pandac$IRNode* w4980;
    panda$core$Bit $tmp4945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4945.value);
    panda$core$Int64 $tmp4946 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4947 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4946, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4947.value);
    panda$core$Object* $tmp4949 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4950 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4949));
    org$pandalanguage$pandac$IRNode* $tmp4951 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4950);
    value4948 = $tmp4951;
    if (((panda$core$Bit) { value4948 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4952 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4948->type);
    panda$core$Bit $tmp4953 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4952);
    if ($tmp4953.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4954 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4948);
        return $tmp4954;
    }
    }
    panda$collections$Array* $tmp4956 = (panda$collections$Array*) malloc(40);
    $tmp4956->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4956->refCount.value = 1;
    panda$collections$Array$init($tmp4956);
    children4955 = $tmp4956;
    panda$collections$Array$add$panda$collections$Array$T(children4955, ((panda$core$Object*) value4948));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4959, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4960 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4959);
        ITable* $tmp4961 = ((panda$collections$Iterable*) $tmp4960)->$class->itable;
        while ($tmp4961->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4961 = $tmp4961->next;
        }
        $fn4963 $tmp4962 = $tmp4961->methods[0];
        panda$collections$Iterator* $tmp4964 = $tmp4962(((panda$collections$Iterable*) $tmp4960));
        rawWhen$Iter4958 = $tmp4964;
        $l4965:;
        ITable* $tmp4967 = rawWhen$Iter4958->$class->itable;
        while ($tmp4967->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4967 = $tmp4967->next;
        }
        $fn4969 $tmp4968 = $tmp4967->methods[0];
        panda$core$Bit $tmp4970 = $tmp4968(rawWhen$Iter4958);
        panda$core$Bit $tmp4971 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4970);
        if (!$tmp4971.value) goto $l4966;
        {
            ITable* $tmp4973 = rawWhen$Iter4958->$class->itable;
            while ($tmp4973->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4973 = $tmp4973->next;
            }
            $fn4975 $tmp4974 = $tmp4973->methods[1];
            panda$core$Object* $tmp4976 = $tmp4974(rawWhen$Iter4958);
            rawWhen4972 = ((org$pandalanguage$pandac$ASTNode*) $tmp4976);
            panda$core$Bit $tmp4977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4972->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4977.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4979 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4972);
                o4978 = $tmp4979;
                if (((panda$core$Bit) { o4978 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4955, ((panda$core$Object*) o4978));
                goto $l4965;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4981 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4948->type, rawWhen4972);
            w4980 = $tmp4981;
            if (((panda$core$Bit) { w4980 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4982 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4980->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4983 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4982));
            panda$core$Bit $tmp4984 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4983);
            if ($tmp4984.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4985 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4948);
                return $tmp4985;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4955, ((panda$core$Object*) w4980));
        }
        goto $l4965;
        $l4966:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4986 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4986->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4986->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4986, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4955));
    return $tmp4986;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result5001;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4988 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4988;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4989 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4990 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4989);
            return $tmp4990;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4991 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4991;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4992 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4992;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4993 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4993;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4994 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4994;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4995 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4995;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4996 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4996;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4997 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4997;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4998 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4998;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4999 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4999;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp5000 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5000;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp5002 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp5003 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5002);
            result5001 = $tmp5003;
            if (((panda$core$Bit) { result5001 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp5004 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result5001);
                result5001 = $tmp5004;
            }
            }
            return result5001;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp5005 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5005;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old5006;
    org$pandalanguage$pandac$SymbolTable* symbols5008;
    panda$collections$Iterator* p$Iter5011;
    org$pandalanguage$pandac$MethodDecl$Parameter* p5023;
    panda$collections$Array* fieldInitializers5034;
    panda$collections$Iterator* f$Iter5038;
    org$pandalanguage$pandac$FieldDecl* f5051;
    panda$collections$Array* children5061;
    org$pandalanguage$pandac$IRNode* fieldRef5068;
    org$pandalanguage$pandac$IRNode* compiled5074;
    panda$collections$Array* children5076;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old5006 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp5007 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp5007;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp5009 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp5009->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp5009->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp5009, self->symbolTable);
    symbols5008 = $tmp5009;
    {
        ITable* $tmp5012 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp5012->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5012 = $tmp5012->next;
        }
        $fn5014 $tmp5013 = $tmp5012->methods[0];
        panda$collections$Iterator* $tmp5015 = $tmp5013(((panda$collections$Iterable*) p_m->parameters));
        p$Iter5011 = $tmp5015;
        $l5016:;
        ITable* $tmp5018 = p$Iter5011->$class->itable;
        while ($tmp5018->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5018 = $tmp5018->next;
        }
        $fn5020 $tmp5019 = $tmp5018->methods[0];
        panda$core$Bit $tmp5021 = $tmp5019(p$Iter5011);
        panda$core$Bit $tmp5022 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5021);
        if (!$tmp5022.value) goto $l5017;
        {
            ITable* $tmp5024 = p$Iter5011->$class->itable;
            while ($tmp5024->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5024 = $tmp5024->next;
            }
            $fn5026 $tmp5025 = $tmp5024->methods[1];
            panda$core$Object* $tmp5027 = $tmp5025(p$Iter5011);
            p5023 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5027);
            org$pandalanguage$pandac$Variable* $tmp5028 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp5028->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp5028->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind* $tmp5030 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp5030->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp5030->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp5030, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$Storage* $tmp5032 = (org$pandalanguage$pandac$Variable$Storage*) malloc(24);
            $tmp5032->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Storage$class;
            $tmp5032->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64($tmp5032, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage($tmp5028, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp5030, p5023->name, p5023->type, $tmp5032);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols5008, ((org$pandalanguage$pandac$Symbol*) $tmp5028));
        }
        goto $l5016;
        $l5017:;
    }
    self->symbolTable = symbols5008;
    fieldInitializers5034 = NULL;
    panda$core$Bit $tmp5035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp5035.value) {
    {
        panda$collections$Array* $tmp5036 = (panda$collections$Array*) malloc(40);
        $tmp5036->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp5036->refCount.value = 1;
        panda$collections$Array$init($tmp5036);
        fieldInitializers5034 = $tmp5036;
        {
            panda$core$Object* $tmp5039 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp5040 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp5039)->fields)->$class->itable;
            while ($tmp5040->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp5040 = $tmp5040->next;
            }
            $fn5042 $tmp5041 = $tmp5040->methods[0];
            panda$collections$Iterator* $tmp5043 = $tmp5041(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp5039)->fields));
            f$Iter5038 = $tmp5043;
            $l5044:;
            ITable* $tmp5046 = f$Iter5038->$class->itable;
            while ($tmp5046->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5046 = $tmp5046->next;
            }
            $fn5048 $tmp5047 = $tmp5046->methods[0];
            panda$core$Bit $tmp5049 = $tmp5047(f$Iter5038);
            panda$core$Bit $tmp5050 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5049);
            if (!$tmp5050.value) goto $l5045;
            {
                ITable* $tmp5052 = f$Iter5038->$class->itable;
                while ($tmp5052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5052 = $tmp5052->next;
                }
                $fn5054 $tmp5053 = $tmp5052->methods[1];
                panda$core$Object* $tmp5055 = $tmp5053(f$Iter5038);
                f5051 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5055);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f5051);
                panda$core$Bit $tmp5057 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f5051->annotations);
                panda$core$Bit $tmp5058 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5057);
                bool $tmp5056 = $tmp5058.value;
                if (!$tmp5056) goto $l5059;
                $tmp5056 = ((panda$core$Bit) { f5051->value != NULL }).value;
                $l5059:;
                panda$core$Bit $tmp5060 = { $tmp5056 };
                if ($tmp5060.value) {
                {
                    panda$collections$Array* $tmp5062 = (panda$collections$Array*) malloc(40);
                    $tmp5062->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp5062->refCount.value = 1;
                    panda$collections$Array$init($tmp5062);
                    children5061 = $tmp5062;
                    org$pandalanguage$pandac$IRNode* $tmp5064 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5064->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5064->refCount.value = 1;
                    panda$core$Object* $tmp5066 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp5067 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp5066));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp5064, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp5067);
                    panda$collections$Array$add$panda$collections$Array$T(children5061, ((panda$core$Object*) $tmp5064));
                    org$pandalanguage$pandac$IRNode* $tmp5069 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5069->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5069->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp5069, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f5051->type, ((panda$core$Object*) f5051), ((panda$collections$ListView*) children5061));
                    fieldRef5068 = $tmp5069;
                    panda$collections$Array$clear(children5061);
                    panda$collections$Array$add$panda$collections$Array$T(children5061, ((panda$core$Object*) fieldRef5068));
                    panda$collections$Array$add$panda$collections$Array$T(children5061, ((panda$core$Object*) f5051->value));
                    org$pandalanguage$pandac$IRNode* $tmp5071 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5071->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5071->refCount.value = 1;
                    panda$core$Int64$wrapper* $tmp5073;
                    $tmp5073 = (panda$core$Int64$wrapper*) malloc(24);
                    $tmp5073->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                    $tmp5073->refCount = 1;
                    $tmp5073->value = ((panda$core$Int64) { 73 });
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5071, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f5051)->position, ((panda$core$Object*) $tmp5073), ((panda$collections$ListView*) children5061));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers5034, ((panda$core$Object*) $tmp5071));
                }
                }
            }
            goto $l5044;
            $l5045:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp5075 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled5074 = $tmp5075;
    if (((panda$core$Bit) { compiled5074 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers5034 != NULL }).value) {
        {
            panda$collections$Array* $tmp5077 = (panda$collections$Array*) malloc(40);
            $tmp5077->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5077->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp5077, ((panda$collections$ListView*) fieldInitializers5034));
            children5076 = $tmp5077;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children5076, ((panda$collections$CollectionView*) compiled5074->children));
            org$pandalanguage$pandac$IRNode* $tmp5079 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp5079->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp5079->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5079, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children5076));
            compiled5074 = $tmp5079;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols5008) }).value);
    self->symbolTable = old5006;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp5081 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp5081.value) {
    {
        p_m->compiledBody = compiled5074;
    }
    }
    return compiled5074;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled5082;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp5083 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled5082 = $tmp5083;
        panda$core$Bit $tmp5085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, ((panda$core$Int64) { 0 }));
        bool $tmp5084 = $tmp5085.value;
        if (!$tmp5084) goto $l5086;
        $tmp5084 = ((panda$core$Bit) { compiled5082 != NULL }).value;
        $l5086:;
        panda$core$Bit $tmp5087 = { $tmp5084 };
        if ($tmp5087.value) {
        {
            ITable* $tmp5088 = self->codeGenerator->$class->itable;
            while ($tmp5088->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp5088 = $tmp5088->next;
            }
            $fn5090 $tmp5089 = $tmp5088->methods[3];
            $tmp5089(self->codeGenerator, p_m, compiled5082);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp5091 = self->codeGenerator->$class->itable;
        while ($tmp5091->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5091 = $tmp5091->next;
        }
        $fn5093 $tmp5092 = $tmp5091->methods[2];
        $tmp5092(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter5094;
    org$pandalanguage$pandac$ClassDecl* inner5106;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp5095 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp5095->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5095 = $tmp5095->next;
        }
        $fn5097 $tmp5096 = $tmp5095->methods[0];
        panda$collections$Iterator* $tmp5098 = $tmp5096(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter5094 = $tmp5098;
        $l5099:;
        ITable* $tmp5101 = inner$Iter5094->$class->itable;
        while ($tmp5101->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5101 = $tmp5101->next;
        }
        $fn5103 $tmp5102 = $tmp5101->methods[0];
        panda$core$Bit $tmp5104 = $tmp5102(inner$Iter5094);
        panda$core$Bit $tmp5105 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5104);
        if (!$tmp5105.value) goto $l5100;
        {
            ITable* $tmp5107 = inner$Iter5094->$class->itable;
            while ($tmp5107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5107 = $tmp5107->next;
            }
            $fn5109 $tmp5108 = $tmp5107->methods[1];
            panda$core$Object* $tmp5110 = $tmp5108(inner$Iter5094);
            inner5106 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5110);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner5106);
        }
        goto $l5099;
        $l5100:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old5118;
    panda$collections$Iterator* m$Iter5123;
    org$pandalanguage$pandac$MethodDecl* m5135;
    org$pandalanguage$pandac$ClassDecl* next5145;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp5111 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp5111.value) {
    {
        ITable* $tmp5112 = self->codeGenerator->$class->itable;
        while ($tmp5112->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5112 = $tmp5112->next;
        }
        $fn5114 $tmp5113 = $tmp5112->methods[1];
        $tmp5113(self->codeGenerator, p_cl);
        ITable* $tmp5115 = self->codeGenerator->$class->itable;
        while ($tmp5115->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5115 = $tmp5115->next;
        }
        $fn5117 $tmp5116 = $tmp5115->methods[4];
        $tmp5116(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old5118 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp5119 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp5119;
    ITable* $tmp5120 = self->codeGenerator->$class->itable;
    while ($tmp5120->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5120 = $tmp5120->next;
    }
    $fn5122 $tmp5121 = $tmp5120->methods[1];
    $tmp5121(self->codeGenerator, p_cl);
    {
        ITable* $tmp5124 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp5124->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5124 = $tmp5124->next;
        }
        $fn5126 $tmp5125 = $tmp5124->methods[0];
        panda$collections$Iterator* $tmp5127 = $tmp5125(((panda$collections$Iterable*) p_cl->methods));
        m$Iter5123 = $tmp5127;
        $l5128:;
        ITable* $tmp5130 = m$Iter5123->$class->itable;
        while ($tmp5130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5130 = $tmp5130->next;
        }
        $fn5132 $tmp5131 = $tmp5130->methods[0];
        panda$core$Bit $tmp5133 = $tmp5131(m$Iter5123);
        panda$core$Bit $tmp5134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5133);
        if (!$tmp5134.value) goto $l5129;
        {
            ITable* $tmp5136 = m$Iter5123->$class->itable;
            while ($tmp5136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5136 = $tmp5136->next;
            }
            $fn5138 $tmp5137 = $tmp5136->methods[1];
            panda$core$Object* $tmp5139 = $tmp5137(m$Iter5123);
            m5135 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5139);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m5135);
        }
        goto $l5128;
        $l5129:;
    }
    ITable* $tmp5140 = self->codeGenerator->$class->itable;
    while ($tmp5140->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5140 = $tmp5140->next;
    }
    $fn5142 $tmp5141 = $tmp5140->methods[4];
    $tmp5141(self->codeGenerator, p_cl);
    self->symbolTable = old5118;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp5143 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5144 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5143, ((panda$core$Int64) { 0 }));
    if ($tmp5144.value) {
    {
        panda$core$Object* $tmp5146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next5145 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5146);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next5145);
    }
    }
    panda$core$Int64 $tmp5147 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5147, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5148.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result5149;
    org$pandalanguage$pandac$ASTNode* parsed5152;
    panda$collections$Iterator* cl$Iter5155;
    org$pandalanguage$pandac$ClassDecl* cl5167;
    panda$core$Object* $tmp5150 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result5149 = ((panda$collections$ListView*) $tmp5150);
    if (((panda$core$Bit) { result5149 == NULL }).value) {
    {
        panda$core$String* $tmp5151 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp5151);
        org$pandalanguage$pandac$ASTNode* $tmp5153 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed5152 = $tmp5153;
        if (((panda$core$Bit) { parsed5152 != NULL }).value) {
        {
            panda$collections$ListView* $tmp5154 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed5152);
            result5149 = $tmp5154;
            {
                ITable* $tmp5156 = ((panda$collections$Iterable*) result5149)->$class->itable;
                while ($tmp5156->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp5156 = $tmp5156->next;
                }
                $fn5158 $tmp5157 = $tmp5156->methods[0];
                panda$collections$Iterator* $tmp5159 = $tmp5157(((panda$collections$Iterable*) result5149));
                cl$Iter5155 = $tmp5159;
                $l5160:;
                ITable* $tmp5162 = cl$Iter5155->$class->itable;
                while ($tmp5162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5162 = $tmp5162->next;
                }
                $fn5164 $tmp5163 = $tmp5162->methods[0];
                panda$core$Bit $tmp5165 = $tmp5163(cl$Iter5155);
                panda$core$Bit $tmp5166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5165);
                if (!$tmp5166.value) goto $l5161;
                {
                    ITable* $tmp5168 = cl$Iter5155->$class->itable;
                    while ($tmp5168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp5168 = $tmp5168->next;
                    }
                    $fn5170 $tmp5169 = $tmp5168->methods[1];
                    panda$core$Object* $tmp5171 = $tmp5169(cl$Iter5155);
                    cl5167 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5171);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl5167)->name), ((panda$core$Object*) cl5167));
                }
                goto $l5160;
                $l5161:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp5172 = (panda$collections$Array*) malloc(40);
            $tmp5172->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5172->refCount.value = 1;
            panda$collections$Array$init($tmp5172);
            result5149 = ((panda$collections$ListView*) $tmp5172);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result5149));
    }
    }
    return result5149;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes5174;
    panda$collections$Iterator* cl$Iter5176;
    org$pandalanguage$pandac$ClassDecl* cl5188;
    panda$collections$ListView* $tmp5175 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes5174 = $tmp5175;
    {
        ITable* $tmp5177 = ((panda$collections$Iterable*) classes5174)->$class->itable;
        while ($tmp5177->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5177 = $tmp5177->next;
        }
        $fn5179 $tmp5178 = $tmp5177->methods[0];
        panda$collections$Iterator* $tmp5180 = $tmp5178(((panda$collections$Iterable*) classes5174));
        cl$Iter5176 = $tmp5180;
        $l5181:;
        ITable* $tmp5183 = cl$Iter5176->$class->itable;
        while ($tmp5183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5183 = $tmp5183->next;
        }
        $fn5185 $tmp5184 = $tmp5183->methods[0];
        panda$core$Bit $tmp5186 = $tmp5184(cl$Iter5176);
        panda$core$Bit $tmp5187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5186);
        if (!$tmp5187.value) goto $l5182;
        {
            ITable* $tmp5189 = cl$Iter5176->$class->itable;
            while ($tmp5189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5189 = $tmp5189->next;
            }
            $fn5191 $tmp5190 = $tmp5189->methods[1];
            panda$core$Object* $tmp5192 = $tmp5190(cl$Iter5176);
            cl5188 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5192);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl5188);
        }
        goto $l5181;
        $l5182:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp5193 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp5193)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp5194 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp5194;
        panda$core$String* $tmp5195 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp5196 = panda$core$String$convert$R$panda$core$String($tmp5195);
        panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5196, &$s5197);
        org$pandalanguage$pandac$Position$wrapper* $tmp5199;
        $tmp5199 = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
        $tmp5199->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
        $tmp5199->refCount = 1;
        $tmp5199->value = p_pos;
        panda$core$String* $tmp5200 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5198, ((panda$core$Object*) $tmp5199));
        panda$core$String* $tmp5202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5200, &$s5201);
        panda$core$String* $tmp5203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5202, p_msg);
        panda$core$String* $tmp5205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5203, &$s5204);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp5205));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp5206 = self->codeGenerator->$class->itable;
    while ($tmp5206->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5206 = $tmp5206->next;
    }
    $fn5208 $tmp5207 = $tmp5206->methods[5];
    $tmp5207(self->codeGenerator);
}

