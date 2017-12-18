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
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Compiler/CompileTargetResult.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter = { (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class, NULL, { org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String} };

org$pandalanguage$pandac$Compiler$class_type org$pandalanguage$pandac$Compiler$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$Compiler$_org$pandalanguage$pandac$ErrorReporter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Compiler$addAlias$panda$core$String, org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry, org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT, org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable, org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT, org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64, org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q, org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64, org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Compiler$compile$panda$io$File, org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String, org$pandalanguage$pandac$Compiler$finish} };

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
typedef panda$collections$Iterator* (*$fn611)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn617)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn623)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn652)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn684)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn690)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn696)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn716)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn722)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn728)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn754)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn760)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn766)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn815)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn821)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn827)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn836)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn853)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn871)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn877)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn883)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn891)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn897)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn903)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn915)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn921)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn927)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn950)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn956)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn962)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1001)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1007)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1013)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1026)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1032)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1038)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1053)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1059)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1065)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1081)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1087)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1093)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1107)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1113)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1119)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1132)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1144)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1189)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1201)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1208)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1214)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1220)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1240)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1246)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1252)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1335)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1506)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1512)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1518)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1544)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1550)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1556)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1670)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1674)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1677)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1694)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1700)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1706)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1793)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1799)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1805)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1959)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2094)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2123)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2129)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2135)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2237)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2259)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2281)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2298)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2304)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2310)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2326)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2344)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2351)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2426)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2444)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2530)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2537)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2579)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2597)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2603)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2609)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2640)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2646)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2652)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2675)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2694)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2701)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2719)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2737)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2771)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2777)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2783)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2806)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2812)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2818)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3418)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3424)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3430)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3584)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3590)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3596)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3714)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3832)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3848)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3854)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3860)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3994)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4000)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4006)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4284)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4290)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4296)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4431)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4437)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4443)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4473)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4479)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4485)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4604)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4610)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4616)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn4688)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4918)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4924)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4930)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5013)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5019)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5025)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5076)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5082)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5088)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5152)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5158)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5164)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5203)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5209)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5215)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5231)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5237)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5243)(panda$collections$Iterator*);
typedef void (*$fn5280)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5283)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn5287)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5293)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5299)(panda$collections$Iterator*);
typedef void (*$fn5304)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5307)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5312)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5316)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5322)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5328)(panda$collections$Iterator*);
typedef void (*$fn5332)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5348)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5354)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5360)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5369)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5375)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5381)(panda$collections$Iterator*);
typedef void (*$fn5398)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6f\x72\x20\x61\x6d\x62\x69\x67\x75\x6f\x75\x73\x20\x6d\x61\x74\x63\x68\x20\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6c\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x63\x6f\x6e\x74\x61\x69\x6e\x20\x61\x20\x63\x6c\x61\x73\x73\x20\x6e\x61\x6d\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x66\x69\x6c\x65\x20\x6e\x61\x6d\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20\x61\x6e\x79\x20\x69\x6d\x70\x6f\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x30", 13, 2997537454666094288, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 15, -6693247693629641489, NULL };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x63\x6f\x6e\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x6e\x20\x6e\x6f\x6e\x2d\x63\x6c\x61\x73\x73\x20\x74\x79\x70\x65\x20\x27", 40, 2057026257004143426, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e", 25, 9019145596080302696, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s3472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s3644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x20\x27", 6, 2293399544522, NULL };
static panda$core$String $s3737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x63\x6c\x61\x73\x73", 16, 3306529650949529468, NULL };
static panda$core$String $s3744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x61\x6e\x67\x65\x20\x73\x74\x65\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6e\x75\x6c\x6c", 25, 4479279434458851015, NULL };
static panda$core$String $s3816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x72\x61\x6e\x67\x65\x3e", 18, -1293962867859660245, NULL };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x65\x6c\x66\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s4055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s4065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20\x74\x79\x70\x65\x73\x20", 27, 6843179484913102436, NULL };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 18, -4303734005461819726, NULL };
static panda$core$String $s4089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static panda$core$String $s4091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20\x27", 48, 6391877092008549907, NULL };
static panda$core$String $s4097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 46, 6859502832880265551, NULL };
static panda$core$String $s4147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s4187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s4194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s4217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static panda$core$String $s4222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s4234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s4320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6f\x72", 8, 22210198075044275, NULL };
static panda$core$String $s4328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s4330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s4454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x20", 7, 149654778879689, NULL };
static panda$core$String $s4456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s4496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s4498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s4521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s4535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s4555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s4680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s4685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s4691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s4695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 22, 417303976175476333, NULL };
static panda$core$String $s4819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s4872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6d\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s4879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s5391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s5394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
        panda$core$Object* $tmp590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_c->fields, i577);
        org$pandalanguage$pandac$Type* $tmp591 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) $tmp590));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_c->fields, i577, ((panda$core$Object*) $tmp591));
    }
    $l585:;
    int64_t $tmp593 = $tmp580 - i577.value;
    if ($tmp581) goto $l594; else goto $l595;
    $l594:;
    if ((uint64_t) $tmp593 >= 1) goto $l592; else goto $l584;
    $l595:;
    if ((uint64_t) $tmp593 > 1) goto $l592; else goto $l584;
    $l592:;
    i577.value += 1;
    goto $l582;
    $l584:;
    self->symbolTable = old574;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$ListView* methods599;
    panda$collections$ImmutableArray* args601;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp602;
    panda$collections$Array* best604;
    panda$core$Int64$nullable bestCost607;
    panda$collections$Iterator* m$Iter608;
    org$pandalanguage$pandac$MethodRef* m620;
    panda$core$Int64$nullable cost625;
    org$pandalanguage$pandac$IRNode* callTarget635;
    org$pandalanguage$pandac$IRNode* result641;
    panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1039 }));
    PANDA_ASSERT($tmp598.value);
    panda$core$Object* $tmp600 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    methods599 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp600)->payload);
    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp602, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$collections$ImmutableArray* $tmp603 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp602);
    args601 = $tmp603;
    panda$collections$Array* $tmp605 = (panda$collections$Array*) malloc(40);
    $tmp605->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp605->refCount.value = 1;
    panda$collections$Array$init($tmp605);
    best604 = $tmp605;
    bestCost607 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp609 = ((panda$collections$Iterable*) methods599)->$class->itable;
        while ($tmp609->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp609 = $tmp609->next;
        }
        $fn611 $tmp610 = $tmp609->methods[0];
        panda$collections$Iterator* $tmp612 = $tmp610(((panda$collections$Iterable*) methods599));
        m$Iter608 = $tmp612;
        $l613:;
        ITable* $tmp615 = m$Iter608->$class->itable;
        while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp615 = $tmp615->next;
        }
        $fn617 $tmp616 = $tmp615->methods[0];
        panda$core$Bit $tmp618 = $tmp616(m$Iter608);
        panda$core$Bit $tmp619 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp618);
        if (!$tmp619.value) goto $l614;
        {
            ITable* $tmp621 = m$Iter608->$class->itable;
            while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp621 = $tmp621->next;
            }
            $fn623 $tmp622 = $tmp621->methods[1];
            panda$core$Object* $tmp624 = $tmp622(m$Iter608);
            m620 = ((org$pandalanguage$pandac$MethodRef*) $tmp624);
            panda$core$Int64$nullable $tmp626 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m620, ((panda$collections$ListView*) args601), p_target);
            cost625 = $tmp626;
            if (((panda$core$Bit) { !cost625.nonnull }).value) {
            {
                goto $l613;
            }
            }
            if (((panda$core$Bit) { !bestCost607.nonnull }).value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best604, ((panda$core$Object*) m620));
                bestCost607 = cost625;
                goto $l613;
            }
            }
            panda$core$Bit $tmp627 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost625.value), ((panda$core$Int64) bestCost607.value));
            if ($tmp627.value) {
            {
                panda$collections$Array$clear(best604);
                bestCost607 = cost625;
            }
            }
            panda$core$Bit $tmp631;
            if (((panda$core$Bit) { cost625.nonnull }).value) goto $l628; else goto $l629;
            $l628:;
            panda$core$Bit $tmp632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost625.value), ((panda$core$Int64) bestCost607.value));
            $tmp631 = $tmp632;
            goto $l630;
            $l629:;
            $tmp631 = ((panda$core$Bit) { false });
            goto $l630;
            $l630:;
            if ($tmp631.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(best604, ((panda$core$Object*) m620));
            }
            }
        }
        goto $l613;
        $l614:;
    }
    panda$core$Int64 $tmp633 = panda$collections$Array$get_count$R$panda$core$Int64(best604);
    panda$core$Bit $tmp634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp633, ((panda$core$Int64) { 1 }));
    if ($tmp634.value) {
    {
        panda$core$Object* $tmp636 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp637 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp636)->children);
        panda$core$Bit $tmp638 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp637, ((panda$core$Int64) { 0 }));
        if ($tmp638.value) {
        {
            panda$core$Object* $tmp639 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp640 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp639)->children, ((panda$core$Int64) { 0 }));
            callTarget635 = ((org$pandalanguage$pandac$IRNode*) $tmp640);
        }
        }
        else {
        {
            callTarget635 = NULL;
        }
        }
        panda$core$Object* $tmp642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(best604, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp643 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr->position, callTarget635, ((org$pandalanguage$pandac$MethodRef*) $tmp642), ((panda$collections$ListView*) args601));
        result641 = $tmp643;
        if (((panda$core$Bit) { p_target != NULL }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp644 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, result641, p_target);
            result641 = $tmp644;
        }
        }
        return result641;
    }
    }
    org$pandalanguage$pandac$Position$wrapper* $tmp646;
    $tmp646 = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
    $tmp646->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
    $tmp646->refCount = 1;
    $tmp646->value = p_expr->position;
    panda$core$String* $tmp647 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s645, ((panda$core$Object*) $tmp646));
    panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp647, &$s648);
    ITable* $tmp650 = methods599->$class->itable;
    while ($tmp650->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp650 = $tmp650->next;
    }
    $fn652 $tmp651 = $tmp650->methods[0];
    panda$core$Object* $tmp653 = $tmp651(methods599, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp649, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp653)->value)->name);
    panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp654, &$s655);
    panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp656, ((panda$core$Object*) best604));
    panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp657, &$s658);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp659));
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s660);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp661 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp661;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s662);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp663 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp664 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp663);
            return $tmp664;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp665 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp665) goto $l666;
    panda$core$Bit $tmp668 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s667);
    $tmp665 = $tmp668.value;
    $l666:;
    panda$core$Bit $tmp669 = { $tmp665 };
    return $tmp669;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result670;
    org$pandalanguage$pandac$ClassDecl* s678;
    panda$collections$Iterator* f$Iter681;
    org$pandalanguage$pandac$FieldDecl* f693;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp671 = (panda$collections$Array*) malloc(40);
    $tmp671->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp671->refCount.value = 1;
    panda$collections$Array$init($tmp671);
    result670 = $tmp671;
    panda$core$Bit $tmp674 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp675 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp674);
    bool $tmp673 = $tmp675.value;
    if (!$tmp673) goto $l676;
    $tmp673 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l676:;
    panda$core$Bit $tmp677 = { $tmp673 };
    if ($tmp677.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp679 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s678 = $tmp679;
        if (((panda$core$Bit) { s678 != NULL }).value) {
        {
            panda$collections$ListView* $tmp680 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s678);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result670, ((panda$collections$CollectionView*) $tmp680));
        }
        }
    }
    }
    {
        ITable* $tmp682 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp682->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp682 = $tmp682->next;
        }
        $fn684 $tmp683 = $tmp682->methods[0];
        panda$collections$Iterator* $tmp685 = $tmp683(((panda$collections$Iterable*) p_cl->fields));
        f$Iter681 = $tmp685;
        $l686:;
        ITable* $tmp688 = f$Iter681->$class->itable;
        while ($tmp688->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp688 = $tmp688->next;
        }
        $fn690 $tmp689 = $tmp688->methods[0];
        panda$core$Bit $tmp691 = $tmp689(f$Iter681);
        panda$core$Bit $tmp692 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp691);
        if (!$tmp692.value) goto $l687;
        {
            ITable* $tmp694 = f$Iter681->$class->itable;
            while ($tmp694->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp694 = $tmp694->next;
            }
            $fn696 $tmp695 = $tmp694->methods[1];
            panda$core$Object* $tmp697 = $tmp695(f$Iter681);
            f693 = ((org$pandalanguage$pandac$FieldDecl*) $tmp697);
            panda$core$Bit $tmp698 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f693->annotations);
            panda$core$Bit $tmp699 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp698);
            if ($tmp699.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result670, ((panda$core$Object*) f693));
            }
            }
        }
        goto $l686;
        $l687:;
    }
    return ((panda$collections$ListView*) result670);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result700;
    panda$core$Bit $tmp702;
    panda$core$Object* $tmp701 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result700 = ($tmp701 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp701)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result700.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp702, p_f);
        result700 = ((panda$core$Bit$nullable) { $tmp702, true });
        panda$core$Bit$wrapper* $tmp703;
        $tmp703 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp703->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp703->refCount = 1;
        $tmp703->value = ((panda$core$Bit) result700.value);
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) $tmp703));
    }
    }
    return ((panda$core$Bit) result700.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result704;
    panda$core$String* suffix706;
    panda$core$Bit found712;
    panda$collections$Iterator* dir$Iter713;
    panda$io$File* dir725;
    panda$io$File* f730;
    panda$core$String$Index$nullable index734;
    org$pandalanguage$pandac$ClassDecl* parent737;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp738;
    panda$core$Object* $tmp705 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result704 = ((org$pandalanguage$pandac$ClassDecl*) $tmp705);
    if (((panda$core$Bit) { result704 == NULL }).value) {
    {
        panda$core$String* $tmp709 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s707, &$s708);
        panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp709, &$s710);
        suffix706 = $tmp711;
        found712 = ((panda$core$Bit) { false });
        {
            ITable* $tmp714 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp714->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp714 = $tmp714->next;
            }
            $fn716 $tmp715 = $tmp714->methods[0];
            panda$collections$Iterator* $tmp717 = $tmp715(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter713 = $tmp717;
            $l718:;
            ITable* $tmp720 = dir$Iter713->$class->itable;
            while ($tmp720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp720 = $tmp720->next;
            }
            $fn722 $tmp721 = $tmp720->methods[0];
            panda$core$Bit $tmp723 = $tmp721(dir$Iter713);
            panda$core$Bit $tmp724 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp723);
            if (!$tmp724.value) goto $l719;
            {
                ITable* $tmp726 = dir$Iter713->$class->itable;
                while ($tmp726->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp726 = $tmp726->next;
                }
                $fn728 $tmp727 = $tmp726->methods[1];
                panda$core$Object* $tmp729 = $tmp727(dir$Iter713);
                dir725 = ((panda$io$File*) $tmp729);
                panda$io$File* $tmp731 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir725, suffix706);
                f730 = $tmp731;
                panda$core$Bit $tmp732 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f730);
                if ($tmp732.value) {
                {
                    found712 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f730);
                    panda$core$Object* $tmp733 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result704 = ((org$pandalanguage$pandac$ClassDecl*) $tmp733);
                }
                }
            }
            goto $l718;
            $l719:;
        }
    }
    }
    if (((panda$core$Bit) { result704 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp736 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s735);
        index734 = $tmp736;
        if (((panda$core$Bit) { index734.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp738, ((panda$core$String$Index$nullable) { .nonnull = false }), index734, ((panda$core$Bit) { false }));
            panda$core$String* $tmp739 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp738);
            org$pandalanguage$pandac$ClassDecl* $tmp740 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp739);
            parent737 = $tmp740;
            if (((panda$core$Bit) { parent737 != NULL }).value) {
            {
                panda$core$Object* $tmp741 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result704 = ((org$pandalanguage$pandac$ClassDecl*) $tmp741);
            }
            }
        }
        }
    }
    }
    return result704;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result742;
    panda$core$String* suffix744;
    panda$core$Bit found750;
    panda$collections$Iterator* dir$Iter751;
    panda$io$File* dir763;
    panda$io$File* f768;
    panda$core$Int64 oldErrorCount771;
    org$pandalanguage$pandac$Position $tmp777;
    panda$core$Object* $tmp743 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result742 = ((org$pandalanguage$pandac$ClassDecl*) $tmp743);
    if (((panda$core$Bit) { result742 == NULL }).value) {
    {
        panda$core$String* $tmp747 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s745, &$s746);
        panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp747, &$s748);
        suffix744 = $tmp749;
        found750 = ((panda$core$Bit) { false });
        {
            ITable* $tmp752 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp752->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp752 = $tmp752->next;
            }
            $fn754 $tmp753 = $tmp752->methods[0];
            panda$collections$Iterator* $tmp755 = $tmp753(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter751 = $tmp755;
            $l756:;
            ITable* $tmp758 = dir$Iter751->$class->itable;
            while ($tmp758->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp758 = $tmp758->next;
            }
            $fn760 $tmp759 = $tmp758->methods[0];
            panda$core$Bit $tmp761 = $tmp759(dir$Iter751);
            panda$core$Bit $tmp762 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp761);
            if (!$tmp762.value) goto $l757;
            {
                ITable* $tmp764 = dir$Iter751->$class->itable;
                while ($tmp764->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp764 = $tmp764->next;
                }
                $fn766 $tmp765 = $tmp764->methods[1];
                panda$core$Object* $tmp767 = $tmp765(dir$Iter751);
                dir763 = ((panda$io$File*) $tmp767);
                panda$io$File* $tmp769 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir763, suffix744);
                f768 = $tmp769;
                panda$core$Bit $tmp770 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f768);
                if ($tmp770.value) {
                {
                    found750 = ((panda$core$Bit) { true });
                    oldErrorCount771 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f768);
                    panda$core$Object* $tmp772 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result742 = ((org$pandalanguage$pandac$ClassDecl*) $tmp772);
                    bool $tmp773 = ((panda$core$Bit) { result742 == NULL }).value;
                    if (!$tmp773) goto $l774;
                    panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount771);
                    $tmp773 = $tmp775.value;
                    $l774:;
                    panda$core$Bit $tmp776 = { $tmp773 };
                    if ($tmp776.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp777, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s778, ((panda$core$Object*) f768));
                        panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp779, &$s780);
                        panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp781, p_fullName);
                        panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp782, &$s783);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f768, $tmp777, $tmp784);
                    }
                    }
                }
                }
            }
            goto $l756;
            $l757:;
        }
        panda$core$Bit $tmp785 = panda$core$Bit$$NOT$R$panda$core$Bit(found750);
        if ($tmp785.value) {
        {
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s786, suffix744);
            panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, &$s788);
            panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp789, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, &$s791);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp792);
        }
        }
    }
    }
    return result742;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type793;
    org$pandalanguage$pandac$ClassDecl* result800;
    org$pandalanguage$pandac$Annotations* annotations802;
    panda$collections$Array* supertypes808;
    panda$collections$Iterator* intf$Iter812;
    org$pandalanguage$pandac$Type* intf824;
    panda$collections$HashMap* aliases830;
    panda$core$Range$LTpanda$core$Int64$GT $tmp833;
    panda$collections$Iterator* m$Iter868;
    org$pandalanguage$pandac$MethodDecl* m880;
    panda$collections$Array* parameters885;
    panda$collections$Iterator* p$Iter888;
    org$pandalanguage$pandac$MethodDecl$Parameter* p900;
    org$pandalanguage$pandac$MethodDecl* clone908;
    panda$collections$Iterator* f$Iter912;
    org$pandalanguage$pandac$FieldDecl* f924;
    org$pandalanguage$pandac$FieldDecl* clone929;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    org$pandalanguage$pandac$Type* $tmp794 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type793 = $tmp794;
    panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type793->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp795.value) {
    {
        panda$core$Object* $tmp796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type793->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp797 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp796));
        return $tmp797;
    }
    }
    panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type793->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp798.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type793->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp799.value);
    panda$core$Object* $tmp801 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type793)->name));
    result800 = ((org$pandalanguage$pandac$ClassDecl*) $tmp801);
    if (((panda$core$Bit) { result800 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp803 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp803->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp803->refCount.value = 1;
        panda$core$Int64 $tmp805 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp806 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp805);
        panda$core$Int64 $tmp807 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp806);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp803, $tmp807);
        annotations802 = $tmp803;
        panda$collections$Array* $tmp809 = (panda$collections$Array*) malloc(40);
        $tmp809->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp809->refCount.value = 1;
        panda$collections$Array$init($tmp809);
        supertypes808 = $tmp809;
        org$pandalanguage$pandac$Type* $tmp811 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type793, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes808, ((panda$core$Object*) $tmp811));
        {
            ITable* $tmp813 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp813->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp813 = $tmp813->next;
            }
            $fn815 $tmp814 = $tmp813->methods[0];
            panda$collections$Iterator* $tmp816 = $tmp814(((panda$collections$Iterable*) p_cl->rawInterfaces));
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
                org$pandalanguage$pandac$Type* $tmp829 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type793, intf824);
                panda$collections$Array$add$panda$collections$Array$T(supertypes808, ((panda$core$Object*) $tmp829));
            }
            goto $l817;
            $l818:;
        }
        panda$collections$HashMap* $tmp831 = (panda$collections$HashMap*) malloc(56);
        $tmp831->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp831->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp831, p_cl->aliases);
        aliases830 = $tmp831;
        ITable* $tmp834 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp834->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp834 = $tmp834->next;
        }
        $fn836 $tmp835 = $tmp834->methods[0];
        panda$core$Int64 $tmp837 = $tmp835(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp833, ((panda$core$Int64) { 0 }), $tmp837, ((panda$core$Bit) { false }));
        int64_t $tmp839 = $tmp833.min.value;
        panda$core$Int64 i838 = { $tmp839 };
        int64_t $tmp841 = $tmp833.max.value;
        bool $tmp842 = $tmp833.inclusive.value;
        if ($tmp842) goto $l849; else goto $l850;
        $l849:;
        if ($tmp839 <= $tmp841) goto $l843; else goto $l845;
        $l850:;
        if ($tmp839 < $tmp841) goto $l843; else goto $l845;
        $l843:;
        {
            ITable* $tmp851 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp851->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp851 = $tmp851->next;
            }
            $fn853 $tmp852 = $tmp851->methods[0];
            panda$core$Object* $tmp854 = $tmp852(((panda$collections$ListView*) p_cl->parameters), i838);
            panda$core$Int64 $tmp855 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i838, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp856 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type793->subtypes, $tmp855);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases830, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp854))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp856))->name));
        }
        $l846:;
        int64_t $tmp858 = $tmp841 - i838.value;
        if ($tmp842) goto $l859; else goto $l860;
        $l859:;
        if ((uint64_t) $tmp858 >= 1) goto $l857; else goto $l845;
        $l860:;
        if ((uint64_t) $tmp858 > 1) goto $l857; else goto $l845;
        $l857:;
        i838.value += 1;
        goto $l843;
        $l845:;
        org$pandalanguage$pandac$ClassDecl* $tmp863 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
        $tmp863->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp863->refCount.value = 1;
        panda$collections$Array* $tmp865 = (panda$collections$Array*) malloc(40);
        $tmp865->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp865->refCount.value = 1;
        panda$collections$Array$init($tmp865);
        panda$core$Object* $tmp867 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp863, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases830), p_cl->doccomment, annotations802, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type793)->name, ((panda$collections$ListView*) supertypes808), $tmp865, ((org$pandalanguage$pandac$SymbolTable*) $tmp867));
        result800 = $tmp863;
        result800->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp869 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp869->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp869 = $tmp869->next;
            }
            $fn871 $tmp870 = $tmp869->methods[0];
            panda$collections$Iterator* $tmp872 = $tmp870(((panda$collections$Iterable*) p_cl->methods));
            m$Iter868 = $tmp872;
            $l873:;
            ITable* $tmp875 = m$Iter868->$class->itable;
            while ($tmp875->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp875 = $tmp875->next;
            }
            $fn877 $tmp876 = $tmp875->methods[0];
            panda$core$Bit $tmp878 = $tmp876(m$Iter868);
            panda$core$Bit $tmp879 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp878);
            if (!$tmp879.value) goto $l874;
            {
                ITable* $tmp881 = m$Iter868->$class->itable;
                while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp881 = $tmp881->next;
                }
                $fn883 $tmp882 = $tmp881->methods[1];
                panda$core$Object* $tmp884 = $tmp882(m$Iter868);
                m880 = ((org$pandalanguage$pandac$MethodDecl*) $tmp884);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m880);
                panda$collections$Array* $tmp886 = (panda$collections$Array*) malloc(40);
                $tmp886->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp886->refCount.value = 1;
                panda$collections$Array$init($tmp886);
                parameters885 = $tmp886;
                {
                    ITable* $tmp889 = ((panda$collections$Iterable*) m880->parameters)->$class->itable;
                    while ($tmp889->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp889 = $tmp889->next;
                    }
                    $fn891 $tmp890 = $tmp889->methods[0];
                    panda$collections$Iterator* $tmp892 = $tmp890(((panda$collections$Iterable*) m880->parameters));
                    p$Iter888 = $tmp892;
                    $l893:;
                    ITable* $tmp895 = p$Iter888->$class->itable;
                    while ($tmp895->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp895 = $tmp895->next;
                    }
                    $fn897 $tmp896 = $tmp895->methods[0];
                    panda$core$Bit $tmp898 = $tmp896(p$Iter888);
                    panda$core$Bit $tmp899 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp898);
                    if (!$tmp899.value) goto $l894;
                    {
                        ITable* $tmp901 = p$Iter888->$class->itable;
                        while ($tmp901->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp901 = $tmp901->next;
                        }
                        $fn903 $tmp902 = $tmp901->methods[1];
                        panda$core$Object* $tmp904 = $tmp902(p$Iter888);
                        p900 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp904);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp905 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp905->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp905->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp907 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type793, p900->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp905, p900->name, $tmp907);
                        panda$collections$Array$add$panda$collections$Array$T(parameters885, ((panda$core$Object*) $tmp905));
                    }
                    goto $l893;
                    $l894:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp909 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
                $tmp909->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp909->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp911 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type793, m880->returnType);
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp909, result800, ((org$pandalanguage$pandac$Symbol*) m880)->position, m880->doccomment, m880->annotations, m880->methodKind, ((org$pandalanguage$pandac$Symbol*) m880)->name, parameters885, $tmp911, m880->body);
                clone908 = $tmp909;
                panda$collections$Array$add$panda$collections$Array$T(result800->methods, ((panda$core$Object*) clone908));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result800->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone908));
            }
            goto $l873;
            $l874:;
        }
        {
            ITable* $tmp913 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp913 = $tmp913->next;
            }
            $fn915 $tmp914 = $tmp913->methods[0];
            panda$collections$Iterator* $tmp916 = $tmp914(((panda$collections$Iterable*) p_cl->fields));
            f$Iter912 = $tmp916;
            $l917:;
            ITable* $tmp919 = f$Iter912->$class->itable;
            while ($tmp919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp919 = $tmp919->next;
            }
            $fn921 $tmp920 = $tmp919->methods[0];
            panda$core$Bit $tmp922 = $tmp920(f$Iter912);
            panda$core$Bit $tmp923 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp922);
            if (!$tmp923.value) goto $l918;
            {
                ITable* $tmp925 = f$Iter912->$class->itable;
                while ($tmp925->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp925 = $tmp925->next;
                }
                $fn927 $tmp926 = $tmp925->methods[1];
                panda$core$Object* $tmp928 = $tmp926(f$Iter912);
                f924 = ((org$pandalanguage$pandac$FieldDecl*) $tmp928);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f924);
                org$pandalanguage$pandac$FieldDecl* $tmp930 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp930->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp930->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp932 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type793, f924->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp930, result800, ((org$pandalanguage$pandac$Symbol*) f924)->position, f924->doccomment, f924->annotations, f924->fieldKind, ((org$pandalanguage$pandac$Symbol*) f924)->name, $tmp932, f924->rawValue);
                clone929 = $tmp930;
                panda$collections$Array$add$panda$collections$Array$T(result800->fields, ((panda$core$Object*) clone929));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result800->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone929));
            }
            goto $l917;
            $l918:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result800)->name), ((panda$core$Object*) result800));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result800));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, result800);
    }
    }
    return result800;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result933;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp934 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result933 = $tmp934;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp935 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp936 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp935));
            result933 = $tmp936;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp937 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp937;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp938 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result933->annotations);
    if ($tmp938.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp939 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result933, p_type);
        result933 = $tmp939;
    }
    }
    return result933;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl940;
    panda$collections$Set* result942;
    panda$collections$Iterator* intf$Iter947;
    org$pandalanguage$pandac$Type* intf959;
    org$pandalanguage$pandac$ClassDecl* $tmp941 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl940 = $tmp941;
    PANDA_ASSERT(((panda$core$Bit) { cl940 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl940);
    panda$collections$Set* $tmp943 = (panda$collections$Set*) malloc(24);
    $tmp943->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp943->refCount.value = 1;
    panda$collections$Set$init($tmp943);
    result942 = $tmp943;
    if (((panda$core$Bit) { cl940->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp945 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl940->rawSuper);
        panda$collections$Set* $tmp946 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp945);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result942, ((panda$collections$CollectionView*) $tmp946));
    }
    }
    {
        ITable* $tmp948 = ((panda$collections$Iterable*) cl940->rawInterfaces)->$class->itable;
        while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp948 = $tmp948->next;
        }
        $fn950 $tmp949 = $tmp948->methods[0];
        panda$collections$Iterator* $tmp951 = $tmp949(((panda$collections$Iterable*) cl940->rawInterfaces));
        intf$Iter947 = $tmp951;
        $l952:;
        ITable* $tmp954 = intf$Iter947->$class->itable;
        while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp954 = $tmp954->next;
        }
        $fn956 $tmp955 = $tmp954->methods[0];
        panda$core$Bit $tmp957 = $tmp955(intf$Iter947);
        panda$core$Bit $tmp958 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp957);
        if (!$tmp958.value) goto $l953;
        {
            ITable* $tmp960 = intf$Iter947->$class->itable;
            while ($tmp960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp960 = $tmp960->next;
            }
            $fn962 $tmp961 = $tmp960->methods[1];
            panda$core$Object* $tmp963 = $tmp961(intf$Iter947);
            intf959 = ((org$pandalanguage$pandac$Type*) $tmp963);
            org$pandalanguage$pandac$Type* $tmp964 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf959);
            panda$collections$Set* $tmp965 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp964);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result942, ((panda$collections$CollectionView*) $tmp965));
        }
        goto $l952;
        $l953:;
    }
    panda$core$Bit $tmp966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl940->classKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp966.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result942, ((panda$collections$Key*) p_t));
    }
    }
    return result942;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp972;
    panda$core$Bit $tmp967 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp967.value);
    panda$core$Bit $tmp968 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp968.value);
    panda$core$Int64 $tmp969 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp970 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp971 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp969, $tmp970);
    if ($tmp971.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp973 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp972, ((panda$core$Int64) { 0 }), $tmp973, ((panda$core$Bit) { false }));
    int64_t $tmp975 = $tmp972.min.value;
    panda$core$Int64 i974 = { $tmp975 };
    int64_t $tmp977 = $tmp972.max.value;
    bool $tmp978 = $tmp972.inclusive.value;
    if ($tmp978) goto $l985; else goto $l986;
    $l985:;
    if ($tmp975 <= $tmp977) goto $l979; else goto $l981;
    $l986:;
    if ($tmp975 < $tmp977) goto $l979; else goto $l981;
    $l979:;
    {
        panda$core$Object* $tmp987 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i974);
        panda$core$Object* $tmp988 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i974);
        panda$core$Bit $tmp989 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp987), ((org$pandalanguage$pandac$Type*) $tmp988));
        if ($tmp989.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l982:;
    int64_t $tmp991 = $tmp977 - i974.value;
    if ($tmp978) goto $l992; else goto $l993;
    $l992:;
    if ((uint64_t) $tmp991 >= 1) goto $l990; else goto $l981;
    $l993:;
    if ((uint64_t) $tmp991 > 1) goto $l990; else goto $l981;
    $l990:;
    i974.value += 1;
    goto $l979;
    $l981:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl996;
    panda$collections$Iterator* test$Iter998;
    org$pandalanguage$pandac$MethodDecl* test1010;
    panda$collections$Iterator* raw$Iter1023;
    org$pandalanguage$pandac$Type* raw1035;
    org$pandalanguage$pandac$MethodDecl* result1040;
    org$pandalanguage$pandac$ClassDecl* $tmp997 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl996 = $tmp997;
    PANDA_ASSERT(((panda$core$Bit) { cl996 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl996);
    {
        ITable* $tmp999 = ((panda$collections$Iterable*) cl996->methods)->$class->itable;
        while ($tmp999->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp999 = $tmp999->next;
        }
        $fn1001 $tmp1000 = $tmp999->methods[0];
        panda$collections$Iterator* $tmp1002 = $tmp1000(((panda$collections$Iterable*) cl996->methods));
        test$Iter998 = $tmp1002;
        $l1003:;
        ITable* $tmp1005 = test$Iter998->$class->itable;
        while ($tmp1005->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1005 = $tmp1005->next;
        }
        $fn1007 $tmp1006 = $tmp1005->methods[0];
        panda$core$Bit $tmp1008 = $tmp1006(test$Iter998);
        panda$core$Bit $tmp1009 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1008);
        if (!$tmp1009.value) goto $l1004;
        {
            ITable* $tmp1011 = test$Iter998->$class->itable;
            while ($tmp1011->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1011 = $tmp1011->next;
            }
            $fn1013 $tmp1012 = $tmp1011->methods[1];
            panda$core$Object* $tmp1014 = $tmp1012(test$Iter998);
            test1010 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1014);
            panda$core$Bit $tmp1015 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test1010)->name, p_name);
            if ($tmp1015.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test1010);
                org$pandalanguage$pandac$Type* $tmp1016 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test1010);
                org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp1016);
                panda$core$Bit $tmp1018 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1017, p_methodType);
                if ($tmp1018.value) {
                {
                    return test1010;
                }
                }
            }
            }
        }
        goto $l1003;
        $l1004:;
    }
    bool $tmp1019 = p_checkInterfaces.value;
    if ($tmp1019) goto $l1020;
    panda$core$Bit $tmp1021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl996->classKind->$rawValue, ((panda$core$Int64) { 1 }));
    $tmp1019 = $tmp1021.value;
    $l1020:;
    panda$core$Bit $tmp1022 = { $tmp1019 };
    if ($tmp1022.value) {
    {
        {
            ITable* $tmp1024 = ((panda$collections$Iterable*) cl996->rawInterfaces)->$class->itable;
            while ($tmp1024->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1024 = $tmp1024->next;
            }
            $fn1026 $tmp1025 = $tmp1024->methods[0];
            panda$collections$Iterator* $tmp1027 = $tmp1025(((panda$collections$Iterable*) cl996->rawInterfaces));
            raw$Iter1023 = $tmp1027;
            $l1028:;
            ITable* $tmp1030 = raw$Iter1023->$class->itable;
            while ($tmp1030->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1030 = $tmp1030->next;
            }
            $fn1032 $tmp1031 = $tmp1030->methods[0];
            panda$core$Bit $tmp1033 = $tmp1031(raw$Iter1023);
            panda$core$Bit $tmp1034 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1033);
            if (!$tmp1034.value) goto $l1029;
            {
                ITable* $tmp1036 = raw$Iter1023->$class->itable;
                while ($tmp1036->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1036 = $tmp1036->next;
                }
                $fn1038 $tmp1037 = $tmp1036->methods[1];
                panda$core$Object* $tmp1039 = $tmp1037(raw$Iter1023);
                raw1035 = ((org$pandalanguage$pandac$Type*) $tmp1039);
                org$pandalanguage$pandac$Type* $tmp1041 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw1035);
                org$pandalanguage$pandac$MethodDecl* $tmp1042 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1041, p_name, p_methodType, p_checkInterfaces);
                result1040 = $tmp1042;
                if (((panda$core$Bit) { result1040 != NULL }).value) {
                {
                    return result1040;
                }
                }
            }
            goto $l1028;
            $l1029:;
        }
    }
    }
    if (((panda$core$Bit) { cl996->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1043 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl996->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1044 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1043, p_name, p_methodType, p_checkInterfaces);
        return $tmp1044;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1046;
    org$pandalanguage$pandac$Type* owner1048;
    panda$collections$Iterator* raw$Iter1050;
    org$pandalanguage$pandac$Type* raw1062;
    org$pandalanguage$pandac$MethodDecl* result1067;
    org$pandalanguage$pandac$MethodDecl* result1070;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1045.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1047 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1046 = $tmp1047;
    org$pandalanguage$pandac$Type* $tmp1049 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1048 = $tmp1049;
    {
        ITable* $tmp1051 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1051->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1051 = $tmp1051->next;
        }
        $fn1053 $tmp1052 = $tmp1051->methods[0];
        panda$collections$Iterator* $tmp1054 = $tmp1052(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1050 = $tmp1054;
        $l1055:;
        ITable* $tmp1057 = raw$Iter1050->$class->itable;
        while ($tmp1057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1057 = $tmp1057->next;
        }
        $fn1059 $tmp1058 = $tmp1057->methods[0];
        panda$core$Bit $tmp1060 = $tmp1058(raw$Iter1050);
        panda$core$Bit $tmp1061 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1060);
        if (!$tmp1061.value) goto $l1056;
        {
            ITable* $tmp1063 = raw$Iter1050->$class->itable;
            while ($tmp1063->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1063 = $tmp1063->next;
            }
            $fn1065 $tmp1064 = $tmp1063->methods[1];
            panda$core$Object* $tmp1066 = $tmp1064(raw$Iter1050);
            raw1062 = ((org$pandalanguage$pandac$Type*) $tmp1066);
            org$pandalanguage$pandac$Type* $tmp1068 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1048, raw1062);
            org$pandalanguage$pandac$MethodDecl* $tmp1069 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1068, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1046, ((panda$core$Bit) { true }));
            result1067 = $tmp1069;
            if (((panda$core$Bit) { result1067 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1067;
                return result1067;
            }
            }
        }
        goto $l1055;
        $l1056:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1071 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1048, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1072 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1071, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1046, ((panda$core$Bit) { true }));
        result1070 = $tmp1072;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1070;
        return result1070;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1073;
    panda$collections$Array* result1075;
    panda$collections$Iterator* m$Iter1078;
    org$pandalanguage$pandac$MethodDecl* m1090;
    org$pandalanguage$pandac$MethodDecl* found1095;
    org$pandalanguage$pandac$ClassDecl* $tmp1074 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1073 = $tmp1074;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1073 != NULL }).value);
    panda$collections$Array* $tmp1076 = (panda$collections$Array*) malloc(40);
    $tmp1076->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1076->refCount.value = 1;
    panda$collections$Array$init($tmp1076);
    result1075 = $tmp1076;
    {
        ITable* $tmp1079 = ((panda$collections$Iterable*) intfClass1073->methods)->$class->itable;
        while ($tmp1079->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1079 = $tmp1079->next;
        }
        $fn1081 $tmp1080 = $tmp1079->methods[0];
        panda$collections$Iterator* $tmp1082 = $tmp1080(((panda$collections$Iterable*) intfClass1073->methods));
        m$Iter1078 = $tmp1082;
        $l1083:;
        ITable* $tmp1085 = m$Iter1078->$class->itable;
        while ($tmp1085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1085 = $tmp1085->next;
        }
        $fn1087 $tmp1086 = $tmp1085->methods[0];
        panda$core$Bit $tmp1088 = $tmp1086(m$Iter1078);
        panda$core$Bit $tmp1089 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1088);
        if (!$tmp1089.value) goto $l1084;
        {
            ITable* $tmp1091 = m$Iter1078->$class->itable;
            while ($tmp1091->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1091 = $tmp1091->next;
            }
            $fn1093 $tmp1092 = $tmp1091->methods[1];
            panda$core$Object* $tmp1094 = $tmp1092(m$Iter1078);
            m1090 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1094);
            org$pandalanguage$pandac$Type* $tmp1096 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1097 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1090);
            org$pandalanguage$pandac$Type* $tmp1098 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1097);
            org$pandalanguage$pandac$MethodDecl* $tmp1099 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1096, ((org$pandalanguage$pandac$Symbol*) m1090)->name, $tmp1098, ((panda$core$Bit) { false }));
            found1095 = $tmp1099;
            PANDA_ASSERT(((panda$core$Bit) { found1095 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1075, ((panda$core$Object*) found1095));
        }
        goto $l1083;
        $l1084:;
    }
    return ((panda$collections$ListView*) result1075);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1101;
    panda$collections$Iterator* rawIntf$Iter1104;
    org$pandalanguage$pandac$Type* rawIntf1116;
    org$pandalanguage$pandac$ClassDecl* intf1121;
    panda$core$Bit $tmp1100 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1100.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1102 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1101 = $tmp1102;
            if (((panda$core$Bit) { superCl1101 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1103 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1101);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1103));
            }
            }
        }
        }
        {
            ITable* $tmp1105 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1105->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1105 = $tmp1105->next;
            }
            $fn1107 $tmp1106 = $tmp1105->methods[0];
            panda$collections$Iterator* $tmp1108 = $tmp1106(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1104 = $tmp1108;
            $l1109:;
            ITable* $tmp1111 = rawIntf$Iter1104->$class->itable;
            while ($tmp1111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1111 = $tmp1111->next;
            }
            $fn1113 $tmp1112 = $tmp1111->methods[0];
            panda$core$Bit $tmp1114 = $tmp1112(rawIntf$Iter1104);
            panda$core$Bit $tmp1115 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1114);
            if (!$tmp1115.value) goto $l1110;
            {
                ITable* $tmp1117 = rawIntf$Iter1104->$class->itable;
                while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1117 = $tmp1117->next;
                }
                $fn1119 $tmp1118 = $tmp1117->methods[1];
                panda$core$Object* $tmp1120 = $tmp1118(rawIntf$Iter1104);
                rawIntf1116 = ((org$pandalanguage$pandac$Type*) $tmp1120);
                org$pandalanguage$pandac$ClassDecl* $tmp1122 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1116);
                intf1121 = $tmp1122;
                if (((panda$core$Bit) { intf1121 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1123 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1121);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1123));
                }
                }
            }
            goto $l1109;
            $l1110:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1126;
    panda$collections$Iterator* derived$Iter1129;
    org$pandalanguage$pandac$MethodDecl* derived1141;
    panda$core$Bit found1151;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1152;
    org$pandalanguage$pandac$MethodDecl* base1167;
    panda$core$Int64 $tmp1124 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1124, ((panda$core$Int64) { 0 }));
    if ($tmp1125.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1127 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1126 = $tmp1127;
            if (((panda$core$Bit) { superCl1126 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1128 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1126);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1128));
        }
        }
        {
            ITable* $tmp1130 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1130->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1130 = $tmp1130->next;
            }
            $fn1132 $tmp1131 = $tmp1130->methods[0];
            panda$collections$Iterator* $tmp1133 = $tmp1131(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1129 = $tmp1133;
            $l1134:;
            ITable* $tmp1136 = derived$Iter1129->$class->itable;
            while ($tmp1136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1136 = $tmp1136->next;
            }
            $fn1138 $tmp1137 = $tmp1136->methods[0];
            panda$core$Bit $tmp1139 = $tmp1137(derived$Iter1129);
            panda$core$Bit $tmp1140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1139);
            if (!$tmp1140.value) goto $l1135;
            {
                ITable* $tmp1142 = derived$Iter1129->$class->itable;
                while ($tmp1142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1142 = $tmp1142->next;
                }
                $fn1144 $tmp1143 = $tmp1142->methods[1];
                panda$core$Object* $tmp1145 = $tmp1143(derived$Iter1129);
                derived1141 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1145);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1141);
                panda$core$Bit $tmp1147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1141->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
                bool $tmp1146 = $tmp1147.value;
                if ($tmp1146) goto $l1148;
                panda$core$Bit $tmp1149 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1141->annotations);
                $tmp1146 = $tmp1149.value;
                $l1148:;
                panda$core$Bit $tmp1150 = { $tmp1146 };
                if ($tmp1150.value) {
                {
                    goto $l1134;
                }
                }
                found1151 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1153 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1152, ((panda$core$Int64) { 0 }), $tmp1153, ((panda$core$Bit) { false }));
                int64_t $tmp1155 = $tmp1152.min.value;
                panda$core$Int64 i1154 = { $tmp1155 };
                int64_t $tmp1157 = $tmp1152.max.value;
                bool $tmp1158 = $tmp1152.inclusive.value;
                if ($tmp1158) goto $l1165; else goto $l1166;
                $l1165:;
                if ($tmp1155 <= $tmp1157) goto $l1159; else goto $l1161;
                $l1166:;
                if ($tmp1155 < $tmp1157) goto $l1159; else goto $l1161;
                $l1159:;
                {
                    panda$core$Object* $tmp1168 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1154);
                    base1167 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1168);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1167);
                    panda$core$Bit $tmp1169 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1141, base1167);
                    if ($tmp1169.value) {
                    {
                        found1151 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1154, ((panda$core$Object*) derived1141));
                        goto $l1161;
                    }
                    }
                }
                $l1162:;
                int64_t $tmp1171 = $tmp1157 - i1154.value;
                if ($tmp1158) goto $l1172; else goto $l1173;
                $l1172:;
                if ((uint64_t) $tmp1171 >= 1) goto $l1170; else goto $l1161;
                $l1173:;
                if ((uint64_t) $tmp1171 > 1) goto $l1170; else goto $l1161;
                $l1170:;
                i1154.value += 1;
                goto $l1159;
                $l1161:;
                panda$core$Bit $tmp1176 = panda$core$Bit$$NOT$R$panda$core$Bit(found1151);
                if ($tmp1176.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1141));
                }
                }
            }
            goto $l1134;
            $l1135:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1177;
    org$pandalanguage$pandac$Symbol* s1180;
    panda$collections$Iterator* m$Iter1186;
    org$pandalanguage$pandac$MethodDecl* m1198;
    panda$collections$Iterator* p$Iter1205;
    org$pandalanguage$pandac$SymbolTable* p1217;
    panda$collections$Array* children1222;
    panda$collections$Array* types1234;
    panda$collections$Iterator* m$Iter1237;
    org$pandalanguage$pandac$MethodRef* m1249;
    panda$collections$Array* $tmp1178 = (panda$collections$Array*) malloc(40);
    $tmp1178->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1178->refCount.value = 1;
    panda$collections$Array$init($tmp1178);
    methods1177 = $tmp1178;
    org$pandalanguage$pandac$Symbol* $tmp1181 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1180 = $tmp1181;
    PANDA_ASSERT(((panda$core$Bit) { s1180 != NULL }).value);
    panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1180->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1182.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1180));
        org$pandalanguage$pandac$MethodRef* $tmp1183 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1183->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1183->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1183, ((org$pandalanguage$pandac$MethodDecl*) s1180), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1177, ((panda$core$Object*) $tmp1183));
    }
    }
    else {
    {
        panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1180->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1185.value);
        {
            ITable* $tmp1187 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1180)->methods)->$class->itable;
            while ($tmp1187->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1187 = $tmp1187->next;
            }
            $fn1189 $tmp1188 = $tmp1187->methods[0];
            panda$collections$Iterator* $tmp1190 = $tmp1188(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1180)->methods));
            m$Iter1186 = $tmp1190;
            $l1191:;
            ITable* $tmp1193 = m$Iter1186->$class->itable;
            while ($tmp1193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1193 = $tmp1193->next;
            }
            $fn1195 $tmp1194 = $tmp1193->methods[0];
            panda$core$Bit $tmp1196 = $tmp1194(m$Iter1186);
            panda$core$Bit $tmp1197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1196);
            if (!$tmp1197.value) goto $l1192;
            {
                ITable* $tmp1199 = m$Iter1186->$class->itable;
                while ($tmp1199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1199 = $tmp1199->next;
                }
                $fn1201 $tmp1200 = $tmp1199->methods[1];
                panda$core$Object* $tmp1202 = $tmp1200(m$Iter1186);
                m1198 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1202);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1198);
                org$pandalanguage$pandac$MethodRef* $tmp1203 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1203->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1203->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1203, m1198, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1177, ((panda$core$Object*) $tmp1203));
            }
            goto $l1191;
            $l1192:;
        }
    }
    }
    {
        ITable* $tmp1206 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1206->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1206 = $tmp1206->next;
        }
        $fn1208 $tmp1207 = $tmp1206->methods[0];
        panda$collections$Iterator* $tmp1209 = $tmp1207(((panda$collections$Iterable*) p_st->parents));
        p$Iter1205 = $tmp1209;
        $l1210:;
        ITable* $tmp1212 = p$Iter1205->$class->itable;
        while ($tmp1212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1212 = $tmp1212->next;
        }
        $fn1214 $tmp1213 = $tmp1212->methods[0];
        panda$core$Bit $tmp1215 = $tmp1213(p$Iter1205);
        panda$core$Bit $tmp1216 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1215);
        if (!$tmp1216.value) goto $l1211;
        {
            ITable* $tmp1218 = p$Iter1205->$class->itable;
            while ($tmp1218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1218 = $tmp1218->next;
            }
            $fn1220 $tmp1219 = $tmp1218->methods[1];
            panda$core$Object* $tmp1221 = $tmp1219(p$Iter1205);
            p1217 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1221);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1217, p_name, methods1177, p_types);
        }
        goto $l1210;
        $l1211:;
    }
    panda$collections$Array* $tmp1223 = (panda$collections$Array*) malloc(40);
    $tmp1223->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1223->refCount.value = 1;
    panda$collections$Array$init($tmp1223);
    children1222 = $tmp1223;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1222, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1225 = panda$collections$Array$get_count$R$panda$core$Int64(methods1177);
    panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1225, ((panda$core$Int64) { 1 }));
    if ($tmp1226.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1227 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1227->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1227->refCount.value = 1;
        panda$core$Object* $tmp1229 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1177, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1230 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1229));
        panda$core$Object* $tmp1231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1177, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1227, ((panda$core$Int64) { 1002 }), p_position, $tmp1230, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1231)), ((panda$collections$ListView*) children1222));
        return $tmp1227;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1232 = panda$collections$Array$get_count$R$panda$core$Int64(methods1177);
        panda$core$Bit $tmp1233 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1232, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1233.value);
        panda$collections$Array* $tmp1235 = (panda$collections$Array*) malloc(40);
        $tmp1235->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1235->refCount.value = 1;
        panda$collections$Array$init($tmp1235);
        types1234 = $tmp1235;
        {
            ITable* $tmp1238 = ((panda$collections$Iterable*) methods1177)->$class->itable;
            while ($tmp1238->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1238 = $tmp1238->next;
            }
            $fn1240 $tmp1239 = $tmp1238->methods[0];
            panda$collections$Iterator* $tmp1241 = $tmp1239(((panda$collections$Iterable*) methods1177));
            m$Iter1237 = $tmp1241;
            $l1242:;
            ITable* $tmp1244 = m$Iter1237->$class->itable;
            while ($tmp1244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1244 = $tmp1244->next;
            }
            $fn1246 $tmp1245 = $tmp1244->methods[0];
            panda$core$Bit $tmp1247 = $tmp1245(m$Iter1237);
            panda$core$Bit $tmp1248 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1247);
            if (!$tmp1248.value) goto $l1243;
            {
                ITable* $tmp1250 = m$Iter1237->$class->itable;
                while ($tmp1250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1250 = $tmp1250->next;
                }
                $fn1252 $tmp1251 = $tmp1250->methods[1];
                panda$core$Object* $tmp1253 = $tmp1251(m$Iter1237);
                m1249 = ((org$pandalanguage$pandac$MethodRef*) $tmp1253);
                org$pandalanguage$pandac$Type* $tmp1254 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1249);
                panda$collections$Array$add$panda$collections$Array$T(types1234, ((panda$core$Object*) $tmp1254));
            }
            goto $l1242;
            $l1243:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1255 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1255->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1255->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1257 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1257->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1257->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1257, ((panda$collections$ListView*) types1234));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1255, ((panda$core$Int64) { 1003 }), p_position, $tmp1257, ((panda$core$Object*) methods1177), ((panda$collections$ListView*) children1222));
        return $tmp1255;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1259;
    org$pandalanguage$pandac$FieldDecl* f1275;
    panda$collections$Array* children1278;
    org$pandalanguage$pandac$Type* effectiveType1283;
    org$pandalanguage$pandac$IRNode* result1288;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1260 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1259 = $tmp1260;
            if (((panda$core$Bit) { cl1259 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1261 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1259);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1259, $tmp1261);
                org$pandalanguage$pandac$IRNode* $tmp1262 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1262->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1262->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1264 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1265 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1259);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1262, ((panda$core$Int64) { 1001 }), p_position, $tmp1264, $tmp1265);
                return $tmp1262;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1266 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1266);
            org$pandalanguage$pandac$IRNode* $tmp1267 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1267->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1267->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1269 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1270 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1267, ((panda$core$Int64) { 1001 }), p_position, $tmp1269, $tmp1270);
            return $tmp1267;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1271 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1272 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1271);
            return $tmp1272;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1273 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1273->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1273->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1273, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1273;
        }
        break;
        case 202:
        {
            f1275 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1275);
            org$pandalanguage$pandac$Type* $tmp1276 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1277 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1275->type, $tmp1276);
            if ($tmp1277.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1279 = (panda$collections$Array*) malloc(40);
            $tmp1279->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1279->refCount.value = 1;
            panda$collections$Array$init($tmp1279);
            children1278 = $tmp1279;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1281.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1282);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1284 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1275->type);
                effectiveType1283 = $tmp1284;
                panda$core$Bit $tmp1285 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1275->annotations);
                if ($tmp1285.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1278, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1286 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1275->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1287 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1286);
                    panda$collections$Array$add$panda$collections$Array$T(children1278, ((panda$core$Object*) $tmp1287));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1289 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1289->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1289->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1289, ((panda$core$Int64) { 1026 }), p_position, f1275->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1278));
                result1288 = $tmp1289;
                panda$core$Bit $tmp1291 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1283, result1288->type);
                if ($tmp1291.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1292 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1288, p_position, ((panda$core$Bit) { false }), effectiveType1283);
                    result1288 = $tmp1292;
                }
                }
                return result1288;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1293 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1293->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1293->refCount.value = 1;
                panda$core$Object* $tmp1295 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1296 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1295));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1293, ((panda$core$Int64) { 1025 }), p_position, $tmp1296);
                panda$collections$Array$add$panda$collections$Array$T(children1278, ((panda$core$Object*) $tmp1293));
                org$pandalanguage$pandac$IRNode* $tmp1297 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1297->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1297->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1297, ((panda$core$Int64) { 1026 }), p_position, f1275->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1278));
                return $tmp1297;
            }
            }
        }
        break;
        case 209:
        {
            org$pandalanguage$pandac$IRNode* $tmp1299 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1299->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1299->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1301 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Symbol($tmp1299, ((panda$core$Int64) { 1046 }), p_position, $tmp1301, p_s);
            return $tmp1299;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_context, org$pandalanguage$pandac$Type* p_raw) {
    panda$collections$HashMap* typeMap1308;
    org$pandalanguage$pandac$Type* base1311;
    org$pandalanguage$pandac$ClassDecl* cl1313;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1315;
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
            panda$core$Int64 $tmp1302 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1302, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1303.value);
            panda$core$Object* $tmp1304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1305 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1304), p_raw);
            return $tmp1305;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1306 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1307 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1306, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1307.value);
            panda$collections$HashMap* $tmp1309 = (panda$collections$HashMap*) malloc(56);
            $tmp1309->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1309->refCount.value = 1;
            panda$collections$HashMap$init($tmp1309);
            typeMap1308 = $tmp1309;
            panda$core$Object* $tmp1312 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1311 = ((org$pandalanguage$pandac$Type*) $tmp1312);
            org$pandalanguage$pandac$ClassDecl* $tmp1314 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1311)->name);
            cl1313 = $tmp1314;
            PANDA_ASSERT(((panda$core$Bit) { cl1313 != NULL }).value);
            panda$core$Int64 $tmp1316 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1315, ((panda$core$Int64) { 1 }), $tmp1316, ((panda$core$Bit) { false }));
            int64_t $tmp1318 = $tmp1315.min.value;
            panda$core$Int64 i1317 = { $tmp1318 };
            int64_t $tmp1320 = $tmp1315.max.value;
            bool $tmp1321 = $tmp1315.inclusive.value;
            if ($tmp1321) goto $l1328; else goto $l1329;
            $l1328:;
            if ($tmp1318 <= $tmp1320) goto $l1322; else goto $l1324;
            $l1329:;
            if ($tmp1318 < $tmp1320) goto $l1322; else goto $l1324;
            $l1322:;
            {
                panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1313)->name, &$s1330);
                panda$core$Int64 $tmp1332 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1317, ((panda$core$Int64) { 1 }));
                ITable* $tmp1333 = ((panda$collections$ListView*) cl1313->parameters)->$class->itable;
                while ($tmp1333->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1333 = $tmp1333->next;
                }
                $fn1335 $tmp1334 = $tmp1333->methods[0];
                panda$core$Object* $tmp1336 = $tmp1334(((panda$collections$ListView*) cl1313->parameters), $tmp1332);
                panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1336))->name);
                panda$core$Object* $tmp1338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1317);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1308, ((panda$collections$Key*) $tmp1337), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1338)));
            }
            $l1325:;
            int64_t $tmp1340 = $tmp1320 - i1317.value;
            if ($tmp1321) goto $l1341; else goto $l1342;
            $l1341:;
            if ((uint64_t) $tmp1340 >= 1) goto $l1339; else goto $l1324;
            $l1342:;
            if ((uint64_t) $tmp1340 > 1) goto $l1339; else goto $l1324;
            $l1339:;
            i1317.value += 1;
            goto $l1322;
            $l1324:;
            org$pandalanguage$pandac$Type* $tmp1345 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1308);
            return $tmp1345;
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
    panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp1346.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1347;
    }
    }
    panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 26 }));
    if ($tmp1348.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
        return $tmp1349;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1351 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1350);
    if ($tmp1351.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1352;
    }
    }
    panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1353.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1354 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1354;
    }
    }
    return p_type;
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char) {
    panda$core$Int32 c1358;
    panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_char->kind, ((panda$core$Int64) { 1033 }));
    PANDA_ASSERT($tmp1355.value);
    panda$core$Int64 $tmp1356 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_char->payload));
    panda$core$Bit $tmp1357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1356, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1357.value);
    panda$core$Char32 $tmp1359 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_char->payload), ((panda$core$Int64) { 0 }));
    panda$core$Int32 $tmp1360 = panda$core$Char32$convert$R$panda$core$Int32($tmp1359);
    c1358 = $tmp1360;
    panda$core$Bit $tmp1361 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1358, ((panda$core$Int32) { 255 }));
    if ($tmp1361.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1362 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1358, ((panda$core$Int32) { 65535 }));
    if ($tmp1362.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    return ((panda$core$Int64) { 32 });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char, org$pandalanguage$pandac$IRNode* p_other) {
    panda$core$Int64 result1363;
    org$pandalanguage$pandac$Type* $match$1044_91373;
    panda$core$Int64 $tmp1364 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_char);
    result1363 = $tmp1364;
    panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1365 = $tmp1366.value;
    if (!$tmp1365) goto $l1367;
    panda$core$Int64 $tmp1368 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_other->payload));
    panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1368, ((panda$core$Int64) { 1 }));
    $tmp1365 = $tmp1369.value;
    $l1367:;
    panda$core$Bit $tmp1370 = { $tmp1365 };
    if ($tmp1370.value) {
    {
        panda$core$Int64 $tmp1371 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_other);
        panda$core$Int64 $tmp1372 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1363, $tmp1371);
        result1363 = $tmp1372;
    }
    }
    {
        $match$1044_91373 = p_other->type;
        org$pandalanguage$pandac$Type* $tmp1374 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1375 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1044_91373, $tmp1374);
        if ($tmp1375.value) {
        {
            panda$core$Int64 $tmp1376 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1363, ((panda$core$Int64) { 16 }));
            result1363 = $tmp1376;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp1377 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1378 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1044_91373, $tmp1377);
        if ($tmp1378.value) {
        {
            panda$core$Int64 $tmp1379 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1363, ((panda$core$Int64) { 32 }));
            result1363 = $tmp1379;
        }
        }
        }
    }
    switch (result1363.value) {
        case 8:
        {
            org$pandalanguage$pandac$Type* $tmp1380 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            return $tmp1380;
        }
        break;
        case 16:
        {
            org$pandalanguage$pandac$Type* $tmp1381 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            return $tmp1381;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$Type* $tmp1382 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            return $tmp1382;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* start1383;
    org$pandalanguage$pandac$Type* end1396;
    org$pandalanguage$pandac$Type* step1429;
    panda$collections$ImmutableArray* args1469;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1470;
    org$pandalanguage$pandac$IRNode* c1472;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1385 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1385)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1384 = $tmp1386.value;
            if (!$tmp1384) goto $l1387;
            panda$core$Object* $tmp1388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp1389 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1388)->payload));
            panda$core$Bit $tmp1390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1389, ((panda$core$Int64) { 1 }));
            $tmp1384 = $tmp1390.value;
            $l1387:;
            panda$core$Bit $tmp1391 = { $tmp1384 };
            if ($tmp1391.value) {
            {
                panda$core$Object* $tmp1392 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1393 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1394 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1392), ((org$pandalanguage$pandac$IRNode*) $tmp1393));
                start1383 = $tmp1394;
            }
            }
            else {
            {
                panda$core$Object* $tmp1395 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                start1383 = ((org$pandalanguage$pandac$IRNode*) $tmp1395)->type;
            }
            }
            panda$core$Object* $tmp1398 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1398)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1397 = $tmp1399.value;
            if (!$tmp1397) goto $l1400;
            panda$core$Object* $tmp1401 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1402 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1401)->payload));
            panda$core$Bit $tmp1403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1402, ((panda$core$Int64) { 1 }));
            $tmp1397 = $tmp1403.value;
            $l1400:;
            panda$core$Bit $tmp1404 = { $tmp1397 };
            if ($tmp1404.value) {
            {
                panda$core$Object* $tmp1405 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1406 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1407 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1405), ((org$pandalanguage$pandac$IRNode*) $tmp1406));
                end1396 = $tmp1407;
            }
            }
            else {
            {
                panda$core$Object* $tmp1408 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                end1396 = ((org$pandalanguage$pandac$IRNode*) $tmp1408)->type;
            }
            }
            panda$core$Int64 $tmp1409 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1409, ((panda$core$Int64) { 2 }));
            if ($tmp1410.value) {
            {
                panda$core$Object* $tmp1411 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1411)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1412.value) {
                {
                    panda$core$Object* $tmp1413 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1413)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1414.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1415 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1416 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1415);
                        org$pandalanguage$pandac$Type* $tmp1417 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1416);
                        return $tmp1417;
                    }
                    }
                    org$pandalanguage$pandac$Type* $tmp1418 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1396);
                    org$pandalanguage$pandac$Type* $tmp1419 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1418);
                    org$pandalanguage$pandac$Type* $tmp1420 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1419);
                    return $tmp1420;
                }
                }
                panda$core$Object* $tmp1421 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1421)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1422.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1423 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1383);
                    org$pandalanguage$pandac$Type* $tmp1424 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1423);
                    org$pandalanguage$pandac$Type* $tmp1425 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1424);
                    return $tmp1425;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1426 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1383, self, end1396);
                org$pandalanguage$pandac$Type* $tmp1427 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1426);
                org$pandalanguage$pandac$Type* $tmp1428 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1427);
                return $tmp1428;
            }
            }
            panda$core$Object* $tmp1430 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1431 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$IRNode*) $tmp1430)->type);
            step1429 = $tmp1431;
            panda$core$Object* $tmp1432 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1432)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1433.value) {
            {
                panda$core$Object* $tmp1434 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1434)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1435.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1436 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, step1429);
                    org$pandalanguage$pandac$Type* $tmp1437 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1436);
                    org$pandalanguage$pandac$Type* $tmp1438 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1437);
                    return $tmp1438;
                }
                }
                panda$core$Bit $tmp1439 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1396);
                if ($tmp1439.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1440 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1396);
                    org$pandalanguage$pandac$Type* $tmp1441 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1440);
                    org$pandalanguage$pandac$Type* $tmp1442 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1441);
                    return $tmp1442;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1443 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(end1396, self, step1429);
                org$pandalanguage$pandac$Type* $tmp1444 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1443);
                org$pandalanguage$pandac$Type* $tmp1445 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1444);
                org$pandalanguage$pandac$Type* $tmp1446 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1445);
                return $tmp1446;
            }
            }
            panda$core$Object* $tmp1447 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1447)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1448.value) {
            {
                panda$core$Bit $tmp1449 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1383);
                if ($tmp1449.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1450 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1383);
                    org$pandalanguage$pandac$Type* $tmp1451 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1450);
                    org$pandalanguage$pandac$Type* $tmp1452 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1451);
                    return $tmp1452;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1453 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1383, self, step1429);
                org$pandalanguage$pandac$Type* $tmp1454 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1453);
                org$pandalanguage$pandac$Type* $tmp1455 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1454);
                org$pandalanguage$pandac$Type* $tmp1456 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1455);
                return $tmp1456;
            }
            }
            panda$core$Bit $tmp1458 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1383);
            bool $tmp1457 = $tmp1458.value;
            if (!$tmp1457) goto $l1459;
            panda$core$Bit $tmp1460 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1396);
            $tmp1457 = $tmp1460.value;
            $l1459:;
            panda$core$Bit $tmp1461 = { $tmp1457 };
            if ($tmp1461.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1462 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1383, self, end1396);
                org$pandalanguage$pandac$Type* $tmp1463 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1462);
                org$pandalanguage$pandac$Type* $tmp1464 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1463);
                return $tmp1464;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1465 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1383, self, end1396);
            org$pandalanguage$pandac$Type* $tmp1466 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1465, self, step1429);
            org$pandalanguage$pandac$Type* $tmp1467 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1466);
            org$pandalanguage$pandac$Type* $tmp1468 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1467);
            return $tmp1468;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1470, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1471 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1470);
            args1469 = $tmp1471;
            panda$core$Object* $tmp1473 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1475 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1473), &$s1474, ((panda$collections$ListView*) args1469));
            c1472 = $tmp1475;
            if (((panda$core$Bit) { c1472 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1476 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1476;
            }
            }
            return c1472->type;
        }
        break;
        case 1046:
        {
            org$pandalanguage$pandac$Type* $tmp1477 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload)->owner);
            return $tmp1477;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1478 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1478;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1489;
    panda$core$Int64$nullable result1493;
    panda$core$Int64$nullable best1502;
    panda$collections$Iterator* t$Iter1503;
    org$pandalanguage$pandac$Type* t1515;
    panda$core$Int64$nullable cost1520;
    org$pandalanguage$pandac$ClassDecl* cl1534;
    panda$core$Int64$nullable cost1536;
    panda$collections$Iterator* intf$Iter1541;
    org$pandalanguage$pandac$Type* intf1553;
    panda$core$Int64$nullable cost1558;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1479 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1479.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1480 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1481 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1480);
    if ($tmp1481.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1482.value) {
    {
        panda$core$Bit $tmp1483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1483.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1484 = $tmp1485.value;
    if (!$tmp1484) goto $l1486;
    panda$core$Bit $tmp1487 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1484 = $tmp1487.value;
    $l1486:;
    panda$core$Bit $tmp1488 = { $tmp1484 };
    if ($tmp1488.value) {
    {
        panda$core$Object* $tmp1490 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1491 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1490), p_target);
        result1489 = $tmp1491;
        if (((panda$core$Bit) { !result1489.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1492 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1489.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1492, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1495 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1494));
            result1493 = $tmp1495;
            if (((panda$core$Bit) { !result1493.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1496 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1493.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1496, true });
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
            panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1497.value) {
            {
                panda$core$Object* $tmp1498 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1499 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1498), p_target);
                return $tmp1499;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1500 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1501 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1500, p_target);
            return $tmp1501;
        }
        break;
        case 17:
        {
            best1502 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1504 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1504->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1504 = $tmp1504->next;
                }
                $fn1506 $tmp1505 = $tmp1504->methods[0];
                panda$collections$Iterator* $tmp1507 = $tmp1505(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1503 = $tmp1507;
                $l1508:;
                ITable* $tmp1510 = t$Iter1503->$class->itable;
                while ($tmp1510->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1510 = $tmp1510->next;
                }
                $fn1512 $tmp1511 = $tmp1510->methods[0];
                panda$core$Bit $tmp1513 = $tmp1511(t$Iter1503);
                panda$core$Bit $tmp1514 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1513);
                if (!$tmp1514.value) goto $l1509;
                {
                    ITable* $tmp1516 = t$Iter1503->$class->itable;
                    while ($tmp1516->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1516 = $tmp1516->next;
                    }
                    $fn1518 $tmp1517 = $tmp1516->methods[1];
                    panda$core$Object* $tmp1519 = $tmp1517(t$Iter1503);
                    t1515 = ((org$pandalanguage$pandac$Type*) $tmp1519);
                    panda$core$Int64$nullable $tmp1521 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1515, p_target);
                    cost1520 = $tmp1521;
                    bool $tmp1522 = ((panda$core$Bit) { cost1520.nonnull }).value;
                    if (!$tmp1522) goto $l1523;
                    bool $tmp1524 = ((panda$core$Bit) { !best1502.nonnull }).value;
                    if ($tmp1524) goto $l1525;
                    panda$core$Bit $tmp1526 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1520.value), ((panda$core$Int64) best1502.value));
                    $tmp1524 = $tmp1526.value;
                    $l1525:;
                    panda$core$Bit $tmp1527 = { $tmp1524 };
                    $tmp1522 = $tmp1527.value;
                    $l1523:;
                    panda$core$Bit $tmp1528 = { $tmp1522 };
                    if ($tmp1528.value) {
                    {
                        best1502 = cost1520;
                    }
                    }
                }
                goto $l1508;
                $l1509:;
            }
            return best1502;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1529 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1529;
        }
        break;
    }
    panda$core$Bit $tmp1530 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1531 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1530);
    if ($tmp1531.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1532 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1533 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1532);
    if ($tmp1533.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1535 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1534 = $tmp1535;
    PANDA_ASSERT(((panda$core$Bit) { cl1534 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1534);
    if (((panda$core$Bit) { cl1534->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1537 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1534->rawSuper);
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
    }
    {
        ITable* $tmp1542 = ((panda$collections$Iterable*) cl1534->rawInterfaces)->$class->itable;
        while ($tmp1542->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1542 = $tmp1542->next;
        }
        $fn1544 $tmp1543 = $tmp1542->methods[0];
        panda$collections$Iterator* $tmp1545 = $tmp1543(((panda$collections$Iterable*) cl1534->rawInterfaces));
        intf$Iter1541 = $tmp1545;
        $l1546:;
        ITable* $tmp1548 = intf$Iter1541->$class->itable;
        while ($tmp1548->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1548 = $tmp1548->next;
        }
        $fn1550 $tmp1549 = $tmp1548->methods[0];
        panda$core$Bit $tmp1551 = $tmp1549(intf$Iter1541);
        panda$core$Bit $tmp1552 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1551);
        if (!$tmp1552.value) goto $l1547;
        {
            ITable* $tmp1554 = intf$Iter1541->$class->itable;
            while ($tmp1554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1554 = $tmp1554->next;
            }
            $fn1556 $tmp1555 = $tmp1554->methods[1];
            panda$core$Object* $tmp1557 = $tmp1555(intf$Iter1541);
            intf1553 = ((org$pandalanguage$pandac$Type*) $tmp1557);
            org$pandalanguage$pandac$Type* $tmp1559 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1553);
            org$pandalanguage$pandac$Type* $tmp1560 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1559);
            panda$core$Int64$nullable $tmp1561 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1560, p_target);
            cost1558 = $tmp1561;
            if (((panda$core$Bit) { cost1558.nonnull }).value) {
            {
                panda$core$Int64 $tmp1562 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1558.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1562, true });
            }
            }
        }
        goto $l1546;
        $l1547:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1564 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1563 = $tmp1564.value;
    if (!$tmp1563) goto $l1565;
    panda$core$Bit $tmp1566 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1563 = $tmp1566.value;
    $l1565:;
    panda$core$Bit $tmp1567 = { $tmp1563 };
    if ($tmp1567.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1569 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1568 = $tmp1569.value;
    if (!$tmp1568) goto $l1570;
    panda$core$Bit $tmp1571 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1568 = $tmp1571.value;
    $l1570:;
    panda$core$Bit $tmp1572 = { $tmp1568 };
    if ($tmp1572.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1574 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1573 = $tmp1574.value;
    if (!$tmp1573) goto $l1575;
    panda$core$Bit $tmp1576 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1573 = $tmp1576.value;
    $l1575:;
    panda$core$Bit $tmp1577 = { $tmp1573 };
    if ($tmp1577.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1578 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1578.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1579 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1579.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1580 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1580.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 base1581;
    panda$core$Int64$nullable cost1595;
    panda$core$String* s1655;
    panda$collections$Iterator* utf161666;
    panda$collections$ListView* methods1685;
    panda$collections$ImmutableArray* args1687;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1688;
    panda$core$Int64$nullable bestCost1690;
    panda$collections$Iterator* m$Iter1691;
    org$pandalanguage$pandac$MethodRef* m1703;
    panda$core$Int64$nullable cost1708;
    panda$core$Int64$nullable cost11731;
    panda$core$Int64$nullable cost21735;
    panda$core$Int64 cost1744;
    panda$core$Int64$nullable cost11758;
    panda$core$Int64$nullable cost21762;
    panda$core$Int64$nullable cost31767;
    panda$collections$Array* args1775;
    org$pandalanguage$pandac$ClassDecl* targetClass1788;
    panda$collections$Iterator* m$Iter1790;
    org$pandalanguage$pandac$MethodDecl* m1802;
    panda$core$Int64$nullable cost1814;
    panda$core$Int64$nullable cost1819;
    base1581 = ((panda$core$Int64) { 0 });
    panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1583 = $tmp1584.value;
    if (!$tmp1583) goto $l1585;
    panda$core$Bit $tmp1586 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1587 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1586);
    $tmp1583 = $tmp1587.value;
    $l1585:;
    panda$core$Bit $tmp1588 = { $tmp1583 };
    bool $tmp1582 = $tmp1588.value;
    if (!$tmp1582) goto $l1589;
    panda$core$Int64 $tmp1590 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
    panda$core$Bit $tmp1591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1590, ((panda$core$Int64) { 1 }));
    $tmp1582 = $tmp1591.value;
    $l1589:;
    panda$core$Bit $tmp1592 = { $tmp1582 };
    if ($tmp1592.value) {
    {
        base1581 = ((panda$core$Int64) { 3 });
    }
    }
    panda$core$Bit $tmp1593 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1593.value) {
    {
        return ((panda$core$Int64$nullable) { base1581, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1594.value) {
            {
                return ((panda$core$Int64$nullable) { base1581, true });
            }
            }
            panda$core$Object* $tmp1596 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1597 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1596));
            cost1595 = $tmp1597;
            if (((panda$core$Bit) { !cost1595.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1598.value) {
            {
                panda$core$Int64 $tmp1599 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) cost1595.value));
                return ((panda$core$Int64$nullable) { $tmp1599, true });
            }
            }
            panda$core$Int64 $tmp1600 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) cost1595.value));
            panda$core$Int64 $tmp1601 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1600, ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1601, true });
        }
        break;
        case 22:
        {
            panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1581, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1602.value);
            panda$core$Int64$nullable $tmp1603 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1603;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1604.value) {
            {
                return ((panda$core$Int64$nullable) { base1581, true });
            }
            }
            panda$core$Bit $tmp1605 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1605.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1606 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1607 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1606, p_target);
                return $tmp1607;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1609 = $tmp1610.value;
            if (!$tmp1609) goto $l1611;
            panda$core$Int64 $tmp1612 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1613 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1612);
            panda$core$Int64 $tmp1614 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1615 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1613, $tmp1614);
            $tmp1609 = $tmp1615.value;
            $l1611:;
            panda$core$Bit $tmp1616 = { $tmp1609 };
            bool $tmp1608 = $tmp1616.value;
            if ($tmp1608) goto $l1617;
            panda$core$Bit $tmp1619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1618 = $tmp1619.value;
            if (!$tmp1618) goto $l1620;
            panda$core$Int64 $tmp1621 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1622 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1623 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1621, $tmp1622);
            $tmp1618 = $tmp1623.value;
            $l1620:;
            panda$core$Bit $tmp1624 = { $tmp1618 };
            $tmp1608 = $tmp1624.value;
            $l1617:;
            panda$core$Bit $tmp1625 = { $tmp1608 };
            if ($tmp1625.value) {
            {
                return ((panda$core$Int64$nullable) { base1581, true });
            }
            }
            panda$core$Bit $tmp1626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1626.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1627 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1628 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1627);
            if ($tmp1628.value) {
            {
                panda$core$Bit $tmp1629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1581, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1629.value);
                org$pandalanguage$pandac$Type* $tmp1630 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1631 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1630, p_target);
                return $tmp1631;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1632 = $tmp1633.value;
            if (!$tmp1632) goto $l1634;
            panda$core$Int64 $tmp1635 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1636 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1635);
            panda$core$Int64 $tmp1637 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1636);
            panda$core$Int64 $tmp1638 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1639 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1637, $tmp1638);
            $tmp1632 = $tmp1639.value;
            $l1634:;
            panda$core$Bit $tmp1640 = { $tmp1632 };
            if ($tmp1640.value) {
            {
                return ((panda$core$Int64$nullable) { base1581, true });
            }
            }
            panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1641.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1642 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1643 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1642);
            if ($tmp1643.value) {
            {
                panda$core$Bit $tmp1644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1581, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1644.value);
                org$pandalanguage$pandac$Type* $tmp1645 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1646 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1645, p_target);
                return $tmp1646;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1647.value) {
            {
                return ((panda$core$Int64$nullable) { base1581, true });
            }
            }
            panda$core$Bit $tmp1648 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1648);
            if ($tmp1649.value) {
            {
                panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1581, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1650.value);
                org$pandalanguage$pandac$Type* $tmp1651 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1652 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1651, p_target);
                return $tmp1652;
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1653 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1654 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1653);
            if ($tmp1654.value) {
            {
                s1655 = ((panda$core$String*) p_expr->payload);
                panda$core$Int64 $tmp1657 = panda$core$String$length$R$panda$core$Int64(s1655);
                panda$core$Bit $tmp1658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1657, ((panda$core$Int64) { 1 }));
                bool $tmp1656 = $tmp1658.value;
                if (!$tmp1656) goto $l1659;
                panda$core$Char32 $tmp1660 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(s1655, ((panda$core$Int64) { 0 }));
                panda$core$UInt32 $tmp1661 = panda$core$Char32$convert$R$panda$core$UInt32($tmp1660);
                panda$core$Bit $tmp1662 = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit($tmp1661, ((panda$core$UInt32) { 255 }));
                $tmp1656 = $tmp1662.value;
                $l1659:;
                panda$core$Bit $tmp1663 = { $tmp1656 };
                if ($tmp1663.value) {
                {
                    return ((panda$core$Int64$nullable) { base1581, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1664 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1665 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1664);
            if ($tmp1665.value) {
            {
                panda$collections$Iterator* $tmp1667 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                utf161666 = $tmp1667;
                ITable* $tmp1668 = utf161666->$class->itable;
                while ($tmp1668->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1668 = $tmp1668->next;
                }
                $fn1670 $tmp1669 = $tmp1668->methods[0];
                panda$core$Bit $tmp1671 = $tmp1669(utf161666);
                if ($tmp1671.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1672 = utf161666->$class->itable;
                while ($tmp1672->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1672 = $tmp1672->next;
                }
                $fn1674 $tmp1673 = $tmp1672->methods[1];
                $tmp1673(utf161666);
                ITable* $tmp1675 = utf161666->$class->itable;
                while ($tmp1675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1675 = $tmp1675->next;
                }
                $fn1677 $tmp1676 = $tmp1675->methods[0];
                panda$core$Bit $tmp1678 = $tmp1676(utf161666);
                if ($tmp1678.value) {
                {
                    panda$core$Int64 $tmp1679 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1679, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1680 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1681 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1680);
            if ($tmp1681.value) {
            {
                panda$core$Int64 $tmp1682 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
                panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1682, ((panda$core$Int64) { 1 }));
                if ($tmp1683.value) {
                {
                    panda$core$Int64 $tmp1684 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1684, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1686 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1685 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1686)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1688, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1689 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1688);
            args1687 = $tmp1689;
            bestCost1690 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1692 = ((panda$collections$Iterable*) methods1685)->$class->itable;
                while ($tmp1692->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1692 = $tmp1692->next;
                }
                $fn1694 $tmp1693 = $tmp1692->methods[0];
                panda$collections$Iterator* $tmp1695 = $tmp1693(((panda$collections$Iterable*) methods1685));
                m$Iter1691 = $tmp1695;
                $l1696:;
                ITable* $tmp1698 = m$Iter1691->$class->itable;
                while ($tmp1698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1698 = $tmp1698->next;
                }
                $fn1700 $tmp1699 = $tmp1698->methods[0];
                panda$core$Bit $tmp1701 = $tmp1699(m$Iter1691);
                panda$core$Bit $tmp1702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1701);
                if (!$tmp1702.value) goto $l1697;
                {
                    ITable* $tmp1704 = m$Iter1691->$class->itable;
                    while ($tmp1704->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1704 = $tmp1704->next;
                    }
                    $fn1706 $tmp1705 = $tmp1704->methods[1];
                    panda$core$Object* $tmp1707 = $tmp1705(m$Iter1691);
                    m1703 = ((org$pandalanguage$pandac$MethodRef*) $tmp1707);
                    panda$core$Int64$nullable $tmp1709 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1703, ((panda$collections$ListView*) args1687), p_target);
                    cost1708 = $tmp1709;
                    if (((panda$core$Bit) { !cost1708.nonnull }).value) {
                    {
                        goto $l1696;
                    }
                    }
                    bool $tmp1710 = ((panda$core$Bit) { !bestCost1690.nonnull }).value;
                    if ($tmp1710) goto $l1711;
                    panda$core$Bit $tmp1712 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1708.value), ((panda$core$Int64) bestCost1690.value));
                    $tmp1710 = $tmp1712.value;
                    $l1711:;
                    panda$core$Bit $tmp1713 = { $tmp1710 };
                    if ($tmp1713.value) {
                    {
                        bestCost1690 = cost1708;
                    }
                    }
                }
                goto $l1696;
                $l1697:;
            }
            return bestCost1690;
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1714 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1714.value) {
            {
                panda$core$Int64 $tmp1715 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1716 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1715, ((panda$core$Int64) { 2 }));
                if ($tmp1716.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1718 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1718)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1717 = $tmp1719.value;
                if (!$tmp1717) goto $l1720;
                panda$core$Object* $tmp1721 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1721)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1717 = $tmp1722.value;
                $l1720:;
                panda$core$Bit $tmp1723 = { $tmp1717 };
                if ($tmp1723.value) {
                {
                    panda$core$Object* $tmp1724 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1724)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1725.value) {
                    {
                        panda$core$Object* $tmp1726 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1726)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1728 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1727));
                        if ($tmp1728.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1581, true });
                        }
                        }
                        panda$core$Int64 $tmp1729 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1729, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1730.value);
                panda$core$Object* $tmp1732 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1733 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1734 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1732), ((org$pandalanguage$pandac$Type*) $tmp1733));
                cost11731 = $tmp1734;
                if (((panda$core$Bit) { !cost11731.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1736 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1737 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1738 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1736), ((org$pandalanguage$pandac$Type*) $tmp1737));
                cost21735 = $tmp1738;
                if (((panda$core$Bit) { !cost21735.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1739 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) cost11731.value));
                panda$core$Int64 $tmp1740 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1739, ((panda$core$Int64) cost21735.value));
                return ((panda$core$Int64$nullable) { $tmp1740, true });
            }
            }
            panda$core$Bit $tmp1741 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1741.value) {
            {
                panda$core$Int64 $tmp1742 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1743 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1742, ((panda$core$Int64) { 3 }));
                if ($tmp1743.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1746 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1746)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1745 = $tmp1747.value;
                if (!$tmp1745) goto $l1748;
                panda$core$Object* $tmp1749 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1749)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1745 = $tmp1750.value;
                $l1748:;
                panda$core$Bit $tmp1751 = { $tmp1745 };
                if ($tmp1751.value) {
                {
                    panda$core$Object* $tmp1752 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1752)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1753.value) {
                    {
                        panda$core$Object* $tmp1754 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1755 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1754)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1756 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1755));
                        if ($tmp1756.value) {
                        {
                            cost1744 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1744 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1757.value);
                    panda$core$Object* $tmp1759 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1760 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1761 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1759), ((org$pandalanguage$pandac$Type*) $tmp1760));
                    cost11758 = $tmp1761;
                    if (((panda$core$Bit) { !cost11758.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1763 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1765 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1763), ((org$pandalanguage$pandac$Type*) $tmp1764));
                    cost21762 = $tmp1765;
                    if (((panda$core$Bit) { !cost21762.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1766 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11758.value), ((panda$core$Int64) cost21762.value));
                    cost1744 = $tmp1766;
                }
                }
                panda$core$Object* $tmp1768 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1769 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1770 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1768), ((org$pandalanguage$pandac$Type*) $tmp1769));
                cost31767 = $tmp1770;
                if (((panda$core$Bit) { !cost31767.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1771 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, cost1744);
                panda$core$Int64 $tmp1772 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1771, ((panda$core$Int64) cost31767.value));
                return ((panda$core$Int64$nullable) { $tmp1772, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1773 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1774 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1773, p_target);
            return $tmp1774;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1776 = (panda$collections$Array*) malloc(40);
            $tmp1776->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1776->refCount.value = 1;
            panda$collections$Array$init($tmp1776);
            args1775 = $tmp1776;
            panda$core$Object* $tmp1778 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1775, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1778)));
            panda$core$Bit $tmp1779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1581, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1779.value);
            panda$core$Object* $tmp1780 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1782 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1780), &$s1781, ((panda$collections$ListView*) args1775));
            panda$core$Int64$nullable $tmp1783 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1782, p_target);
            return $tmp1783;
        }
        break;
        case 1046:
        {
            org$pandalanguage$pandac$Type* $tmp1784 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload)->owner);
            panda$core$Int64$nullable $tmp1785 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1784, p_target);
            return $tmp1785;
        }
        break;
    }
    panda$core$Bit $tmp1786 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1787 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1786);
    if ($tmp1787.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1789 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1788 = $tmp1789;
    if (((panda$core$Bit) { targetClass1788 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1791 = ((panda$collections$Iterable*) targetClass1788->methods)->$class->itable;
        while ($tmp1791->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1791 = $tmp1791->next;
        }
        $fn1793 $tmp1792 = $tmp1791->methods[0];
        panda$collections$Iterator* $tmp1794 = $tmp1792(((panda$collections$Iterable*) targetClass1788->methods));
        m$Iter1790 = $tmp1794;
        $l1795:;
        ITable* $tmp1797 = m$Iter1790->$class->itable;
        while ($tmp1797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1797 = $tmp1797->next;
        }
        $fn1799 $tmp1798 = $tmp1797->methods[0];
        panda$core$Bit $tmp1800 = $tmp1798(m$Iter1790);
        panda$core$Bit $tmp1801 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1800);
        if (!$tmp1801.value) goto $l1796;
        {
            ITable* $tmp1803 = m$Iter1790->$class->itable;
            while ($tmp1803->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1803 = $tmp1803->next;
            }
            $fn1805 $tmp1804 = $tmp1803->methods[1];
            panda$core$Object* $tmp1806 = $tmp1804(m$Iter1790);
            m1802 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1806);
            panda$core$Bit $tmp1807 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1802->annotations);
            if ($tmp1807.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1802);
                panda$core$Bit $tmp1809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1802->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
                bool $tmp1808 = $tmp1809.value;
                if (!$tmp1808) goto $l1810;
                panda$core$Int64 $tmp1811 = panda$collections$Array$get_count$R$panda$core$Int64(m1802->parameters);
                panda$core$Bit $tmp1812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1811, ((panda$core$Int64) { 1 }));
                $tmp1808 = $tmp1812.value;
                $l1810:;
                panda$core$Bit $tmp1813 = { $tmp1808 };
                if ($tmp1813.value) {
                {
                    panda$core$Object* $tmp1815 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1802->parameters, ((panda$core$Int64) { 0 }));
                    panda$core$Int64$nullable $tmp1816 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1815)->type);
                    cost1814 = $tmp1816;
                    if (((panda$core$Bit) { cost1814.nonnull }).value) {
                    {
                        panda$core$Int64 $tmp1817 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) cost1814.value));
                        panda$core$Int64 $tmp1818 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1817, ((panda$core$Int64) { 2 }));
                        return ((panda$core$Int64$nullable) { $tmp1818, true });
                    }
                    }
                }
                }
            }
            }
        }
        goto $l1795;
        $l1796:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1820 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1819 = $tmp1820;
    if (((panda$core$Bit) { cost1819.nonnull }).value) {
    {
        panda$core$Int64 $tmp1821 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1581, ((panda$core$Int64) cost1819.value));
        return ((panda$core$Int64$nullable) { $tmp1821, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1830;
    org$pandalanguage$pandac$IRNode* intermediate1836;
    org$pandalanguage$pandac$IRNode* coerced1868;
    org$pandalanguage$pandac$IRNode* coerced1894;
    org$pandalanguage$pandac$IRNode* coerced1907;
    org$pandalanguage$pandac$IRNode* varType1921;
    panda$collections$Array* args1931;
    org$pandalanguage$pandac$IRNode* target1939;
    panda$collections$Array* args1950;
    org$pandalanguage$pandac$IRNode* target1962;
    panda$collections$Array* args1973;
    org$pandalanguage$pandac$IRNode* target1981;
    org$pandalanguage$pandac$Type* param1997;
    org$pandalanguage$pandac$IRNode* start1999;
    org$pandalanguage$pandac$IRNode* end2002;
    panda$collections$Array* args2005;
    org$pandalanguage$pandac$IRNode* target2011;
    org$pandalanguage$pandac$Type* endPoint2027;
    org$pandalanguage$pandac$IRNode* start2029;
    org$pandalanguage$pandac$IRNode* end2032;
    org$pandalanguage$pandac$IRNode* step2035;
    panda$collections$Array* args2039;
    org$pandalanguage$pandac$IRNode* target2045;
    panda$collections$ImmutableArray* args2053;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2054;
    org$pandalanguage$pandac$ChoiceEntry* c2060;
    org$pandalanguage$pandac$IRNode* owner2063;
    panda$collections$Array* args2068;
    panda$core$UInt64 value2071;
    panda$collections$Array* children2106;
    org$pandalanguage$pandac$IRNode* intermediate2113;
    org$pandalanguage$pandac$ClassDecl* cl2118;
    panda$collections$Iterator* m$Iter2120;
    org$pandalanguage$pandac$MethodDecl* m2132;
    org$pandalanguage$pandac$IRNode* type2149;
    panda$collections$Array* args2154;
    panda$collections$Array* children2159;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1822 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1822.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1823 = $tmp1824.value;
    if (!$tmp1823) goto $l1825;
    panda$core$Bit $tmp1826 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1823 = $tmp1826.value;
    $l1825:;
    panda$core$Bit $tmp1827 = { $tmp1823 };
    if ($tmp1827.value) {
    {
        panda$core$Object* $tmp1828 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1829 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1828), p_target);
        if ($tmp1829.value) {
        {
            panda$collections$Array* $tmp1831 = (panda$collections$Array*) malloc(40);
            $tmp1831->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1831->refCount.value = 1;
            panda$collections$Array$init($tmp1831);
            children1830 = $tmp1831;
            panda$collections$Array$add$panda$collections$Array$T(children1830, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1833 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1833->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1833->refCount.value = 1;
            panda$core$Bit$wrapper* $tmp1835;
            $tmp1835 = (panda$core$Bit$wrapper*) malloc(13);
            $tmp1835->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
            $tmp1835->refCount = 1;
            $tmp1835->value = ((panda$core$Bit) { false });
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1833, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) $tmp1835), ((panda$collections$ListView*) children1830));
            return $tmp1833;
        }
        }
        panda$core$Object* $tmp1837 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1838 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1837));
        intermediate1836 = $tmp1838;
        org$pandalanguage$pandac$IRNode* $tmp1839 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1836, p_target);
        return $tmp1839;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1840 = $tmp1841.value;
            if (!$tmp1840) goto $l1842;
            panda$core$Int64 $tmp1843 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1844 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1845 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1843, $tmp1844);
            $tmp1840 = $tmp1845.value;
            $l1842:;
            panda$core$Bit $tmp1846 = { $tmp1840 };
            if ($tmp1846.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1847 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1847->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1847->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1847, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1847;
            }
            }
            else {
            panda$core$Bit $tmp1850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1849 = $tmp1850.value;
            if (!$tmp1849) goto $l1851;
            panda$core$Int64 $tmp1852 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1853 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1854 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1852, $tmp1853);
            $tmp1849 = $tmp1854.value;
            $l1851:;
            panda$core$Bit $tmp1855 = { $tmp1849 };
            if ($tmp1855.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1856 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1856->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1856->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1856, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1856;
            }
            }
            else {
            panda$core$Bit $tmp1858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1858.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1859 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1859->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1859->refCount.value = 1;
                panda$core$Real64 $tmp1861 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1859, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1861);
                return $tmp1859;
            }
            }
            }
            }
            panda$core$Bit $tmp1863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1862 = $tmp1863.value;
            if (!$tmp1862) goto $l1864;
            panda$core$Bit $tmp1865 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1866 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1865);
            $tmp1862 = $tmp1866.value;
            $l1864:;
            panda$core$Bit $tmp1867 = { $tmp1862 };
            if ($tmp1867.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1869 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1870 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1869);
                coerced1868 = $tmp1870;
                if (((panda$core$Bit) { coerced1868 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1871 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1868, p_target);
                return $tmp1871;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1872 = $tmp1873.value;
            if (!$tmp1872) goto $l1874;
            panda$core$Int64 $tmp1875 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1876 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1875);
            panda$core$Int64 $tmp1877 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1876);
            panda$core$Int64 $tmp1878 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1879 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1877, $tmp1878);
            $tmp1872 = $tmp1879.value;
            $l1874:;
            panda$core$Bit $tmp1880 = { $tmp1872 };
            if ($tmp1880.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1881 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1881->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1881->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1881, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1881;
            }
            }
            else {
            panda$core$Bit $tmp1883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1883.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1884 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1884->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1884->refCount.value = 1;
                panda$core$Real64 $tmp1886 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                panda$core$Real64 $tmp1887 = panda$core$Real64$$SUB$R$panda$core$Real64($tmp1886);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1884, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1887);
                return $tmp1884;
            }
            }
            }
            panda$core$Bit $tmp1889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1888 = $tmp1889.value;
            if (!$tmp1888) goto $l1890;
            panda$core$Bit $tmp1891 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1892 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1891);
            $tmp1888 = $tmp1892.value;
            $l1890:;
            panda$core$Bit $tmp1893 = { $tmp1888 };
            if ($tmp1893.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1895 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1896 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1895);
                coerced1894 = $tmp1896;
                if (((panda$core$Bit) { coerced1894 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1897 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1894, p_target);
                return $tmp1897;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1898.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1899 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1899->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1899->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1899, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, ((panda$core$Real64$wrapper*) p_expr->payload)->value);
                return $tmp1899;
            }
            }
            panda$core$Bit $tmp1902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1901 = $tmp1902.value;
            if (!$tmp1901) goto $l1903;
            panda$core$Bit $tmp1904 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1905 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1904);
            $tmp1901 = $tmp1905.value;
            $l1903:;
            panda$core$Bit $tmp1906 = { $tmp1901 };
            if ($tmp1906.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1908 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1909 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1908);
                coerced1907 = $tmp1909;
                if (((panda$core$Bit) { coerced1907 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1910 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1907, p_target);
                return $tmp1910;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1911 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1912 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1911);
            if ($tmp1912.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1913 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1913->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1913->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1913, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1913;
            }
            }
            panda$core$Bit $tmp1916 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1915 = $tmp1916.value;
            if (!$tmp1915) goto $l1917;
            org$pandalanguage$pandac$Type* $tmp1918 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1919 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1918);
            $tmp1915 = $tmp1919.value;
            $l1917:;
            panda$core$Bit $tmp1920 = { $tmp1915 };
            if ($tmp1920.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1922 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1923 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1922);
                varType1921 = $tmp1923;
                if (((panda$core$Bit) { varType1921 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1924 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1921, p_target);
                    return $tmp1924;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1926 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1927 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1926);
            bool $tmp1925 = $tmp1927.value;
            if (!$tmp1925) goto $l1928;
            panda$core$Int64$nullable $tmp1929 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1925 = ((panda$core$Bit) { $tmp1929.nonnull }).value;
            $l1928:;
            panda$core$Bit $tmp1930 = { $tmp1925 };
            if ($tmp1930.value) {
            {
                panda$collections$Array* $tmp1932 = (panda$collections$Array*) malloc(40);
                $tmp1932->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1932->refCount.value = 1;
                panda$collections$Array$init($tmp1932);
                args1931 = $tmp1932;
                org$pandalanguage$pandac$IRNode* $tmp1934 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1934->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1934->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1936 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1937 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1938 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1937);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1934, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1936, $tmp1938);
                panda$collections$Array$add$panda$collections$Array$T(args1931, ((panda$core$Object*) $tmp1934));
                org$pandalanguage$pandac$IRNode* $tmp1940 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1940->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1940->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1942 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1940, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1942, p_target);
                target1939 = $tmp1940;
                org$pandalanguage$pandac$IRNode* $tmp1943 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1939, ((panda$collections$ListView*) args1931));
                return $tmp1943;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1945 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1946 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1945);
            bool $tmp1944 = $tmp1946.value;
            if (!$tmp1944) goto $l1947;
            panda$core$Int64$nullable $tmp1948 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1944 = ((panda$core$Bit) { $tmp1948.nonnull }).value;
            $l1947:;
            panda$core$Bit $tmp1949 = { $tmp1944 };
            if ($tmp1949.value) {
            {
                panda$collections$Array* $tmp1951 = (panda$collections$Array*) malloc(40);
                $tmp1951->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1951->refCount.value = 1;
                panda$collections$Array$init($tmp1951);
                args1950 = $tmp1951;
                org$pandalanguage$pandac$IRNode* $tmp1953 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1953->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1953->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1955 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1956 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1957 = $tmp1956->$class->itable;
                while ($tmp1957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1957 = $tmp1957->next;
                }
                $fn1959 $tmp1958 = $tmp1957->methods[1];
                panda$core$Object* $tmp1960 = $tmp1958($tmp1956);
                panda$core$UInt64 $tmp1961 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1960)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1953, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1955, $tmp1961);
                panda$collections$Array$add$panda$collections$Array$T(args1950, ((panda$core$Object*) $tmp1953));
                org$pandalanguage$pandac$IRNode* $tmp1963 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1963->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1963->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1965 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1963, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1965, p_target);
                target1962 = $tmp1963;
                org$pandalanguage$pandac$IRNode* $tmp1966 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1962, ((panda$collections$ListView*) args1950));
                return $tmp1966;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1968 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1969 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1968);
            bool $tmp1967 = $tmp1969.value;
            if (!$tmp1967) goto $l1970;
            panda$core$Int64$nullable $tmp1971 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1967 = ((panda$core$Bit) { $tmp1971.nonnull }).value;
            $l1970:;
            panda$core$Bit $tmp1972 = { $tmp1967 };
            if ($tmp1972.value) {
            {
                panda$collections$Array* $tmp1974 = (panda$collections$Array*) malloc(40);
                $tmp1974->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1974->refCount.value = 1;
                panda$collections$Array$init($tmp1974);
                args1973 = $tmp1974;
                org$pandalanguage$pandac$IRNode* $tmp1976 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1976->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1976->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1978 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1979 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1980 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1979);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1976, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1978, $tmp1980);
                panda$collections$Array$add$panda$collections$Array$T(args1973, ((panda$core$Object*) $tmp1976));
                org$pandalanguage$pandac$IRNode* $tmp1982 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1982->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1982->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1984 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1982, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1984, p_target);
                target1981 = $tmp1982;
                org$pandalanguage$pandac$IRNode* $tmp1985 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1981, ((panda$collections$ListView*) args1973));
                return $tmp1985;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1986 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1986.value) {
            {
                panda$core$Int64 $tmp1987 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1988 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1987, ((panda$core$Int64) { 2 }));
                if ($tmp1988.value) {
                {
                    panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1989, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1990, &$s1991);
                    panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1992, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1993, &$s1994);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1995);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1996.value);
                panda$core$Object* $tmp1998 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1997 = ((org$pandalanguage$pandac$Type*) $tmp1998);
                panda$core$Object* $tmp2000 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2001 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2000), param1997);
                start1999 = $tmp2001;
                if (((panda$core$Bit) { start1999 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp2003 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp2004 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2003), param1997);
                end2002 = $tmp2004;
                if (((panda$core$Bit) { end2002 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp2006 = (panda$collections$Array*) malloc(40);
                $tmp2006->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2006->refCount.value = 1;
                panda$collections$Array$init($tmp2006);
                args2005 = $tmp2006;
                panda$collections$Array$add$panda$collections$Array$T(args2005, ((panda$core$Object*) start1999));
                panda$collections$Array$add$panda$collections$Array$T(args2005, ((panda$core$Object*) end2002));
                org$pandalanguage$pandac$IRNode* $tmp2008 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2008->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2008->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2010 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2008, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp2010, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args2005, ((panda$core$Object*) $tmp2008));
                org$pandalanguage$pandac$IRNode* $tmp2012 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2012->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2012->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2014 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2012, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2014, p_target);
                target2011 = $tmp2012;
                org$pandalanguage$pandac$IRNode* $tmp2015 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2011, ((panda$collections$ListView*) args2005));
                return $tmp2015;
            }
            }
            else {
            panda$core$Bit $tmp2016 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp2016.value) {
            {
                panda$core$Int64 $tmp2017 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp2018 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2017, ((panda$core$Int64) { 3 }));
                if ($tmp2018.value) {
                {
                    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2019, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
                    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2022, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2025);
                    return NULL;
                }
                }
                panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp2026.value);
                panda$core$Object* $tmp2028 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint2027 = ((org$pandalanguage$pandac$Type*) $tmp2028);
                panda$core$Object* $tmp2030 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2031 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2030), endPoint2027);
                start2029 = $tmp2031;
                if (((panda$core$Bit) { start2029 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp2033 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp2034 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2033), endPoint2027);
                end2032 = $tmp2034;
                panda$core$Object* $tmp2036 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp2037 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp2038 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2036), ((org$pandalanguage$pandac$Type*) $tmp2037));
                step2035 = $tmp2038;
                panda$collections$Array* $tmp2040 = (panda$collections$Array*) malloc(40);
                $tmp2040->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2040->refCount.value = 1;
                panda$collections$Array$init($tmp2040);
                args2039 = $tmp2040;
                panda$collections$Array$add$panda$collections$Array$T(args2039, ((panda$core$Object*) start2029));
                panda$collections$Array$add$panda$collections$Array$T(args2039, ((panda$core$Object*) end2032));
                panda$collections$Array$add$panda$collections$Array$T(args2039, ((panda$core$Object*) step2035));
                org$pandalanguage$pandac$IRNode* $tmp2042 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2042->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2042->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2044 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2042, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp2044, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args2039, ((panda$core$Object*) $tmp2042));
                org$pandalanguage$pandac$IRNode* $tmp2046 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2046->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2046->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2048 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2046, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2048, p_target);
                target2045 = $tmp2046;
                org$pandalanguage$pandac$IRNode* $tmp2049 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2045, ((panda$collections$ListView*) args2039));
                return $tmp2049;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp2050 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp2051 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2050, p_target);
                return $tmp2051;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp2052 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp2052;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2054, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp2055 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp2054);
            args2053 = $tmp2055;
            panda$core$Object* $tmp2056 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2058 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2056), &$s2057, ((panda$collections$ListView*) args2053), p_target);
            org$pandalanguage$pandac$IRNode* $tmp2059 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2058, p_target);
            return $tmp2059;
        }
        break;
        case 1046:
        {
            c2060 = ((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload);
            panda$core$Int64 $tmp2061 = panda$collections$Array$get_count$R$panda$core$Int64(c2060->fields);
            panda$core$Bit $tmp2062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2061, ((panda$core$Int64) { 0 }));
            if ($tmp2062.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2064 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2064->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2064->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2066 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2067 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(c2060->owner);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2064, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2066, $tmp2067);
                owner2063 = $tmp2064;
                panda$collections$Array* $tmp2069 = (panda$collections$Array*) malloc(40);
                $tmp2069->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2069->refCount.value = 1;
                panda$collections$Array$init($tmp2069);
                args2068 = $tmp2069;
                panda$core$UInt64 $tmp2072 = panda$core$Int64$convert$R$panda$core$UInt64(c2060->rawValue);
                value2071 = $tmp2072;
                org$pandalanguage$pandac$IRNode* $tmp2073 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2073->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2073->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2075 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2071);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2073, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp2075, value2071);
                panda$collections$Array$add$panda$collections$Array$T(args2068, ((panda$core$Object*) $tmp2073));
                org$pandalanguage$pandac$IRNode* $tmp2076 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, owner2063, ((panda$collections$ListView*) args2068));
                org$pandalanguage$pandac$IRNode* $tmp2077 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2076, p_target);
                return $tmp2077;
            }
            }
            panda$core$String* $tmp2079 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2078, ((panda$core$Object*) p_expr));
            panda$core$String* $tmp2081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2079, &$s2080);
            panda$core$Int64 $tmp2082 = panda$collections$Array$get_count$R$panda$core$Int64(c2060->fields);
            panda$core$Int64$wrapper* $tmp2083;
            $tmp2083 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp2083->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp2083->refCount = 1;
            $tmp2083->value = $tmp2082;
            panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2081, ((panda$core$Object*) $tmp2083));
            panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2084, &$s2085);
            panda$core$Int64 $tmp2088 = panda$collections$Array$get_count$R$panda$core$Int64(c2060->fields);
            panda$core$Bit $tmp2089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2088, ((panda$core$Int64) { 1 }));
            panda$core$Bit$wrapper* $tmp2090;
            $tmp2090 = (panda$core$Bit$wrapper*) malloc(13);
            $tmp2090->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
            $tmp2090->refCount = 1;
            $tmp2090->value = $tmp2089;
            ITable* $tmp2092 = ((panda$core$Formattable*) $tmp2090)->$class->itable;
            while ($tmp2092->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2092 = $tmp2092->next;
            }
            $fn2094 $tmp2093 = $tmp2092->methods[0];
            panda$core$String* $tmp2095 = $tmp2093(((panda$core$Formattable*) $tmp2090), &$s2091);
            panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2087, $tmp2095);
            panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2096, &$s2097);
            panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2086, $tmp2098);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2099);
            return NULL;
        }
        break;
    }
    panda$core$Bit $tmp2100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2100.value) {
    {
        panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2101.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2102 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2102->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2102->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2102, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp2102;
        }
        }
        panda$core$Object* $tmp2104 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2105 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp2104));
        if ($tmp2105.value) {
        {
            panda$collections$Array* $tmp2107 = (panda$collections$Array*) malloc(40);
            $tmp2107->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2107->refCount.value = 1;
            panda$collections$Array$init($tmp2107);
            children2106 = $tmp2107;
            panda$collections$Array$add$panda$collections$Array$T(children2106, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp2109 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2109->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2109->refCount.value = 1;
            panda$core$Bit$wrapper* $tmp2111;
            $tmp2111 = (panda$core$Bit$wrapper*) malloc(13);
            $tmp2111->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
            $tmp2111->refCount = 1;
            $tmp2111->value = ((panda$core$Bit) { false });
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2109, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) $tmp2111), ((panda$collections$ListView*) children2106));
            return $tmp2109;
        }
        }
        panda$core$Bit $tmp2112 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2112.value) {
        {
            panda$core$Object* $tmp2114 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2115 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp2114));
            intermediate2113 = $tmp2115;
            org$pandalanguage$pandac$IRNode* $tmp2116 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate2113, p_target);
            return $tmp2116;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp2117 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp2117.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2119 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl2118 = $tmp2119;
        if (((panda$core$Bit) { cl2118 != NULL }).value) {
        {
            {
                ITable* $tmp2121 = ((panda$collections$Iterable*) cl2118->methods)->$class->itable;
                while ($tmp2121->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2121 = $tmp2121->next;
                }
                $fn2123 $tmp2122 = $tmp2121->methods[0];
                panda$collections$Iterator* $tmp2124 = $tmp2122(((panda$collections$Iterable*) cl2118->methods));
                m$Iter2120 = $tmp2124;
                $l2125:;
                ITable* $tmp2127 = m$Iter2120->$class->itable;
                while ($tmp2127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2127 = $tmp2127->next;
                }
                $fn2129 $tmp2128 = $tmp2127->methods[0];
                panda$core$Bit $tmp2130 = $tmp2128(m$Iter2120);
                panda$core$Bit $tmp2131 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2130);
                if (!$tmp2131.value) goto $l2126;
                {
                    ITable* $tmp2133 = m$Iter2120->$class->itable;
                    while ($tmp2133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2133 = $tmp2133->next;
                    }
                    $fn2135 $tmp2134 = $tmp2133->methods[1];
                    panda$core$Object* $tmp2136 = $tmp2134(m$Iter2120);
                    m2132 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2136);
                    panda$core$Bit $tmp2137 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m2132->annotations);
                    if ($tmp2137.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2132);
                        panda$core$Bit $tmp2140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2132->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
                        bool $tmp2139 = $tmp2140.value;
                        if (!$tmp2139) goto $l2141;
                        panda$core$Int64 $tmp2142 = panda$collections$Array$get_count$R$panda$core$Int64(m2132->parameters);
                        panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2142, ((panda$core$Int64) { 1 }));
                        $tmp2139 = $tmp2143.value;
                        $l2141:;
                        panda$core$Bit $tmp2144 = { $tmp2139 };
                        bool $tmp2138 = $tmp2144.value;
                        if (!$tmp2138) goto $l2145;
                        panda$core$Object* $tmp2146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m2132->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp2147 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2146)->type);
                        $tmp2138 = ((panda$core$Bit) { $tmp2147.nonnull }).value;
                        $l2145:;
                        panda$core$Bit $tmp2148 = { $tmp2138 };
                        if ($tmp2148.value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp2150 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp2150->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp2150->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp2152 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp2153 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2118);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2150, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2152, $tmp2153);
                            type2149 = $tmp2150;
                            panda$collections$Array* $tmp2155 = (panda$collections$Array*) malloc(40);
                            $tmp2155->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp2155->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp2155, ((panda$core$Int64) { 1 }));
                            args2154 = $tmp2155;
                            panda$collections$Array$add$panda$collections$Array$T(args2154, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp2157 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type2149, ((panda$collections$ListView*) args2154));
                            org$pandalanguage$pandac$IRNode* $tmp2158 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2157, p_target);
                            return $tmp2158;
                        }
                        }
                    }
                    }
                }
                goto $l2125;
                $l2126:;
            }
        }
        }
        panda$collections$Array* $tmp2160 = (panda$collections$Array*) malloc(40);
        $tmp2160->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2160->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp2160, ((panda$core$Int64) { 1 }));
        children2159 = $tmp2160;
        panda$collections$Array$add$panda$collections$Array$T(children2159, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp2162 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2162->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2162->refCount.value = 1;
        panda$core$Bit$wrapper* $tmp2164;
        $tmp2164 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp2164->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp2164->refCount = 1;
        $tmp2164->value = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2162, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) $tmp2164), ((panda$collections$ListView*) children2159));
        return $tmp2162;
    }
    }
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2165, ((panda$core$Object*) p_target));
    panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2167);
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2168, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2171);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result2172;
    org$pandalanguage$pandac$IRNode* $tmp2173 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result2172 = $tmp2173;
    bool $tmp2174 = ((panda$core$Bit) { result2172 == NULL }).value;
    if ($tmp2174) goto $l2175;
    panda$core$Bit $tmp2176 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result2172->type, p_target);
    $tmp2174 = $tmp2176.value;
    $l2175:;
    panda$core$Bit $tmp2177 = { $tmp2174 };
    PANDA_ASSERT($tmp2177.value);
    return result2172;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp2179 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp2178 = $tmp2179.value;
    if (!$tmp2178) goto $l2180;
    panda$core$Bit $tmp2181 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp2178 = $tmp2181.value;
    $l2180:;
    panda$core$Bit $tmp2182 = { $tmp2178 };
    if ($tmp2182.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp2183 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp2183.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2185 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp2184 = $tmp2185.value;
    if (!$tmp2184) goto $l2186;
    panda$core$Bit $tmp2187 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp2184 = $tmp2187.value;
    $l2186:;
    panda$core$Bit $tmp2188 = { $tmp2184 };
    if ($tmp2188.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp2189.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp2190 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp2190.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result2192;
    org$pandalanguage$pandac$IRNode* resolved2199;
    panda$core$Int64$nullable $tmp2191 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp2191.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2193 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result2192 = $tmp2193;
    panda$core$Bit $tmp2195 = panda$core$Bit$$NOT$R$panda$core$Bit(result2192);
    bool $tmp2194 = $tmp2195.value;
    if (!$tmp2194) goto $l2196;
    panda$core$Bit $tmp2197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp2194 = $tmp2197.value;
    $l2196:;
    panda$core$Bit $tmp2198 = { $tmp2194 };
    if ($tmp2198.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2200 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved2199 = $tmp2200;
        bool $tmp2201 = ((panda$core$Bit) { resolved2199 != NULL }).value;
        if (!$tmp2201) goto $l2202;
        $tmp2201 = ((panda$core$Bit) { ((panda$core$Object*) resolved2199) != ((panda$core$Object*) p_node) }).value;
        $l2202:;
        panda$core$Bit $tmp2203 = { $tmp2201 };
        if ($tmp2203.value) {
        {
            panda$core$Bit $tmp2204 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved2199, p_target);
            result2192 = $tmp2204;
        }
        }
    }
    }
    return result2192;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2225;
    panda$collections$Array* children2228;
    panda$core$Bit $tmp2205 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp2205.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2206 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2207 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2206);
    PANDA_ASSERT($tmp2207.value);
    bool $tmp2208 = p_isExplicit.value;
    if (!$tmp2208) goto $l2209;
    panda$core$Bit $tmp2210 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp2211 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2210);
    $tmp2208 = $tmp2211.value;
    $l2209:;
    panda$core$Bit $tmp2212 = { $tmp2208 };
    if ($tmp2212.value) {
    {
        panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2213, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, &$s2215);
        panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2217, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, &$s2219);
        panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, $tmp2220);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2221);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2222 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2222;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2223 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2223.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2224 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2224;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2226 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2225 = $tmp2226;
            if (((panda$core$Bit) { resolved2225 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2227 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2225, p_position, p_isExplicit, p_target);
                return $tmp2227;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2229 = (panda$collections$Array*) malloc(40);
    $tmp2229->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2229->refCount.value = 1;
    panda$collections$Array$init($tmp2229);
    children2228 = $tmp2229;
    panda$collections$Array$add$panda$collections$Array$T(children2228, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2231 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2231->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2231->refCount.value = 1;
    panda$core$Bit$wrapper* $tmp2233;
    $tmp2233 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp2233->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp2233->refCount = 1;
    $tmp2233->value = p_isExplicit;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2231, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) $tmp2233), ((panda$collections$ListView*) children2228));
    return $tmp2231;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2240;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2241;
    panda$core$Int64$nullable cost2256;
    panda$core$Int64$nullable cost2270;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2234 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2235 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2235->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2235 = $tmp2235->next;
    }
    $fn2237 $tmp2236 = $tmp2235->methods[0];
    panda$core$Int64 $tmp2238 = $tmp2236(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2239 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2234, $tmp2238);
    if ($tmp2239.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2240 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2242 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2241, ((panda$core$Int64) { 0 }), $tmp2242, ((panda$core$Bit) { false }));
    int64_t $tmp2244 = $tmp2241.min.value;
    panda$core$Int64 i2243 = { $tmp2244 };
    int64_t $tmp2246 = $tmp2241.max.value;
    bool $tmp2247 = $tmp2241.inclusive.value;
    if ($tmp2247) goto $l2254; else goto $l2255;
    $l2254:;
    if ($tmp2244 <= $tmp2246) goto $l2248; else goto $l2250;
    $l2255:;
    if ($tmp2244 < $tmp2246) goto $l2248; else goto $l2250;
    $l2248:;
    {
        ITable* $tmp2257 = p_args->$class->itable;
        while ($tmp2257->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2257 = $tmp2257->next;
        }
        $fn2259 $tmp2258 = $tmp2257->methods[0];
        panda$core$Object* $tmp2260 = $tmp2258(p_args, i2243);
        org$pandalanguage$pandac$Type* $tmp2261 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2243);
        panda$core$Int64$nullable $tmp2262 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2260), $tmp2261);
        cost2256 = $tmp2262;
        if (((panda$core$Bit) { !cost2256.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2263 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2240, ((panda$core$Int64) cost2256.value));
        result2240 = $tmp2263;
    }
    $l2251:;
    int64_t $tmp2265 = $tmp2246 - i2243.value;
    if ($tmp2247) goto $l2266; else goto $l2267;
    $l2266:;
    if ((uint64_t) $tmp2265 >= 1) goto $l2264; else goto $l2250;
    $l2267:;
    if ((uint64_t) $tmp2265 > 1) goto $l2264; else goto $l2250;
    $l2264:;
    i2243.value += 1;
    goto $l2248;
    $l2250:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2271 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2272 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2271, p_expectedReturn);
        cost2270 = $tmp2272;
        if (((panda$core$Bit) { !cost2270.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2273 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2240, ((panda$core$Int64) cost2270.value));
        result2240 = $tmp2273;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2276 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2277 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2276);
    bool $tmp2275 = $tmp2277.value;
    if (!$tmp2275) goto $l2278;
    ITable* $tmp2279 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2279->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2279 = $tmp2279->next;
    }
    $fn2281 $tmp2280 = $tmp2279->methods[0];
    panda$core$Int64 $tmp2282 = $tmp2280(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2282, ((panda$core$Int64) { 1 }));
    $tmp2275 = $tmp2283.value;
    $l2278:;
    panda$core$Bit $tmp2284 = { $tmp2275 };
    bool $tmp2274 = $tmp2284.value;
    if (!$tmp2274) goto $l2285;
    panda$core$Object* $tmp2286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2287 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2288 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2286)->type, $tmp2287);
    $tmp2274 = $tmp2288.value;
    $l2285:;
    panda$core$Bit $tmp2289 = { $tmp2274 };
    if ($tmp2289.value) {
    {
        panda$core$Int64 $tmp2290 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2240, ((panda$core$Int64) { 1 }));
        result2240 = $tmp2290;
    }
    }
    return ((panda$core$Int64$nullable) { result2240, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2291;
    panda$core$Int64$nullable best2294;
    panda$collections$Iterator* m$Iter2295;
    org$pandalanguage$pandac$MethodRef* m2307;
    panda$core$Int64$nullable cost2312;
    panda$collections$Array* $tmp2292 = (panda$collections$Array*) malloc(40);
    $tmp2292->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2292->refCount.value = 1;
    panda$collections$Array$init($tmp2292);
    result2291 = $tmp2292;
    best2294 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2296 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2296->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2296 = $tmp2296->next;
        }
        $fn2298 $tmp2297 = $tmp2296->methods[0];
        panda$collections$Iterator* $tmp2299 = $tmp2297(((panda$collections$Iterable*) p_methods));
        m$Iter2295 = $tmp2299;
        $l2300:;
        ITable* $tmp2302 = m$Iter2295->$class->itable;
        while ($tmp2302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2302 = $tmp2302->next;
        }
        $fn2304 $tmp2303 = $tmp2302->methods[0];
        panda$core$Bit $tmp2305 = $tmp2303(m$Iter2295);
        panda$core$Bit $tmp2306 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2305);
        if (!$tmp2306.value) goto $l2301;
        {
            ITable* $tmp2308 = m$Iter2295->$class->itable;
            while ($tmp2308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2308 = $tmp2308->next;
            }
            $fn2310 $tmp2309 = $tmp2308->methods[1];
            panda$core$Object* $tmp2311 = $tmp2309(m$Iter2295);
            m2307 = ((org$pandalanguage$pandac$MethodRef*) $tmp2311);
            panda$core$Int64$nullable $tmp2313 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2307, p_args, p_expectedReturn);
            cost2312 = $tmp2313;
            if (((panda$core$Bit) { !cost2312.nonnull }).value) {
            {
                goto $l2300;
            }
            }
            bool $tmp2314 = ((panda$core$Bit) { !best2294.nonnull }).value;
            if ($tmp2314) goto $l2315;
            panda$core$Bit $tmp2316 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2312.value), ((panda$core$Int64) best2294.value));
            $tmp2314 = $tmp2316.value;
            $l2315:;
            panda$core$Bit $tmp2317 = { $tmp2314 };
            if ($tmp2317.value) {
            {
                panda$collections$Array$clear(result2291);
                best2294 = cost2312;
            }
            }
            panda$core$Bit $tmp2321;
            if (((panda$core$Bit) { cost2312.nonnull }).value) goto $l2318; else goto $l2319;
            $l2318:;
            panda$core$Bit $tmp2322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2312.value), ((panda$core$Int64) best2294.value));
            $tmp2321 = $tmp2322;
            goto $l2320;
            $l2319:;
            $tmp2321 = ((panda$core$Bit) { false });
            goto $l2320;
            $l2320:;
            if ($tmp2321.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2291, ((panda$core$Object*) m2307));
            }
            }
        }
        goto $l2300;
        $l2301:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2291));
    return best2294;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs2358;
    org$pandalanguage$pandac$IRNode* selfNode2394;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2423;
    org$pandalanguage$pandac$IRNode* coerced2441;
    org$pandalanguage$pandac$IRNode* result2456;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2323 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2324 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2324->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2324 = $tmp2324->next;
    }
    $fn2326 $tmp2325 = $tmp2324->methods[0];
    panda$core$Int64 $tmp2327 = $tmp2325(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2328 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2323, $tmp2327);
    if ($tmp2328.value) {
    {
        panda$core$String* $tmp2329 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2330 = panda$core$String$convert$R$panda$core$String($tmp2329);
        panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2331);
        panda$core$Int64 $tmp2333 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Int64$wrapper* $tmp2334;
        $tmp2334 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2334->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2334->refCount = 1;
        $tmp2334->value = $tmp2333;
        panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2332, ((panda$core$Object*) $tmp2334));
        panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2335, &$s2336);
        panda$core$Int64 $tmp2338 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2338, ((panda$core$Int64) { 1 }));
        panda$core$Bit$wrapper* $tmp2340;
        $tmp2340 = (panda$core$Bit$wrapper*) malloc(13);
        $tmp2340->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
        $tmp2340->refCount = 1;
        $tmp2340->value = $tmp2339;
        ITable* $tmp2342 = ((panda$core$Formattable*) $tmp2340)->$class->itable;
        while ($tmp2342->$class != (panda$core$Class*) &panda$core$Formattable$class) {
            $tmp2342 = $tmp2342->next;
        }
        $fn2344 $tmp2343 = $tmp2342->methods[0];
        panda$core$String* $tmp2345 = $tmp2343(((panda$core$Formattable*) $tmp2340), &$s2341);
        panda$core$String* $tmp2346 = panda$core$String$convert$R$panda$core$String($tmp2345);
        panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2346, &$s2347);
        ITable* $tmp2349 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2349->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2349 = $tmp2349->next;
        }
        $fn2351 $tmp2350 = $tmp2349->methods[0];
        panda$core$Int64 $tmp2352 = $tmp2350(((panda$collections$CollectionView*) p_args));
        panda$core$Int64$wrapper* $tmp2353;
        $tmp2353 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2353->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2353->refCount = 1;
        $tmp2353->value = $tmp2352;
        panda$core$String* $tmp2354 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2348, ((panda$core$Object*) $tmp2353));
        panda$core$String* $tmp2356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2354, &$s2355);
        panda$core$String* $tmp2357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, $tmp2356);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2357);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2359 = (panda$collections$Array*) malloc(40);
    $tmp2359->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2359->refCount.value = 1;
    panda$collections$Array$init($tmp2359);
    finalArgs2358 = $tmp2359;
    bool $tmp2362 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2362) goto $l2363;
    panda$core$Bit $tmp2364 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2362 = $tmp2364.value;
    $l2363:;
    panda$core$Bit $tmp2365 = { $tmp2362 };
    bool $tmp2361 = $tmp2365.value;
    if (!$tmp2361) goto $l2366;
    panda$core$Bit $tmp2367 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2368 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2367);
    $tmp2361 = $tmp2368.value;
    $l2366:;
    panda$core$Bit $tmp2369 = { $tmp2361 };
    if ($tmp2369.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2370 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2371 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2370);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2358, ((panda$core$Object*) $tmp2371));
    }
    }
    panda$core$Bit $tmp2372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp2372.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2373 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2373)->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2374.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2375 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2375->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2375->refCount.value = 1;
                panda$core$Object* $tmp2377 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2378 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2377));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2375, ((panda$core$Int64) { 1025 }), p_position, $tmp2378);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2358, ((panda$core$Object*) $tmp2375));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2379);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2382 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2381 = $tmp2382.value;
        if (!$tmp2381) goto $l2383;
        panda$core$Bit $tmp2384 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2381 = $tmp2384.value;
        $l2383:;
        panda$core$Bit $tmp2385 = { $tmp2381 };
        bool $tmp2380 = $tmp2385.value;
        if (!$tmp2380) goto $l2386;
        panda$core$Bit $tmp2387 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2380 = $tmp2387.value;
        $l2386:;
        panda$core$Bit $tmp2388 = { $tmp2380 };
        if ($tmp2388.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2389);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2391 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2390 = $tmp2391.value;
    if (!$tmp2390) goto $l2392;
    $tmp2390 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2392:;
    panda$core$Bit $tmp2393 = { $tmp2390 };
    if ($tmp2393.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2395 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2395->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2395->refCount.value = 1;
        panda$core$Object* $tmp2397 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2398 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2397));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2395, ((panda$core$Int64) { 1025 }), p_position, $tmp2398);
        selfNode2394 = $tmp2395;
        org$pandalanguage$pandac$Type* $tmp2399 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2400 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2394, $tmp2399);
        selfNode2394 = $tmp2400;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2394 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2358, ((panda$core$Object*) selfNode2394));
        panda$core$Object* $tmp2401 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2402 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2401));
        panda$core$Bit $tmp2403 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2402);
        if ($tmp2403.value) {
        {
            panda$core$String* $tmp2405 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2404, $tmp2405);
            panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2406, &$s2407);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2408);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2411 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2412 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2411);
    bool $tmp2410 = $tmp2412.value;
    if (!$tmp2410) goto $l2413;
    $tmp2410 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2413:;
    panda$core$Bit $tmp2414 = { $tmp2410 };
    bool $tmp2409 = $tmp2414.value;
    if (!$tmp2409) goto $l2415;
    panda$core$Bit $tmp2416 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2409 = $tmp2416.value;
    $l2415:;
    panda$core$Bit $tmp2417 = { $tmp2409 };
    if ($tmp2417.value) {
    {
        panda$core$String* $tmp2419 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2418, $tmp2419);
        panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, &$s2421);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2422);
    }
    }
    }
    }
    ITable* $tmp2424 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2424->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2424 = $tmp2424->next;
    }
    $fn2426 $tmp2425 = $tmp2424->methods[0];
    panda$core$Int64 $tmp2427 = $tmp2425(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2423, ((panda$core$Int64) { 0 }), $tmp2427, ((panda$core$Bit) { false }));
    int64_t $tmp2429 = $tmp2423.min.value;
    panda$core$Int64 i2428 = { $tmp2429 };
    int64_t $tmp2431 = $tmp2423.max.value;
    bool $tmp2432 = $tmp2423.inclusive.value;
    if ($tmp2432) goto $l2439; else goto $l2440;
    $l2439:;
    if ($tmp2429 <= $tmp2431) goto $l2433; else goto $l2435;
    $l2440:;
    if ($tmp2429 < $tmp2431) goto $l2433; else goto $l2435;
    $l2433:;
    {
        ITable* $tmp2442 = p_args->$class->itable;
        while ($tmp2442->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2442 = $tmp2442->next;
        }
        $fn2444 $tmp2443 = $tmp2442->methods[0];
        panda$core$Object* $tmp2445 = $tmp2443(p_args, i2428);
        org$pandalanguage$pandac$Type* $tmp2446 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2428);
        org$pandalanguage$pandac$IRNode* $tmp2447 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2445), $tmp2446);
        coerced2441 = $tmp2447;
        if (((panda$core$Bit) { coerced2441 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2448 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2428);
        org$pandalanguage$pandac$IRNode* $tmp2449 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2441, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2448)->type);
        coerced2441 = $tmp2449;
        if (((panda$core$Bit) { coerced2441 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2358, ((panda$core$Object*) coerced2441));
    }
    $l2436:;
    int64_t $tmp2451 = $tmp2431 - i2428.value;
    if ($tmp2432) goto $l2452; else goto $l2453;
    $l2452:;
    if ((uint64_t) $tmp2451 >= 1) goto $l2450; else goto $l2435;
    $l2453:;
    if ((uint64_t) $tmp2451 > 1) goto $l2450; else goto $l2435;
    $l2450:;
    i2428.value += 1;
    goto $l2433;
    $l2435:;
    panda$core$Bit $tmp2458 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2457);
    if ($tmp2458.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2459 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2459->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2459->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2461 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2459, ((panda$core$Int64) { 1005 }), p_position, $tmp2461, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2358));
        result2456 = $tmp2459;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2462 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2462->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2462->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2462, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2358));
        result2456 = $tmp2462;
        org$pandalanguage$pandac$Type* $tmp2464 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2465 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2456, p_position, ((panda$core$Bit) { false }), $tmp2464);
        result2456 = $tmp2465;
    }
    }
    return result2456;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2466 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2466;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$String* p_name, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2467;
    org$pandalanguage$pandac$ChoiceEntry* rightEntry2471;
    org$pandalanguage$pandac$IRNode* leftValue2472;
    panda$core$UInt64 rightValue2475;
    org$pandalanguage$pandac$IRNode* leftValue2484;
    org$pandalanguage$pandac$IRNode* rightValue2487;
    panda$collections$Array* $tmp2468 = (panda$collections$Array*) malloc(40);
    $tmp2468->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2468->refCount.value = 1;
    panda$collections$Array$init($tmp2468);
    args2467 = $tmp2468;
    panda$core$Bit $tmp2470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1046 }));
    if ($tmp2470.value) {
    {
        rightEntry2471 = ((org$pandalanguage$pandac$ChoiceEntry*) p_right->payload);
        org$pandalanguage$pandac$IRNode* $tmp2474 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_left->position, p_left, &$s2473);
        leftValue2472 = $tmp2474;
        panda$core$UInt64 $tmp2476 = panda$core$Int64$convert$R$panda$core$UInt64(rightEntry2471->rawValue);
        rightValue2475 = $tmp2476;
        org$pandalanguage$pandac$IRNode* $tmp2477 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2477->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2477->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2479 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(rightValue2475);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2477, ((panda$core$Int64) { 1004 }), p_right->position, $tmp2479, rightValue2475);
        panda$collections$Array$add$panda$collections$Array$T(args2467, ((panda$core$Object*) $tmp2477));
        org$pandalanguage$pandac$IRNode* $tmp2480 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, leftValue2472, p_name, ((panda$collections$ListView*) args2467));
        return $tmp2480;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2481 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_right->type);
    org$pandalanguage$pandac$Type* $tmp2482 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(p_left->type);
    panda$core$Bit $tmp2483 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2481, $tmp2482);
    if ($tmp2483.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2486 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_left->position, p_left, &$s2485);
        leftValue2484 = $tmp2486;
        PANDA_ASSERT(((panda$core$Bit) { leftValue2484 != NULL }).value);
        org$pandalanguage$pandac$IRNode* $tmp2489 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_right->position, p_right, &$s2488);
        rightValue2487 = $tmp2489;
        PANDA_ASSERT(((panda$core$Bit) { rightValue2487 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(args2467, ((panda$core$Object*) rightValue2487));
        org$pandalanguage$pandac$IRNode* $tmp2490 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, leftValue2484, p_name, ((panda$collections$ListView*) args2467));
        return $tmp2490;
    }
    }
    panda$core$String* $tmp2492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2491, p_name);
    panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2492, &$s2493);
    panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2494, ((panda$core$Object*) p_left->type));
    panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, &$s2496);
    panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2497, ((panda$core$Object*) p_right->type));
    panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, &$s2499);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_left->position, $tmp2500);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2501;
    org$pandalanguage$pandac$ClassDecl* cl2503;
    org$pandalanguage$pandac$Symbol* s2513;
    org$pandalanguage$pandac$IRNode* ref2559;
    org$pandalanguage$pandac$IRNode* $tmp2502 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2501 = $tmp2502;
    if (((panda$core$Bit) { resolved2501 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2501->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2504.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2505 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2501->payload));
        cl2503 = $tmp2505;
    }
    }
    else {
    {
        panda$core$Bit $tmp2506 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2501->type);
        panda$core$Bit $tmp2507 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2506);
        if ($tmp2507.value) {
        {
            panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2508, ((panda$core$Object*) resolved2501->type));
            panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2509, &$s2510);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2511);
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2512 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2501->type);
        cl2503 = $tmp2512;
    }
    }
    if (((panda$core$Bit) { cl2503 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2514 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2503);
    org$pandalanguage$pandac$Symbol* $tmp2515 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2514, p_name);
    s2513 = $tmp2515;
    if (((panda$core$Bit) { s2513 == NULL }).value) {
    {
        panda$core$Bit $tmp2518 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2517);
        bool $tmp2516 = $tmp2518.value;
        if ($tmp2516) goto $l2519;
        panda$core$Bit $tmp2523 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2522);
        bool $tmp2521 = $tmp2523.value;
        if (!$tmp2521) goto $l2524;
        panda$core$Bit $tmp2525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl2503->classKind->$rawValue, ((panda$core$Int64) { 2 }));
        $tmp2521 = $tmp2525.value;
        $l2524:;
        panda$core$Bit $tmp2526 = { $tmp2521 };
        bool $tmp2520 = $tmp2526.value;
        if (!$tmp2520) goto $l2527;
        ITable* $tmp2528 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2528->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2528 = $tmp2528->next;
        }
        $fn2530 $tmp2529 = $tmp2528->methods[0];
        panda$core$Int64 $tmp2531 = $tmp2529(((panda$collections$CollectionView*) p_args));
        panda$core$Bit $tmp2532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2531, ((panda$core$Int64) { 1 }));
        $tmp2520 = $tmp2532.value;
        $l2527:;
        panda$core$Bit $tmp2533 = { $tmp2520 };
        $tmp2516 = $tmp2533.value;
        $l2519:;
        panda$core$Bit $tmp2534 = { $tmp2516 };
        if ($tmp2534.value) {
        {
            ITable* $tmp2535 = p_args->$class->itable;
            while ($tmp2535->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2535 = $tmp2535->next;
            }
            $fn2537 $tmp2536 = $tmp2535->methods[0];
            panda$core$Object* $tmp2538 = $tmp2536(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2539 = org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, ((org$pandalanguage$pandac$IRNode*) $tmp2538));
            return $tmp2539;
        }
        }
        panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2540, ((org$pandalanguage$pandac$Symbol*) cl2503)->name);
        panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
        panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, p_name);
        panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, &$s2545);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2546);
        return NULL;
    }
    }
    panda$core$Bit $tmp2548 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2513->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2547 = $tmp2548.value;
    if (!$tmp2547) goto $l2549;
    panda$core$Bit $tmp2550 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2513->kind, ((panda$core$Int64) { 205 }));
    $tmp2547 = $tmp2550.value;
    $l2549:;
    panda$core$Bit $tmp2551 = { $tmp2547 };
    if ($tmp2551.value) {
    {
        panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2552, ((org$pandalanguage$pandac$Symbol*) cl2503)->name);
        panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, &$s2554);
        panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, p_name);
        panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, &$s2557);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2558);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2560 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2503);
    org$pandalanguage$pandac$IRNode* $tmp2561 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2513, $tmp2560);
    ref2559 = $tmp2561;
    if (((panda$core$Bit) { ref2559 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2562 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2559, p_args, p_expectedType);
    return $tmp2562;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2563 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2563;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2564;
    panda$collections$Array* methods2571;
    org$pandalanguage$pandac$MethodDecl* first2576;
    panda$core$MutableString* msg2581;
    panda$core$String* separator2592;
    panda$collections$Iterator* a$Iter2594;
    org$pandalanguage$pandac$IRNode* a2606;
    org$pandalanguage$pandac$IRNode* target2620;
    panda$collections$Array* children2628;
    panda$collections$Array* types2634;
    panda$collections$Iterator* m$Iter2637;
    org$pandalanguage$pandac$MethodRef* m2649;
    org$pandalanguage$pandac$IRNode* target2659;
    org$pandalanguage$pandac$IRNode* initCall2662;
    panda$collections$Array* children2666;
    org$pandalanguage$pandac$ChoiceEntry* c2671;
    panda$collections$Array* finalArgs2708;
    panda$core$UInt64 value2711;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2716;
    org$pandalanguage$pandac$IRNode* arg2734;
    org$pandalanguage$pandac$IRNode* owner2747;
    org$pandalanguage$pandac$IRNode* resolved2753;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2565 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2565, ((panda$core$Int64) { 0 }));
            if ($tmp2566.value) {
            {
                target2564 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2567 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2567, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2568.value);
                panda$core$Object* $tmp2569 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2564 = ((org$pandalanguage$pandac$IRNode*) $tmp2569);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2570 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2564, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2570;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2572 = (panda$collections$Array*) malloc(40);
            $tmp2572->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2572->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2572, ((panda$collections$ListView*) p_m->payload));
            methods2571 = $tmp2572;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2571, p_args, p_expectedType);
            panda$core$Int64 $tmp2574 = panda$collections$Array$get_count$R$panda$core$Int64(methods2571);
            panda$core$Bit $tmp2575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2574, ((panda$core$Int64) { 0 }));
            if ($tmp2575.value) {
            {
                ITable* $tmp2577 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2577->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2577 = $tmp2577->next;
                }
                $fn2579 $tmp2578 = $tmp2577->methods[0];
                panda$core$Object* $tmp2580 = $tmp2578(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2576 = ((org$pandalanguage$pandac$MethodRef*) $tmp2580)->value;
                panda$core$MutableString* $tmp2582 = (panda$core$MutableString*) malloc(48);
                $tmp2582->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2582->refCount.value = 1;
                panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2584, ((org$pandalanguage$pandac$Symbol*) first2576->owner)->name);
                panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
                panda$core$String* $tmp2588 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2576)->name);
                panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
                panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, $tmp2590);
                panda$core$MutableString$init$panda$core$String($tmp2582, $tmp2591);
                msg2581 = $tmp2582;
                separator2592 = &$s2593;
                {
                    ITable* $tmp2595 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2595->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2595 = $tmp2595->next;
                    }
                    $fn2597 $tmp2596 = $tmp2595->methods[0];
                    panda$collections$Iterator* $tmp2598 = $tmp2596(((panda$collections$Iterable*) p_args));
                    a$Iter2594 = $tmp2598;
                    $l2599:;
                    ITable* $tmp2601 = a$Iter2594->$class->itable;
                    while ($tmp2601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2601 = $tmp2601->next;
                    }
                    $fn2603 $tmp2602 = $tmp2601->methods[0];
                    panda$core$Bit $tmp2604 = $tmp2602(a$Iter2594);
                    panda$core$Bit $tmp2605 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2604);
                    if (!$tmp2605.value) goto $l2600;
                    {
                        ITable* $tmp2607 = a$Iter2594->$class->itable;
                        while ($tmp2607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2607 = $tmp2607->next;
                        }
                        $fn2609 $tmp2608 = $tmp2607->methods[1];
                        panda$core$Object* $tmp2610 = $tmp2608(a$Iter2594);
                        a2606 = ((org$pandalanguage$pandac$IRNode*) $tmp2610);
                        panda$core$MutableString$append$panda$core$String(msg2581, separator2592);
                        panda$core$MutableString$append$panda$core$Object(msg2581, ((panda$core$Object*) a2606->type));
                        separator2592 = &$s2611;
                    }
                    goto $l2599;
                    $l2600:;
                }
                panda$core$MutableString$append$panda$core$String(msg2581, &$s2612);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2613, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2614, &$s2615);
                    panda$core$MutableString$append$panda$core$String(msg2581, $tmp2616);
                }
                }
                panda$core$String* $tmp2617 = panda$core$MutableString$finish$R$panda$core$String(msg2581);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2617);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2618 = panda$collections$Array$get_count$R$panda$core$Int64(methods2571);
            panda$core$Bit $tmp2619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2618, ((panda$core$Int64) { 1 }));
            if ($tmp2619.value) {
            {
                panda$core$Int64 $tmp2621 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2621, ((panda$core$Int64) { 1 }));
                if ($tmp2622.value) {
                {
                    panda$core$Object* $tmp2623 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2620 = ((org$pandalanguage$pandac$IRNode*) $tmp2623);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2624 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2624, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2625.value);
                    target2620 = NULL;
                }
                }
                panda$core$Object* $tmp2626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2571, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2627 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2620, ((org$pandalanguage$pandac$MethodRef*) $tmp2626), p_args);
                return $tmp2627;
            }
            }
            panda$collections$Array* $tmp2629 = (panda$collections$Array*) malloc(40);
            $tmp2629->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2629->refCount.value = 1;
            panda$collections$Array$init($tmp2629);
            children2628 = $tmp2629;
            org$pandalanguage$pandac$IRNode* $tmp2631 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2631->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2631->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2633 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2631, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2633, ((panda$core$Object*) methods2571), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2628, ((panda$core$Object*) $tmp2631));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2628, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2635 = (panda$collections$Array*) malloc(40);
            $tmp2635->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2635->refCount.value = 1;
            panda$collections$Array$init($tmp2635);
            types2634 = $tmp2635;
            {
                ITable* $tmp2638 = ((panda$collections$Iterable*) methods2571)->$class->itable;
                while ($tmp2638->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2638 = $tmp2638->next;
                }
                $fn2640 $tmp2639 = $tmp2638->methods[0];
                panda$collections$Iterator* $tmp2641 = $tmp2639(((panda$collections$Iterable*) methods2571));
                m$Iter2637 = $tmp2641;
                $l2642:;
                ITable* $tmp2644 = m$Iter2637->$class->itable;
                while ($tmp2644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2644 = $tmp2644->next;
                }
                $fn2646 $tmp2645 = $tmp2644->methods[0];
                panda$core$Bit $tmp2647 = $tmp2645(m$Iter2637);
                panda$core$Bit $tmp2648 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2647);
                if (!$tmp2648.value) goto $l2643;
                {
                    ITable* $tmp2650 = m$Iter2637->$class->itable;
                    while ($tmp2650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2650 = $tmp2650->next;
                    }
                    $fn2652 $tmp2651 = $tmp2650->methods[1];
                    panda$core$Object* $tmp2653 = $tmp2651(m$Iter2637);
                    m2649 = ((org$pandalanguage$pandac$MethodRef*) $tmp2653);
                    org$pandalanguage$pandac$Type* $tmp2654 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2649);
                    panda$collections$Array$add$panda$collections$Array$T(types2634, ((panda$core$Object*) $tmp2654));
                }
                goto $l2642;
                $l2643:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2655 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2655->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2655->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2657 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2657->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2657->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2657, ((panda$collections$ListView*) types2634));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2655, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2657, ((panda$collections$ListView*) children2628));
            return $tmp2655;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2660 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2660->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2660->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2660, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2659 = $tmp2660;
            org$pandalanguage$pandac$IRNode* $tmp2664 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2659, &$s2663, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2665 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2664);
            initCall2662 = $tmp2665;
            if (((panda$core$Bit) { initCall2662 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2667 = (panda$collections$Array*) malloc(40);
            $tmp2667->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2667->refCount.value = 1;
            panda$collections$Array$init($tmp2667);
            children2666 = $tmp2667;
            panda$collections$Array$add$panda$collections$Array$T(children2666, ((panda$core$Object*) initCall2662));
            org$pandalanguage$pandac$IRNode* $tmp2669 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2669->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2669->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2669, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2666));
            return $tmp2669;
        }
        break;
        case 1046:
        {
            c2671 = ((org$pandalanguage$pandac$ChoiceEntry*) p_m->payload);
            panda$core$Int64 $tmp2672 = panda$collections$Array$get_count$R$panda$core$Int64(c2671->fields);
            ITable* $tmp2673 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2673->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2673 = $tmp2673->next;
            }
            $fn2675 $tmp2674 = $tmp2673->methods[0];
            panda$core$Int64 $tmp2676 = $tmp2674(((panda$collections$CollectionView*) p_args));
            panda$core$Bit $tmp2677 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2672, $tmp2676);
            if ($tmp2677.value) {
            {
                panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2678, ((panda$core$Object*) p_m));
                panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, &$s2680);
                panda$core$Int64 $tmp2682 = panda$collections$Array$get_count$R$panda$core$Int64(c2671->fields);
                panda$core$Int64$wrapper* $tmp2683;
                $tmp2683 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp2683->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2683->refCount = 1;
                $tmp2683->value = $tmp2682;
                panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2681, ((panda$core$Object*) $tmp2683));
                panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, &$s2685);
                panda$core$Int64 $tmp2688 = panda$collections$Array$get_count$R$panda$core$Int64(c2671->fields);
                panda$core$Bit $tmp2689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2688, ((panda$core$Int64) { 1 }));
                panda$core$Bit$wrapper* $tmp2690;
                $tmp2690 = (panda$core$Bit$wrapper*) malloc(13);
                $tmp2690->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp2690->refCount = 1;
                $tmp2690->value = $tmp2689;
                ITable* $tmp2692 = ((panda$core$Formattable*) $tmp2690)->$class->itable;
                while ($tmp2692->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                    $tmp2692 = $tmp2692->next;
                }
                $fn2694 $tmp2693 = $tmp2692->methods[0];
                panda$core$String* $tmp2695 = $tmp2693(((panda$core$Formattable*) $tmp2690), &$s2691);
                panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2687, $tmp2695);
                panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, &$s2697);
                ITable* $tmp2699 = ((panda$collections$CollectionView*) p_args)->$class->itable;
                while ($tmp2699->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp2699 = $tmp2699->next;
                }
                $fn2701 $tmp2700 = $tmp2699->methods[0];
                panda$core$Int64 $tmp2702 = $tmp2700(((panda$collections$CollectionView*) p_args));
                panda$core$Int64$wrapper* $tmp2703;
                $tmp2703 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp2703->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp2703->refCount = 1;
                $tmp2703->value = $tmp2702;
                panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2698, ((panda$core$Object*) $tmp2703));
                panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
                panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2686, $tmp2706);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2707);
                return NULL;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, c2671);
            panda$collections$Array* $tmp2709 = (panda$collections$Array*) malloc(40);
            $tmp2709->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2709->refCount.value = 1;
            panda$collections$Array$init($tmp2709);
            finalArgs2708 = $tmp2709;
            panda$core$UInt64 $tmp2712 = panda$core$Int64$convert$R$panda$core$UInt64(c2671->rawValue);
            value2711 = $tmp2712;
            org$pandalanguage$pandac$IRNode* $tmp2713 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2713->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2713->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2715 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2711);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2713, ((panda$core$Int64) { 1004 }), p_m->position, $tmp2715, value2711);
            panda$collections$Array$add$panda$collections$Array$T(finalArgs2708, ((panda$core$Object*) $tmp2713));
            ITable* $tmp2717 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2717->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2717 = $tmp2717->next;
            }
            $fn2719 $tmp2718 = $tmp2717->methods[0];
            panda$core$Int64 $tmp2720 = $tmp2718(((panda$collections$CollectionView*) p_args));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2716, ((panda$core$Int64) { 0 }), $tmp2720, ((panda$core$Bit) { false }));
            int64_t $tmp2722 = $tmp2716.min.value;
            panda$core$Int64 i2721 = { $tmp2722 };
            int64_t $tmp2724 = $tmp2716.max.value;
            bool $tmp2725 = $tmp2716.inclusive.value;
            if ($tmp2725) goto $l2732; else goto $l2733;
            $l2732:;
            if ($tmp2722 <= $tmp2724) goto $l2726; else goto $l2728;
            $l2733:;
            if ($tmp2722 < $tmp2724) goto $l2726; else goto $l2728;
            $l2726:;
            {
                ITable* $tmp2735 = p_args->$class->itable;
                while ($tmp2735->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2735 = $tmp2735->next;
                }
                $fn2737 $tmp2736 = $tmp2735->methods[0];
                panda$core$Object* $tmp2738 = $tmp2736(p_args, i2721);
                panda$core$Object* $tmp2739 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(c2671->fields, i2721);
                org$pandalanguage$pandac$IRNode* $tmp2740 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2738), ((org$pandalanguage$pandac$Type*) $tmp2739));
                arg2734 = $tmp2740;
                if (((panda$core$Bit) { arg2734 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2708, ((panda$core$Object*) arg2734));
            }
            $l2729:;
            int64_t $tmp2742 = $tmp2724 - i2721.value;
            if ($tmp2725) goto $l2743; else goto $l2744;
            $l2743:;
            if ((uint64_t) $tmp2742 >= 1) goto $l2741; else goto $l2728;
            $l2744:;
            if ((uint64_t) $tmp2742 > 1) goto $l2741; else goto $l2728;
            $l2741:;
            i2721.value += 1;
            goto $l2726;
            $l2728:;
            org$pandalanguage$pandac$IRNode* $tmp2748 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2748->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2748->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2750 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp2751 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(c2671->owner);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2748, ((panda$core$Int64) { 1001 }), p_m->position, $tmp2750, $tmp2751);
            owner2747 = $tmp2748;
            org$pandalanguage$pandac$IRNode* $tmp2752 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, owner2747, ((panda$collections$ListView*) finalArgs2708));
            return $tmp2752;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2754 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2753 = $tmp2754;
            if (((panda$core$Bit) { resolved2753 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2756 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2755, ((panda$core$Object*) resolved2753->type));
            panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2756, &$s2757);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2753->position, $tmp2758);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2759;
    panda$core$MutableString* typeName2762;
    panda$core$String* separator2766;
    panda$collections$Iterator* p$Iter2768;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2780;
    panda$core$Int64 kind2786;
    panda$core$Char8 $tmp2792;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2760 = (panda$collections$Array*) malloc(40);
    $tmp2760->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2760->refCount.value = 1;
    panda$collections$Array$init($tmp2760);
    subtypes2759 = $tmp2760;
    panda$core$MutableString* $tmp2763 = (panda$core$MutableString*) malloc(48);
    $tmp2763->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2763->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2763, &$s2765);
    typeName2762 = $tmp2763;
    separator2766 = &$s2767;
    {
        ITable* $tmp2769 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2769->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2769 = $tmp2769->next;
        }
        $fn2771 $tmp2770 = $tmp2769->methods[0];
        panda$collections$Iterator* $tmp2772 = $tmp2770(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2768 = $tmp2772;
        $l2773:;
        ITable* $tmp2775 = p$Iter2768->$class->itable;
        while ($tmp2775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2775 = $tmp2775->next;
        }
        $fn2777 $tmp2776 = $tmp2775->methods[0];
        panda$core$Bit $tmp2778 = $tmp2776(p$Iter2768);
        panda$core$Bit $tmp2779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2778);
        if (!$tmp2779.value) goto $l2774;
        {
            ITable* $tmp2781 = p$Iter2768->$class->itable;
            while ($tmp2781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2781 = $tmp2781->next;
            }
            $fn2783 $tmp2782 = $tmp2781->methods[1];
            panda$core$Object* $tmp2784 = $tmp2782(p$Iter2768);
            p2780 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2784);
            panda$core$MutableString$append$panda$core$String(typeName2762, separator2766);
            panda$core$MutableString$append$panda$core$String(typeName2762, ((org$pandalanguage$pandac$Symbol*) p2780->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2759, ((panda$core$Object*) p2780->type));
            separator2766 = &$s2785;
        }
        goto $l2773;
        $l2774:;
    }
    panda$core$Bit $tmp2787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp2787.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2762, &$s2788);
        kind2786 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2762, &$s2789);
        kind2786 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2759, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2790 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2791 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2790);
    if ($tmp2791.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2762, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2792, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2762, $tmp2792);
    org$pandalanguage$pandac$Type* $tmp2793 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2793->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2793->refCount.value = 1;
    panda$core$String* $tmp2795 = panda$core$MutableString$finish$R$panda$core$String(typeName2762);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2793, $tmp2795, kind2786, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2759), ((panda$core$Bit) { true }));
    return $tmp2793;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2796;
    panda$core$MutableString* typeName2799;
    panda$collections$Iterator* p$Iter2803;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2815;
    panda$core$Int64 kind2821;
    panda$core$Char8 $tmp2827;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2797 = (panda$collections$Array*) malloc(40);
    $tmp2797->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2797->refCount.value = 1;
    panda$collections$Array$init($tmp2797);
    subtypes2796 = $tmp2797;
    panda$core$MutableString* $tmp2800 = (panda$core$MutableString*) malloc(48);
    $tmp2800->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2800->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2800, &$s2802);
    typeName2799 = $tmp2800;
    panda$core$MutableString$append$panda$core$String(typeName2799, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2796, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2804 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2804->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2804 = $tmp2804->next;
        }
        $fn2806 $tmp2805 = $tmp2804->methods[0];
        panda$collections$Iterator* $tmp2807 = $tmp2805(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2803 = $tmp2807;
        $l2808:;
        ITable* $tmp2810 = p$Iter2803->$class->itable;
        while ($tmp2810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2810 = $tmp2810->next;
        }
        $fn2812 $tmp2811 = $tmp2810->methods[0];
        panda$core$Bit $tmp2813 = $tmp2811(p$Iter2803);
        panda$core$Bit $tmp2814 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2813);
        if (!$tmp2814.value) goto $l2809;
        {
            ITable* $tmp2816 = p$Iter2803->$class->itable;
            while ($tmp2816->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2816 = $tmp2816->next;
            }
            $fn2818 $tmp2817 = $tmp2816->methods[1];
            panda$core$Object* $tmp2819 = $tmp2817(p$Iter2803);
            p2815 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2819);
            panda$core$MutableString$append$panda$core$String(typeName2799, &$s2820);
            panda$core$MutableString$append$panda$core$String(typeName2799, ((org$pandalanguage$pandac$Symbol*) p2815->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2796, ((panda$core$Object*) p2815->type));
        }
        goto $l2808;
        $l2809:;
    }
    panda$core$Bit $tmp2822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp2822.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2799, &$s2823);
        kind2821 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2799, &$s2824);
        kind2821 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2796, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2825 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2826 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2825);
    if ($tmp2826.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2799, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2827, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2799, $tmp2827);
    org$pandalanguage$pandac$Type* $tmp2828 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2828->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2828->refCount.value = 1;
    panda$core$String* $tmp2830 = panda$core$MutableString$finish$R$panda$core$String(typeName2799);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2828, $tmp2830, kind2821, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2796), ((panda$core$Bit) { true }));
    return $tmp2828;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2831;
    org$pandalanguage$pandac$MethodDecl* $tmp2832 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2831 = $tmp2832;
    if (((panda$core$Bit) { inherited2831 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2833 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2833;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2834 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2831);
    return $tmp2834;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2835 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2836 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2835);
    return $tmp2836;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2837;
    org$pandalanguage$pandac$MethodDecl* $tmp2838 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2837 = $tmp2838;
    if (((panda$core$Bit) { inherited2837 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2839 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2839;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2840 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2837, p_selfType);
    return $tmp2840;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(org$pandalanguage$pandac$parser$Token$Kind* p_op) {
    org$pandalanguage$pandac$parser$Token$Kind* $match$2060_92841;
    {
        $match$2060_92841 = p_op;
        panda$core$Bit $tmp2842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 51 }));
        if ($tmp2842.value) {
        {
            return &$s2843;
        }
        }
        else {
        panda$core$Bit $tmp2844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp2844.value) {
        {
            return &$s2845;
        }
        }
        else {
        panda$core$Bit $tmp2846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 53 }));
        if ($tmp2846.value) {
        {
            return &$s2847;
        }
        }
        else {
        panda$core$Bit $tmp2848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 54 }));
        if ($tmp2848.value) {
        {
            return &$s2849;
        }
        }
        else {
        panda$core$Bit $tmp2850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 55 }));
        if ($tmp2850.value) {
        {
            return &$s2851;
        }
        }
        else {
        panda$core$Bit $tmp2852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 56 }));
        if ($tmp2852.value) {
        {
            return &$s2853;
        }
        }
        else {
        panda$core$Bit $tmp2854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 57 }));
        if ($tmp2854.value) {
        {
            return &$s2855;
        }
        }
        else {
        panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp2856.value) {
        {
            return &$s2857;
        }
        }
        else {
        panda$core$Bit $tmp2858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 59 }));
        if ($tmp2858.value) {
        {
            return &$s2859;
        }
        }
        else {
        panda$core$Bit $tmp2860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp2860.value) {
        {
            return &$s2861;
        }
        }
        else {
        panda$core$Bit $tmp2862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp2862.value) {
        {
            return &$s2863;
        }
        }
        else {
        panda$core$Bit $tmp2864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 65 }));
        if ($tmp2864.value) {
        {
            return &$s2865;
        }
        }
        else {
        panda$core$Bit $tmp2866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 64 }));
        if ($tmp2866.value) {
        {
            return &$s2867;
        }
        }
        else {
        panda$core$Bit $tmp2868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 68 }));
        if ($tmp2868.value) {
        {
            return &$s2869;
        }
        }
        else {
        panda$core$Bit $tmp2870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 69 }));
        if ($tmp2870.value) {
        {
            return &$s2871;
        }
        }
        else {
        panda$core$Bit $tmp2872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 66 }));
        if ($tmp2872.value) {
        {
            return &$s2873;
        }
        }
        else {
        panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 67 }));
        if ($tmp2874.value) {
        {
            return &$s2875;
        }
        }
        else {
        panda$core$Bit $tmp2876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 70 }));
        if ($tmp2876.value) {
        {
            return &$s2877;
        }
        }
        else {
        panda$core$Bit $tmp2878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 71 }));
        if ($tmp2878.value) {
        {
            return &$s2879;
        }
        }
        else {
        panda$core$Bit $tmp2880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp2880.value) {
        {
            return &$s2881;
        }
        }
        else {
        panda$core$Bit $tmp2882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp2882.value) {
        {
            return &$s2883;
        }
        }
        else {
        panda$core$Bit $tmp2884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 72 }));
        if ($tmp2884.value) {
        {
            return &$s2885;
        }
        }
        else {
        panda$core$Bit $tmp2886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp2886.value) {
        {
            return &$s2887;
        }
        }
        else {
        panda$core$Bit $tmp2888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp2888.value) {
        {
            return &$s2889;
        }
        }
        else {
        panda$core$Bit $tmp2890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 73 }));
        if ($tmp2890.value) {
        {
            return &$s2891;
        }
        }
        else {
        panda$core$Bit $tmp2892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 60 }));
        if ($tmp2892.value) {
        {
            return &$s2893;
        }
        }
        else {
        panda$core$Bit $tmp2894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2060_92841->$rawValue, ((panda$core$Int64) { 61 }));
        if ($tmp2894.value) {
        {
            return &$s2895;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
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
panda$core$Bit org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(org$pandalanguage$pandac$parser$Token$Kind* p_op) {
    org$pandalanguage$pandac$parser$Token$Kind* $match$2095_92896;
    {
        $match$2095_92896 = p_op;
        panda$core$Bit $tmp2911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 74 }));
        bool $tmp2910 = $tmp2911.value;
        if ($tmp2910) goto $l2912;
        panda$core$Bit $tmp2913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 75 }));
        $tmp2910 = $tmp2913.value;
        $l2912:;
        panda$core$Bit $tmp2914 = { $tmp2910 };
        bool $tmp2909 = $tmp2914.value;
        if ($tmp2909) goto $l2915;
        panda$core$Bit $tmp2916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 76 }));
        $tmp2909 = $tmp2916.value;
        $l2915:;
        panda$core$Bit $tmp2917 = { $tmp2909 };
        bool $tmp2908 = $tmp2917.value;
        if ($tmp2908) goto $l2918;
        panda$core$Bit $tmp2919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 77 }));
        $tmp2908 = $tmp2919.value;
        $l2918:;
        panda$core$Bit $tmp2920 = { $tmp2908 };
        bool $tmp2907 = $tmp2920.value;
        if ($tmp2907) goto $l2921;
        panda$core$Bit $tmp2922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 79 }));
        $tmp2907 = $tmp2922.value;
        $l2921:;
        panda$core$Bit $tmp2923 = { $tmp2907 };
        bool $tmp2906 = $tmp2923.value;
        if ($tmp2906) goto $l2924;
        panda$core$Bit $tmp2925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 78 }));
        $tmp2906 = $tmp2925.value;
        $l2924:;
        panda$core$Bit $tmp2926 = { $tmp2906 };
        bool $tmp2905 = $tmp2926.value;
        if ($tmp2905) goto $l2927;
        panda$core$Bit $tmp2928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 80 }));
        $tmp2905 = $tmp2928.value;
        $l2927:;
        panda$core$Bit $tmp2929 = { $tmp2905 };
        bool $tmp2904 = $tmp2929.value;
        if ($tmp2904) goto $l2930;
        panda$core$Bit $tmp2931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 81 }));
        $tmp2904 = $tmp2931.value;
        $l2930:;
        panda$core$Bit $tmp2932 = { $tmp2904 };
        bool $tmp2903 = $tmp2932.value;
        if ($tmp2903) goto $l2933;
        panda$core$Bit $tmp2934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 82 }));
        $tmp2903 = $tmp2934.value;
        $l2933:;
        panda$core$Bit $tmp2935 = { $tmp2903 };
        bool $tmp2902 = $tmp2935.value;
        if ($tmp2902) goto $l2936;
        panda$core$Bit $tmp2937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 83 }));
        $tmp2902 = $tmp2937.value;
        $l2936:;
        panda$core$Bit $tmp2938 = { $tmp2902 };
        bool $tmp2901 = $tmp2938.value;
        if ($tmp2901) goto $l2939;
        panda$core$Bit $tmp2940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 84 }));
        $tmp2901 = $tmp2940.value;
        $l2939:;
        panda$core$Bit $tmp2941 = { $tmp2901 };
        bool $tmp2900 = $tmp2941.value;
        if ($tmp2900) goto $l2942;
        panda$core$Bit $tmp2943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 85 }));
        $tmp2900 = $tmp2943.value;
        $l2942:;
        panda$core$Bit $tmp2944 = { $tmp2900 };
        bool $tmp2899 = $tmp2944.value;
        if ($tmp2899) goto $l2945;
        panda$core$Bit $tmp2946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 86 }));
        $tmp2899 = $tmp2946.value;
        $l2945:;
        panda$core$Bit $tmp2947 = { $tmp2899 };
        bool $tmp2898 = $tmp2947.value;
        if ($tmp2898) goto $l2948;
        panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 87 }));
        $tmp2898 = $tmp2949.value;
        $l2948:;
        panda$core$Bit $tmp2950 = { $tmp2898 };
        bool $tmp2897 = $tmp2950.value;
        if ($tmp2897) goto $l2951;
        panda$core$Bit $tmp2952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_92896->$rawValue, ((panda$core$Int64) { 88 }));
        $tmp2897 = $tmp2952.value;
        $l2951:;
        panda$core$Bit $tmp2953 = { $tmp2897 };
        if ($tmp2953.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
}
org$pandalanguage$pandac$parser$Token$Kind* org$pandalanguage$pandac$Compiler$removeAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Kind(org$pandalanguage$pandac$parser$Token$Kind* p_op) {
    org$pandalanguage$pandac$parser$Token$Kind* $match$2109_92954;
    {
        $match$2109_92954 = p_op;
        panda$core$Bit $tmp2955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 74 }));
        if ($tmp2955.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2956 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2956->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2956->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2956, ((panda$core$Int64) { 51 }));
            return $tmp2956;
        }
        }
        else {
        panda$core$Bit $tmp2958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 75 }));
        if ($tmp2958.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2959 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2959->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2959->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2959, ((panda$core$Int64) { 52 }));
            return $tmp2959;
        }
        }
        else {
        panda$core$Bit $tmp2961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 76 }));
        if ($tmp2961.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2962 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2962->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2962->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2962, ((panda$core$Int64) { 53 }));
            return $tmp2962;
        }
        }
        else {
        panda$core$Bit $tmp2964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 77 }));
        if ($tmp2964.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2965 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2965->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2965->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2965, ((panda$core$Int64) { 54 }));
            return $tmp2965;
        }
        }
        else {
        panda$core$Bit $tmp2967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 79 }));
        if ($tmp2967.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2968 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2968->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2968->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2968, ((panda$core$Int64) { 55 }));
            return $tmp2968;
        }
        }
        else {
        panda$core$Bit $tmp2970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 78 }));
        if ($tmp2970.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2971 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2971->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2971->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2971, ((panda$core$Int64) { 56 }));
            return $tmp2971;
        }
        }
        else {
        panda$core$Bit $tmp2973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 80 }));
        if ($tmp2973.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2974 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2974->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2974->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2974, ((panda$core$Int64) { 57 }));
            return $tmp2974;
        }
        }
        else {
        panda$core$Bit $tmp2976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 81 }));
        if ($tmp2976.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2977 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2977->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2977->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2977, ((panda$core$Int64) { 68 }));
            return $tmp2977;
        }
        }
        else {
        panda$core$Bit $tmp2979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 82 }));
        if ($tmp2979.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2980 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2980->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2980->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2980, ((panda$core$Int64) { 69 }));
            return $tmp2980;
        }
        }
        else {
        panda$core$Bit $tmp2982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 83 }));
        if ($tmp2982.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2983 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2983->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2983->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2983, ((panda$core$Int64) { 66 }));
            return $tmp2983;
        }
        }
        else {
        panda$core$Bit $tmp2985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 84 }));
        if ($tmp2985.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2986 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2986->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2986->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2986, ((panda$core$Int64) { 67 }));
            return $tmp2986;
        }
        }
        else {
        panda$core$Bit $tmp2988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 85 }));
        if ($tmp2988.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2989 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2989->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2989->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2989, ((panda$core$Int64) { 70 }));
            return $tmp2989;
        }
        }
        else {
        panda$core$Bit $tmp2991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 86 }));
        if ($tmp2991.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2992 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2992->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2992->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2992, ((panda$core$Int64) { 71 }));
            return $tmp2992;
        }
        }
        else {
        panda$core$Bit $tmp2994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 87 }));
        if ($tmp2994.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2995 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2995->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2995->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2995, ((panda$core$Int64) { 72 }));
            return $tmp2995;
        }
        }
        else {
        panda$core$Bit $tmp2997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_92954->$rawValue, ((panda$core$Int64) { 88 }));
        if ($tmp2997.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2998 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2998->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2998->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2998, ((panda$core$Int64) { 1 }));
            return $tmp2998;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
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
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    switch (p_expr->kind.value) {
        case 1009:
        {
            panda$core$Int64 $tmp3000 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp3001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3000, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3001.value);
            panda$core$Bit $tmp3002 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp3002.value) {
            {
                panda$core$Object* $tmp3003 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp3004 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp3003));
                return $tmp3004;
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
            panda$core$Object* $tmp3005 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp3006 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp3005));
            return $tmp3006;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind* p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l3032;
    panda$core$Int64 r3034;
    org$pandalanguage$pandac$parser$Token$Kind* $match$2156_133036;
    panda$core$UInt64 v3038;
    panda$core$UInt64 v3045;
    panda$core$UInt64 v3052;
    panda$core$UInt64 v3059;
    panda$core$UInt64 v3066;
    panda$core$UInt64 v3103;
    panda$core$UInt64 v3110;
    panda$core$UInt64 v3117;
    panda$core$UInt64 v3124;
    panda$core$UInt64 v3131;
    panda$core$Bit $tmp3008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3007 = $tmp3008.value;
    if ($tmp3007) goto $l3009;
    panda$core$Bit $tmp3010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp3007 = $tmp3010.value;
    $l3009:;
    panda$core$Bit $tmp3011 = { $tmp3007 };
    PANDA_ASSERT($tmp3011.value);
    panda$core$Bit $tmp3013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3012 = $tmp3013.value;
    if ($tmp3012) goto $l3014;
    panda$core$Bit $tmp3015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp3012 = $tmp3015.value;
    $l3014:;
    panda$core$Bit $tmp3016 = { $tmp3012 };
    PANDA_ASSERT($tmp3016.value);
    panda$core$Bit $tmp3019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp3018 = $tmp3019.value;
    if ($tmp3018) goto $l3020;
    panda$core$UInt64 $tmp3022 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp3023 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp3022);
    bool $tmp3021 = $tmp3023.value;
    if (!$tmp3021) goto $l3024;
    panda$core$Bit $tmp3025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp3021 = $tmp3025.value;
    $l3024:;
    panda$core$Bit $tmp3026 = { $tmp3021 };
    $tmp3018 = $tmp3026.value;
    $l3020:;
    panda$core$Bit $tmp3027 = { $tmp3018 };
    bool $tmp3017 = $tmp3027.value;
    if ($tmp3017) goto $l3028;
    panda$core$UInt64 $tmp3029 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp3030 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp3029);
    $tmp3017 = $tmp3030.value;
    $l3028:;
    panda$core$Bit $tmp3031 = { $tmp3017 };
    if ($tmp3031.value) {
    {
        panda$core$Int64 $tmp3033 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l3032 = $tmp3033;
        panda$core$Int64 $tmp3035 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r3034 = $tmp3035;
        {
            $match$2156_133036 = p_op;
            panda$core$Bit $tmp3037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 51 }));
            if ($tmp3037.value) {
            {
                panda$core$Int64 $tmp3039 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l3032, r3034);
                panda$core$UInt64 $tmp3040 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3039);
                v3038 = $tmp3040;
                org$pandalanguage$pandac$IRNode* $tmp3041 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3041->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3041->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3043 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3038);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3041, ((panda$core$Int64) { 1004 }), p_position, $tmp3043, v3038);
                return $tmp3041;
            }
            }
            else {
            panda$core$Bit $tmp3044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 52 }));
            if ($tmp3044.value) {
            {
                panda$core$Int64 $tmp3046 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l3032, r3034);
                panda$core$UInt64 $tmp3047 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3046);
                v3045 = $tmp3047;
                org$pandalanguage$pandac$IRNode* $tmp3048 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3048->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3048->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3050 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3045);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3048, ((panda$core$Int64) { 1004 }), p_position, $tmp3050, v3045);
                return $tmp3048;
            }
            }
            else {
            panda$core$Bit $tmp3051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 53 }));
            if ($tmp3051.value) {
            {
                panda$core$Int64 $tmp3053 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l3032, r3034);
                panda$core$UInt64 $tmp3054 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3053);
                v3052 = $tmp3054;
                org$pandalanguage$pandac$IRNode* $tmp3055 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3055->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3055->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3057 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3052);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3055, ((panda$core$Int64) { 1004 }), p_position, $tmp3057, v3052);
                return $tmp3055;
            }
            }
            else {
            panda$core$Bit $tmp3058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 55 }));
            if ($tmp3058.value) {
            {
                panda$core$Int64 $tmp3060 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l3032, r3034);
                panda$core$UInt64 $tmp3061 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3060);
                v3059 = $tmp3061;
                org$pandalanguage$pandac$IRNode* $tmp3062 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3062->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3062->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3064 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3059);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3062, ((panda$core$Int64) { 1004 }), p_position, $tmp3064, v3059);
                return $tmp3062;
            }
            }
            else {
            panda$core$Bit $tmp3065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 56 }));
            if ($tmp3065.value) {
            {
                panda$core$Int64 $tmp3067 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l3032, r3034);
                panda$core$UInt64 $tmp3068 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3067);
                v3066 = $tmp3068;
                org$pandalanguage$pandac$IRNode* $tmp3069 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3069->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3069->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3071 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3066);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3069, ((panda$core$Int64) { 1004 }), p_position, $tmp3071, v3066);
                return $tmp3069;
            }
            }
            else {
            panda$core$Bit $tmp3072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 58 }));
            if ($tmp3072.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3073 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3073->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3073->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3075 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l3032, r3034);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3073, ((panda$core$Int64) { 1011 }), p_position, $tmp3075, $tmp3076);
                return $tmp3073;
            }
            }
            else {
            panda$core$Bit $tmp3077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 59 }));
            if ($tmp3077.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3078 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3078->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3078->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3080 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3081 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l3032, r3034);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3078, ((panda$core$Int64) { 1011 }), p_position, $tmp3080, $tmp3081);
                return $tmp3078;
            }
            }
            else {
            panda$core$Bit $tmp3082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp3082.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3083 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3083->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3083->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3085 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3086 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l3032, r3034);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3083, ((panda$core$Int64) { 1011 }), p_position, $tmp3085, $tmp3086);
                return $tmp3083;
            }
            }
            else {
            panda$core$Bit $tmp3087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp3087.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3088 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3088->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3088->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3090 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3091 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l3032, r3034);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3088, ((panda$core$Int64) { 1011 }), p_position, $tmp3090, $tmp3091);
                return $tmp3088;
            }
            }
            else {
            panda$core$Bit $tmp3092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 64 }));
            if ($tmp3092.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3093 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3093->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3093->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3095 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3096 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l3032, r3034);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3093, ((panda$core$Int64) { 1011 }), p_position, $tmp3095, $tmp3096);
                return $tmp3093;
            }
            }
            else {
            panda$core$Bit $tmp3097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 65 }));
            if ($tmp3097.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3098 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3098->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3098->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3100 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp3101 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l3032, r3034);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3098, ((panda$core$Int64) { 1011 }), p_position, $tmp3100, $tmp3101);
                return $tmp3098;
            }
            }
            else {
            panda$core$Bit $tmp3102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 67 }));
            if ($tmp3102.value) {
            {
                panda$core$Int64 $tmp3104 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l3032, r3034);
                panda$core$UInt64 $tmp3105 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3104);
                v3103 = $tmp3105;
                org$pandalanguage$pandac$IRNode* $tmp3106 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3106->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3106->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3108 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3103);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3106, ((panda$core$Int64) { 1004 }), p_position, $tmp3108, v3103);
                return $tmp3106;
            }
            }
            else {
            panda$core$Bit $tmp3109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 69 }));
            if ($tmp3109.value) {
            {
                panda$core$Int64 $tmp3111 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l3032, r3034);
                panda$core$UInt64 $tmp3112 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3111);
                v3110 = $tmp3112;
                org$pandalanguage$pandac$IRNode* $tmp3113 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3113->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3113->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3115 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3110);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3113, ((panda$core$Int64) { 1004 }), p_position, $tmp3115, v3110);
                return $tmp3113;
            }
            }
            else {
            panda$core$Bit $tmp3116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 71 }));
            if ($tmp3116.value) {
            {
                panda$core$Int64 $tmp3118 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l3032, r3034);
                panda$core$UInt64 $tmp3119 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3118);
                v3117 = $tmp3119;
                org$pandalanguage$pandac$IRNode* $tmp3120 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3120->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3120->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3122 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3117);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3120, ((panda$core$Int64) { 1004 }), p_position, $tmp3122, v3117);
                return $tmp3120;
            }
            }
            else {
            panda$core$Bit $tmp3123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 72 }));
            if ($tmp3123.value) {
            {
                panda$core$Int64 $tmp3125 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l3032, r3034);
                panda$core$UInt64 $tmp3126 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3125);
                v3124 = $tmp3126;
                org$pandalanguage$pandac$IRNode* $tmp3127 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3127->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3127->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3129 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3124);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3127, ((panda$core$Int64) { 1004 }), p_position, $tmp3129, v3124);
                return $tmp3127;
            }
            }
            else {
            panda$core$Bit $tmp3130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2156_133036->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp3130.value) {
            {
                panda$core$Int64 $tmp3132 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l3032, r3034);
                panda$core$UInt64 $tmp3133 = panda$core$Int64$convert$R$panda$core$UInt64($tmp3132);
                v3131 = $tmp3133;
                org$pandalanguage$pandac$IRNode* $tmp3134 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3134->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3134->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3136 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v3131);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3134, ((panda$core$Int64) { 1004 }), p_position, $tmp3136, v3131);
                return $tmp3134;
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
            }
            }
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s3137);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp3138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp3138.value) {
    {
        panda$core$Object* $tmp3139 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp3139);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$parser$Token$Kind* p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args3144;
    org$pandalanguage$pandac$IRNode* resolved3152;
    panda$collections$Array* children3157;
    panda$core$UInt64 baseId3163;
    org$pandalanguage$pandac$IRNode* base3164;
    panda$core$UInt64 indexId3172;
    org$pandalanguage$pandac$IRNode* index3173;
    org$pandalanguage$pandac$IRNode* baseRef3179;
    org$pandalanguage$pandac$IRNode* indexRef3182;
    org$pandalanguage$pandac$IRNode* rhsIndex3185;
    org$pandalanguage$pandac$IRNode* value3189;
    panda$core$Bit $tmp3140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp3140.value);
    panda$core$Int64 $tmp3141 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp3142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3141, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3142.value);
    panda$core$Bit $tmp3143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 73 }));
    if ($tmp3143.value) {
    {
        panda$collections$Array* $tmp3145 = (panda$collections$Array*) malloc(40);
        $tmp3145->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3145->refCount.value = 1;
        panda$collections$Array$init($tmp3145);
        args3144 = $tmp3145;
        panda$core$Object* $tmp3147 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args3144, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3147)));
        panda$collections$Array$add$panda$collections$Array$T(args3144, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp3148 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3150 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp3148), &$s3149, ((panda$collections$ListView*) args3144));
        return $tmp3150;
    }
    }
    panda$core$Bit $tmp3151 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp3151.value);
    org$pandalanguage$pandac$IRNode* $tmp3153 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved3152 = $tmp3153;
    if (((panda$core$Bit) { resolved3152 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3154 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved3152);
    resolved3152 = $tmp3154;
    panda$core$Int64 $tmp3155 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved3152->children);
    panda$core$Bit $tmp3156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3155, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3156.value);
    panda$collections$Array* $tmp3158 = (panda$collections$Array*) malloc(40);
    $tmp3158->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3158->refCount.value = 1;
    panda$collections$Array$init($tmp3158);
    children3157 = $tmp3158;
    panda$core$Object* $tmp3160 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved3152->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3161 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp3160));
    panda$collections$Array$add$panda$collections$Array$T(children3157, ((panda$core$Object*) $tmp3161));
    panda$core$UInt64 $tmp3162 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp3162;
    baseId3163 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp3165 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3165->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3165->refCount.value = 1;
    panda$core$Object* $tmp3167 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3157, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3168 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3157, ((panda$core$Int64) { 0 }));
    panda$core$UInt64$wrapper* $tmp3169;
    $tmp3169 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp3169->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp3169->refCount = 1;
    $tmp3169->value = baseId3163;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3165, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp3167)->position, ((org$pandalanguage$pandac$IRNode*) $tmp3168)->type, ((panda$core$Object*) $tmp3169), ((panda$collections$ListView*) children3157));
    base3164 = $tmp3165;
    panda$collections$Array$clear(children3157);
    panda$core$Object* $tmp3170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved3152->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children3157, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3170)));
    panda$core$UInt64 $tmp3171 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp3171;
    indexId3172 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp3174 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3174->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3174->refCount.value = 1;
    panda$core$Object* $tmp3176 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3157, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3177 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children3157, ((panda$core$Int64) { 0 }));
    panda$core$UInt64$wrapper* $tmp3178;
    $tmp3178 = (panda$core$UInt64$wrapper*) malloc(24);
    $tmp3178->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
    $tmp3178->refCount = 1;
    $tmp3178->value = indexId3172;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3174, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp3176)->position, ((org$pandalanguage$pandac$IRNode*) $tmp3177)->type, ((panda$core$Object*) $tmp3178), ((panda$collections$ListView*) children3157));
    index3173 = $tmp3174;
    org$pandalanguage$pandac$IRNode* $tmp3180 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3180->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3180->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3180, ((panda$core$Int64) { 1028 }), base3164->position, base3164->type, baseId3163);
    baseRef3179 = $tmp3180;
    org$pandalanguage$pandac$IRNode* $tmp3183 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3183->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3183->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3183, ((panda$core$Int64) { 1028 }), index3173->position, index3173->type, indexId3172);
    indexRef3182 = $tmp3183;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3186 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp3186->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp3186->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3186, ((panda$core$Int64) { 101 }));
    org$pandalanguage$pandac$IRNode* $tmp3188 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef3179, $tmp3186, indexRef3182);
    rhsIndex3185 = $tmp3188;
    if (((panda$core$Bit) { rhsIndex3185 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3190 = org$pandalanguage$pandac$Compiler$removeAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Kind(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3191 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex3185, $tmp3190, p_right);
    value3189 = $tmp3191;
    if (((panda$core$Bit) { value3189 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3194 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex3185->type);
    bool $tmp3193 = $tmp3194.value;
    if (!$tmp3193) goto $l3195;
    panda$core$Bit $tmp3196 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp3193 = $tmp3196.value;
    $l3195:;
    panda$core$Bit $tmp3197 = { $tmp3193 };
    bool $tmp3192 = $tmp3197.value;
    if (!$tmp3192) goto $l3198;
    panda$core$Bit $tmp3199 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex3185->type, value3189->type);
    $tmp3192 = $tmp3199.value;
    $l3198:;
    panda$core$Bit $tmp3200 = { $tmp3192 };
    if ($tmp3200.value) {
    {
        panda$collections$Array* $tmp3202 = (panda$collections$Array*) malloc(40);
        $tmp3202->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3202->refCount.value = 1;
        panda$collections$Array$init($tmp3202);
        org$pandalanguage$pandac$IRNode* $tmp3204 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3189, &$s3201, ((panda$collections$ListView*) $tmp3202), resolved3152->type);
        value3189 = $tmp3204;
        if (((panda$core$Bit) { value3189 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children3157);
    panda$collections$Array$add$panda$collections$Array$T(children3157, ((panda$core$Object*) index3173));
    panda$collections$Array$add$panda$collections$Array$T(children3157, ((panda$core$Object*) value3189));
    org$pandalanguage$pandac$IRNode* $tmp3206 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base3164, &$s3205, ((panda$collections$ListView*) children3157));
    return $tmp3206;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, org$pandalanguage$pandac$parser$Token$Kind* p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left3207;
    org$pandalanguage$pandac$IRNode* right3208;
    panda$core$Int64 kind3232;
    org$pandalanguage$pandac$IRNode* resolved3239;
    panda$collections$Array* children3241;
    org$pandalanguage$pandac$IRNode* resolved3248;
    panda$collections$Array* children3250;
    panda$collections$Array* children3267;
    org$pandalanguage$pandac$IRNode* reusedLeft3273;
    org$pandalanguage$pandac$IRNode* toNonNullable3276;
    org$pandalanguage$pandac$IRNode* comparison3279;
    org$pandalanguage$pandac$IRNode* nullCheck3281;
    org$pandalanguage$pandac$ClassDecl* cl3303;
    org$pandalanguage$pandac$ClassDecl* cl3320;
    org$pandalanguage$pandac$IRNode* finalLeft3336;
    org$pandalanguage$pandac$IRNode* finalRight3339;
    panda$collections$Array* children3342;
    panda$collections$Array* children3356;
    panda$collections$Array* children3370;
    org$pandalanguage$pandac$IRNode* reusedLeft3377;
    org$pandalanguage$pandac$ClassDecl* cl3397;
    panda$collections$ListView* parameters3399;
    org$pandalanguage$pandac$Symbol* methods3401;
    org$pandalanguage$pandac$Type* type3405;
    panda$collections$Array* types3406;
    org$pandalanguage$pandac$MethodDecl* m3410;
    panda$collections$Iterator* m$Iter3415;
    org$pandalanguage$pandac$MethodDecl* m3427;
    panda$collections$Array* children3438;
    panda$collections$Array* children3467;
    panda$collections$Array* children3483;
    org$pandalanguage$pandac$Type* resultType3506;
    org$pandalanguage$pandac$parser$Token$Kind* $match$2495_133507;
    org$pandalanguage$pandac$IRNode* result3532;
    org$pandalanguage$pandac$IRNode* resolved3535;
    org$pandalanguage$pandac$IRNode* target3541;
    left3207 = p_rawLeft;
    right3208 = p_rawRight;
    panda$core$Bit $tmp3209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3207->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp3209.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3210 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3208);
        right3208 = $tmp3210;
        if (((panda$core$Bit) { right3208 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp3211 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left3207, right3208->type);
        if (((panda$core$Bit) { $tmp3211.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3212 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3207, right3208->type);
            left3207 = $tmp3212;
        }
        }
    }
    }
    panda$core$Bit $tmp3214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3208->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp3213 = $tmp3214.value;
    if (!$tmp3213) goto $l3215;
    panda$core$Int64$nullable $tmp3216 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3208, left3207->type);
    $tmp3213 = ((panda$core$Bit) { $tmp3216.nonnull }).value;
    $l3215:;
    panda$core$Bit $tmp3217 = { $tmp3213 };
    if ($tmp3217.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3218 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3208, left3207->type);
        right3208 = $tmp3218;
    }
    }
    panda$core$Bit $tmp3222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 58 }));
    bool $tmp3221 = $tmp3222.value;
    if ($tmp3221) goto $l3223;
    panda$core$Bit $tmp3224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 59 }));
    $tmp3221 = $tmp3224.value;
    $l3223:;
    panda$core$Bit $tmp3225 = { $tmp3221 };
    bool $tmp3220 = $tmp3225.value;
    if ($tmp3220) goto $l3226;
    panda$core$Bit $tmp3227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 60 }));
    $tmp3220 = $tmp3227.value;
    $l3226:;
    panda$core$Bit $tmp3228 = { $tmp3220 };
    bool $tmp3219 = $tmp3228.value;
    if ($tmp3219) goto $l3229;
    panda$core$Bit $tmp3230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 61 }));
    $tmp3219 = $tmp3230.value;
    $l3229:;
    panda$core$Bit $tmp3231 = { $tmp3219 };
    if ($tmp3231.value) {
    {
        panda$core$Bit $tmp3234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 58 }));
        bool $tmp3233 = $tmp3234.value;
        if ($tmp3233) goto $l3235;
        panda$core$Bit $tmp3236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 60 }));
        $tmp3233 = $tmp3236.value;
        $l3235:;
        panda$core$Bit $tmp3237 = { $tmp3233 };
        if ($tmp3237.value) {
        {
            kind3232 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind3232 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp3238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3207->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3238.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3240 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3208);
            resolved3239 = $tmp3240;
            if (((panda$core$Bit) { resolved3239 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3242 = (panda$collections$Array*) malloc(40);
            $tmp3242->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3242->refCount.value = 1;
            panda$collections$Array$init($tmp3242);
            children3241 = $tmp3242;
            panda$collections$Array$add$panda$collections$Array$T(children3241, ((panda$core$Object*) resolved3239));
            org$pandalanguage$pandac$IRNode* $tmp3244 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3244->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3244->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3246 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3244, kind3232, p_position, $tmp3246, ((panda$collections$ListView*) children3241));
            return $tmp3244;
        }
        }
        panda$core$Bit $tmp3247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3208->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3247.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3249 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3207);
            resolved3248 = $tmp3249;
            if (((panda$core$Bit) { resolved3248 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3251 = (panda$collections$Array*) malloc(40);
            $tmp3251->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3251->refCount.value = 1;
            panda$collections$Array$init($tmp3251);
            children3250 = $tmp3251;
            panda$collections$Array$add$panda$collections$Array$T(children3250, ((panda$core$Object*) resolved3248));
            org$pandalanguage$pandac$IRNode* $tmp3253 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3253->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3253->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3255 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3253, kind3232, p_position, $tmp3255, ((panda$collections$ListView*) children3250));
            return $tmp3253;
        }
        }
    }
    }
    panda$core$Bit $tmp3258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 58 }));
    bool $tmp3257 = $tmp3258.value;
    if ($tmp3257) goto $l3259;
    panda$core$Bit $tmp3260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 59 }));
    $tmp3257 = $tmp3260.value;
    $l3259:;
    panda$core$Bit $tmp3261 = { $tmp3257 };
    bool $tmp3256 = $tmp3261.value;
    if (!$tmp3256) goto $l3262;
    panda$core$Bit $tmp3263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3207->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp3256 = $tmp3263.value;
    $l3262:;
    panda$core$Bit $tmp3264 = { $tmp3256 };
    if ($tmp3264.value) {
    {
        panda$core$Bit $tmp3265 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right3208->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp3265.value);
        panda$core$UInt64 $tmp3266 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp3266;
        panda$collections$Array* $tmp3268 = (panda$collections$Array*) malloc(40);
        $tmp3268->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3268->refCount.value = 1;
        panda$collections$Array$init($tmp3268);
        children3267 = $tmp3268;
        panda$collections$Array$add$panda$collections$Array$T(children3267, ((panda$core$Object*) left3207));
        org$pandalanguage$pandac$IRNode* $tmp3270 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3270->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3270->refCount.value = 1;
        panda$core$UInt64$wrapper* $tmp3272;
        $tmp3272 = (panda$core$UInt64$wrapper*) malloc(24);
        $tmp3272->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
        $tmp3272->refCount = 1;
        $tmp3272->value = self->reusedValueCount;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3270, ((panda$core$Int64) { 1027 }), left3207->position, left3207->type, ((panda$core$Object*) $tmp3272), ((panda$collections$ListView*) children3267));
        left3207 = $tmp3270;
        org$pandalanguage$pandac$IRNode* $tmp3274 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3274->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3274->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3274, ((panda$core$Int64) { 1028 }), left3207->position, left3207->type, self->reusedValueCount);
        reusedLeft3273 = $tmp3274;
        panda$core$Object* $tmp3277 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left3207->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3278 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft3273, ((org$pandalanguage$pandac$Type*) $tmp3277));
        toNonNullable3276 = $tmp3278;
        org$pandalanguage$pandac$IRNode* $tmp3280 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable3276, p_op, right3208);
        comparison3279 = $tmp3280;
        if (((panda$core$Bit) { comparison3279 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind* $tmp3282 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp3282->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp3282->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3282, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode* $tmp3284 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3284->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3284->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3286 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3284, ((panda$core$Int64) { 1030 }), p_position, $tmp3286);
        org$pandalanguage$pandac$IRNode* $tmp3287 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3207, $tmp3282, $tmp3284);
        nullCheck3281 = $tmp3287;
        if (((panda$core$Bit) { nullCheck3281 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children3267);
        panda$collections$Array$add$panda$collections$Array$T(children3267, ((panda$core$Object*) nullCheck3281));
        panda$collections$Array$add$panda$collections$Array$T(children3267, ((panda$core$Object*) comparison3279));
        org$pandalanguage$pandac$IRNode* $tmp3288 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3288->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3288->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3290 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3288, ((panda$core$Int64) { 1011 }), p_position, $tmp3290, $tmp3291);
        org$pandalanguage$pandac$Type* $tmp3292 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3293 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3288, $tmp3292);
        panda$collections$Array$add$panda$collections$Array$T(children3267, ((panda$core$Object*) $tmp3293));
        org$pandalanguage$pandac$IRNode* $tmp3294 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3294->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3294->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3296 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3294, ((panda$core$Int64) { 1044 }), p_position, $tmp3296, ((panda$collections$ListView*) children3267));
        return $tmp3294;
    }
    }
    panda$core$Bit $tmp3298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 60 }));
    bool $tmp3297 = $tmp3298.value;
    if ($tmp3297) goto $l3299;
    panda$core$Bit $tmp3300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 61 }));
    $tmp3297 = $tmp3300.value;
    $l3299:;
    panda$core$Bit $tmp3301 = { $tmp3297 };
    if ($tmp3301.value) {
    {
        panda$core$Bit $tmp3302 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left3207->type);
        if ($tmp3302.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3304 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left3207->type);
            cl3303 = $tmp3304;
            if (((panda$core$Bit) { cl3303 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3305 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3303);
            if ($tmp3305.value) {
            {
                panda$core$String* $tmp3307 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
                panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3306, $tmp3307);
                panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3308, &$s3309);
                panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3310, ((panda$core$Object*) left3207->type));
                panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3311, &$s3312);
                panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3314, ((panda$core$Object*) right3208->type));
                panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, &$s3316);
                panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, $tmp3317);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3318);
            }
            }
        }
        }
        panda$core$Bit $tmp3319 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right3208->type);
        if ($tmp3319.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3321 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right3208->type);
            cl3320 = $tmp3321;
            if (((panda$core$Bit) { cl3320 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3322 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3320);
            if ($tmp3322.value) {
            {
                panda$core$String* $tmp3324 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
                panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3323, $tmp3324);
                panda$core$String* $tmp3327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3325, &$s3326);
                panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3327, ((panda$core$Object*) left3207->type));
                panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, &$s3329);
                panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3331, ((panda$core$Object*) right3208->type));
                panda$core$String* $tmp3334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, &$s3333);
                panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, $tmp3334);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3335);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp3337 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3338 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3207, $tmp3337);
        finalLeft3336 = $tmp3338;
        if (((panda$core$Bit) { finalLeft3336 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3340 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3341 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3208, $tmp3340);
        finalRight3339 = $tmp3341;
        if (((panda$core$Bit) { finalRight3339 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3343 = (panda$collections$Array*) malloc(40);
        $tmp3343->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3343->refCount.value = 1;
        panda$collections$Array$init($tmp3343);
        children3342 = $tmp3343;
        panda$collections$Array$add$panda$collections$Array$T(children3342, ((panda$core$Object*) finalLeft3336));
        panda$collections$Array$add$panda$collections$Array$T(children3342, ((panda$core$Object*) finalRight3339));
        org$pandalanguage$pandac$IRNode* $tmp3345 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3345->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3345->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3347 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3345, ((panda$core$Int64) { 1023 }), p_position, $tmp3347, ((panda$core$Object*) p_op), ((panda$collections$ListView*) children3342));
        return $tmp3345;
    }
    }
    panda$core$Bit $tmp3348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 73 }));
    if ($tmp3348.value) {
    {
        panda$core$Bit $tmp3349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3207->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3349.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3350 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3207, p_op, right3208);
            return $tmp3350;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3351 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3207);
        left3207 = $tmp3351;
        if (((panda$core$Bit) { left3207 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3352 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3208, left3207->type);
        right3208 = $tmp3352;
        if (((panda$core$Bit) { right3208 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3353 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3207);
        panda$core$Bit $tmp3354 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3353);
        if ($tmp3354.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left3207->position, &$s3355);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3357 = (panda$collections$Array*) malloc(40);
        $tmp3357->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3357->refCount.value = 1;
        panda$collections$Array$init($tmp3357);
        children3356 = $tmp3357;
        panda$collections$Array$add$panda$collections$Array$T(children3356, ((panda$core$Object*) left3207));
        panda$collections$Array$add$panda$collections$Array$T(children3356, ((panda$core$Object*) right3208));
        org$pandalanguage$pandac$IRNode* $tmp3359 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3359->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3359->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind* $tmp3361 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp3361->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp3361->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3361, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3359, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) $tmp3361), ((panda$collections$ListView*) children3356));
        return $tmp3359;
    }
    }
    panda$core$Bit $tmp3363 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(p_op);
    if ($tmp3363.value) {
    {
        panda$core$Bit $tmp3364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3207->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3364.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3365 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3207, p_op, right3208);
            return $tmp3365;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3366 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3207);
        left3207 = $tmp3366;
        if (((panda$core$Bit) { left3207 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3367 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3207);
        panda$core$Bit $tmp3368 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3367);
        if ($tmp3368.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left3207->position, &$s3369);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3371 = (panda$collections$Array*) malloc(40);
        $tmp3371->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3371->refCount.value = 1;
        panda$collections$Array$init($tmp3371);
        children3370 = $tmp3371;
        panda$collections$Array$add$panda$collections$Array$T(children3370, ((panda$core$Object*) left3207));
        panda$core$UInt64 $tmp3373 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp3373;
        org$pandalanguage$pandac$IRNode* $tmp3374 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3374->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3374->refCount.value = 1;
        panda$core$UInt64$wrapper* $tmp3376;
        $tmp3376 = (panda$core$UInt64$wrapper*) malloc(24);
        $tmp3376->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
        $tmp3376->refCount = 1;
        $tmp3376->value = self->reusedValueCount;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3374, ((panda$core$Int64) { 1027 }), left3207->position, left3207->type, ((panda$core$Object*) $tmp3376), ((panda$collections$ListView*) children3370));
        left3207 = $tmp3374;
        org$pandalanguage$pandac$IRNode* $tmp3378 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3378->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3378->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3378, ((panda$core$Int64) { 1028 }), left3207->position, left3207->type, self->reusedValueCount);
        reusedLeft3377 = $tmp3378;
        org$pandalanguage$pandac$parser$Token$Kind* $tmp3380 = org$pandalanguage$pandac$Compiler$removeAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Kind(p_op);
        org$pandalanguage$pandac$IRNode* $tmp3381 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft3377, $tmp3380, right3208);
        right3208 = $tmp3381;
        if (((panda$core$Bit) { right3208 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3383 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left3207->type);
        bool $tmp3382 = $tmp3383.value;
        if (!$tmp3382) goto $l3384;
        panda$core$Bit $tmp3385 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left3207->type, right3208->type);
        $tmp3382 = $tmp3385.value;
        $l3384:;
        panda$core$Bit $tmp3386 = { $tmp3382 };
        if ($tmp3386.value) {
        {
            panda$collections$Array* $tmp3388 = (panda$collections$Array*) malloc(40);
            $tmp3388->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3388->refCount.value = 1;
            panda$collections$Array$init($tmp3388);
            org$pandalanguage$pandac$IRNode* $tmp3390 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3208, &$s3387, ((panda$collections$ListView*) $tmp3388), left3207->type);
            right3208 = $tmp3390;
            if (((panda$core$Bit) { right3208 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind* $tmp3391 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp3391->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp3391->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3391, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$IRNode* $tmp3393 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3207, $tmp3391, right3208);
        return $tmp3393;
    }
    }
    panda$core$Bit $tmp3394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 101 }));
    if ($tmp3394.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3395 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3207);
        left3207 = $tmp3395;
        if (((panda$core$Bit) { left3207 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3396 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left3207->type);
        if ($tmp3396.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3398 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left3207->type);
            cl3397 = $tmp3398;
            if (((panda$core$Bit) { cl3397 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$ListView* $tmp3400 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left3207->type);
            parameters3399 = $tmp3400;
            org$pandalanguage$pandac$SymbolTable* $tmp3402 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3397);
            org$pandalanguage$pandac$Symbol* $tmp3404 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3402, &$s3403);
            methods3401 = $tmp3404;
            if (((panda$core$Bit) { methods3401 != NULL }).value) {
            {
                panda$collections$Array* $tmp3407 = (panda$collections$Array*) malloc(40);
                $tmp3407->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3407->refCount.value = 1;
                panda$collections$Array$init($tmp3407);
                types3406 = $tmp3407;
                panda$core$Bit $tmp3409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3401->kind, ((panda$core$Int64) { 204 }));
                if ($tmp3409.value) {
                {
                    m3410 = ((org$pandalanguage$pandac$MethodDecl*) methods3401);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3410);
                    org$pandalanguage$pandac$MethodRef* $tmp3411 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                    $tmp3411->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                    $tmp3411->refCount.value = 1;
                    org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3411, m3410, parameters3399);
                    org$pandalanguage$pandac$Type* $tmp3413 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3411);
                    panda$collections$Array$add$panda$collections$Array$T(types3406, ((panda$core$Object*) $tmp3413));
                }
                }
                else {
                {
                    panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3401->kind, ((panda$core$Int64) { 205 }));
                    PANDA_ASSERT($tmp3414.value);
                    {
                        ITable* $tmp3416 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3401)->methods)->$class->itable;
                        while ($tmp3416->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3416 = $tmp3416->next;
                        }
                        $fn3418 $tmp3417 = $tmp3416->methods[0];
                        panda$collections$Iterator* $tmp3419 = $tmp3417(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3401)->methods));
                        m$Iter3415 = $tmp3419;
                        $l3420:;
                        ITable* $tmp3422 = m$Iter3415->$class->itable;
                        while ($tmp3422->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3422 = $tmp3422->next;
                        }
                        $fn3424 $tmp3423 = $tmp3422->methods[0];
                        panda$core$Bit $tmp3425 = $tmp3423(m$Iter3415);
                        panda$core$Bit $tmp3426 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3425);
                        if (!$tmp3426.value) goto $l3421;
                        {
                            ITable* $tmp3428 = m$Iter3415->$class->itable;
                            while ($tmp3428->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3428 = $tmp3428->next;
                            }
                            $fn3430 $tmp3429 = $tmp3428->methods[1];
                            panda$core$Object* $tmp3431 = $tmp3429(m$Iter3415);
                            m3427 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3431);
                            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3427);
                            org$pandalanguage$pandac$MethodRef* $tmp3432 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                            $tmp3432->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                            $tmp3432->refCount.value = 1;
                            org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3432, m3427, parameters3399);
                            org$pandalanguage$pandac$Type* $tmp3434 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3432);
                            panda$collections$Array$add$panda$collections$Array$T(types3406, ((panda$core$Object*) $tmp3434));
                        }
                        goto $l3420;
                        $l3421:;
                    }
                }
                }
                org$pandalanguage$pandac$Type* $tmp3435 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3435->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3435->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3435, ((panda$collections$ListView*) types3406));
                type3405 = $tmp3435;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp3437 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
                type3405 = $tmp3437;
            }
            }
            panda$collections$Array* $tmp3439 = (panda$collections$Array*) malloc(40);
            $tmp3439->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3439->refCount.value = 1;
            panda$collections$Array$init($tmp3439);
            children3438 = $tmp3439;
            panda$collections$Array$add$panda$collections$Array$T(children3438, ((panda$core$Object*) left3207));
            panda$collections$Array$add$panda$collections$Array$T(children3438, ((panda$core$Object*) right3208));
            org$pandalanguage$pandac$IRNode* $tmp3441 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3441->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3441->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3441, ((panda$core$Int64) { 1040 }), p_position, type3405, ((panda$collections$ListView*) children3438));
            return $tmp3441;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3443 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3444 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left3207->type, $tmp3443);
    if ($tmp3444.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3446 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3447 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right3208->type, $tmp3446);
        bool $tmp3445 = $tmp3447.value;
        if (!$tmp3445) goto $l3448;
        panda$core$Bit $tmp3453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 66 }));
        bool $tmp3452 = $tmp3453.value;
        if ($tmp3452) goto $l3454;
        panda$core$Bit $tmp3455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 68 }));
        $tmp3452 = $tmp3455.value;
        $l3454:;
        panda$core$Bit $tmp3456 = { $tmp3452 };
        bool $tmp3451 = $tmp3456.value;
        if ($tmp3451) goto $l3457;
        panda$core$Bit $tmp3458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 70 }));
        $tmp3451 = $tmp3458.value;
        $l3457:;
        panda$core$Bit $tmp3459 = { $tmp3451 };
        bool $tmp3450 = $tmp3459.value;
        if ($tmp3450) goto $l3460;
        panda$core$Bit $tmp3461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 58 }));
        $tmp3450 = $tmp3461.value;
        $l3460:;
        panda$core$Bit $tmp3462 = { $tmp3450 };
        bool $tmp3449 = $tmp3462.value;
        if ($tmp3449) goto $l3463;
        panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op->$rawValue, ((panda$core$Int64) { 59 }));
        $tmp3449 = $tmp3464.value;
        $l3463:;
        panda$core$Bit $tmp3465 = { $tmp3449 };
        $tmp3445 = $tmp3465.value;
        $l3448:;
        panda$core$Bit $tmp3466 = { $tmp3445 };
        if ($tmp3466.value) {
        {
            panda$collections$Array* $tmp3468 = (panda$collections$Array*) malloc(40);
            $tmp3468->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3468->refCount.value = 1;
            panda$collections$Array$init($tmp3468);
            children3467 = $tmp3468;
            panda$collections$Array$add$panda$collections$Array$T(children3467, ((panda$core$Object*) left3207));
            panda$collections$Array$add$panda$collections$Array$T(children3467, ((panda$core$Object*) right3208));
            org$pandalanguage$pandac$IRNode* $tmp3470 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3470->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3470->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3470, ((panda$core$Int64) { 1023 }), p_position, left3207->type, ((panda$core$Object*) p_op), ((panda$collections$ListView*) children3467));
            return $tmp3470;
        }
        }
        panda$core$String* $tmp3473 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
        panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3472, $tmp3473);
        panda$core$String* $tmp3476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3474, &$s3475);
        panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3476, ((panda$core$Object*) left3207->type));
        panda$core$String* $tmp3479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3477, &$s3478);
        panda$core$String* $tmp3480 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3479, ((panda$core$Object*) right3208->type));
        panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3480, &$s3481);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3482);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3484 = (panda$collections$Array*) malloc(40);
    $tmp3484->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3484->refCount.value = 1;
    panda$collections$Array$init($tmp3484);
    children3483 = $tmp3484;
    panda$core$Bit $tmp3488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3207->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3487 = $tmp3488.value;
    if ($tmp3487) goto $l3489;
    panda$core$Bit $tmp3490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3207->kind, ((panda$core$Int64) { 1032 }));
    $tmp3487 = $tmp3490.value;
    $l3489:;
    panda$core$Bit $tmp3491 = { $tmp3487 };
    bool $tmp3486 = $tmp3491.value;
    if (!$tmp3486) goto $l3492;
    panda$core$Bit $tmp3494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3208->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3493 = $tmp3494.value;
    if ($tmp3493) goto $l3495;
    panda$core$Bit $tmp3496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3208->kind, ((panda$core$Int64) { 1032 }));
    $tmp3493 = $tmp3496.value;
    $l3495:;
    panda$core$Bit $tmp3497 = { $tmp3493 };
    $tmp3486 = $tmp3497.value;
    $l3492:;
    panda$core$Bit $tmp3498 = { $tmp3486 };
    if ($tmp3498.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3499 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3207, p_op, right3208);
        return $tmp3499;
    }
    }
    panda$core$Bit $tmp3501 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left3207->type);
    bool $tmp3500 = $tmp3501.value;
    if (!$tmp3500) goto $l3502;
    panda$core$Int64$nullable $tmp3503 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3208, left3207->type);
    $tmp3500 = ((panda$core$Bit) { $tmp3503.nonnull }).value;
    $l3502:;
    panda$core$Bit $tmp3504 = { $tmp3500 };
    if ($tmp3504.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3505 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3208, left3207->type);
        right3208 = $tmp3505;
        PANDA_ASSERT(((panda$core$Bit) { right3208 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children3483, ((panda$core$Object*) left3207));
        panda$collections$Array$add$panda$collections$Array$T(children3483, ((panda$core$Object*) right3208));
        {
            $match$2495_133507 = p_op;
            panda$core$Bit $tmp3513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133507->$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp3512 = $tmp3513.value;
            if ($tmp3512) goto $l3514;
            panda$core$Bit $tmp3515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133507->$rawValue, ((panda$core$Int64) { 59 }));
            $tmp3512 = $tmp3515.value;
            $l3514:;
            panda$core$Bit $tmp3516 = { $tmp3512 };
            bool $tmp3511 = $tmp3516.value;
            if ($tmp3511) goto $l3517;
            panda$core$Bit $tmp3518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133507->$rawValue, ((panda$core$Int64) { 63 }));
            $tmp3511 = $tmp3518.value;
            $l3517:;
            panda$core$Bit $tmp3519 = { $tmp3511 };
            bool $tmp3510 = $tmp3519.value;
            if ($tmp3510) goto $l3520;
            panda$core$Bit $tmp3521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133507->$rawValue, ((panda$core$Int64) { 65 }));
            $tmp3510 = $tmp3521.value;
            $l3520:;
            panda$core$Bit $tmp3522 = { $tmp3510 };
            bool $tmp3509 = $tmp3522.value;
            if ($tmp3509) goto $l3523;
            panda$core$Bit $tmp3524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133507->$rawValue, ((panda$core$Int64) { 62 }));
            $tmp3509 = $tmp3524.value;
            $l3523:;
            panda$core$Bit $tmp3525 = { $tmp3509 };
            bool $tmp3508 = $tmp3525.value;
            if ($tmp3508) goto $l3526;
            panda$core$Bit $tmp3527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2495_133507->$rawValue, ((panda$core$Int64) { 64 }));
            $tmp3508 = $tmp3527.value;
            $l3526:;
            panda$core$Bit $tmp3528 = { $tmp3508 };
            if ($tmp3528.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3529 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3506 = $tmp3529;
            }
            }
            else {
            {
                resultType3506 = left3207->type;
            }
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3530 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3530->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3530->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3530, ((panda$core$Int64) { 1023 }), p_position, resultType3506, ((panda$core$Object*) p_op), ((panda$collections$ListView*) children3483));
        return $tmp3530;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3483, ((panda$core$Object*) right3208));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3533 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3534 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left3207, $tmp3533, ((panda$collections$ListView*) children3483));
    result3532 = $tmp3534;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3532 == NULL }).value) {
    {
        panda$collections$Array$clear(children3483);
        panda$collections$Array$add$panda$collections$Array$T(children3483, ((panda$core$Object*) left3207));
        org$pandalanguage$pandac$IRNode* $tmp3536 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3208);
        resolved3535 = $tmp3536;
        bool $tmp3537 = ((panda$core$Bit) { resolved3535 != NULL }).value;
        if (!$tmp3537) goto $l3538;
        panda$core$Bit $tmp3539 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved3535->type);
        $tmp3537 = $tmp3539.value;
        $l3538:;
        panda$core$Bit $tmp3540 = { $tmp3537 };
        if ($tmp3540.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children3483, ((panda$core$Object*) resolved3535));
            org$pandalanguage$pandac$IRNode* $tmp3542 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3542->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3542->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3544 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3542, ((panda$core$Int64) { 1001 }), resolved3535->position, $tmp3544, resolved3535->type);
            target3541 = $tmp3542;
            panda$core$String* $tmp3545 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3546 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3541, $tmp3545, ((panda$collections$ListView*) children3483));
            result3532 = $tmp3546;
        }
        }
    }
    }
    return result3532;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3547;
    org$pandalanguage$pandac$IRNode* right3550;
    panda$core$Object* $tmp3548 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3549 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3548));
    left3547 = $tmp3549;
    if (((panda$core$Bit) { left3547 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3551 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3552 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3551));
    right3550 = $tmp3552;
    if (((panda$core$Bit) { right3550 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3553 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left3547, ((org$pandalanguage$pandac$parser$Token$Kind*) p_b->payload), right3550);
    return $tmp3553;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3557;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp3554 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3554;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp3555 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3556 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3555, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3556.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3557, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3558 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3557);
            return ((panda$collections$ListView*) $tmp3558);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp3559 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3560 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3559));
            return $tmp3560;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3561 = (panda$collections$Array*) malloc(40);
            $tmp3561->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3561->refCount.value = 1;
            panda$collections$Array$init($tmp3561);
            return ((panda$collections$ListView*) $tmp3561);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3563.value) {
        {
            panda$collections$ListView* $tmp3564 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3564;
        }
        }
        panda$collections$ListView* $tmp3565 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3565;
    }
    }
    panda$collections$Array* $tmp3566 = (panda$collections$Array*) malloc(40);
    $tmp3566->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3566->refCount.value = 1;
    panda$collections$Array$init($tmp3566);
    return ((panda$collections$ListView*) $tmp3566);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$parser$Token$Kind* p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name3569;
    org$pandalanguage$pandac$ClassDecl* cl3571;
    org$pandalanguage$pandac$Symbol* s3573;
    org$pandalanguage$pandac$MethodDecl* m3576;
    panda$collections$Iterator* test$Iter3581;
    org$pandalanguage$pandac$MethodDecl* test3593;
    org$pandalanguage$pandac$MethodRef* ref3605;
    panda$collections$Array* children3609;
    org$pandalanguage$pandac$IRNode* methodRef3612;
    org$pandalanguage$pandac$Position $tmp3618;
    panda$collections$Array* args3619;
    org$pandalanguage$pandac$parser$Token$Kind* $match$2596_93623;
    panda$collections$Array* children3637;
    panda$collections$Array* children3650;
    org$pandalanguage$pandac$IRNode* coerced3662;
    panda$collections$Array* children3665;
    panda$core$Bit $tmp3568 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3568.value) {
    {
        panda$core$String* $tmp3570 = org$pandalanguage$pandac$Compiler$operatorName$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$String(p_op);
        name3569 = $tmp3570;
        org$pandalanguage$pandac$ClassDecl* $tmp3572 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3571 = $tmp3572;
        if (((panda$core$Bit) { cl3571 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3574 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3571);
        org$pandalanguage$pandac$Symbol* $tmp3575 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3574, name3569);
        s3573 = $tmp3575;
        if (((panda$core$Bit) { s3573 != NULL }).value) {
        {
            m3576 = NULL;
            switch (s3573->kind.value) {
                case 204:
                {
                    m3576 = ((org$pandalanguage$pandac$MethodDecl*) s3573);
                    panda$core$Int64 $tmp3577 = panda$collections$Array$get_count$R$panda$core$Int64(m3576->parameters);
                    panda$core$Bit $tmp3578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3577, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3578.value);
                    panda$core$Bit $tmp3579 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3576->annotations);
                    panda$core$Bit $tmp3580 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3579);
                    PANDA_ASSERT($tmp3580.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3582 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3573)->methods)->$class->itable;
                        while ($tmp3582->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3582 = $tmp3582->next;
                        }
                        $fn3584 $tmp3583 = $tmp3582->methods[0];
                        panda$collections$Iterator* $tmp3585 = $tmp3583(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3573)->methods));
                        test$Iter3581 = $tmp3585;
                        $l3586:;
                        ITable* $tmp3588 = test$Iter3581->$class->itable;
                        while ($tmp3588->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3588 = $tmp3588->next;
                        }
                        $fn3590 $tmp3589 = $tmp3588->methods[0];
                        panda$core$Bit $tmp3591 = $tmp3589(test$Iter3581);
                        panda$core$Bit $tmp3592 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3591);
                        if (!$tmp3592.value) goto $l3587;
                        {
                            ITable* $tmp3594 = test$Iter3581->$class->itable;
                            while ($tmp3594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3594 = $tmp3594->next;
                            }
                            $fn3596 $tmp3595 = $tmp3594->methods[1];
                            panda$core$Object* $tmp3597 = $tmp3595(test$Iter3581);
                            test3593 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3597);
                            panda$core$Bit $tmp3599 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3593->annotations);
                            panda$core$Bit $tmp3600 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3599);
                            bool $tmp3598 = $tmp3600.value;
                            if (!$tmp3598) goto $l3601;
                            panda$core$Int64 $tmp3602 = panda$collections$Array$get_count$R$panda$core$Int64(test3593->parameters);
                            panda$core$Bit $tmp3603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3602, ((panda$core$Int64) { 0 }));
                            $tmp3598 = $tmp3603.value;
                            $l3601:;
                            panda$core$Bit $tmp3604 = { $tmp3598 };
                            if ($tmp3604.value) {
                            {
                                m3576 = test3593;
                                goto $l3587;
                            }
                            }
                        }
                        goto $l3586;
                        $l3587:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3576 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3576);
                org$pandalanguage$pandac$MethodRef* $tmp3606 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3606->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3606->refCount.value = 1;
                panda$collections$ListView* $tmp3608 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3606, m3576, $tmp3608);
                ref3605 = $tmp3606;
                panda$collections$Array* $tmp3610 = (panda$collections$Array*) malloc(40);
                $tmp3610->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3610->refCount.value = 1;
                panda$collections$Array$init($tmp3610);
                children3609 = $tmp3610;
                panda$collections$Array$add$panda$collections$Array$T(children3609, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3613 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3613->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3613->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3615 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3615->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3615->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3618);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3615, &$s3617, ((panda$core$Int64) { 16 }), $tmp3618, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3613, ((panda$core$Int64) { 1002 }), p_position, $tmp3615, ((panda$core$Object*) ref3605), ((panda$collections$ListView*) children3609));
                methodRef3612 = $tmp3613;
                panda$collections$Array* $tmp3620 = (panda$collections$Array*) malloc(40);
                $tmp3620->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3620->refCount.value = 1;
                panda$collections$Array$init($tmp3620);
                args3619 = $tmp3620;
                org$pandalanguage$pandac$IRNode* $tmp3622 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3612, ((panda$collections$ListView*) args3619));
                return $tmp3622;
            }
            }
        }
        }
    }
    }
    {
        $match$2596_93623 = p_op;
        panda$core$Bit $tmp3624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2596_93623->$rawValue, ((panda$core$Int64) { 52 }));
        if ($tmp3624.value) {
        {
            switch (p_base->kind.value) {
                case 1004:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3625 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3625->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3625->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3627 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3625, ((panda$core$Int64) { 1032 }), p_position, $tmp3627, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3625;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3628 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3628->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3628->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3630 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3628, ((panda$core$Int64) { 1004 }), p_position, $tmp3630, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3628;
                }
                break;
                case 1045:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3631 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3631->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3631->refCount.value = 1;
                    panda$core$Real64 $tmp3633 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$Type* $tmp3634 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type($tmp3633);
                    panda$core$Real64 $tmp3635 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3631, ((panda$core$Int64) { 1045 }), p_position, $tmp3634, $tmp3635);
                    return $tmp3631;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3636 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3636.value) {
                    {
                        panda$collections$Array* $tmp3638 = (panda$collections$Array*) malloc(40);
                        $tmp3638->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3638->refCount.value = 1;
                        panda$collections$Array$init($tmp3638);
                        children3637 = $tmp3638;
                        panda$collections$Array$add$panda$collections$Array$T(children3637, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3640 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3640->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3640->refCount.value = 1;
                        org$pandalanguage$pandac$parser$Token$Kind* $tmp3642 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                        $tmp3642->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                        $tmp3642->refCount.value = 1;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3642, ((panda$core$Int64) { 52 }));
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3640, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3642), ((panda$collections$ListView*) children3637));
                        return $tmp3640;
                    }
                    }
                }
            }
            panda$core$String* $tmp3645 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3644, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3645, &$s3646);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3647);
            return NULL;
        }
        }
        else {
        panda$core$Bit $tmp3648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2596_93623->$rawValue, ((panda$core$Int64) { 50 }));
        if ($tmp3648.value) {
        {
            panda$core$Bit $tmp3649 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3649.value) {
            {
                panda$collections$Array* $tmp3651 = (panda$collections$Array*) malloc(40);
                $tmp3651->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3651->refCount.value = 1;
                panda$collections$Array$init($tmp3651);
                children3650 = $tmp3651;
                panda$collections$Array$add$panda$collections$Array$T(children3650, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3653 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3653->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3653->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp3655 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                $tmp3655->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                $tmp3655->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3655, ((panda$core$Int64) { 50 }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3653, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3655), ((panda$collections$ListView*) children3650));
                return $tmp3653;
            }
            }
            else {
            {
                panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3657, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3658, &$s3659);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3660);
                return NULL;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2596_93623->$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp3661.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3663 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3664 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3663);
            coerced3662 = $tmp3664;
            if (((panda$core$Bit) { coerced3662 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3666 = (panda$collections$Array*) malloc(40);
            $tmp3666->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3666->refCount.value = 1;
            panda$collections$Array$init($tmp3666);
            children3665 = $tmp3666;
            panda$collections$Array$add$panda$collections$Array$T(children3665, ((panda$core$Object*) coerced3662));
            org$pandalanguage$pandac$IRNode* $tmp3668 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3668->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3668->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3670 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp3670->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp3670->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp3670, ((panda$core$Int64) { 49 }));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3668, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) $tmp3670), ((panda$collections$ListView*) children3665));
            return $tmp3668;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_p) {
    org$pandalanguage$pandac$IRNode* base3675;
    panda$core$Bit $tmp3672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3672.value);
    panda$core$Int64 $tmp3673 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3673, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3674.value);
    panda$core$Object* $tmp3676 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3677 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3676));
    base3675 = $tmp3677;
    if (((panda$core$Bit) { base3675 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3678 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$parser$Token$Kind*) p_p->payload), base3675, p_p->position);
    return $tmp3678;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3680;
    panda$collections$Array* args3683;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3686;
    org$pandalanguage$pandac$IRNode* arg3701;
    panda$core$Bit $tmp3679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3679.value);
    panda$core$Object* $tmp3681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3682 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3681));
    m3680 = $tmp3682;
    if (((panda$core$Bit) { m3680 != NULL }).value) {
    {
        panda$collections$Array* $tmp3684 = (panda$collections$Array*) malloc(40);
        $tmp3684->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3684->refCount.value = 1;
        panda$collections$Array$init($tmp3684);
        args3683 = $tmp3684;
        panda$core$Int64 $tmp3687 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3686, ((panda$core$Int64) { 1 }), $tmp3687, ((panda$core$Bit) { false }));
        int64_t $tmp3689 = $tmp3686.min.value;
        panda$core$Int64 i3688 = { $tmp3689 };
        int64_t $tmp3691 = $tmp3686.max.value;
        bool $tmp3692 = $tmp3686.inclusive.value;
        if ($tmp3692) goto $l3699; else goto $l3700;
        $l3699:;
        if ($tmp3689 <= $tmp3691) goto $l3693; else goto $l3695;
        $l3700:;
        if ($tmp3689 < $tmp3691) goto $l3693; else goto $l3695;
        $l3693:;
        {
            panda$core$Object* $tmp3702 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3688);
            org$pandalanguage$pandac$IRNode* $tmp3703 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3702));
            arg3701 = $tmp3703;
            if (((panda$core$Bit) { arg3701 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3683, ((panda$core$Object*) arg3701));
        }
        $l3696:;
        int64_t $tmp3705 = $tmp3691 - i3688.value;
        if ($tmp3692) goto $l3706; else goto $l3707;
        $l3706:;
        if ((uint64_t) $tmp3705 >= 1) goto $l3704; else goto $l3695;
        $l3707:;
        if ((uint64_t) $tmp3705 > 1) goto $l3704; else goto $l3695;
        $l3704:;
        i3688.value += 1;
        goto $l3693;
        $l3695:;
        org$pandalanguage$pandac$IRNode* $tmp3710 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3680, ((panda$collections$ListView*) args3683));
        return $tmp3710;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3711;
    panda$core$String* name3713;
    org$pandalanguage$pandac$ClassDecl* cl3721;
    org$pandalanguage$pandac$SymbolTable* st3740;
    org$pandalanguage$pandac$Symbol* s3742;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3712 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3711 = $tmp3712;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3715 = (($fn3714) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3715, &$s3716);
            panda$core$String* $tmp3718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3717, p_name);
            panda$core$String* $tmp3720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3718, &$s3719);
            name3713 = $tmp3720;
            org$pandalanguage$pandac$ClassDecl* $tmp3722 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3713);
            cl3721 = $tmp3722;
            if (((panda$core$Bit) { cl3721 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3723 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3723->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3723->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3725 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3726 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3721);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3723, ((panda$core$Int64) { 1001 }), p_position, $tmp3725, $tmp3726);
                return $tmp3723;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3727 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3727->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3727->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3729 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3727, ((panda$core$Int64) { 1037 }), p_position, $tmp3729, name3713);
            return $tmp3727;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3730 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3730));
            panda$core$Object* $tmp3731 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3732 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3731)->rawSuper);
            cl3711 = $tmp3732;
        }
        break;
        default:
        {
            panda$core$Bit $tmp3733 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
            panda$core$Bit $tmp3734 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3733);
            if ($tmp3734.value) {
            {
                panda$core$String* $tmp3736 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3735, ((panda$core$Object*) p_base->type));
                panda$core$String* $tmp3738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3736, &$s3737);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3738);
                return NULL;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp3739 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3711 = $tmp3739;
        }
    }
    if (((panda$core$Bit) { cl3711 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3741 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3711);
    st3740 = $tmp3741;
    org$pandalanguage$pandac$Symbol* $tmp3743 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3740, p_name);
    s3742 = $tmp3743;
    if (((panda$core$Bit) { s3742 == NULL }).value) {
    {
        panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3744, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, &$s3746);
        panda$core$String* $tmp3748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3747, p_name);
        panda$core$String* $tmp3750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3748, &$s3749);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3750);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3751 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3742, st3740);
    return $tmp3751;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3755;
    panda$core$Bit $tmp3752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3752.value);
    panda$core$Int64 $tmp3753 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3753, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3754.value);
    panda$core$Object* $tmp3756 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3757 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3756));
    base3755 = $tmp3757;
    if (((panda$core$Bit) { base3755 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3759 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3755->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3758 = $tmp3759.value;
    if (!$tmp3758) goto $l3760;
    panda$core$Bit $tmp3761 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3755->kind, ((panda$core$Int64) { 1024 }));
    $tmp3758 = $tmp3761.value;
    $l3760:;
    panda$core$Bit $tmp3762 = { $tmp3758 };
    if ($tmp3762.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3763 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3755);
        base3755 = $tmp3763;
    }
    }
    if (((panda$core$Bit) { base3755 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3764 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3755, ((panda$core$String*) p_d->payload));
    return $tmp3764;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3766;
    panda$core$Bit $tmp3765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3765.value);
    org$pandalanguage$pandac$Symbol* $tmp3767 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3766 = $tmp3767;
    if (((panda$core$Bit) { s3766 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3768 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3766 = ((org$pandalanguage$pandac$Symbol*) $tmp3768);
    }
    }
    if (((panda$core$Bit) { s3766 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3769 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3766, self->symbolTable);
        return $tmp3769;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3770 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3770->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3770->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3772 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3770, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3772, ((panda$core$String*) p_i->payload));
    return $tmp3770;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3773;
    org$pandalanguage$pandac$Type* $tmp3774 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3775 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3774);
    resolved3773 = $tmp3775;
    if (((panda$core$Bit) { resolved3773 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3776 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3776->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3776->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3778 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3776, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3778, resolved3773);
    return $tmp3776;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3786;
    org$pandalanguage$pandac$IRNode* end3794;
    org$pandalanguage$pandac$IRNode* step3802;
    panda$collections$Array* children3809;
    org$pandalanguage$pandac$Position $tmp3817;
    panda$core$Bit $tmp3780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3779 = $tmp3780.value;
    if ($tmp3779) goto $l3781;
    panda$core$Bit $tmp3782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3779 = $tmp3782.value;
    $l3781:;
    panda$core$Bit $tmp3783 = { $tmp3779 };
    PANDA_ASSERT($tmp3783.value);
    panda$core$Int64 $tmp3784 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3784, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3785.value);
    panda$core$Object* $tmp3787 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3787)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3788.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3789 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3789->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3789->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3791 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3789, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3791);
        start3786 = $tmp3789;
    }
    }
    else {
    {
        panda$core$Object* $tmp3792 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3793 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3792));
        start3786 = $tmp3793;
        if (((panda$core$Bit) { start3786 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3795 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3795)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3796.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3797 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3797->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3797->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3799 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3797, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3799);
        end3794 = $tmp3797;
    }
    }
    else {
    {
        panda$core$Object* $tmp3800 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3801 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3800));
        end3794 = $tmp3801;
        if (((panda$core$Bit) { end3794 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3803 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3803)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3804.value) {
    {
        step3802 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3805 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3806 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3805));
        step3802 = $tmp3806;
        if (((panda$core$Bit) { step3802 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(step3802->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3807.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, step3802->position, &$s3808);
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3810 = (panda$collections$Array*) malloc(40);
    $tmp3810->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3810->refCount.value = 1;
    panda$collections$Array$init($tmp3810);
    children3809 = $tmp3810;
    panda$collections$Array$add$panda$collections$Array$T(children3809, ((panda$core$Object*) start3786));
    panda$collections$Array$add$panda$collections$Array$T(children3809, ((panda$core$Object*) end3794));
    if (((panda$core$Bit) { step3802 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3809, ((panda$core$Object*) step3802));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3812 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3812->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3812->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3814 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3814->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3814->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3817);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3814, &$s3816, ((panda$core$Int64) { 17 }), $tmp3817, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    panda$core$Bit$wrapper* $tmp3819;
    $tmp3819 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp3819->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp3819->refCount = 1;
    $tmp3819->value = $tmp3818;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3812, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3814, ((panda$core$Object*) $tmp3819), ((panda$collections$ListView*) children3809));
    return $tmp3812;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3820 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3820->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3820->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3822 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3820, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3822, ((panda$core$String*) p_s->payload));
    return $tmp3820;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3827;
    org$pandalanguage$pandac$ClassDecl* cl3828;
    panda$collections$Array* subtypes3835;
    panda$core$MutableString* name3839;
    panda$core$Char8 $tmp3842;
    panda$core$String* separator3843;
    panda$collections$Iterator* p$Iter3845;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3857;
    panda$collections$Array* pType3862;
    panda$core$String* pName3865;
    panda$core$Char8 $tmp3875;
    panda$core$Bit $tmp3823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3823.value);
    panda$core$Object* $tmp3824 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3825 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3824)->annotations);
    if ($tmp3825.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3826);
        return NULL;
    }
    }
    panda$core$Object* $tmp3829 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3828 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3829);
    ITable* $tmp3830 = ((panda$collections$CollectionView*) cl3828->parameters)->$class->itable;
    while ($tmp3830->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3830 = $tmp3830->next;
    }
    $fn3832 $tmp3831 = $tmp3830->methods[0];
    panda$core$Int64 $tmp3833 = $tmp3831(((panda$collections$CollectionView*) cl3828->parameters));
    panda$core$Bit $tmp3834 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3833, ((panda$core$Int64) { 0 }));
    if ($tmp3834.value) {
    {
        panda$collections$Array* $tmp3836 = (panda$collections$Array*) malloc(40);
        $tmp3836->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3836->refCount.value = 1;
        panda$collections$Array$init($tmp3836);
        subtypes3835 = $tmp3836;
        org$pandalanguage$pandac$Type* $tmp3838 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3828);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3835, ((panda$core$Object*) $tmp3838));
        panda$core$MutableString* $tmp3840 = (panda$core$MutableString*) malloc(48);
        $tmp3840->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3840->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3840, ((org$pandalanguage$pandac$Symbol*) cl3828)->name);
        name3839 = $tmp3840;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3842, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3839, $tmp3842);
        separator3843 = &$s3844;
        {
            ITable* $tmp3846 = ((panda$collections$Iterable*) cl3828->parameters)->$class->itable;
            while ($tmp3846->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3846 = $tmp3846->next;
            }
            $fn3848 $tmp3847 = $tmp3846->methods[0];
            panda$collections$Iterator* $tmp3849 = $tmp3847(((panda$collections$Iterable*) cl3828->parameters));
            p$Iter3845 = $tmp3849;
            $l3850:;
            ITable* $tmp3852 = p$Iter3845->$class->itable;
            while ($tmp3852->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3852 = $tmp3852->next;
            }
            $fn3854 $tmp3853 = $tmp3852->methods[0];
            panda$core$Bit $tmp3855 = $tmp3853(p$Iter3845);
            panda$core$Bit $tmp3856 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3855);
            if (!$tmp3856.value) goto $l3851;
            {
                ITable* $tmp3858 = p$Iter3845->$class->itable;
                while ($tmp3858->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3858 = $tmp3858->next;
                }
                $fn3860 $tmp3859 = $tmp3858->methods[1];
                panda$core$Object* $tmp3861 = $tmp3859(p$Iter3845);
                p3857 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3861);
                panda$collections$Array* $tmp3863 = (panda$collections$Array*) malloc(40);
                $tmp3863->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3863->refCount.value = 1;
                panda$collections$Array$init($tmp3863);
                pType3862 = $tmp3863;
                panda$collections$Array$add$panda$collections$Array$T(pType3862, ((panda$core$Object*) p3857->bound));
                panda$core$String* $tmp3866 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3828)->name);
                panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3866, &$s3867);
                panda$core$String* $tmp3869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3868, ((org$pandalanguage$pandac$Symbol*) p3857)->name);
                panda$core$String* $tmp3871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3869, &$s3870);
                pName3865 = $tmp3871;
                panda$core$MutableString$append$panda$core$String(name3839, separator3843);
                panda$core$MutableString$append$panda$core$String(name3839, pName3865);
                org$pandalanguage$pandac$Type* $tmp3872 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3872->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3872->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3872, p3857);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3835, ((panda$core$Object*) $tmp3872));
                separator3843 = &$s3874;
            }
            goto $l3850;
            $l3851:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3875, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3839, $tmp3875);
        org$pandalanguage$pandac$Type* $tmp3876 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3876->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3876->refCount.value = 1;
        panda$core$String* $tmp3878 = panda$core$MutableString$finish$R$panda$core$String(name3839);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3876, $tmp3878, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3835), ((panda$core$Bit) { true }));
        type3827 = $tmp3876;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3879 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3828);
        type3827 = $tmp3879;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3880 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3880->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3880->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3880, ((panda$core$Int64) { 1025 }), p_s->position, type3827);
    return $tmp3880;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3886;
    panda$core$Bit $tmp3882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3882.value);
    panda$core$Object* $tmp3883 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3884 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3883)->annotations);
    if ($tmp3884.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3885);
        return NULL;
    }
    }
    panda$core$Object* $tmp3887 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3886 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3887);
    PANDA_ASSERT(cl3886->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3888 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3888->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3888->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3888, ((panda$core$Int64) { 1024 }), p_s->position, cl3886->rawSuper);
    return $tmp3888;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3890;
    panda$core$String$Index$nullable index3892;
    org$pandalanguage$pandac$Type* type3899;
    org$pandalanguage$pandac$IRNode* base3901;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3904;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3907;
    org$pandalanguage$pandac$Type* type3911;
    org$pandalanguage$pandac$IRNode* $tmp3891 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3890 = $tmp3891;
    if (((panda$core$Bit) { value3890 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3894 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3893);
    index3892 = $tmp3894;
    panda$core$Bit $tmp3896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3895 = $tmp3896.value;
    if (!$tmp3895) goto $l3897;
    $tmp3895 = ((panda$core$Bit) { index3892.nonnull }).value;
    $l3897:;
    panda$core$Bit $tmp3898 = { $tmp3895 };
    if ($tmp3898.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3900 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3899 = $tmp3900;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3899 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3902 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3902->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3902->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3904, ((panda$core$String$Index$nullable) { .nonnull = false }), index3892, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3905 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3904);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3902, $tmp3905, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3906 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3902);
            base3901 = $tmp3906;
            if (((panda$core$Bit) { base3901 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3908 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3892.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3907, ((panda$core$String$Index$nullable) { $tmp3908, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3909 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3907);
            org$pandalanguage$pandac$IRNode* $tmp3910 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3901, $tmp3909);
            return $tmp3910;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3912 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3911 = $tmp3912;
    if (((panda$core$Bit) { type3911 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3913 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3890, type3911);
    if (((panda$core$Bit) { $tmp3913.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3914 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3890, type3911);
        return $tmp3914;
    }
    }
    panda$core$Bit $tmp3915 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3890, type3911);
    if ($tmp3915.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3916 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3890, p_position, ((panda$core$Bit) { true }), type3911);
        return $tmp3916;
    }
    }
    else {
    {
        panda$core$String* $tmp3918 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3917, ((panda$core$Object*) value3890->type));
        panda$core$String* $tmp3920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3918, &$s3919);
        panda$core$String* $tmp3922 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3921, ((panda$core$Object*) type3911));
        panda$core$String* $tmp3924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3922, &$s3923);
        panda$core$String* $tmp3925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3920, $tmp3924);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3925);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3926.value);
    panda$core$Int64 $tmp3927 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3927, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3928.value);
    panda$core$Object* $tmp3929 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3930 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3931 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3930));
    org$pandalanguage$pandac$IRNode* $tmp3932 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3929), $tmp3931);
    return $tmp3932;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3933.value);
    org$pandalanguage$pandac$IRNode* $tmp3934 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3934->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3934->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3936 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3934, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3936);
    return $tmp3934;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$Pair* cf3937;
    panda$collections$Array* children3943;
    org$pandalanguage$pandac$IRNode* base3946;
    cf3937 = ((org$pandalanguage$pandac$Pair*) p_f->payload);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, ((org$pandalanguage$pandac$ChoiceEntry*) cf3937->first));
    bool $tmp3938 = ((panda$core$Bit) { p_f->children != NULL }).value;
    if (!$tmp3938) goto $l3939;
    panda$core$Int64 $tmp3940 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3940, ((panda$core$Int64) { 1 }));
    $tmp3938 = $tmp3941.value;
    $l3939:;
    panda$core$Bit $tmp3942 = { $tmp3938 };
    PANDA_ASSERT($tmp3942.value);
    panda$collections$Array* $tmp3944 = (panda$collections$Array*) malloc(40);
    $tmp3944->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3944->refCount.value = 1;
    panda$collections$Array$init($tmp3944);
    children3943 = $tmp3944;
    panda$core$Object* $tmp3947 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3948 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3947));
    base3946 = $tmp3948;
    if (((panda$core$Bit) { base3946 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3943, ((panda$core$Object*) base3946));
    org$pandalanguage$pandac$IRNode* $tmp3949 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3949->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3949->refCount.value = 1;
    panda$core$Object* $tmp3951 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$ChoiceEntry*) cf3937->first)->fields, ((panda$core$Int64$wrapper*) cf3937->second)->value);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3949, ((panda$core$Int64) { 1047 }), p_f->position, ((org$pandalanguage$pandac$Type*) $tmp3951), ((panda$core$Object*) cf3937), ((panda$collections$ListView*) children3943));
    return $tmp3949;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3956;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3952 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3952;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3953 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3953->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3953->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3955 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3953, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3955, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3953;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3957 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3956 = $tmp3957;
            bool $tmp3958 = ((panda$core$Bit) { result3956 != NULL }).value;
            if (!$tmp3958) goto $l3959;
            org$pandalanguage$pandac$Type* $tmp3960 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3961 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3956->type, $tmp3960);
            $tmp3958 = $tmp3961.value;
            $l3959:;
            panda$core$Bit $tmp3962 = { $tmp3958 };
            if ($tmp3962.value) {
            {
                panda$core$Bit $tmp3963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3956->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3963.value);
                panda$core$String* $tmp3964 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3956->payload)->value);
                panda$core$String* $tmp3966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3964, &$s3965);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3956->position, $tmp3966);
                return NULL;
            }
            }
            return result3956;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3967 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3967;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3968 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3968;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3969 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3969->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3969->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3971 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3969, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3971, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3969;
        }
        break;
        case 157:
        {
            org$pandalanguage$pandac$IRNode* $tmp3972 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3972->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3972->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3974 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(((panda$core$Real64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3972, ((panda$core$Int64) { 1045 }), p_e->position, $tmp3974, ((panda$core$Real64$wrapper*) p_e->payload)->value);
            return $tmp3972;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3975 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3975;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3976 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3976;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3977 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3977;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3978 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3978;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3979 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3979;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3980 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3980;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3981 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3981;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3982 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3982;
        }
        break;
        case 158:
        {
            org$pandalanguage$pandac$IRNode* $tmp3983 = org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3983;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3985;
    panda$collections$Array* result3988;
    panda$collections$Iterator* stmt$Iter3991;
    org$pandalanguage$pandac$ASTNode* stmt4003;
    org$pandalanguage$pandac$IRNode* compiled4008;
    panda$core$Bit $tmp3984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3984.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3986 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3986->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3986->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3986, self->symbolTable);
    symbols3985 = $tmp3986;
    self->symbolTable = symbols3985;
    panda$collections$Array* $tmp3989 = (panda$collections$Array*) malloc(40);
    $tmp3989->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3989->refCount.value = 1;
    panda$collections$Array$init($tmp3989);
    result3988 = $tmp3989;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3992 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3992->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3992 = $tmp3992->next;
            }
            $fn3994 $tmp3993 = $tmp3992->methods[0];
            panda$collections$Iterator* $tmp3995 = $tmp3993(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3991 = $tmp3995;
            $l3996:;
            ITable* $tmp3998 = stmt$Iter3991->$class->itable;
            while ($tmp3998->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3998 = $tmp3998->next;
            }
            $fn4000 $tmp3999 = $tmp3998->methods[0];
            panda$core$Bit $tmp4001 = $tmp3999(stmt$Iter3991);
            panda$core$Bit $tmp4002 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4001);
            if (!$tmp4002.value) goto $l3997;
            {
                ITable* $tmp4004 = stmt$Iter3991->$class->itable;
                while ($tmp4004->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4004 = $tmp4004->next;
                }
                $fn4006 $tmp4005 = $tmp4004->methods[1];
                panda$core$Object* $tmp4007 = $tmp4005(stmt$Iter3991);
                stmt4003 = ((org$pandalanguage$pandac$ASTNode*) $tmp4007);
                org$pandalanguage$pandac$IRNode* $tmp4009 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt4003);
                compiled4008 = $tmp4009;
                if (((panda$core$Bit) { compiled4008 == NULL }).value) {
                {
                    panda$core$Object* $tmp4010 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3985->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4010);
                    return NULL;
                }
                }
                panda$core$Bit $tmp4011 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled4008->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp4011.value);
                panda$collections$Array$add$panda$collections$Array$T(result3988, ((panda$core$Object*) compiled4008));
            }
            goto $l3996;
            $l3997:;
        }
    }
    }
    panda$core$Object* $tmp4012 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3985->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4012);
    org$pandalanguage$pandac$IRNode* $tmp4013 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4013->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4013->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4013, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3988));
    return $tmp4013;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test4023;
    org$pandalanguage$pandac$IRNode* ifTrue4028;
    panda$collections$Array* children4031;
    org$pandalanguage$pandac$IRNode* ifFalse4036;
    panda$core$Bit $tmp4015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp4015.value);
    panda$core$Int64 $tmp4017 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp4018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4017, ((panda$core$Int64) { 2 }));
    bool $tmp4016 = $tmp4018.value;
    if ($tmp4016) goto $l4019;
    panda$core$Int64 $tmp4020 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp4021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4020, ((panda$core$Int64) { 3 }));
    $tmp4016 = $tmp4021.value;
    $l4019:;
    panda$core$Bit $tmp4022 = { $tmp4016 };
    PANDA_ASSERT($tmp4022.value);
    panda$core$Object* $tmp4024 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4025 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4024));
    org$pandalanguage$pandac$Type* $tmp4026 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4027 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4025, $tmp4026);
    test4023 = $tmp4027;
    if (((panda$core$Bit) { test4023 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4029 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4030 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4029));
    ifTrue4028 = $tmp4030;
    if (((panda$core$Bit) { ifTrue4028 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4032 = (panda$collections$Array*) malloc(40);
    $tmp4032->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4032->refCount.value = 1;
    panda$collections$Array$init($tmp4032);
    children4031 = $tmp4032;
    panda$collections$Array$add$panda$collections$Array$T(children4031, ((panda$core$Object*) test4023));
    panda$collections$Array$add$panda$collections$Array$T(children4031, ((panda$core$Object*) ifTrue4028));
    panda$core$Int64 $tmp4034 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp4035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4034, ((panda$core$Int64) { 3 }));
    if ($tmp4035.value) {
    {
        panda$core$Object* $tmp4037 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp4038 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4037));
        ifFalse4036 = $tmp4038;
        if (((panda$core$Bit) { ifFalse4036 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4031, ((panda$core$Object*) ifFalse4036));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4039 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4039->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4039->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4039, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children4031));
    return $tmp4039;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* type14045;
    org$pandalanguage$pandac$Type* type24048;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4059;
    panda$core$Bit $tmp4041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4041.value) {
    {
        panda$core$Object* $tmp4042 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4043 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$Type*) $tmp4042));
        return $tmp4043;
    }
    }
    panda$core$Bit $tmp4044 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_type);
    if ($tmp4044.value) {
    {
        panda$core$Object* $tmp4046 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp4047 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp4046));
        type14045 = $tmp4047;
        panda$core$Object* $tmp4049 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 2 }));
        type24048 = ((org$pandalanguage$pandac$Type*) $tmp4049);
        panda$core$Bit $tmp4050 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(type14045, type24048);
        if ($tmp4050.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$Bit $tmp4053 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(type14045);
        bool $tmp4052 = $tmp4053.value;
        if (!$tmp4052) goto $l4054;
        panda$core$Bit $tmp4056 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type24048)->name, &$s4055);
        $tmp4052 = $tmp4056.value;
        $l4054:;
        panda$core$Bit $tmp4057 = { $tmp4052 };
        bool $tmp4051 = $tmp4057.value;
        if (!$tmp4051) goto $l4058;
        panda$core$Int64 $tmp4061 = panda$core$String$length$R$panda$core$Int64(&$s4060);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4059, ((panda$core$Int64$nullable) { $tmp4061, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp4062 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) type24048)->name, $tmp4059);
        panda$core$Bit $tmp4063 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type14045)->name, $tmp4062);
        $tmp4051 = $tmp4063.value;
        $l4058:;
        panda$core$Bit $tmp4064 = { $tmp4051 };
        if ($tmp4064.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$String* $tmp4066 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4065, ((panda$core$Object*) p_type));
        panda$core$String* $tmp4068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4066, &$s4067);
        panda$core$String* $tmp4070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4068, &$s4069);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp4070);
        return ((panda$core$Bit) { false });
    }
    }
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType4071;
    org$pandalanguage$pandac$IRNode* list4072;
    org$pandalanguage$pandac$Type* t4084;
    org$pandalanguage$pandac$Type* listType4117;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4149;
    org$pandalanguage$pandac$IRNode* body4153;
    panda$collections$Array* children4155;
    panda$core$Bit $tmp4075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp4074 = $tmp4075.value;
    if (!$tmp4074) goto $l4076;
    $tmp4074 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l4076:;
    panda$core$Bit $tmp4077 = { $tmp4074 };
    bool $tmp4073 = $tmp4077.value;
    if (!$tmp4073) goto $l4078;
    panda$core$Int64 $tmp4079 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp4080 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4079, ((panda$core$Int64) { 0 }));
    $tmp4073 = $tmp4080.value;
    $l4078:;
    panda$core$Bit $tmp4081 = { $tmp4073 };
    if ($tmp4081.value) {
    {
        panda$core$Int64 $tmp4082 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp4083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4082, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4083.value);
        panda$core$Object* $tmp4085 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp4086 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp4085));
        org$pandalanguage$pandac$Type* $tmp4087 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp4086);
        t4084 = $tmp4087;
        panda$core$Bit $tmp4088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4084->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4088.value) {
        {
            panda$core$String* $tmp4090 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4089, ((panda$core$Object*) t4084));
            panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4090, &$s4091);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp4092);
            return NULL;
        }
        }
        panda$core$Bit $tmp4093 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(t4084);
        panda$core$Bit $tmp4094 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4093);
        if ($tmp4094.value) {
        {
            panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4095, ((panda$core$Object*) t4084));
            panda$core$String* $tmp4098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, &$s4097);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp4098);
            return NULL;
        }
        }
        panda$core$Bit $tmp4099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp4099.value) {
        {
            panda$core$Int64 $tmp4100 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp4101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4100, ((panda$core$Int64) { 2 }));
            if ($tmp4101.value) {
            {
                org$pandalanguage$pandac$Type* $tmp4102 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4084);
                org$pandalanguage$pandac$IRNode* $tmp4103 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4102);
                list4072 = $tmp4103;
            }
            }
            else {
            {
                panda$core$Int64 $tmp4104 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp4105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4104, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp4105.value);
                org$pandalanguage$pandac$Type* $tmp4106 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4084);
                org$pandalanguage$pandac$IRNode* $tmp4107 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4106);
                list4072 = $tmp4107;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp4108 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp4108.value) {
        {
            org$pandalanguage$pandac$Type* $tmp4109 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4084);
            org$pandalanguage$pandac$IRNode* $tmp4110 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4109);
            list4072 = $tmp4110;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp4111 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4084);
        panda$core$Int64$nullable $tmp4112 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp4111);
        if (((panda$core$Bit) { $tmp4112.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp4113 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4084);
            org$pandalanguage$pandac$IRNode* $tmp4114 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4113);
            list4072 = $tmp4114;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp4115 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t4084);
            org$pandalanguage$pandac$IRNode* $tmp4116 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp4115);
            list4072 = $tmp4116;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4118 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_rawList);
        listType4117 = $tmp4118;
        panda$core$Bit $tmp4120 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType4117);
        bool $tmp4119 = $tmp4120.value;
        if ($tmp4119) goto $l4121;
        panda$core$Bit $tmp4122 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(listType4117);
        $tmp4119 = $tmp4122.value;
        $l4121:;
        panda$core$Bit $tmp4123 = { $tmp4119 };
        PANDA_ASSERT($tmp4123.value);
        panda$core$Object* $tmp4124 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType4117->subtypes, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp4125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4124)->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4125.value) {
        {
            panda$core$Bit $tmp4126 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType4117);
            if ($tmp4126.value) {
            {
                panda$core$Object* $tmp4127 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType4117->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp4128 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp4127));
                org$pandalanguage$pandac$Type* $tmp4129 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp4128);
                listType4117 = $tmp4129;
            }
            }
            else {
            {
                panda$core$Object* $tmp4130 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType4117->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp4131 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp4130));
                org$pandalanguage$pandac$Type* $tmp4132 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp4131);
                listType4117 = $tmp4132;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp4133 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, listType4117);
        list4072 = $tmp4133;
    }
    }
    if (((panda$core$Bit) { list4072 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4134 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, list4072->position, list4072->type);
    panda$core$Bit $tmp4135 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4134);
    if ($tmp4135.value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list4072->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4136.value) {
    {
        panda$core$Object* $tmp4137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list4072->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4137)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp4138.value);
        panda$core$Object* $tmp4139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list4072->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4140 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp4139)->subtypes, ((panda$core$Int64) { 1 }));
        elementType4071 = ((org$pandalanguage$pandac$Type*) $tmp4140);
    }
    }
    else {
    {
        panda$core$Bit $tmp4141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list4072->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp4141.value);
        panda$core$Object* $tmp4142 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list4072->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType4071 = ((org$pandalanguage$pandac$Type*) $tmp4142);
    }
    }
    panda$core$Bit $tmp4143 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(elementType4071);
    panda$core$Bit $tmp4144 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4143);
    if ($tmp4144.value) {
    {
        panda$core$String* $tmp4146 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4145, ((panda$core$Object*) list4072->type));
        panda$core$String* $tmp4148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4146, &$s4147);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list4072->position, $tmp4148);
    }
    }
    org$pandalanguage$pandac$Variable$Kind* $tmp4150 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp4150->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp4150->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4150, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4152 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp4150, NULL, elementType4071);
    target4149 = $tmp4152;
    if (((panda$core$Bit) { target4149 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target4149->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp4154 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body4153 = $tmp4154;
    if (((panda$core$Bit) { body4153 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4156 = (panda$collections$Array*) malloc(40);
    $tmp4156->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4156->refCount.value = 1;
    panda$collections$Array$init($tmp4156);
    children4155 = $tmp4156;
    panda$collections$Array$add$panda$collections$Array$T(children4155, ((panda$core$Object*) target4149->target));
    panda$collections$Array$add$panda$collections$Array$T(children4155, ((panda$core$Object*) list4072));
    panda$collections$Array$add$panda$collections$Array$T(children4155, ((panda$core$Object*) body4153));
    org$pandalanguage$pandac$IRNode* $tmp4158 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4158->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4158->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4158, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children4155));
    return $tmp4158;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4167;
    org$pandalanguage$pandac$Variable* targetVar4173;
    panda$collections$Array* subtypes4174;
    org$pandalanguage$pandac$Type* iterType4178;
    org$pandalanguage$pandac$Variable* iter4189;
    panda$collections$Array* statements4196;
    panda$collections$Array* declChildren4199;
    panda$collections$Array* varChildren4204;
    panda$collections$Array* whileChildren4211;
    org$pandalanguage$pandac$IRNode* done4214;
    org$pandalanguage$pandac$IRNode* notCall4221;
    panda$collections$Array* valueDeclChildren4226;
    org$pandalanguage$pandac$IRNode* next4231;
    panda$collections$Array* valueVarChildren4238;
    org$pandalanguage$pandac$IRNode* block4243;
    panda$collections$Array* blockChildren4245;
    panda$core$Bit $tmp4161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp4160 = $tmp4161.value;
    if (!$tmp4160) goto $l4162;
    panda$core$Object* $tmp4163 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4164 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4165 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4163), $tmp4164);
    $tmp4160 = $tmp4165.value;
    $l4162:;
    panda$core$Bit $tmp4166 = { $tmp4160 };
    PANDA_ASSERT($tmp4166.value);
    org$pandalanguage$pandac$Variable$Kind* $tmp4168 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp4168->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp4168->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4168, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4170 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4171 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp4168, NULL, ((org$pandalanguage$pandac$Type*) $tmp4170));
    target4167 = $tmp4171;
    if (((panda$core$Bit) { target4167 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4167->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4172.value);
    targetVar4173 = ((org$pandalanguage$pandac$Variable*) target4167->target->payload);
    panda$collections$Array* $tmp4175 = (panda$collections$Array*) malloc(40);
    $tmp4175->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4175->refCount.value = 1;
    panda$collections$Array$init($tmp4175);
    subtypes4174 = $tmp4175;
    org$pandalanguage$pandac$Type* $tmp4177 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes4174, ((panda$core$Object*) $tmp4177));
    panda$collections$Array$add$panda$collections$Array$T(subtypes4174, ((panda$core$Object*) target4167->target->type));
    org$pandalanguage$pandac$Type* $tmp4179 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp4179->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp4179->refCount.value = 1;
    panda$core$Object* $tmp4181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes4174, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4182 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp4181));
    panda$core$String* $tmp4184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4182, &$s4183);
    panda$core$Object* $tmp4185 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes4174, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4186 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4184, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp4185)));
    panda$core$String* $tmp4188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4186, &$s4187);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp4179, $tmp4188, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes4174), ((panda$core$Bit) { true }));
    iterType4178 = $tmp4179;
    org$pandalanguage$pandac$Variable* $tmp4190 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4190->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4190->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind* $tmp4192 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp4192->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp4192->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4192, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar4173)->name, &$s4194);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4190, p_iterator->position, $tmp4192, $tmp4195, iterType4178);
    iter4189 = $tmp4190;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter4189));
    panda$collections$Array* $tmp4197 = (panda$collections$Array*) malloc(40);
    $tmp4197->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4197->refCount.value = 1;
    panda$collections$Array$init($tmp4197);
    statements4196 = $tmp4197;
    panda$collections$Array* $tmp4200 = (panda$collections$Array*) malloc(40);
    $tmp4200->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4200->refCount.value = 1;
    panda$collections$Array$init($tmp4200);
    declChildren4199 = $tmp4200;
    org$pandalanguage$pandac$IRNode* $tmp4202 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4202->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4202->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4202, ((panda$core$Int64) { 1016 }), p_iterator->position, iter4189->type, iter4189);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4199, ((panda$core$Object*) $tmp4202));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4199, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp4205 = (panda$collections$Array*) malloc(40);
    $tmp4205->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4205->refCount.value = 1;
    panda$collections$Array$init($tmp4205);
    varChildren4204 = $tmp4205;
    org$pandalanguage$pandac$IRNode* $tmp4207 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4207->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4207->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4207, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter4189)->position, ((panda$collections$ListView*) declChildren4199));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4204, ((panda$core$Object*) $tmp4207));
    org$pandalanguage$pandac$IRNode* $tmp4209 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4209->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4209->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4209, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter4189)->position, ((panda$collections$ListView*) varChildren4204));
    panda$collections$Array$add$panda$collections$Array$T(statements4196, ((panda$core$Object*) $tmp4209));
    panda$collections$Array* $tmp4212 = (panda$collections$Array*) malloc(40);
    $tmp4212->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4212->refCount.value = 1;
    panda$collections$Array$init($tmp4212);
    whileChildren4211 = $tmp4212;
    org$pandalanguage$pandac$IRNode* $tmp4215 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4215->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4215->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4215, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter4189)->position, iter4189->type, iter4189);
    panda$collections$Array* $tmp4218 = (panda$collections$Array*) malloc(40);
    $tmp4218->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4218->refCount.value = 1;
    panda$collections$Array$init($tmp4218);
    org$pandalanguage$pandac$IRNode* $tmp4220 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4215, &$s4217, ((panda$collections$ListView*) $tmp4218), NULL);
    done4214 = $tmp4220;
    if (((panda$core$Bit) { done4214 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4223 = (panda$collections$Array*) malloc(40);
    $tmp4223->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4223->refCount.value = 1;
    panda$collections$Array$init($tmp4223);
    org$pandalanguage$pandac$IRNode* $tmp4225 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done4214, &$s4222, ((panda$collections$ListView*) $tmp4223), NULL);
    notCall4221 = $tmp4225;
    if (((panda$core$Bit) { notCall4221 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren4211, ((panda$core$Object*) notCall4221));
    panda$collections$Array* $tmp4227 = (panda$collections$Array*) malloc(40);
    $tmp4227->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4227->refCount.value = 1;
    panda$collections$Array$init($tmp4227);
    valueDeclChildren4226 = $tmp4227;
    org$pandalanguage$pandac$IRNode* $tmp4229 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4229->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4229->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4229, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar4173->type, targetVar4173);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren4226, ((panda$core$Object*) $tmp4229));
    org$pandalanguage$pandac$IRNode* $tmp4232 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4232->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4232->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4232, ((panda$core$Int64) { 1016 }), p_iterator->position, iter4189->type, iter4189);
    panda$collections$Array* $tmp4235 = (panda$collections$Array*) malloc(40);
    $tmp4235->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4235->refCount.value = 1;
    panda$collections$Array$init($tmp4235);
    org$pandalanguage$pandac$IRNode* $tmp4237 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4232, &$s4234, ((panda$collections$ListView*) $tmp4235), NULL);
    next4231 = $tmp4237;
    PANDA_ASSERT(((panda$core$Bit) { next4231 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren4226, ((panda$core$Object*) next4231));
    panda$collections$Array* $tmp4239 = (panda$collections$Array*) malloc(40);
    $tmp4239->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4239->refCount.value = 1;
    panda$collections$Array$init($tmp4239);
    valueVarChildren4238 = $tmp4239;
    org$pandalanguage$pandac$IRNode* $tmp4241 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4241->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4241->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4241, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren4226));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren4238, ((panda$core$Object*) $tmp4241));
    org$pandalanguage$pandac$IRNode* $tmp4244 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block4243 = $tmp4244;
    if (((panda$core$Bit) { block4243 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4246 = (panda$collections$Array*) malloc(40);
    $tmp4246->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4246->refCount.value = 1;
    panda$collections$Array$init($tmp4246);
    blockChildren4245 = $tmp4246;
    org$pandalanguage$pandac$IRNode* $tmp4248 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4248->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4248->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4248, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren4238));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren4245, ((panda$core$Object*) $tmp4248));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren4245, ((panda$collections$CollectionView*) block4243->children));
    org$pandalanguage$pandac$IRNode* $tmp4250 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4250->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4250->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4250, ((panda$core$Int64) { 1000 }), block4243->position, ((panda$collections$ListView*) blockChildren4245));
    block4243 = $tmp4250;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren4211, ((panda$core$Object*) block4243));
    org$pandalanguage$pandac$IRNode* $tmp4252 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4252->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4252->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4252, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren4211));
    panda$collections$Array$add$panda$collections$Array$T(statements4196, ((panda$core$Object*) $tmp4252));
    org$pandalanguage$pandac$IRNode* $tmp4254 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4254->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4254->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4254, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements4196));
    return $tmp4254;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list4259;
    org$pandalanguage$pandac$SymbolTable* symbols4262;
    org$pandalanguage$pandac$IRNode* result4265;
    panda$core$Bit found4279;
    panda$collections$Iterator* intf$Iter4280;
    org$pandalanguage$pandac$Type* intf4293;
    org$pandalanguage$pandac$IRNode* iterator4305;
    org$pandalanguage$pandac$IRNode* iterable4317;
    org$pandalanguage$pandac$IRNode* iterator4319;
    panda$core$Bit $tmp4256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp4256.value);
    panda$core$Int64 $tmp4257 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4257, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4258.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp4260 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4261 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4260));
    list4259 = $tmp4261;
    if (((panda$core$Bit) { list4259 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4263 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4263->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4263->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4263, self->symbolTable);
    symbols4262 = $tmp4263;
    self->symbolTable = symbols4262;
    panda$core$Bit $tmp4268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list4259->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp4267 = $tmp4268.value;
    if ($tmp4267) goto $l4269;
    panda$core$Bit $tmp4270 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list4259->type);
    $tmp4267 = $tmp4270.value;
    $l4269:;
    panda$core$Bit $tmp4271 = { $tmp4267 };
    bool $tmp4266 = $tmp4271.value;
    if ($tmp4266) goto $l4272;
    panda$core$Bit $tmp4273 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list4259->type);
    $tmp4266 = $tmp4273.value;
    $l4272:;
    panda$core$Bit $tmp4274 = { $tmp4266 };
    if ($tmp4274.value) {
    {
        panda$core$Object* $tmp4275 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp4277 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4275), list4259, ((org$pandalanguage$pandac$ASTNode*) $tmp4276));
        result4265 = $tmp4277;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp4278 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list4259);
        list4259 = $tmp4278;
        if (((panda$core$Bit) { list4259 == NULL }).value) {
        {
            return NULL;
        }
        }
        found4279 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp4281 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list4259->type);
            ITable* $tmp4282 = ((panda$collections$Iterable*) $tmp4281)->$class->itable;
            while ($tmp4282->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4282 = $tmp4282->next;
            }
            $fn4284 $tmp4283 = $tmp4282->methods[0];
            panda$collections$Iterator* $tmp4285 = $tmp4283(((panda$collections$Iterable*) $tmp4281));
            intf$Iter4280 = $tmp4285;
            $l4286:;
            ITable* $tmp4288 = intf$Iter4280->$class->itable;
            while ($tmp4288->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4288 = $tmp4288->next;
            }
            $fn4290 $tmp4289 = $tmp4288->methods[0];
            panda$core$Bit $tmp4291 = $tmp4289(intf$Iter4280);
            panda$core$Bit $tmp4292 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4291);
            if (!$tmp4292.value) goto $l4287;
            {
                ITable* $tmp4294 = intf$Iter4280->$class->itable;
                while ($tmp4294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4294 = $tmp4294->next;
                }
                $fn4296 $tmp4295 = $tmp4294->methods[1];
                panda$core$Object* $tmp4297 = $tmp4295(intf$Iter4280);
                intf4293 = ((org$pandalanguage$pandac$Type*) $tmp4297);
                panda$core$Bit $tmp4299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4293->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4298 = $tmp4299.value;
                if (!$tmp4298) goto $l4300;
                panda$core$Object* $tmp4301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4293->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4302 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4303 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4301), $tmp4302);
                $tmp4298 = $tmp4303.value;
                $l4300:;
                panda$core$Bit $tmp4304 = { $tmp4298 };
                if ($tmp4304.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4306 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4259, intf4293);
                    iterator4305 = $tmp4306;
                    panda$core$Object* $tmp4307 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp4308 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp4309 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4307), iterator4305, ((org$pandalanguage$pandac$ASTNode*) $tmp4308));
                    result4265 = $tmp4309;
                    found4279 = ((panda$core$Bit) { true });
                    goto $l4287;
                }
                }
                panda$core$Bit $tmp4311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4293->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4310 = $tmp4311.value;
                if (!$tmp4310) goto $l4312;
                panda$core$Object* $tmp4313 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4293->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4314 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4315 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4313), $tmp4314);
                $tmp4310 = $tmp4315.value;
                $l4312:;
                panda$core$Bit $tmp4316 = { $tmp4310 };
                if ($tmp4316.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4318 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4259, intf4293);
                    iterable4317 = $tmp4318;
                    panda$collections$Array* $tmp4321 = (panda$collections$Array*) malloc(40);
                    $tmp4321->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4321->refCount.value = 1;
                    panda$collections$Array$init($tmp4321);
                    org$pandalanguage$pandac$IRNode* $tmp4323 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable4317, &$s4320, ((panda$collections$ListView*) $tmp4321));
                    iterator4319 = $tmp4323;
                    panda$core$Object* $tmp4324 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp4325 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp4326 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4324), iterator4319, ((org$pandalanguage$pandac$ASTNode*) $tmp4325));
                    result4265 = $tmp4326;
                    found4279 = ((panda$core$Bit) { true });
                    goto $l4287;
                }
                }
            }
            goto $l4286;
            $l4287:;
        }
        panda$core$Bit $tmp4327 = panda$core$Bit$$NOT$R$panda$core$Bit(found4279);
        if ($tmp4327.value) {
        {
            panda$core$String* $tmp4329 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4328, ((panda$core$Object*) list4259->type));
            panda$core$String* $tmp4331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4329, &$s4330);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list4259->position, $tmp4331);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp4332 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols4262->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4332);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result4265;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4336;
    org$pandalanguage$pandac$IRNode* stmt4341;
    panda$collections$Array* children4344;
    panda$core$Bit $tmp4333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp4333.value);
    panda$core$Int64 $tmp4334 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4334, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4335.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp4337 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4338 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4337));
    org$pandalanguage$pandac$Type* $tmp4339 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4340 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4338, $tmp4339);
    test4336 = $tmp4340;
    if (((panda$core$Bit) { test4336 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp4342 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4343 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4342));
    stmt4341 = $tmp4343;
    if (((panda$core$Bit) { stmt4341 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4345 = (panda$collections$Array*) malloc(40);
    $tmp4345->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4345->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4345, ((panda$core$Int64) { 2 }));
    children4344 = $tmp4345;
    panda$collections$Array$add$panda$collections$Array$T(children4344, ((panda$core$Object*) test4336));
    panda$collections$Array$add$panda$collections$Array$T(children4344, ((panda$core$Object*) stmt4341));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4347 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4347->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4347->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4347, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children4344));
    return $tmp4347;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt4352;
    org$pandalanguage$pandac$IRNode* test4355;
    panda$collections$Array* children4360;
    panda$core$Bit $tmp4349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp4349.value);
    panda$core$Int64 $tmp4350 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4350, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4351.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp4353 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4354 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4353));
    stmt4352 = $tmp4354;
    if (((panda$core$Bit) { stmt4352 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp4356 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4357 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4356));
    org$pandalanguage$pandac$Type* $tmp4358 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4359 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4357, $tmp4358);
    test4355 = $tmp4359;
    if (((panda$core$Bit) { test4355 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4361 = (panda$collections$Array*) malloc(40);
    $tmp4361->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4361->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4361, ((panda$core$Int64) { 2 }));
    children4360 = $tmp4361;
    panda$collections$Array$add$panda$collections$Array$T(children4360, ((panda$core$Object*) stmt4352));
    panda$collections$Array$add$panda$collections$Array$T(children4360, ((panda$core$Object*) test4355));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4363 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4363->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4363->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4363, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children4360));
    return $tmp4363;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt4368;
    panda$collections$Array* children4371;
    panda$core$Bit $tmp4365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp4365.value);
    panda$core$Int64 $tmp4366 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp4367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4366, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4367.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp4369 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4370 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4369));
    stmt4368 = $tmp4370;
    if (((panda$core$Bit) { stmt4368 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4372 = (panda$collections$Array*) malloc(40);
    $tmp4372->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4372->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4372, ((panda$core$Int64) { 1 }));
    children4371 = $tmp4372;
    panda$collections$Array$add$panda$collections$Array$T(children4371, ((panda$core$Object*) stmt4368));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4374 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4374->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4374->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4374, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children4371));
    return $tmp4374;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, org$pandalanguage$pandac$Variable$Kind* p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value4376;
    org$pandalanguage$pandac$Type* type4380;
    org$pandalanguage$pandac$Variable* v4396;
    value4376 = p_rawValue;
    bool $tmp4377 = ((panda$core$Bit) { value4376 == NULL }).value;
    if ($tmp4377) goto $l4378;
    $tmp4377 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l4378:;
    panda$core$Bit $tmp4379 = { $tmp4377 };
    PANDA_ASSERT($tmp4379.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp4381 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp4381) goto $l4382;
            panda$core$Int64 $tmp4383 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp4384 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4383, ((panda$core$Int64) { 0 }));
            $tmp4381 = $tmp4384.value;
            $l4382:;
            panda$core$Bit $tmp4385 = { $tmp4381 };
            if ($tmp4385.value) {
            {
                panda$core$Int64 $tmp4386 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp4387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4386, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp4387.value);
                panda$core$Object* $tmp4388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4389 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp4388));
                org$pandalanguage$pandac$Type* $tmp4390 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp4389);
                type4380 = $tmp4390;
            }
            }
            else {
            if (((panda$core$Bit) { value4376 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4391 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value4376);
                value4376 = $tmp4391;
                if (((panda$core$Bit) { value4376 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp4392 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value4376);
                type4380 = $tmp4392;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type4380 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s4393);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value4376 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4394 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value4376, type4380);
                value4376 = $tmp4394;
                if (((panda$core$Bit) { value4376 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp4395 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value4376->type, type4380);
                PANDA_ASSERT($tmp4395.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp4397 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4397->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4397->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4397, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type4380);
            v4396 = $tmp4397;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v4396));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4399 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp4399->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp4399->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4401 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4401->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4401->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4401, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v4396)->position, v4396->type, v4396);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4399, $tmp4401, value4376);
            return $tmp4399;
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
    org$pandalanguage$pandac$IRNode* value4411;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4416;
    panda$collections$Array* children4419;
    org$pandalanguage$pandac$Variable* v4423;
    panda$core$Bit $tmp4403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp4403.value);
    panda$core$Int64 $tmp4405 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4405, ((panda$core$Int64) { 1 }));
    bool $tmp4404 = $tmp4406.value;
    if ($tmp4404) goto $l4407;
    panda$core$Int64 $tmp4408 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4408, ((panda$core$Int64) { 2 }));
    $tmp4404 = $tmp4409.value;
    $l4407:;
    panda$core$Bit $tmp4410 = { $tmp4404 };
    PANDA_ASSERT($tmp4410.value);
    panda$core$Int64 $tmp4412 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4412, ((panda$core$Int64) { 2 }));
    if ($tmp4413.value) {
    {
        panda$core$Object* $tmp4414 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4415 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4414));
        value4411 = $tmp4415;
        if (((panda$core$Bit) { value4411 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value4411 = NULL;
    }
    }
    panda$core$Object* $tmp4417 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4418 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4417), p_varKind, value4411, NULL);
    target4416 = $tmp4418;
    if (((panda$core$Bit) { target4416 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4420 = (panda$collections$Array*) malloc(40);
    $tmp4420->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4420->refCount.value = 1;
    panda$collections$Array$init($tmp4420);
    children4419 = $tmp4420;
    panda$collections$Array$add$panda$collections$Array$T(children4419, ((panda$core$Object*) target4416->target));
    if (((panda$core$Bit) { target4416->value != NULL }).value) {
    {
        panda$core$Bit $tmp4422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4416->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp4422.value);
        v4423 = ((org$pandalanguage$pandac$Variable*) target4416->target->payload);
        v4423->initialValue = target4416->value;
        panda$collections$Array$add$panda$collections$Array$T(children4419, ((panda$core$Object*) target4416->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4424 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4424->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4424->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4424, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children4419));
    return $tmp4424;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found4427;
    panda$collections$Iterator* label$Iter4428;
    panda$core$String* label4440;
    panda$core$Bit $tmp4426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp4426.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found4427 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4429 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4429->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4429 = $tmp4429->next;
            }
            $fn4431 $tmp4430 = $tmp4429->methods[0];
            panda$collections$Iterator* $tmp4432 = $tmp4430(((panda$collections$Iterable*) self->loops));
            label$Iter4428 = $tmp4432;
            $l4433:;
            ITable* $tmp4435 = label$Iter4428->$class->itable;
            while ($tmp4435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4435 = $tmp4435->next;
            }
            $fn4437 $tmp4436 = $tmp4435->methods[0];
            panda$core$Bit $tmp4438 = $tmp4436(label$Iter4428);
            panda$core$Bit $tmp4439 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4438);
            if (!$tmp4439.value) goto $l4434;
            {
                ITable* $tmp4441 = label$Iter4428->$class->itable;
                while ($tmp4441->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4441 = $tmp4441->next;
                }
                $fn4443 $tmp4442 = $tmp4441->methods[1];
                panda$core$Object* $tmp4444 = $tmp4442(label$Iter4428);
                label4440 = ((panda$core$String*) $tmp4444);
                bool $tmp4445 = ((panda$core$Bit) { label4440 != NULL }).value;
                if (!$tmp4445) goto $l4446;
                panda$core$Bit $tmp4450;
                if (((panda$core$Bit) { label4440 != NULL }).value) goto $l4447; else goto $l4448;
                $l4447:;
                panda$core$Bit $tmp4451 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4440, ((panda$core$String*) p_b->payload));
                $tmp4450 = $tmp4451;
                goto $l4449;
                $l4448:;
                $tmp4450 = ((panda$core$Bit) { false });
                goto $l4449;
                $l4449:;
                $tmp4445 = $tmp4450.value;
                $l4446:;
                panda$core$Bit $tmp4452 = { $tmp4445 };
                if ($tmp4452.value) {
                {
                    found4427 = ((panda$core$Bit) { true });
                    goto $l4434;
                }
                }
            }
            goto $l4433;
            $l4434:;
        }
        panda$core$Bit $tmp4453 = panda$core$Bit$$NOT$R$panda$core$Bit(found4427);
        if ($tmp4453.value) {
        {
            panda$core$String* $tmp4455 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4454, p_b->payload);
            panda$core$String* $tmp4457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4455, &$s4456);
            panda$core$String* $tmp4459 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4458, p_b->payload);
            panda$core$String* $tmp4461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4459, &$s4460);
            panda$core$String* $tmp4462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4457, $tmp4461);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp4462);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4463 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4463, ((panda$core$Int64) { 0 }));
    if ($tmp4464.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s4465);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4466 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4466->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4466->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4466, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp4466;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found4469;
    panda$collections$Iterator* label$Iter4470;
    panda$core$String* label4482;
    panda$core$Bit $tmp4468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp4468.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found4469 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4471 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4471->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4471 = $tmp4471->next;
            }
            $fn4473 $tmp4472 = $tmp4471->methods[0];
            panda$collections$Iterator* $tmp4474 = $tmp4472(((panda$collections$Iterable*) self->loops));
            label$Iter4470 = $tmp4474;
            $l4475:;
            ITable* $tmp4477 = label$Iter4470->$class->itable;
            while ($tmp4477->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4477 = $tmp4477->next;
            }
            $fn4479 $tmp4478 = $tmp4477->methods[0];
            panda$core$Bit $tmp4480 = $tmp4478(label$Iter4470);
            panda$core$Bit $tmp4481 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4480);
            if (!$tmp4481.value) goto $l4476;
            {
                ITable* $tmp4483 = label$Iter4470->$class->itable;
                while ($tmp4483->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4483 = $tmp4483->next;
                }
                $fn4485 $tmp4484 = $tmp4483->methods[1];
                panda$core$Object* $tmp4486 = $tmp4484(label$Iter4470);
                label4482 = ((panda$core$String*) $tmp4486);
                bool $tmp4487 = ((panda$core$Bit) { label4482 != NULL }).value;
                if (!$tmp4487) goto $l4488;
                panda$core$Bit $tmp4492;
                if (((panda$core$Bit) { label4482 != NULL }).value) goto $l4489; else goto $l4490;
                $l4489:;
                panda$core$Bit $tmp4493 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4482, ((panda$core$String*) p_c->payload));
                $tmp4492 = $tmp4493;
                goto $l4491;
                $l4490:;
                $tmp4492 = ((panda$core$Bit) { false });
                goto $l4491;
                $l4491:;
                $tmp4487 = $tmp4492.value;
                $l4488:;
                panda$core$Bit $tmp4494 = { $tmp4487 };
                if ($tmp4494.value) {
                {
                    found4469 = ((panda$core$Bit) { true });
                    goto $l4476;
                }
                }
            }
            goto $l4475;
            $l4476:;
        }
        panda$core$Bit $tmp4495 = panda$core$Bit$$NOT$R$panda$core$Bit(found4469);
        if ($tmp4495.value) {
        {
            panda$core$String* $tmp4497 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4496, p_c->payload);
            panda$core$String* $tmp4499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4497, &$s4498);
            panda$core$String* $tmp4501 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4500, p_c->payload);
            panda$core$String* $tmp4503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4501, &$s4502);
            panda$core$String* $tmp4504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4499, $tmp4503);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp4504);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4505 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4505, ((panda$core$Int64) { 0 }));
    if ($tmp4506.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s4507);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4508 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4508->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4508->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4508, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp4508;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value4522;
    panda$collections$Array* children4527;
    panda$core$Bit $tmp4510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp4510.value);
    bool $tmp4511 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp4511) goto $l4512;
    panda$core$Int64 $tmp4513 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp4514 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4513, ((panda$core$Int64) { 0 }));
    $tmp4511 = $tmp4514.value;
    $l4512:;
    panda$core$Bit $tmp4515 = { $tmp4511 };
    if ($tmp4515.value) {
    {
        panda$core$Int64 $tmp4516 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp4517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4516, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4517.value);
        panda$core$Object* $tmp4518 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp4519 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4520 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4518)->returnType, $tmp4519);
        if ($tmp4520.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4521);
            return NULL;
        }
        }
        panda$core$Object* $tmp4523 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp4524 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4523));
        panda$core$Object* $tmp4525 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp4526 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4524, ((org$pandalanguage$pandac$MethodDecl*) $tmp4525)->returnType);
        value4522 = $tmp4526;
        if (((panda$core$Bit) { value4522 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4528 = (panda$collections$Array*) malloc(40);
        $tmp4528->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4528->refCount.value = 1;
        panda$collections$Array$init($tmp4528);
        children4527 = $tmp4528;
        panda$collections$Array$add$panda$collections$Array$T(children4527, ((panda$core$Object*) value4522));
        org$pandalanguage$pandac$IRNode* $tmp4530 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4530->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4530->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4530, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children4527));
        return $tmp4530;
    }
    }
    panda$core$Object* $tmp4532 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp4533 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4534 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4532)->returnType, $tmp4533);
    if ($tmp4534.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4535);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4536 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4536->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4536->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp4536, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp4536;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test4546;
    org$pandalanguage$pandac$ClassDecl* bit4551;
    org$pandalanguage$pandac$Symbol* value4554;
    panda$collections$Array* fieldChildren4557;
    panda$collections$Array* children4563;
    org$pandalanguage$pandac$IRNode* msg4568;
    panda$core$Bit $tmp4538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp4538.value);
    panda$core$Int64 $tmp4540 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4540, ((panda$core$Int64) { 1 }));
    bool $tmp4539 = $tmp4541.value;
    if ($tmp4539) goto $l4542;
    panda$core$Int64 $tmp4543 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4543, ((panda$core$Int64) { 2 }));
    $tmp4539 = $tmp4544.value;
    $l4542:;
    panda$core$Bit $tmp4545 = { $tmp4539 };
    PANDA_ASSERT($tmp4545.value);
    panda$core$Object* $tmp4547 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4548 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4547));
    test4546 = $tmp4548;
    if (((panda$core$Bit) { test4546 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4549 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4550 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test4546, $tmp4549);
    test4546 = $tmp4550;
    if (((panda$core$Bit) { test4546 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4552 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4553 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp4552);
    bit4551 = $tmp4553;
    PANDA_ASSERT(((panda$core$Bit) { bit4551 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp4556 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit4551->symbolTable, &$s4555);
    value4554 = $tmp4556;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value4554));
    panda$collections$Array* $tmp4558 = (panda$collections$Array*) malloc(40);
    $tmp4558->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4558->refCount.value = 1;
    panda$collections$Array$init($tmp4558);
    fieldChildren4557 = $tmp4558;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren4557, ((panda$core$Object*) test4546));
    org$pandalanguage$pandac$IRNode* $tmp4560 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4560->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4560->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4562 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4560, ((panda$core$Int64) { 1026 }), p_a->position, $tmp4562, ((panda$core$Object*) value4554), ((panda$collections$ListView*) fieldChildren4557));
    test4546 = $tmp4560;
    panda$collections$Array* $tmp4564 = (panda$collections$Array*) malloc(40);
    $tmp4564->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4564->refCount.value = 1;
    panda$collections$Array$init($tmp4564);
    children4563 = $tmp4564;
    panda$collections$Array$add$panda$collections$Array$T(children4563, ((panda$core$Object*) test4546));
    panda$core$Int64 $tmp4566 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4566, ((panda$core$Int64) { 2 }));
    if ($tmp4567.value) {
    {
        panda$core$Object* $tmp4569 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4570 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4569));
        msg4568 = $tmp4570;
        if (((panda$core$Bit) { msg4568 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4571 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4572 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg4568, $tmp4571);
        msg4568 = $tmp4572;
        if (((panda$core$Bit) { msg4568 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4563, ((panda$core$Object*) msg4568));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4573 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4573->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4573->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4573, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children4563));
    return $tmp4573;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind4588;
    org$pandalanguage$pandac$Variable$Kind* varKind4589;
    panda$collections$Array* decls4598;
    panda$collections$Iterator* astDecl$Iter4601;
    org$pandalanguage$pandac$ASTNode* astDecl4613;
    org$pandalanguage$pandac$IRNode* decl4618;
    panda$core$Bit $tmp4578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp4577 = $tmp4578.value;
    if ($tmp4577) goto $l4579;
    panda$core$Bit $tmp4580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp4577 = $tmp4580.value;
    $l4579:;
    panda$core$Bit $tmp4581 = { $tmp4577 };
    bool $tmp4576 = $tmp4581.value;
    if ($tmp4576) goto $l4582;
    panda$core$Bit $tmp4583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp4576 = $tmp4583.value;
    $l4582:;
    panda$core$Bit $tmp4584 = { $tmp4576 };
    bool $tmp4575 = $tmp4584.value;
    if ($tmp4575) goto $l4585;
    panda$core$Bit $tmp4586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp4575 = $tmp4586.value;
    $l4585:;
    panda$core$Bit $tmp4587 = { $tmp4575 };
    PANDA_ASSERT($tmp4587.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind4588 = ((panda$core$Int64) { 1017 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4590 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4590->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4590->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4590, ((panda$core$Int64) { 0 }));
            varKind4589 = $tmp4590;
        }
        break;
        case 131:
        {
            nodeKind4588 = ((panda$core$Int64) { 1018 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4592 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4592->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4592->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4592, ((panda$core$Int64) { 1 }));
            varKind4589 = $tmp4592;
        }
        break;
        case 132:
        {
            nodeKind4588 = ((panda$core$Int64) { 1019 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4594 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4594->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4594->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4594, ((panda$core$Int64) { 2 }));
            varKind4589 = $tmp4594;
        }
        break;
        case 133:
        {
            nodeKind4588 = ((panda$core$Int64) { 1020 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4596 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4596->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4596->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4596, ((panda$core$Int64) { 3 }));
            varKind4589 = $tmp4596;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp4599 = (panda$collections$Array*) malloc(40);
    $tmp4599->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4599->refCount.value = 1;
    panda$collections$Array$init($tmp4599);
    decls4598 = $tmp4599;
    {
        ITable* $tmp4602 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp4602->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4602 = $tmp4602->next;
        }
        $fn4604 $tmp4603 = $tmp4602->methods[0];
        panda$collections$Iterator* $tmp4605 = $tmp4603(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter4601 = $tmp4605;
        $l4606:;
        ITable* $tmp4608 = astDecl$Iter4601->$class->itable;
        while ($tmp4608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4608 = $tmp4608->next;
        }
        $fn4610 $tmp4609 = $tmp4608->methods[0];
        panda$core$Bit $tmp4611 = $tmp4609(astDecl$Iter4601);
        panda$core$Bit $tmp4612 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4611);
        if (!$tmp4612.value) goto $l4607;
        {
            ITable* $tmp4614 = astDecl$Iter4601->$class->itable;
            while ($tmp4614->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4614 = $tmp4614->next;
            }
            $fn4616 $tmp4615 = $tmp4614->methods[1];
            panda$core$Object* $tmp4617 = $tmp4615(astDecl$Iter4601);
            astDecl4613 = ((org$pandalanguage$pandac$ASTNode*) $tmp4617);
            org$pandalanguage$pandac$IRNode* $tmp4619 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl4613, varKind4589);
            decl4618 = $tmp4619;
            if (((panda$core$Bit) { decl4618 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls4598, ((panda$core$Object*) decl4618));
        }
        goto $l4606;
        $l4607:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4620 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4620->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4620->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4620, nodeKind4588, p_v->position, ((panda$collections$ListView*) decls4598));
    return $tmp4620;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4622;
    org$pandalanguage$pandac$IRNode* testValue4625;
    panda$collections$Array* callChildren4627;
    org$pandalanguage$pandac$IRNode* $tmp4623 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4623->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4623->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4623, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target4622 = $tmp4623;
    org$pandalanguage$pandac$IRNode* $tmp4626 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue4625 = $tmp4626;
    if (((panda$core$Bit) { testValue4625 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4628 = (panda$collections$Array*) malloc(40);
    $tmp4628->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4628->refCount.value = 1;
    panda$collections$Array$init($tmp4628);
    callChildren4627 = $tmp4628;
    panda$collections$Array$add$panda$collections$Array$T(callChildren4627, ((panda$core$Object*) testValue4625));
    org$pandalanguage$pandac$IRNode* $tmp4631 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4622, &$s4630, ((panda$collections$ListView*) callChildren4627));
    return $tmp4631;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$ASTNode* test4643;
    org$pandalanguage$pandac$ClassDecl* cl4651;
    org$pandalanguage$pandac$IRNode* base4654;
    panda$collections$Array* callChildren4658;
    org$pandalanguage$pandac$IRNode* target4661;
    org$pandalanguage$pandac$IRNode* check4664;
    org$pandalanguage$pandac$ChoiceEntry* entry4667;
    panda$core$Int64 requiredCount4668;
    panda$core$Int64 actualCount4670;
    panda$collections$Array* statements4700;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4703;
    org$pandalanguage$pandac$Variable* variable4722;
    panda$collections$Array* declChildren4731;
    panda$collections$Array* fieldRefChildren4736;
    panda$collections$Array* varChildren4747;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4760;
    org$pandalanguage$pandac$IRNode* statement4775;
    panda$collections$Array* children4785;
    org$pandalanguage$pandac$IRNode* test4792;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4796;
    org$pandalanguage$pandac$IRNode* nextTest4812;
    panda$collections$Array* callChildren4816;
    panda$collections$Array* statements4829;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4832;
    org$pandalanguage$pandac$IRNode* statement4847;
    panda$collections$Array* children4857;
    panda$core$Bit $tmp4632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4632.value);
    panda$core$Int64 $tmp4633 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4634 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4633, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4634.value);
    panda$core$Object* $tmp4635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4635)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4636.value);
    panda$core$Object* $tmp4637 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4638 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4637)->children);
    panda$core$Bit $tmp4639 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4638, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4639.value);
    panda$core$Object* $tmp4640 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4641 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4640)->children);
    panda$core$Bit $tmp4642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4641, ((panda$core$Int64) { 1 }));
    if ($tmp4642.value) {
    {
        panda$core$Object* $tmp4644 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4645 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4644)->children, ((panda$core$Int64) { 0 }));
        test4643 = ((org$pandalanguage$pandac$ASTNode*) $tmp4645);
        panda$core$Bit $tmp4647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(test4643->kind, ((panda$core$Int64) { 107 }));
        bool $tmp4646 = $tmp4647.value;
        if (!$tmp4646) goto $l4648;
        panda$core$Bit $tmp4649 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_value->type);
        $tmp4646 = $tmp4649.value;
        $l4648:;
        panda$core$Bit $tmp4650 = { $tmp4646 };
        if ($tmp4650.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp4652 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_value->type);
            cl4651 = $tmp4652;
            panda$core$Bit $tmp4653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl4651->classKind->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp4653.value) {
            {
                panda$core$Object* $tmp4655 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4643->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp4656 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4655));
                base4654 = $tmp4656;
                if (((panda$core$Bit) { base4654 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp4657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base4654->kind, ((panda$core$Int64) { 1046 }));
                if ($tmp4657.value) {
                {
                    panda$collections$Array* $tmp4659 = (panda$collections$Array*) malloc(40);
                    $tmp4659->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4659->refCount.value = 1;
                    panda$collections$Array$init($tmp4659);
                    callChildren4658 = $tmp4659;
                    panda$collections$Array$add$panda$collections$Array$T(callChildren4658, ((panda$core$Object*) base4654));
                    org$pandalanguage$pandac$IRNode* $tmp4662 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4662->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4662->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4662, ((panda$core$Int64) { 1016 }), test4643->position, p_value->type, p_value);
                    target4661 = $tmp4662;
                    org$pandalanguage$pandac$IRNode* $tmp4666 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4661, &$s4665, ((panda$collections$ListView*) callChildren4658));
                    check4664 = $tmp4666;
                    if (((panda$core$Bit) { check4664 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    entry4667 = ((org$pandalanguage$pandac$ChoiceEntry*) base4654->payload);
                    panda$core$Int64 $tmp4669 = panda$collections$Array$get_count$R$panda$core$Int64(entry4667->fields);
                    requiredCount4668 = $tmp4669;
                    panda$core$Int64 $tmp4671 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(test4643->children);
                    panda$core$Int64 $tmp4672 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4671, ((panda$core$Int64) { 1 }));
                    actualCount4670 = $tmp4672;
                    panda$core$Bit $tmp4673 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(actualCount4670, requiredCount4668);
                    if ($tmp4673.value) {
                    {
                        panda$core$String* $tmp4675 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4674, base4654->payload);
                        panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4675, &$s4676);
                        panda$core$Int64$wrapper* $tmp4678;
                        $tmp4678 = (panda$core$Int64$wrapper*) malloc(24);
                        $tmp4678->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                        $tmp4678->refCount = 1;
                        $tmp4678->value = requiredCount4668;
                        panda$core$String* $tmp4679 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4677, ((panda$core$Object*) $tmp4678));
                        panda$core$String* $tmp4681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4679, &$s4680);
                        panda$core$Bit $tmp4683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(requiredCount4668, ((panda$core$Int64) { 1 }));
                        panda$core$Bit$wrapper* $tmp4684;
                        $tmp4684 = (panda$core$Bit$wrapper*) malloc(13);
                        $tmp4684->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                        $tmp4684->refCount = 1;
                        $tmp4684->value = $tmp4683;
                        ITable* $tmp4686 = ((panda$core$Formattable*) $tmp4684)->$class->itable;
                        while ($tmp4686->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                            $tmp4686 = $tmp4686->next;
                        }
                        $fn4688 $tmp4687 = $tmp4686->methods[0];
                        panda$core$String* $tmp4689 = $tmp4687(((panda$core$Formattable*) $tmp4684), &$s4685);
                        panda$core$String* $tmp4690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4682, $tmp4689);
                        panda$core$String* $tmp4692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4690, &$s4691);
                        panda$core$Int64$wrapper* $tmp4693;
                        $tmp4693 = (panda$core$Int64$wrapper*) malloc(24);
                        $tmp4693->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                        $tmp4693->refCount = 1;
                        $tmp4693->value = actualCount4670;
                        panda$core$String* $tmp4694 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4692, ((panda$core$Object*) $tmp4693));
                        panda$core$String* $tmp4696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4694, &$s4695);
                        panda$core$String* $tmp4697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4681, $tmp4696);
                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, test4643->position, $tmp4697);
                        return NULL;
                    }
                    }
                    org$pandalanguage$pandac$SymbolTable* $tmp4698 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
                    $tmp4698->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
                    $tmp4698->refCount.value = 1;
                    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4698, self->symbolTable);
                    self->symbolTable = $tmp4698;
                    panda$collections$Array* $tmp4701 = (panda$collections$Array*) malloc(40);
                    $tmp4701->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4701->refCount.value = 1;
                    panda$collections$Array$init($tmp4701);
                    statements4700 = $tmp4701;
                    panda$core$Int64 $tmp4704 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(test4643->children);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4703, ((panda$core$Int64) { 1 }), $tmp4704, ((panda$core$Bit) { false }));
                    int64_t $tmp4706 = $tmp4703.min.value;
                    panda$core$Int64 i4705 = { $tmp4706 };
                    int64_t $tmp4708 = $tmp4703.max.value;
                    bool $tmp4709 = $tmp4703.inclusive.value;
                    if ($tmp4709) goto $l4716; else goto $l4717;
                    $l4716:;
                    if ($tmp4706 <= $tmp4708) goto $l4710; else goto $l4712;
                    $l4717:;
                    if ($tmp4706 < $tmp4708) goto $l4710; else goto $l4712;
                    $l4710:;
                    {
                        panda$core$Object* $tmp4718 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4643->children, i4705);
                        panda$core$Bit $tmp4719 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4718)->kind, ((panda$core$Int64) { 106 }));
                        if ($tmp4719.value) {
                        {
                            panda$core$Object* $tmp4720 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4643->children, i4705);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4720)->position, &$s4721);
                            return NULL;
                        }
                        }
                        org$pandalanguage$pandac$Variable* $tmp4723 = (org$pandalanguage$pandac$Variable*) malloc(88);
                        $tmp4723->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
                        $tmp4723->refCount.value = 1;
                        panda$core$Object* $tmp4725 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4643->children, i4705);
                        org$pandalanguage$pandac$Variable$Kind* $tmp4726 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
                        $tmp4726->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
                        $tmp4726->refCount.value = 1;
                        org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4726, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp4728 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4643->children, i4705);
                        panda$core$Int64 $tmp4729 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4705, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp4730 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(entry4667->fields, $tmp4729);
                        org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4723, ((org$pandalanguage$pandac$ASTNode*) $tmp4725)->position, $tmp4726, ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp4728)->payload), ((org$pandalanguage$pandac$Type*) $tmp4730));
                        variable4722 = $tmp4723;
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) variable4722));
                        panda$collections$Array* $tmp4732 = (panda$collections$Array*) malloc(40);
                        $tmp4732->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4732->refCount.value = 1;
                        panda$collections$Array$init($tmp4732);
                        declChildren4731 = $tmp4732;
                        org$pandalanguage$pandac$IRNode* $tmp4734 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4734->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4734->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4734, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) variable4722)->position, variable4722->type, variable4722);
                        panda$collections$Array$add$panda$collections$Array$T(declChildren4731, ((panda$core$Object*) $tmp4734));
                        panda$collections$Array* $tmp4737 = (panda$collections$Array*) malloc(40);
                        $tmp4737->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4737->refCount.value = 1;
                        panda$collections$Array$init($tmp4737);
                        fieldRefChildren4736 = $tmp4737;
                        org$pandalanguage$pandac$IRNode* $tmp4739 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4739->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4739->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4739, ((panda$core$Int64) { 1016 }), test4643->position, p_value->type, p_value);
                        panda$collections$Array$add$panda$collections$Array$T(fieldRefChildren4736, ((panda$core$Object*) $tmp4739));
                        org$pandalanguage$pandac$IRNode* $tmp4741 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4741->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4741->refCount.value = 1;
                        org$pandalanguage$pandac$Pair* $tmp4743 = (org$pandalanguage$pandac$Pair*) malloc(32);
                        $tmp4743->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
                        $tmp4743->refCount.value = 1;
                        panda$core$Int64 $tmp4745 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4705, ((panda$core$Int64) { 1 }));
                        panda$core$Int64$wrapper* $tmp4746;
                        $tmp4746 = (panda$core$Int64$wrapper*) malloc(24);
                        $tmp4746->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                        $tmp4746->refCount = 1;
                        $tmp4746->value = $tmp4745;
                        org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp4743, ((panda$core$Object*) entry4667), ((panda$core$Object*) $tmp4746));
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4741, ((panda$core$Int64) { 1047 }), ((org$pandalanguage$pandac$Symbol*) variable4722)->position, variable4722->type, ((panda$core$Object*) $tmp4743), ((panda$collections$ListView*) fieldRefChildren4736));
                        panda$collections$Array$add$panda$collections$Array$T(declChildren4731, ((panda$core$Object*) $tmp4741));
                        panda$collections$Array* $tmp4748 = (panda$collections$Array*) malloc(40);
                        $tmp4748->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4748->refCount.value = 1;
                        panda$collections$Array$init($tmp4748);
                        varChildren4747 = $tmp4748;
                        org$pandalanguage$pandac$IRNode* $tmp4750 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4750->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4750->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4750, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) variable4722)->position, ((panda$collections$ListView*) declChildren4731));
                        panda$collections$Array$add$panda$collections$Array$T(varChildren4747, ((panda$core$Object*) $tmp4750));
                        org$pandalanguage$pandac$IRNode* $tmp4752 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4752->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4752->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4752, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) variable4722)->position, ((panda$collections$ListView*) varChildren4747));
                        panda$collections$Array$add$panda$collections$Array$T(statements4700, ((panda$core$Object*) $tmp4752));
                    }
                    $l4713:;
                    int64_t $tmp4755 = $tmp4708 - i4705.value;
                    if ($tmp4709) goto $l4756; else goto $l4757;
                    $l4756:;
                    if ((uint64_t) $tmp4755 >= 1) goto $l4754; else goto $l4712;
                    $l4757:;
                    if ((uint64_t) $tmp4755 > 1) goto $l4754; else goto $l4712;
                    $l4754:;
                    i4705.value += 1;
                    goto $l4710;
                    $l4712:;
                    panda$core$Int64 $tmp4761 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4760, ((panda$core$Int64) { 1 }), $tmp4761, ((panda$core$Bit) { false }));
                    int64_t $tmp4763 = $tmp4760.min.value;
                    panda$core$Int64 i4762 = { $tmp4763 };
                    int64_t $tmp4765 = $tmp4760.max.value;
                    bool $tmp4766 = $tmp4760.inclusive.value;
                    if ($tmp4766) goto $l4773; else goto $l4774;
                    $l4773:;
                    if ($tmp4763 <= $tmp4765) goto $l4767; else goto $l4769;
                    $l4774:;
                    if ($tmp4763 < $tmp4765) goto $l4767; else goto $l4769;
                    $l4767:;
                    {
                        panda$core$Object* $tmp4776 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4762);
                        org$pandalanguage$pandac$IRNode* $tmp4777 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4776));
                        statement4775 = $tmp4777;
                        if (((panda$core$Bit) { statement4775 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4700, ((panda$core$Object*) statement4775));
                    }
                    $l4770:;
                    int64_t $tmp4779 = $tmp4765 - i4762.value;
                    if ($tmp4766) goto $l4780; else goto $l4781;
                    $l4780:;
                    if ((uint64_t) $tmp4779 >= 1) goto $l4778; else goto $l4769;
                    $l4781:;
                    if ((uint64_t) $tmp4779 > 1) goto $l4778; else goto $l4769;
                    $l4778:;
                    i4762.value += 1;
                    goto $l4767;
                    $l4769:;
                    panda$core$Object* $tmp4784 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4784);
                    panda$collections$Array* $tmp4786 = (panda$collections$Array*) malloc(40);
                    $tmp4786->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4786->refCount.value = 1;
                    panda$collections$Array$init($tmp4786);
                    children4785 = $tmp4786;
                    panda$collections$Array$add$panda$collections$Array$T(children4785, ((panda$core$Object*) check4664));
                    org$pandalanguage$pandac$IRNode* $tmp4788 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4788->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4788->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4788, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4700));
                    panda$collections$Array$add$panda$collections$Array$T(children4785, ((panda$core$Object*) $tmp4788));
                    org$pandalanguage$pandac$IRNode* $tmp4790 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4790->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4790->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4790, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4785));
                    return $tmp4790;
                }
                }
            }
            }
        }
        }
    }
    }
    panda$core$Object* $tmp4793 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4794 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4793)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4795 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4794));
    test4792 = $tmp4795;
    if (((panda$core$Bit) { test4792 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4797 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4798 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4797)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4796, ((panda$core$Int64) { 1 }), $tmp4798, ((panda$core$Bit) { false }));
    int64_t $tmp4800 = $tmp4796.min.value;
    panda$core$Int64 i4799 = { $tmp4800 };
    int64_t $tmp4802 = $tmp4796.max.value;
    bool $tmp4803 = $tmp4796.inclusive.value;
    if ($tmp4803) goto $l4810; else goto $l4811;
    $l4810:;
    if ($tmp4800 <= $tmp4802) goto $l4804; else goto $l4806;
    $l4811:;
    if ($tmp4800 < $tmp4802) goto $l4804; else goto $l4806;
    $l4804:;
    {
        panda$core$Object* $tmp4813 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4814 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4813)->children, i4799);
        org$pandalanguage$pandac$IRNode* $tmp4815 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4814));
        nextTest4812 = $tmp4815;
        if (((panda$core$Bit) { nextTest4812 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4817 = (panda$collections$Array*) malloc(40);
        $tmp4817->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4817->refCount.value = 1;
        panda$collections$Array$init($tmp4817);
        callChildren4816 = $tmp4817;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4816, ((panda$core$Object*) nextTest4812));
        org$pandalanguage$pandac$IRNode* $tmp4820 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4792, &$s4819, ((panda$collections$ListView*) callChildren4816));
        test4792 = $tmp4820;
        if (((panda$core$Bit) { test4792 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4807:;
    int64_t $tmp4822 = $tmp4802 - i4799.value;
    if ($tmp4803) goto $l4823; else goto $l4824;
    $l4823:;
    if ((uint64_t) $tmp4822 >= 1) goto $l4821; else goto $l4806;
    $l4824:;
    if ((uint64_t) $tmp4822 > 1) goto $l4821; else goto $l4806;
    $l4821:;
    i4799.value += 1;
    goto $l4804;
    $l4806:;
    org$pandalanguage$pandac$SymbolTable* $tmp4827 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4827->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4827->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4827, self->symbolTable);
    self->symbolTable = $tmp4827;
    panda$collections$Array* $tmp4830 = (panda$collections$Array*) malloc(40);
    $tmp4830->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4830->refCount.value = 1;
    panda$collections$Array$init($tmp4830);
    statements4829 = $tmp4830;
    panda$core$Int64 $tmp4833 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4832, ((panda$core$Int64) { 1 }), $tmp4833, ((panda$core$Bit) { false }));
    int64_t $tmp4835 = $tmp4832.min.value;
    panda$core$Int64 i4834 = { $tmp4835 };
    int64_t $tmp4837 = $tmp4832.max.value;
    bool $tmp4838 = $tmp4832.inclusive.value;
    if ($tmp4838) goto $l4845; else goto $l4846;
    $l4845:;
    if ($tmp4835 <= $tmp4837) goto $l4839; else goto $l4841;
    $l4846:;
    if ($tmp4835 < $tmp4837) goto $l4839; else goto $l4841;
    $l4839:;
    {
        panda$core$Object* $tmp4848 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4834);
        org$pandalanguage$pandac$IRNode* $tmp4849 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4848));
        statement4847 = $tmp4849;
        if (((panda$core$Bit) { statement4847 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4829, ((panda$core$Object*) statement4847));
    }
    $l4842:;
    int64_t $tmp4851 = $tmp4837 - i4834.value;
    if ($tmp4838) goto $l4852; else goto $l4853;
    $l4852:;
    if ((uint64_t) $tmp4851 >= 1) goto $l4850; else goto $l4841;
    $l4853:;
    if ((uint64_t) $tmp4851 > 1) goto $l4850; else goto $l4841;
    $l4850:;
    i4834.value += 1;
    goto $l4839;
    $l4841:;
    panda$core$Object* $tmp4856 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4856);
    panda$collections$Array* $tmp4858 = (panda$collections$Array*) malloc(40);
    $tmp4858->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4858->refCount.value = 1;
    panda$collections$Array$init($tmp4858);
    children4857 = $tmp4858;
    panda$collections$Array$add$panda$collections$Array$T(children4857, ((panda$core$Object*) test4792));
    org$pandalanguage$pandac$IRNode* $tmp4860 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4860->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4860->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4860, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4829));
    panda$collections$Array$add$panda$collections$Array$T(children4857, ((panda$core$Object*) $tmp4860));
    org$pandalanguage$pandac$IRNode* $tmp4862 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4862->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4862->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4862, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4857));
    return $tmp4862;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4864;
    org$pandalanguage$pandac$Variable* valueVar4867;
    panda$collections$Array* declChildren4881;
    panda$collections$Array* varChildren4886;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4893;
    org$pandalanguage$pandac$ASTNode* c4908;
    org$pandalanguage$pandac$IRNode* w4910;
    panda$collections$Array* statements4912;
    panda$collections$Iterator* astStatement$Iter4915;
    org$pandalanguage$pandac$ASTNode* astStatement4927;
    org$pandalanguage$pandac$IRNode* stmt4932;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4942;
    panda$collections$Array* newChildren4970;
    panda$collections$Array* $tmp4865 = (panda$collections$Array*) malloc(40);
    $tmp4865->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4865->refCount.value = 1;
    panda$collections$Array$init($tmp4865);
    children4864 = $tmp4865;
    org$pandalanguage$pandac$Variable* $tmp4868 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4868->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4868->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind* $tmp4870 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp4870->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp4870->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4870, ((panda$core$Int64) { 1 }));
    panda$core$Int64$wrapper* $tmp4873;
    $tmp4873 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp4873->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp4873->refCount = 1;
    $tmp4873->value = p_m->position.line;
    panda$core$String* $tmp4874 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4872, ((panda$core$Object*) $tmp4873));
    panda$core$String* $tmp4876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4874, &$s4875);
    panda$core$Int64$wrapper* $tmp4877;
    $tmp4877 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp4877->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp4877->refCount = 1;
    $tmp4877->value = p_m->position.column;
    panda$core$String* $tmp4878 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4876, ((panda$core$Object*) $tmp4877));
    panda$core$String* $tmp4880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4878, &$s4879);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4868, p_m->position, $tmp4870, $tmp4880, p_value->type);
    valueVar4867 = $tmp4868;
    panda$collections$Array* $tmp4882 = (panda$collections$Array*) malloc(40);
    $tmp4882->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4882->refCount.value = 1;
    panda$collections$Array$init($tmp4882);
    declChildren4881 = $tmp4882;
    org$pandalanguage$pandac$IRNode* $tmp4884 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4884->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4884->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4884, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4867->type, valueVar4867);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4881, ((panda$core$Object*) $tmp4884));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4881, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4887 = (panda$collections$Array*) malloc(40);
    $tmp4887->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4887->refCount.value = 1;
    panda$collections$Array$init($tmp4887);
    varChildren4886 = $tmp4887;
    org$pandalanguage$pandac$IRNode* $tmp4889 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4889->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4889->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4889, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4867)->position, ((panda$collections$ListView*) declChildren4881));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4886, ((panda$core$Object*) $tmp4889));
    org$pandalanguage$pandac$IRNode* $tmp4891 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4891->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4891->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4891, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4867)->position, ((panda$collections$ListView*) varChildren4886));
    panda$collections$Array$add$panda$collections$Array$T(children4864, ((panda$core$Object*) $tmp4891));
    panda$core$Int64 $tmp4894 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4893, ((panda$core$Int64) { 1 }), $tmp4894, ((panda$core$Bit) { false }));
    int64_t $tmp4896 = $tmp4893.min.value;
    panda$core$Int64 i4895 = { $tmp4896 };
    int64_t $tmp4898 = $tmp4893.max.value;
    bool $tmp4899 = $tmp4893.inclusive.value;
    if ($tmp4899) goto $l4906; else goto $l4907;
    $l4906:;
    if ($tmp4896 <= $tmp4898) goto $l4900; else goto $l4902;
    $l4907:;
    if ($tmp4896 < $tmp4898) goto $l4900; else goto $l4902;
    $l4900:;
    {
        panda$core$Object* $tmp4909 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4895);
        c4908 = ((org$pandalanguage$pandac$ASTNode*) $tmp4909);
        switch (c4908->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4911 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4867, c4908);
                w4910 = $tmp4911;
                if (((panda$core$Bit) { w4910 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4864, ((panda$core$Object*) w4910));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4913 = (panda$collections$Array*) malloc(40);
                $tmp4913->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4913->refCount.value = 1;
                panda$collections$Array$init($tmp4913);
                statements4912 = $tmp4913;
                {
                    ITable* $tmp4916 = ((panda$collections$Iterable*) c4908->children)->$class->itable;
                    while ($tmp4916->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4916 = $tmp4916->next;
                    }
                    $fn4918 $tmp4917 = $tmp4916->methods[0];
                    panda$collections$Iterator* $tmp4919 = $tmp4917(((panda$collections$Iterable*) c4908->children));
                    astStatement$Iter4915 = $tmp4919;
                    $l4920:;
                    ITable* $tmp4922 = astStatement$Iter4915->$class->itable;
                    while ($tmp4922->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4922 = $tmp4922->next;
                    }
                    $fn4924 $tmp4923 = $tmp4922->methods[0];
                    panda$core$Bit $tmp4925 = $tmp4923(astStatement$Iter4915);
                    panda$core$Bit $tmp4926 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4925);
                    if (!$tmp4926.value) goto $l4921;
                    {
                        ITable* $tmp4928 = astStatement$Iter4915->$class->itable;
                        while ($tmp4928->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4928 = $tmp4928->next;
                        }
                        $fn4930 $tmp4929 = $tmp4928->methods[1];
                        panda$core$Object* $tmp4931 = $tmp4929(astStatement$Iter4915);
                        astStatement4927 = ((org$pandalanguage$pandac$ASTNode*) $tmp4931);
                        org$pandalanguage$pandac$IRNode* $tmp4933 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4927);
                        stmt4932 = $tmp4933;
                        if (((panda$core$Bit) { stmt4932 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4912, ((panda$core$Object*) stmt4932));
                    }
                    goto $l4920;
                    $l4921:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4934 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4934->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4934->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4934, ((panda$core$Int64) { 1000 }), c4908->position, ((panda$collections$ListView*) statements4912));
                panda$collections$Array$add$panda$collections$Array$T(children4864, ((panda$core$Object*) $tmp4934));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4903:;
    int64_t $tmp4937 = $tmp4898 - i4895.value;
    if ($tmp4899) goto $l4938; else goto $l4939;
    $l4938:;
    if ((uint64_t) $tmp4937 >= 1) goto $l4936; else goto $l4902;
    $l4939:;
    if ((uint64_t) $tmp4937 > 1) goto $l4936; else goto $l4902;
    $l4936:;
    i4895.value += 1;
    goto $l4900;
    $l4902:;
    panda$core$Int64 $tmp4943 = panda$collections$Array$get_count$R$panda$core$Int64(children4864);
    panda$core$Int64 $tmp4944 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4943, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4942, $tmp4944, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4946 = $tmp4942.start.value;
    panda$core$Int64 i4945 = { $tmp4946 };
    int64_t $tmp4948 = $tmp4942.end.value;
    int64_t $tmp4949 = $tmp4942.step.value;
    bool $tmp4950 = $tmp4942.inclusive.value;
    bool $tmp4957 = $tmp4949 > 0;
    if ($tmp4957) goto $l4955; else goto $l4956;
    $l4955:;
    if ($tmp4950) goto $l4958; else goto $l4959;
    $l4958:;
    if ($tmp4946 <= $tmp4948) goto $l4951; else goto $l4953;
    $l4959:;
    if ($tmp4946 < $tmp4948) goto $l4951; else goto $l4953;
    $l4956:;
    if ($tmp4950) goto $l4960; else goto $l4961;
    $l4960:;
    if ($tmp4946 >= $tmp4948) goto $l4951; else goto $l4953;
    $l4961:;
    if ($tmp4946 > $tmp4948) goto $l4951; else goto $l4953;
    $l4951:;
    {
        panda$core$Int64 $tmp4963 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4945, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4964 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4864, $tmp4963);
        panda$core$Bit $tmp4965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4964)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4965.value);
        panda$core$Int64 $tmp4966 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4945, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4967 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4864, $tmp4966);
        panda$core$Int64 $tmp4968 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4967)->children);
        panda$core$Bit $tmp4969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4968, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4969.value);
        panda$collections$Array* $tmp4971 = (panda$collections$Array*) malloc(40);
        $tmp4971->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4971->refCount.value = 1;
        panda$core$Int64 $tmp4973 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4945, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4974 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4864, $tmp4973);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4971, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4974)->children));
        newChildren4970 = $tmp4971;
        panda$core$Object* $tmp4975 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4864, i4945);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4970, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4975)));
        panda$core$Int64 $tmp4976 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4945, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4977 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4977->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4977->refCount.value = 1;
        panda$core$Int64 $tmp4979 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4945, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4980 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4864, $tmp4979);
        panda$core$Int64 $tmp4981 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4945, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4982 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4864, $tmp4981);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4977, ((org$pandalanguage$pandac$IRNode*) $tmp4980)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4982)->position, ((panda$collections$ListView*) newChildren4970));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4864, $tmp4976, ((panda$core$Object*) $tmp4977));
        panda$core$Int64 $tmp4983 = panda$collections$Array$get_count$R$panda$core$Int64(children4864);
        panda$core$Int64 $tmp4984 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4983, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4864, $tmp4984);
    }
    $l4954:;
    if ($tmp4957) goto $l4986; else goto $l4987;
    $l4986:;
    int64_t $tmp4988 = $tmp4948 - i4945.value;
    if ($tmp4950) goto $l4989; else goto $l4990;
    $l4989:;
    if ((uint64_t) $tmp4988 >= $tmp4949) goto $l4985; else goto $l4953;
    $l4990:;
    if ((uint64_t) $tmp4988 > $tmp4949) goto $l4985; else goto $l4953;
    $l4987:;
    int64_t $tmp4992 = i4945.value - $tmp4948;
    if ($tmp4950) goto $l4993; else goto $l4994;
    $l4993:;
    if ((uint64_t) $tmp4992 >= -$tmp4949) goto $l4985; else goto $l4953;
    $l4994:;
    if ((uint64_t) $tmp4992 > -$tmp4949) goto $l4985; else goto $l4953;
    $l4985:;
    i4945.value += $tmp4949;
    goto $l4951;
    $l4953:;
    org$pandalanguage$pandac$IRNode* $tmp4996 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4996->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4996->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4996, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4864));
    return $tmp4996;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children5006;
    panda$collections$Iterator* expr$Iter5009;
    org$pandalanguage$pandac$ASTNode* expr5022;
    org$pandalanguage$pandac$IRNode* compiled5027;
    panda$collections$Array* statements5032;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5035;
    org$pandalanguage$pandac$IRNode* statement5050;
    panda$core$Bit $tmp4998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4998.value);
    panda$core$Int64 $tmp4999 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5000 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4999, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5000.value);
    panda$core$Object* $tmp5001 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp5001)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp5002.value);
    panda$core$Object* $tmp5003 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp5004 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp5003)->children);
    panda$core$Bit $tmp5005 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5004, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5005.value);
    panda$collections$Array* $tmp5007 = (panda$collections$Array*) malloc(40);
    $tmp5007->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5007->refCount.value = 1;
    panda$collections$Array$init($tmp5007);
    children5006 = $tmp5007;
    {
        panda$core$Object* $tmp5010 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp5011 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp5010)->children)->$class->itable;
        while ($tmp5011->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5011 = $tmp5011->next;
        }
        $fn5013 $tmp5012 = $tmp5011->methods[0];
        panda$collections$Iterator* $tmp5014 = $tmp5012(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp5010)->children));
        expr$Iter5009 = $tmp5014;
        $l5015:;
        ITable* $tmp5017 = expr$Iter5009->$class->itable;
        while ($tmp5017->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5017 = $tmp5017->next;
        }
        $fn5019 $tmp5018 = $tmp5017->methods[0];
        panda$core$Bit $tmp5020 = $tmp5018(expr$Iter5009);
        panda$core$Bit $tmp5021 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5020);
        if (!$tmp5021.value) goto $l5016;
        {
            ITable* $tmp5023 = expr$Iter5009->$class->itable;
            while ($tmp5023->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5023 = $tmp5023->next;
            }
            $fn5025 $tmp5024 = $tmp5023->methods[1];
            panda$core$Object* $tmp5026 = $tmp5024(expr$Iter5009);
            expr5022 = ((org$pandalanguage$pandac$ASTNode*) $tmp5026);
            org$pandalanguage$pandac$IRNode* $tmp5028 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr5022);
            org$pandalanguage$pandac$IRNode* $tmp5029 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5028, p_type);
            compiled5027 = $tmp5029;
            if (((panda$core$Bit) { compiled5027 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children5006, ((panda$core$Object*) compiled5027));
        }
        goto $l5015;
        $l5016:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp5030 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp5030->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp5030->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp5030, self->symbolTable);
    self->symbolTable = $tmp5030;
    panda$collections$Array* $tmp5033 = (panda$collections$Array*) malloc(40);
    $tmp5033->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5033->refCount.value = 1;
    panda$collections$Array$init($tmp5033);
    statements5032 = $tmp5033;
    panda$core$Int64 $tmp5036 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5035, ((panda$core$Int64) { 1 }), $tmp5036, ((panda$core$Bit) { false }));
    int64_t $tmp5038 = $tmp5035.min.value;
    panda$core$Int64 i5037 = { $tmp5038 };
    int64_t $tmp5040 = $tmp5035.max.value;
    bool $tmp5041 = $tmp5035.inclusive.value;
    if ($tmp5041) goto $l5048; else goto $l5049;
    $l5048:;
    if ($tmp5038 <= $tmp5040) goto $l5042; else goto $l5044;
    $l5049:;
    if ($tmp5038 < $tmp5040) goto $l5042; else goto $l5044;
    $l5042:;
    {
        panda$core$Object* $tmp5051 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i5037);
        org$pandalanguage$pandac$IRNode* $tmp5052 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp5051));
        statement5050 = $tmp5052;
        if (((panda$core$Bit) { statement5050 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements5032, ((panda$core$Object*) statement5050));
    }
    $l5045:;
    int64_t $tmp5054 = $tmp5040 - i5037.value;
    if ($tmp5041) goto $l5055; else goto $l5056;
    $l5055:;
    if ((uint64_t) $tmp5054 >= 1) goto $l5053; else goto $l5044;
    $l5056:;
    if ((uint64_t) $tmp5054 > 1) goto $l5053; else goto $l5044;
    $l5053:;
    i5037.value += 1;
    goto $l5042;
    $l5044:;
    panda$core$Object* $tmp5059 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp5059);
    org$pandalanguage$pandac$IRNode* $tmp5060 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5060->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5060->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5060, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements5032));
    panda$collections$Array$add$panda$collections$Array$T(children5006, ((panda$core$Object*) $tmp5060));
    org$pandalanguage$pandac$IRNode* $tmp5062 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5062->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5062->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5062, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children5006));
    return $tmp5062;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children5065;
    panda$collections$Array* statements5070;
    panda$collections$Iterator* s$Iter5073;
    org$pandalanguage$pandac$ASTNode* s5085;
    org$pandalanguage$pandac$IRNode* statement5090;
    panda$core$Bit $tmp5064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp5064.value);
    panda$collections$Array* $tmp5066 = (panda$collections$Array*) malloc(40);
    $tmp5066->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5066->refCount.value = 1;
    panda$collections$Array$init($tmp5066);
    children5065 = $tmp5066;
    org$pandalanguage$pandac$SymbolTable* $tmp5068 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp5068->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp5068->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp5068, self->symbolTable);
    self->symbolTable = $tmp5068;
    panda$collections$Array* $tmp5071 = (panda$collections$Array*) malloc(40);
    $tmp5071->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5071->refCount.value = 1;
    panda$collections$Array$init($tmp5071);
    statements5070 = $tmp5071;
    {
        ITable* $tmp5074 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp5074->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5074 = $tmp5074->next;
        }
        $fn5076 $tmp5075 = $tmp5074->methods[0];
        panda$collections$Iterator* $tmp5077 = $tmp5075(((panda$collections$Iterable*) p_o->children));
        s$Iter5073 = $tmp5077;
        $l5078:;
        ITable* $tmp5080 = s$Iter5073->$class->itable;
        while ($tmp5080->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5080 = $tmp5080->next;
        }
        $fn5082 $tmp5081 = $tmp5080->methods[0];
        panda$core$Bit $tmp5083 = $tmp5081(s$Iter5073);
        panda$core$Bit $tmp5084 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5083);
        if (!$tmp5084.value) goto $l5079;
        {
            ITable* $tmp5086 = s$Iter5073->$class->itable;
            while ($tmp5086->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5086 = $tmp5086->next;
            }
            $fn5088 $tmp5087 = $tmp5086->methods[1];
            panda$core$Object* $tmp5089 = $tmp5087(s$Iter5073);
            s5085 = ((org$pandalanguage$pandac$ASTNode*) $tmp5089);
            org$pandalanguage$pandac$IRNode* $tmp5091 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s5085);
            statement5090 = $tmp5091;
            if (((panda$core$Bit) { statement5090 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements5070, ((panda$core$Object*) statement5090));
        }
        goto $l5078;
        $l5079:;
    }
    panda$core$Object* $tmp5092 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp5092);
    org$pandalanguage$pandac$IRNode* $tmp5093 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5093->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5093->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5093, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements5070));
    panda$collections$Array$add$panda$collections$Array$T(children5065, ((panda$core$Object*) $tmp5093));
    org$pandalanguage$pandac$IRNode* $tmp5095 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5095->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5095->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5095, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children5065));
    return $tmp5095;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f5104;
    org$pandalanguage$pandac$Variable* v5113;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp5098 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp5097 = $tmp5098.value;
            if (!$tmp5097) goto $l5099;
            panda$core$Object* $tmp5100 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp5101 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp5100)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp5102 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5101));
            $tmp5097 = $tmp5102.value;
            $l5099:;
            panda$core$Bit $tmp5103 = { $tmp5097 };
            return $tmp5103;
        }
        break;
        case 1026:
        {
            f5104 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f5104->resolved.value);
            panda$core$Bit $tmp5107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f5104->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp5106 = $tmp5107.value;
            if (!$tmp5106) goto $l5108;
            $tmp5106 = ((panda$core$Bit) { f5104->value != NULL }).value;
            $l5108:;
            panda$core$Bit $tmp5109 = { $tmp5106 };
            bool $tmp5105 = $tmp5109.value;
            if (!$tmp5105) goto $l5110;
            panda$core$Bit $tmp5111 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f5104->value);
            $tmp5105 = $tmp5111.value;
            $l5110:;
            panda$core$Bit $tmp5112 = { $tmp5105 };
            return $tmp5112;
        }
        break;
        case 1016:
        {
            v5113 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp5115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v5113->varKind->$rawValue, ((panda$core$Int64) { 1 }));
            bool $tmp5114 = $tmp5115.value;
            if ($tmp5114) goto $l5116;
            panda$core$Bit $tmp5119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v5113->varKind->$rawValue, ((panda$core$Int64) { 2 }));
            bool $tmp5118 = $tmp5119.value;
            if (!$tmp5118) goto $l5120;
            $tmp5118 = ((panda$core$Bit) { v5113->initialValue != NULL }).value;
            $l5120:;
            panda$core$Bit $tmp5121 = { $tmp5118 };
            bool $tmp5117 = $tmp5121.value;
            if (!$tmp5117) goto $l5122;
            panda$core$Bit $tmp5123 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v5113->initialValue);
            $tmp5117 = $tmp5123.value;
            $l5122:;
            panda$core$Bit $tmp5124 = { $tmp5117 };
            $tmp5114 = $tmp5124.value;
            $l5116:;
            panda$core$Bit $tmp5125 = { $tmp5114 };
            return $tmp5125;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f5130;
    org$pandalanguage$pandac$Variable* v5132;
    panda$core$Bit $tmp5126 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp5126.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp5127 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp5128 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp5127)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp5129 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp5128));
            return $tmp5129;
        }
        break;
        case 1026:
        {
            f5130 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp5131 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f5130->value);
            return $tmp5131;
        }
        break;
        case 1016:
        {
            v5132 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp5133 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v5132->initialValue);
            return $tmp5133;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value5137;
    panda$collections$Array* children5144;
    panda$collections$Iterator* rawWhen$Iter5147;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp5148;
    org$pandalanguage$pandac$ASTNode* rawWhen5161;
    org$pandalanguage$pandac$IRNode* o5167;
    org$pandalanguage$pandac$IRNode* w5169;
    panda$core$Bit $tmp5134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp5134.value);
    panda$core$Int64 $tmp5135 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp5136 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5135, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5136.value);
    panda$core$Object* $tmp5138 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp5139 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp5138));
    org$pandalanguage$pandac$IRNode* $tmp5140 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5139);
    value5137 = $tmp5140;
    if (((panda$core$Bit) { value5137 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp5141 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value5137->type);
    panda$core$Bit $tmp5142 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5141);
    if ($tmp5142.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp5143 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value5137);
        return $tmp5143;
    }
    }
    panda$collections$Array* $tmp5145 = (panda$collections$Array*) malloc(40);
    $tmp5145->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5145->refCount.value = 1;
    panda$collections$Array$init($tmp5145);
    children5144 = $tmp5145;
    panda$collections$Array$add$panda$collections$Array$T(children5144, ((panda$core$Object*) value5137));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp5148, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp5149 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp5148);
        ITable* $tmp5150 = ((panda$collections$Iterable*) $tmp5149)->$class->itable;
        while ($tmp5150->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5150 = $tmp5150->next;
        }
        $fn5152 $tmp5151 = $tmp5150->methods[0];
        panda$collections$Iterator* $tmp5153 = $tmp5151(((panda$collections$Iterable*) $tmp5149));
        rawWhen$Iter5147 = $tmp5153;
        $l5154:;
        ITable* $tmp5156 = rawWhen$Iter5147->$class->itable;
        while ($tmp5156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5156 = $tmp5156->next;
        }
        $fn5158 $tmp5157 = $tmp5156->methods[0];
        panda$core$Bit $tmp5159 = $tmp5157(rawWhen$Iter5147);
        panda$core$Bit $tmp5160 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5159);
        if (!$tmp5160.value) goto $l5155;
        {
            ITable* $tmp5162 = rawWhen$Iter5147->$class->itable;
            while ($tmp5162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5162 = $tmp5162->next;
            }
            $fn5164 $tmp5163 = $tmp5162->methods[1];
            panda$core$Object* $tmp5165 = $tmp5163(rawWhen$Iter5147);
            rawWhen5161 = ((org$pandalanguage$pandac$ASTNode*) $tmp5165);
            panda$core$Bit $tmp5166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen5161->kind, ((panda$core$Int64) { 127 }));
            if ($tmp5166.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp5168 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen5161);
                o5167 = $tmp5168;
                if (((panda$core$Bit) { o5167 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children5144, ((panda$core$Object*) o5167));
                goto $l5154;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp5170 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value5137->type, rawWhen5161);
            w5169 = $tmp5170;
            if (((panda$core$Bit) { w5169 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp5171 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w5169->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp5172 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5171));
            panda$core$Bit $tmp5173 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5172);
            if ($tmp5173.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp5174 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value5137);
                return $tmp5174;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children5144, ((panda$core$Object*) w5169));
        }
        goto $l5154;
        $l5155:;
    }
    org$pandalanguage$pandac$IRNode* $tmp5175 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp5175->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp5175->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5175, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children5144));
    return $tmp5175;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result5190;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp5177 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5177;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp5178 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp5179 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5178);
            return $tmp5179;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp5180 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5180;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp5181 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5181;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp5182 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5182;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp5183 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5183;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp5184 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5184;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp5185 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5185;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp5186 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5186;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp5187 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5187;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp5188 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5188;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp5189 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5189;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp5191 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp5192 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp5191);
            result5190 = $tmp5192;
            if (((panda$core$Bit) { result5190 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp5193 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result5190);
                result5190 = $tmp5193;
            }
            }
            return result5190;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp5194 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp5194;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old5195;
    org$pandalanguage$pandac$SymbolTable* symbols5197;
    panda$collections$Iterator* p$Iter5200;
    org$pandalanguage$pandac$MethodDecl$Parameter* p5212;
    panda$collections$Array* fieldInitializers5223;
    panda$collections$Iterator* f$Iter5227;
    org$pandalanguage$pandac$FieldDecl* f5240;
    panda$collections$Array* children5250;
    org$pandalanguage$pandac$IRNode* fieldRef5257;
    org$pandalanguage$pandac$IRNode* compiled5264;
    panda$collections$Array* children5266;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old5195 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp5196 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp5196;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp5198 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp5198->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp5198->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp5198, self->symbolTable);
    symbols5197 = $tmp5198;
    {
        ITable* $tmp5201 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp5201->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5201 = $tmp5201->next;
        }
        $fn5203 $tmp5202 = $tmp5201->methods[0];
        panda$collections$Iterator* $tmp5204 = $tmp5202(((panda$collections$Iterable*) p_m->parameters));
        p$Iter5200 = $tmp5204;
        $l5205:;
        ITable* $tmp5207 = p$Iter5200->$class->itable;
        while ($tmp5207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5207 = $tmp5207->next;
        }
        $fn5209 $tmp5208 = $tmp5207->methods[0];
        panda$core$Bit $tmp5210 = $tmp5208(p$Iter5200);
        panda$core$Bit $tmp5211 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5210);
        if (!$tmp5211.value) goto $l5206;
        {
            ITable* $tmp5213 = p$Iter5200->$class->itable;
            while ($tmp5213->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5213 = $tmp5213->next;
            }
            $fn5215 $tmp5214 = $tmp5213->methods[1];
            panda$core$Object* $tmp5216 = $tmp5214(p$Iter5200);
            p5212 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5216);
            org$pandalanguage$pandac$Variable* $tmp5217 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp5217->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp5217->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind* $tmp5219 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp5219->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp5219->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp5219, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$Storage* $tmp5221 = (org$pandalanguage$pandac$Variable$Storage*) malloc(24);
            $tmp5221->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Storage$class;
            $tmp5221->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64($tmp5221, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage($tmp5217, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp5219, p5212->name, p5212->type, $tmp5221);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols5197, ((org$pandalanguage$pandac$Symbol*) $tmp5217));
        }
        goto $l5205;
        $l5206:;
    }
    self->symbolTable = symbols5197;
    fieldInitializers5223 = NULL;
    panda$core$Bit $tmp5224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp5224.value) {
    {
        panda$collections$Array* $tmp5225 = (panda$collections$Array*) malloc(40);
        $tmp5225->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp5225->refCount.value = 1;
        panda$collections$Array$init($tmp5225);
        fieldInitializers5223 = $tmp5225;
        {
            panda$core$Object* $tmp5228 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp5229 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp5228)->fields)->$class->itable;
            while ($tmp5229->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp5229 = $tmp5229->next;
            }
            $fn5231 $tmp5230 = $tmp5229->methods[0];
            panda$collections$Iterator* $tmp5232 = $tmp5230(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp5228)->fields));
            f$Iter5227 = $tmp5232;
            $l5233:;
            ITable* $tmp5235 = f$Iter5227->$class->itable;
            while ($tmp5235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5235 = $tmp5235->next;
            }
            $fn5237 $tmp5236 = $tmp5235->methods[0];
            panda$core$Bit $tmp5238 = $tmp5236(f$Iter5227);
            panda$core$Bit $tmp5239 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5238);
            if (!$tmp5239.value) goto $l5234;
            {
                ITable* $tmp5241 = f$Iter5227->$class->itable;
                while ($tmp5241->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5241 = $tmp5241->next;
                }
                $fn5243 $tmp5242 = $tmp5241->methods[1];
                panda$core$Object* $tmp5244 = $tmp5242(f$Iter5227);
                f5240 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5244);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f5240);
                panda$core$Bit $tmp5246 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f5240->annotations);
                panda$core$Bit $tmp5247 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5246);
                bool $tmp5245 = $tmp5247.value;
                if (!$tmp5245) goto $l5248;
                $tmp5245 = ((panda$core$Bit) { f5240->value != NULL }).value;
                $l5248:;
                panda$core$Bit $tmp5249 = { $tmp5245 };
                if ($tmp5249.value) {
                {
                    panda$collections$Array* $tmp5251 = (panda$collections$Array*) malloc(40);
                    $tmp5251->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp5251->refCount.value = 1;
                    panda$collections$Array$init($tmp5251);
                    children5250 = $tmp5251;
                    org$pandalanguage$pandac$IRNode* $tmp5253 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5253->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5253->refCount.value = 1;
                    panda$core$Object* $tmp5255 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp5256 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp5255));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp5253, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp5256);
                    panda$collections$Array$add$panda$collections$Array$T(children5250, ((panda$core$Object*) $tmp5253));
                    org$pandalanguage$pandac$IRNode* $tmp5258 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5258->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5258->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp5258, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f5240->type, ((panda$core$Object*) f5240), ((panda$collections$ListView*) children5250));
                    fieldRef5257 = $tmp5258;
                    panda$collections$Array$clear(children5250);
                    panda$collections$Array$add$panda$collections$Array$T(children5250, ((panda$core$Object*) fieldRef5257));
                    panda$collections$Array$add$panda$collections$Array$T(children5250, ((panda$core$Object*) f5240->value));
                    org$pandalanguage$pandac$IRNode* $tmp5260 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5260->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5260->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind* $tmp5262 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                    $tmp5262->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                    $tmp5262->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp5262, ((panda$core$Int64) { 73 }));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5260, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f5240)->position, ((panda$core$Object*) $tmp5262), ((panda$collections$ListView*) children5250));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers5223, ((panda$core$Object*) $tmp5260));
                }
                }
            }
            goto $l5233;
            $l5234:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp5265 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled5264 = $tmp5265;
    if (((panda$core$Bit) { compiled5264 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers5223 != NULL }).value) {
        {
            panda$collections$Array* $tmp5267 = (panda$collections$Array*) malloc(40);
            $tmp5267->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5267->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp5267, ((panda$collections$ListView*) fieldInitializers5223));
            children5266 = $tmp5267;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children5266, ((panda$collections$CollectionView*) compiled5264->children));
            org$pandalanguage$pandac$IRNode* $tmp5269 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp5269->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp5269->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5269, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children5266));
            compiled5264 = $tmp5269;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols5197) }).value);
    self->symbolTable = old5195;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp5271 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp5271.value) {
    {
        p_m->compiledBody = compiled5264;
    }
    }
    return compiled5264;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled5272;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp5273 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled5272 = $tmp5273;
        panda$core$Bit $tmp5275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, ((panda$core$Int64) { 0 }));
        bool $tmp5274 = $tmp5275.value;
        if (!$tmp5274) goto $l5276;
        $tmp5274 = ((panda$core$Bit) { compiled5272 != NULL }).value;
        $l5276:;
        panda$core$Bit $tmp5277 = { $tmp5274 };
        if ($tmp5277.value) {
        {
            ITable* $tmp5278 = self->codeGenerator->$class->itable;
            while ($tmp5278->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp5278 = $tmp5278->next;
            }
            $fn5280 $tmp5279 = $tmp5278->methods[3];
            $tmp5279(self->codeGenerator, p_m, compiled5272);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp5281 = self->codeGenerator->$class->itable;
        while ($tmp5281->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5281 = $tmp5281->next;
        }
        $fn5283 $tmp5282 = $tmp5281->methods[2];
        $tmp5282(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter5284;
    org$pandalanguage$pandac$ClassDecl* inner5296;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp5285 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp5285->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5285 = $tmp5285->next;
        }
        $fn5287 $tmp5286 = $tmp5285->methods[0];
        panda$collections$Iterator* $tmp5288 = $tmp5286(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter5284 = $tmp5288;
        $l5289:;
        ITable* $tmp5291 = inner$Iter5284->$class->itable;
        while ($tmp5291->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5291 = $tmp5291->next;
        }
        $fn5293 $tmp5292 = $tmp5291->methods[0];
        panda$core$Bit $tmp5294 = $tmp5292(inner$Iter5284);
        panda$core$Bit $tmp5295 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5294);
        if (!$tmp5295.value) goto $l5290;
        {
            ITable* $tmp5297 = inner$Iter5284->$class->itable;
            while ($tmp5297->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5297 = $tmp5297->next;
            }
            $fn5299 $tmp5298 = $tmp5297->methods[1];
            panda$core$Object* $tmp5300 = $tmp5298(inner$Iter5284);
            inner5296 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5300);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner5296);
        }
        goto $l5289;
        $l5290:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old5308;
    panda$collections$Iterator* m$Iter5313;
    org$pandalanguage$pandac$MethodDecl* m5325;
    org$pandalanguage$pandac$ClassDecl* next5335;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp5301 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp5301.value) {
    {
        ITable* $tmp5302 = self->codeGenerator->$class->itable;
        while ($tmp5302->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5302 = $tmp5302->next;
        }
        $fn5304 $tmp5303 = $tmp5302->methods[1];
        $tmp5303(self->codeGenerator, p_cl);
        ITable* $tmp5305 = self->codeGenerator->$class->itable;
        while ($tmp5305->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5305 = $tmp5305->next;
        }
        $fn5307 $tmp5306 = $tmp5305->methods[4];
        $tmp5306(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old5308 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp5309 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp5309;
    ITable* $tmp5310 = self->codeGenerator->$class->itable;
    while ($tmp5310->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5310 = $tmp5310->next;
    }
    $fn5312 $tmp5311 = $tmp5310->methods[1];
    $tmp5311(self->codeGenerator, p_cl);
    {
        ITable* $tmp5314 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp5314->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5314 = $tmp5314->next;
        }
        $fn5316 $tmp5315 = $tmp5314->methods[0];
        panda$collections$Iterator* $tmp5317 = $tmp5315(((panda$collections$Iterable*) p_cl->methods));
        m$Iter5313 = $tmp5317;
        $l5318:;
        ITable* $tmp5320 = m$Iter5313->$class->itable;
        while ($tmp5320->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5320 = $tmp5320->next;
        }
        $fn5322 $tmp5321 = $tmp5320->methods[0];
        panda$core$Bit $tmp5323 = $tmp5321(m$Iter5313);
        panda$core$Bit $tmp5324 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5323);
        if (!$tmp5324.value) goto $l5319;
        {
            ITable* $tmp5326 = m$Iter5313->$class->itable;
            while ($tmp5326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5326 = $tmp5326->next;
            }
            $fn5328 $tmp5327 = $tmp5326->methods[1];
            panda$core$Object* $tmp5329 = $tmp5327(m$Iter5313);
            m5325 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5329);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m5325);
        }
        goto $l5318;
        $l5319:;
    }
    ITable* $tmp5330 = self->codeGenerator->$class->itable;
    while ($tmp5330->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5330 = $tmp5330->next;
    }
    $fn5332 $tmp5331 = $tmp5330->methods[4];
    $tmp5331(self->codeGenerator, p_cl);
    self->symbolTable = old5308;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp5333 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5334 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5333, ((panda$core$Int64) { 0 }));
    if ($tmp5334.value) {
    {
        panda$core$Object* $tmp5336 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next5335 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5336);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next5335);
    }
    }
    panda$core$Int64 $tmp5337 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5337, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5338.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result5339;
    org$pandalanguage$pandac$ASTNode* parsed5342;
    panda$collections$Iterator* cl$Iter5345;
    org$pandalanguage$pandac$ClassDecl* cl5357;
    panda$core$Object* $tmp5340 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result5339 = ((panda$collections$ListView*) $tmp5340);
    if (((panda$core$Bit) { result5339 == NULL }).value) {
    {
        panda$core$String* $tmp5341 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp5341);
        org$pandalanguage$pandac$ASTNode* $tmp5343 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed5342 = $tmp5343;
        if (((panda$core$Bit) { parsed5342 != NULL }).value) {
        {
            panda$collections$ListView* $tmp5344 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed5342);
            result5339 = $tmp5344;
            {
                ITable* $tmp5346 = ((panda$collections$Iterable*) result5339)->$class->itable;
                while ($tmp5346->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp5346 = $tmp5346->next;
                }
                $fn5348 $tmp5347 = $tmp5346->methods[0];
                panda$collections$Iterator* $tmp5349 = $tmp5347(((panda$collections$Iterable*) result5339));
                cl$Iter5345 = $tmp5349;
                $l5350:;
                ITable* $tmp5352 = cl$Iter5345->$class->itable;
                while ($tmp5352->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5352 = $tmp5352->next;
                }
                $fn5354 $tmp5353 = $tmp5352->methods[0];
                panda$core$Bit $tmp5355 = $tmp5353(cl$Iter5345);
                panda$core$Bit $tmp5356 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5355);
                if (!$tmp5356.value) goto $l5351;
                {
                    ITable* $tmp5358 = cl$Iter5345->$class->itable;
                    while ($tmp5358->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp5358 = $tmp5358->next;
                    }
                    $fn5360 $tmp5359 = $tmp5358->methods[1];
                    panda$core$Object* $tmp5361 = $tmp5359(cl$Iter5345);
                    cl5357 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5361);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl5357)->name), ((panda$core$Object*) cl5357));
                }
                goto $l5350;
                $l5351:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp5362 = (panda$collections$Array*) malloc(40);
            $tmp5362->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5362->refCount.value = 1;
            panda$collections$Array$init($tmp5362);
            result5339 = ((panda$collections$ListView*) $tmp5362);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result5339));
    }
    }
    return result5339;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes5364;
    panda$collections$Iterator* cl$Iter5366;
    org$pandalanguage$pandac$ClassDecl* cl5378;
    panda$collections$ListView* $tmp5365 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes5364 = $tmp5365;
    {
        ITable* $tmp5367 = ((panda$collections$Iterable*) classes5364)->$class->itable;
        while ($tmp5367->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5367 = $tmp5367->next;
        }
        $fn5369 $tmp5368 = $tmp5367->methods[0];
        panda$collections$Iterator* $tmp5370 = $tmp5368(((panda$collections$Iterable*) classes5364));
        cl$Iter5366 = $tmp5370;
        $l5371:;
        ITable* $tmp5373 = cl$Iter5366->$class->itable;
        while ($tmp5373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5373 = $tmp5373->next;
        }
        $fn5375 $tmp5374 = $tmp5373->methods[0];
        panda$core$Bit $tmp5376 = $tmp5374(cl$Iter5366);
        panda$core$Bit $tmp5377 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5376);
        if (!$tmp5377.value) goto $l5372;
        {
            ITable* $tmp5379 = cl$Iter5366->$class->itable;
            while ($tmp5379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5379 = $tmp5379->next;
            }
            $fn5381 $tmp5380 = $tmp5379->methods[1];
            panda$core$Object* $tmp5382 = $tmp5380(cl$Iter5366);
            cl5378 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5382);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl5378);
        }
        goto $l5371;
        $l5372:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp5383 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp5383)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp5384 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp5384;
        panda$core$String* $tmp5385 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp5386 = panda$core$String$convert$R$panda$core$String($tmp5385);
        panda$core$String* $tmp5388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5386, &$s5387);
        org$pandalanguage$pandac$Position$wrapper* $tmp5389;
        $tmp5389 = (org$pandalanguage$pandac$Position$wrapper*) malloc(32);
        $tmp5389->cl = (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass;
        $tmp5389->refCount = 1;
        $tmp5389->value = p_pos;
        panda$core$String* $tmp5390 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5388, ((panda$core$Object*) $tmp5389));
        panda$core$String* $tmp5392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5390, &$s5391);
        panda$core$String* $tmp5393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5392, p_msg);
        panda$core$String* $tmp5395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5393, &$s5394);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp5395));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp5396 = self->codeGenerator->$class->itable;
    while ($tmp5396->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5396 = $tmp5396->next;
    }
    $fn5398 $tmp5397 = $tmp5396->methods[5];
    $tmp5397(self->codeGenerator);
}

