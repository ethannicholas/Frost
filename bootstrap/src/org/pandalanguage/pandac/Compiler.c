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
typedef panda$collections$Iterator* (*$fn444)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn450)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn456)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn467)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn473)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn479)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn485)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn491)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn497)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn505)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn511)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn517)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn611)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn617)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn623)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn651)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn683)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn689)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn695)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn714)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn720)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn726)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn752)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn758)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn764)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn813)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn819)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn825)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn834)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn851)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn869)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn875)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn881)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn889)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn895)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn901)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn913)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn919)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn925)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn948)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn954)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn960)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn999)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1005)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1011)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1024)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1030)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1036)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1051)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1057)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1063)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1079)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1085)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1091)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1105)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1111)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1117)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1130)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1136)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1142)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1187)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1193)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1199)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1206)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1212)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1218)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1238)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1244)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1250)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1333)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn1504)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1510)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1516)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1542)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1548)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1554)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1668)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1672)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1675)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1692)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1698)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1704)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1791)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1797)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1803)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1956)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2089)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2117)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2123)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2129)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2229)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2251)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2273)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2290)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2296)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2302)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2318)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2334)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2341)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2415)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2433)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2500)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2507)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn2549)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2567)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2573)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2579)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2610)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2616)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2622)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn2645)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2662)(panda$core$Formattable*, panda$core$String*);
typedef panda$core$Int64 (*$fn2669)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn2686)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2704)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn2738)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2744)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2750)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2773)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2779)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2785)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3224)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3230)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3236)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3368)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3374)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3380)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3488)(panda$core$Object*);
typedef panda$core$Int64 (*$fn3605)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn3621)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3627)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3633)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3767)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3773)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3779)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4057)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4063)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4069)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4204)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4210)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4216)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4246)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4252)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4258)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4377)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4383)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4389)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn4459)(panda$core$Formattable*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4685)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4691)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4697)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4780)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4786)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4792)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4843)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4849)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4855)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4919)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4925)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4931)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4970)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4976)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4982)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn4998)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5004)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5010)(panda$collections$Iterator*);
typedef void (*$fn5045)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5048)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$Iterator* (*$fn5052)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5058)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5064)(panda$collections$Iterator*);
typedef void (*$fn5069)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5072)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn5077)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5081)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5087)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5093)(panda$collections$Iterator*);
typedef void (*$fn5097)(org$pandalanguage$pandac$CodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn5113)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5125)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn5134)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5140)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5146)(panda$collections$Iterator*);
typedef void (*$fn5162)(org$pandalanguage$pandac$CodeGenerator*);

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
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20\x27", 11, 2825576507357767077, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x65\x78\x74\x65\x6e\x64\x20\x63\x6c\x61\x73\x73\x20", 22, -8406128752343392811, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73\x20\x27", 12, 3706067405940886645, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6f\x66\x20\x63\x6c\x61\x73\x73\x20\x27", 12, -633030867692887714, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20", 10, 5900311425897229264, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x69\x73\x74\x65\x64\x20\x62\x65\x66\x6f\x72\x65\x20\x61\x6e\x79\x20\x73\x75\x70\x65\x72\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 33, 4787050402069409712, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x68\x61\x73\x20\x6d\x6f\x72\x65\x20\x74\x68\x61\x6e\x20\x6f\x6e\x65\x20\x73\x75\x70\x65\x72\x63\x6c\x61\x73\x73", 30, -759923653827872275, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x69\x73\x20\x6e\x6f\x74\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 27, -5223536864783252703, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x73\x20", 11, 1426563750390550596, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x75\x74\x20\x6d\x65\x74\x68\x6f\x64\x73\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x76\x65\x72\x72\x69\x64\x65\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73", 37, 7193225585860914176, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x73\x20\x6d\x61\x72\x6b\x65\x64\x20\x40\x6f\x76\x65\x72\x72\x69\x64\x65\x2c\x20\x62\x75\x74\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68\x69\x6e\x67\x20", 38, -6085226934842474132, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x73\x74\x73\x20\x61\x6d\x6f\x6e\x67\x20\x69\x74\x73\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 33, -5331763662845728394, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x69\x65\x6c\x64\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 36, 5735293162260763604, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6f\x72\x20\x61\x6d\x62\x69\x67\x75\x6f\x75\x73\x20\x6d\x61\x74\x63\x68\x20\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c\x20\x28", 38, 3392199122829501018, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 18, 1104129620483010492, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };
static panda$core$String $s705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x66\x69\x6c\x65\x20\x27", 15, -3519420271001816814, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x63\x6f\x6e\x74\x61\x69\x6e\x20\x61\x20\x63\x6c\x61\x73\x73\x20\x6e\x61\x6d\x65\x64\x20\x27", 28, 3445503135242247770, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x66\x69\x6c\x65\x20\x6e\x61\x6d\x65\x64\x20", 14, 8876718408773305983, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20\x61\x6e\x79\x20\x69\x6d\x70\x6f\x72\x74\x20\x70\x61\x74\x68\x20\x28", 21, 3105450433703869576, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x73\x75\x70\x65\x72\x27\x20\x63\x61\x6e\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x61\x73\x20\x70\x61\x72\x74\x20\x6f\x66\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6c\x6c", 49, 5687166824689512368, NULL };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x30", 13, 2997537454666094288, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27", 10, 875040426634827830, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 14, 2262695563077912654, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20", 10, -1007140463547215113, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74", 9, 1450721239526715900, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x72\x65\x63\x65\x69\x76\x65\x64\x20", 15, -6693247693629641489, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x64\x69\x72\x65\x63\x74\x6c\x79\x20\x63\x61\x6c\x6c\x20\x27\x69\x6e\x69\x74\x27\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x6e\x20\x69\x6e\x69\x74\x20\x6d\x65\x74\x68\x6f\x64", 53, 84993564105955720, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x6f\x6e\x20\x27\x73\x65\x6c\x66\x27\x20\x6f\x72\x20\x27\x73\x75\x70\x65\x72\x27", 46, 5737688576853633111, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20", 21, -1285496544752055923, NULL };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x63\x6f\x6e\x74\x65\x78\x74", 22, 6236893689928691337, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x63\x6c\x61\x73\x73\x20", 18, 4176321021903236102, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x6f\x6e\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65", 15, 4946791728819903386, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x63\x61\x6c\x6c\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x6f\x6e\x20\x6e\x6f\x6e\x2d\x63\x6c\x61\x73\x73\x20\x74\x79\x70\x65\x20\x27", 40, 2057026257004143426, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s2512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x6f\x20\x6d\x61\x74\x63\x68\x20\x66\x6f\x72\x20\x63\x61\x6c\x6c\x20\x74\x6f\x20\x27", 22, 7814600009206081200, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x27", 2, 14381, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x69\x74\x68\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65\x20\x27", 19, -3030064837581027794, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s2648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x27", 8, 21554282788333791, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s2654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x65\x74\x68\x6f\x64", 17, 1918101523522592587, NULL };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f\x2f", 2, 14995, NULL };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x7c", 2, 22849, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 14077, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e\x7e", 2, 23053, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 13567, NULL };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s2832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3d", 2, 16120, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d\x3d", 3, 1373156, NULL };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e", 25, 9019145596080302696, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s3117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20", 3, 1432616, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x61\x73\x73\x69\x67\x6e\x20\x74\x6f\x20\x74\x68\x69\x73\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 32, -4891466264852316840, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x6f\x70\x65\x72\x61\x74\x65\x20\x6f\x6e\x20\x27", 21, -3266050109438970469, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x2c\x20\x27", 4, 144694255, NULL };
static panda$core$String $s3287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s3424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, 5304221197101987767, NULL };
static panda$core$String $s3436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x20\x27", 6, 2293399544522, NULL };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x63\x6c\x61\x73\x73", 16, 3306529650949529468, NULL };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20\x27", 7, 213449334494206, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x6d\x65\x6d\x62\x65\x72\x20\x6e\x61\x6d\x65\x64\x20\x27", 32, -5677460192622646983, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x61\x6e\x67\x65\x20\x73\x74\x65\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6e\x75\x6c\x6c", 25, 4479279434458851015, NULL };
static panda$core$String $s3590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x75\x6e\x72\x65\x73\x6f\x6c\x76\x65\x64\x20\x72\x61\x6e\x67\x65\x3e", 18, -1293962867859660245, NULL };
static panda$core$String $s3599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x65\x6c\x66\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 44, -511889306060728385, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x27\x73\x75\x70\x65\x72\x27\x20\x66\x72\x6f\x6d\x20\x61\x20\x40\x63\x6c\x61\x73\x73\x20\x6d\x65\x74\x68\x6f\x64", 45, 3734810722724983720, NULL };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x27", 15, -1620219380461029456, NULL };
static panda$core$String $s3692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x63\x61\x6e\x6e\x6f\x74\x20\x70\x6f\x73\x73\x69\x62\x6c\x79\x20\x62\x65\x20\x61\x6e\x20\x69\x6e\x73\x74\x61\x6e\x63\x65\x20\x6f\x66\x20", 36, -427166674877421096, NULL };
static panda$core$String $s3694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65", 24, -3977552604268313933, NULL };
static panda$core$String $s3828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s3838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static panda$core$String $s3840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20\x74\x79\x70\x65\x73\x20", 27, 6843179484913102436, NULL };
static panda$core$String $s3842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 18, -4303734005461819726, NULL };
static panda$core$String $s3862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20\x27", 48, 6391877092008549907, NULL };
static panda$core$String $s3870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 46, 6859502832880265551, NULL };
static panda$core$String $s3920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s3960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s3967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x74\x65\x72", 5, 14332680541, NULL };
static panda$core$String $s3990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static panda$core$String $s3995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s4007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x74\x65\x72\x61\x74\x6f\x72", 8, 22210198075044275, NULL };
static panda$core$String $s4101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 45, 562271959045909027, NULL };
static panda$core$String $s4103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x20\x68\x61\x73\x20\x6e\x65\x69\x74\x68\x65\x72\x20\x61\x20\x74\x79\x70\x65\x20\x6e\x6f\x72\x20\x61\x20\x76\x61\x6c\x75\x65", 42, 71025131614347466, NULL };
static panda$core$String $s4227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x20", 7, 149654778879689, NULL };
static panda$core$String $s4229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 29, -2107280000252113069, NULL };
static panda$core$String $s4269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 10, 6626032424543403513, NULL };
static panda$core$String $s4271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70\x20\x6c\x61\x62\x65\x6c\x6c\x65\x64\x20", 33, 5869484791969643332, NULL };
static panda$core$String $s4273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x27", 2, 16098, NULL };
static panda$core$String $s4280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x61\x20\x6c\x6f\x6f\x70", 32, -6048052453244835837, NULL };
static panda$core$String $s4294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 55, -6755143087675264705, NULL };
static panda$core$String $s4308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x76\x61\x6c\x75\x65", 23, 6159277012237708805, NULL };
static panda$core$String $s4328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6c\x75\x65", 5, 22890280642, NULL };
static panda$core$String $s4403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d", 1, 162, NULL };
static panda$core$String $s4447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20", 11, 5688068970715238544, NULL };
static panda$core$String $s4452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s4454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x72\x67\x75\x6d\x65\x6e\x74", 8, 21350388097650168, NULL };
static panda$core$String $s4456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c\x73", 2, 22840, NULL };
static panda$core$String $s4462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 12, 4230422288613720608, NULL };
static panda$core$String $s4465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s4491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 22, 417303976175476333, NULL };
static panda$core$String $s4588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s4641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6d\x61\x74\x63\x68\x24", 7, 146584075981198, NULL };
static panda$core$String $s4643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f", 1, 196, NULL };
static panda$core$String $s4646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s5152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s5155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s5158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$collections$Iterator* m$Iter441;
    org$pandalanguage$pandac$MethodDecl* m453;
    panda$collections$Iterator* intf$Iter464;
    org$pandalanguage$pandac$Type* intf476;
    panda$collections$Iterator* p$Iter482;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p494;
    org$pandalanguage$pandac$ClassDecl* cl499;
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
                    panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass394->classKind->$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp396.value) {
                    {
                        panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind->$rawValue, ((panda$core$Int64) { 1 }));
                        if ($tmp397.value) {
                        {
                            panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s398, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp399, &$s400);
                            panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s402, ((org$pandalanguage$pandac$Symbol*) s392)->name);
                            panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp403, &$s404);
                            panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp401, $tmp405);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s392)->position, $tmp406);
                        }
                        }
                        if (((panda$core$Bit) { p_cl->rawSuper == NULL }).value) {
                        {
                            p_cl->rawSuper = s392;
                            panda$core$Int64 $tmp407 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
                            panda$core$Bit $tmp408 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp407, ((panda$core$Int64) { 0 }));
                            if ($tmp408.value) {
                            {
                                panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s409, ((panda$core$Object*) s392));
                                panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp410, &$s411);
                                panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                                panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp413, &$s414);
                                panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, &$s416);
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s392)->position, $tmp417);
                            }
                            }
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s418, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                            panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp419, &$s420);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) s392)->position, $tmp421);
                        }
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(sClass394->classKind->$rawValue, ((panda$core$Int64) { 1 }));
                        PANDA_ASSERT($tmp422.value);
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
    bool $tmp423 = ((panda$core$Bit) { p_cl->rawSuper == NULL }).value;
    if (!$tmp423) goto $l424;
    panda$core$Bit $tmp426 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s425);
    $tmp423 = $tmp426.value;
    $l424:;
    panda$core$Bit $tmp427 = { $tmp423 };
    if ($tmp427.value) {
    {
        org$pandalanguage$pandac$Type* $tmp428 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        p_cl->rawSuper = $tmp428;
    }
    }
    bool $tmp430 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp430) goto $l431;
    panda$core$Bit $tmp432 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp432);
    $tmp430 = $tmp433.value;
    $l431:;
    panda$core$Bit $tmp434 = { $tmp430 };
    bool $tmp429 = $tmp434.value;
    if (!$tmp429) goto $l435;
    panda$core$Bit $tmp437 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s436);
    $tmp429 = $tmp437.value;
    $l435:;
    panda$core$Bit $tmp438 = { $tmp429 };
    if ($tmp438.value) {
    {
        panda$core$Int64 $tmp439 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp440 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp439);
        p_cl->annotations->flags = $tmp440;
        {
            ITable* $tmp442 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp442->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp442 = $tmp442->next;
            }
            $fn444 $tmp443 = $tmp442->methods[0];
            panda$collections$Iterator* $tmp445 = $tmp443(((panda$collections$Iterable*) p_cl->methods));
            m$Iter441 = $tmp445;
            $l446:;
            ITable* $tmp448 = m$Iter441->$class->itable;
            while ($tmp448->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp448 = $tmp448->next;
            }
            $fn450 $tmp449 = $tmp448->methods[0];
            panda$core$Bit $tmp451 = $tmp449(m$Iter441);
            panda$core$Bit $tmp452 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp451);
            if (!$tmp452.value) goto $l447;
            {
                ITable* $tmp454 = m$Iter441->$class->itable;
                while ($tmp454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp454 = $tmp454->next;
                }
                $fn456 $tmp455 = $tmp454->methods[1];
                panda$core$Object* $tmp457 = $tmp455(m$Iter441);
                m453 = ((org$pandalanguage$pandac$MethodDecl*) $tmp457);
                panda$core$Int64 $tmp458 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                panda$core$Int64 $tmp459 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m453->annotations->flags, $tmp458);
                m453->annotations->flags = $tmp459;
                panda$core$Bit $tmp460 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(self->scanner, m453->annotations, m453->body);
                if ($tmp460.value) {
                {
                    panda$core$Int64 $tmp461 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp462 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m453->annotations->flags, $tmp461);
                    m453->annotations->flags = $tmp462;
                }
                }
            }
            goto $l446;
            $l447:;
        }
    }
    }
    if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp463 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp463, p_cl->rawSuper);
    }
    }
    {
        ITable* $tmp465 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
        while ($tmp465->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp465 = $tmp465->next;
        }
        $fn467 $tmp466 = $tmp465->methods[0];
        panda$collections$Iterator* $tmp468 = $tmp466(((panda$collections$Iterable*) p_cl->rawInterfaces));
        intf$Iter464 = $tmp468;
        $l469:;
        ITable* $tmp471 = intf$Iter464->$class->itable;
        while ($tmp471->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp471 = $tmp471->next;
        }
        $fn473 $tmp472 = $tmp471->methods[0];
        panda$core$Bit $tmp474 = $tmp472(intf$Iter464);
        panda$core$Bit $tmp475 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp474);
        if (!$tmp475.value) goto $l470;
        {
            ITable* $tmp477 = intf$Iter464->$class->itable;
            while ($tmp477->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp477 = $tmp477->next;
            }
            $fn479 $tmp478 = $tmp477->methods[1];
            panda$core$Object* $tmp480 = $tmp478(intf$Iter464);
            intf476 = ((org$pandalanguage$pandac$Type*) $tmp480);
            org$pandalanguage$pandac$ClassDecl* $tmp481 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, intf476);
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp481, intf476);
        }
        goto $l469;
        $l470:;
    }
    {
        ITable* $tmp483 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
        while ($tmp483->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp483 = $tmp483->next;
        }
        $fn485 $tmp484 = $tmp483->methods[0];
        panda$collections$Iterator* $tmp486 = $tmp484(((panda$collections$Iterable*) p_cl->parameters));
        p$Iter482 = $tmp486;
        $l487:;
        ITable* $tmp489 = p$Iter482->$class->itable;
        while ($tmp489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp489 = $tmp489->next;
        }
        $fn491 $tmp490 = $tmp489->methods[0];
        panda$core$Bit $tmp492 = $tmp490(p$Iter482);
        panda$core$Bit $tmp493 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp492);
        if (!$tmp493.value) goto $l488;
        {
            ITable* $tmp495 = p$Iter482->$class->itable;
            while ($tmp495->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp495 = $tmp495->next;
            }
            $fn497 $tmp496 = $tmp495->methods[1];
            panda$core$Object* $tmp498 = $tmp496(p$Iter482);
            p494 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp498);
            org$pandalanguage$pandac$ClassDecl* $tmp500 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p494->bound);
            cl499 = $tmp500;
            if (((panda$core$Bit) { cl499 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, ((org$pandalanguage$pandac$Symbol*) cl499)->position, cl499, p494->bound);
            }
            }
        }
        goto $l487;
        $l488:;
    }
    self->symbolTable = old355;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old501;
    panda$collections$Iterator* p$Iter502;
    org$pandalanguage$pandac$MethodDecl$Parameter* p514;
    org$pandalanguage$pandac$MethodDecl* overridden522;
    if (p_m->resolved.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old501 = self->symbolTable;
    self->symbolTable = p_m->owner->symbolTable;
    {
        ITable* $tmp503 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp503->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp503 = $tmp503->next;
        }
        $fn505 $tmp504 = $tmp503->methods[0];
        panda$collections$Iterator* $tmp506 = $tmp504(((panda$collections$Iterable*) p_m->parameters));
        p$Iter502 = $tmp506;
        $l507:;
        ITable* $tmp509 = p$Iter502->$class->itable;
        while ($tmp509->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp509 = $tmp509->next;
        }
        $fn511 $tmp510 = $tmp509->methods[0];
        panda$core$Bit $tmp512 = $tmp510(p$Iter502);
        panda$core$Bit $tmp513 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp512);
        if (!$tmp513.value) goto $l508;
        {
            ITable* $tmp515 = p$Iter502->$class->itable;
            while ($tmp515->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp515 = $tmp515->next;
            }
            $fn517 $tmp516 = $tmp515->methods[1];
            panda$core$Object* $tmp518 = $tmp516(p$Iter502);
            p514 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp518);
            org$pandalanguage$pandac$Type* $tmp519 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p514->type);
            p514->type = $tmp519;
        }
        goto $l507;
        $l508:;
    }
    org$pandalanguage$pandac$Type* $tmp520 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_m->returnType);
    p_m->returnType = $tmp520;
    p_m->resolved = ((panda$core$Bit) { true });
    panda$core$Bit $tmp521 = panda$core$Bit$$NOT$R$panda$core$Bit(p_m->owner->external);
    if ($tmp521.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp523 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
        overridden522 = $tmp523;
        if (((panda$core$Bit) { overridden522 != NULL }).value) {
        {
            panda$core$Bit $tmp524 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
            panda$core$Bit $tmp525 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp524);
            if ($tmp525.value) {
            {
                panda$core$String* $tmp526 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp527 = panda$core$String$convert$R$panda$core$String($tmp526);
                panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, &$s528);
                panda$core$String* $tmp530 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden522);
                panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp529, $tmp530);
                panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp531, &$s532);
                panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp533, &$s534);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp535);
            }
            }
            panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 0 }));
            bool $tmp536 = $tmp537.value;
            if (!$tmp536) goto $l538;
            panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(overridden522->methodKind->$rawValue, ((panda$core$Int64) { 1 }));
            $tmp536 = $tmp539.value;
            $l538:;
            panda$core$Bit $tmp540 = { $tmp536 };
            if ($tmp540.value) {
            {
                panda$core$String* $tmp541 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
                panda$core$String* $tmp542 = panda$core$String$convert$R$panda$core$String($tmp541);
                panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, &$s543);
                panda$core$String* $tmp545 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden522);
                panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, $tmp545);
                panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s547);
                panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s549);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp550);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp551 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
        if ($tmp551.value) {
        {
            panda$core$String* $tmp552 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            panda$core$String* $tmp553 = panda$core$String$convert$R$panda$core$String($tmp552);
            panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, &$s554);
            panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp555, &$s556);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp557);
        }
        }
        }
    }
    }
    self->symbolTable = old501;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    org$pandalanguage$pandac$SymbolTable* old558;
    org$pandalanguage$pandac$Type* resolved561;
    if (p_f->resolved.value) {
    {
        return;
    }
    }
    p_f->resolved = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_f->owner));
    old558 = self->symbolTable;
    self->symbolTable = p_f->owner->symbolTable;
    org$pandalanguage$pandac$Type* $tmp559 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp560 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_f->type, $tmp559);
    if ($tmp560.value) {
    {
        org$pandalanguage$pandac$Type* $tmp562 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_f->type);
        resolved561 = $tmp562;
        if (((panda$core$Bit) { resolved561 != NULL }).value) {
        {
            p_f->type = resolved561;
            if (((panda$core$Bit) { p_f->rawValue != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp563 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
                org$pandalanguage$pandac$IRNode* $tmp564 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp563, p_f->type);
                p_f->value = $tmp564;
            }
            }
        }
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old558;
        return;
    }
    }
    if (((panda$core$Bit) { p_f->rawValue == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f)->position, &$s565);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old558;
        return;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp566 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->rawValue);
    p_f->value = $tmp566;
    if (((panda$core$Bit) { p_f->value == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        self->symbolTable = old558;
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp567 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_f->value);
    p_f->type = $tmp567;
    org$pandalanguage$pandac$IRNode* $tmp568 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->value, p_f->type);
    p_f->value = $tmp568;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->symbolTable = old558;
}
void org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ChoiceEntry* p_c) {
    org$pandalanguage$pandac$SymbolTable* old571;
    panda$core$Range$LTpanda$core$Int64$GT $tmp572;
    if (p_c->resolved.value) {
    {
        return;
    }
    }
    p_c->resolved = ((panda$core$Bit) { true });
    panda$core$Int64 $tmp569 = panda$collections$Array$get_count$R$panda$core$Int64(p_c->fields);
    panda$core$Bit $tmp570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp569, ((panda$core$Int64) { 0 }));
    if ($tmp570.value) {
    {
        return;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_c->owner));
    old571 = self->symbolTable;
    self->symbolTable = p_c->owner->symbolTable;
    panda$core$Int64 $tmp573 = panda$collections$Array$get_count$R$panda$core$Int64(p_c->fields);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp572, ((panda$core$Int64) { 0 }), $tmp573, ((panda$core$Bit) { false }));
    int64_t $tmp575 = $tmp572.min.value;
    panda$core$Int64 i574 = { $tmp575 };
    int64_t $tmp577 = $tmp572.max.value;
    bool $tmp578 = $tmp572.inclusive.value;
    if ($tmp578) goto $l585; else goto $l586;
    $l585:;
    if ($tmp575 <= $tmp577) goto $l579; else goto $l581;
    $l586:;
    if ($tmp575 < $tmp577) goto $l579; else goto $l581;
    $l579:;
    {
        org$pandalanguage$pandac$Pair* $tmp587 = (org$pandalanguage$pandac$Pair*) malloc(32);
        $tmp587->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
        $tmp587->refCount.value = 1;
        panda$core$Object* $tmp589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_c->fields, i574);
        panda$core$Object* $tmp590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_c->fields, i574);
        org$pandalanguage$pandac$Type* $tmp591 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp590)->second));
        org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp587, ((panda$core$Object*) ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp589)->first)), ((panda$core$Object*) $tmp591));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_c->fields, i574, ((panda$core$Object*) $tmp587));
    }
    $l582:;
    int64_t $tmp593 = $tmp577 - i574.value;
    if ($tmp578) goto $l594; else goto $l595;
    $l594:;
    if ($tmp593 >= 1) goto $l592; else goto $l581;
    $l595:;
    if ($tmp593 > 1) goto $l592; else goto $l581;
    $l592:;
    i574.value += 1;
    goto $l579;
    $l581:;
    self->symbolTable = old571;
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
    panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s645, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_expr->position)));
    panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, &$s647);
    ITable* $tmp649 = methods599->$class->itable;
    while ($tmp649->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp649 = $tmp649->next;
    }
    $fn651 $tmp650 = $tmp649->methods[0];
    panda$core$Object* $tmp652 = $tmp650(methods599, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp648, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp652)->value)->name);
    panda$core$String* $tmp655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp653, &$s654);
    panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp655, ((panda$core$Object*) best604));
    panda$core$String* $tmp658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp656, &$s657);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp658));
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
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s659);
            return NULL;
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp660 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, NULL);
            return $tmp660;
        }
        break;
        case 1024:
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, &$s661);
            return NULL;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$Type* $tmp662 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            org$pandalanguage$pandac$IRNode* $tmp663 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp662);
            return $tmp663;
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    bool $tmp664 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    if (!$tmp664) goto $l665;
    panda$core$Bit $tmp667 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_cl->rawSuper)->name, &$s666);
    $tmp664 = $tmp667.value;
    $l665:;
    panda$core$Bit $tmp668 = { $tmp664 };
    return $tmp668;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* result669;
    org$pandalanguage$pandac$ClassDecl* s677;
    panda$collections$Iterator* f$Iter680;
    org$pandalanguage$pandac$FieldDecl* f692;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$collections$Array* $tmp670 = (panda$collections$Array*) malloc(40);
    $tmp670->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp670->refCount.value = 1;
    panda$collections$Array$init($tmp670);
    result669 = $tmp670;
    panda$core$Bit $tmp673 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
    panda$core$Bit $tmp674 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp673);
    bool $tmp672 = $tmp674.value;
    if (!$tmp672) goto $l675;
    $tmp672 = ((panda$core$Bit) { p_cl->rawSuper != NULL }).value;
    $l675:;
    panda$core$Bit $tmp676 = { $tmp672 };
    if ($tmp676.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp678 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
        s677 = $tmp678;
        if (((panda$core$Bit) { s677 != NULL }).value) {
        {
            panda$collections$ListView* $tmp679 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self, s677);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(result669, ((panda$collections$CollectionView*) $tmp679));
        }
        }
    }
    }
    {
        ITable* $tmp681 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
        while ($tmp681->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp681 = $tmp681->next;
        }
        $fn683 $tmp682 = $tmp681->methods[0];
        panda$collections$Iterator* $tmp684 = $tmp682(((panda$collections$Iterable*) p_cl->fields));
        f$Iter680 = $tmp684;
        $l685:;
        ITable* $tmp687 = f$Iter680->$class->itable;
        while ($tmp687->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp687 = $tmp687->next;
        }
        $fn689 $tmp688 = $tmp687->methods[0];
        panda$core$Bit $tmp690 = $tmp688(f$Iter680);
        panda$core$Bit $tmp691 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp690);
        if (!$tmp691.value) goto $l686;
        {
            ITable* $tmp693 = f$Iter680->$class->itable;
            while ($tmp693->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp693 = $tmp693->next;
            }
            $fn695 $tmp694 = $tmp693->methods[1];
            panda$core$Object* $tmp696 = $tmp694(f$Iter680);
            f692 = ((org$pandalanguage$pandac$FieldDecl*) $tmp696);
            panda$core$Bit $tmp697 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f692->annotations);
            panda$core$Bit $tmp698 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp697);
            if ($tmp698.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result669, ((panda$core$Object*) f692));
            }
            }
        }
        goto $l685;
        $l686:;
    }
    return ((panda$collections$ListView*) result669);
}
panda$core$Bit org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_f) {
    panda$core$Bit$nullable result699;
    panda$core$Bit $tmp701;
    panda$core$Object* $tmp700 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->existenceCache, ((panda$collections$Key*) p_f));
    result699 = ($tmp700 != NULL ? ((panda$core$Bit$nullable) { ((panda$core$Bit$wrapper*) $tmp700)->value, true }) : (panda$core$Bit$nullable) { .nonnull = 0 });
    if (((panda$core$Bit) { !result699.nonnull }).value) {
    {
        panda$io$File$exists$R$panda$core$Bit(&$tmp701, p_f);
        result699 = ((panda$core$Bit$nullable) { $tmp701, true });
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->existenceCache, ((panda$collections$Key*) p_f), ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) result699.value))));
    }
    }
    return ((panda$core$Bit) result699.value);
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result702;
    panda$core$String* suffix704;
    panda$core$Bit found710;
    panda$collections$Iterator* dir$Iter711;
    panda$io$File* dir723;
    panda$io$File* f728;
    panda$core$String$Index$nullable index732;
    org$pandalanguage$pandac$ClassDecl* parent735;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp736;
    panda$core$Object* $tmp703 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result702 = ((org$pandalanguage$pandac$ClassDecl*) $tmp703);
    if (((panda$core$Bit) { result702 == NULL }).value) {
    {
        panda$core$String* $tmp707 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s705, &$s706);
        panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp707, &$s708);
        suffix704 = $tmp709;
        found710 = ((panda$core$Bit) { false });
        {
            ITable* $tmp712 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp712->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp712 = $tmp712->next;
            }
            $fn714 $tmp713 = $tmp712->methods[0];
            panda$collections$Iterator* $tmp715 = $tmp713(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter711 = $tmp715;
            $l716:;
            ITable* $tmp718 = dir$Iter711->$class->itable;
            while ($tmp718->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp718 = $tmp718->next;
            }
            $fn720 $tmp719 = $tmp718->methods[0];
            panda$core$Bit $tmp721 = $tmp719(dir$Iter711);
            panda$core$Bit $tmp722 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp721);
            if (!$tmp722.value) goto $l717;
            {
                ITable* $tmp724 = dir$Iter711->$class->itable;
                while ($tmp724->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp724 = $tmp724->next;
                }
                $fn726 $tmp725 = $tmp724->methods[1];
                panda$core$Object* $tmp727 = $tmp725(dir$Iter711);
                dir723 = ((panda$io$File*) $tmp727);
                panda$io$File* $tmp729 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir723, suffix704);
                f728 = $tmp729;
                panda$core$Bit $tmp730 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f728);
                if ($tmp730.value) {
                {
                    found710 = ((panda$core$Bit) { true });
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f728);
                    panda$core$Object* $tmp731 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result702 = ((org$pandalanguage$pandac$ClassDecl*) $tmp731);
                }
                }
            }
            goto $l716;
            $l717:;
        }
    }
    }
    if (((panda$core$Bit) { result702 == NULL }).value) {
    {
        panda$core$String$Index$nullable $tmp734 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p_fullName, &$s733);
        index732 = $tmp734;
        if (((panda$core$Bit) { index732.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp736, ((panda$core$String$Index$nullable) { .nonnull = false }), index732, ((panda$core$Bit) { false }));
            panda$core$String* $tmp737 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_fullName, $tmp736);
            org$pandalanguage$pandac$ClassDecl* $tmp738 = org$pandalanguage$pandac$Compiler$getClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp737);
            parent735 = $tmp738;
            if (((panda$core$Bit) { parent735 != NULL }).value) {
            {
                panda$core$Object* $tmp739 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                result702 = ((org$pandalanguage$pandac$ClassDecl*) $tmp739);
            }
            }
        }
        }
    }
    }
    return result702;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_fullName) {
    org$pandalanguage$pandac$ClassDecl* result740;
    panda$core$String* suffix742;
    panda$core$Bit found748;
    panda$collections$Iterator* dir$Iter749;
    panda$io$File* dir761;
    panda$io$File* f766;
    panda$core$Int64 oldErrorCount769;
    org$pandalanguage$pandac$Position $tmp775;
    panda$core$Object* $tmp741 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
    result740 = ((org$pandalanguage$pandac$ClassDecl*) $tmp741);
    if (((panda$core$Bit) { result740 == NULL }).value) {
    {
        panda$core$String* $tmp745 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_fullName, &$s743, &$s744);
        panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, &$s746);
        suffix742 = $tmp747;
        found748 = ((panda$core$Bit) { false });
        {
            ITable* $tmp750 = ((panda$collections$Iterable*) self->settings->importDirs)->$class->itable;
            while ($tmp750->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp750 = $tmp750->next;
            }
            $fn752 $tmp751 = $tmp750->methods[0];
            panda$collections$Iterator* $tmp753 = $tmp751(((panda$collections$Iterable*) self->settings->importDirs));
            dir$Iter749 = $tmp753;
            $l754:;
            ITable* $tmp756 = dir$Iter749->$class->itable;
            while ($tmp756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp756 = $tmp756->next;
            }
            $fn758 $tmp757 = $tmp756->methods[0];
            panda$core$Bit $tmp759 = $tmp757(dir$Iter749);
            panda$core$Bit $tmp760 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp759);
            if (!$tmp760.value) goto $l755;
            {
                ITable* $tmp762 = dir$Iter749->$class->itable;
                while ($tmp762->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp762 = $tmp762->next;
                }
                $fn764 $tmp763 = $tmp762->methods[1];
                panda$core$Object* $tmp765 = $tmp763(dir$Iter749);
                dir761 = ((panda$io$File*) $tmp765);
                panda$io$File* $tmp767 = panda$io$File$resolve$panda$core$String$R$panda$io$File(dir761, suffix742);
                f766 = $tmp767;
                panda$core$Bit $tmp768 = org$pandalanguage$pandac$Compiler$exists$panda$io$File$R$panda$core$Bit(self, f766);
                if ($tmp768.value) {
                {
                    found748 = ((panda$core$Bit) { true });
                    oldErrorCount769 = self->errorCount;
                    org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, f766);
                    panda$core$Object* $tmp770 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) p_fullName));
                    result740 = ((org$pandalanguage$pandac$ClassDecl*) $tmp770);
                    bool $tmp771 = ((panda$core$Bit) { result740 == NULL }).value;
                    if (!$tmp771) goto $l772;
                    panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, oldErrorCount769);
                    $tmp771 = $tmp773.value;
                    $l772:;
                    panda$core$Bit $tmp774 = { $tmp771 };
                    if ($tmp774.value) {
                    {
                        org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp775, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                        panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s776, ((panda$core$Object*) f766));
                        panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, &$s778);
                        panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp779, p_fullName);
                        panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp780, &$s781);
                        org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, f766, $tmp775, $tmp782);
                    }
                    }
                }
                }
            }
            goto $l754;
            $l755:;
        }
        panda$core$Bit $tmp783 = panda$core$Bit$$NOT$R$panda$core$Bit(found748);
        if ($tmp783.value) {
        {
            panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s784, suffix742);
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp785, &$s786);
            panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp787, ((panda$core$Object*) self->settings->importDirs));
            panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp788, &$s789);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp790);
        }
        }
    }
    }
    return result740;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$Type* type791;
    org$pandalanguage$pandac$ClassDecl* result798;
    org$pandalanguage$pandac$Annotations* annotations800;
    panda$collections$Array* supertypes806;
    panda$collections$Iterator* intf$Iter810;
    org$pandalanguage$pandac$Type* intf822;
    panda$collections$HashMap* aliases828;
    panda$core$Range$LTpanda$core$Int64$GT $tmp831;
    panda$collections$Iterator* m$Iter866;
    org$pandalanguage$pandac$MethodDecl* m878;
    panda$collections$Array* parameters883;
    panda$collections$Iterator* p$Iter886;
    org$pandalanguage$pandac$MethodDecl$Parameter* p898;
    org$pandalanguage$pandac$MethodDecl* clone906;
    panda$collections$Iterator* f$Iter910;
    org$pandalanguage$pandac$FieldDecl* f922;
    org$pandalanguage$pandac$FieldDecl* clone927;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    org$pandalanguage$pandac$Type* $tmp792 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type791 = $tmp792;
    panda$core$Bit $tmp793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type791->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp793.value) {
    {
        panda$core$Object* $tmp794 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type791->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl* $tmp795 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, p_cl, ((org$pandalanguage$pandac$Type*) $tmp794));
        return $tmp795;
    }
    }
    panda$core$Bit $tmp796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type791->typeKind, ((panda$core$Int64) { 10 }));
    if ($tmp796.value) {
    {
        return p_cl;
    }
    }
    panda$core$Bit $tmp797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(type791->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp797.value);
    panda$core$Object* $tmp799 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) type791)->name));
    result798 = ((org$pandalanguage$pandac$ClassDecl*) $tmp799);
    if (((panda$core$Bit) { result798 == NULL }).value) {
    {
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        org$pandalanguage$pandac$Annotations* $tmp801 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp801->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp801->refCount.value = 1;
        panda$core$Int64 $tmp803 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
        panda$core$Int64 $tmp804 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp803);
        panda$core$Int64 $tmp805 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(p_cl->annotations->flags, $tmp804);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp801, $tmp805);
        annotations800 = $tmp801;
        panda$collections$Array* $tmp807 = (panda$collections$Array*) malloc(40);
        $tmp807->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp807->refCount.value = 1;
        panda$collections$Array$init($tmp807);
        supertypes806 = $tmp807;
        org$pandalanguage$pandac$Type* $tmp809 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type791, p_cl->rawSuper);
        panda$collections$Array$add$panda$collections$Array$T(supertypes806, ((panda$core$Object*) $tmp809));
        {
            ITable* $tmp811 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp811->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp811 = $tmp811->next;
            }
            $fn813 $tmp812 = $tmp811->methods[0];
            panda$collections$Iterator* $tmp814 = $tmp812(((panda$collections$Iterable*) p_cl->rawInterfaces));
            intf$Iter810 = $tmp814;
            $l815:;
            ITable* $tmp817 = intf$Iter810->$class->itable;
            while ($tmp817->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp817 = $tmp817->next;
            }
            $fn819 $tmp818 = $tmp817->methods[0];
            panda$core$Bit $tmp820 = $tmp818(intf$Iter810);
            panda$core$Bit $tmp821 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp820);
            if (!$tmp821.value) goto $l816;
            {
                ITable* $tmp823 = intf$Iter810->$class->itable;
                while ($tmp823->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp823 = $tmp823->next;
                }
                $fn825 $tmp824 = $tmp823->methods[1];
                panda$core$Object* $tmp826 = $tmp824(intf$Iter810);
                intf822 = ((org$pandalanguage$pandac$Type*) $tmp826);
                org$pandalanguage$pandac$Type* $tmp827 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type791, intf822);
                panda$collections$Array$add$panda$collections$Array$T(supertypes806, ((panda$core$Object*) $tmp827));
            }
            goto $l815;
            $l816:;
        }
        panda$collections$HashMap* $tmp829 = (panda$collections$HashMap*) malloc(56);
        $tmp829->$class = (panda$core$Class*) &panda$collections$HashMap$class;
        $tmp829->refCount.value = 1;
        panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT($tmp829, p_cl->aliases);
        aliases828 = $tmp829;
        ITable* $tmp832 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp832->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp832 = $tmp832->next;
        }
        $fn834 $tmp833 = $tmp832->methods[0];
        panda$core$Int64 $tmp835 = $tmp833(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp831, ((panda$core$Int64) { 0 }), $tmp835, ((panda$core$Bit) { false }));
        int64_t $tmp837 = $tmp831.min.value;
        panda$core$Int64 i836 = { $tmp837 };
        int64_t $tmp839 = $tmp831.max.value;
        bool $tmp840 = $tmp831.inclusive.value;
        if ($tmp840) goto $l847; else goto $l848;
        $l847:;
        if ($tmp837 <= $tmp839) goto $l841; else goto $l843;
        $l848:;
        if ($tmp837 < $tmp839) goto $l841; else goto $l843;
        $l841:;
        {
            ITable* $tmp849 = ((panda$collections$ListView*) p_cl->parameters)->$class->itable;
            while ($tmp849->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp849 = $tmp849->next;
            }
            $fn851 $tmp850 = $tmp849->methods[0];
            panda$core$Object* $tmp852 = $tmp850(((panda$collections$ListView*) p_cl->parameters), i836);
            panda$core$Int64 $tmp853 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i836, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp854 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(type791->subtypes, $tmp853);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases828, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp852))->name), ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp854))->name));
        }
        $l844:;
        int64_t $tmp856 = $tmp839 - i836.value;
        if ($tmp840) goto $l857; else goto $l858;
        $l857:;
        if ($tmp856 >= 1) goto $l855; else goto $l843;
        $l858:;
        if ($tmp856 > 1) goto $l855; else goto $l843;
        $l855:;
        i836.value += 1;
        goto $l841;
        $l843:;
        org$pandalanguage$pandac$ClassDecl* $tmp861 = (org$pandalanguage$pandac$ClassDecl*) malloc(201);
        $tmp861->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
        $tmp861->refCount.value = 1;
        panda$collections$Array* $tmp863 = (panda$collections$Array*) malloc(40);
        $tmp863->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp863->refCount.value = 1;
        panda$collections$Array$init($tmp863);
        panda$core$Object* $tmp865 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp861, p_cl->source, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, ((panda$collections$MapView*) aliases828), p_cl->doccomment, annotations800, p_cl->classKind, ((org$pandalanguage$pandac$Symbol*) type791)->name, ((panda$collections$ListView*) supertypes806), $tmp863, ((org$pandalanguage$pandac$SymbolTable*) $tmp865));
        result798 = $tmp861;
        result798->external = ((panda$core$Bit) { false });
        {
            ITable* $tmp867 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp867->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp867 = $tmp867->next;
            }
            $fn869 $tmp868 = $tmp867->methods[0];
            panda$collections$Iterator* $tmp870 = $tmp868(((panda$collections$Iterable*) p_cl->methods));
            m$Iter866 = $tmp870;
            $l871:;
            ITable* $tmp873 = m$Iter866->$class->itable;
            while ($tmp873->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp873 = $tmp873->next;
            }
            $fn875 $tmp874 = $tmp873->methods[0];
            panda$core$Bit $tmp876 = $tmp874(m$Iter866);
            panda$core$Bit $tmp877 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp876);
            if (!$tmp877.value) goto $l872;
            {
                ITable* $tmp879 = m$Iter866->$class->itable;
                while ($tmp879->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp879 = $tmp879->next;
                }
                $fn881 $tmp880 = $tmp879->methods[1];
                panda$core$Object* $tmp882 = $tmp880(m$Iter866);
                m878 = ((org$pandalanguage$pandac$MethodDecl*) $tmp882);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m878);
                panda$collections$Array* $tmp884 = (panda$collections$Array*) malloc(40);
                $tmp884->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp884->refCount.value = 1;
                panda$collections$Array$init($tmp884);
                parameters883 = $tmp884;
                {
                    ITable* $tmp887 = ((panda$collections$Iterable*) m878->parameters)->$class->itable;
                    while ($tmp887->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp887 = $tmp887->next;
                    }
                    $fn889 $tmp888 = $tmp887->methods[0];
                    panda$collections$Iterator* $tmp890 = $tmp888(((panda$collections$Iterable*) m878->parameters));
                    p$Iter886 = $tmp890;
                    $l891:;
                    ITable* $tmp893 = p$Iter886->$class->itable;
                    while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp893 = $tmp893->next;
                    }
                    $fn895 $tmp894 = $tmp893->methods[0];
                    panda$core$Bit $tmp896 = $tmp894(p$Iter886);
                    panda$core$Bit $tmp897 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp896);
                    if (!$tmp897.value) goto $l892;
                    {
                        ITable* $tmp899 = p$Iter886->$class->itable;
                        while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp899 = $tmp899->next;
                        }
                        $fn901 $tmp900 = $tmp899->methods[1];
                        panda$core$Object* $tmp902 = $tmp900(p$Iter886);
                        p898 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp902);
                        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp903 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
                        $tmp903->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
                        $tmp903->refCount.value = 1;
                        org$pandalanguage$pandac$Type* $tmp905 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type791, p898->type);
                        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp903, p898->name, $tmp905);
                        panda$collections$Array$add$panda$collections$Array$T(parameters883, ((panda$core$Object*) $tmp903));
                    }
                    goto $l891;
                    $l892:;
                }
                org$pandalanguage$pandac$MethodDecl* $tmp907 = (org$pandalanguage$pandac$MethodDecl*) malloc(136);
                $tmp907->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
                $tmp907->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp909 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type791, m878->returnType);
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp907, result798, ((org$pandalanguage$pandac$Symbol*) m878)->position, m878->doccomment, m878->annotations, m878->methodKind, ((org$pandalanguage$pandac$Symbol*) m878)->name, parameters883, $tmp909, m878->body);
                clone906 = $tmp907;
                panda$collections$Array$add$panda$collections$Array$T(result798->methods, ((panda$core$Object*) clone906));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result798->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone906));
            }
            goto $l871;
            $l872:;
        }
        {
            ITable* $tmp911 = ((panda$collections$Iterable*) p_cl->fields)->$class->itable;
            while ($tmp911->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp911 = $tmp911->next;
            }
            $fn913 $tmp912 = $tmp911->methods[0];
            panda$collections$Iterator* $tmp914 = $tmp912(((panda$collections$Iterable*) p_cl->fields));
            f$Iter910 = $tmp914;
            $l915:;
            ITable* $tmp917 = f$Iter910->$class->itable;
            while ($tmp917->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp917 = $tmp917->next;
            }
            $fn919 $tmp918 = $tmp917->methods[0];
            panda$core$Bit $tmp920 = $tmp918(f$Iter910);
            panda$core$Bit $tmp921 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp920);
            if (!$tmp921.value) goto $l916;
            {
                ITable* $tmp923 = f$Iter910->$class->itable;
                while ($tmp923->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp923 = $tmp923->next;
                }
                $fn925 $tmp924 = $tmp923->methods[1];
                panda$core$Object* $tmp926 = $tmp924(f$Iter910);
                f922 = ((org$pandalanguage$pandac$FieldDecl*) $tmp926);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f922);
                org$pandalanguage$pandac$FieldDecl* $tmp928 = (org$pandalanguage$pandac$FieldDecl*) malloc(113);
                $tmp928->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
                $tmp928->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp930 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, type791, f922->type);
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp928, result798, ((org$pandalanguage$pandac$Symbol*) f922)->position, f922->doccomment, f922->annotations, f922->fieldKind, ((org$pandalanguage$pandac$Symbol*) f922)->name, $tmp930, f922->rawValue);
                clone927 = $tmp928;
                panda$collections$Array$add$panda$collections$Array$T(result798->fields, ((panda$core$Object*) clone927));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result798->symbolTable, ((org$pandalanguage$pandac$Symbol*) clone927));
            }
            goto $l915;
            $l916:;
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) result798)->name), ((panda$core$Object*) result798));
        panda$collections$Array$add$panda$collections$Array$T(self->compilationQueue, ((panda$core$Object*) result798));
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, result798);
    }
    }
    return result798;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$ClassDecl* result931;
    PANDA_ASSERT(p_type->resolved.value);
    switch (p_type->typeKind.value) {
        case 10:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp932 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) p_type)->position, ((org$pandalanguage$pandac$Symbol*) p_type)->name);
            result931 = $tmp932;
        }
        break;
        case 11:
        case 21:
        {
            panda$core$Object* $tmp933 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp934 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) $tmp933));
            result931 = $tmp934;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp935 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type->parameter->bound);
            return $tmp935;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$Bit $tmp936 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(result931->annotations);
    if ($tmp936.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp937 = org$pandalanguage$pandac$Compiler$specialize$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl(self, result931, p_type);
        result931 = $tmp937;
    }
    }
    return result931;
}
panda$collections$Set* org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl938;
    panda$collections$Set* result940;
    panda$collections$Iterator* intf$Iter945;
    org$pandalanguage$pandac$Type* intf957;
    org$pandalanguage$pandac$ClassDecl* $tmp939 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_t);
    cl938 = $tmp939;
    PANDA_ASSERT(((panda$core$Bit) { cl938 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl938);
    panda$collections$Set* $tmp941 = (panda$collections$Set*) malloc(24);
    $tmp941->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp941->refCount.value = 1;
    panda$collections$Set$init($tmp941);
    result940 = $tmp941;
    if (((panda$core$Bit) { cl938->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp943 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, cl938->rawSuper);
        panda$collections$Set* $tmp944 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp943);
        panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result940, ((panda$collections$CollectionView*) $tmp944));
    }
    }
    {
        ITable* $tmp946 = ((panda$collections$Iterable*) cl938->rawInterfaces)->$class->itable;
        while ($tmp946->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp946 = $tmp946->next;
        }
        $fn948 $tmp947 = $tmp946->methods[0];
        panda$collections$Iterator* $tmp949 = $tmp947(((panda$collections$Iterable*) cl938->rawInterfaces));
        intf$Iter945 = $tmp949;
        $l950:;
        ITable* $tmp952 = intf$Iter945->$class->itable;
        while ($tmp952->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp952 = $tmp952->next;
        }
        $fn954 $tmp953 = $tmp952->methods[0];
        panda$core$Bit $tmp955 = $tmp953(intf$Iter945);
        panda$core$Bit $tmp956 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp955);
        if (!$tmp956.value) goto $l951;
        {
            ITable* $tmp958 = intf$Iter945->$class->itable;
            while ($tmp958->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp958 = $tmp958->next;
            }
            $fn960 $tmp959 = $tmp958->methods[1];
            panda$core$Object* $tmp961 = $tmp959(intf$Iter945);
            intf957 = ((org$pandalanguage$pandac$Type*) $tmp961);
            org$pandalanguage$pandac$Type* $tmp962 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_t, intf957);
            panda$collections$Set* $tmp963 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, $tmp962);
            panda$collections$Set$addAll$panda$collections$CollectionView$LTpanda$collections$Set$T$GT(result940, ((panda$collections$CollectionView*) $tmp963));
        }
        goto $l950;
        $l951:;
    }
    panda$core$Bit $tmp964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl938->classKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp964.value) {
    {
        panda$collections$Set$add$panda$collections$Set$T(result940, ((panda$collections$Key*) p_t));
    }
    }
    return result940;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_t1, org$pandalanguage$pandac$Type* p_t2) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp970;
    panda$core$Bit $tmp965 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t1);
    PANDA_ASSERT($tmp965.value);
    panda$core$Bit $tmp966 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_t2);
    PANDA_ASSERT($tmp966.value);
    panda$core$Int64 $tmp967 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Int64 $tmp968 = panda$collections$Array$get_count$R$panda$core$Int64(p_t2->subtypes);
    panda$core$Bit $tmp969 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp967, $tmp968);
    if ($tmp969.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64 $tmp971 = panda$collections$Array$get_count$R$panda$core$Int64(p_t1->subtypes);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp970, ((panda$core$Int64) { 0 }), $tmp971, ((panda$core$Bit) { false }));
    int64_t $tmp973 = $tmp970.min.value;
    panda$core$Int64 i972 = { $tmp973 };
    int64_t $tmp975 = $tmp970.max.value;
    bool $tmp976 = $tmp970.inclusive.value;
    if ($tmp976) goto $l983; else goto $l984;
    $l983:;
    if ($tmp973 <= $tmp975) goto $l977; else goto $l979;
    $l984:;
    if ($tmp973 < $tmp975) goto $l977; else goto $l979;
    $l977:;
    {
        panda$core$Object* $tmp985 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t1->subtypes, i972);
        panda$core$Object* $tmp986 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t2->subtypes, i972);
        panda$core$Bit $tmp987 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp985), ((org$pandalanguage$pandac$Type*) $tmp986));
        if ($tmp987.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l980:;
    int64_t $tmp989 = $tmp975 - i972.value;
    if ($tmp976) goto $l990; else goto $l991;
    $l990:;
    if ($tmp989 >= 1) goto $l988; else goto $l979;
    $l991:;
    if ($tmp989 > 1) goto $l988; else goto $l979;
    $l988:;
    i972.value += 1;
    goto $l977;
    $l979:;
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_methodType, panda$core$Bit p_checkInterfaces) {
    org$pandalanguage$pandac$ClassDecl* cl994;
    panda$collections$Iterator* test$Iter996;
    org$pandalanguage$pandac$MethodDecl* test1008;
    panda$collections$Iterator* raw$Iter1021;
    org$pandalanguage$pandac$Type* raw1033;
    org$pandalanguage$pandac$MethodDecl* result1038;
    org$pandalanguage$pandac$ClassDecl* $tmp995 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_owner);
    cl994 = $tmp995;
    PANDA_ASSERT(((panda$core$Bit) { cl994 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl994);
    {
        ITable* $tmp997 = ((panda$collections$Iterable*) cl994->methods)->$class->itable;
        while ($tmp997->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp997 = $tmp997->next;
        }
        $fn999 $tmp998 = $tmp997->methods[0];
        panda$collections$Iterator* $tmp1000 = $tmp998(((panda$collections$Iterable*) cl994->methods));
        test$Iter996 = $tmp1000;
        $l1001:;
        ITable* $tmp1003 = test$Iter996->$class->itable;
        while ($tmp1003->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1003 = $tmp1003->next;
        }
        $fn1005 $tmp1004 = $tmp1003->methods[0];
        panda$core$Bit $tmp1006 = $tmp1004(test$Iter996);
        panda$core$Bit $tmp1007 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1006);
        if (!$tmp1007.value) goto $l1002;
        {
            ITable* $tmp1009 = test$Iter996->$class->itable;
            while ($tmp1009->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1009 = $tmp1009->next;
            }
            $fn1011 $tmp1010 = $tmp1009->methods[1];
            panda$core$Object* $tmp1012 = $tmp1010(test$Iter996);
            test1008 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1012);
            panda$core$Bit $tmp1013 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) test1008)->name, p_name);
            if ($tmp1013.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, test1008);
                org$pandalanguage$pandac$Type* $tmp1014 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, test1008);
                org$pandalanguage$pandac$Type* $tmp1015 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, $tmp1014);
                panda$core$Bit $tmp1016 = org$pandalanguage$pandac$Compiler$signatureMatch$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, $tmp1015, p_methodType);
                if ($tmp1016.value) {
                {
                    return test1008;
                }
                }
            }
            }
        }
        goto $l1001;
        $l1002:;
    }
    bool $tmp1017 = p_checkInterfaces.value;
    if ($tmp1017) goto $l1018;
    panda$core$Bit $tmp1019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl994->classKind->$rawValue, ((panda$core$Int64) { 1 }));
    $tmp1017 = $tmp1019.value;
    $l1018:;
    panda$core$Bit $tmp1020 = { $tmp1017 };
    if ($tmp1020.value) {
    {
        {
            ITable* $tmp1022 = ((panda$collections$Iterable*) cl994->rawInterfaces)->$class->itable;
            while ($tmp1022->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1022 = $tmp1022->next;
            }
            $fn1024 $tmp1023 = $tmp1022->methods[0];
            panda$collections$Iterator* $tmp1025 = $tmp1023(((panda$collections$Iterable*) cl994->rawInterfaces));
            raw$Iter1021 = $tmp1025;
            $l1026:;
            ITable* $tmp1028 = raw$Iter1021->$class->itable;
            while ($tmp1028->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1028 = $tmp1028->next;
            }
            $fn1030 $tmp1029 = $tmp1028->methods[0];
            panda$core$Bit $tmp1031 = $tmp1029(raw$Iter1021);
            panda$core$Bit $tmp1032 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1031);
            if (!$tmp1032.value) goto $l1027;
            {
                ITable* $tmp1034 = raw$Iter1021->$class->itable;
                while ($tmp1034->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1034 = $tmp1034->next;
                }
                $fn1036 $tmp1035 = $tmp1034->methods[1];
                panda$core$Object* $tmp1037 = $tmp1035(raw$Iter1021);
                raw1033 = ((org$pandalanguage$pandac$Type*) $tmp1037);
                org$pandalanguage$pandac$Type* $tmp1039 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, raw1033);
                org$pandalanguage$pandac$MethodDecl* $tmp1040 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1039, p_name, p_methodType, p_checkInterfaces);
                result1038 = $tmp1040;
                if (((panda$core$Bit) { result1038 != NULL }).value) {
                {
                    return result1038;
                }
                }
            }
            goto $l1026;
            $l1027:;
        }
    }
    }
    if (((panda$core$Bit) { cl994->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1041 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_owner, cl994->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1042 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1041, p_name, p_methodType, p_checkInterfaces);
        return $tmp1042;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* methodType1044;
    org$pandalanguage$pandac$Type* owner1046;
    panda$collections$Iterator* raw$Iter1048;
    org$pandalanguage$pandac$Type* raw1060;
    org$pandalanguage$pandac$MethodDecl* result1065;
    org$pandalanguage$pandac$MethodDecl* result1068;
    if (p_m->overrideKnown.value) {
    {
        return p_m->overridden;
    }
    }
    panda$core$Bit $tmp1043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1043.value) {
    {
        p_m->overrideKnown = ((panda$core$Bit) { true });
        return NULL;
    }
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    org$pandalanguage$pandac$Type* $tmp1045 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
    methodType1044 = $tmp1045;
    org$pandalanguage$pandac$Type* $tmp1047 = org$pandalanguage$pandac$ClassDecl$typeWithParameters$R$org$pandalanguage$pandac$Type(p_m->owner);
    owner1046 = $tmp1047;
    {
        ITable* $tmp1049 = ((panda$collections$Iterable*) p_m->owner->rawInterfaces)->$class->itable;
        while ($tmp1049->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1049 = $tmp1049->next;
        }
        $fn1051 $tmp1050 = $tmp1049->methods[0];
        panda$collections$Iterator* $tmp1052 = $tmp1050(((panda$collections$Iterable*) p_m->owner->rawInterfaces));
        raw$Iter1048 = $tmp1052;
        $l1053:;
        ITable* $tmp1055 = raw$Iter1048->$class->itable;
        while ($tmp1055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1055 = $tmp1055->next;
        }
        $fn1057 $tmp1056 = $tmp1055->methods[0];
        panda$core$Bit $tmp1058 = $tmp1056(raw$Iter1048);
        panda$core$Bit $tmp1059 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1058);
        if (!$tmp1059.value) goto $l1054;
        {
            ITable* $tmp1061 = raw$Iter1048->$class->itable;
            while ($tmp1061->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1061 = $tmp1061->next;
            }
            $fn1063 $tmp1062 = $tmp1061->methods[1];
            panda$core$Object* $tmp1064 = $tmp1062(raw$Iter1048);
            raw1060 = ((org$pandalanguage$pandac$Type*) $tmp1064);
            org$pandalanguage$pandac$Type* $tmp1066 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1046, raw1060);
            org$pandalanguage$pandac$MethodDecl* $tmp1067 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1066, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1044, ((panda$core$Bit) { true }));
            result1065 = $tmp1067;
            if (((panda$core$Bit) { result1065 != NULL }).value) {
            {
                p_m->overrideKnown = ((panda$core$Bit) { true });
                p_m->overridden = result1065;
                return result1065;
            }
            }
        }
        goto $l1053;
        $l1054:;
    }
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
    if (((panda$core$Bit) { p_m->owner->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1069 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, owner1046, p_m->owner->rawSuper);
        org$pandalanguage$pandac$MethodDecl* $tmp1070 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1069, ((org$pandalanguage$pandac$Symbol*) p_m)->name, methodType1044, ((panda$core$Bit) { true }));
        result1068 = $tmp1070;
        p_m->overrideKnown = ((panda$core$Bit) { true });
        p_m->overridden = result1068;
        return result1068;
    }
    }
    p_m->overrideKnown = ((panda$core$Bit) { true });
    return NULL;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Type* p_intf) {
    org$pandalanguage$pandac$ClassDecl* intfClass1071;
    panda$collections$Array* result1073;
    panda$collections$Iterator* m$Iter1076;
    org$pandalanguage$pandac$MethodDecl* m1088;
    org$pandalanguage$pandac$MethodDecl* found1093;
    org$pandalanguage$pandac$ClassDecl* $tmp1072 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_intf);
    intfClass1071 = $tmp1072;
    PANDA_ASSERT(((panda$core$Bit) { intfClass1071 != NULL }).value);
    panda$collections$Array* $tmp1074 = (panda$collections$Array*) malloc(40);
    $tmp1074->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1074->refCount.value = 1;
    panda$collections$Array$init($tmp1074);
    result1073 = $tmp1074;
    {
        ITable* $tmp1077 = ((panda$collections$Iterable*) intfClass1071->methods)->$class->itable;
        while ($tmp1077->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1077 = $tmp1077->next;
        }
        $fn1079 $tmp1078 = $tmp1077->methods[0];
        panda$collections$Iterator* $tmp1080 = $tmp1078(((panda$collections$Iterable*) intfClass1071->methods));
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
            org$pandalanguage$pandac$Type* $tmp1094 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            org$pandalanguage$pandac$Type* $tmp1095 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, m1088);
            org$pandalanguage$pandac$Type* $tmp1096 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_intf, $tmp1095);
            org$pandalanguage$pandac$MethodDecl* $tmp1097 = org$pandalanguage$pandac$Compiler$findMethod$org$pandalanguage$pandac$Type$panda$core$String$org$pandalanguage$pandac$Type$panda$core$Bit$R$org$pandalanguage$pandac$MethodDecl$Q(self, $tmp1094, ((org$pandalanguage$pandac$Symbol*) m1088)->name, $tmp1096, ((panda$core$Bit) { false }));
            found1093 = $tmp1097;
            PANDA_ASSERT(((panda$core$Bit) { found1093 != NULL }).value);
            panda$collections$Array$add$panda$collections$Array$T(result1073, ((panda$core$Object*) found1093));
        }
        goto $l1081;
        $l1082:;
    }
    return ((panda$collections$ListView*) result1073);
}
org$pandalanguage$pandac$SymbolTable* org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1099;
    panda$collections$Iterator* rawIntf$Iter1102;
    org$pandalanguage$pandac$Type* rawIntf1114;
    org$pandalanguage$pandac$ClassDecl* intf1119;
    panda$core$Bit $tmp1098 = panda$core$Bit$$NOT$R$panda$core$Bit(p_cl->symbolTableResolved);
    if ($tmp1098.value) {
    {
        p_cl->symbolTableResolved = ((panda$core$Bit) { true });
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1100 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1099 = $tmp1100;
            if (((panda$core$Bit) { superCl1099 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable* $tmp1101 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, superCl1099);
                panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1101));
            }
            }
        }
        }
        {
            ITable* $tmp1103 = ((panda$collections$Iterable*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1103->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1103 = $tmp1103->next;
            }
            $fn1105 $tmp1104 = $tmp1103->methods[0];
            panda$collections$Iterator* $tmp1106 = $tmp1104(((panda$collections$Iterable*) p_cl->rawInterfaces));
            rawIntf$Iter1102 = $tmp1106;
            $l1107:;
            ITable* $tmp1109 = rawIntf$Iter1102->$class->itable;
            while ($tmp1109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1109 = $tmp1109->next;
            }
            $fn1111 $tmp1110 = $tmp1109->methods[0];
            panda$core$Bit $tmp1112 = $tmp1110(rawIntf$Iter1102);
            panda$core$Bit $tmp1113 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1112);
            if (!$tmp1113.value) goto $l1108;
            {
                ITable* $tmp1115 = rawIntf$Iter1102->$class->itable;
                while ($tmp1115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1115 = $tmp1115->next;
                }
                $fn1117 $tmp1116 = $tmp1115->methods[1];
                panda$core$Object* $tmp1118 = $tmp1116(rawIntf$Iter1102);
                rawIntf1114 = ((org$pandalanguage$pandac$Type*) $tmp1118);
                org$pandalanguage$pandac$ClassDecl* $tmp1120 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, rawIntf1114);
                intf1119 = $tmp1120;
                if (((panda$core$Bit) { intf1119 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable* $tmp1121 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, intf1119);
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->symbolTable->parents, ((panda$core$Object*) $tmp1121));
                }
                }
            }
            goto $l1107;
            $l1108:;
        }
    }
    }
    return p_cl->symbolTable;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* superCl1124;
    panda$collections$Iterator* derived$Iter1127;
    org$pandalanguage$pandac$MethodDecl* derived1139;
    panda$core$Bit found1149;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1150;
    org$pandalanguage$pandac$MethodDecl* base1165;
    panda$core$Int64 $tmp1122 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
    panda$core$Bit $tmp1123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1122, ((panda$core$Int64) { 0 }));
    if ($tmp1123.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1125 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->rawSuper);
            superCl1124 = $tmp1125;
            if (((panda$core$Bit) { superCl1124 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
                return ((panda$collections$ListView*) p_cl->virtualMethods);
            }
            }
            panda$collections$ListView* $tmp1126 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self, superCl1124);
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_cl->virtualMethods, ((panda$collections$CollectionView*) $tmp1126));
        }
        }
        {
            ITable* $tmp1128 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
            while ($tmp1128->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1128 = $tmp1128->next;
            }
            $fn1130 $tmp1129 = $tmp1128->methods[0];
            panda$collections$Iterator* $tmp1131 = $tmp1129(((panda$collections$Iterable*) p_cl->methods));
            derived$Iter1127 = $tmp1131;
            $l1132:;
            ITable* $tmp1134 = derived$Iter1127->$class->itable;
            while ($tmp1134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1134 = $tmp1134->next;
            }
            $fn1136 $tmp1135 = $tmp1134->methods[0];
            panda$core$Bit $tmp1137 = $tmp1135(derived$Iter1127);
            panda$core$Bit $tmp1138 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1137);
            if (!$tmp1138.value) goto $l1133;
            {
                ITable* $tmp1140 = derived$Iter1127->$class->itable;
                while ($tmp1140->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1140 = $tmp1140->next;
                }
                $fn1142 $tmp1141 = $tmp1140->methods[1];
                panda$core$Object* $tmp1143 = $tmp1141(derived$Iter1127);
                derived1139 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1143);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, derived1139);
                panda$core$Bit $tmp1145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(derived1139->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
                bool $tmp1144 = $tmp1145.value;
                if ($tmp1144) goto $l1146;
                panda$core$Bit $tmp1147 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(derived1139->annotations);
                $tmp1144 = $tmp1147.value;
                $l1146:;
                panda$core$Bit $tmp1148 = { $tmp1144 };
                if ($tmp1148.value) {
                {
                    goto $l1132;
                }
                }
                found1149 = ((panda$core$Bit) { false });
                panda$core$Int64 $tmp1151 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->virtualMethods);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1150, ((panda$core$Int64) { 0 }), $tmp1151, ((panda$core$Bit) { false }));
                int64_t $tmp1153 = $tmp1150.min.value;
                panda$core$Int64 i1152 = { $tmp1153 };
                int64_t $tmp1155 = $tmp1150.max.value;
                bool $tmp1156 = $tmp1150.inclusive.value;
                if ($tmp1156) goto $l1163; else goto $l1164;
                $l1163:;
                if ($tmp1153 <= $tmp1155) goto $l1157; else goto $l1159;
                $l1164:;
                if ($tmp1153 < $tmp1155) goto $l1157; else goto $l1159;
                $l1157:;
                {
                    panda$core$Object* $tmp1166 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cl->virtualMethods, i1152);
                    base1165 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1166);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, base1165);
                    panda$core$Bit $tmp1167 = org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(derived1139, base1165);
                    if ($tmp1167.value) {
                    {
                        found1149 = ((panda$core$Bit) { true });
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p_cl->virtualMethods, i1152, ((panda$core$Object*) derived1139));
                        goto $l1159;
                    }
                    }
                }
                $l1160:;
                int64_t $tmp1169 = $tmp1155 - i1152.value;
                if ($tmp1156) goto $l1170; else goto $l1171;
                $l1170:;
                if ($tmp1169 >= 1) goto $l1168; else goto $l1159;
                $l1171:;
                if ($tmp1169 > 1) goto $l1168; else goto $l1159;
                $l1168:;
                i1152.value += 1;
                goto $l1157;
                $l1159:;
                panda$core$Bit $tmp1174 = panda$core$Bit$$NOT$R$panda$core$Bit(found1149);
                if ($tmp1174.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->virtualMethods, ((panda$core$Object*) derived1139));
                }
                }
            }
            goto $l1132;
            $l1133:;
        }
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    }
    }
    return ((panda$collections$ListView*) p_cl->virtualMethods);
}
void org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, panda$core$String* p_name, panda$collections$Array* p_result, panda$collections$ListView* p_types) {
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$SymbolTable* p_st, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_types) {
    panda$collections$Array* methods1175;
    org$pandalanguage$pandac$Symbol* s1178;
    panda$collections$Iterator* m$Iter1184;
    org$pandalanguage$pandac$MethodDecl* m1196;
    panda$collections$Iterator* p$Iter1203;
    org$pandalanguage$pandac$SymbolTable* p1215;
    panda$collections$Array* children1220;
    panda$collections$Array* types1232;
    panda$collections$Iterator* m$Iter1235;
    org$pandalanguage$pandac$MethodRef* m1247;
    panda$collections$Array* $tmp1176 = (panda$collections$Array*) malloc(40);
    $tmp1176->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1176->refCount.value = 1;
    panda$collections$Array$init($tmp1176);
    methods1175 = $tmp1176;
    org$pandalanguage$pandac$Symbol* $tmp1179 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(p_st, p_name);
    s1178 = $tmp1179;
    PANDA_ASSERT(((panda$core$Bit) { s1178 != NULL }).value);
    panda$core$Bit $tmp1180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1178->kind, ((panda$core$Int64) { 204 }));
    if ($tmp1180.value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, ((org$pandalanguage$pandac$MethodDecl*) s1178));
        org$pandalanguage$pandac$MethodRef* $tmp1181 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
        $tmp1181->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
        $tmp1181->refCount.value = 1;
        org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1181, ((org$pandalanguage$pandac$MethodDecl*) s1178), p_types);
        panda$collections$Array$add$panda$collections$Array$T(methods1175, ((panda$core$Object*) $tmp1181));
    }
    }
    else {
    {
        panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(s1178->kind, ((panda$core$Int64) { 205 }));
        PANDA_ASSERT($tmp1183.value);
        {
            ITable* $tmp1185 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1178)->methods)->$class->itable;
            while ($tmp1185->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1185 = $tmp1185->next;
            }
            $fn1187 $tmp1186 = $tmp1185->methods[0];
            panda$collections$Iterator* $tmp1188 = $tmp1186(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s1178)->methods));
            m$Iter1184 = $tmp1188;
            $l1189:;
            ITable* $tmp1191 = m$Iter1184->$class->itable;
            while ($tmp1191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1191 = $tmp1191->next;
            }
            $fn1193 $tmp1192 = $tmp1191->methods[0];
            panda$core$Bit $tmp1194 = $tmp1192(m$Iter1184);
            panda$core$Bit $tmp1195 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1194);
            if (!$tmp1195.value) goto $l1190;
            {
                ITable* $tmp1197 = m$Iter1184->$class->itable;
                while ($tmp1197->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1197 = $tmp1197->next;
                }
                $fn1199 $tmp1198 = $tmp1197->methods[1];
                panda$core$Object* $tmp1200 = $tmp1198(m$Iter1184);
                m1196 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1200);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1196);
                org$pandalanguage$pandac$MethodRef* $tmp1201 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp1201->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp1201->refCount.value = 1;
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1201, m1196, p_types);
                panda$collections$Array$add$panda$collections$Array$T(methods1175, ((panda$core$Object*) $tmp1201));
            }
            goto $l1189;
            $l1190:;
        }
    }
    }
    {
        ITable* $tmp1204 = ((panda$collections$Iterable*) p_st->parents)->$class->itable;
        while ($tmp1204->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1204 = $tmp1204->next;
        }
        $fn1206 $tmp1205 = $tmp1204->methods[0];
        panda$collections$Iterator* $tmp1207 = $tmp1205(((panda$collections$Iterable*) p_st->parents));
        p$Iter1203 = $tmp1207;
        $l1208:;
        ITable* $tmp1210 = p$Iter1203->$class->itable;
        while ($tmp1210->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1210 = $tmp1210->next;
        }
        $fn1212 $tmp1211 = $tmp1210->methods[0];
        panda$core$Bit $tmp1213 = $tmp1211(p$Iter1203);
        panda$core$Bit $tmp1214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1213);
        if (!$tmp1214.value) goto $l1209;
        {
            ITable* $tmp1216 = p$Iter1203->$class->itable;
            while ($tmp1216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1216 = $tmp1216->next;
            }
            $fn1218 $tmp1217 = $tmp1216->methods[1];
            panda$core$Object* $tmp1219 = $tmp1217(p$Iter1203);
            p1215 = ((org$pandalanguage$pandac$SymbolTable*) $tmp1219);
            org$pandalanguage$pandac$Compiler$addInheritedMethods$org$pandalanguage$pandac$SymbolTable$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p1215, p_name, methods1175, p_types);
        }
        goto $l1208;
        $l1209:;
    }
    panda$collections$Array* $tmp1221 = (panda$collections$Array*) malloc(40);
    $tmp1221->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1221->refCount.value = 1;
    panda$collections$Array$init($tmp1221);
    children1220 = $tmp1221;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children1220, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp1223 = panda$collections$Array$get_count$R$panda$core$Int64(methods1175);
    panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1223, ((panda$core$Int64) { 1 }));
    if ($tmp1224.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp1225 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1225->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1225->refCount.value = 1;
        panda$core$Object* $tmp1227 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1175, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp1228 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$MethodRef*) $tmp1227));
        panda$core$Object* $tmp1229 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods1175, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1225, ((panda$core$Int64) { 1002 }), p_position, $tmp1228, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodRef*) $tmp1229)), ((panda$collections$ListView*) children1220));
        return $tmp1225;
    }
    }
    else {
    {
        panda$core$Int64 $tmp1230 = panda$collections$Array$get_count$R$panda$core$Int64(methods1175);
        panda$core$Bit $tmp1231 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1230, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp1231.value);
        panda$collections$Array* $tmp1233 = (panda$collections$Array*) malloc(40);
        $tmp1233->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1233->refCount.value = 1;
        panda$collections$Array$init($tmp1233);
        types1232 = $tmp1233;
        {
            ITable* $tmp1236 = ((panda$collections$Iterable*) methods1175)->$class->itable;
            while ($tmp1236->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1236 = $tmp1236->next;
            }
            $fn1238 $tmp1237 = $tmp1236->methods[0];
            panda$collections$Iterator* $tmp1239 = $tmp1237(((panda$collections$Iterable*) methods1175));
            m$Iter1235 = $tmp1239;
            $l1240:;
            ITable* $tmp1242 = m$Iter1235->$class->itable;
            while ($tmp1242->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1242 = $tmp1242->next;
            }
            $fn1244 $tmp1243 = $tmp1242->methods[0];
            panda$core$Bit $tmp1245 = $tmp1243(m$Iter1235);
            panda$core$Bit $tmp1246 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1245);
            if (!$tmp1246.value) goto $l1241;
            {
                ITable* $tmp1248 = m$Iter1235->$class->itable;
                while ($tmp1248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1248 = $tmp1248->next;
                }
                $fn1250 $tmp1249 = $tmp1248->methods[1];
                panda$core$Object* $tmp1251 = $tmp1249(m$Iter1235);
                m1247 = ((org$pandalanguage$pandac$MethodRef*) $tmp1251);
                org$pandalanguage$pandac$Type* $tmp1252 = org$pandalanguage$pandac$MethodRef$type$R$org$pandalanguage$pandac$Type(m1247);
                panda$collections$Array$add$panda$collections$Array$T(types1232, ((panda$core$Object*) $tmp1252));
            }
            goto $l1240;
            $l1241:;
        }
        org$pandalanguage$pandac$IRNode* $tmp1253 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp1253->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp1253->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1255 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp1255->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp1255->refCount.value = 1;
        org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1255, ((panda$collections$ListView*) types1232));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1253, ((panda$core$Int64) { 1003 }), p_position, $tmp1255, ((panda$core$Object*) methods1175), ((panda$collections$ListView*) children1220));
        return $tmp1253;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$Symbol* p_s, org$pandalanguage$pandac$SymbolTable* p_st) {
    org$pandalanguage$pandac$ClassDecl* cl1257;
    org$pandalanguage$pandac$FieldDecl* f1273;
    panda$collections$Array* children1276;
    org$pandalanguage$pandac$Type* effectiveType1281;
    org$pandalanguage$pandac$IRNode* result1286;
    switch (p_s->kind.value) {
        case 200:
        {
            PANDA_ASSERT(((panda$core$Bit) { p_target == NULL }).value);
            org$pandalanguage$pandac$ClassDecl* $tmp1258 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Position$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_position, ((org$pandalanguage$pandac$Alias*) p_s)->fullName);
            cl1257 = $tmp1258;
            if (((panda$core$Bit) { cl1257 != NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1259 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1257);
                org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, cl1257, $tmp1259);
                org$pandalanguage$pandac$IRNode* $tmp1260 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1260->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1260->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1262 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1263 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl1257);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1260, ((panda$core$Int64) { 1001 }), p_position, $tmp1262, $tmp1263);
                return $tmp1260;
            }
            }
            return NULL;
        }
        break;
        case 201:
        {
            org$pandalanguage$pandac$Type* $tmp1264 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$Compiler$checkGenericParameters$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$ClassDecl*) p_s), $tmp1264);
            org$pandalanguage$pandac$IRNode* $tmp1265 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1265->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1265->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1267 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1268 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) p_s));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1265, ((panda$core$Int64) { 1001 }), p_position, $tmp1267, $tmp1268);
            return $tmp1265;
        }
        break;
        case 204:
        case 205:
        {
            panda$collections$ListView* $tmp1269 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target);
            org$pandalanguage$pandac$IRNode* $tmp1270 = org$pandalanguage$pandac$Compiler$getMethodReference$org$pandalanguage$pandac$SymbolTable$org$pandalanguage$pandac$IRNode$Q$panda$core$String$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$IRNode(self, p_st, p_target, p_s->name, p_position, $tmp1269);
            return $tmp1270;
        }
        break;
        case 208:
        {
            org$pandalanguage$pandac$IRNode* $tmp1271 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1271->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1271->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp1271, ((panda$core$Int64) { 1016 }), p_position, ((org$pandalanguage$pandac$Variable*) p_s)->type, ((org$pandalanguage$pandac$Variable*) p_s));
            return $tmp1271;
        }
        break;
        case 202:
        {
            f1273 = ((org$pandalanguage$pandac$FieldDecl*) p_s);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f1273);
            org$pandalanguage$pandac$Type* $tmp1274 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1275 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(f1273->type, $tmp1274);
            if ($tmp1275.value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1277 = (panda$collections$Array*) malloc(40);
            $tmp1277->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1277->refCount.value = 1;
            panda$collections$Array$init($tmp1277);
            children1276 = $tmp1277;
            if (((panda$core$Bit) { p_target != NULL }).value) {
            {
                panda$core$Bit $tmp1279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
                if ($tmp1279.value) {
                {
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, &$s1280);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1282 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_target->type, f1273->type);
                effectiveType1281 = $tmp1282;
                panda$core$Bit $tmp1283 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f1273->annotations);
                if ($tmp1283.value) {
                {
                    panda$collections$Array$add$panda$collections$Array$T(children1276, ((panda$core$Object*) p_target));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp1284 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(f1273->owner);
                    org$pandalanguage$pandac$IRNode* $tmp1285 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, $tmp1284);
                    panda$collections$Array$add$panda$collections$Array$T(children1276, ((panda$core$Object*) $tmp1285));
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1287 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1287->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1287->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1287, ((panda$core$Int64) { 1026 }), p_position, f1273->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1276));
                result1286 = $tmp1287;
                panda$core$Bit $tmp1289 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(effectiveType1281, result1286->type);
                if ($tmp1289.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1290 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result1286, p_position, ((panda$core$Bit) { false }), effectiveType1281);
                    result1286 = $tmp1290;
                }
                }
                return result1286;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp1291 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1291->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1291->refCount.value = 1;
                panda$core$Object* $tmp1293 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp1294 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp1293));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1291, ((panda$core$Int64) { 1025 }), p_position, $tmp1294);
                panda$collections$Array$add$panda$collections$Array$T(children1276, ((panda$core$Object*) $tmp1291));
                org$pandalanguage$pandac$IRNode* $tmp1295 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1295->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1295->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1295, ((panda$core$Int64) { 1026 }), p_position, f1273->type, ((panda$core$Object*) p_s), ((panda$collections$ListView*) children1276));
                return $tmp1295;
            }
            }
        }
        break;
        case 209:
        {
            org$pandalanguage$pandac$IRNode* $tmp1297 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1297->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1297->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1299 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Symbol($tmp1297, ((panda$core$Int64) { 1046 }), p_position, $tmp1299, p_s);
            return $tmp1297;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_context, org$pandalanguage$pandac$Type* p_raw) {
    panda$collections$HashMap* typeMap1306;
    org$pandalanguage$pandac$Type* base1309;
    org$pandalanguage$pandac$ClassDecl* cl1311;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1313;
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
            panda$core$Int64 $tmp1300 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1300, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1301.value);
            panda$core$Object* $tmp1302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp1303 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp1302), p_raw);
            return $tmp1303;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp1304 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Bit $tmp1305 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1304, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1305.value);
            panda$collections$HashMap* $tmp1307 = (panda$collections$HashMap*) malloc(56);
            $tmp1307->$class = (panda$core$Class*) &panda$collections$HashMap$class;
            $tmp1307->refCount.value = 1;
            panda$collections$HashMap$init($tmp1307);
            typeMap1306 = $tmp1307;
            panda$core$Object* $tmp1310 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, ((panda$core$Int64) { 0 }));
            base1309 = ((org$pandalanguage$pandac$Type*) $tmp1310);
            org$pandalanguage$pandac$ClassDecl* $tmp1312 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Symbol*) base1309)->name);
            cl1311 = $tmp1312;
            PANDA_ASSERT(((panda$core$Bit) { cl1311 != NULL }).value);
            panda$core$Int64 $tmp1314 = panda$collections$Array$get_count$R$panda$core$Int64(p_context->subtypes);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1313, ((panda$core$Int64) { 1 }), $tmp1314, ((panda$core$Bit) { false }));
            int64_t $tmp1316 = $tmp1313.min.value;
            panda$core$Int64 i1315 = { $tmp1316 };
            int64_t $tmp1318 = $tmp1313.max.value;
            bool $tmp1319 = $tmp1313.inclusive.value;
            if ($tmp1319) goto $l1326; else goto $l1327;
            $l1326:;
            if ($tmp1316 <= $tmp1318) goto $l1320; else goto $l1322;
            $l1327:;
            if ($tmp1316 < $tmp1318) goto $l1320; else goto $l1322;
            $l1320:;
            {
                panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl1311)->name, &$s1328);
                panda$core$Int64 $tmp1330 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1315, ((panda$core$Int64) { 1 }));
                ITable* $tmp1331 = ((panda$collections$ListView*) cl1311->parameters)->$class->itable;
                while ($tmp1331->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1331 = $tmp1331->next;
                }
                $fn1333 $tmp1332 = $tmp1331->methods[0];
                panda$core$Object* $tmp1334 = $tmp1332(((panda$collections$ListView*) cl1311->parameters), $tmp1330);
                panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1334))->name);
                panda$core$Object* $tmp1336 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_context->subtypes, i1315);
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(typeMap1306, ((panda$collections$Key*) $tmp1335), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1336)));
            }
            $l1323:;
            int64_t $tmp1338 = $tmp1318 - i1315.value;
            if ($tmp1319) goto $l1339; else goto $l1340;
            $l1339:;
            if ($tmp1338 >= 1) goto $l1337; else goto $l1322;
            $l1340:;
            if ($tmp1338 > 1) goto $l1337; else goto $l1322;
            $l1337:;
            i1315.value += 1;
            goto $l1320;
            $l1322:;
            org$pandalanguage$pandac$Type* $tmp1343 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type(p_raw, typeMap1306);
            return $tmp1343;
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
    panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp1344.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1345 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        return $tmp1345;
    }
    }
    panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 26 }));
    if ($tmp1346.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1347 = org$pandalanguage$pandac$Type$Real64$R$org$pandalanguage$pandac$Type();
        return $tmp1347;
    }
    }
    org$pandalanguage$pandac$Type* $tmp1348 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1349 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1348);
    if ($tmp1349.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        return $tmp1350;
    }
    }
    panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1351.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
        return $tmp1352;
    }
    }
    return p_type;
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char) {
    panda$core$Int32 c1356;
    panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_char->kind, ((panda$core$Int64) { 1033 }));
    PANDA_ASSERT($tmp1353.value);
    panda$core$Int64 $tmp1354 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_char->payload));
    panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1354, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1355.value);
    panda$core$Char32 $tmp1357 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_char->payload), ((panda$core$Int64) { 0 }));
    panda$core$Int32 $tmp1358 = panda$core$Char32$convert$R$panda$core$Int32($tmp1357);
    c1356 = $tmp1358;
    panda$core$Bit $tmp1359 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1356, ((panda$core$Int32) { 255 }));
    if ($tmp1359.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1360 = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(c1356, ((panda$core$Int32) { 65535 }));
    if ($tmp1360.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    return ((panda$core$Int64) { 32 });
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_char, org$pandalanguage$pandac$IRNode* p_other) {
    panda$core$Int64 result1361;
    org$pandalanguage$pandac$Type* $match$1044_91371;
    panda$core$Int64 $tmp1362 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_char);
    result1361 = $tmp1362;
    panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_other->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1363 = $tmp1364.value;
    if (!$tmp1363) goto $l1365;
    panda$core$Int64 $tmp1366 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_other->payload));
    panda$core$Bit $tmp1367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1366, ((panda$core$Int64) { 1 }));
    $tmp1363 = $tmp1367.value;
    $l1365:;
    panda$core$Bit $tmp1368 = { $tmp1363 };
    if ($tmp1368.value) {
    {
        panda$core$Int64 $tmp1369 = org$pandalanguage$pandac$Compiler$smallestCharSize$org$pandalanguage$pandac$IRNode$R$panda$core$Int64(self, p_other);
        panda$core$Int64 $tmp1370 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1361, $tmp1369);
        result1361 = $tmp1370;
    }
    }
    {
        $match$1044_91371 = p_other->type;
        org$pandalanguage$pandac$Type* $tmp1372 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1373 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1044_91371, $tmp1372);
        if ($tmp1373.value) {
        {
            panda$core$Int64 $tmp1374 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1361, ((panda$core$Int64) { 16 }));
            result1361 = $tmp1374;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp1375 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp1376 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($match$1044_91371, $tmp1375);
        if ($tmp1376.value) {
        {
            panda$core$Int64 $tmp1377 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(result1361, ((panda$core$Int64) { 32 }));
            result1361 = $tmp1377;
        }
        }
        }
    }
    switch (result1361.value) {
        case 8:
        {
            org$pandalanguage$pandac$Type* $tmp1378 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            return $tmp1378;
        }
        break;
        case 16:
        {
            org$pandalanguage$pandac$Type* $tmp1379 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            return $tmp1379;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$Type* $tmp1380 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            return $tmp1380;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$Type* start1381;
    org$pandalanguage$pandac$Type* end1394;
    org$pandalanguage$pandac$Type* step1427;
    panda$collections$ImmutableArray* args1467;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1468;
    org$pandalanguage$pandac$IRNode* c1470;
    switch (p_expr->kind.value) {
        case 1031:
        {
            panda$core$Object* $tmp1383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1383)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1382 = $tmp1384.value;
            if (!$tmp1382) goto $l1385;
            panda$core$Object* $tmp1386 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp1387 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1386)->payload));
            panda$core$Bit $tmp1388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1387, ((panda$core$Int64) { 1 }));
            $tmp1382 = $tmp1388.value;
            $l1385:;
            panda$core$Bit $tmp1389 = { $tmp1382 };
            if ($tmp1389.value) {
            {
                panda$core$Object* $tmp1390 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1391 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1392 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1390), ((org$pandalanguage$pandac$IRNode*) $tmp1391));
                start1381 = $tmp1392;
            }
            }
            else {
            {
                panda$core$Object* $tmp1393 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                start1381 = ((org$pandalanguage$pandac$IRNode*) $tmp1393)->type;
            }
            }
            panda$core$Object* $tmp1396 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1396)->kind, ((panda$core$Int64) { 1033 }));
            bool $tmp1395 = $tmp1397.value;
            if (!$tmp1395) goto $l1398;
            panda$core$Object* $tmp1399 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1400 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) ((org$pandalanguage$pandac$IRNode*) $tmp1399)->payload));
            panda$core$Bit $tmp1401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1400, ((panda$core$Int64) { 1 }));
            $tmp1395 = $tmp1401.value;
            $l1398:;
            panda$core$Bit $tmp1402 = { $tmp1395 };
            if ($tmp1402.value) {
            {
                panda$core$Object* $tmp1403 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1404 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp1405 = org$pandalanguage$pandac$Compiler$rangeCharType$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$IRNode*) $tmp1403), ((org$pandalanguage$pandac$IRNode*) $tmp1404));
                end1394 = $tmp1405;
            }
            }
            else {
            {
                panda$core$Object* $tmp1406 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                end1394 = ((org$pandalanguage$pandac$IRNode*) $tmp1406)->type;
            }
            }
            panda$core$Int64 $tmp1407 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp1408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1407, ((panda$core$Int64) { 2 }));
            if ($tmp1408.value) {
            {
                panda$core$Object* $tmp1409 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1409)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1410.value) {
                {
                    panda$core$Object* $tmp1411 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1411)->kind, ((panda$core$Int64) { 1030 }));
                    if ($tmp1412.value) {
                    {
                        org$pandalanguage$pandac$Type* $tmp1413 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                        org$pandalanguage$pandac$Type* $tmp1414 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1413);
                        org$pandalanguage$pandac$Type* $tmp1415 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1414);
                        return $tmp1415;
                    }
                    }
                    org$pandalanguage$pandac$Type* $tmp1416 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1394);
                    org$pandalanguage$pandac$Type* $tmp1417 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1416);
                    org$pandalanguage$pandac$Type* $tmp1418 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1417);
                    return $tmp1418;
                }
                }
                panda$core$Object* $tmp1419 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1419)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1420.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1421 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1381);
                    org$pandalanguage$pandac$Type* $tmp1422 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1421);
                    org$pandalanguage$pandac$Type* $tmp1423 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1422);
                    return $tmp1423;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1424 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1381, self, end1394);
                org$pandalanguage$pandac$Type* $tmp1425 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1424);
                org$pandalanguage$pandac$Type* $tmp1426 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1425);
                return $tmp1426;
            }
            }
            panda$core$Object* $tmp1428 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$Type* $tmp1429 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$IRNode*) $tmp1428)->type);
            step1427 = $tmp1429;
            panda$core$Object* $tmp1430 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1430)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1431.value) {
            {
                panda$core$Object* $tmp1432 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1432)->kind, ((panda$core$Int64) { 1030 }));
                if ($tmp1433.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1434 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, step1427);
                    org$pandalanguage$pandac$Type* $tmp1435 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1434);
                    org$pandalanguage$pandac$Type* $tmp1436 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1435);
                    return $tmp1436;
                }
                }
                panda$core$Bit $tmp1437 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1394);
                if ($tmp1437.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1438 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, end1394);
                    org$pandalanguage$pandac$Type* $tmp1439 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1438);
                    org$pandalanguage$pandac$Type* $tmp1440 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1439);
                    return $tmp1440;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1441 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(end1394, self, step1427);
                org$pandalanguage$pandac$Type* $tmp1442 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1441);
                org$pandalanguage$pandac$Type* $tmp1443 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1442);
                org$pandalanguage$pandac$Type* $tmp1444 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1443);
                return $tmp1444;
            }
            }
            panda$core$Object* $tmp1445 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1445)->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1446.value) {
            {
                panda$core$Bit $tmp1447 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1381);
                if ($tmp1447.value) {
                {
                    org$pandalanguage$pandac$Type* $tmp1448 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, start1381);
                    org$pandalanguage$pandac$Type* $tmp1449 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1448);
                    org$pandalanguage$pandac$Type* $tmp1450 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1449);
                    return $tmp1450;
                }
                }
                org$pandalanguage$pandac$Type* $tmp1451 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1381, self, step1427);
                org$pandalanguage$pandac$Type* $tmp1452 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1451);
                org$pandalanguage$pandac$Type* $tmp1453 = org$pandalanguage$pandac$Type$nullable$R$org$pandalanguage$pandac$Type($tmp1452);
                org$pandalanguage$pandac$Type* $tmp1454 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1453);
                return $tmp1454;
            }
            }
            panda$core$Bit $tmp1456 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(start1381);
            bool $tmp1455 = $tmp1456.value;
            if (!$tmp1455) goto $l1457;
            panda$core$Bit $tmp1458 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(end1394);
            $tmp1455 = $tmp1458.value;
            $l1457:;
            panda$core$Bit $tmp1459 = { $tmp1455 };
            if ($tmp1459.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1460 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1381, self, end1394);
                org$pandalanguage$pandac$Type* $tmp1461 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1460);
                org$pandalanguage$pandac$Type* $tmp1462 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1461);
                return $tmp1462;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1463 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(start1381, self, end1394);
            org$pandalanguage$pandac$Type* $tmp1464 = org$pandalanguage$pandac$Type$union$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1463, self, step1427);
            org$pandalanguage$pandac$Type* $tmp1465 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, $tmp1464);
            org$pandalanguage$pandac$Type* $tmp1466 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1465);
            return $tmp1466;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1468, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1469 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1468);
            args1467 = $tmp1469;
            panda$core$Object* $tmp1471 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1473 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1471), &$s1472, ((panda$collections$ListView*) args1467));
            c1470 = $tmp1473;
            if (((panda$core$Bit) { c1470 == NULL }).value) {
            {
                org$pandalanguage$pandac$Type* $tmp1474 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                return $tmp1474;
            }
            }
            return c1470->type;
        }
        break;
        case 1046:
        {
            org$pandalanguage$pandac$Type* $tmp1475 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload)->owner);
            return $tmp1475;
        }
        break;
    }
    org$pandalanguage$pandac$Type* $tmp1476 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_expr->type);
    return $tmp1476;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64$nullable result1487;
    panda$core$Int64$nullable result1491;
    panda$core$Int64$nullable best1500;
    panda$collections$Iterator* t$Iter1501;
    org$pandalanguage$pandac$Type* t1513;
    panda$core$Int64$nullable cost1518;
    org$pandalanguage$pandac$ClassDecl* cl1532;
    panda$core$Int64$nullable cost1534;
    panda$collections$Iterator* intf$Iter1539;
    org$pandalanguage$pandac$Type* intf1551;
    panda$core$Int64$nullable cost1556;
    PANDA_ASSERT(p_type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1477 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, p_target);
    if ($tmp1477.value) {
    {
        return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
    }
    }
    org$pandalanguage$pandac$Type* $tmp1478 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1479 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp1478);
    if ($tmp1479.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 23 }));
    if ($tmp1480.value) {
    {
        panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1481.value) {
        {
            return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 0 }), true });
        }
        }
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1482 = $tmp1483.value;
    if (!$tmp1482) goto $l1484;
    panda$core$Bit $tmp1485 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1482 = $tmp1485.value;
    $l1484:;
    panda$core$Bit $tmp1486 = { $tmp1482 };
    if ($tmp1486.value) {
    {
        panda$core$Object* $tmp1488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Int64$nullable $tmp1489 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1488), p_target);
        result1487 = $tmp1489;
        if (((panda$core$Bit) { !result1487.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp1490 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1487.value), ((panda$core$Int64) { 2 }));
        return ((panda$core$Int64$nullable) { $tmp1490, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Object* $tmp1492 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1493 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, ((org$pandalanguage$pandac$Type*) $tmp1492));
            result1491 = $tmp1493;
            if (((panda$core$Bit) { !result1491.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Int64 $tmp1494 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) result1491.value), ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1494, true });
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
            panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 21 }));
            if ($tmp1495.value) {
            {
                panda$core$Object* $tmp1496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
                panda$core$Int64$nullable $tmp1497 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$Type*) $tmp1496), p_target);
                return $tmp1497;
            }
            }
        }
        break;
    }
    switch (p_type->typeKind.value) {
        case 19:
        {
            org$pandalanguage$pandac$Type* $tmp1498 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Int64$nullable $tmp1499 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1498, p_target);
            return $tmp1499;
        }
        break;
        case 17:
        {
            best1500 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1502 = ((panda$collections$Iterable*) p_type->subtypes)->$class->itable;
                while ($tmp1502->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1502 = $tmp1502->next;
                }
                $fn1504 $tmp1503 = $tmp1502->methods[0];
                panda$collections$Iterator* $tmp1505 = $tmp1503(((panda$collections$Iterable*) p_type->subtypes));
                t$Iter1501 = $tmp1505;
                $l1506:;
                ITable* $tmp1508 = t$Iter1501->$class->itable;
                while ($tmp1508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1508 = $tmp1508->next;
                }
                $fn1510 $tmp1509 = $tmp1508->methods[0];
                panda$core$Bit $tmp1511 = $tmp1509(t$Iter1501);
                panda$core$Bit $tmp1512 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1511);
                if (!$tmp1512.value) goto $l1507;
                {
                    ITable* $tmp1514 = t$Iter1501->$class->itable;
                    while ($tmp1514->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1514 = $tmp1514->next;
                    }
                    $fn1516 $tmp1515 = $tmp1514->methods[1];
                    panda$core$Object* $tmp1517 = $tmp1515(t$Iter1501);
                    t1513 = ((org$pandalanguage$pandac$Type*) $tmp1517);
                    panda$core$Int64$nullable $tmp1519 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, t1513, p_target);
                    cost1518 = $tmp1519;
                    bool $tmp1520 = ((panda$core$Bit) { cost1518.nonnull }).value;
                    if (!$tmp1520) goto $l1521;
                    bool $tmp1522 = ((panda$core$Bit) { !best1500.nonnull }).value;
                    if ($tmp1522) goto $l1523;
                    panda$core$Bit $tmp1524 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1518.value), ((panda$core$Int64) best1500.value));
                    $tmp1522 = $tmp1524.value;
                    $l1523:;
                    panda$core$Bit $tmp1525 = { $tmp1522 };
                    $tmp1520 = $tmp1525.value;
                    $l1521:;
                    panda$core$Bit $tmp1526 = { $tmp1520 };
                    if ($tmp1526.value) {
                    {
                        best1500 = cost1518;
                    }
                    }
                }
                goto $l1506;
                $l1507:;
            }
            return best1500;
        }
        break;
        case 22:
        {
            panda$core$Int64$nullable $tmp1527 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type->parameter->bound, p_target);
            return $tmp1527;
        }
        break;
    }
    panda$core$Bit $tmp1528 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1529 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1528);
    if ($tmp1529.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    panda$core$Bit $tmp1530 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_type);
    panda$core$Bit $tmp1531 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1530);
    if ($tmp1531.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1533 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_type);
    cl1532 = $tmp1533;
    PANDA_ASSERT(((panda$core$Bit) { cl1532 != NULL }).value);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, cl1532);
    if (((panda$core$Bit) { cl1532->rawSuper != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp1535 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, cl1532->rawSuper);
        org$pandalanguage$pandac$Type* $tmp1536 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1535);
        panda$core$Int64$nullable $tmp1537 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1536, p_target);
        cost1534 = $tmp1537;
        if (((panda$core$Bit) { cost1534.nonnull }).value) {
        {
            panda$core$Int64 $tmp1538 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1534.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
            return ((panda$core$Int64$nullable) { $tmp1538, true });
        }
        }
    }
    }
    {
        ITable* $tmp1540 = ((panda$collections$Iterable*) cl1532->rawInterfaces)->$class->itable;
        while ($tmp1540->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1540 = $tmp1540->next;
        }
        $fn1542 $tmp1541 = $tmp1540->methods[0];
        panda$collections$Iterator* $tmp1543 = $tmp1541(((panda$collections$Iterable*) cl1532->rawInterfaces));
        intf$Iter1539 = $tmp1543;
        $l1544:;
        ITable* $tmp1546 = intf$Iter1539->$class->itable;
        while ($tmp1546->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1546 = $tmp1546->next;
        }
        $fn1548 $tmp1547 = $tmp1546->methods[0];
        panda$core$Bit $tmp1549 = $tmp1547(intf$Iter1539);
        panda$core$Bit $tmp1550 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1549);
        if (!$tmp1550.value) goto $l1545;
        {
            ITable* $tmp1552 = intf$Iter1539->$class->itable;
            while ($tmp1552->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1552 = $tmp1552->next;
            }
            $fn1554 $tmp1553 = $tmp1552->methods[1];
            panda$core$Object* $tmp1555 = $tmp1553(intf$Iter1539);
            intf1551 = ((org$pandalanguage$pandac$Type*) $tmp1555);
            org$pandalanguage$pandac$Type* $tmp1557 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, intf1551);
            org$pandalanguage$pandac$Type* $tmp1558 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_type, $tmp1557);
            panda$core$Int64$nullable $tmp1559 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1558, p_target);
            cost1556 = $tmp1559;
            if (((panda$core$Bit) { cost1556.nonnull }).value) {
            {
                panda$core$Int64 $tmp1560 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost1556.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }).value));
                return ((panda$core$Int64$nullable) { $tmp1560, true });
            }
            }
        }
        goto $l1544;
        $l1545:;
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_value) {
    panda$core$Bit $tmp1562 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -128 }));
    bool $tmp1561 = $tmp1562.value;
    if (!$tmp1561) goto $l1563;
    panda$core$Bit $tmp1564 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 127 }));
    $tmp1561 = $tmp1564.value;
    $l1563:;
    panda$core$Bit $tmp1565 = { $tmp1561 };
    if ($tmp1565.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1567 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -32768 }));
    bool $tmp1566 = $tmp1567.value;
    if (!$tmp1566) goto $l1568;
    panda$core$Bit $tmp1569 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 32767 }));
    $tmp1566 = $tmp1569.value;
    $l1568:;
    panda$core$Bit $tmp1570 = { $tmp1566 };
    if ($tmp1570.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1572 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { -2147483648 }));
    bool $tmp1571 = $tmp1572.value;
    if (!$tmp1571) goto $l1573;
    panda$core$Bit $tmp1574 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_value, ((panda$core$Int64) { 2147483647 }));
    $tmp1571 = $tmp1574.value;
    $l1573:;
    panda$core$Bit $tmp1575 = { $tmp1571 };
    if ($tmp1575.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64 org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(org$pandalanguage$pandac$Compiler* self, panda$core$UInt64 p_value) {
    panda$core$Bit $tmp1576 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 255 }));
    if ($tmp1576.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    panda$core$Bit $tmp1577 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 65535 }));
    if ($tmp1577.value) {
    {
        return ((panda$core$Int64) { 16 });
    }
    }
    panda$core$Bit $tmp1578 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(p_value, ((panda$core$UInt64) { 4294967295 }));
    if ($tmp1578.value) {
    {
        return ((panda$core$Int64) { 32 });
    }
    }
    return ((panda$core$Int64) { 64 });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Int64 base1579;
    panda$core$Int64$nullable cost1593;
    panda$core$String* s1653;
    panda$collections$Iterator* utf161664;
    panda$collections$ListView* methods1683;
    panda$collections$ImmutableArray* args1685;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1686;
    panda$core$Int64$nullable bestCost1688;
    panda$collections$Iterator* m$Iter1689;
    org$pandalanguage$pandac$MethodRef* m1701;
    panda$core$Int64$nullable cost1706;
    panda$core$Int64$nullable cost11729;
    panda$core$Int64$nullable cost21733;
    panda$core$Int64 cost1742;
    panda$core$Int64$nullable cost11756;
    panda$core$Int64$nullable cost21760;
    panda$core$Int64$nullable cost31765;
    panda$collections$Array* args1773;
    org$pandalanguage$pandac$ClassDecl* targetClass1786;
    panda$collections$Iterator* m$Iter1788;
    org$pandalanguage$pandac$MethodDecl* m1800;
    panda$core$Int64$nullable cost1812;
    panda$core$Int64$nullable cost1817;
    base1579 = ((panda$core$Int64) { 0 });
    panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1033 }));
    bool $tmp1581 = $tmp1582.value;
    if (!$tmp1581) goto $l1583;
    panda$core$Bit $tmp1584 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1585 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1584);
    $tmp1581 = $tmp1585.value;
    $l1583:;
    panda$core$Bit $tmp1586 = { $tmp1581 };
    bool $tmp1580 = $tmp1586.value;
    if (!$tmp1580) goto $l1587;
    panda$core$Int64 $tmp1588 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
    panda$core$Bit $tmp1589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1588, ((panda$core$Int64) { 1 }));
    $tmp1580 = $tmp1589.value;
    $l1587:;
    panda$core$Bit $tmp1590 = { $tmp1580 };
    if ($tmp1590.value) {
    {
        base1579 = ((panda$core$Int64) { 3 });
    }
    }
    panda$core$Bit $tmp1591 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1591.value) {
    {
        return ((panda$core$Int64$nullable) { base1579, true });
    }
    }
    switch (p_target->typeKind.value) {
        case 11:
        {
            panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
            if ($tmp1592.value) {
            {
                return ((panda$core$Int64$nullable) { base1579, true });
            }
            }
            panda$core$Object* $tmp1594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Int64$nullable $tmp1595 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1594));
            cost1593 = $tmp1595;
            if (((panda$core$Bit) { !cost1593.nonnull }).value) {
            {
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            panda$core$Bit $tmp1596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
            if ($tmp1596.value) {
            {
                panda$core$Int64 $tmp1597 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1579, ((panda$core$Int64) cost1593.value));
                return ((panda$core$Int64$nullable) { $tmp1597, true });
            }
            }
            panda$core$Int64 $tmp1598 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1579, ((panda$core$Int64) cost1593.value));
            panda$core$Int64 $tmp1599 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1598, ((panda$core$Int64) { 1 }));
            return ((panda$core$Int64$nullable) { $tmp1599, true });
        }
        break;
        case 22:
        {
            panda$core$Bit $tmp1600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1579, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1600.value);
            panda$core$Int64$nullable $tmp1601 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target->parameter->bound);
            return $tmp1601;
        }
        break;
    }
    switch (p_expr->kind.value) {
        case 1011:
        {
            panda$core$Bit $tmp1602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 19 }));
            if ($tmp1602.value) {
            {
                return ((panda$core$Int64$nullable) { base1579, true });
            }
            }
            panda$core$Bit $tmp1603 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            if ($tmp1603.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1604 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
                panda$core$Int64$nullable $tmp1605 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1604, p_target);
                return $tmp1605;
            }
            }
        }
        break;
        case 1004:
        {
            panda$core$Bit $tmp1608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1607 = $tmp1608.value;
            if (!$tmp1607) goto $l1609;
            panda$core$Int64 $tmp1610 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1611 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1610);
            panda$core$Int64 $tmp1612 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1613 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1611, $tmp1612);
            $tmp1607 = $tmp1613.value;
            $l1609:;
            panda$core$Bit $tmp1614 = { $tmp1607 };
            bool $tmp1606 = $tmp1614.value;
            if ($tmp1606) goto $l1615;
            panda$core$Bit $tmp1617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1616 = $tmp1617.value;
            if (!$tmp1616) goto $l1618;
            panda$core$Int64 $tmp1619 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1620 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1621 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1619, $tmp1620);
            $tmp1616 = $tmp1621.value;
            $l1618:;
            panda$core$Bit $tmp1622 = { $tmp1616 };
            $tmp1606 = $tmp1622.value;
            $l1615:;
            panda$core$Bit $tmp1623 = { $tmp1606 };
            if ($tmp1623.value) {
            {
                return ((panda$core$Int64$nullable) { base1579, true });
            }
            }
            panda$core$Bit $tmp1624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1624.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1625 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1626 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1625);
            if ($tmp1626.value) {
            {
                panda$core$Bit $tmp1627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1579, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1627.value);
                org$pandalanguage$pandac$Type* $tmp1628 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1629 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1628, p_target);
                return $tmp1629;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1630 = $tmp1631.value;
            if (!$tmp1630) goto $l1632;
            panda$core$Int64 $tmp1633 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1634 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1633);
            panda$core$Int64 $tmp1635 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1634);
            panda$core$Int64 $tmp1636 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1637 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1635, $tmp1636);
            $tmp1630 = $tmp1637.value;
            $l1632:;
            panda$core$Bit $tmp1638 = { $tmp1630 };
            if ($tmp1638.value) {
            {
                return ((panda$core$Int64$nullable) { base1579, true });
            }
            }
            panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1639.value) {
            {
                return ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true });
            }
            }
            panda$core$Bit $tmp1640 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1641 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1640);
            if ($tmp1641.value) {
            {
                panda$core$Bit $tmp1642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1579, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1642.value);
                org$pandalanguage$pandac$Type* $tmp1643 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1644 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1643, p_target);
                return $tmp1644;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1645.value) {
            {
                return ((panda$core$Int64$nullable) { base1579, true });
            }
            }
            panda$core$Bit $tmp1646 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1647 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1646);
            if ($tmp1647.value) {
            {
                panda$core$Bit $tmp1648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1579, ((panda$core$Int64) { 0 }));
                PANDA_ASSERT($tmp1648.value);
                org$pandalanguage$pandac$Type* $tmp1649 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                panda$core$Int64$nullable $tmp1650 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1649, p_target);
                return $tmp1650;
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1651 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1652 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1651);
            if ($tmp1652.value) {
            {
                s1653 = ((panda$core$String*) p_expr->payload);
                panda$core$Int64 $tmp1655 = panda$core$String$length$R$panda$core$Int64(s1653);
                panda$core$Bit $tmp1656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1655, ((panda$core$Int64) { 1 }));
                bool $tmp1654 = $tmp1656.value;
                if (!$tmp1654) goto $l1657;
                panda$core$Char32 $tmp1658 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(s1653, ((panda$core$Int64) { 0 }));
                panda$core$UInt32 $tmp1659 = panda$core$Char32$convert$R$panda$core$UInt32($tmp1658);
                panda$core$Bit $tmp1660 = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit($tmp1659, ((panda$core$UInt32) { 255 }));
                $tmp1654 = $tmp1660.value;
                $l1657:;
                panda$core$Bit $tmp1661 = { $tmp1654 };
                if ($tmp1661.value) {
                {
                    return ((panda$core$Int64$nullable) { base1579, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1662 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1663 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1662);
            if ($tmp1663.value) {
            {
                panda$collections$Iterator* $tmp1665 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                utf161664 = $tmp1665;
                ITable* $tmp1666 = utf161664->$class->itable;
                while ($tmp1666->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1666 = $tmp1666->next;
                }
                $fn1668 $tmp1667 = $tmp1666->methods[0];
                panda$core$Bit $tmp1669 = $tmp1667(utf161664);
                if ($tmp1669.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                ITable* $tmp1670 = utf161664->$class->itable;
                while ($tmp1670->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1670 = $tmp1670->next;
                }
                $fn1672 $tmp1671 = $tmp1670->methods[1];
                $tmp1671(utf161664);
                ITable* $tmp1673 = utf161664->$class->itable;
                while ($tmp1673->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1673 = $tmp1673->next;
                }
                $fn1675 $tmp1674 = $tmp1673->methods[0];
                panda$core$Bit $tmp1676 = $tmp1674(utf161664);
                if ($tmp1676.value) {
                {
                    panda$core$Int64 $tmp1677 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1579, ((panda$core$Int64) { 1 }));
                    return ((panda$core$Int64$nullable) { $tmp1677, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1678 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1679 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1678);
            if ($tmp1679.value) {
            {
                panda$core$Int64 $tmp1680 = panda$core$String$length$R$panda$core$Int64(((panda$core$String*) p_expr->payload));
                panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1680, ((panda$core$Int64) { 1 }));
                if ($tmp1681.value) {
                {
                    panda$core$Int64 $tmp1682 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1579, ((panda$core$Int64) { 2 }));
                    return ((panda$core$Int64$nullable) { $tmp1682, true });
                }
                }
                return ((panda$core$Int64$nullable) { .nonnull = false });
            }
            }
        }
        break;
        case 1039:
        {
            panda$core$Object* $tmp1684 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            methods1683 = ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp1684)->payload);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1686, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp1687 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp1686);
            args1685 = $tmp1687;
            bestCost1688 = ((panda$core$Int64$nullable) { .nonnull = false });
            {
                ITable* $tmp1690 = ((panda$collections$Iterable*) methods1683)->$class->itable;
                while ($tmp1690->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1690 = $tmp1690->next;
                }
                $fn1692 $tmp1691 = $tmp1690->methods[0];
                panda$collections$Iterator* $tmp1693 = $tmp1691(((panda$collections$Iterable*) methods1683));
                m$Iter1689 = $tmp1693;
                $l1694:;
                ITable* $tmp1696 = m$Iter1689->$class->itable;
                while ($tmp1696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1696 = $tmp1696->next;
                }
                $fn1698 $tmp1697 = $tmp1696->methods[0];
                panda$core$Bit $tmp1699 = $tmp1697(m$Iter1689);
                panda$core$Bit $tmp1700 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1699);
                if (!$tmp1700.value) goto $l1695;
                {
                    ITable* $tmp1702 = m$Iter1689->$class->itable;
                    while ($tmp1702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1702 = $tmp1702->next;
                    }
                    $fn1704 $tmp1703 = $tmp1702->methods[1];
                    panda$core$Object* $tmp1705 = $tmp1703(m$Iter1689);
                    m1701 = ((org$pandalanguage$pandac$MethodRef*) $tmp1705);
                    panda$core$Int64$nullable $tmp1707 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m1701, ((panda$collections$ListView*) args1685), p_target);
                    cost1706 = $tmp1707;
                    if (((panda$core$Bit) { !cost1706.nonnull }).value) {
                    {
                        goto $l1694;
                    }
                    }
                    bool $tmp1708 = ((panda$core$Bit) { !bestCost1688.nonnull }).value;
                    if ($tmp1708) goto $l1709;
                    panda$core$Bit $tmp1710 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost1706.value), ((panda$core$Int64) bestCost1688.value));
                    $tmp1708 = $tmp1710.value;
                    $l1709:;
                    panda$core$Bit $tmp1711 = { $tmp1708 };
                    if ($tmp1711.value) {
                    {
                        bestCost1688 = cost1706;
                    }
                    }
                }
                goto $l1694;
                $l1695:;
            }
            return bestCost1688;
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1712 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1712.value) {
            {
                panda$core$Int64 $tmp1713 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1714 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1713, ((panda$core$Int64) { 2 }));
                if ($tmp1714.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1716 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1716)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1715 = $tmp1717.value;
                if (!$tmp1715) goto $l1718;
                panda$core$Object* $tmp1719 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1719)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1715 = $tmp1720.value;
                $l1718:;
                panda$core$Bit $tmp1721 = { $tmp1715 };
                if ($tmp1721.value) {
                {
                    panda$core$Object* $tmp1722 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1722)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1723.value) {
                    {
                        panda$core$Object* $tmp1724 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1725 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1724)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1726 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1725));
                        if ($tmp1726.value) {
                        {
                            return ((panda$core$Int64$nullable) { base1579, true });
                        }
                        }
                        panda$core$Int64 $tmp1727 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1579, ((panda$core$Int64) { 1 }));
                        return ((panda$core$Int64$nullable) { $tmp1727, true });
                    }
                    }
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Bit $tmp1728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1728.value);
                panda$core$Object* $tmp1730 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp1731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1732 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1730), ((org$pandalanguage$pandac$Type*) $tmp1731));
                cost11729 = $tmp1732;
                if (((panda$core$Bit) { !cost11729.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1734 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1735 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$Int64$nullable $tmp1736 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1734), ((org$pandalanguage$pandac$Type*) $tmp1735));
                cost21733 = $tmp1736;
                if (((panda$core$Bit) { !cost21733.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1737 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1579, ((panda$core$Int64) cost11729.value));
                panda$core$Int64 $tmp1738 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1737, ((panda$core$Int64) cost21733.value));
                return ((panda$core$Int64$nullable) { $tmp1738, true });
            }
            }
            panda$core$Bit $tmp1739 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp1739.value) {
            {
                panda$core$Int64 $tmp1740 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1741 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1740, ((panda$core$Int64) { 3 }));
                if ($tmp1741.value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Object* $tmp1744 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp1745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1744)->kind, ((panda$core$Int64) { 1030 }));
                bool $tmp1743 = $tmp1745.value;
                if (!$tmp1743) goto $l1746;
                panda$core$Object* $tmp1747 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                panda$core$Bit $tmp1748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1747)->kind, ((panda$core$Int64) { 1030 }));
                $tmp1743 = $tmp1748.value;
                $l1746:;
                panda$core$Bit $tmp1749 = { $tmp1743 };
                if ($tmp1749.value) {
                {
                    panda$core$Object* $tmp1750 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Bit $tmp1751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1750)->typeKind, ((panda$core$Int64) { 11 }));
                    if ($tmp1751.value) {
                    {
                        panda$core$Object* $tmp1752 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp1753 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp1752)->subtypes, ((panda$core$Int64) { 0 }));
                        panda$core$Bit $tmp1754 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1753));
                        if ($tmp1754.value) {
                        {
                            cost1742 = ((panda$core$Int64) { 0 });
                        }
                        }
                        else {
                        {
                            cost1742 = ((panda$core$Int64) { 1 });
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
                    panda$core$Bit $tmp1755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                    PANDA_ASSERT($tmp1755.value);
                    panda$core$Object* $tmp1757 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp1758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1759 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1757), ((org$pandalanguage$pandac$Type*) $tmp1758));
                    cost11756 = $tmp1759;
                    if (((panda$core$Bit) { !cost11756.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Object* $tmp1761 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                    panda$core$Object* $tmp1762 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                    panda$core$Int64$nullable $tmp1763 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1761), ((org$pandalanguage$pandac$Type*) $tmp1762));
                    cost21760 = $tmp1763;
                    if (((panda$core$Bit) { !cost21760.nonnull }).value) {
                    {
                        return ((panda$core$Int64$nullable) { .nonnull = false });
                    }
                    }
                    panda$core$Int64 $tmp1764 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) cost11756.value), ((panda$core$Int64) cost21760.value));
                    cost1742 = $tmp1764;
                }
                }
                panda$core$Object* $tmp1766 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp1767 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                panda$core$Int64$nullable $tmp1768 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1766), ((org$pandalanguage$pandac$Type*) $tmp1767));
                cost31765 = $tmp1768;
                if (((panda$core$Bit) { !cost31765.nonnull }).value) {
                {
                    return ((panda$core$Int64$nullable) { .nonnull = false });
                }
                }
                panda$core$Int64 $tmp1769 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1579, cost1742);
                panda$core$Int64 $tmp1770 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1769, ((panda$core$Int64) cost31765.value));
                return ((panda$core$Int64$nullable) { $tmp1770, true });
            }
            }
            org$pandalanguage$pandac$Type* $tmp1771 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
            panda$core$Int64$nullable $tmp1772 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1771, p_target);
            return $tmp1772;
        }
        break;
        case 1040:
        {
            panda$collections$Array* $tmp1774 = (panda$collections$Array*) malloc(40);
            $tmp1774->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1774->refCount.value = 1;
            panda$collections$Array$init($tmp1774);
            args1773 = $tmp1774;
            panda$core$Object* $tmp1776 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
            panda$collections$Array$add$panda$collections$Array$T(args1773, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp1776)));
            panda$core$Bit $tmp1777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base1579, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp1777.value);
            panda$core$Object* $tmp1778 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp1780 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1778), &$s1779, ((panda$collections$ListView*) args1773));
            panda$core$Int64$nullable $tmp1781 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1780, p_target);
            return $tmp1781;
        }
        break;
        case 1046:
        {
            org$pandalanguage$pandac$Type* $tmp1782 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload)->owner);
            panda$core$Int64$nullable $tmp1783 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp1782, p_target);
            return $tmp1783;
        }
        break;
    }
    panda$core$Bit $tmp1784 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
    panda$core$Bit $tmp1785 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1784);
    if ($tmp1785.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1787 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
    targetClass1786 = $tmp1787;
    if (((panda$core$Bit) { targetClass1786 == NULL }).value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    {
        ITable* $tmp1789 = ((panda$collections$Iterable*) targetClass1786->methods)->$class->itable;
        while ($tmp1789->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1789 = $tmp1789->next;
        }
        $fn1791 $tmp1790 = $tmp1789->methods[0];
        panda$collections$Iterator* $tmp1792 = $tmp1790(((panda$collections$Iterable*) targetClass1786->methods));
        m$Iter1788 = $tmp1792;
        $l1793:;
        ITable* $tmp1795 = m$Iter1788->$class->itable;
        while ($tmp1795->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1795 = $tmp1795->next;
        }
        $fn1797 $tmp1796 = $tmp1795->methods[0];
        panda$core$Bit $tmp1798 = $tmp1796(m$Iter1788);
        panda$core$Bit $tmp1799 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1798);
        if (!$tmp1799.value) goto $l1794;
        {
            ITable* $tmp1801 = m$Iter1788->$class->itable;
            while ($tmp1801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1801 = $tmp1801->next;
            }
            $fn1803 $tmp1802 = $tmp1801->methods[1];
            panda$core$Object* $tmp1804 = $tmp1802(m$Iter1788);
            m1800 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1804);
            panda$core$Bit $tmp1805 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m1800->annotations);
            if ($tmp1805.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m1800);
                panda$core$Bit $tmp1807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1800->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
                bool $tmp1806 = $tmp1807.value;
                if (!$tmp1806) goto $l1808;
                panda$core$Int64 $tmp1809 = panda$collections$Array$get_count$R$panda$core$Int64(m1800->parameters);
                panda$core$Bit $tmp1810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1809, ((panda$core$Int64) { 1 }));
                $tmp1806 = $tmp1810.value;
                $l1808:;
                panda$core$Bit $tmp1811 = { $tmp1806 };
                if ($tmp1811.value) {
                {
                    panda$core$Object* $tmp1813 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m1800->parameters, ((panda$core$Int64) { 0 }));
                    panda$core$Int64$nullable $tmp1814 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1813)->type);
                    cost1812 = $tmp1814;
                    if (((panda$core$Bit) { cost1812.nonnull }).value) {
                    {
                        panda$core$Int64 $tmp1815 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1579, ((panda$core$Int64) cost1812.value));
                        panda$core$Int64 $tmp1816 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1815, ((panda$core$Int64) { 2 }));
                        return ((panda$core$Int64$nullable) { $tmp1816, true });
                    }
                    }
                }
                }
            }
            }
        }
        goto $l1793;
        $l1794:;
    }
    PANDA_ASSERT(((panda$core$Bit) { p_expr->type != NULL }).value);
    panda$core$Int64$nullable $tmp1818 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr->type, p_target);
    cost1817 = $tmp1818;
    if (((panda$core$Bit) { cost1817.nonnull }).value) {
    {
        panda$core$Int64 $tmp1819 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(base1579, ((panda$core$Int64) cost1817.value));
        return ((panda$core$Int64$nullable) { $tmp1819, true });
    }
    }
    return ((panda$core$Int64$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    panda$collections$Array* children1828;
    org$pandalanguage$pandac$IRNode* intermediate1833;
    org$pandalanguage$pandac$IRNode* coerced1865;
    org$pandalanguage$pandac$IRNode* coerced1891;
    org$pandalanguage$pandac$IRNode* coerced1904;
    org$pandalanguage$pandac$IRNode* varType1918;
    panda$collections$Array* args1928;
    org$pandalanguage$pandac$IRNode* target1936;
    panda$collections$Array* args1947;
    org$pandalanguage$pandac$IRNode* target1959;
    panda$collections$Array* args1970;
    org$pandalanguage$pandac$IRNode* target1978;
    org$pandalanguage$pandac$Type* param1994;
    org$pandalanguage$pandac$IRNode* start1996;
    org$pandalanguage$pandac$IRNode* end1999;
    panda$collections$Array* args2002;
    org$pandalanguage$pandac$IRNode* target2008;
    org$pandalanguage$pandac$Type* endPoint2024;
    org$pandalanguage$pandac$IRNode* start2026;
    org$pandalanguage$pandac$IRNode* end2029;
    org$pandalanguage$pandac$IRNode* step2032;
    panda$collections$Array* args2036;
    org$pandalanguage$pandac$IRNode* target2042;
    panda$collections$ImmutableArray* args2050;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp2051;
    org$pandalanguage$pandac$ChoiceEntry* c2057;
    org$pandalanguage$pandac$IRNode* owner2060;
    panda$collections$Array* args2065;
    panda$core$UInt64 value2068;
    panda$collections$Array* children2101;
    org$pandalanguage$pandac$IRNode* intermediate2107;
    org$pandalanguage$pandac$ClassDecl* cl2112;
    panda$collections$Iterator* m$Iter2114;
    org$pandalanguage$pandac$MethodDecl* m2126;
    org$pandalanguage$pandac$IRNode* type2143;
    panda$collections$Array* args2148;
    panda$collections$Array* children2153;
    if (((panda$core$Bit) { p_expr == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(p_expr->type->resolved.value);
    PANDA_ASSERT(p_target->resolved.value);
    panda$core$Bit $tmp1820 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, p_target);
    if ($tmp1820.value) {
    {
        return p_expr;
    }
    }
    panda$core$Bit $tmp1822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    bool $tmp1821 = $tmp1822.value;
    if (!$tmp1821) goto $l1823;
    panda$core$Bit $tmp1824 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    $tmp1821 = $tmp1824.value;
    $l1823:;
    panda$core$Bit $tmp1825 = { $tmp1821 };
    if ($tmp1825.value) {
    {
        panda$core$Object* $tmp1826 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1827 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1826), p_target);
        if ($tmp1827.value) {
        {
            panda$collections$Array* $tmp1829 = (panda$collections$Array*) malloc(40);
            $tmp1829->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1829->refCount.value = 1;
            panda$collections$Array$init($tmp1829);
            children1828 = $tmp1829;
            panda$collections$Array$add$panda$collections$Array$T(children1828, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp1831 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp1831->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp1831->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp1831, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children1828));
            return $tmp1831;
        }
        }
        panda$core$Object* $tmp1834 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp1835 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp1834));
        intermediate1833 = $tmp1835;
        org$pandalanguage$pandac$IRNode* $tmp1836 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate1833, p_target);
        return $tmp1836;
    }
    }
    switch (p_expr->kind.value) {
        case 1004:
        {
            panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1837 = $tmp1838.value;
            if (!$tmp1837) goto $l1839;
            panda$core$Int64 $tmp1840 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1841 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1842 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1840, $tmp1841);
            $tmp1837 = $tmp1842.value;
            $l1839:;
            panda$core$Bit $tmp1843 = { $tmp1837 };
            if ($tmp1843.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1844 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1844->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1844->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1844, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1844;
            }
            }
            else {
            panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 13 }));
            bool $tmp1846 = $tmp1847.value;
            if (!$tmp1846) goto $l1848;
            panda$core$Int64 $tmp1849 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$UInt64$R$panda$core$Int64(self, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1850 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1851 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1849, $tmp1850);
            $tmp1846 = $tmp1851.value;
            $l1848:;
            panda$core$Bit $tmp1852 = { $tmp1846 };
            if ($tmp1852.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1853 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1853->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1853->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1853, ((panda$core$Int64) { 1004 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1853;
            }
            }
            else {
            panda$core$Bit $tmp1855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1855.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1856 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1856->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1856->refCount.value = 1;
                panda$core$Real64 $tmp1858 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1856, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1858);
                return $tmp1856;
            }
            }
            }
            }
            panda$core$Bit $tmp1860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1859 = $tmp1860.value;
            if (!$tmp1859) goto $l1861;
            panda$core$Bit $tmp1862 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1863 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1862);
            $tmp1859 = $tmp1863.value;
            $l1861:;
            panda$core$Bit $tmp1864 = { $tmp1859 };
            if ($tmp1864.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1866 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1867 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1866);
                coerced1865 = $tmp1867;
                if (((panda$core$Bit) { coerced1865 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1868 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1865, p_target);
                return $tmp1868;
            }
            }
        }
        break;
        case 1032:
        {
            panda$core$Bit $tmp1870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            bool $tmp1869 = $tmp1870.value;
            if (!$tmp1869) goto $l1871;
            panda$core$Int64 $tmp1872 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
            panda$core$Int64 $tmp1873 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp1872);
            panda$core$Int64 $tmp1874 = org$pandalanguage$pandac$Compiler$requiredSize$panda$core$Int64$R$panda$core$Int64(self, $tmp1873);
            panda$core$Int64 $tmp1875 = org$pandalanguage$pandac$Type$size$R$panda$core$Int64(p_target);
            panda$core$Bit $tmp1876 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp1874, $tmp1875);
            $tmp1869 = $tmp1876.value;
            $l1871:;
            panda$core$Bit $tmp1877 = { $tmp1869 };
            if ($tmp1877.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1878 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1878->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1878->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1878, ((panda$core$Int64) { 1032 }), p_expr->position, p_target, ((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                return $tmp1878;
            }
            }
            else {
            panda$core$Bit $tmp1880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1880.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1881 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1881->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1881->refCount.value = 1;
                panda$core$Real64 $tmp1883 = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
                panda$core$Real64 $tmp1884 = panda$core$Real64$$SUB$R$panda$core$Real64($tmp1883);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1881, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, $tmp1884);
                return $tmp1881;
            }
            }
            }
            panda$core$Bit $tmp1886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1885 = $tmp1886.value;
            if (!$tmp1885) goto $l1887;
            panda$core$Bit $tmp1888 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1889 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1888);
            $tmp1885 = $tmp1889.value;
            $l1887:;
            panda$core$Bit $tmp1890 = { $tmp1885 };
            if ($tmp1890.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1892 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1893 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1892);
                coerced1891 = $tmp1893;
                if (((panda$core$Bit) { coerced1891 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1894 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1891, p_target);
                return $tmp1894;
            }
            }
        }
        break;
        case 1045:
        {
            panda$core$Bit $tmp1895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 20 }));
            if ($tmp1895.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1896 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1896->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1896->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp1896, ((panda$core$Int64) { 1045 }), p_expr->position, p_target, ((panda$core$Real64$wrapper*) p_expr->payload)->value);
                return $tmp1896;
            }
            }
            panda$core$Bit $tmp1899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 10 }));
            bool $tmp1898 = $tmp1899.value;
            if (!$tmp1898) goto $l1900;
            panda$core$Bit $tmp1901 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_target);
            panda$core$Bit $tmp1902 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1901);
            $tmp1898 = $tmp1902.value;
            $l1900:;
            panda$core$Bit $tmp1903 = { $tmp1898 };
            if ($tmp1903.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1905 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1906 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1905);
                coerced1904 = $tmp1906;
                if (((panda$core$Bit) { coerced1904 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$IRNode* $tmp1907 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, coerced1904, p_target);
                return $tmp1907;
            }
            }
        }
        break;
        case 1011:
        {
            org$pandalanguage$pandac$Type* $tmp1908 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1909 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1908);
            if ($tmp1909.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp1910 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1910->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1910->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1910, ((panda$core$Int64) { 1011 }), p_expr->position, p_target, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                return $tmp1910;
            }
            }
            panda$core$Bit $tmp1913 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_target);
            bool $tmp1912 = $tmp1913.value;
            if (!$tmp1912) goto $l1914;
            org$pandalanguage$pandac$Type* $tmp1915 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1916 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1915);
            $tmp1912 = $tmp1916.value;
            $l1914:;
            panda$core$Bit $tmp1917 = { $tmp1912 };
            if ($tmp1917.value) {
            {
                org$pandalanguage$pandac$Type* $tmp1919 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp1920 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, $tmp1919);
                varType1918 = $tmp1920;
                if (((panda$core$Bit) { varType1918 != NULL }).value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp1921 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, varType1918, p_target);
                    return $tmp1921;
                }
                }
            }
            }
        }
        break;
        case 1033:
        {
            org$pandalanguage$pandac$Type* $tmp1923 = org$pandalanguage$pandac$Type$Char8$R$org$pandalanguage$pandac$Type();
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
                org$pandalanguage$pandac$Type* $tmp1933 = org$pandalanguage$pandac$Type$BuiltinUInt8$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1934 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1935 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1934);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1931, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1933, $tmp1935);
                panda$collections$Array$add$panda$collections$Array$T(args1928, ((panda$core$Object*) $tmp1931));
                org$pandalanguage$pandac$IRNode* $tmp1937 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1937->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1937->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1939 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1937, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1939, p_target);
                target1936 = $tmp1937;
                org$pandalanguage$pandac$IRNode* $tmp1940 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1936, ((panda$collections$ListView*) args1928));
                return $tmp1940;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1942 = org$pandalanguage$pandac$Type$Char16$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1943 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1942);
            bool $tmp1941 = $tmp1943.value;
            if (!$tmp1941) goto $l1944;
            panda$core$Int64$nullable $tmp1945 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1941 = ((panda$core$Bit) { $tmp1945.nonnull }).value;
            $l1944:;
            panda$core$Bit $tmp1946 = { $tmp1941 };
            if ($tmp1946.value) {
            {
                panda$collections$Array* $tmp1948 = (panda$collections$Array*) malloc(40);
                $tmp1948->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1948->refCount.value = 1;
                panda$collections$Array$init($tmp1948);
                args1947 = $tmp1948;
                org$pandalanguage$pandac$IRNode* $tmp1950 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1950->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1950->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1952 = org$pandalanguage$pandac$Type$BuiltinUInt16$R$org$pandalanguage$pandac$Type();
                panda$collections$Iterator* $tmp1953 = panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(((panda$core$String*) p_expr->payload));
                ITable* $tmp1954 = $tmp1953->$class->itable;
                while ($tmp1954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1954 = $tmp1954->next;
                }
                $fn1956 $tmp1955 = $tmp1954->methods[1];
                panda$core$Object* $tmp1957 = $tmp1955($tmp1953);
                panda$core$UInt64 $tmp1958 = panda$core$Char16$convert$R$panda$core$UInt64(((panda$core$Char16$wrapper*) $tmp1957)->value);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1950, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1952, $tmp1958);
                panda$collections$Array$add$panda$collections$Array$T(args1947, ((panda$core$Object*) $tmp1950));
                org$pandalanguage$pandac$IRNode* $tmp1960 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1960->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1960->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1962 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1960, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1962, p_target);
                target1959 = $tmp1960;
                org$pandalanguage$pandac$IRNode* $tmp1963 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1959, ((panda$collections$ListView*) args1947));
                return $tmp1963;
            }
            }
            org$pandalanguage$pandac$Type* $tmp1965 = org$pandalanguage$pandac$Type$Char32$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1966 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp1965);
            bool $tmp1964 = $tmp1966.value;
            if (!$tmp1964) goto $l1967;
            panda$core$Int64$nullable $tmp1968 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
            $tmp1964 = ((panda$core$Bit) { $tmp1968.nonnull }).value;
            $l1967:;
            panda$core$Bit $tmp1969 = { $tmp1964 };
            if ($tmp1969.value) {
            {
                panda$collections$Array* $tmp1971 = (panda$collections$Array*) malloc(40);
                $tmp1971->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1971->refCount.value = 1;
                panda$collections$Array$init($tmp1971);
                args1970 = $tmp1971;
                org$pandalanguage$pandac$IRNode* $tmp1973 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1973->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1973->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1975 = org$pandalanguage$pandac$Type$BuiltinUInt32$R$org$pandalanguage$pandac$Type();
                panda$core$Char32 $tmp1976 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(((panda$core$String*) p_expr->payload), ((panda$core$Int64) { 0 }));
                panda$core$UInt64 $tmp1977 = panda$core$Char32$convert$R$panda$core$UInt64($tmp1976);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp1973, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp1975, $tmp1977);
                panda$collections$Array$add$panda$collections$Array$T(args1970, ((panda$core$Object*) $tmp1973));
                org$pandalanguage$pandac$IRNode* $tmp1979 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp1979->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp1979->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp1981 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp1979, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp1981, p_target);
                target1978 = $tmp1979;
                org$pandalanguage$pandac$IRNode* $tmp1982 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target1978, ((panda$collections$ListView*) args1970));
                return $tmp1982;
            }
            }
        }
        break;
        case 1031:
        {
            panda$core$Bit $tmp1983 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(p_target);
            if ($tmp1983.value) {
            {
                panda$core$Int64 $tmp1984 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp1985 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1984, ((panda$core$Int64) { 2 }));
                if ($tmp1985.value) {
                {
                    panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1986, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1987, &$s1988);
                    panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1989, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1990, &$s1991);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp1992);
                    return NULL;
                }
                }
                panda$core$Bit $tmp1993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp1993.value);
                panda$core$Object* $tmp1995 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                param1994 = ((org$pandalanguage$pandac$Type*) $tmp1995);
                panda$core$Object* $tmp1997 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp1998 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp1997), param1994);
                start1996 = $tmp1998;
                if (((panda$core$Bit) { start1996 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp2000 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp2001 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2000), param1994);
                end1999 = $tmp2001;
                if (((panda$core$Bit) { end1999 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp2003 = (panda$collections$Array*) malloc(40);
                $tmp2003->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2003->refCount.value = 1;
                panda$collections$Array$init($tmp2003);
                args2002 = $tmp2003;
                panda$collections$Array$add$panda$collections$Array$T(args2002, ((panda$core$Object*) start1996));
                panda$collections$Array$add$panda$collections$Array$T(args2002, ((panda$core$Object*) end1999));
                org$pandalanguage$pandac$IRNode* $tmp2005 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2005->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2005->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2007 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2005, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp2007, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args2002, ((panda$core$Object*) $tmp2005));
                org$pandalanguage$pandac$IRNode* $tmp2009 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2009->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2009->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2011 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2009, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2011, p_target);
                target2008 = $tmp2009;
                org$pandalanguage$pandac$IRNode* $tmp2012 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2008, ((panda$collections$ListView*) args2002));
                return $tmp2012;
            }
            }
            else {
            panda$core$Bit $tmp2013 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_target);
            if ($tmp2013.value) {
            {
                panda$core$Int64 $tmp2014 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
                panda$core$Bit $tmp2015 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2014, ((panda$core$Int64) { 3 }));
                if ($tmp2015.value) {
                {
                    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2016, ((panda$core$Object*) p_target));
                    panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, &$s2018);
                    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2019, ((panda$core$Object*) p_expr));
                    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2022);
                    return NULL;
                }
                }
                panda$core$Bit $tmp2023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 21 }));
                PANDA_ASSERT($tmp2023.value);
                panda$core$Object* $tmp2025 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 1 }));
                endPoint2024 = ((org$pandalanguage$pandac$Type*) $tmp2025);
                panda$core$Object* $tmp2027 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2028 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2027), endPoint2024);
                start2026 = $tmp2028;
                if (((panda$core$Bit) { start2026 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Object* $tmp2030 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$IRNode* $tmp2031 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2030), endPoint2024);
                end2029 = $tmp2031;
                panda$core$Object* $tmp2033 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 2 }));
                panda$core$Object* $tmp2034 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 2 }));
                org$pandalanguage$pandac$IRNode* $tmp2035 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2033), ((org$pandalanguage$pandac$Type*) $tmp2034));
                step2032 = $tmp2035;
                panda$collections$Array* $tmp2037 = (panda$collections$Array*) malloc(40);
                $tmp2037->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2037->refCount.value = 1;
                panda$collections$Array$init($tmp2037);
                args2036 = $tmp2037;
                panda$collections$Array$add$panda$collections$Array$T(args2036, ((panda$core$Object*) start2026));
                panda$collections$Array$add$panda$collections$Array$T(args2036, ((panda$core$Object*) end2029));
                panda$collections$Array$add$panda$collections$Array$T(args2036, ((panda$core$Object*) step2032));
                org$pandalanguage$pandac$IRNode* $tmp2039 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2039->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2039->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2041 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2039, ((panda$core$Int64) { 1011 }), p_expr->position, $tmp2041, ((panda$core$Bit$wrapper*) p_expr->payload)->value);
                panda$collections$Array$add$panda$collections$Array$T(args2036, ((panda$core$Object*) $tmp2039));
                org$pandalanguage$pandac$IRNode* $tmp2043 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2043->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2043->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2045 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2043, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2045, p_target);
                target2042 = $tmp2043;
                org$pandalanguage$pandac$IRNode* $tmp2046 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2042, ((panda$collections$ListView*) args2036));
                return $tmp2046;
            }
            }
            else {
            {
                org$pandalanguage$pandac$IRNode* $tmp2047 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
                org$pandalanguage$pandac$IRNode* $tmp2048 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2047, p_target);
                return $tmp2048;
            }
            }
            }
        }
        break;
        case 1039:
        {
            org$pandalanguage$pandac$IRNode* $tmp2049 = org$pandalanguage$pandac$Compiler$resolveMethodCall$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
            return $tmp2049;
        }
        break;
        case 1040:
        {
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp2051, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$ImmutableArray* $tmp2052 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_expr->children, $tmp2051);
            args2050 = $tmp2052;
            panda$core$Object* $tmp2053 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2055 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2053), &$s2054, ((panda$collections$ListView*) args2050), p_target);
            org$pandalanguage$pandac$IRNode* $tmp2056 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2055, p_target);
            return $tmp2056;
        }
        break;
        case 1046:
        {
            c2057 = ((org$pandalanguage$pandac$ChoiceEntry*) p_expr->payload);
            panda$core$Int64 $tmp2058 = panda$collections$Array$get_count$R$panda$core$Int64(c2057->fields);
            panda$core$Bit $tmp2059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2058, ((panda$core$Int64) { 0 }));
            if ($tmp2059.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2061 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2061->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2061->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2063 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp2064 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(c2057->owner);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2061, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2063, $tmp2064);
                owner2060 = $tmp2061;
                panda$collections$Array* $tmp2066 = (panda$collections$Array*) malloc(40);
                $tmp2066->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2066->refCount.value = 1;
                panda$collections$Array$init($tmp2066);
                args2065 = $tmp2066;
                panda$core$UInt64 $tmp2069 = panda$core$Int64$convert$R$panda$core$UInt64(c2057->rawValue);
                value2068 = $tmp2069;
                org$pandalanguage$pandac$IRNode* $tmp2070 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2070->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2070->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2072 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2068);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2070, ((panda$core$Int64) { 1004 }), p_expr->position, $tmp2072, value2068);
                panda$collections$Array$add$panda$collections$Array$T(args2065, ((panda$core$Object*) $tmp2070));
                org$pandalanguage$pandac$IRNode* $tmp2073 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, owner2060, ((panda$collections$ListView*) args2065));
                org$pandalanguage$pandac$IRNode* $tmp2074 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2073, p_target);
                return $tmp2074;
            }
            }
            panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2075, ((panda$core$Object*) p_expr));
            panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, &$s2077);
            panda$core$Int64 $tmp2079 = panda$collections$Array$get_count$R$panda$core$Int64(c2057->fields);
            panda$core$String* $tmp2080 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2078, ((panda$core$Object*) wrap_panda$core$Int64($tmp2079)));
            panda$core$String* $tmp2082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2080, &$s2081);
            panda$core$Int64 $tmp2084 = panda$collections$Array$get_count$R$panda$core$Int64(c2057->fields);
            panda$core$Bit $tmp2085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2084, ((panda$core$Int64) { 1 }));
            ITable* $tmp2087 = ((panda$core$Formattable*) wrap_panda$core$Bit($tmp2085))->$class->itable;
            while ($tmp2087->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2087 = $tmp2087->next;
            }
            $fn2089 $tmp2088 = $tmp2087->methods[0];
            panda$core$String* $tmp2090 = $tmp2088(((panda$core$Formattable*) wrap_panda$core$Bit($tmp2085)), &$s2086);
            panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2083, $tmp2090);
            panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, &$s2092);
            panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2082, $tmp2093);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2094);
            return NULL;
        }
        break;
    }
    panda$core$Bit $tmp2095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2095.value) {
    {
        panda$core$Bit $tmp2096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp2096.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp2097 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2097->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2097->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2097, ((panda$core$Int64) { 1030 }), p_expr->position, p_target);
            return $tmp2097;
        }
        }
        panda$core$Object* $tmp2099 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2100 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_expr->type, ((org$pandalanguage$pandac$Type*) $tmp2099));
        if ($tmp2100.value) {
        {
            panda$collections$Array* $tmp2102 = (panda$collections$Array*) malloc(40);
            $tmp2102->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2102->refCount.value = 1;
            panda$collections$Array$init($tmp2102);
            children2101 = $tmp2102;
            panda$collections$Array$add$panda$collections$Array$T(children2101, ((panda$core$Object*) p_expr));
            org$pandalanguage$pandac$IRNode* $tmp2104 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2104->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2104->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2104, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children2101));
            return $tmp2104;
        }
        }
        panda$core$Bit $tmp2106 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2106.value) {
        {
            panda$core$Object* $tmp2108 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2109 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, ((org$pandalanguage$pandac$Type*) $tmp2108));
            intermediate2107 = $tmp2109;
            org$pandalanguage$pandac$IRNode* $tmp2110 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, intermediate2107, p_target);
            return $tmp2110;
        }
        }
    }
    }
    panda$core$Int64$nullable $tmp2111 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, p_target);
    if (((panda$core$Bit) { $tmp2111.nonnull }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2113 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_target);
        cl2112 = $tmp2113;
        if (((panda$core$Bit) { cl2112 != NULL }).value) {
        {
            {
                ITable* $tmp2115 = ((panda$collections$Iterable*) cl2112->methods)->$class->itable;
                while ($tmp2115->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2115 = $tmp2115->next;
                }
                $fn2117 $tmp2116 = $tmp2115->methods[0];
                panda$collections$Iterator* $tmp2118 = $tmp2116(((panda$collections$Iterable*) cl2112->methods));
                m$Iter2114 = $tmp2118;
                $l2119:;
                ITable* $tmp2121 = m$Iter2114->$class->itable;
                while ($tmp2121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2121 = $tmp2121->next;
                }
                $fn2123 $tmp2122 = $tmp2121->methods[0];
                panda$core$Bit $tmp2124 = $tmp2122(m$Iter2114);
                panda$core$Bit $tmp2125 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2124);
                if (!$tmp2125.value) goto $l2120;
                {
                    ITable* $tmp2127 = m$Iter2114->$class->itable;
                    while ($tmp2127->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2127 = $tmp2127->next;
                    }
                    $fn2129 $tmp2128 = $tmp2127->methods[1];
                    panda$core$Object* $tmp2130 = $tmp2128(m$Iter2114);
                    m2126 = ((org$pandalanguage$pandac$MethodDecl*) $tmp2130);
                    panda$core$Bit $tmp2131 = org$pandalanguage$pandac$Annotations$isImplicit$R$panda$core$Bit(m2126->annotations);
                    if ($tmp2131.value) {
                    {
                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m2126);
                        panda$core$Bit $tmp2134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m2126->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
                        bool $tmp2133 = $tmp2134.value;
                        if (!$tmp2133) goto $l2135;
                        panda$core$Int64 $tmp2136 = panda$collections$Array$get_count$R$panda$core$Int64(m2126->parameters);
                        panda$core$Bit $tmp2137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2136, ((panda$core$Int64) { 1 }));
                        $tmp2133 = $tmp2137.value;
                        $l2135:;
                        panda$core$Bit $tmp2138 = { $tmp2133 };
                        bool $tmp2132 = $tmp2138.value;
                        if (!$tmp2132) goto $l2139;
                        panda$core$Object* $tmp2140 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m2126->parameters, ((panda$core$Int64) { 0 }));
                        panda$core$Int64$nullable $tmp2141 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_expr, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2140)->type);
                        $tmp2132 = ((panda$core$Bit) { $tmp2141.nonnull }).value;
                        $l2139:;
                        panda$core$Bit $tmp2142 = { $tmp2132 };
                        if ($tmp2142.value) {
                        {
                            org$pandalanguage$pandac$IRNode* $tmp2144 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                            $tmp2144->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                            $tmp2144->refCount.value = 1;
                            org$pandalanguage$pandac$Type* $tmp2146 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp2147 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2112);
                            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2144, ((panda$core$Int64) { 1001 }), p_expr->position, $tmp2146, $tmp2147);
                            type2143 = $tmp2144;
                            panda$collections$Array* $tmp2149 = (panda$collections$Array*) malloc(40);
                            $tmp2149->$class = (panda$core$Class*) &panda$collections$Array$class;
                            $tmp2149->refCount.value = 1;
                            panda$collections$Array$init$panda$core$Int64($tmp2149, ((panda$core$Int64) { 1 }));
                            args2148 = $tmp2149;
                            panda$collections$Array$add$panda$collections$Array$T(args2148, ((panda$core$Object*) p_expr));
                            org$pandalanguage$pandac$IRNode* $tmp2151 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, type2143, ((panda$collections$ListView*) args2148));
                            org$pandalanguage$pandac$IRNode* $tmp2152 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2151, p_target);
                            return $tmp2152;
                        }
                        }
                    }
                    }
                }
                goto $l2119;
                $l2120:;
            }
        }
        }
        panda$collections$Array* $tmp2154 = (panda$collections$Array*) malloc(40);
        $tmp2154->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2154->refCount.value = 1;
        panda$collections$Array$init$panda$core$Int64($tmp2154, ((panda$core$Int64) { 1 }));
        children2153 = $tmp2154;
        panda$collections$Array$add$panda$collections$Array$T(children2153, ((panda$core$Object*) p_expr));
        org$pandalanguage$pandac$IRNode* $tmp2156 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2156->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2156->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2156, ((panda$core$Int64) { 1009 }), p_expr->position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))), ((panda$collections$ListView*) children2153));
        return $tmp2156;
    }
    }
    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2158, ((panda$core$Object*) p_target));
    panda$core$String* $tmp2161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, &$s2160);
    panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2161, ((panda$core$Object*) p_expr->type));
    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, &$s2163);
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_expr->position, $tmp2164);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* result2165;
    org$pandalanguage$pandac$IRNode* $tmp2166 = org$pandalanguage$pandac$Compiler$doCoerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr, p_target);
    result2165 = $tmp2166;
    bool $tmp2167 = ((panda$core$Bit) { result2165 == NULL }).value;
    if ($tmp2167) goto $l2168;
    panda$core$Bit $tmp2169 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result2165->type, p_target);
    $tmp2167 = $tmp2169.value;
    $l2168:;
    panda$core$Bit $tmp2170 = { $tmp2167 };
    PANDA_ASSERT($tmp2170.value);
    return result2165;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit $tmp2172 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_type);
    bool $tmp2171 = $tmp2172.value;
    if (!$tmp2171) goto $l2173;
    panda$core$Bit $tmp2174 = org$pandalanguage$pandac$Type$isPointer$R$panda$core$Bit(p_target);
    $tmp2171 = $tmp2174.value;
    $l2173:;
    panda$core$Bit $tmp2175 = { $tmp2171 };
    if ($tmp2175.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Int64$nullable $tmp2176 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_type, p_target);
    if (((panda$core$Bit) { $tmp2176.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2178 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_type);
    bool $tmp2177 = $tmp2178.value;
    if (!$tmp2177) goto $l2179;
    panda$core$Bit $tmp2180 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    $tmp2177 = $tmp2180.value;
    $l2179:;
    panda$core$Bit $tmp2181 = { $tmp2177 };
    if ($tmp2181.value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 16 }));
    if ($tmp2182.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Int64$nullable $tmp2183 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_target, p_type);
    return ((panda$core$Bit) { $tmp2183.nonnull });
}
panda$core$Bit org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Type* p_target) {
    panda$core$Bit result2185;
    org$pandalanguage$pandac$IRNode* resolved2192;
    panda$core$Int64$nullable $tmp2184 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
    if (((panda$core$Bit) { $tmp2184.nonnull }).value) {
    {
        return ((panda$core$Bit) { true });
    }
    }
    panda$core$Bit $tmp2186 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node->type, p_target);
    result2185 = $tmp2186;
    panda$core$Bit $tmp2188 = panda$core$Bit$$NOT$R$panda$core$Bit(result2185);
    bool $tmp2187 = $tmp2188.value;
    if (!$tmp2187) goto $l2189;
    panda$core$Bit $tmp2190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_node->type->typeKind, ((panda$core$Int64) { 17 }));
    $tmp2187 = $tmp2190.value;
    $l2189:;
    panda$core$Bit $tmp2191 = { $tmp2187 };
    if ($tmp2191.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2193 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
        resolved2192 = $tmp2193;
        bool $tmp2194 = ((panda$core$Bit) { resolved2192 != NULL }).value;
        if (!$tmp2194) goto $l2195;
        $tmp2194 = ((panda$core$Bit) { ((panda$core$Object*) resolved2192) != ((panda$core$Object*) p_node) }).value;
        $l2195:;
        panda$core$Bit $tmp2196 = { $tmp2194 };
        if ($tmp2196.value) {
        {
            panda$core$Bit $tmp2197 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, resolved2192, p_target);
            result2185 = $tmp2197;
        }
        }
    }
    }
    return result2185;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_isExplicit, org$pandalanguage$pandac$Type* p_target) {
    org$pandalanguage$pandac$IRNode* resolved2218;
    panda$collections$Array* children2221;
    panda$core$Bit $tmp2198 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_node->type, p_target);
    if ($tmp2198.value) {
    {
        return p_node;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2199 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2200 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_target, $tmp2199);
    PANDA_ASSERT($tmp2200.value);
    bool $tmp2201 = p_isExplicit.value;
    if (!$tmp2201) goto $l2202;
    panda$core$Bit $tmp2203 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_node, p_target);
    panda$core$Bit $tmp2204 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2203);
    $tmp2201 = $tmp2204.value;
    $l2202:;
    panda$core$Bit $tmp2205 = { $tmp2201 };
    if ($tmp2205.value) {
    {
        panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2206, ((panda$core$Object*) p_node->type));
        panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2207, &$s2208);
        panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2210, ((panda$core$Object*) p_target));
        panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, &$s2212);
        panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, $tmp2213);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2214);
    }
    }
    switch (p_node->kind.value) {
        case 1004:
        case 1032:
        case 1011:
        {
            org$pandalanguage$pandac$IRNode* $tmp2215 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
            return $tmp2215;
        }
        break;
        case 1039:
        case 1040:
        {
            panda$core$Int64$nullable $tmp2216 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_node, p_target);
            if (((panda$core$Bit) { $tmp2216.nonnull }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2217 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_node, p_target);
                return $tmp2217;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2219 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_node);
            resolved2218 = $tmp2219;
            if (((panda$core$Bit) { resolved2218 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2220 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, resolved2218, p_position, p_isExplicit, p_target);
                return $tmp2220;
            }
            }
        }
        break;
    }
    panda$collections$Array* $tmp2222 = (panda$collections$Array*) malloc(40);
    $tmp2222->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2222->refCount.value = 1;
    panda$collections$Array$init($tmp2222);
    children2221 = $tmp2222;
    panda$collections$Array$add$panda$collections$Array$T(children2221, ((panda$core$Object*) p_node));
    org$pandalanguage$pandac$IRNode* $tmp2224 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2224->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2224->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2224, ((panda$core$Int64) { 1009 }), p_position, p_target, ((panda$core$Object*) wrap_panda$core$Bit(p_isExplicit)), ((panda$collections$ListView*) children2221));
    return $tmp2224;
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$core$Int64 result2232;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2233;
    panda$core$Int64$nullable cost2248;
    panda$core$Int64$nullable cost2262;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2226 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2227 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2227->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2227 = $tmp2227->next;
    }
    $fn2229 $tmp2228 = $tmp2227->methods[0];
    panda$core$Int64 $tmp2230 = $tmp2228(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2231 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2226, $tmp2230);
    if ($tmp2231.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result2232 = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2234 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2233, ((panda$core$Int64) { 0 }), $tmp2234, ((panda$core$Bit) { false }));
    int64_t $tmp2236 = $tmp2233.min.value;
    panda$core$Int64 i2235 = { $tmp2236 };
    int64_t $tmp2238 = $tmp2233.max.value;
    bool $tmp2239 = $tmp2233.inclusive.value;
    if ($tmp2239) goto $l2246; else goto $l2247;
    $l2246:;
    if ($tmp2236 <= $tmp2238) goto $l2240; else goto $l2242;
    $l2247:;
    if ($tmp2236 < $tmp2238) goto $l2240; else goto $l2242;
    $l2240:;
    {
        ITable* $tmp2249 = p_args->$class->itable;
        while ($tmp2249->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2249 = $tmp2249->next;
        }
        $fn2251 $tmp2250 = $tmp2249->methods[0];
        panda$core$Object* $tmp2252 = $tmp2250(p_args, i2235);
        org$pandalanguage$pandac$Type* $tmp2253 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2235);
        panda$core$Int64$nullable $tmp2254 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2252), $tmp2253);
        cost2248 = $tmp2254;
        if (((panda$core$Bit) { !cost2248.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2255 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2232, ((panda$core$Int64) cost2248.value));
        result2232 = $tmp2255;
    }
    $l2243:;
    int64_t $tmp2257 = $tmp2238 - i2235.value;
    if ($tmp2239) goto $l2258; else goto $l2259;
    $l2258:;
    if ($tmp2257 >= 1) goto $l2256; else goto $l2242;
    $l2259:;
    if ($tmp2257 > 1) goto $l2256; else goto $l2242;
    $l2256:;
    i2235.value += 1;
    goto $l2240;
    $l2242:;
    if (((panda$core$Bit) { p_expectedReturn != NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2263 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        panda$core$Int64$nullable $tmp2264 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, $tmp2263, p_expectedReturn);
        cost2262 = $tmp2264;
        if (((panda$core$Bit) { !cost2262.nonnull }).value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp2265 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2232, ((panda$core$Int64) cost2262.value));
        result2232 = $tmp2265;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2268 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2269 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit($tmp2268);
    bool $tmp2267 = $tmp2269.value;
    if (!$tmp2267) goto $l2270;
    ITable* $tmp2271 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2271->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2271 = $tmp2271->next;
    }
    $fn2273 $tmp2272 = $tmp2271->methods[0];
    panda$core$Int64 $tmp2274 = $tmp2272(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2274, ((panda$core$Int64) { 1 }));
    $tmp2267 = $tmp2275.value;
    $l2270:;
    panda$core$Bit $tmp2276 = { $tmp2267 };
    bool $tmp2266 = $tmp2276.value;
    if (!$tmp2266) goto $l2277;
    panda$core$Object* $tmp2278 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2279 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
    panda$core$Bit $tmp2280 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2278)->type, $tmp2279);
    $tmp2266 = $tmp2280.value;
    $l2277:;
    panda$core$Bit $tmp2281 = { $tmp2266 };
    if ($tmp2281.value) {
    {
        panda$core$Int64 $tmp2282 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result2232, ((panda$core$Int64) { 1 }));
        result2232 = $tmp2282;
    }
    }
    return ((panda$core$Int64$nullable) { result2232, true });
}
panda$core$Int64$nullable org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(org$pandalanguage$pandac$Compiler* self, panda$collections$Array* p_methods, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedReturn) {
    panda$collections$Array* result2283;
    panda$core$Int64$nullable best2286;
    panda$collections$Iterator* m$Iter2287;
    org$pandalanguage$pandac$MethodRef* m2299;
    panda$core$Int64$nullable cost2304;
    panda$collections$Array* $tmp2284 = (panda$collections$Array*) malloc(40);
    $tmp2284->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2284->refCount.value = 1;
    panda$collections$Array$init($tmp2284);
    result2283 = $tmp2284;
    best2286 = ((panda$core$Int64$nullable) { .nonnull = false });
    {
        ITable* $tmp2288 = ((panda$collections$Iterable*) p_methods)->$class->itable;
        while ($tmp2288->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2288 = $tmp2288->next;
        }
        $fn2290 $tmp2289 = $tmp2288->methods[0];
        panda$collections$Iterator* $tmp2291 = $tmp2289(((panda$collections$Iterable*) p_methods));
        m$Iter2287 = $tmp2291;
        $l2292:;
        ITable* $tmp2294 = m$Iter2287->$class->itable;
        while ($tmp2294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2294 = $tmp2294->next;
        }
        $fn2296 $tmp2295 = $tmp2294->methods[0];
        panda$core$Bit $tmp2297 = $tmp2295(m$Iter2287);
        panda$core$Bit $tmp2298 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2297);
        if (!$tmp2298.value) goto $l2293;
        {
            ITable* $tmp2300 = m$Iter2287->$class->itable;
            while ($tmp2300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2300 = $tmp2300->next;
            }
            $fn2302 $tmp2301 = $tmp2300->methods[1];
            panda$core$Object* $tmp2303 = $tmp2301(m$Iter2287);
            m2299 = ((org$pandalanguage$pandac$MethodRef*) $tmp2303);
            panda$core$Int64$nullable $tmp2305 = org$pandalanguage$pandac$Compiler$callCost$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, m2299, p_args, p_expectedReturn);
            cost2304 = $tmp2305;
            if (((panda$core$Bit) { !cost2304.nonnull }).value) {
            {
                goto $l2292;
            }
            }
            bool $tmp2306 = ((panda$core$Bit) { !best2286.nonnull }).value;
            if ($tmp2306) goto $l2307;
            panda$core$Bit $tmp2308 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2304.value), ((panda$core$Int64) best2286.value));
            $tmp2306 = $tmp2308.value;
            $l2307:;
            panda$core$Bit $tmp2309 = { $tmp2306 };
            if ($tmp2309.value) {
            {
                panda$collections$Array$clear(result2283);
                best2286 = cost2304;
            }
            }
            panda$core$Bit $tmp2313;
            if (((panda$core$Bit) { cost2304.nonnull }).value) goto $l2310; else goto $l2311;
            $l2310:;
            panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) cost2304.value), ((panda$core$Int64) best2286.value));
            $tmp2313 = $tmp2314;
            goto $l2312;
            $l2311:;
            $tmp2313 = ((panda$core$Bit) { false });
            goto $l2312;
            $l2312:;
            if ($tmp2313.value) {
            {
                panda$collections$Array$add$panda$collections$Array$T(result2283, ((panda$core$Object*) m2299));
            }
            }
        }
        goto $l2292;
        $l2293:;
    }
    panda$collections$Array$clear(p_methods);
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p_methods, ((panda$collections$CollectionView*) result2283));
    return best2286;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$MethodRef* p_m, panda$collections$ListView* p_args) {
    panda$collections$Array* finalArgs2347;
    org$pandalanguage$pandac$IRNode* selfNode2383;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2412;
    org$pandalanguage$pandac$IRNode* coerced2430;
    org$pandalanguage$pandac$IRNode* result2445;
    PANDA_ASSERT(p_m->value->resolved.value);
    panda$core$Int64 $tmp2315 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
    ITable* $tmp2316 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2316->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2316 = $tmp2316->next;
    }
    $fn2318 $tmp2317 = $tmp2316->methods[0];
    panda$core$Int64 $tmp2319 = $tmp2317(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp2320 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2315, $tmp2319);
    if ($tmp2320.value) {
    {
        panda$core$String* $tmp2321 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
        panda$core$String* $tmp2322 = panda$core$String$convert$R$panda$core$String($tmp2321);
        panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2322, &$s2323);
        panda$core$Int64 $tmp2325 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2324, ((panda$core$Object*) wrap_panda$core$Int64($tmp2325)));
        panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2326, &$s2327);
        panda$core$Int64 $tmp2329 = org$pandalanguage$pandac$MethodRef$parameterCount$R$panda$core$Int64(p_m);
        panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2329, ((panda$core$Int64) { 1 }));
        ITable* $tmp2332 = ((panda$core$Formattable*) wrap_panda$core$Bit($tmp2330))->$class->itable;
        while ($tmp2332->$class != (panda$core$Class*) &panda$core$Formattable$class) {
            $tmp2332 = $tmp2332->next;
        }
        $fn2334 $tmp2333 = $tmp2332->methods[0];
        panda$core$String* $tmp2335 = $tmp2333(((panda$core$Formattable*) wrap_panda$core$Bit($tmp2330)), &$s2331);
        panda$core$String* $tmp2336 = panda$core$String$convert$R$panda$core$String($tmp2335);
        panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2336, &$s2337);
        ITable* $tmp2339 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2339->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2339 = $tmp2339->next;
        }
        $fn2341 $tmp2340 = $tmp2339->methods[0];
        panda$core$Int64 $tmp2342 = $tmp2340(((panda$collections$CollectionView*) p_args));
        panda$core$String* $tmp2343 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2338, ((panda$core$Object*) wrap_panda$core$Int64($tmp2342)));
        panda$core$String* $tmp2345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2343, &$s2344);
        panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2328, $tmp2345);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2346);
        return NULL;
    }
    }
    panda$collections$Array* $tmp2348 = (panda$collections$Array*) malloc(40);
    $tmp2348->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2348->refCount.value = 1;
    panda$collections$Array$init($tmp2348);
    finalArgs2347 = $tmp2348;
    bool $tmp2351 = ((panda$core$Bit) { p_target != NULL }).value;
    if (!$tmp2351) goto $l2352;
    panda$core$Bit $tmp2353 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
    $tmp2351 = $tmp2353.value;
    $l2352:;
    panda$core$Bit $tmp2354 = { $tmp2351 };
    bool $tmp2350 = $tmp2354.value;
    if (!$tmp2350) goto $l2355;
    panda$core$Bit $tmp2356 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->value->annotations);
    panda$core$Bit $tmp2357 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2356);
    $tmp2350 = $tmp2357.value;
    $l2355:;
    panda$core$Bit $tmp2358 = { $tmp2350 };
    if ($tmp2358.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2359 = org$pandalanguage$pandac$MethodRef$owner$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2360 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, p_target, p_position, ((panda$core$Bit) { false }), $tmp2359);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2347, ((panda$core$Object*) $tmp2360));
    }
    }
    panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->value->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp2361.value) {
    {
        if (((panda$core$Bit) { p_target == NULL }).value) {
        {
            panda$core$Object* $tmp2362 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
            panda$core$Bit $tmp2363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2362)->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2363.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp2364 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2364->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2364->refCount.value = 1;
                panda$core$Object* $tmp2366 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                org$pandalanguage$pandac$Type* $tmp2367 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2366));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2364, ((panda$core$Int64) { 1025 }), p_position, $tmp2367);
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2347, ((panda$core$Object*) $tmp2364));
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2368);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp2371 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1025 }));
        bool $tmp2370 = $tmp2371.value;
        if (!$tmp2370) goto $l2372;
        panda$core$Bit $tmp2373 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1024 }));
        $tmp2370 = $tmp2373.value;
        $l2372:;
        panda$core$Bit $tmp2374 = { $tmp2370 };
        bool $tmp2369 = $tmp2374.value;
        if (!$tmp2369) goto $l2375;
        panda$core$Bit $tmp2376 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1038 }));
        $tmp2369 = $tmp2376.value;
        $l2375:;
        panda$core$Bit $tmp2377 = { $tmp2369 };
        if ($tmp2377.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2378);
        }
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2380 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    bool $tmp2379 = $tmp2380.value;
    if (!$tmp2379) goto $l2381;
    $tmp2379 = ((panda$core$Bit) { p_target == NULL }).value;
    $l2381:;
    panda$core$Bit $tmp2382 = { $tmp2379 };
    if ($tmp2382.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2384 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2384->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2384->refCount.value = 1;
        panda$core$Object* $tmp2386 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
        org$pandalanguage$pandac$Type* $tmp2387 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp2386));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2384, ((panda$core$Int64) { 1025 }), p_position, $tmp2387);
        selfNode2383 = $tmp2384;
        org$pandalanguage$pandac$Type* $tmp2388 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->value->owner);
        org$pandalanguage$pandac$IRNode* $tmp2389 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, selfNode2383, $tmp2388);
        selfNode2383 = $tmp2389;
        PANDA_ASSERT(((panda$core$Bit) { selfNode2383 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2347, ((panda$core$Object*) selfNode2383));
        panda$core$Object* $tmp2390 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        panda$core$Bit $tmp2391 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp2390));
        panda$core$Bit $tmp2392 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2391);
        if ($tmp2392.value) {
        {
            panda$core$String* $tmp2394 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m->value);
            panda$core$String* $tmp2395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2393, $tmp2394);
            panda$core$String* $tmp2397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2395, &$s2396);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp2397);
        }
        }
    }
    }
    else {
    panda$core$Bit $tmp2400 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m->value);
    panda$core$Bit $tmp2401 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2400);
    bool $tmp2399 = $tmp2401.value;
    if (!$tmp2399) goto $l2402;
    $tmp2399 = ((panda$core$Bit) { p_target != NULL }).value;
    $l2402:;
    panda$core$Bit $tmp2403 = { $tmp2399 };
    bool $tmp2398 = $tmp2403.value;
    if (!$tmp2398) goto $l2404;
    panda$core$Bit $tmp2405 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
    $tmp2398 = $tmp2405.value;
    $l2404:;
    panda$core$Bit $tmp2406 = { $tmp2398 };
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
    ITable* $tmp2413 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp2413->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2413 = $tmp2413->next;
    }
    $fn2415 $tmp2414 = $tmp2413->methods[0];
    panda$core$Int64 $tmp2416 = $tmp2414(((panda$collections$CollectionView*) p_args));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2412, ((panda$core$Int64) { 0 }), $tmp2416, ((panda$core$Bit) { false }));
    int64_t $tmp2418 = $tmp2412.min.value;
    panda$core$Int64 i2417 = { $tmp2418 };
    int64_t $tmp2420 = $tmp2412.max.value;
    bool $tmp2421 = $tmp2412.inclusive.value;
    if ($tmp2421) goto $l2428; else goto $l2429;
    $l2428:;
    if ($tmp2418 <= $tmp2420) goto $l2422; else goto $l2424;
    $l2429:;
    if ($tmp2418 < $tmp2420) goto $l2422; else goto $l2424;
    $l2422:;
    {
        ITable* $tmp2431 = p_args->$class->itable;
        while ($tmp2431->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2431 = $tmp2431->next;
        }
        $fn2433 $tmp2432 = $tmp2431->methods[0];
        panda$core$Object* $tmp2434 = $tmp2432(p_args, i2417);
        org$pandalanguage$pandac$Type* $tmp2435 = org$pandalanguage$pandac$MethodRef$parameter$panda$core$Int64$R$org$pandalanguage$pandac$Type(p_m, i2417);
        org$pandalanguage$pandac$IRNode* $tmp2436 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2434), $tmp2435);
        coerced2430 = $tmp2436;
        if (((panda$core$Bit) { coerced2430 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Object* $tmp2437 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->value->parameters, i2417);
        org$pandalanguage$pandac$IRNode* $tmp2438 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, coerced2430, p_position, ((panda$core$Bit) { false }), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2437)->type);
        coerced2430 = $tmp2438;
        if (((panda$core$Bit) { coerced2430 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(finalArgs2347, ((panda$core$Object*) coerced2430));
    }
    $l2425:;
    int64_t $tmp2440 = $tmp2420 - i2417.value;
    if ($tmp2421) goto $l2441; else goto $l2442;
    $l2441:;
    if ($tmp2440 >= 1) goto $l2439; else goto $l2424;
    $l2442:;
    if ($tmp2440 > 1) goto $l2439; else goto $l2424;
    $l2439:;
    i2417.value += 1;
    goto $l2422;
    $l2424:;
    panda$core$Bit $tmp2447 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m->value->owner)->name, &$s2446);
    if ($tmp2447.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2448 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2448->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2448->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2450 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2448, ((panda$core$Int64) { 1005 }), p_position, $tmp2450, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2347));
        result2445 = $tmp2448;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp2451 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2451->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2451->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2451, ((panda$core$Int64) { 1005 }), p_position, p_m->value->returnType, ((panda$core$Object*) p_m), ((panda$collections$ListView*) finalArgs2347));
        result2445 = $tmp2451;
        org$pandalanguage$pandac$Type* $tmp2453 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(p_m);
        org$pandalanguage$pandac$IRNode* $tmp2454 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, result2445, p_position, ((panda$core$Bit) { false }), $tmp2453);
        result2445 = $tmp2454;
    }
    }
    return result2445;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2455 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, p_args, NULL);
    return $tmp2455;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$String* p_name, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2456;
    org$pandalanguage$pandac$ChoiceEntry* rightEntry2460;
    org$pandalanguage$pandac$IRNode* leftValue2461;
    panda$core$UInt64 rightValue2464;
    panda$collections$Array* $tmp2457 = (panda$collections$Array*) malloc(40);
    $tmp2457->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2457->refCount.value = 1;
    panda$collections$Array$init($tmp2457);
    args2456 = $tmp2457;
    panda$core$Bit $tmp2459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1046 }));
    if ($tmp2459.value) {
    {
        rightEntry2460 = ((org$pandalanguage$pandac$ChoiceEntry*) p_right->payload);
        org$pandalanguage$pandac$IRNode* $tmp2463 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_left->position, p_left, &$s2462);
        leftValue2461 = $tmp2463;
        panda$core$UInt64 $tmp2465 = panda$core$Int64$convert$R$panda$core$UInt64(rightEntry2460->rawValue);
        rightValue2464 = $tmp2465;
        org$pandalanguage$pandac$IRNode* $tmp2466 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp2466->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp2466->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp2468 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(rightValue2464);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2466, ((panda$core$Int64) { 1004 }), p_right->position, $tmp2468, rightValue2464);
        panda$collections$Array$add$panda$collections$Array$T(args2456, ((panda$core$Object*) $tmp2466));
        org$pandalanguage$pandac$IRNode* $tmp2469 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, leftValue2461, p_name, ((panda$collections$ListView*) args2456));
        return $tmp2469;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(args2456, ((panda$core$Object*) p_right));
    org$pandalanguage$pandac$IRNode* $tmp2470 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_left, p_name, ((panda$collections$ListView*) args2456));
    return $tmp2470;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target, panda$core$String* p_name, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* resolved2471;
    org$pandalanguage$pandac$ClassDecl* cl2473;
    org$pandalanguage$pandac$Symbol* s2483;
    org$pandalanguage$pandac$IRNode* ref2529;
    org$pandalanguage$pandac$IRNode* $tmp2472 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_target);
    resolved2471 = $tmp2472;
    if (((panda$core$Bit) { resolved2471 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(resolved2471->kind, ((panda$core$Int64) { 1001 }));
    if ($tmp2474.value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp2475 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) resolved2471->payload));
        cl2473 = $tmp2475;
    }
    }
    else {
    {
        panda$core$Bit $tmp2476 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved2471->type);
        panda$core$Bit $tmp2477 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2476);
        if ($tmp2477.value) {
        {
            panda$core$String* $tmp2479 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2478, ((panda$core$Object*) resolved2471->type));
            panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, &$s2480);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2481);
            return NULL;
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp2482 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, resolved2471->type);
        cl2473 = $tmp2482;
    }
    }
    if (((panda$core$Bit) { cl2473 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2484 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2473);
    org$pandalanguage$pandac$Symbol* $tmp2485 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp2484, p_name);
    s2483 = $tmp2485;
    if (((panda$core$Bit) { s2483 == NULL }).value) {
    {
        panda$core$Bit $tmp2488 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2487);
        bool $tmp2486 = $tmp2488.value;
        if ($tmp2486) goto $l2489;
        panda$core$Bit $tmp2493 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_name, &$s2492);
        bool $tmp2491 = $tmp2493.value;
        if (!$tmp2491) goto $l2494;
        panda$core$Bit $tmp2495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl2473->classKind->$rawValue, ((panda$core$Int64) { 2 }));
        $tmp2491 = $tmp2495.value;
        $l2494:;
        panda$core$Bit $tmp2496 = { $tmp2491 };
        bool $tmp2490 = $tmp2496.value;
        if (!$tmp2490) goto $l2497;
        ITable* $tmp2498 = ((panda$collections$CollectionView*) p_args)->$class->itable;
        while ($tmp2498->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp2498 = $tmp2498->next;
        }
        $fn2500 $tmp2499 = $tmp2498->methods[0];
        panda$core$Int64 $tmp2501 = $tmp2499(((panda$collections$CollectionView*) p_args));
        panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2501, ((panda$core$Int64) { 1 }));
        $tmp2490 = $tmp2502.value;
        $l2497:;
        panda$core$Bit $tmp2503 = { $tmp2490 };
        $tmp2486 = $tmp2503.value;
        $l2489:;
        panda$core$Bit $tmp2504 = { $tmp2486 };
        if ($tmp2504.value) {
        {
            ITable* $tmp2505 = p_args->$class->itable;
            while ($tmp2505->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2505 = $tmp2505->next;
            }
            $fn2507 $tmp2506 = $tmp2505->methods[0];
            panda$core$Object* $tmp2508 = $tmp2506(p_args, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2509 = org$pandalanguage$pandac$Compiler$compileChoiceComparison$org$pandalanguage$pandac$IRNode$panda$core$String$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_target, p_name, ((org$pandalanguage$pandac$IRNode*) $tmp2508));
            return $tmp2509;
        }
        }
        panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2510, ((org$pandalanguage$pandac$Symbol*) cl2473)->name);
        panda$core$String* $tmp2513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2511, &$s2512);
        panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2513, p_name);
        panda$core$String* $tmp2516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2514, &$s2515);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2516);
        return NULL;
    }
    }
    panda$core$Bit $tmp2518 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2483->kind, ((panda$core$Int64) { 204 }));
    bool $tmp2517 = $tmp2518.value;
    if (!$tmp2517) goto $l2519;
    panda$core$Bit $tmp2520 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(s2483->kind, ((panda$core$Int64) { 205 }));
    $tmp2517 = $tmp2520.value;
    $l2519:;
    panda$core$Bit $tmp2521 = { $tmp2517 };
    if ($tmp2521.value) {
    {
        panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2522, ((org$pandalanguage$pandac$Symbol*) cl2473)->name);
        panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2523, &$s2524);
        panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2525, p_name);
        panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2526, &$s2527);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_target->position, $tmp2528);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp2530 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl2473);
    org$pandalanguage$pandac$IRNode* $tmp2531 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_target->position, p_target, s2483, $tmp2530);
    ref2529 = $tmp2531;
    if (((panda$core$Bit) { ref2529 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2532 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, ref2529, p_args, p_expectedType);
    return $tmp2532;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$IRNode* $tmp2533 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, p_args, NULL);
    return $tmp2533;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_m, panda$collections$ListView* p_args, org$pandalanguage$pandac$Type* p_expectedType) {
    org$pandalanguage$pandac$IRNode* target2534;
    panda$collections$Array* methods2541;
    org$pandalanguage$pandac$MethodDecl* first2546;
    panda$core$MutableString* msg2551;
    panda$core$String* separator2562;
    panda$collections$Iterator* a$Iter2564;
    org$pandalanguage$pandac$IRNode* a2576;
    org$pandalanguage$pandac$IRNode* target2590;
    panda$collections$Array* children2598;
    panda$collections$Array* types2604;
    panda$collections$Iterator* m$Iter2607;
    org$pandalanguage$pandac$MethodRef* m2619;
    org$pandalanguage$pandac$IRNode* target2629;
    org$pandalanguage$pandac$IRNode* initCall2632;
    panda$collections$Array* children2636;
    org$pandalanguage$pandac$ChoiceEntry* c2641;
    panda$collections$Array* finalArgs2675;
    panda$core$UInt64 value2678;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2683;
    org$pandalanguage$pandac$IRNode* arg2701;
    org$pandalanguage$pandac$IRNode* owner2714;
    org$pandalanguage$pandac$IRNode* resolved2720;
    switch (p_m->kind.value) {
        case 1002:
        {
            panda$core$Int64 $tmp2535 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
            panda$core$Bit $tmp2536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2535, ((panda$core$Int64) { 0 }));
            if ($tmp2536.value) {
            {
                target2534 = NULL;
            }
            }
            else {
            {
                panda$core$Int64 $tmp2537 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2537, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp2538.value);
                panda$core$Object* $tmp2539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                target2534 = ((org$pandalanguage$pandac$IRNode*) $tmp2539);
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp2540 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2534, ((org$pandalanguage$pandac$MethodRef*) p_m->payload), p_args);
            return $tmp2540;
        }
        break;
        case 1003:
        {
            panda$collections$Array* $tmp2542 = (panda$collections$Array*) malloc(40);
            $tmp2542->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2542->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp2542, ((panda$collections$ListView*) p_m->payload));
            methods2541 = $tmp2542;
            org$pandalanguage$pandac$Compiler$matchMethods$panda$collections$Array$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$panda$core$Int64$Q(self, methods2541, p_args, p_expectedType);
            panda$core$Int64 $tmp2544 = panda$collections$Array$get_count$R$panda$core$Int64(methods2541);
            panda$core$Bit $tmp2545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2544, ((panda$core$Int64) { 0 }));
            if ($tmp2545.value) {
            {
                ITable* $tmp2547 = ((panda$collections$ListView*) p_m->payload)->$class->itable;
                while ($tmp2547->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2547 = $tmp2547->next;
                }
                $fn2549 $tmp2548 = $tmp2547->methods[0];
                panda$core$Object* $tmp2550 = $tmp2548(((panda$collections$ListView*) p_m->payload), ((panda$core$Int64) { 0 }));
                first2546 = ((org$pandalanguage$pandac$MethodRef*) $tmp2550)->value;
                panda$core$MutableString* $tmp2552 = (panda$core$MutableString*) malloc(48);
                $tmp2552->$class = (panda$core$Class*) &panda$core$MutableString$class;
                $tmp2552->refCount.value = 1;
                panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2554, ((org$pandalanguage$pandac$Symbol*) first2546->owner)->name);
                panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
                panda$core$String* $tmp2558 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) first2546)->name);
                panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, &$s2559);
                panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, $tmp2560);
                panda$core$MutableString$init$panda$core$String($tmp2552, $tmp2561);
                msg2551 = $tmp2552;
                separator2562 = &$s2563;
                {
                    ITable* $tmp2565 = ((panda$collections$Iterable*) p_args)->$class->itable;
                    while ($tmp2565->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp2565 = $tmp2565->next;
                    }
                    $fn2567 $tmp2566 = $tmp2565->methods[0];
                    panda$collections$Iterator* $tmp2568 = $tmp2566(((panda$collections$Iterable*) p_args));
                    a$Iter2564 = $tmp2568;
                    $l2569:;
                    ITable* $tmp2571 = a$Iter2564->$class->itable;
                    while ($tmp2571->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2571 = $tmp2571->next;
                    }
                    $fn2573 $tmp2572 = $tmp2571->methods[0];
                    panda$core$Bit $tmp2574 = $tmp2572(a$Iter2564);
                    panda$core$Bit $tmp2575 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2574);
                    if (!$tmp2575.value) goto $l2570;
                    {
                        ITable* $tmp2577 = a$Iter2564->$class->itable;
                        while ($tmp2577->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2577 = $tmp2577->next;
                        }
                        $fn2579 $tmp2578 = $tmp2577->methods[1];
                        panda$core$Object* $tmp2580 = $tmp2578(a$Iter2564);
                        a2576 = ((org$pandalanguage$pandac$IRNode*) $tmp2580);
                        panda$core$MutableString$append$panda$core$String(msg2551, separator2562);
                        panda$core$MutableString$append$panda$core$Object(msg2551, ((panda$core$Object*) a2576->type));
                        separator2562 = &$s2581;
                    }
                    goto $l2569;
                    $l2570:;
                }
                panda$core$MutableString$append$panda$core$String(msg2551, &$s2582);
                if (((panda$core$Bit) { p_expectedType != NULL }).value) {
                {
                    panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2583, ((panda$core$Object*) p_expectedType));
                    panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2585);
                    panda$core$MutableString$append$panda$core$String(msg2551, $tmp2586);
                }
                }
                panda$core$String* $tmp2587 = panda$core$MutableString$finish$R$panda$core$String(msg2551);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2587);
                return NULL;
            }
            }
            panda$core$Int64 $tmp2588 = panda$collections$Array$get_count$R$panda$core$Int64(methods2541);
            panda$core$Bit $tmp2589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2588, ((panda$core$Int64) { 1 }));
            if ($tmp2589.value) {
            {
                panda$core$Int64 $tmp2591 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                panda$core$Bit $tmp2592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2591, ((panda$core$Int64) { 1 }));
                if ($tmp2592.value) {
                {
                    panda$core$Object* $tmp2593 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
                    target2590 = ((org$pandalanguage$pandac$IRNode*) $tmp2593);
                }
                }
                else {
                {
                    panda$core$Int64 $tmp2594 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
                    panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2594, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp2595.value);
                    target2590 = NULL;
                }
                }
                panda$core$Object* $tmp2596 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(methods2541, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp2597 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->position, target2590, ((org$pandalanguage$pandac$MethodRef*) $tmp2596), p_args);
                return $tmp2597;
            }
            }
            panda$collections$Array* $tmp2599 = (panda$collections$Array*) malloc(40);
            $tmp2599->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2599->refCount.value = 1;
            panda$collections$Array$init($tmp2599);
            children2598 = $tmp2599;
            org$pandalanguage$pandac$IRNode* $tmp2601 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2601->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2601->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2603 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2601, ((panda$core$Int64) { 1003 }), p_m->position, $tmp2603, ((panda$core$Object*) methods2541), ((panda$collections$ListView*) p_m->children));
            panda$collections$Array$add$panda$collections$Array$T(children2598, ((panda$core$Object*) $tmp2601));
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children2598, ((panda$collections$CollectionView*) p_args));
            panda$collections$Array* $tmp2605 = (panda$collections$Array*) malloc(40);
            $tmp2605->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2605->refCount.value = 1;
            panda$collections$Array$init($tmp2605);
            types2604 = $tmp2605;
            {
                ITable* $tmp2608 = ((panda$collections$Iterable*) methods2541)->$class->itable;
                while ($tmp2608->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp2608 = $tmp2608->next;
                }
                $fn2610 $tmp2609 = $tmp2608->methods[0];
                panda$collections$Iterator* $tmp2611 = $tmp2609(((panda$collections$Iterable*) methods2541));
                m$Iter2607 = $tmp2611;
                $l2612:;
                ITable* $tmp2614 = m$Iter2607->$class->itable;
                while ($tmp2614->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp2614 = $tmp2614->next;
                }
                $fn2616 $tmp2615 = $tmp2614->methods[0];
                panda$core$Bit $tmp2617 = $tmp2615(m$Iter2607);
                panda$core$Bit $tmp2618 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2617);
                if (!$tmp2618.value) goto $l2613;
                {
                    ITable* $tmp2620 = m$Iter2607->$class->itable;
                    while ($tmp2620->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp2620 = $tmp2620->next;
                    }
                    $fn2622 $tmp2621 = $tmp2620->methods[1];
                    panda$core$Object* $tmp2623 = $tmp2621(m$Iter2607);
                    m2619 = ((org$pandalanguage$pandac$MethodRef*) $tmp2623);
                    org$pandalanguage$pandac$Type* $tmp2624 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2619);
                    panda$collections$Array$add$panda$collections$Array$T(types2604, ((panda$core$Object*) $tmp2624));
                }
                goto $l2612;
                $l2613:;
            }
            org$pandalanguage$pandac$IRNode* $tmp2625 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2625->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2625->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2627 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp2627->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp2627->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp2627, ((panda$collections$ListView*) types2604));
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2625, ((panda$core$Int64) { 1039 }), p_m->position, $tmp2627, ((panda$collections$ListView*) children2598));
            return $tmp2625;
        }
        break;
        case 1001:
        {
            org$pandalanguage$pandac$IRNode* $tmp2630 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2630->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2630->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp2630, ((panda$core$Int64) { 1038 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload));
            target2629 = $tmp2630;
            org$pandalanguage$pandac$IRNode* $tmp2634 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target2629, &$s2633, p_args);
            org$pandalanguage$pandac$IRNode* $tmp2635 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp2634);
            initCall2632 = $tmp2635;
            if (((panda$core$Bit) { initCall2632 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp2637 = (panda$collections$Array*) malloc(40);
            $tmp2637->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2637->refCount.value = 1;
            panda$collections$Array$init($tmp2637);
            children2636 = $tmp2637;
            panda$collections$Array$add$panda$collections$Array$T(children2636, ((panda$core$Object*) initCall2632));
            org$pandalanguage$pandac$IRNode* $tmp2639 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2639->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2639->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp2639, ((panda$core$Int64) { 1010 }), p_m->position, ((org$pandalanguage$pandac$Type*) p_m->payload), ((panda$collections$ListView*) children2636));
            return $tmp2639;
        }
        break;
        case 1046:
        {
            c2641 = ((org$pandalanguage$pandac$ChoiceEntry*) p_m->payload);
            panda$core$Int64 $tmp2642 = panda$collections$Array$get_count$R$panda$core$Int64(c2641->fields);
            ITable* $tmp2643 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2643->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2643 = $tmp2643->next;
            }
            $fn2645 $tmp2644 = $tmp2643->methods[0];
            panda$core$Int64 $tmp2646 = $tmp2644(((panda$collections$CollectionView*) p_args));
            panda$core$Bit $tmp2647 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2642, $tmp2646);
            if ($tmp2647.value) {
            {
                panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2648, ((panda$core$Object*) p_m));
                panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
                panda$core$Int64 $tmp2652 = panda$collections$Array$get_count$R$panda$core$Int64(c2641->fields);
                panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2651, ((panda$core$Object*) wrap_panda$core$Int64($tmp2652)));
                panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, &$s2654);
                panda$core$Int64 $tmp2657 = panda$collections$Array$get_count$R$panda$core$Int64(c2641->fields);
                panda$core$Bit $tmp2658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2657, ((panda$core$Int64) { 1 }));
                ITable* $tmp2660 = ((panda$core$Formattable*) wrap_panda$core$Bit($tmp2658))->$class->itable;
                while ($tmp2660->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                    $tmp2660 = $tmp2660->next;
                }
                $fn2662 $tmp2661 = $tmp2660->methods[0];
                panda$core$String* $tmp2663 = $tmp2661(((panda$core$Formattable*) wrap_panda$core$Bit($tmp2658)), &$s2659);
                panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2656, $tmp2663);
                panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
                ITable* $tmp2667 = ((panda$collections$CollectionView*) p_args)->$class->itable;
                while ($tmp2667->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp2667 = $tmp2667->next;
                }
                $fn2669 $tmp2668 = $tmp2667->methods[0];
                panda$core$Int64 $tmp2670 = $tmp2668(((panda$collections$CollectionView*) p_args));
                panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2666, ((panda$core$Object*) wrap_panda$core$Int64($tmp2670)));
                panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, &$s2672);
                panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, $tmp2673);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_m->position, $tmp2674);
                return NULL;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, c2641);
            panda$collections$Array* $tmp2676 = (panda$collections$Array*) malloc(40);
            $tmp2676->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp2676->refCount.value = 1;
            panda$collections$Array$init($tmp2676);
            finalArgs2675 = $tmp2676;
            panda$core$UInt64 $tmp2679 = panda$core$Int64$convert$R$panda$core$UInt64(c2641->rawValue);
            value2678 = $tmp2679;
            org$pandalanguage$pandac$IRNode* $tmp2680 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2680->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2680->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2682 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(value2678);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2680, ((panda$core$Int64) { 1004 }), p_m->position, $tmp2682, value2678);
            panda$collections$Array$add$panda$collections$Array$T(finalArgs2675, ((panda$core$Object*) $tmp2680));
            ITable* $tmp2684 = ((panda$collections$CollectionView*) p_args)->$class->itable;
            while ($tmp2684->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2684 = $tmp2684->next;
            }
            $fn2686 $tmp2685 = $tmp2684->methods[0];
            panda$core$Int64 $tmp2687 = $tmp2685(((panda$collections$CollectionView*) p_args));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2683, ((panda$core$Int64) { 0 }), $tmp2687, ((panda$core$Bit) { false }));
            int64_t $tmp2689 = $tmp2683.min.value;
            panda$core$Int64 i2688 = { $tmp2689 };
            int64_t $tmp2691 = $tmp2683.max.value;
            bool $tmp2692 = $tmp2683.inclusive.value;
            if ($tmp2692) goto $l2699; else goto $l2700;
            $l2699:;
            if ($tmp2689 <= $tmp2691) goto $l2693; else goto $l2695;
            $l2700:;
            if ($tmp2689 < $tmp2691) goto $l2693; else goto $l2695;
            $l2693:;
            {
                ITable* $tmp2702 = p_args->$class->itable;
                while ($tmp2702->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2702 = $tmp2702->next;
                }
                $fn2704 $tmp2703 = $tmp2702->methods[0];
                panda$core$Object* $tmp2705 = $tmp2703(p_args, i2688);
                panda$core$Object* $tmp2706 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(c2641->fields, i2688);
                org$pandalanguage$pandac$IRNode* $tmp2707 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2705), ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp2706)->second));
                arg2701 = $tmp2707;
                if (((panda$core$Bit) { arg2701 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(finalArgs2675, ((panda$core$Object*) arg2701));
            }
            $l2696:;
            int64_t $tmp2709 = $tmp2691 - i2688.value;
            if ($tmp2692) goto $l2710; else goto $l2711;
            $l2710:;
            if ($tmp2709 >= 1) goto $l2708; else goto $l2695;
            $l2711:;
            if ($tmp2709 > 1) goto $l2708; else goto $l2695;
            $l2708:;
            i2688.value += 1;
            goto $l2693;
            $l2695:;
            org$pandalanguage$pandac$IRNode* $tmp2715 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp2715->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp2715->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp2717 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp2718 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(c2641->owner);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp2715, ((panda$core$Int64) { 1001 }), p_m->position, $tmp2717, $tmp2718);
            owner2714 = $tmp2715;
            org$pandalanguage$pandac$IRNode* $tmp2719 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, owner2714, ((panda$collections$ListView*) finalArgs2675));
            return $tmp2719;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$IRNode* $tmp2721 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
            resolved2720 = $tmp2721;
            if (((panda$core$Bit) { resolved2720 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2722, ((panda$core$Object*) resolved2720->type));
            panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, &$s2724);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, resolved2720->position, $tmp2725);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$collections$Array* subtypes2726;
    panda$core$MutableString* typeName2729;
    panda$core$String* separator2733;
    panda$collections$Iterator* p$Iter2735;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2747;
    panda$core$Int64 kind2753;
    panda$core$Char8 $tmp2759;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2727 = (panda$collections$Array*) malloc(40);
    $tmp2727->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2727->refCount.value = 1;
    panda$collections$Array$init($tmp2727);
    subtypes2726 = $tmp2727;
    panda$core$MutableString* $tmp2730 = (panda$core$MutableString*) malloc(48);
    $tmp2730->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2730->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2730, &$s2732);
    typeName2729 = $tmp2730;
    separator2733 = &$s2734;
    {
        ITable* $tmp2736 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2736->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2736 = $tmp2736->next;
        }
        $fn2738 $tmp2737 = $tmp2736->methods[0];
        panda$collections$Iterator* $tmp2739 = $tmp2737(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2735 = $tmp2739;
        $l2740:;
        ITable* $tmp2742 = p$Iter2735->$class->itable;
        while ($tmp2742->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2742 = $tmp2742->next;
        }
        $fn2744 $tmp2743 = $tmp2742->methods[0];
        panda$core$Bit $tmp2745 = $tmp2743(p$Iter2735);
        panda$core$Bit $tmp2746 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2745);
        if (!$tmp2746.value) goto $l2741;
        {
            ITable* $tmp2748 = p$Iter2735->$class->itable;
            while ($tmp2748->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2748 = $tmp2748->next;
            }
            $fn2750 $tmp2749 = $tmp2748->methods[1];
            panda$core$Object* $tmp2751 = $tmp2749(p$Iter2735);
            p2747 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2751);
            panda$core$MutableString$append$panda$core$String(typeName2729, separator2733);
            panda$core$MutableString$append$panda$core$String(typeName2729, ((org$pandalanguage$pandac$Symbol*) p2747->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2726, ((panda$core$Object*) p2747->type));
            separator2733 = &$s2752;
        }
        goto $l2740;
        $l2741:;
    }
    panda$core$Bit $tmp2754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp2754.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2729, &$s2755);
        kind2753 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2729, &$s2756);
        kind2753 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2726, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2757 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2758 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2757);
    if ($tmp2758.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2729, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2759, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2729, $tmp2759);
    org$pandalanguage$pandac$Type* $tmp2760 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2760->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2760->refCount.value = 1;
    panda$core$String* $tmp2762 = panda$core$MutableString$finish$R$panda$core$String(typeName2729);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2760, $tmp2762, kind2753, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2726), ((panda$core$Bit) { true }));
    return $tmp2760;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    panda$collections$Array* subtypes2763;
    panda$core$MutableString* typeName2766;
    panda$collections$Iterator* p$Iter2770;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2782;
    panda$core$Int64 kind2788;
    panda$core$Char8 $tmp2794;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    panda$collections$Array* $tmp2764 = (panda$collections$Array*) malloc(40);
    $tmp2764->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2764->refCount.value = 1;
    panda$collections$Array$init($tmp2764);
    subtypes2763 = $tmp2764;
    panda$core$MutableString* $tmp2767 = (panda$core$MutableString*) malloc(48);
    $tmp2767->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp2767->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp2767, &$s2769);
    typeName2766 = $tmp2767;
    panda$core$MutableString$append$panda$core$String(typeName2766, ((org$pandalanguage$pandac$Symbol*) p_selfType)->name);
    panda$collections$Array$add$panda$collections$Array$T(subtypes2763, ((panda$core$Object*) p_selfType));
    {
        ITable* $tmp2771 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2771->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2771 = $tmp2771->next;
        }
        $fn2773 $tmp2772 = $tmp2771->methods[0];
        panda$collections$Iterator* $tmp2774 = $tmp2772(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2770 = $tmp2774;
        $l2775:;
        ITable* $tmp2777 = p$Iter2770->$class->itable;
        while ($tmp2777->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2777 = $tmp2777->next;
        }
        $fn2779 $tmp2778 = $tmp2777->methods[0];
        panda$core$Bit $tmp2780 = $tmp2778(p$Iter2770);
        panda$core$Bit $tmp2781 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2780);
        if (!$tmp2781.value) goto $l2776;
        {
            ITable* $tmp2783 = p$Iter2770->$class->itable;
            while ($tmp2783->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2783 = $tmp2783->next;
            }
            $fn2785 $tmp2784 = $tmp2783->methods[1];
            panda$core$Object* $tmp2786 = $tmp2784(p$Iter2770);
            p2782 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2786);
            panda$core$MutableString$append$panda$core$String(typeName2766, &$s2787);
            panda$core$MutableString$append$panda$core$String(typeName2766, ((org$pandalanguage$pandac$Symbol*) p2782->type)->name);
            panda$collections$Array$add$panda$collections$Array$T(subtypes2763, ((panda$core$Object*) p2782->type));
        }
        goto $l2775;
        $l2776:;
    }
    panda$core$Bit $tmp2789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 1 }));
    if ($tmp2789.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2766, &$s2790);
        kind2788 = ((panda$core$Int64) { 24 });
    }
    }
    else {
    {
        panda$core$MutableString$append$panda$core$String(typeName2766, &$s2791);
        kind2788 = ((panda$core$Int64) { 25 });
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(subtypes2763, ((panda$core$Object*) p_m->returnType));
    org$pandalanguage$pandac$Type* $tmp2792 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2793 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp2792);
    if ($tmp2793.value) {
    {
        panda$core$MutableString$append$panda$core$String(typeName2766, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp2794, ((panda$core$UInt8) { 41 }));
    panda$core$MutableString$append$panda$core$Char8(typeName2766, $tmp2794);
    org$pandalanguage$pandac$Type* $tmp2795 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp2795->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp2795->refCount.value = 1;
    panda$core$String* $tmp2797 = panda$core$MutableString$finish$R$panda$core$String(typeName2766);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp2795, $tmp2797, kind2788, ((org$pandalanguage$pandac$Symbol*) p_m)->position, ((panda$collections$ListView*) subtypes2763), ((panda$core$Bit) { true }));
    return $tmp2795;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$MethodDecl* inherited2798;
    org$pandalanguage$pandac$MethodDecl* $tmp2799 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2798 = $tmp2799;
    if (((panda$core$Bit) { inherited2798 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2800 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, p_m);
        return $tmp2800;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2801 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self, inherited2798);
    return $tmp2801;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* $tmp2802 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp2803 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, $tmp2802);
    return $tmp2803;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$Type* p_selfType) {
    org$pandalanguage$pandac$MethodDecl* inherited2804;
    org$pandalanguage$pandac$MethodDecl* $tmp2805 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_m);
    inherited2804 = $tmp2805;
    if (((panda$core$Bit) { inherited2804 == NULL }).value) {
    {
        org$pandalanguage$pandac$Type* $tmp2806 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, p_m, p_selfType);
        return $tmp2806;
    }
    }
    org$pandalanguage$pandac$Type* $tmp2807 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self, inherited2804, p_selfType);
    return $tmp2807;
}
panda$core$String* org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s2808;
        }
        break;
        case 52:
        {
            return &$s2809;
        }
        break;
        case 53:
        {
            return &$s2810;
        }
        break;
        case 54:
        {
            return &$s2811;
        }
        break;
        case 55:
        {
            return &$s2812;
        }
        break;
        case 56:
        {
            return &$s2813;
        }
        break;
        case 57:
        {
            return &$s2814;
        }
        break;
        case 58:
        {
            return &$s2815;
        }
        break;
        case 59:
        {
            return &$s2816;
        }
        break;
        case 63:
        {
            return &$s2817;
        }
        break;
        case 62:
        {
            return &$s2818;
        }
        break;
        case 65:
        {
            return &$s2819;
        }
        break;
        case 64:
        {
            return &$s2820;
        }
        break;
        case 68:
        {
            return &$s2821;
        }
        break;
        case 69:
        {
            return &$s2822;
        }
        break;
        case 66:
        {
            return &$s2823;
        }
        break;
        case 67:
        {
            return &$s2824;
        }
        break;
        case 70:
        {
            return &$s2825;
        }
        break;
        case 71:
        {
            return &$s2826;
        }
        break;
        case 49:
        {
            return &$s2827;
        }
        break;
        case 50:
        {
            return &$s2828;
        }
        break;
        case 72:
        {
            return &$s2829;
        }
        break;
        case 1:
        {
            return &$s2830;
        }
        break;
        case 101:
        {
            return &$s2831;
        }
        break;
        case 73:
        {
            return &$s2832;
        }
        break;
        case 60:
        {
            return &$s2833;
        }
        break;
        case 61:
        {
            return &$s2834;
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
            panda$core$Int64 $tmp2835 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
            panda$core$Bit $tmp2836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2835, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2836.value);
            panda$core$Bit $tmp2837 = panda$core$Bit$$NOT$R$panda$core$Bit(((panda$core$Bit$wrapper*) p_expr->payload)->value);
            if ($tmp2837.value) {
            {
                panda$core$Object* $tmp2838 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
                panda$core$Bit $tmp2839 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2838));
                return $tmp2839;
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
            panda$core$Object* $tmp2840 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp2841 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp2840));
            return $tmp2841;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$core$Int64 l2867;
    panda$core$Int64 r2869;
    panda$core$UInt64 v2871;
    panda$core$UInt64 v2877;
    panda$core$UInt64 v2883;
    panda$core$UInt64 v2889;
    panda$core$UInt64 v2895;
    panda$core$UInt64 v2925;
    panda$core$UInt64 v2931;
    panda$core$UInt64 v2937;
    panda$core$UInt64 v2943;
    panda$core$UInt64 v2949;
    panda$core$Bit $tmp2843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2842 = $tmp2843.value;
    if ($tmp2842) goto $l2844;
    panda$core$Bit $tmp2845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    $tmp2842 = $tmp2845.value;
    $l2844:;
    panda$core$Bit $tmp2846 = { $tmp2842 };
    PANDA_ASSERT($tmp2846.value);
    panda$core$Bit $tmp2848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp2847 = $tmp2848.value;
    if ($tmp2847) goto $l2849;
    panda$core$Bit $tmp2850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2847 = $tmp2850.value;
    $l2849:;
    panda$core$Bit $tmp2851 = { $tmp2847 };
    PANDA_ASSERT($tmp2851.value);
    panda$core$Bit $tmp2854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1032 }));
    bool $tmp2853 = $tmp2854.value;
    if ($tmp2853) goto $l2855;
    panda$core$UInt64 $tmp2857 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2858 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_left->payload)->value, $tmp2857);
    bool $tmp2856 = $tmp2858.value;
    if (!$tmp2856) goto $l2859;
    panda$core$Bit $tmp2860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_right->kind, ((panda$core$Int64) { 1032 }));
    $tmp2856 = $tmp2860.value;
    $l2859:;
    panda$core$Bit $tmp2861 = { $tmp2856 };
    $tmp2853 = $tmp2861.value;
    $l2855:;
    panda$core$Bit $tmp2862 = { $tmp2853 };
    bool $tmp2852 = $tmp2862.value;
    if ($tmp2852) goto $l2863;
    panda$core$UInt64 $tmp2864 = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64) { 9223372036854775807 }));
    panda$core$Bit $tmp2865 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p_right->payload)->value, $tmp2864);
    $tmp2852 = $tmp2865.value;
    $l2863:;
    panda$core$Bit $tmp2866 = { $tmp2852 };
    if ($tmp2866.value) {
    {
        panda$core$Int64 $tmp2868 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_left->payload)->value);
        l2867 = $tmp2868;
        panda$core$Int64 $tmp2870 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_right->payload)->value);
        r2869 = $tmp2870;
        switch (p_op.value) {
            case 51:
            {
                panda$core$Int64 $tmp2872 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(l2867, r2869);
                panda$core$UInt64 $tmp2873 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2872);
                v2871 = $tmp2873;
                org$pandalanguage$pandac$IRNode* $tmp2874 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2874->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2874->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2876 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2871);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2874, ((panda$core$Int64) { 1004 }), p_position, $tmp2876, v2871);
                return $tmp2874;
            }
            break;
            case 52:
            {
                panda$core$Int64 $tmp2878 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(l2867, r2869);
                panda$core$UInt64 $tmp2879 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2878);
                v2877 = $tmp2879;
                org$pandalanguage$pandac$IRNode* $tmp2880 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2880->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2880->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2882 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2877);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2880, ((panda$core$Int64) { 1004 }), p_position, $tmp2882, v2877);
                return $tmp2880;
            }
            break;
            case 53:
            {
                panda$core$Int64 $tmp2884 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(l2867, r2869);
                panda$core$UInt64 $tmp2885 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2884);
                v2883 = $tmp2885;
                org$pandalanguage$pandac$IRNode* $tmp2886 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2886->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2886->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2888 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2883);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2886, ((panda$core$Int64) { 1004 }), p_position, $tmp2888, v2883);
                return $tmp2886;
            }
            break;
            case 55:
            {
                panda$core$Int64 $tmp2890 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(l2867, r2869);
                panda$core$UInt64 $tmp2891 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2890);
                v2889 = $tmp2891;
                org$pandalanguage$pandac$IRNode* $tmp2892 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2892->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2892->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2894 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2889);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2892, ((panda$core$Int64) { 1004 }), p_position, $tmp2894, v2889);
                return $tmp2892;
            }
            break;
            case 56:
            {
                panda$core$Int64 $tmp2896 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(l2867, r2869);
                panda$core$UInt64 $tmp2897 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2896);
                v2895 = $tmp2897;
                org$pandalanguage$pandac$IRNode* $tmp2898 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2898->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2898->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2900 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2895);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2898, ((panda$core$Int64) { 1004 }), p_position, $tmp2900, v2895);
                return $tmp2898;
            }
            break;
            case 58:
            {
                org$pandalanguage$pandac$IRNode* $tmp2901 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2901->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2901->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2903 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(l2867, r2869);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2901, ((panda$core$Int64) { 1011 }), p_position, $tmp2903, $tmp2904);
                return $tmp2901;
            }
            break;
            case 59:
            {
                org$pandalanguage$pandac$IRNode* $tmp2905 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2905->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2905->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2907 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2908 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(l2867, r2869);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2905, ((panda$core$Int64) { 1011 }), p_position, $tmp2907, $tmp2908);
                return $tmp2905;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$IRNode* $tmp2909 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2909->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2909->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2911 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2912 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(l2867, r2869);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2909, ((panda$core$Int64) { 1011 }), p_position, $tmp2911, $tmp2912);
                return $tmp2909;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$IRNode* $tmp2913 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2913->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2913->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2915 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2916 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(l2867, r2869);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2913, ((panda$core$Int64) { 1011 }), p_position, $tmp2915, $tmp2916);
                return $tmp2913;
            }
            break;
            case 64:
            {
                org$pandalanguage$pandac$IRNode* $tmp2917 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2917->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2917->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2919 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2920 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(l2867, r2869);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2917, ((panda$core$Int64) { 1011 }), p_position, $tmp2919, $tmp2920);
                return $tmp2917;
            }
            break;
            case 65:
            {
                org$pandalanguage$pandac$IRNode* $tmp2921 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2921->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2921->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2923 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp2924 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(l2867, r2869);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp2921, ((panda$core$Int64) { 1011 }), p_position, $tmp2923, $tmp2924);
                return $tmp2921;
            }
            break;
            case 67:
            {
                panda$core$Int64 $tmp2926 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(l2867, r2869);
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
            case 69:
            {
                panda$core$Int64 $tmp2932 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(l2867, r2869);
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
            case 71:
            {
                panda$core$Int64 $tmp2938 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(l2867, r2869);
                panda$core$UInt64 $tmp2939 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2938);
                v2937 = $tmp2939;
                org$pandalanguage$pandac$IRNode* $tmp2940 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2940->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2940->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2942 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2937);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2940, ((panda$core$Int64) { 1004 }), p_position, $tmp2942, v2937);
                return $tmp2940;
            }
            break;
            case 72:
            {
                panda$core$Int64 $tmp2944 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(l2867, r2869);
                panda$core$UInt64 $tmp2945 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2944);
                v2943 = $tmp2945;
                org$pandalanguage$pandac$IRNode* $tmp2946 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2946->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2946->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2948 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2943);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2946, ((panda$core$Int64) { 1004 }), p_position, $tmp2948, v2943);
                return $tmp2946;
            }
            break;
            case 1:
            {
                panda$core$Int64 $tmp2950 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(l2867, r2869);
                panda$core$UInt64 $tmp2951 = panda$core$Int64$convert$R$panda$core$UInt64($tmp2950);
                v2949 = $tmp2951;
                org$pandalanguage$pandac$IRNode* $tmp2952 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp2952->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp2952->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp2954 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(v2949);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2952, ((panda$core$Int64) { 1004 }), p_position, $tmp2954, v2949);
                return $tmp2952;
            }
            break;
        }
    }
    }
    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, &$s2955);
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    panda$core$Bit $tmp2956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1009 }));
    if ($tmp2956.value) {
    {
        panda$core$Object* $tmp2957 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
        return ((org$pandalanguage$pandac$IRNode*) $tmp2957);
    }
    }
    return p_expr;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right) {
    panda$collections$Array* args2962;
    org$pandalanguage$pandac$IRNode* resolved2970;
    panda$collections$Array* children2975;
    panda$core$UInt64 baseId2981;
    org$pandalanguage$pandac$IRNode* base2982;
    panda$core$UInt64 indexId2989;
    org$pandalanguage$pandac$IRNode* index2990;
    org$pandalanguage$pandac$IRNode* baseRef2995;
    org$pandalanguage$pandac$IRNode* indexRef2998;
    org$pandalanguage$pandac$IRNode* rhsIndex3001;
    org$pandalanguage$pandac$IRNode* value3003;
    panda$core$Bit $tmp2958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_left->kind, ((panda$core$Int64) { 1040 }));
    PANDA_ASSERT($tmp2958.value);
    panda$core$Int64 $tmp2959 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_left->children);
    panda$core$Bit $tmp2960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2959, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2960.value);
    panda$core$Bit $tmp2961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp2961.value) {
    {
        panda$collections$Array* $tmp2963 = (panda$collections$Array*) malloc(40);
        $tmp2963->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp2963->refCount.value = 1;
        panda$collections$Array$init($tmp2963);
        args2962 = $tmp2963;
        panda$core$Object* $tmp2965 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 1 }));
        panda$collections$Array$add$panda$collections$Array$T(args2962, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2965)));
        panda$collections$Array$add$panda$collections$Array$T(args2962, ((panda$core$Object*) p_right));
        panda$core$Object* $tmp2966 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_left->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp2968 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$IRNode*) $tmp2966), &$s2967, ((panda$collections$ListView*) args2962));
        return $tmp2968;
    }
    }
    panda$core$Bit $tmp2969 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    PANDA_ASSERT($tmp2969.value);
    org$pandalanguage$pandac$IRNode* $tmp2971 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, p_left);
    resolved2970 = $tmp2971;
    if (((panda$core$Bit) { resolved2970 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp2972 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, resolved2970);
    resolved2970 = $tmp2972;
    panda$core$Int64 $tmp2973 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(resolved2970->children);
    panda$core$Bit $tmp2974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2973, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2974.value);
    panda$collections$Array* $tmp2976 = (panda$collections$Array*) malloc(40);
    $tmp2976->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2976->refCount.value = 1;
    panda$collections$Array$init($tmp2976);
    children2975 = $tmp2976;
    panda$core$Object* $tmp2978 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2970->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp2979 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, ((org$pandalanguage$pandac$IRNode*) $tmp2978));
    panda$collections$Array$add$panda$collections$Array$T(children2975, ((panda$core$Object*) $tmp2979));
    panda$core$UInt64 $tmp2980 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2980;
    baseId2981 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2983 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2983->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2983->refCount.value = 1;
    panda$core$Object* $tmp2985 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2975, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2986 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2975, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2983, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2985)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2986)->type, ((panda$core$Object*) wrap_panda$core$UInt64(baseId2981)), ((panda$collections$ListView*) children2975));
    base2982 = $tmp2983;
    panda$collections$Array$clear(children2975);
    panda$core$Object* $tmp2987 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(resolved2970->children, ((panda$core$Int64) { 1 }));
    panda$collections$Array$add$panda$collections$Array$T(children2975, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp2987)));
    panda$core$UInt64 $tmp2988 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
    self->reusedValueCount = $tmp2988;
    indexId2989 = self->reusedValueCount;
    org$pandalanguage$pandac$IRNode* $tmp2991 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2991->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2991->refCount.value = 1;
    panda$core$Object* $tmp2993 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2975, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2994 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children2975, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2991, ((panda$core$Int64) { 1027 }), ((org$pandalanguage$pandac$IRNode*) $tmp2993)->position, ((org$pandalanguage$pandac$IRNode*) $tmp2994)->type, ((panda$core$Object*) wrap_panda$core$UInt64(indexId2989)), ((panda$collections$ListView*) children2975));
    index2990 = $tmp2991;
    org$pandalanguage$pandac$IRNode* $tmp2996 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2996->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2996->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2996, ((panda$core$Int64) { 1028 }), base2982->position, base2982->type, baseId2981);
    baseRef2995 = $tmp2996;
    org$pandalanguage$pandac$IRNode* $tmp2999 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp2999->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp2999->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp2999, ((panda$core$Int64) { 1028 }), index2990->position, index2990->type, indexId2989);
    indexRef2998 = $tmp2999;
    org$pandalanguage$pandac$IRNode* $tmp3002 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, baseRef2995, ((panda$core$Int64) { 101 }), indexRef2998);
    rhsIndex3001 = $tmp3002;
    if (((panda$core$Bit) { rhsIndex3001 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64 $tmp3004 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3005 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, rhsIndex3001, $tmp3004, p_right);
    value3003 = $tmp3005;
    if (((panda$core$Bit) { value3003 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3008 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(rhsIndex3001->type);
    bool $tmp3007 = $tmp3008.value;
    if (!$tmp3007) goto $l3009;
    panda$core$Bit $tmp3010 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_right->type);
    $tmp3007 = $tmp3010.value;
    $l3009:;
    panda$core$Bit $tmp3011 = { $tmp3007 };
    bool $tmp3006 = $tmp3011.value;
    if (!$tmp3006) goto $l3012;
    panda$core$Bit $tmp3013 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(rhsIndex3001->type, value3003->type);
    $tmp3006 = $tmp3013.value;
    $l3012:;
    panda$core$Bit $tmp3014 = { $tmp3006 };
    if ($tmp3014.value) {
    {
        panda$collections$Array* $tmp3016 = (panda$collections$Array*) malloc(40);
        $tmp3016->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3016->refCount.value = 1;
        panda$collections$Array$init($tmp3016);
        org$pandalanguage$pandac$IRNode* $tmp3018 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value3003, &$s3015, ((panda$collections$ListView*) $tmp3016), resolved2970->type);
        value3003 = $tmp3018;
        if (((panda$core$Bit) { value3003 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array$clear(children2975);
    panda$collections$Array$add$panda$collections$Array$T(children2975, ((panda$core$Object*) index2990));
    panda$collections$Array$add$panda$collections$Array$T(children2975, ((panda$core$Object*) value3003));
    org$pandalanguage$pandac$IRNode* $tmp3020 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, base2982, &$s3019, ((panda$collections$ListView*) children2975));
    return $tmp3020;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_rawLeft, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_rawRight) {
    org$pandalanguage$pandac$IRNode* left3021;
    org$pandalanguage$pandac$IRNode* right3022;
    panda$core$Int64 kind3046;
    org$pandalanguage$pandac$IRNode* resolved3053;
    panda$collections$Array* children3055;
    org$pandalanguage$pandac$IRNode* resolved3062;
    panda$collections$Array* children3064;
    panda$collections$Array* children3081;
    org$pandalanguage$pandac$IRNode* reusedLeft3086;
    org$pandalanguage$pandac$IRNode* toNonNullable3089;
    org$pandalanguage$pandac$IRNode* comparison3092;
    org$pandalanguage$pandac$IRNode* nullCheck3094;
    org$pandalanguage$pandac$ClassDecl* cl3114;
    org$pandalanguage$pandac$ClassDecl* cl3131;
    org$pandalanguage$pandac$IRNode* finalLeft3147;
    org$pandalanguage$pandac$IRNode* finalRight3150;
    panda$collections$Array* children3153;
    panda$collections$Array* children3167;
    panda$collections$Array* children3179;
    org$pandalanguage$pandac$IRNode* reusedLeft3185;
    org$pandalanguage$pandac$ClassDecl* cl3203;
    panda$collections$ListView* parameters3205;
    org$pandalanguage$pandac$Symbol* methods3207;
    org$pandalanguage$pandac$Type* type3211;
    panda$collections$Array* types3212;
    org$pandalanguage$pandac$MethodDecl* m3216;
    panda$collections$Iterator* m$Iter3221;
    org$pandalanguage$pandac$MethodDecl* m3233;
    panda$collections$Array* children3244;
    panda$collections$Array* children3273;
    panda$collections$Array* children3289;
    org$pandalanguage$pandac$Type* resultType3312;
    org$pandalanguage$pandac$IRNode* result3316;
    org$pandalanguage$pandac$IRNode* resolved3319;
    org$pandalanguage$pandac$IRNode* target3325;
    left3021 = p_rawLeft;
    right3022 = p_rawRight;
    panda$core$Bit $tmp3023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3021->type->typeKind, ((panda$core$Int64) { 15 }));
    if ($tmp3023.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3024 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3022);
        right3022 = $tmp3024;
        if (((panda$core$Bit) { right3022 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Int64$nullable $tmp3025 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, left3021, right3022->type);
        if (((panda$core$Bit) { $tmp3025.nonnull }).value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3026 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3021, right3022->type);
            left3021 = $tmp3026;
        }
        }
    }
    }
    panda$core$Bit $tmp3028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3022->type->typeKind, ((panda$core$Int64) { 15 }));
    bool $tmp3027 = $tmp3028.value;
    if (!$tmp3027) goto $l3029;
    panda$core$Int64$nullable $tmp3030 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3022, left3021->type);
    $tmp3027 = ((panda$core$Bit) { $tmp3030.nonnull }).value;
    $l3029:;
    panda$core$Bit $tmp3031 = { $tmp3027 };
    if ($tmp3031.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3032 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3022, left3021->type);
        right3022 = $tmp3032;
    }
    }
    panda$core$Bit $tmp3036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp3035 = $tmp3036.value;
    if ($tmp3035) goto $l3037;
    panda$core$Bit $tmp3038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp3035 = $tmp3038.value;
    $l3037:;
    panda$core$Bit $tmp3039 = { $tmp3035 };
    bool $tmp3034 = $tmp3039.value;
    if ($tmp3034) goto $l3040;
    panda$core$Bit $tmp3041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    $tmp3034 = $tmp3041.value;
    $l3040:;
    panda$core$Bit $tmp3042 = { $tmp3034 };
    bool $tmp3033 = $tmp3042.value;
    if ($tmp3033) goto $l3043;
    panda$core$Bit $tmp3044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp3033 = $tmp3044.value;
    $l3043:;
    panda$core$Bit $tmp3045 = { $tmp3033 };
    if ($tmp3045.value) {
    {
        panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        bool $tmp3047 = $tmp3048.value;
        if ($tmp3047) goto $l3049;
        panda$core$Bit $tmp3050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
        $tmp3047 = $tmp3050.value;
        $l3049:;
        panda$core$Bit $tmp3051 = { $tmp3047 };
        if ($tmp3051.value) {
        {
            kind3046 = ((panda$core$Int64) { 1035 });
        }
        }
        else {
        {
            kind3046 = ((panda$core$Int64) { 1036 });
        }
        }
        panda$core$Bit $tmp3052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3021->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3052.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3054 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3022);
            resolved3053 = $tmp3054;
            if (((panda$core$Bit) { resolved3053 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3056 = (panda$collections$Array*) malloc(40);
            $tmp3056->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3056->refCount.value = 1;
            panda$collections$Array$init($tmp3056);
            children3055 = $tmp3056;
            panda$collections$Array$add$panda$collections$Array$T(children3055, ((panda$core$Object*) resolved3053));
            org$pandalanguage$pandac$IRNode* $tmp3058 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3058->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3058->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3060 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3058, kind3046, p_position, $tmp3060, ((panda$collections$ListView*) children3055));
            return $tmp3058;
        }
        }
        panda$core$Bit $tmp3061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3022->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3061.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3063 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3021);
            resolved3062 = $tmp3063;
            if (((panda$core$Bit) { resolved3062 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3065 = (panda$collections$Array*) malloc(40);
            $tmp3065->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3065->refCount.value = 1;
            panda$collections$Array$init($tmp3065);
            children3064 = $tmp3065;
            panda$collections$Array$add$panda$collections$Array$T(children3064, ((panda$core$Object*) resolved3062));
            org$pandalanguage$pandac$IRNode* $tmp3067 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3067->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3067->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3069 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3067, kind3046, p_position, $tmp3069, ((panda$collections$ListView*) children3064));
            return $tmp3067;
        }
        }
    }
    }
    panda$core$Bit $tmp3072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
    bool $tmp3071 = $tmp3072.value;
    if ($tmp3071) goto $l3073;
    panda$core$Bit $tmp3074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
    $tmp3071 = $tmp3074.value;
    $l3073:;
    panda$core$Bit $tmp3075 = { $tmp3071 };
    bool $tmp3070 = $tmp3075.value;
    if (!$tmp3070) goto $l3076;
    panda$core$Bit $tmp3077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3021->type->typeKind, ((panda$core$Int64) { 11 }));
    $tmp3070 = $tmp3077.value;
    $l3076:;
    panda$core$Bit $tmp3078 = { $tmp3070 };
    if ($tmp3078.value) {
    {
        panda$core$Bit $tmp3079 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(right3022->kind, ((panda$core$Int64) { 1030 }));
        PANDA_ASSERT($tmp3079.value);
        panda$core$UInt64 $tmp3080 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp3080;
        panda$collections$Array* $tmp3082 = (panda$collections$Array*) malloc(40);
        $tmp3082->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3082->refCount.value = 1;
        panda$collections$Array$init($tmp3082);
        children3081 = $tmp3082;
        panda$collections$Array$add$panda$collections$Array$T(children3081, ((panda$core$Object*) left3021));
        org$pandalanguage$pandac$IRNode* $tmp3084 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3084->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3084->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3084, ((panda$core$Int64) { 1027 }), left3021->position, left3021->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children3081));
        left3021 = $tmp3084;
        org$pandalanguage$pandac$IRNode* $tmp3087 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3087->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3087->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3087, ((panda$core$Int64) { 1028 }), left3021->position, left3021->type, self->reusedValueCount);
        reusedLeft3086 = $tmp3087;
        panda$core$Object* $tmp3090 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(left3021->type->subtypes, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3091 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, reusedLeft3086, ((org$pandalanguage$pandac$Type*) $tmp3090));
        toNonNullable3089 = $tmp3091;
        org$pandalanguage$pandac$IRNode* $tmp3093 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, toNonNullable3089, p_op, right3022);
        comparison3092 = $tmp3093;
        if (((panda$core$Bit) { comparison3092 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3095 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3095->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3095->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3097 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3095, ((panda$core$Int64) { 1030 }), p_position, $tmp3097);
        org$pandalanguage$pandac$IRNode* $tmp3098 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3021, ((panda$core$Int64) { 59 }), $tmp3095);
        nullCheck3094 = $tmp3098;
        if (((panda$core$Bit) { nullCheck3094 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(children3081);
        panda$collections$Array$add$panda$collections$Array$T(children3081, ((panda$core$Object*) nullCheck3094));
        panda$collections$Array$add$panda$collections$Array$T(children3081, ((panda$core$Object*) comparison3092));
        org$pandalanguage$pandac$IRNode* $tmp3099 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3099->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3099->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3101 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3099, ((panda$core$Int64) { 1011 }), p_position, $tmp3101, $tmp3102);
        org$pandalanguage$pandac$Type* $tmp3103 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3104 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3099, $tmp3103);
        panda$collections$Array$add$panda$collections$Array$T(children3081, ((panda$core$Object*) $tmp3104));
        org$pandalanguage$pandac$IRNode* $tmp3105 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3105->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3105->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3107 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3105, ((panda$core$Int64) { 1044 }), p_position, $tmp3107, ((panda$collections$ListView*) children3081));
        return $tmp3105;
    }
    }
    panda$core$Bit $tmp3109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 60 }));
    bool $tmp3108 = $tmp3109.value;
    if ($tmp3108) goto $l3110;
    panda$core$Bit $tmp3111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 61 }));
    $tmp3108 = $tmp3111.value;
    $l3110:;
    panda$core$Bit $tmp3112 = { $tmp3108 };
    if ($tmp3112.value) {
    {
        panda$core$Bit $tmp3113 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left3021->type);
        if ($tmp3113.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3115 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left3021->type);
            cl3114 = $tmp3115;
            if (((panda$core$Bit) { cl3114 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3116 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3114);
            if ($tmp3116.value) {
            {
                panda$core$String* $tmp3118 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3117, $tmp3118);
                panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, &$s3120);
                panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3121, ((panda$core$Object*) left3021->type));
                panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, &$s3123);
                panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3125, ((panda$core$Object*) right3022->type));
                panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, &$s3127);
                panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, $tmp3128);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3129);
            }
            }
        }
        }
        panda$core$Bit $tmp3130 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(right3022->type);
        if ($tmp3130.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3132 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, right3022->type);
            cl3131 = $tmp3132;
            if (((panda$core$Bit) { cl3131 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Bit $tmp3133 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, cl3131);
            if ($tmp3133.value) {
            {
                panda$core$String* $tmp3135 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
                panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3134, $tmp3135);
                panda$core$String* $tmp3138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3137);
                panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3138, ((panda$core$Object*) left3021->type));
                panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, &$s3140);
                panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3142, ((panda$core$Object*) right3022->type));
                panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3144);
                panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, $tmp3145);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3146);
            }
            }
        }
        }
        org$pandalanguage$pandac$Type* $tmp3148 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3149 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, left3021, $tmp3148);
        finalLeft3147 = $tmp3149;
        if (((panda$core$Bit) { finalLeft3147 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp3151 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp3152 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3022, $tmp3151);
        finalRight3150 = $tmp3152;
        if (((panda$core$Bit) { finalRight3150 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp3154 = (panda$collections$Array*) malloc(40);
        $tmp3154->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3154->refCount.value = 1;
        panda$collections$Array$init($tmp3154);
        children3153 = $tmp3154;
        panda$collections$Array$add$panda$collections$Array$T(children3153, ((panda$core$Object*) finalLeft3147));
        panda$collections$Array$add$panda$collections$Array$T(children3153, ((panda$core$Object*) finalRight3150));
        org$pandalanguage$pandac$IRNode* $tmp3156 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3156->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3156->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3158 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3156, ((panda$core$Int64) { 1023 }), p_position, $tmp3158, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3153));
        return $tmp3156;
    }
    }
    panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 73 }));
    if ($tmp3159.value) {
    {
        panda$core$Bit $tmp3160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3021->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3160.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3161 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3021, p_op, right3022);
            return $tmp3161;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3162 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3021);
        left3021 = $tmp3162;
        if (((panda$core$Bit) { left3021 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3163 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3022, left3021->type);
        right3022 = $tmp3163;
        if (((panda$core$Bit) { right3022 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3164 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3021);
        panda$core$Bit $tmp3165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3164);
        if ($tmp3165.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left3021->position, &$s3166);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3168 = (panda$collections$Array*) malloc(40);
        $tmp3168->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3168->refCount.value = 1;
        panda$collections$Array$init($tmp3168);
        children3167 = $tmp3168;
        panda$collections$Array$add$panda$collections$Array$T(children3167, ((panda$core$Object*) left3021));
        panda$collections$Array$add$panda$collections$Array$T(children3167, ((panda$core$Object*) right3022));
        org$pandalanguage$pandac$IRNode* $tmp3170 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3170->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3170->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3170, ((panda$core$Int64) { 1023 }), p_position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children3167));
        return $tmp3170;
    }
    }
    panda$core$Bit $tmp3172 = org$pandalanguage$pandac$Compiler$isAssignment$panda$core$Int64$R$panda$core$Bit(p_op);
    if ($tmp3172.value) {
    {
        panda$core$Bit $tmp3173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3021->kind, ((panda$core$Int64) { 1040 }));
        if ($tmp3173.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp3174 = org$pandalanguage$pandac$Compiler$compileIndexedAssignment$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3021, p_op, right3022);
            return $tmp3174;
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3175 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3021);
        left3021 = $tmp3175;
        if (((panda$core$Bit) { left3021 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3176 = org$pandalanguage$pandac$Compiler$isLValue$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, left3021);
        panda$core$Bit $tmp3177 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3176);
        if ($tmp3177.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, left3021->position, &$s3178);
            return NULL;
        }
        }
        panda$collections$Array* $tmp3180 = (panda$collections$Array*) malloc(40);
        $tmp3180->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3180->refCount.value = 1;
        panda$collections$Array$init($tmp3180);
        children3179 = $tmp3180;
        panda$collections$Array$add$panda$collections$Array$T(children3179, ((panda$core$Object*) left3021));
        panda$core$UInt64 $tmp3182 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(self->reusedValueCount, ((panda$core$UInt64) { 1 }));
        self->reusedValueCount = $tmp3182;
        org$pandalanguage$pandac$IRNode* $tmp3183 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3183->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3183->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3183, ((panda$core$Int64) { 1027 }), left3021->position, left3021->type, ((panda$core$Object*) wrap_panda$core$UInt64(self->reusedValueCount)), ((panda$collections$ListView*) children3179));
        left3021 = $tmp3183;
        org$pandalanguage$pandac$IRNode* $tmp3186 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3186->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3186->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3186, ((panda$core$Int64) { 1028 }), left3021->position, left3021->type, self->reusedValueCount);
        reusedLeft3185 = $tmp3186;
        panda$core$Int64 $tmp3188 = org$pandalanguage$pandac$Compiler$removeAssignment$panda$core$Int64$R$panda$core$Int64(p_op);
        org$pandalanguage$pandac$IRNode* $tmp3189 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, reusedLeft3185, $tmp3188, right3022);
        right3022 = $tmp3189;
        if (((panda$core$Bit) { right3022 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3191 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(left3021->type);
        bool $tmp3190 = $tmp3191.value;
        if (!$tmp3190) goto $l3192;
        panda$core$Bit $tmp3193 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left3021->type, right3022->type);
        $tmp3190 = $tmp3193.value;
        $l3192:;
        panda$core$Bit $tmp3194 = { $tmp3190 };
        if ($tmp3194.value) {
        {
            panda$collections$Array* $tmp3196 = (panda$collections$Array*) malloc(40);
            $tmp3196->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3196->refCount.value = 1;
            panda$collections$Array$init($tmp3196);
            org$pandalanguage$pandac$IRNode* $tmp3198 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3022, &$s3195, ((panda$collections$ListView*) $tmp3196), left3021->type);
            right3022 = $tmp3198;
            if (((panda$core$Bit) { right3022 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3199 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3021, ((panda$core$Int64) { 73 }), right3022);
        return $tmp3199;
    }
    }
    panda$core$Bit $tmp3200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 101 }));
    if ($tmp3200.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3201 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, left3021);
        left3021 = $tmp3201;
        if (((panda$core$Bit) { left3021 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3202 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(left3021->type);
        if ($tmp3202.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3204 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, left3021->type);
            cl3203 = $tmp3204;
            if (((panda$core$Bit) { cl3203 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$ListView* $tmp3206 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, left3021->type);
            parameters3205 = $tmp3206;
            org$pandalanguage$pandac$SymbolTable* $tmp3208 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3203);
            org$pandalanguage$pandac$Symbol* $tmp3210 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3208, &$s3209);
            methods3207 = $tmp3210;
            if (((panda$core$Bit) { methods3207 != NULL }).value) {
            {
                panda$collections$Array* $tmp3213 = (panda$collections$Array*) malloc(40);
                $tmp3213->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3213->refCount.value = 1;
                panda$collections$Array$init($tmp3213);
                types3212 = $tmp3213;
                panda$core$Bit $tmp3215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3207->kind, ((panda$core$Int64) { 204 }));
                if ($tmp3215.value) {
                {
                    m3216 = ((org$pandalanguage$pandac$MethodDecl*) methods3207);
                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3216);
                    org$pandalanguage$pandac$MethodRef* $tmp3217 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                    $tmp3217->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                    $tmp3217->refCount.value = 1;
                    org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3217, m3216, parameters3205);
                    org$pandalanguage$pandac$Type* $tmp3219 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3217);
                    panda$collections$Array$add$panda$collections$Array$T(types3212, ((panda$core$Object*) $tmp3219));
                }
                }
                else {
                {
                    panda$core$Bit $tmp3220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methods3207->kind, ((panda$core$Int64) { 205 }));
                    PANDA_ASSERT($tmp3220.value);
                    {
                        ITable* $tmp3222 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3207)->methods)->$class->itable;
                        while ($tmp3222->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3222 = $tmp3222->next;
                        }
                        $fn3224 $tmp3223 = $tmp3222->methods[0];
                        panda$collections$Iterator* $tmp3225 = $tmp3223(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) methods3207)->methods));
                        m$Iter3221 = $tmp3225;
                        $l3226:;
                        ITable* $tmp3228 = m$Iter3221->$class->itable;
                        while ($tmp3228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3228 = $tmp3228->next;
                        }
                        $fn3230 $tmp3229 = $tmp3228->methods[0];
                        panda$core$Bit $tmp3231 = $tmp3229(m$Iter3221);
                        panda$core$Bit $tmp3232 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3231);
                        if (!$tmp3232.value) goto $l3227;
                        {
                            ITable* $tmp3234 = m$Iter3221->$class->itable;
                            while ($tmp3234->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3234 = $tmp3234->next;
                            }
                            $fn3236 $tmp3235 = $tmp3234->methods[1];
                            panda$core$Object* $tmp3237 = $tmp3235(m$Iter3221);
                            m3233 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3237);
                            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3233);
                            org$pandalanguage$pandac$MethodRef* $tmp3238 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                            $tmp3238->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                            $tmp3238->refCount.value = 1;
                            org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3238, m3233, parameters3205);
                            org$pandalanguage$pandac$Type* $tmp3240 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type($tmp3238);
                            panda$collections$Array$add$panda$collections$Array$T(types3212, ((panda$core$Object*) $tmp3240));
                        }
                        goto $l3226;
                        $l3227:;
                    }
                }
                }
                org$pandalanguage$pandac$Type* $tmp3241 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3241->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3241->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3241, ((panda$collections$ListView*) types3212));
                type3211 = $tmp3241;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp3243 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
                type3211 = $tmp3243;
            }
            }
            panda$collections$Array* $tmp3245 = (panda$collections$Array*) malloc(40);
            $tmp3245->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3245->refCount.value = 1;
            panda$collections$Array$init($tmp3245);
            children3244 = $tmp3245;
            panda$collections$Array$add$panda$collections$Array$T(children3244, ((panda$core$Object*) left3021));
            panda$collections$Array$add$panda$collections$Array$T(children3244, ((panda$core$Object*) right3022));
            org$pandalanguage$pandac$IRNode* $tmp3247 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3247->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3247->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3247, ((panda$core$Int64) { 1040 }), p_position, type3211, ((panda$collections$ListView*) children3244));
            return $tmp3247;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3249 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3250 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(left3021->type, $tmp3249);
    if ($tmp3250.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3252 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp3253 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(right3022->type, $tmp3252);
        bool $tmp3251 = $tmp3253.value;
        if (!$tmp3251) goto $l3254;
        panda$core$Bit $tmp3259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 66 }));
        bool $tmp3258 = $tmp3259.value;
        if ($tmp3258) goto $l3260;
        panda$core$Bit $tmp3261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 68 }));
        $tmp3258 = $tmp3261.value;
        $l3260:;
        panda$core$Bit $tmp3262 = { $tmp3258 };
        bool $tmp3257 = $tmp3262.value;
        if ($tmp3257) goto $l3263;
        panda$core$Bit $tmp3264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 70 }));
        $tmp3257 = $tmp3264.value;
        $l3263:;
        panda$core$Bit $tmp3265 = { $tmp3257 };
        bool $tmp3256 = $tmp3265.value;
        if ($tmp3256) goto $l3266;
        panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 58 }));
        $tmp3256 = $tmp3267.value;
        $l3266:;
        panda$core$Bit $tmp3268 = { $tmp3256 };
        bool $tmp3255 = $tmp3268.value;
        if ($tmp3255) goto $l3269;
        panda$core$Bit $tmp3270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_op, ((panda$core$Int64) { 59 }));
        $tmp3255 = $tmp3270.value;
        $l3269:;
        panda$core$Bit $tmp3271 = { $tmp3255 };
        $tmp3251 = $tmp3271.value;
        $l3254:;
        panda$core$Bit $tmp3272 = { $tmp3251 };
        if ($tmp3272.value) {
        {
            panda$collections$Array* $tmp3274 = (panda$collections$Array*) malloc(40);
            $tmp3274->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3274->refCount.value = 1;
            panda$collections$Array$init($tmp3274);
            children3273 = $tmp3274;
            panda$collections$Array$add$panda$collections$Array$T(children3273, ((panda$core$Object*) left3021));
            panda$collections$Array$add$panda$collections$Array$T(children3273, ((panda$core$Object*) right3022));
            org$pandalanguage$pandac$IRNode* $tmp3276 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3276->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3276->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3276, ((panda$core$Int64) { 1023 }), p_position, left3021->type, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3273));
            return $tmp3276;
        }
        }
        panda$core$String* $tmp3279 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        panda$core$String* $tmp3280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3278, $tmp3279);
        panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3280, &$s3281);
        panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3282, ((panda$core$Object*) left3021->type));
        panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
        panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3285, ((panda$core$Object*) right3022->type));
        panda$core$String* $tmp3288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3286, &$s3287);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3288);
        return NULL;
    }
    }
    panda$collections$Array* $tmp3290 = (panda$collections$Array*) malloc(40);
    $tmp3290->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3290->refCount.value = 1;
    panda$collections$Array$init($tmp3290);
    children3289 = $tmp3290;
    panda$core$Bit $tmp3294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3021->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3293 = $tmp3294.value;
    if ($tmp3293) goto $l3295;
    panda$core$Bit $tmp3296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(left3021->kind, ((panda$core$Int64) { 1032 }));
    $tmp3293 = $tmp3296.value;
    $l3295:;
    panda$core$Bit $tmp3297 = { $tmp3293 };
    bool $tmp3292 = $tmp3297.value;
    if (!$tmp3292) goto $l3298;
    panda$core$Bit $tmp3300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3022->kind, ((panda$core$Int64) { 1004 }));
    bool $tmp3299 = $tmp3300.value;
    if ($tmp3299) goto $l3301;
    panda$core$Bit $tmp3302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(right3022->kind, ((panda$core$Int64) { 1032 }));
    $tmp3299 = $tmp3302.value;
    $l3301:;
    panda$core$Bit $tmp3303 = { $tmp3299 };
    $tmp3292 = $tmp3303.value;
    $l3298:;
    panda$core$Bit $tmp3304 = { $tmp3292 };
    if ($tmp3304.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3305 = org$pandalanguage$pandac$Compiler$foldInts$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, left3021, p_op, right3022);
        return $tmp3305;
    }
    }
    panda$core$Bit $tmp3307 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(left3021->type);
    bool $tmp3306 = $tmp3307.value;
    if (!$tmp3306) goto $l3308;
    panda$core$Int64$nullable $tmp3309 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, right3022, left3021->type);
    $tmp3306 = ((panda$core$Bit) { $tmp3309.nonnull }).value;
    $l3308:;
    panda$core$Bit $tmp3310 = { $tmp3306 };
    if ($tmp3310.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3311 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, right3022, left3021->type);
        right3022 = $tmp3311;
        PANDA_ASSERT(((panda$core$Bit) { right3022 != NULL }).value);
        panda$collections$Array$add$panda$collections$Array$T(children3289, ((panda$core$Object*) left3021));
        panda$collections$Array$add$panda$collections$Array$T(children3289, ((panda$core$Object*) right3022));
        switch (p_op.value) {
            case 58:
            case 59:
            case 63:
            case 65:
            case 62:
            case 64:
            {
                org$pandalanguage$pandac$Type* $tmp3313 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
                resultType3312 = $tmp3313;
            }
            break;
            default:
            {
                resultType3312 = left3021->type;
            }
        }
        org$pandalanguage$pandac$IRNode* $tmp3314 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3314->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3314->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3314, ((panda$core$Int64) { 1023 }), p_position, resultType3312, ((panda$core$Object*) wrap_panda$core$Int64(p_op)), ((panda$collections$ListView*) children3289));
        return $tmp3314;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3289, ((panda$core$Object*) right3022));
    PANDA_ASSERT(self->reportErrors.value);
    self->reportErrors = ((panda$core$Bit) { false });
    panda$core$String* $tmp3317 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
    org$pandalanguage$pandac$IRNode* $tmp3318 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, left3021, $tmp3317, ((panda$collections$ListView*) children3289));
    result3316 = $tmp3318;
    self->reportErrors = ((panda$core$Bit) { true });
    if (((panda$core$Bit) { result3316 == NULL }).value) {
    {
        panda$collections$Array$clear(children3289);
        panda$collections$Array$add$panda$collections$Array$T(children3289, ((panda$core$Object*) left3021));
        org$pandalanguage$pandac$IRNode* $tmp3320 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, right3022);
        resolved3319 = $tmp3320;
        bool $tmp3321 = ((panda$core$Bit) { resolved3319 != NULL }).value;
        if (!$tmp3321) goto $l3322;
        panda$core$Bit $tmp3323 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(resolved3319->type);
        $tmp3321 = $tmp3323.value;
        $l3322:;
        panda$core$Bit $tmp3324 = { $tmp3321 };
        if ($tmp3324.value) {
        {
            panda$collections$Array$add$panda$collections$Array$T(children3289, ((panda$core$Object*) resolved3319));
            org$pandalanguage$pandac$IRNode* $tmp3326 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3326->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3326->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3328 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3326, ((panda$core$Int64) { 1001 }), resolved3319->position, $tmp3328, resolved3319->type);
            target3325 = $tmp3326;
            panda$core$String* $tmp3329 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
            org$pandalanguage$pandac$IRNode* $tmp3330 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target3325, $tmp3329, ((panda$collections$ListView*) children3289));
            result3316 = $tmp3330;
        }
        }
    }
    }
    return result3316;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$IRNode* left3331;
    org$pandalanguage$pandac$IRNode* right3334;
    panda$core$Object* $tmp3332 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3333 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3332));
    left3331 = $tmp3333;
    if (((panda$core$Bit) { left3331 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3335 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3336 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3335));
    right3334 = $tmp3336;
    if (((panda$core$Bit) { right3334 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3337 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_b->position, left3331, ((panda$core$Int64$wrapper*) p_b->payload)->value, right3334);
    return $tmp3337;
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type) {
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3341;
    switch (p_type->typeKind.value) {
        case 22:
        {
            panda$collections$ListView* $tmp3338 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_type->parameter->bound);
            return $tmp3338;
        }
        break;
        case 21:
        {
            panda$core$Int64 $tmp3339 = panda$collections$Array$get_count$R$panda$core$Int64(p_type->subtypes);
            panda$core$Bit $tmp3340 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3339, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3340.value);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3341, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$collections$Array* $tmp3342 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_type->subtypes, $tmp3341);
            return ((panda$collections$ListView*) $tmp3342);
        }
        break;
        case 11:
        {
            panda$core$Object* $tmp3343 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
            panda$collections$ListView* $tmp3344 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) $tmp3343));
            return $tmp3344;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp3345 = (panda$collections$Array*) malloc(40);
            $tmp3345->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3345->refCount.value = 1;
            panda$collections$Array$init($tmp3345);
            return ((panda$collections$ListView*) $tmp3345);
        }
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_target) {
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$core$Bit $tmp3347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->kind, ((panda$core$Int64) { 1001 }));
        if ($tmp3347.value) {
        {
            panda$collections$ListView* $tmp3348 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, ((org$pandalanguage$pandac$Type*) p_target->payload));
            return $tmp3348;
        }
        }
        panda$collections$ListView* $tmp3349 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_target->type);
        return $tmp3349;
    }
    }
    panda$collections$Array* $tmp3350 = (panda$collections$Array*) malloc(40);
    $tmp3350->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3350->refCount.value = 1;
    panda$collections$Array$init($tmp3350);
    return ((panda$collections$ListView*) $tmp3350);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_base, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* name3353;
    org$pandalanguage$pandac$ClassDecl* cl3355;
    org$pandalanguage$pandac$Symbol* s3357;
    org$pandalanguage$pandac$MethodDecl* m3360;
    panda$collections$Iterator* test$Iter3365;
    org$pandalanguage$pandac$MethodDecl* test3377;
    org$pandalanguage$pandac$MethodRef* ref3389;
    panda$collections$Array* children3393;
    org$pandalanguage$pandac$IRNode* methodRef3396;
    org$pandalanguage$pandac$Position $tmp3402;
    panda$collections$Array* args3403;
    panda$collections$Array* children3419;
    panda$collections$Array* children3429;
    org$pandalanguage$pandac$IRNode* coerced3438;
    panda$collections$Array* children3441;
    panda$core$Bit $tmp3352 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
    if ($tmp3352.value) {
    {
        panda$core$String* $tmp3354 = org$pandalanguage$pandac$Compiler$operatorName$panda$core$Int64$R$panda$core$String(p_op);
        name3353 = $tmp3354;
        org$pandalanguage$pandac$ClassDecl* $tmp3356 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
        cl3355 = $tmp3356;
        if (((panda$core$Bit) { cl3355 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$SymbolTable* $tmp3358 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3355);
        org$pandalanguage$pandac$Symbol* $tmp3359 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q($tmp3358, name3353);
        s3357 = $tmp3359;
        if (((panda$core$Bit) { s3357 != NULL }).value) {
        {
            m3360 = NULL;
            switch (s3357->kind.value) {
                case 204:
                {
                    m3360 = ((org$pandalanguage$pandac$MethodDecl*) s3357);
                    panda$core$Int64 $tmp3361 = panda$collections$Array$get_count$R$panda$core$Int64(m3360->parameters);
                    panda$core$Bit $tmp3362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3361, ((panda$core$Int64) { 0 }));
                    PANDA_ASSERT($tmp3362.value);
                    panda$core$Bit $tmp3363 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(m3360->annotations);
                    panda$core$Bit $tmp3364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3363);
                    PANDA_ASSERT($tmp3364.value);
                }
                break;
                case 205:
                {
                    {
                        ITable* $tmp3366 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3357)->methods)->$class->itable;
                        while ($tmp3366->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3366 = $tmp3366->next;
                        }
                        $fn3368 $tmp3367 = $tmp3366->methods[0];
                        panda$collections$Iterator* $tmp3369 = $tmp3367(((panda$collections$Iterable*) ((org$pandalanguage$pandac$Methods*) s3357)->methods));
                        test$Iter3365 = $tmp3369;
                        $l3370:;
                        ITable* $tmp3372 = test$Iter3365->$class->itable;
                        while ($tmp3372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3372 = $tmp3372->next;
                        }
                        $fn3374 $tmp3373 = $tmp3372->methods[0];
                        panda$core$Bit $tmp3375 = $tmp3373(test$Iter3365);
                        panda$core$Bit $tmp3376 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3375);
                        if (!$tmp3376.value) goto $l3371;
                        {
                            ITable* $tmp3378 = test$Iter3365->$class->itable;
                            while ($tmp3378->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3378 = $tmp3378->next;
                            }
                            $fn3380 $tmp3379 = $tmp3378->methods[1];
                            panda$core$Object* $tmp3381 = $tmp3379(test$Iter3365);
                            test3377 = ((org$pandalanguage$pandac$MethodDecl*) $tmp3381);
                            panda$core$Bit $tmp3383 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(test3377->annotations);
                            panda$core$Bit $tmp3384 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3383);
                            bool $tmp3382 = $tmp3384.value;
                            if (!$tmp3382) goto $l3385;
                            panda$core$Int64 $tmp3386 = panda$collections$Array$get_count$R$panda$core$Int64(test3377->parameters);
                            panda$core$Bit $tmp3387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3386, ((panda$core$Int64) { 0 }));
                            $tmp3382 = $tmp3387.value;
                            $l3385:;
                            panda$core$Bit $tmp3388 = { $tmp3382 };
                            if ($tmp3388.value) {
                            {
                                m3360 = test3377;
                                goto $l3371;
                            }
                            }
                        }
                        goto $l3370;
                        $l3371:;
                    }
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
            if (((panda$core$Bit) { m3360 != NULL }).value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, m3360);
                org$pandalanguage$pandac$MethodRef* $tmp3390 = (org$pandalanguage$pandac$MethodRef*) malloc(40);
                $tmp3390->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodRef$class;
                $tmp3390->refCount.value = 1;
                panda$collections$ListView* $tmp3392 = org$pandalanguage$pandac$Compiler$typeParameters$org$pandalanguage$pandac$IRNode$Q$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(self, p_base);
                org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp3390, m3360, $tmp3392);
                ref3389 = $tmp3390;
                panda$collections$Array* $tmp3394 = (panda$collections$Array*) malloc(40);
                $tmp3394->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3394->refCount.value = 1;
                panda$collections$Array$init($tmp3394);
                children3393 = $tmp3394;
                panda$collections$Array$add$panda$collections$Array$T(children3393, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3397 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3397->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3397->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3399 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3399->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3399->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp3402);
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3399, &$s3401, ((panda$core$Int64) { 16 }), $tmp3402, ((panda$core$Bit) { true }));
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3397, ((panda$core$Int64) { 1002 }), p_position, $tmp3399, ((panda$core$Object*) ref3389), ((panda$collections$ListView*) children3393));
                methodRef3396 = $tmp3397;
                panda$collections$Array* $tmp3404 = (panda$collections$Array*) malloc(40);
                $tmp3404->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3404->refCount.value = 1;
                panda$collections$Array$init($tmp3404);
                args3403 = $tmp3404;
                org$pandalanguage$pandac$IRNode* $tmp3406 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, methodRef3396, ((panda$collections$ListView*) args3403));
                return $tmp3406;
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
                    org$pandalanguage$pandac$IRNode* $tmp3407 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3407->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3407->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3409 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3407, ((panda$core$Int64) { 1032 }), p_position, $tmp3409, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3407;
                }
                break;
                case 1032:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3410 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3410->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3410->refCount.value = 1;
                    org$pandalanguage$pandac$Type* $tmp3412 = org$pandalanguage$pandac$Type$NegatedIntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3410, ((panda$core$Int64) { 1004 }), p_position, $tmp3412, ((panda$core$UInt64$wrapper*) p_base->payload)->value);
                    return $tmp3410;
                }
                break;
                case 1045:
                {
                    org$pandalanguage$pandac$IRNode* $tmp3413 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp3413->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp3413->refCount.value = 1;
                    panda$core$Real64 $tmp3415 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$Type* $tmp3416 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type($tmp3415);
                    panda$core$Real64 $tmp3417 = panda$core$Real64$$SUB$R$panda$core$Real64(((panda$core$Real64$wrapper*) p_base->payload)->value);
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3413, ((panda$core$Int64) { 1045 }), p_position, $tmp3416, $tmp3417);
                    return $tmp3413;
                }
                break;
                default:
                {
                    panda$core$Bit $tmp3418 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
                    if ($tmp3418.value) {
                    {
                        panda$collections$Array* $tmp3420 = (panda$collections$Array*) malloc(40);
                        $tmp3420->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp3420->refCount.value = 1;
                        panda$collections$Array$init($tmp3420);
                        children3419 = $tmp3420;
                        panda$collections$Array$add$panda$collections$Array$T(children3419, ((panda$core$Object*) p_base));
                        org$pandalanguage$pandac$IRNode* $tmp3422 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp3422->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp3422->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3422, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 52 }))), ((panda$collections$ListView*) children3419));
                        return $tmp3422;
                    }
                    }
                }
            }
            panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3424, ((panda$core$Object*) p_base->type));
            panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3425, &$s3426);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3427);
            return NULL;
        }
        break;
        case 50:
        {
            panda$core$Bit $tmp3428 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_base->type);
            if ($tmp3428.value) {
            {
                panda$collections$Array* $tmp3430 = (panda$collections$Array*) malloc(40);
                $tmp3430->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3430->refCount.value = 1;
                panda$collections$Array$init($tmp3430);
                children3429 = $tmp3430;
                panda$collections$Array$add$panda$collections$Array$T(children3429, ((panda$core$Object*) p_base));
                org$pandalanguage$pandac$IRNode* $tmp3432 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3432->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3432->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3432, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 50 }))), ((panda$collections$ListView*) children3429));
                return $tmp3432;
            }
            }
            else {
            {
                panda$core$String* $tmp3435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3434, ((org$pandalanguage$pandac$Symbol*) p_base->type)->name);
                panda$core$String* $tmp3437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3435, &$s3436);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_base->position, $tmp3437);
                return NULL;
            }
            }
        }
        break;
        case 49:
        {
            org$pandalanguage$pandac$Type* $tmp3439 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode* $tmp3440 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_base, $tmp3439);
            coerced3438 = $tmp3440;
            if (((panda$core$Bit) { coerced3438 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp3442 = (panda$collections$Array*) malloc(40);
            $tmp3442->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp3442->refCount.value = 1;
            panda$collections$Array$init($tmp3442);
            children3441 = $tmp3442;
            panda$collections$Array$add$panda$collections$Array$T(children3441, ((panda$core$Object*) coerced3438));
            org$pandalanguage$pandac$IRNode* $tmp3444 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3444->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3444->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3444, ((panda$core$Int64) { 1041 }), p_base->position, p_base->type, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 49 }))), ((panda$collections$ListView*) children3441));
            return $tmp3444;
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
    org$pandalanguage$pandac$IRNode* base3449;
    panda$core$Bit $tmp3446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_p->kind, ((panda$core$Int64) { 112 }));
    PANDA_ASSERT($tmp3446.value);
    panda$core$Int64 $tmp3447 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_p->children);
    panda$core$Bit $tmp3448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3447, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3448.value);
    panda$core$Object* $tmp3450 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_p->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3451 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3450));
    base3449 = $tmp3451;
    if (((panda$core$Bit) { base3449 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3452 = org$pandalanguage$pandac$Compiler$compilePrefix$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$R$org$pandalanguage$pandac$IRNode$Q(self, ((panda$core$Int64$wrapper*) p_p->payload)->value, base3449, p_p->position);
    return $tmp3452;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    org$pandalanguage$pandac$IRNode* m3454;
    panda$collections$Array* args3457;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3460;
    org$pandalanguage$pandac$IRNode* arg3475;
    panda$core$Bit $tmp3453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 107 }));
    PANDA_ASSERT($tmp3453.value);
    panda$core$Object* $tmp3455 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3456 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3455));
    m3454 = $tmp3456;
    if (((panda$core$Bit) { m3454 != NULL }).value) {
    {
        panda$collections$Array* $tmp3458 = (panda$collections$Array*) malloc(40);
        $tmp3458->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3458->refCount.value = 1;
        panda$collections$Array$init($tmp3458);
        args3457 = $tmp3458;
        panda$core$Int64 $tmp3461 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3460, ((panda$core$Int64) { 1 }), $tmp3461, ((panda$core$Bit) { false }));
        int64_t $tmp3463 = $tmp3460.min.value;
        panda$core$Int64 i3462 = { $tmp3463 };
        int64_t $tmp3465 = $tmp3460.max.value;
        bool $tmp3466 = $tmp3460.inclusive.value;
        if ($tmp3466) goto $l3473; else goto $l3474;
        $l3473:;
        if ($tmp3463 <= $tmp3465) goto $l3467; else goto $l3469;
        $l3474:;
        if ($tmp3463 < $tmp3465) goto $l3467; else goto $l3469;
        $l3467:;
        {
            panda$core$Object* $tmp3476 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, i3462);
            org$pandalanguage$pandac$IRNode* $tmp3477 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3476));
            arg3475 = $tmp3477;
            if (((panda$core$Bit) { arg3475 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args3457, ((panda$core$Object*) arg3475));
        }
        $l3470:;
        int64_t $tmp3479 = $tmp3465 - i3462.value;
        if ($tmp3466) goto $l3480; else goto $l3481;
        $l3480:;
        if ($tmp3479 >= 1) goto $l3478; else goto $l3469;
        $l3481:;
        if ($tmp3479 > 1) goto $l3478; else goto $l3469;
        $l3478:;
        i3462.value += 1;
        goto $l3467;
        $l3469:;
        org$pandalanguage$pandac$IRNode* $tmp3484 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, m3454, ((panda$collections$ListView*) args3457));
        return $tmp3484;
    }
    }
    return NULL;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$IRNode* p_base, panda$core$String* p_name) {
    org$pandalanguage$pandac$ClassDecl* cl3485;
    panda$core$String* name3487;
    org$pandalanguage$pandac$ClassDecl* cl3495;
    org$pandalanguage$pandac$SymbolTable* st3514;
    org$pandalanguage$pandac$Symbol* s3516;
    switch (p_base->kind.value) {
        case 1001:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp3486 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$Type*) p_base->payload));
            cl3485 = $tmp3486;
        }
        break;
        case 1037:
        {
            panda$core$String* $tmp3489 = (($fn3488) p_base->payload->$class->vtable[0])(p_base->payload);
            panda$core$String* $tmp3491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3489, &$s3490);
            panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3491, p_name);
            panda$core$String* $tmp3494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3492, &$s3493);
            name3487 = $tmp3494;
            org$pandalanguage$pandac$ClassDecl* $tmp3496 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, name3487);
            cl3495 = $tmp3496;
            if (((panda$core$Bit) { cl3495 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp3497 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp3497->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp3497->refCount.value = 1;
                org$pandalanguage$pandac$Type* $tmp3499 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp3500 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3495);
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3497, ((panda$core$Int64) { 1001 }), p_position, $tmp3499, $tmp3500);
                return $tmp3497;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp3501 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3501->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3501->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3503 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3501, ((panda$core$Int64) { 1037 }), p_position, $tmp3503, name3487);
            return $tmp3501;
        }
        break;
        case 1024:
        {
            panda$core$Object* $tmp3504 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3504));
            panda$core$Object* $tmp3505 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            org$pandalanguage$pandac$ClassDecl* $tmp3506 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp3505)->rawSuper);
            cl3485 = $tmp3506;
        }
        break;
        default:
        {
            panda$core$Bit $tmp3507 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_base->type);
            panda$core$Bit $tmp3508 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3507);
            if ($tmp3508.value) {
            {
                panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3509, ((panda$core$Object*) p_base->type));
                panda$core$String* $tmp3512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3510, &$s3511);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3512);
                return NULL;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp3513 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_base->type);
            cl3485 = $tmp3513;
        }
    }
    if (((panda$core$Bit) { cl3485 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp3515 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, cl3485);
    st3514 = $tmp3515;
    org$pandalanguage$pandac$Symbol* $tmp3517 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(st3514, p_name);
    s3516 = $tmp3517;
    if (((panda$core$Bit) { s3516 == NULL }).value) {
    {
        panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3518, ((panda$core$Object*) p_base->type));
        panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
        panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3521, p_name);
        panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, &$s3523);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3524);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3525 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_base, s3516, st3514);
    return $tmp3525;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* base3529;
    panda$core$Bit $tmp3526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 108 }));
    PANDA_ASSERT($tmp3526.value);
    panda$core$Int64 $tmp3527 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3527, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3528.value);
    panda$core$Object* $tmp3530 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3531 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3530));
    base3529 = $tmp3531;
    if (((panda$core$Bit) { base3529 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3533 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3529->kind, ((panda$core$Int64) { 1037 }));
    bool $tmp3532 = $tmp3533.value;
    if (!$tmp3532) goto $l3534;
    panda$core$Bit $tmp3535 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base3529->kind, ((panda$core$Int64) { 1024 }));
    $tmp3532 = $tmp3535.value;
    $l3534:;
    panda$core$Bit $tmp3536 = { $tmp3532 };
    if ($tmp3536.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3537 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, base3529);
        base3529 = $tmp3537;
    }
    }
    if (((panda$core$Bit) { base3529 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3538 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_d->position, base3529, ((panda$core$String*) p_d->payload));
    return $tmp3538;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$Symbol* s3540;
    panda$core$Bit $tmp3539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 106 }));
    PANDA_ASSERT($tmp3539.value);
    org$pandalanguage$pandac$Symbol* $tmp3541 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(self->symbolTable, ((panda$core$String*) p_i->payload));
    s3540 = $tmp3541;
    if (((panda$core$Bit) { s3540 == NULL }).value) {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3542 = org$pandalanguage$pandac$Compiler$tryResolveClass$panda$core$String$R$org$pandalanguage$pandac$ClassDecl$Q(self, ((panda$core$String*) p_i->payload));
        s3540 = ((org$pandalanguage$pandac$Symbol*) $tmp3542);
    }
    }
    if (((panda$core$Bit) { s3540 != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3543 = org$pandalanguage$pandac$Compiler$symbolRef$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Symbol$org$pandalanguage$pandac$SymbolTable$R$org$pandalanguage$pandac$IRNode$Q(self, p_i->position, NULL, s3540, self->symbolTable);
        return $tmp3543;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3544 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3544->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3544->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3546 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3544, ((panda$core$Int64) { 1037 }), p_i->position, $tmp3546, ((panda$core$String*) p_i->payload));
    return $tmp3544;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t) {
    org$pandalanguage$pandac$Type* resolved3547;
    org$pandalanguage$pandac$Type* $tmp3548 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, p_t);
    org$pandalanguage$pandac$Type* $tmp3549 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3548);
    resolved3547 = $tmp3549;
    if (((panda$core$Bit) { resolved3547 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3550 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3550->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3550->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3552 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type($tmp3550, ((panda$core$Int64) { 1001 }), p_t->position, $tmp3552, resolved3547);
    return $tmp3550;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* start3560;
    org$pandalanguage$pandac$IRNode* end3568;
    org$pandalanguage$pandac$IRNode* step3576;
    panda$collections$Array* children3583;
    org$pandalanguage$pandac$Position $tmp3591;
    panda$core$Bit $tmp3554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 105 }));
    bool $tmp3553 = $tmp3554.value;
    if ($tmp3553) goto $l3555;
    panda$core$Bit $tmp3556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    $tmp3553 = $tmp3556.value;
    $l3555:;
    panda$core$Bit $tmp3557 = { $tmp3553 };
    PANDA_ASSERT($tmp3557.value);
    panda$core$Int64 $tmp3558 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3558, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp3559.value);
    panda$core$Object* $tmp3561 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3561)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3562.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3563 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3563->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3563->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3565 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3563, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3565);
        start3560 = $tmp3563;
    }
    }
    else {
    {
        panda$core$Object* $tmp3566 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp3567 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3566));
        start3560 = $tmp3567;
        if (((panda$core$Bit) { start3560 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3569 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3569)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3570.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3571 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp3571->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp3571->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp3573 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3571, ((panda$core$Int64) { 1030 }), p_r->position, $tmp3573);
        end3568 = $tmp3571;
    }
    }
    else {
    {
        panda$core$Object* $tmp3574 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp3575 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3574));
        end3568 = $tmp3575;
        if (((panda$core$Bit) { end3568 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp3577 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp3578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp3577)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp3578.value) {
    {
        step3576 = NULL;
    }
    }
    else {
    {
        panda$core$Object* $tmp3579 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3580 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3579));
        step3576 = $tmp3580;
        if (((panda$core$Bit) { step3576 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp3581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(step3576->kind, ((panda$core$Int64) { 1030 }));
        if ($tmp3581.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, step3576->position, &$s3582);
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp3584 = (panda$collections$Array*) malloc(40);
    $tmp3584->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3584->refCount.value = 1;
    panda$collections$Array$init($tmp3584);
    children3583 = $tmp3584;
    panda$collections$Array$add$panda$collections$Array$T(children3583, ((panda$core$Object*) start3560));
    panda$collections$Array$add$panda$collections$Array$T(children3583, ((panda$core$Object*) end3568));
    if (((panda$core$Bit) { step3576 != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(children3583, ((panda$core$Object*) step3576));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3586 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3586->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3586->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3588 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3588->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3588->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp3591);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp3588, &$s3590, ((panda$core$Int64) { 17 }), $tmp3591, ((panda$core$Bit) { true }));
    panda$core$Bit $tmp3592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3586, ((panda$core$Int64) { 1031 }), p_r->position, $tmp3588, ((panda$core$Object*) wrap_panda$core$Bit($tmp3592)), ((panda$collections$ListView*) children3583));
    return $tmp3586;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* $tmp3593 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3593->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3593->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3595 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$String($tmp3593, ((panda$core$Int64) { 1033 }), p_s->position, $tmp3595, ((panda$core$String*) p_s->payload));
    return $tmp3593;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$Type* type3600;
    org$pandalanguage$pandac$ClassDecl* cl3601;
    panda$collections$Array* subtypes3608;
    panda$core$MutableString* name3612;
    panda$core$Char8 $tmp3615;
    panda$core$String* separator3616;
    panda$collections$Iterator* p$Iter3618;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p3630;
    panda$collections$Array* pType3635;
    panda$core$String* pName3638;
    panda$core$Char8 $tmp3648;
    panda$core$Bit $tmp3596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 114 }));
    PANDA_ASSERT($tmp3596.value);
    panda$core$Object* $tmp3597 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3598 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3597)->annotations);
    if ($tmp3598.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3599);
        return NULL;
    }
    }
    panda$core$Object* $tmp3602 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3601 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3602);
    ITable* $tmp3603 = ((panda$collections$CollectionView*) cl3601->parameters)->$class->itable;
    while ($tmp3603->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3603 = $tmp3603->next;
    }
    $fn3605 $tmp3604 = $tmp3603->methods[0];
    panda$core$Int64 $tmp3606 = $tmp3604(((panda$collections$CollectionView*) cl3601->parameters));
    panda$core$Bit $tmp3607 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3606, ((panda$core$Int64) { 0 }));
    if ($tmp3607.value) {
    {
        panda$collections$Array* $tmp3609 = (panda$collections$Array*) malloc(40);
        $tmp3609->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp3609->refCount.value = 1;
        panda$collections$Array$init($tmp3609);
        subtypes3608 = $tmp3609;
        org$pandalanguage$pandac$Type* $tmp3611 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3601);
        panda$collections$Array$add$panda$collections$Array$T(subtypes3608, ((panda$core$Object*) $tmp3611));
        panda$core$MutableString* $tmp3613 = (panda$core$MutableString*) malloc(48);
        $tmp3613->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp3613->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp3613, ((org$pandalanguage$pandac$Symbol*) cl3601)->name);
        name3612 = $tmp3613;
        panda$core$Char8$init$panda$core$UInt8(&$tmp3615, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name3612, $tmp3615);
        separator3616 = &$s3617;
        {
            ITable* $tmp3619 = ((panda$collections$Iterable*) cl3601->parameters)->$class->itable;
            while ($tmp3619->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3619 = $tmp3619->next;
            }
            $fn3621 $tmp3620 = $tmp3619->methods[0];
            panda$collections$Iterator* $tmp3622 = $tmp3620(((panda$collections$Iterable*) cl3601->parameters));
            p$Iter3618 = $tmp3622;
            $l3623:;
            ITable* $tmp3625 = p$Iter3618->$class->itable;
            while ($tmp3625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3625 = $tmp3625->next;
            }
            $fn3627 $tmp3626 = $tmp3625->methods[0];
            panda$core$Bit $tmp3628 = $tmp3626(p$Iter3618);
            panda$core$Bit $tmp3629 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3628);
            if (!$tmp3629.value) goto $l3624;
            {
                ITable* $tmp3631 = p$Iter3618->$class->itable;
                while ($tmp3631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3631 = $tmp3631->next;
                }
                $fn3633 $tmp3632 = $tmp3631->methods[1];
                panda$core$Object* $tmp3634 = $tmp3632(p$Iter3618);
                p3630 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp3634);
                panda$collections$Array* $tmp3636 = (panda$collections$Array*) malloc(40);
                $tmp3636->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp3636->refCount.value = 1;
                panda$collections$Array$init($tmp3636);
                pType3635 = $tmp3636;
                panda$collections$Array$add$panda$collections$Array$T(pType3635, ((panda$core$Object*) p3630->bound));
                panda$core$String* $tmp3639 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl3601)->name);
                panda$core$String* $tmp3641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3639, &$s3640);
                panda$core$String* $tmp3642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3641, ((org$pandalanguage$pandac$Symbol*) p3630)->name);
                panda$core$String* $tmp3644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3642, &$s3643);
                pName3638 = $tmp3644;
                panda$core$MutableString$append$panda$core$String(name3612, separator3616);
                panda$core$MutableString$append$panda$core$String(name3612, pName3638);
                org$pandalanguage$pandac$Type* $tmp3645 = (org$pandalanguage$pandac$Type*) malloc(96);
                $tmp3645->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
                $tmp3645->refCount.value = 1;
                org$pandalanguage$pandac$Type$init$org$pandalanguage$pandac$ClassDecl$GenericParameter($tmp3645, p3630);
                panda$collections$Array$add$panda$collections$Array$T(subtypes3608, ((panda$core$Object*) $tmp3645));
                separator3616 = &$s3647;
            }
            goto $l3623;
            $l3624:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp3648, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name3612, $tmp3648);
        org$pandalanguage$pandac$Type* $tmp3649 = (org$pandalanguage$pandac$Type*) malloc(96);
        $tmp3649->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
        $tmp3649->refCount.value = 1;
        panda$core$String* $tmp3651 = panda$core$MutableString$finish$R$panda$core$String(name3612);
        org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3649, $tmp3651, ((panda$core$Int64) { 21 }), p_s->position, ((panda$collections$ListView*) subtypes3608), ((panda$core$Bit) { true }));
        type3600 = $tmp3649;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3652 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl3601);
        type3600 = $tmp3652;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3653 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3653->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3653->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3653, ((panda$core$Int64) { 1025 }), p_s->position, type3600);
    return $tmp3653;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$ClassDecl* cl3659;
    panda$core$Bit $tmp3655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 115 }));
    PANDA_ASSERT($tmp3655.value);
    panda$core$Object* $tmp3656 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    panda$core$Bit $tmp3657 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp3656)->annotations);
    if ($tmp3657.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_s->position, &$s3658);
        return NULL;
    }
    }
    panda$core$Object* $tmp3660 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    cl3659 = ((org$pandalanguage$pandac$ClassDecl*) $tmp3660);
    PANDA_ASSERT(cl3659->resolved.value);
    org$pandalanguage$pandac$IRNode* $tmp3661 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3661->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3661->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3661, ((panda$core$Int64) { 1024 }), p_s->position, cl3659->rawSuper);
    return $tmp3661;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_rawType) {
    org$pandalanguage$pandac$IRNode* value3663;
    panda$core$String$Index$nullable index3665;
    org$pandalanguage$pandac$Type* type3672;
    org$pandalanguage$pandac$IRNode* base3674;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3677;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp3680;
    org$pandalanguage$pandac$Type* type3684;
    org$pandalanguage$pandac$IRNode* $tmp3664 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_expr);
    value3663 = $tmp3664;
    if (((panda$core$Bit) { value3663 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$String$Index$nullable $tmp3667 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, &$s3666);
    index3665 = $tmp3667;
    panda$core$Bit $tmp3669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawType->typeKind, ((panda$core$Int64) { 10 }));
    bool $tmp3668 = $tmp3669.value;
    if (!$tmp3668) goto $l3670;
    $tmp3668 = ((panda$core$Bit) { index3665.nonnull }).value;
    $l3670:;
    panda$core$Bit $tmp3671 = { $tmp3668 };
    if ($tmp3671.value) {
    {
        PANDA_ASSERT(self->reportErrors.value);
        self->reportErrors = ((panda$core$Bit) { false });
        org$pandalanguage$pandac$Type* $tmp3673 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
        type3672 = $tmp3673;
        self->reportErrors = ((panda$core$Bit) { true });
        if (((panda$core$Bit) { type3672 == NULL }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3675 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp3675->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp3675->refCount.value = 1;
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3677, ((panda$core$String$Index$nullable) { .nonnull = false }), index3665, ((panda$core$Bit) { false }));
            panda$core$String* $tmp3678 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3677);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp3675, $tmp3678, ((panda$core$Int64) { 10 }), p_position);
            org$pandalanguage$pandac$IRNode* $tmp3679 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, p_expr, $tmp3675);
            base3674 = $tmp3679;
            if (((panda$core$Bit) { base3674 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$String$Index $tmp3681 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, ((panda$core$String$Index) index3665.value));
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp3680, ((panda$core$String$Index$nullable) { $tmp3681, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp3682 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_rawType)->name, $tmp3680);
            org$pandalanguage$pandac$IRNode* $tmp3683 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$core$String$R$org$pandalanguage$pandac$IRNode$Q(self, p_position, base3674, $tmp3682);
            return $tmp3683;
        }
        }
    }
    }
    org$pandalanguage$pandac$Type* $tmp3685 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, p_rawType);
    type3684 = $tmp3685;
    if (((panda$core$Bit) { type3684 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Int64$nullable $tmp3686 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, value3663, type3684);
    if (((panda$core$Bit) { $tmp3686.nonnull }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3687 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value3663, type3684);
        return $tmp3687;
    }
    }
    panda$core$Bit $tmp3688 = org$pandalanguage$pandac$Compiler$canCast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, value3663, type3684);
    if ($tmp3688.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3689 = org$pandalanguage$pandac$Compiler$cast$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Position$panda$core$Bit$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode(self, value3663, p_position, ((panda$core$Bit) { true }), type3684);
        return $tmp3689;
    }
    }
    else {
    {
        panda$core$String* $tmp3691 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3690, ((panda$core$Object*) value3663->type));
        panda$core$String* $tmp3693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3691, &$s3692);
        panda$core$String* $tmp3695 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3694, ((panda$core$Object*) type3684));
        panda$core$String* $tmp3697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3695, &$s3696);
        panda$core$String* $tmp3698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3693, $tmp3697);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3698);
        return NULL;
    }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit $tmp3699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 111 }));
    PANDA_ASSERT($tmp3699.value);
    panda$core$Int64 $tmp3700 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_c->children);
    panda$core$Bit $tmp3701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3700, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3701.value);
    panda$core$Object* $tmp3702 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp3703 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_c->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3704 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3703));
    org$pandalanguage$pandac$IRNode* $tmp3705 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_c->position, ((org$pandalanguage$pandac$ASTNode*) $tmp3702), $tmp3704);
    return $tmp3705;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_n) {
    panda$core$Bit $tmp3706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_n->kind, ((panda$core$Int64) { 117 }));
    PANDA_ASSERT($tmp3706.value);
    org$pandalanguage$pandac$IRNode* $tmp3707 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3707->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3707->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp3709 = org$pandalanguage$pandac$Type$Null$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp3707, ((panda$core$Int64) { 1030 }), p_n->position, $tmp3709);
    return $tmp3707;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$Pair* cf3710;
    panda$collections$Array* children3716;
    org$pandalanguage$pandac$IRNode* base3719;
    cf3710 = ((org$pandalanguage$pandac$Pair*) p_f->payload);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ChoiceEntry(self, ((org$pandalanguage$pandac$ChoiceEntry*) cf3710->first));
    bool $tmp3711 = ((panda$core$Bit) { p_f->children != NULL }).value;
    if (!$tmp3711) goto $l3712;
    panda$core$Int64 $tmp3713 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp3714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3713, ((panda$core$Int64) { 1 }));
    $tmp3711 = $tmp3714.value;
    $l3712:;
    panda$core$Bit $tmp3715 = { $tmp3711 };
    PANDA_ASSERT($tmp3715.value);
    panda$collections$Array* $tmp3717 = (panda$collections$Array*) malloc(40);
    $tmp3717->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3717->refCount.value = 1;
    panda$collections$Array$init($tmp3717);
    children3716 = $tmp3717;
    panda$core$Object* $tmp3720 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3721 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3720));
    base3719 = $tmp3721;
    if (((panda$core$Bit) { base3719 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children3716, ((panda$core$Object*) base3719));
    org$pandalanguage$pandac$IRNode* $tmp3722 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3722->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3722->refCount.value = 1;
    panda$core$Object* $tmp3724 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$ChoiceEntry*) cf3710->first)->fields, ((panda$core$Int64$wrapper*) cf3710->second)->value);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp3722, ((panda$core$Int64) { 1047 }), p_f->position, ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp3724)->second), ((panda$core$Object*) cf3710), ((panda$collections$ListView*) children3716));
    return $tmp3722;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_e) {
    org$pandalanguage$pandac$IRNode* result3729;
    switch (p_e->kind.value) {
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp3725 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3725;
        }
        break;
        case 116:
        {
            org$pandalanguage$pandac$IRNode* $tmp3726 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3726->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3726->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3728 = org$pandalanguage$pandac$Type$BitLiteral$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit($tmp3726, ((panda$core$Int64) { 1011 }), p_e->position, $tmp3728, ((panda$core$Bit$wrapper*) p_e->payload)->value);
            return $tmp3726;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp3730 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            result3729 = $tmp3730;
            bool $tmp3731 = ((panda$core$Bit) { result3729 != NULL }).value;
            if (!$tmp3731) goto $l3732;
            org$pandalanguage$pandac$Type* $tmp3733 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp3734 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(result3729->type, $tmp3733);
            $tmp3731 = $tmp3734.value;
            $l3732:;
            panda$core$Bit $tmp3735 = { $tmp3731 };
            if ($tmp3735.value) {
            {
                panda$core$Bit $tmp3736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result3729->kind, ((panda$core$Int64) { 1005 }));
                PANDA_ASSERT($tmp3736.value);
                panda$core$String* $tmp3737 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(((org$pandalanguage$pandac$MethodRef*) result3729->payload)->value);
                panda$core$String* $tmp3739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3737, &$s3738);
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, result3729->position, $tmp3739);
                return NULL;
            }
            }
            return result3729;
        }
        break;
        case 108:
        {
            org$pandalanguage$pandac$IRNode* $tmp3740 = org$pandalanguage$pandac$Compiler$compileDot$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3740;
        }
        break;
        case 106:
        {
            org$pandalanguage$pandac$IRNode* $tmp3741 = org$pandalanguage$pandac$Compiler$compileIdentifier$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3741;
        }
        break;
        case 102:
        {
            org$pandalanguage$pandac$IRNode* $tmp3742 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3742->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3742->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3744 = org$pandalanguage$pandac$Type$IntLiteral$panda$core$UInt64$R$org$pandalanguage$pandac$Type(((panda$core$UInt64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64($tmp3742, ((panda$core$Int64) { 1004 }), p_e->position, $tmp3744, ((panda$core$UInt64$wrapper*) p_e->payload)->value);
            return $tmp3742;
        }
        break;
        case 157:
        {
            org$pandalanguage$pandac$IRNode* $tmp3745 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp3745->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp3745->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp3747 = org$pandalanguage$pandac$Type$RealLiteral$panda$core$Real64$R$org$pandalanguage$pandac$Type(((panda$core$Real64$wrapper*) p_e->payload)->value);
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64($tmp3745, ((panda$core$Int64) { 1045 }), p_e->position, $tmp3747, ((panda$core$Real64$wrapper*) p_e->payload)->value);
            return $tmp3745;
        }
        break;
        case 112:
        {
            org$pandalanguage$pandac$IRNode* $tmp3748 = org$pandalanguage$pandac$Compiler$compilePrefix$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3748;
        }
        break;
        case 104:
        case 105:
        {
            org$pandalanguage$pandac$IRNode* $tmp3749 = org$pandalanguage$pandac$Compiler$compileRange$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3749;
        }
        break;
        case 113:
        {
            org$pandalanguage$pandac$IRNode* $tmp3750 = org$pandalanguage$pandac$Compiler$compileString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3750;
        }
        break;
        case 109:
        case 154:
        case 110:
        {
            org$pandalanguage$pandac$IRNode* $tmp3751 = org$pandalanguage$pandac$Compiler$compileType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3751;
        }
        break;
        case 114:
        {
            org$pandalanguage$pandac$IRNode* $tmp3752 = org$pandalanguage$pandac$Compiler$compileSelf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3752;
        }
        break;
        case 115:
        {
            org$pandalanguage$pandac$IRNode* $tmp3753 = org$pandalanguage$pandac$Compiler$compileSuper$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3753;
        }
        break;
        case 111:
        {
            org$pandalanguage$pandac$IRNode* $tmp3754 = org$pandalanguage$pandac$Compiler$compileCast$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3754;
        }
        break;
        case 117:
        {
            org$pandalanguage$pandac$IRNode* $tmp3755 = org$pandalanguage$pandac$Compiler$compileNull$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode(self, p_e);
            return $tmp3755;
        }
        break;
        case 158:
        {
            org$pandalanguage$pandac$IRNode* $tmp3756 = org$pandalanguage$pandac$Compiler$compileChoiceFieldReference$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_e);
            return $tmp3756;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    org$pandalanguage$pandac$SymbolTable* symbols3758;
    panda$collections$Array* result3761;
    panda$collections$Iterator* stmt$Iter3764;
    org$pandalanguage$pandac$ASTNode* stmt3776;
    org$pandalanguage$pandac$IRNode* compiled3781;
    panda$core$Bit $tmp3757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 126 }));
    PANDA_ASSERT($tmp3757.value);
    org$pandalanguage$pandac$SymbolTable* $tmp3759 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp3759->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp3759->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3759, self->symbolTable);
    symbols3758 = $tmp3759;
    self->symbolTable = symbols3758;
    panda$collections$Array* $tmp3762 = (panda$collections$Array*) malloc(40);
    $tmp3762->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3762->refCount.value = 1;
    panda$collections$Array$init($tmp3762);
    result3761 = $tmp3762;
    if (((panda$core$Bit) { p_b->children != NULL }).value) {
    {
        {
            ITable* $tmp3765 = ((panda$collections$Iterable*) p_b->children)->$class->itable;
            while ($tmp3765->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp3765 = $tmp3765->next;
            }
            $fn3767 $tmp3766 = $tmp3765->methods[0];
            panda$collections$Iterator* $tmp3768 = $tmp3766(((panda$collections$Iterable*) p_b->children));
            stmt$Iter3764 = $tmp3768;
            $l3769:;
            ITable* $tmp3771 = stmt$Iter3764->$class->itable;
            while ($tmp3771->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3771 = $tmp3771->next;
            }
            $fn3773 $tmp3772 = $tmp3771->methods[0];
            panda$core$Bit $tmp3774 = $tmp3772(stmt$Iter3764);
            panda$core$Bit $tmp3775 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3774);
            if (!$tmp3775.value) goto $l3770;
            {
                ITable* $tmp3777 = stmt$Iter3764->$class->itable;
                while ($tmp3777->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp3777 = $tmp3777->next;
                }
                $fn3779 $tmp3778 = $tmp3777->methods[1];
                panda$core$Object* $tmp3780 = $tmp3778(stmt$Iter3764);
                stmt3776 = ((org$pandalanguage$pandac$ASTNode*) $tmp3780);
                org$pandalanguage$pandac$IRNode* $tmp3782 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, stmt3776);
                compiled3781 = $tmp3782;
                if (((panda$core$Bit) { compiled3781 == NULL }).value) {
                {
                    panda$core$Object* $tmp3783 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3758->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3783);
                    return NULL;
                }
                }
                panda$core$Bit $tmp3784 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(compiled3781->kind, ((panda$core$Int64) { 1039 }));
                PANDA_ASSERT($tmp3784.value);
                panda$collections$Array$add$panda$collections$Array$T(result3761, ((panda$core$Object*) compiled3781));
            }
            goto $l3769;
            $l3770:;
        }
    }
    }
    panda$core$Object* $tmp3785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols3758->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp3785);
    org$pandalanguage$pandac$IRNode* $tmp3786 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3786->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3786->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3786, ((panda$core$Int64) { 1000 }), p_b->position, ((panda$collections$ListView*) result3761));
    return $tmp3786;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_i) {
    org$pandalanguage$pandac$IRNode* test3796;
    org$pandalanguage$pandac$IRNode* ifTrue3801;
    panda$collections$Array* children3804;
    org$pandalanguage$pandac$IRNode* ifFalse3809;
    panda$core$Bit $tmp3788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_i->kind, ((panda$core$Int64) { 118 }));
    PANDA_ASSERT($tmp3788.value);
    panda$core$Int64 $tmp3790 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3790, ((panda$core$Int64) { 2 }));
    bool $tmp3789 = $tmp3791.value;
    if ($tmp3789) goto $l3792;
    panda$core$Int64 $tmp3793 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3793, ((panda$core$Int64) { 3 }));
    $tmp3789 = $tmp3794.value;
    $l3792:;
    panda$core$Bit $tmp3795 = { $tmp3789 };
    PANDA_ASSERT($tmp3795.value);
    panda$core$Object* $tmp3797 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp3798 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3797));
    org$pandalanguage$pandac$Type* $tmp3799 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp3800 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3798, $tmp3799);
    test3796 = $tmp3800;
    if (((panda$core$Bit) { test3796 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp3802 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp3803 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3802));
    ifTrue3801 = $tmp3803;
    if (((panda$core$Bit) { ifTrue3801 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3805 = (panda$collections$Array*) malloc(40);
    $tmp3805->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3805->refCount.value = 1;
    panda$collections$Array$init($tmp3805);
    children3804 = $tmp3805;
    panda$collections$Array$add$panda$collections$Array$T(children3804, ((panda$core$Object*) test3796));
    panda$collections$Array$add$panda$collections$Array$T(children3804, ((panda$core$Object*) ifTrue3801));
    panda$core$Int64 $tmp3807 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_i->children);
    panda$core$Bit $tmp3808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3807, ((panda$core$Int64) { 3 }));
    if ($tmp3808.value) {
    {
        panda$core$Object* $tmp3810 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_i->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp3811 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp3810));
        ifFalse3809 = $tmp3811;
        if (((panda$core$Bit) { ifFalse3809 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children3804, ((panda$core$Object*) ifFalse3809));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp3812 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3812->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3812->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3812, ((panda$core$Int64) { 1012 }), p_i->position, ((panda$collections$ListView*) children3804));
    return $tmp3812;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* type13818;
    org$pandalanguage$pandac$Type* type23821;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp3832;
    panda$core$Bit $tmp3814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3814.value) {
    {
        panda$core$Object* $tmp3815 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3816 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, p_position, ((org$pandalanguage$pandac$Type*) $tmp3815));
        return $tmp3816;
    }
    }
    panda$core$Bit $tmp3817 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_type);
    if ($tmp3817.value) {
    {
        panda$core$Object* $tmp3819 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp3820 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3819));
        type13818 = $tmp3820;
        panda$core$Object* $tmp3822 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_type->subtypes, ((panda$core$Int64) { 2 }));
        type23821 = ((org$pandalanguage$pandac$Type*) $tmp3822);
        panda$core$Bit $tmp3823 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(type13818, type23821);
        if ($tmp3823.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$Bit $tmp3826 = org$pandalanguage$pandac$Type$isChar$R$panda$core$Bit(type13818);
        bool $tmp3825 = $tmp3826.value;
        if (!$tmp3825) goto $l3827;
        panda$core$Bit $tmp3829 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type23821)->name, &$s3828);
        $tmp3825 = $tmp3829.value;
        $l3827:;
        panda$core$Bit $tmp3830 = { $tmp3825 };
        bool $tmp3824 = $tmp3830.value;
        if (!$tmp3824) goto $l3831;
        panda$core$Int64 $tmp3834 = panda$core$String$length$R$panda$core$Int64(&$s3833);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp3832, ((panda$core$Int64$nullable) { $tmp3834, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp3835 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) type23821)->name, $tmp3832);
        panda$core$Bit $tmp3836 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) type13818)->name, $tmp3835);
        $tmp3824 = $tmp3836.value;
        $l3831:;
        panda$core$Bit $tmp3837 = { $tmp3824 };
        if ($tmp3837.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        panda$core$String* $tmp3839 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3838, ((panda$core$Object*) p_type));
        panda$core$String* $tmp3841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3839, &$s3840);
        panda$core$String* $tmp3843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3841, &$s3842);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_position, $tmp3843);
        return ((panda$core$Bit) { false });
    }
    }
    return ((panda$core$Bit) { true });
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_rawList, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Type* elementType3844;
    org$pandalanguage$pandac$IRNode* list3845;
    org$pandalanguage$pandac$Type* t3857;
    org$pandalanguage$pandac$Type* listType3890;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3922;
    org$pandalanguage$pandac$IRNode* body3926;
    panda$collections$Array* children3928;
    panda$core$Bit $tmp3848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_astTarget->kind, ((panda$core$Int64) { 106 }));
    bool $tmp3847 = $tmp3848.value;
    if (!$tmp3847) goto $l3849;
    $tmp3847 = ((panda$core$Bit) { p_astTarget->children != NULL }).value;
    $l3849:;
    panda$core$Bit $tmp3850 = { $tmp3847 };
    bool $tmp3846 = $tmp3850.value;
    if (!$tmp3846) goto $l3851;
    panda$core$Int64 $tmp3852 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
    panda$core$Bit $tmp3853 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3852, ((panda$core$Int64) { 0 }));
    $tmp3846 = $tmp3853.value;
    $l3851:;
    panda$core$Bit $tmp3854 = { $tmp3846 };
    if ($tmp3854.value) {
    {
        panda$core$Int64 $tmp3855 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_astTarget->children);
        panda$core$Bit $tmp3856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3855, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3856.value);
        panda$core$Object* $tmp3858 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_astTarget->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Type* $tmp3859 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp3858));
        org$pandalanguage$pandac$Type* $tmp3860 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp3859);
        t3857 = $tmp3860;
        panda$core$Bit $tmp3861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t3857->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3861.value) {
        {
            panda$core$String* $tmp3863 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3862, ((panda$core$Object*) t3857));
            panda$core$String* $tmp3865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3863, &$s3864);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3865);
            return NULL;
        }
        }
        panda$core$Bit $tmp3866 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(t3857);
        panda$core$Bit $tmp3867 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3866);
        if ($tmp3867.value) {
        {
            panda$core$String* $tmp3869 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3868, ((panda$core$Object*) t3857));
            panda$core$String* $tmp3871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3869, &$s3870);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_astTarget->position, $tmp3871);
            return NULL;
        }
        }
        panda$core$Bit $tmp3872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_rawList->kind, ((panda$core$Int64) { 1031 }));
        if ($tmp3872.value) {
        {
            panda$core$Int64 $tmp3873 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
            panda$core$Bit $tmp3874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3873, ((panda$core$Int64) { 2 }));
            if ($tmp3874.value) {
            {
                org$pandalanguage$pandac$Type* $tmp3875 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3857);
                org$pandalanguage$pandac$IRNode* $tmp3876 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3875);
                list3845 = $tmp3876;
            }
            }
            else {
            {
                panda$core$Int64 $tmp3877 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_rawList->children);
                panda$core$Bit $tmp3878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3877, ((panda$core$Int64) { 3 }));
                PANDA_ASSERT($tmp3878.value);
                org$pandalanguage$pandac$Type* $tmp3879 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3857);
                org$pandalanguage$pandac$IRNode* $tmp3880 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3879);
                list3845 = $tmp3880;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp3881 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(p_rawList->type);
        if ($tmp3881.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3882 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3857);
            org$pandalanguage$pandac$IRNode* $tmp3883 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3882);
            list3845 = $tmp3883;
        }
        }
        else {
        org$pandalanguage$pandac$Type* $tmp3884 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3857);
        panda$core$Int64$nullable $tmp3885 = org$pandalanguage$pandac$Compiler$coercionCost$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$R$panda$core$Int64$Q(self, p_rawList, $tmp3884);
        if (((panda$core$Bit) { $tmp3885.nonnull }).value) {
        {
            org$pandalanguage$pandac$Type* $tmp3886 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3857);
            org$pandalanguage$pandac$IRNode* $tmp3887 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3886);
            list3845 = $tmp3887;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp3888 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(t3857);
            org$pandalanguage$pandac$IRNode* $tmp3889 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, $tmp3888);
            list3845 = $tmp3889;
        }
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3891 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, p_rawList);
        listType3890 = $tmp3891;
        panda$core$Bit $tmp3893 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3890);
        bool $tmp3892 = $tmp3893.value;
        if ($tmp3892) goto $l3894;
        panda$core$Bit $tmp3895 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(listType3890);
        $tmp3892 = $tmp3895.value;
        $l3894:;
        panda$core$Bit $tmp3896 = { $tmp3892 };
        PANDA_ASSERT($tmp3896.value);
        panda$core$Object* $tmp3897 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3890->subtypes, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp3898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3897)->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3898.value) {
        {
            panda$core$Bit $tmp3899 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(listType3890);
            if ($tmp3899.value) {
            {
                panda$core$Object* $tmp3900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3890->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3901 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3900));
                org$pandalanguage$pandac$Type* $tmp3902 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3901);
                listType3890 = $tmp3902;
            }
            }
            else {
            {
                panda$core$Object* $tmp3903 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(listType3890->subtypes, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp3904 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp3903));
                org$pandalanguage$pandac$Type* $tmp3905 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp3904);
                listType3890 = $tmp3905;
            }
            }
        }
        }
        org$pandalanguage$pandac$IRNode* $tmp3906 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, p_rawList, listType3890);
        list3845 = $tmp3906;
    }
    }
    if (((panda$core$Bit) { list3845 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3907 = org$pandalanguage$pandac$Compiler$checkSteppedRangeTypes$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(self, list3845->position, list3845->type);
    panda$core$Bit $tmp3908 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3907);
    if ($tmp3908.value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3845->type->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3909.value) {
    {
        panda$core$Object* $tmp3910 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3845->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3910)->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3911.value);
        panda$core$Object* $tmp3912 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3845->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3913 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$Type*) $tmp3912)->subtypes, ((panda$core$Int64) { 1 }));
        elementType3844 = ((org$pandalanguage$pandac$Type*) $tmp3913);
    }
    }
    else {
    {
        panda$core$Bit $tmp3914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list3845->type->typeKind, ((panda$core$Int64) { 21 }));
        PANDA_ASSERT($tmp3914.value);
        panda$core$Object* $tmp3915 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(list3845->type->subtypes, ((panda$core$Int64) { 1 }));
        elementType3844 = ((org$pandalanguage$pandac$Type*) $tmp3915);
    }
    }
    panda$core$Bit $tmp3916 = org$pandalanguage$pandac$Type$isNumeric$R$panda$core$Bit(elementType3844);
    panda$core$Bit $tmp3917 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3916);
    if ($tmp3917.value) {
    {
        panda$core$String* $tmp3919 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3918, ((panda$core$Object*) list3845->type));
        panda$core$String* $tmp3921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3919, &$s3920);
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list3845->position, $tmp3921);
    }
    }
    org$pandalanguage$pandac$Variable$Kind* $tmp3923 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp3923->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp3923->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3923, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3925 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp3923, NULL, elementType3844);
    target3922 = $tmp3925;
    if (((panda$core$Bit) { target3922 == NULL }).value) {
    {
        return NULL;
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { target3922->value == NULL }).value);
    org$pandalanguage$pandac$IRNode* $tmp3927 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    body3926 = $tmp3927;
    if (((panda$core$Bit) { body3926 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3929 = (panda$collections$Array*) malloc(40);
    $tmp3929->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3929->refCount.value = 1;
    panda$collections$Array$init($tmp3929);
    children3928 = $tmp3929;
    panda$collections$Array$add$panda$collections$Array$T(children3928, ((panda$core$Object*) target3922->target));
    panda$collections$Array$add$panda$collections$Array$T(children3928, ((panda$core$Object*) list3845));
    panda$collections$Array$add$panda$collections$Array$T(children3928, ((panda$core$Object*) body3926));
    org$pandalanguage$pandac$IRNode* $tmp3931 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3931->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3931->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3931, ((panda$core$Int64) { 1029 }), p_position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children3928));
    return $tmp3931;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_label, org$pandalanguage$pandac$ASTNode* p_astTarget, org$pandalanguage$pandac$IRNode* p_iterator, org$pandalanguage$pandac$ASTNode* p_body) {
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target3940;
    org$pandalanguage$pandac$Variable* targetVar3946;
    panda$collections$Array* subtypes3947;
    org$pandalanguage$pandac$Type* iterType3951;
    org$pandalanguage$pandac$Variable* iter3962;
    panda$collections$Array* statements3969;
    panda$collections$Array* declChildren3972;
    panda$collections$Array* varChildren3977;
    panda$collections$Array* whileChildren3984;
    org$pandalanguage$pandac$IRNode* done3987;
    org$pandalanguage$pandac$IRNode* notCall3994;
    panda$collections$Array* valueDeclChildren3999;
    org$pandalanguage$pandac$IRNode* next4004;
    panda$collections$Array* valueVarChildren4011;
    org$pandalanguage$pandac$IRNode* block4016;
    panda$collections$Array* blockChildren4018;
    panda$core$Bit $tmp3934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_iterator->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3933 = $tmp3934.value;
    if (!$tmp3933) goto $l3935;
    panda$core$Object* $tmp3936 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3937 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3938 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3936), $tmp3937);
    $tmp3933 = $tmp3938.value;
    $l3935:;
    panda$core$Bit $tmp3939 = { $tmp3933 };
    PANDA_ASSERT($tmp3939.value);
    org$pandalanguage$pandac$Variable$Kind* $tmp3941 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp3941->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp3941->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3941, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp3943 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_iterator->type->subtypes, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp3944 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, p_astTarget, $tmp3941, NULL, ((org$pandalanguage$pandac$Type*) $tmp3943));
    target3940 = $tmp3944;
    if (((panda$core$Bit) { target3940 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp3945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target3940->target->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp3945.value);
    targetVar3946 = ((org$pandalanguage$pandac$Variable*) target3940->target->payload);
    panda$collections$Array* $tmp3948 = (panda$collections$Array*) malloc(40);
    $tmp3948->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3948->refCount.value = 1;
    panda$collections$Array$init($tmp3948);
    subtypes3947 = $tmp3948;
    org$pandalanguage$pandac$Type* $tmp3950 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
    panda$collections$Array$add$panda$collections$Array$T(subtypes3947, ((panda$core$Object*) $tmp3950));
    panda$collections$Array$add$panda$collections$Array$T(subtypes3947, ((panda$core$Object*) target3940->target->type));
    org$pandalanguage$pandac$Type* $tmp3952 = (org$pandalanguage$pandac$Type*) malloc(96);
    $tmp3952->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
    $tmp3952->refCount.value = 1;
    panda$core$Object* $tmp3954 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3947, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3955 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(((org$pandalanguage$pandac$Type*) $tmp3954));
    panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3955, &$s3956);
    panda$core$Object* $tmp3958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes3947, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3959 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3957, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp3958)));
    panda$core$String* $tmp3961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3959, &$s3960);
    org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp3952, $tmp3961, ((panda$core$Int64) { 21 }), p_position, ((panda$collections$ListView*) subtypes3947), ((panda$core$Bit) { true }));
    iterType3951 = $tmp3952;
    org$pandalanguage$pandac$Variable* $tmp3963 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp3963->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp3963->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind* $tmp3965 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp3965->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp3965->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp3965, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) targetVar3946)->name, &$s3967);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp3963, p_iterator->position, $tmp3965, $tmp3968, iterType3951);
    iter3962 = $tmp3963;
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) iter3962));
    panda$collections$Array* $tmp3970 = (panda$collections$Array*) malloc(40);
    $tmp3970->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3970->refCount.value = 1;
    panda$collections$Array$init($tmp3970);
    statements3969 = $tmp3970;
    panda$collections$Array* $tmp3973 = (panda$collections$Array*) malloc(40);
    $tmp3973->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3973->refCount.value = 1;
    panda$collections$Array$init($tmp3973);
    declChildren3972 = $tmp3973;
    org$pandalanguage$pandac$IRNode* $tmp3975 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3975->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3975->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3975, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3962->type, iter3962);
    panda$collections$Array$add$panda$collections$Array$T(declChildren3972, ((panda$core$Object*) $tmp3975));
    panda$collections$Array$add$panda$collections$Array$T(declChildren3972, ((panda$core$Object*) p_iterator));
    panda$collections$Array* $tmp3978 = (panda$collections$Array*) malloc(40);
    $tmp3978->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3978->refCount.value = 1;
    panda$collections$Array$init($tmp3978);
    varChildren3977 = $tmp3978;
    org$pandalanguage$pandac$IRNode* $tmp3980 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3980->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3980->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3980, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) iter3962)->position, ((panda$collections$ListView*) declChildren3972));
    panda$collections$Array$add$panda$collections$Array$T(varChildren3977, ((panda$core$Object*) $tmp3980));
    org$pandalanguage$pandac$IRNode* $tmp3982 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3982->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3982->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp3982, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) iter3962)->position, ((panda$collections$ListView*) varChildren3977));
    panda$collections$Array$add$panda$collections$Array$T(statements3969, ((panda$core$Object*) $tmp3982));
    panda$collections$Array* $tmp3985 = (panda$collections$Array*) malloc(40);
    $tmp3985->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3985->refCount.value = 1;
    panda$collections$Array$init($tmp3985);
    whileChildren3984 = $tmp3985;
    org$pandalanguage$pandac$IRNode* $tmp3988 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp3988->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp3988->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp3988, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) iter3962)->position, iter3962->type, iter3962);
    panda$collections$Array* $tmp3991 = (panda$collections$Array*) malloc(40);
    $tmp3991->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3991->refCount.value = 1;
    panda$collections$Array$init($tmp3991);
    org$pandalanguage$pandac$IRNode* $tmp3993 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp3988, &$s3990, ((panda$collections$ListView*) $tmp3991), NULL);
    done3987 = $tmp3993;
    if (((panda$core$Bit) { done3987 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp3996 = (panda$collections$Array*) malloc(40);
    $tmp3996->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3996->refCount.value = 1;
    panda$collections$Array$init($tmp3996);
    org$pandalanguage$pandac$IRNode* $tmp3998 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, done3987, &$s3995, ((panda$collections$ListView*) $tmp3996), NULL);
    notCall3994 = $tmp3998;
    if (((panda$core$Bit) { notCall3994 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3984, ((panda$core$Object*) notCall3994));
    panda$collections$Array* $tmp4000 = (panda$collections$Array*) malloc(40);
    $tmp4000->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4000->refCount.value = 1;
    panda$collections$Array$init($tmp4000);
    valueDeclChildren3999 = $tmp4000;
    org$pandalanguage$pandac$IRNode* $tmp4002 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4002->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4002->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4002, ((panda$core$Int64) { 1016 }), p_iterator->position, targetVar3946->type, targetVar3946);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3999, ((panda$core$Object*) $tmp4002));
    org$pandalanguage$pandac$IRNode* $tmp4005 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4005->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4005->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4005, ((panda$core$Int64) { 1016 }), p_iterator->position, iter3962->type, iter3962);
    panda$collections$Array* $tmp4008 = (panda$collections$Array*) malloc(40);
    $tmp4008->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4008->refCount.value = 1;
    panda$collections$Array$init($tmp4008);
    org$pandalanguage$pandac$IRNode* $tmp4010 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4005, &$s4007, ((panda$collections$ListView*) $tmp4008), NULL);
    next4004 = $tmp4010;
    PANDA_ASSERT(((panda$core$Bit) { next4004 != NULL }).value);
    panda$collections$Array$add$panda$collections$Array$T(valueDeclChildren3999, ((panda$core$Object*) next4004));
    panda$collections$Array* $tmp4012 = (panda$collections$Array*) malloc(40);
    $tmp4012->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4012->refCount.value = 1;
    panda$collections$Array$init($tmp4012);
    valueVarChildren4011 = $tmp4012;
    org$pandalanguage$pandac$IRNode* $tmp4014 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4014->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4014->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4014, ((panda$core$Int64) { 1021 }), p_iterator->position, ((panda$collections$ListView*) valueDeclChildren3999));
    panda$collections$Array$add$panda$collections$Array$T(valueVarChildren4011, ((panda$core$Object*) $tmp4014));
    org$pandalanguage$pandac$IRNode* $tmp4017 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_body);
    block4016 = $tmp4017;
    if (((panda$core$Bit) { block4016 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4019 = (panda$collections$Array*) malloc(40);
    $tmp4019->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4019->refCount.value = 1;
    panda$collections$Array$init($tmp4019);
    blockChildren4018 = $tmp4019;
    org$pandalanguage$pandac$IRNode* $tmp4021 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4021->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4021->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4021, ((panda$core$Int64) { 1018 }), p_iterator->position, ((panda$collections$ListView*) valueVarChildren4011));
    panda$collections$Array$add$panda$collections$Array$T(blockChildren4018, ((panda$core$Object*) $tmp4021));
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(blockChildren4018, ((panda$collections$CollectionView*) block4016->children));
    org$pandalanguage$pandac$IRNode* $tmp4023 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4023->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4023->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4023, ((panda$core$Int64) { 1000 }), block4016->position, ((panda$collections$ListView*) blockChildren4018));
    block4016 = $tmp4023;
    panda$collections$Array$add$panda$collections$Array$T(whileChildren3984, ((panda$core$Object*) block4016));
    org$pandalanguage$pandac$IRNode* $tmp4025 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4025->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4025->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4025, ((panda$core$Int64) { 1013 }), p_iterator->position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) whileChildren3984));
    panda$collections$Array$add$panda$collections$Array$T(statements3969, ((panda$core$Object*) $tmp4025));
    org$pandalanguage$pandac$IRNode* $tmp4027 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4027->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4027->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4027, ((panda$core$Int64) { 1000 }), p_iterator->position, ((panda$collections$ListView*) statements3969));
    return $tmp4027;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_f) {
    org$pandalanguage$pandac$IRNode* list4032;
    org$pandalanguage$pandac$SymbolTable* symbols4035;
    org$pandalanguage$pandac$IRNode* result4038;
    panda$core$Bit found4052;
    panda$collections$Iterator* intf$Iter4053;
    org$pandalanguage$pandac$Type* intf4066;
    org$pandalanguage$pandac$IRNode* iterator4078;
    org$pandalanguage$pandac$IRNode* iterable4090;
    org$pandalanguage$pandac$IRNode* iterator4092;
    panda$core$Bit $tmp4029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 119 }));
    PANDA_ASSERT($tmp4029.value);
    panda$core$Int64 $tmp4030 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4030, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4031.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_f->payload)));
    panda$core$Object* $tmp4033 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4034 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4033));
    list4032 = $tmp4034;
    if (((panda$core$Bit) { list4032 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4036 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4036->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4036->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4036, self->symbolTable);
    symbols4035 = $tmp4036;
    self->symbolTable = symbols4035;
    panda$core$Bit $tmp4041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(list4032->kind, ((panda$core$Int64) { 1031 }));
    bool $tmp4040 = $tmp4041.value;
    if ($tmp4040) goto $l4042;
    panda$core$Bit $tmp4043 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(list4032->type);
    $tmp4040 = $tmp4043.value;
    $l4042:;
    panda$core$Bit $tmp4044 = { $tmp4040 };
    bool $tmp4039 = $tmp4044.value;
    if ($tmp4039) goto $l4045;
    panda$core$Bit $tmp4046 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(list4032->type);
    $tmp4039 = $tmp4046.value;
    $l4045:;
    panda$core$Bit $tmp4047 = { $tmp4039 };
    if ($tmp4047.value) {
    {
        panda$core$Object* $tmp4048 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4049 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$IRNode* $tmp4050 = org$pandalanguage$pandac$Compiler$compileRangeFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4048), list4032, ((org$pandalanguage$pandac$ASTNode*) $tmp4049));
        result4038 = $tmp4050;
    }
    }
    else {
    {
        org$pandalanguage$pandac$IRNode* $tmp4051 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, list4032);
        list4032 = $tmp4051;
        if (((panda$core$Bit) { list4032 == NULL }).value) {
        {
            return NULL;
        }
        }
        found4052 = ((panda$core$Bit) { false });
        {
            panda$collections$Set* $tmp4054 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self, list4032->type);
            ITable* $tmp4055 = ((panda$collections$Iterable*) $tmp4054)->$class->itable;
            while ($tmp4055->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4055 = $tmp4055->next;
            }
            $fn4057 $tmp4056 = $tmp4055->methods[0];
            panda$collections$Iterator* $tmp4058 = $tmp4056(((panda$collections$Iterable*) $tmp4054));
            intf$Iter4053 = $tmp4058;
            $l4059:;
            ITable* $tmp4061 = intf$Iter4053->$class->itable;
            while ($tmp4061->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4061 = $tmp4061->next;
            }
            $fn4063 $tmp4062 = $tmp4061->methods[0];
            panda$core$Bit $tmp4064 = $tmp4062(intf$Iter4053);
            panda$core$Bit $tmp4065 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4064);
            if (!$tmp4065.value) goto $l4060;
            {
                ITable* $tmp4067 = intf$Iter4053->$class->itable;
                while ($tmp4067->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4067 = $tmp4067->next;
                }
                $fn4069 $tmp4068 = $tmp4067->methods[1];
                panda$core$Object* $tmp4070 = $tmp4068(intf$Iter4053);
                intf4066 = ((org$pandalanguage$pandac$Type*) $tmp4070);
                panda$core$Bit $tmp4072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4066->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4071 = $tmp4072.value;
                if (!$tmp4071) goto $l4073;
                panda$core$Object* $tmp4074 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4066->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4075 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4076 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4074), $tmp4075);
                $tmp4071 = $tmp4076.value;
                $l4073:;
                panda$core$Bit $tmp4077 = { $tmp4071 };
                if ($tmp4077.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4079 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4032, intf4066);
                    iterator4078 = $tmp4079;
                    panda$core$Object* $tmp4080 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp4081 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp4082 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4080), iterator4078, ((org$pandalanguage$pandac$ASTNode*) $tmp4081));
                    result4038 = $tmp4082;
                    found4052 = ((panda$core$Bit) { true });
                    goto $l4060;
                }
                }
                panda$core$Bit $tmp4084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(intf4066->typeKind, ((panda$core$Int64) { 21 }));
                bool $tmp4083 = $tmp4084.value;
                if (!$tmp4083) goto $l4085;
                panda$core$Object* $tmp4086 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(intf4066->subtypes, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4087 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
                panda$core$Bit $tmp4088 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4086), $tmp4087);
                $tmp4083 = $tmp4088.value;
                $l4085:;
                panda$core$Bit $tmp4089 = { $tmp4083 };
                if ($tmp4089.value) {
                {
                    org$pandalanguage$pandac$IRNode* $tmp4091 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, list4032, intf4066);
                    iterable4090 = $tmp4091;
                    panda$collections$Array* $tmp4094 = (panda$collections$Array*) malloc(40);
                    $tmp4094->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4094->refCount.value = 1;
                    panda$collections$Array$init($tmp4094);
                    org$pandalanguage$pandac$IRNode* $tmp4096 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, iterable4090, &$s4093, ((panda$collections$ListView*) $tmp4094));
                    iterator4092 = $tmp4096;
                    panda$core$Object* $tmp4097 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
                    panda$core$Object* $tmp4098 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
                    org$pandalanguage$pandac$IRNode* $tmp4099 = org$pandalanguage$pandac$Compiler$compileIteratorFor$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_f->position, ((panda$core$String*) p_f->payload), ((org$pandalanguage$pandac$ASTNode*) $tmp4097), iterator4092, ((org$pandalanguage$pandac$ASTNode*) $tmp4098));
                    result4038 = $tmp4099;
                    found4052 = ((panda$core$Bit) { true });
                    goto $l4060;
                }
                }
            }
            goto $l4059;
            $l4060:;
        }
        panda$core$Bit $tmp4100 = panda$core$Bit$$NOT$R$panda$core$Bit(found4052);
        if ($tmp4100.value) {
        {
            panda$core$String* $tmp4102 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4101, ((panda$core$Object*) list4032->type));
            panda$core$String* $tmp4104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4102, &$s4103);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, list4032->position, $tmp4104);
            return NULL;
        }
        }
    }
    }
    panda$core$Object* $tmp4105 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(symbols4035->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4105);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    return result4038;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$IRNode* test4109;
    org$pandalanguage$pandac$IRNode* stmt4114;
    panda$collections$Array* children4117;
    panda$core$Bit $tmp4106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 121 }));
    PANDA_ASSERT($tmp4106.value);
    panda$core$Int64 $tmp4107 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4107, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4108.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_w->payload)));
    panda$core$Object* $tmp4110 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4111 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4110));
    org$pandalanguage$pandac$Type* $tmp4112 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4113 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4111, $tmp4112);
    test4109 = $tmp4113;
    if (((panda$core$Bit) { test4109 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp4115 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4116 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4115));
    stmt4114 = $tmp4116;
    if (((panda$core$Bit) { stmt4114 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4118 = (panda$collections$Array*) malloc(40);
    $tmp4118->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4118->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4118, ((panda$core$Int64) { 2 }));
    children4117 = $tmp4118;
    panda$collections$Array$add$panda$collections$Array$T(children4117, ((panda$core$Object*) test4109));
    panda$collections$Array$add$panda$collections$Array$T(children4117, ((panda$core$Object*) stmt4114));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4120 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4120->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4120->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4120, ((panda$core$Int64) { 1013 }), p_w->position, p_w->payload, ((panda$collections$ListView*) children4117));
    return $tmp4120;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_d) {
    org$pandalanguage$pandac$IRNode* stmt4125;
    org$pandalanguage$pandac$IRNode* test4128;
    panda$collections$Array* children4133;
    panda$core$Bit $tmp4122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 120 }));
    PANDA_ASSERT($tmp4122.value);
    panda$core$Int64 $tmp4123 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4123, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4124.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_d->payload)));
    panda$core$Object* $tmp4126 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4127 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4126));
    stmt4125 = $tmp4127;
    if (((panda$core$Bit) { stmt4125 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$core$Object* $tmp4129 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$IRNode* $tmp4130 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4129));
    org$pandalanguage$pandac$Type* $tmp4131 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4132 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4130, $tmp4131);
    test4128 = $tmp4132;
    if (((panda$core$Bit) { test4128 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4134 = (panda$collections$Array*) malloc(40);
    $tmp4134->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4134->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4134, ((panda$core$Int64) { 2 }));
    children4133 = $tmp4134;
    panda$collections$Array$add$panda$collections$Array$T(children4133, ((panda$core$Object*) stmt4125));
    panda$collections$Array$add$panda$collections$Array$T(children4133, ((panda$core$Object*) test4128));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4136 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4136->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4136->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4136, ((panda$core$Int64) { 1014 }), p_d->position, p_d->payload, ((panda$collections$ListView*) children4133));
    return $tmp4136;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_l) {
    org$pandalanguage$pandac$IRNode* stmt4141;
    panda$collections$Array* children4144;
    panda$core$Bit $tmp4138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 122 }));
    PANDA_ASSERT($tmp4138.value);
    panda$core$Int64 $tmp4139 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp4140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4139, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4140.value);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loops, ((panda$core$Object*) ((panda$core$String*) p_l->payload)));
    panda$core$Object* $tmp4142 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4143 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4142));
    stmt4141 = $tmp4143;
    if (((panda$core$Bit) { stmt4141 == NULL }).value) {
    {
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
        return NULL;
    }
    }
    panda$collections$Array* $tmp4145 = (panda$collections$Array*) malloc(40);
    $tmp4145->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4145->refCount.value = 1;
    panda$collections$Array$init$panda$core$Int64($tmp4145, ((panda$core$Int64) { 1 }));
    children4144 = $tmp4145;
    panda$collections$Array$add$panda$collections$Array$T(children4144, ((panda$core$Object*) stmt4141));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loops);
    org$pandalanguage$pandac$IRNode* $tmp4147 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4147->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4147->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4147, ((panda$core$Int64) { 1015 }), p_l->position, p_l->payload, ((panda$collections$ListView*) children4144));
    return $tmp4147;
}
org$pandalanguage$pandac$Compiler$CompileTargetResult* org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_t, org$pandalanguage$pandac$Variable$Kind* p_kind, org$pandalanguage$pandac$IRNode* p_rawValue, org$pandalanguage$pandac$Type* p_valueType) {
    org$pandalanguage$pandac$IRNode* value4149;
    org$pandalanguage$pandac$Type* type4153;
    org$pandalanguage$pandac$Variable* v4169;
    value4149 = p_rawValue;
    bool $tmp4150 = ((panda$core$Bit) { value4149 == NULL }).value;
    if ($tmp4150) goto $l4151;
    $tmp4150 = ((panda$core$Bit) { p_valueType == NULL }).value;
    $l4151:;
    panda$core$Bit $tmp4152 = { $tmp4150 };
    PANDA_ASSERT($tmp4152.value);
    switch (p_t->kind.value) {
        case 106:
        {
            bool $tmp4154 = ((panda$core$Bit) { p_t->children != NULL }).value;
            if (!$tmp4154) goto $l4155;
            panda$core$Int64 $tmp4156 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
            panda$core$Bit $tmp4157 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4156, ((panda$core$Int64) { 0 }));
            $tmp4154 = $tmp4157.value;
            $l4155:;
            panda$core$Bit $tmp4158 = { $tmp4154 };
            if ($tmp4158.value) {
            {
                panda$core$Int64 $tmp4159 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
                panda$core$Bit $tmp4160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4159, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp4160.value);
                panda$core$Object* $tmp4161 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp4162 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self->scanner, ((org$pandalanguage$pandac$ASTNode*) $tmp4161));
                org$pandalanguage$pandac$Type* $tmp4163 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(self, $tmp4162);
                type4153 = $tmp4163;
            }
            }
            else {
            if (((panda$core$Bit) { value4149 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4164 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, value4149);
                value4149 = $tmp4164;
                if (((panda$core$Bit) { value4149 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$Type* $tmp4165 = org$pandalanguage$pandac$Compiler$variableType$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$Type(self, value4149);
                type4153 = $tmp4165;
            }
            }
            else {
            if (((panda$core$Bit) { p_valueType != NULL }).value) {
            {
                type4153 = p_valueType;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_t->position, &$s4166);
                return NULL;
            }
            }
            }
            }
            if (((panda$core$Bit) { value4149 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4167 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, value4149, type4153);
                value4149 = $tmp4167;
                if (((panda$core$Bit) { value4149 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp4168 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(value4149->type, type4153);
                PANDA_ASSERT($tmp4168.value);
            }
            }
            org$pandalanguage$pandac$Variable* $tmp4170 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4170->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4170->refCount.value = 1;
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4170, p_t->position, p_kind, ((panda$core$String*) p_t->payload), type4153);
            v4169 = $tmp4170;
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) v4169));
            org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4172 = (org$pandalanguage$pandac$Compiler$CompileTargetResult*) malloc(32);
            $tmp4172->$class = (panda$core$Class*) &org$pandalanguage$pandac$Compiler$CompileTargetResult$class;
            $tmp4172->refCount.value = 1;
            org$pandalanguage$pandac$IRNode* $tmp4174 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp4174->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp4174->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4174, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) v4169)->position, v4169->type, v4169);
            org$pandalanguage$pandac$Compiler$CompileTargetResult$init$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp4172, $tmp4174, value4149);
            return $tmp4172;
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
    org$pandalanguage$pandac$IRNode* value4184;
    org$pandalanguage$pandac$Compiler$CompileTargetResult* target4189;
    panda$collections$Array* children4192;
    org$pandalanguage$pandac$Variable* v4196;
    panda$core$Bit $tmp4176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 129 }));
    PANDA_ASSERT($tmp4176.value);
    panda$core$Int64 $tmp4178 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4178, ((panda$core$Int64) { 1 }));
    bool $tmp4177 = $tmp4179.value;
    if ($tmp4177) goto $l4180;
    panda$core$Int64 $tmp4181 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4181, ((panda$core$Int64) { 2 }));
    $tmp4177 = $tmp4182.value;
    $l4180:;
    panda$core$Bit $tmp4183 = { $tmp4177 };
    PANDA_ASSERT($tmp4183.value);
    panda$core$Int64 $tmp4185 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp4186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4185, ((panda$core$Int64) { 2 }));
    if ($tmp4186.value) {
    {
        panda$core$Object* $tmp4187 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4188 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4187));
        value4184 = $tmp4188;
        if (((panda$core$Bit) { value4184 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value4184 = NULL;
    }
    }
    panda$core$Object* $tmp4190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Compiler$CompileTargetResult* $tmp4191 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Compiler$CompileTargetResult$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4190), p_varKind, value4184, NULL);
    target4189 = $tmp4191;
    if (((panda$core$Bit) { target4189 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4193 = (panda$collections$Array*) malloc(40);
    $tmp4193->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4193->refCount.value = 1;
    panda$collections$Array$init($tmp4193);
    children4192 = $tmp4193;
    panda$collections$Array$add$panda$collections$Array$T(children4192, ((panda$core$Object*) target4189->target));
    if (((panda$core$Bit) { target4189->value != NULL }).value) {
    {
        panda$core$Bit $tmp4195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4189->target->kind, ((panda$core$Int64) { 1016 }));
        PANDA_ASSERT($tmp4195.value);
        v4196 = ((org$pandalanguage$pandac$Variable*) target4189->target->payload);
        v4196->initialValue = target4189->value;
        panda$collections$Array$add$panda$collections$Array$T(children4192, ((panda$core$Object*) target4189->value));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4197 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4197->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4197->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4197, ((panda$core$Int64) { 1021 }), p_d->position, ((panda$collections$ListView*) children4192));
    return $tmp4197;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_b) {
    panda$core$Bit found4200;
    panda$collections$Iterator* label$Iter4201;
    panda$core$String* label4213;
    panda$core$Bit $tmp4199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 134 }));
    PANDA_ASSERT($tmp4199.value);
    if (((panda$core$Bit) { p_b->payload != NULL }).value) {
    {
        found4200 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4202 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4202->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4202 = $tmp4202->next;
            }
            $fn4204 $tmp4203 = $tmp4202->methods[0];
            panda$collections$Iterator* $tmp4205 = $tmp4203(((panda$collections$Iterable*) self->loops));
            label$Iter4201 = $tmp4205;
            $l4206:;
            ITable* $tmp4208 = label$Iter4201->$class->itable;
            while ($tmp4208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4208 = $tmp4208->next;
            }
            $fn4210 $tmp4209 = $tmp4208->methods[0];
            panda$core$Bit $tmp4211 = $tmp4209(label$Iter4201);
            panda$core$Bit $tmp4212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4211);
            if (!$tmp4212.value) goto $l4207;
            {
                ITable* $tmp4214 = label$Iter4201->$class->itable;
                while ($tmp4214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4214 = $tmp4214->next;
                }
                $fn4216 $tmp4215 = $tmp4214->methods[1];
                panda$core$Object* $tmp4217 = $tmp4215(label$Iter4201);
                label4213 = ((panda$core$String*) $tmp4217);
                bool $tmp4218 = ((panda$core$Bit) { label4213 != NULL }).value;
                if (!$tmp4218) goto $l4219;
                panda$core$Bit $tmp4223;
                if (((panda$core$Bit) { label4213 != NULL }).value) goto $l4220; else goto $l4221;
                $l4220:;
                panda$core$Bit $tmp4224 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4213, ((panda$core$String*) p_b->payload));
                $tmp4223 = $tmp4224;
                goto $l4222;
                $l4221:;
                $tmp4223 = ((panda$core$Bit) { false });
                goto $l4222;
                $l4222:;
                $tmp4218 = $tmp4223.value;
                $l4219:;
                panda$core$Bit $tmp4225 = { $tmp4218 };
                if ($tmp4225.value) {
                {
                    found4200 = ((panda$core$Bit) { true });
                    goto $l4207;
                }
                }
            }
            goto $l4206;
            $l4207:;
        }
        panda$core$Bit $tmp4226 = panda$core$Bit$$NOT$R$panda$core$Bit(found4200);
        if ($tmp4226.value) {
        {
            panda$core$String* $tmp4228 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4227, p_b->payload);
            panda$core$String* $tmp4230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4228, &$s4229);
            panda$core$String* $tmp4232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4231, p_b->payload);
            panda$core$String* $tmp4234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4232, &$s4233);
            panda$core$String* $tmp4235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4230, $tmp4234);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, $tmp4235);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4236 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4236, ((panda$core$Int64) { 0 }));
    if ($tmp4237.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_b->position, &$s4238);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4239 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4239->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4239->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4239, ((panda$core$Int64) { 1006 }), p_b->position, ((panda$core$String*) p_b->payload));
    return $tmp4239;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_c) {
    panda$core$Bit found4242;
    panda$collections$Iterator* label$Iter4243;
    panda$core$String* label4255;
    panda$core$Bit $tmp4241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_c->kind, ((panda$core$Int64) { 135 }));
    PANDA_ASSERT($tmp4241.value);
    if (((panda$core$Bit) { p_c->payload != NULL }).value) {
    {
        found4242 = ((panda$core$Bit) { false });
        {
            ITable* $tmp4244 = ((panda$collections$Iterable*) self->loops)->$class->itable;
            while ($tmp4244->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4244 = $tmp4244->next;
            }
            $fn4246 $tmp4245 = $tmp4244->methods[0];
            panda$collections$Iterator* $tmp4247 = $tmp4245(((panda$collections$Iterable*) self->loops));
            label$Iter4243 = $tmp4247;
            $l4248:;
            ITable* $tmp4250 = label$Iter4243->$class->itable;
            while ($tmp4250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4250 = $tmp4250->next;
            }
            $fn4252 $tmp4251 = $tmp4250->methods[0];
            panda$core$Bit $tmp4253 = $tmp4251(label$Iter4243);
            panda$core$Bit $tmp4254 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4253);
            if (!$tmp4254.value) goto $l4249;
            {
                ITable* $tmp4256 = label$Iter4243->$class->itable;
                while ($tmp4256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp4256 = $tmp4256->next;
                }
                $fn4258 $tmp4257 = $tmp4256->methods[1];
                panda$core$Object* $tmp4259 = $tmp4257(label$Iter4243);
                label4255 = ((panda$core$String*) $tmp4259);
                bool $tmp4260 = ((panda$core$Bit) { label4255 != NULL }).value;
                if (!$tmp4260) goto $l4261;
                panda$core$Bit $tmp4265;
                if (((panda$core$Bit) { label4255 != NULL }).value) goto $l4262; else goto $l4263;
                $l4262:;
                panda$core$Bit $tmp4266 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(label4255, ((panda$core$String*) p_c->payload));
                $tmp4265 = $tmp4266;
                goto $l4264;
                $l4263:;
                $tmp4265 = ((panda$core$Bit) { false });
                goto $l4264;
                $l4264:;
                $tmp4260 = $tmp4265.value;
                $l4261:;
                panda$core$Bit $tmp4267 = { $tmp4260 };
                if ($tmp4267.value) {
                {
                    found4242 = ((panda$core$Bit) { true });
                    goto $l4249;
                }
                }
            }
            goto $l4248;
            $l4249:;
        }
        panda$core$Bit $tmp4268 = panda$core$Bit$$NOT$R$panda$core$Bit(found4242);
        if ($tmp4268.value) {
        {
            panda$core$String* $tmp4270 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4269, p_c->payload);
            panda$core$String* $tmp4272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4270, &$s4271);
            panda$core$String* $tmp4274 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4273, p_c->payload);
            panda$core$String* $tmp4276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4274, &$s4275);
            panda$core$String* $tmp4277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4272, $tmp4276);
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, $tmp4277);
        }
        }
    }
    }
    else {
    panda$core$Int64 $tmp4278 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loops);
    panda$core$Bit $tmp4279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4278, ((panda$core$Int64) { 0 }));
    if ($tmp4279.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_c->position, &$s4280);
    }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4281 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4281->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4281->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp4281, ((panda$core$Int64) { 1007 }), p_c->position, ((panda$core$String*) p_c->payload));
    return $tmp4281;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_r) {
    org$pandalanguage$pandac$IRNode* value4295;
    panda$collections$Array* children4300;
    panda$core$Bit $tmp4283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_r->kind, ((panda$core$Int64) { 136 }));
    PANDA_ASSERT($tmp4283.value);
    bool $tmp4284 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp4284) goto $l4285;
    panda$core$Int64 $tmp4286 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp4287 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4286, ((panda$core$Int64) { 0 }));
    $tmp4284 = $tmp4287.value;
    $l4285:;
    panda$core$Bit $tmp4288 = { $tmp4284 };
    if ($tmp4288.value) {
    {
        panda$core$Int64 $tmp4289 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp4290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4289, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4290.value);
        panda$core$Object* $tmp4291 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$Type* $tmp4292 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4293 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4291)->returnType, $tmp4292);
        if ($tmp4293.value) {
        {
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4294);
            return NULL;
        }
        }
        panda$core$Object* $tmp4296 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$IRNode* $tmp4297 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4296));
        panda$core$Object* $tmp4298 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
        org$pandalanguage$pandac$IRNode* $tmp4299 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4297, ((org$pandalanguage$pandac$MethodDecl*) $tmp4298)->returnType);
        value4295 = $tmp4299;
        if (((panda$core$Bit) { value4295 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4301 = (panda$collections$Array*) malloc(40);
        $tmp4301->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4301->refCount.value = 1;
        panda$collections$Array$init($tmp4301);
        children4300 = $tmp4301;
        panda$collections$Array$add$panda$collections$Array$T(children4300, ((panda$core$Object*) value4295));
        org$pandalanguage$pandac$IRNode* $tmp4303 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4303->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4303->refCount.value = 1;
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4303, ((panda$core$Int64) { 1008 }), p_r->position, ((panda$collections$ListView*) children4300));
        return $tmp4303;
    }
    }
    panda$core$Object* $tmp4305 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentMethod);
    org$pandalanguage$pandac$Type* $tmp4306 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4307 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl*) $tmp4305)->returnType, $tmp4306);
    if ($tmp4307.value) {
    {
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, p_r->position, &$s4308);
        return NULL;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4309 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4309->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4309->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp4309, ((panda$core$Int64) { 1008 }), p_r->position);
    return $tmp4309;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_a) {
    org$pandalanguage$pandac$IRNode* test4319;
    org$pandalanguage$pandac$ClassDecl* bit4324;
    org$pandalanguage$pandac$Symbol* value4327;
    panda$collections$Array* fieldChildren4330;
    panda$collections$Array* children4336;
    org$pandalanguage$pandac$IRNode* msg4341;
    panda$core$Bit $tmp4311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 123 }));
    PANDA_ASSERT($tmp4311.value);
    panda$core$Int64 $tmp4313 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4313, ((panda$core$Int64) { 1 }));
    bool $tmp4312 = $tmp4314.value;
    if ($tmp4312) goto $l4315;
    panda$core$Int64 $tmp4316 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4316, ((panda$core$Int64) { 2 }));
    $tmp4312 = $tmp4317.value;
    $l4315:;
    panda$core$Bit $tmp4318 = { $tmp4312 };
    PANDA_ASSERT($tmp4318.value);
    panda$core$Object* $tmp4320 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4321 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4320));
    test4319 = $tmp4321;
    if (((panda$core$Bit) { test4319 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4322 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode* $tmp4323 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, test4319, $tmp4322);
    test4319 = $tmp4323;
    if (((panda$core$Bit) { test4319 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4325 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4326 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, $tmp4325);
    bit4324 = $tmp4326;
    PANDA_ASSERT(((panda$core$Bit) { bit4324 != NULL }).value);
    org$pandalanguage$pandac$Symbol* $tmp4329 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(bit4324->symbolTable, &$s4328);
    value4327 = $tmp4329;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, ((org$pandalanguage$pandac$FieldDecl*) value4327));
    panda$collections$Array* $tmp4331 = (panda$collections$Array*) malloc(40);
    $tmp4331->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4331->refCount.value = 1;
    panda$collections$Array$init($tmp4331);
    fieldChildren4330 = $tmp4331;
    panda$collections$Array$add$panda$collections$Array$T(fieldChildren4330, ((panda$core$Object*) test4319));
    org$pandalanguage$pandac$IRNode* $tmp4333 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4333->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4333->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp4335 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4333, ((panda$core$Int64) { 1026 }), p_a->position, $tmp4335, ((panda$core$Object*) value4327), ((panda$collections$ListView*) fieldChildren4330));
    test4319 = $tmp4333;
    panda$collections$Array* $tmp4337 = (panda$collections$Array*) malloc(40);
    $tmp4337->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4337->refCount.value = 1;
    panda$collections$Array$init($tmp4337);
    children4336 = $tmp4337;
    panda$collections$Array$add$panda$collections$Array$T(children4336, ((panda$core$Object*) test4319));
    panda$core$Int64 $tmp4339 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp4340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4339, ((panda$core$Int64) { 2 }));
    if ($tmp4340.value) {
    {
        panda$core$Object* $tmp4342 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4343 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4342));
        msg4341 = $tmp4343;
        if (((panda$core$Bit) { msg4341 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$Type* $tmp4344 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$IRNode* $tmp4345 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, msg4341, $tmp4344);
        msg4341 = $tmp4345;
        if (((panda$core$Bit) { msg4341 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children4336, ((panda$core$Object*) msg4341));
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp4346 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4346->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4346->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4346, ((panda$core$Int64) { 1034 }), p_a->position, ((panda$collections$ListView*) children4336));
    return $tmp4346;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_v) {
    panda$core$Int64 nodeKind4361;
    org$pandalanguage$pandac$Variable$Kind* varKind4362;
    panda$collections$Array* decls4371;
    panda$collections$Iterator* astDecl$Iter4374;
    org$pandalanguage$pandac$ASTNode* astDecl4386;
    org$pandalanguage$pandac$IRNode* decl4391;
    panda$core$Bit $tmp4351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 130 }));
    bool $tmp4350 = $tmp4351.value;
    if ($tmp4350) goto $l4352;
    panda$core$Bit $tmp4353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 131 }));
    $tmp4350 = $tmp4353.value;
    $l4352:;
    panda$core$Bit $tmp4354 = { $tmp4350 };
    bool $tmp4349 = $tmp4354.value;
    if ($tmp4349) goto $l4355;
    panda$core$Bit $tmp4356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 133 }));
    $tmp4349 = $tmp4356.value;
    $l4355:;
    panda$core$Bit $tmp4357 = { $tmp4349 };
    bool $tmp4348 = $tmp4357.value;
    if ($tmp4348) goto $l4358;
    panda$core$Bit $tmp4359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 132 }));
    $tmp4348 = $tmp4359.value;
    $l4358:;
    panda$core$Bit $tmp4360 = { $tmp4348 };
    PANDA_ASSERT($tmp4360.value);
    switch (p_v->kind.value) {
        case 130:
        {
            nodeKind4361 = ((panda$core$Int64) { 1017 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4363 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4363->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4363->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4363, ((panda$core$Int64) { 0 }));
            varKind4362 = $tmp4363;
        }
        break;
        case 131:
        {
            nodeKind4361 = ((panda$core$Int64) { 1018 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4365 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4365->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4365->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4365, ((panda$core$Int64) { 1 }));
            varKind4362 = $tmp4365;
        }
        break;
        case 132:
        {
            nodeKind4361 = ((panda$core$Int64) { 1019 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4367 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4367->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4367->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4367, ((panda$core$Int64) { 2 }));
            varKind4362 = $tmp4367;
        }
        break;
        case 133:
        {
            nodeKind4361 = ((panda$core$Int64) { 1020 });
            org$pandalanguage$pandac$Variable$Kind* $tmp4369 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4369->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4369->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4369, ((panda$core$Int64) { 3 }));
            varKind4362 = $tmp4369;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$collections$Array* $tmp4372 = (panda$collections$Array*) malloc(40);
    $tmp4372->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4372->refCount.value = 1;
    panda$collections$Array$init($tmp4372);
    decls4371 = $tmp4372;
    {
        ITable* $tmp4375 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp4375->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4375 = $tmp4375->next;
        }
        $fn4377 $tmp4376 = $tmp4375->methods[0];
        panda$collections$Iterator* $tmp4378 = $tmp4376(((panda$collections$Iterable*) p_v->children));
        astDecl$Iter4374 = $tmp4378;
        $l4379:;
        ITable* $tmp4381 = astDecl$Iter4374->$class->itable;
        while ($tmp4381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4381 = $tmp4381->next;
        }
        $fn4383 $tmp4382 = $tmp4381->methods[0];
        panda$core$Bit $tmp4384 = $tmp4382(astDecl$Iter4374);
        panda$core$Bit $tmp4385 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4384);
        if (!$tmp4385.value) goto $l4380;
        {
            ITable* $tmp4387 = astDecl$Iter4374->$class->itable;
            while ($tmp4387->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4387 = $tmp4387->next;
            }
            $fn4389 $tmp4388 = $tmp4387->methods[1];
            panda$core$Object* $tmp4390 = $tmp4388(astDecl$Iter4374);
            astDecl4386 = ((org$pandalanguage$pandac$ASTNode*) $tmp4390);
            org$pandalanguage$pandac$IRNode* $tmp4392 = org$pandalanguage$pandac$Compiler$compileDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$R$org$pandalanguage$pandac$IRNode$Q(self, astDecl4386, varKind4362);
            decl4391 = $tmp4392;
            if (((panda$core$Bit) { decl4391 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(decls4371, ((panda$core$Object*) decl4391));
        }
        goto $l4379;
        $l4380:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4393 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4393->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4393->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4393, nodeKind4361, p_v->position, ((panda$collections$ListView*) decls4371));
    return $tmp4393;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_test) {
    org$pandalanguage$pandac$IRNode* target4395;
    org$pandalanguage$pandac$IRNode* testValue4398;
    panda$collections$Array* callChildren4400;
    org$pandalanguage$pandac$IRNode* $tmp4396 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4396->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4396->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4396, ((panda$core$Int64) { 1016 }), p_test->position, p_value->type, p_value);
    target4395 = $tmp4396;
    org$pandalanguage$pandac$IRNode* $tmp4399 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_test);
    testValue4398 = $tmp4399;
    if (((panda$core$Bit) { testValue4398 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp4401 = (panda$collections$Array*) malloc(40);
    $tmp4401->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4401->refCount.value = 1;
    panda$collections$Array$init($tmp4401);
    callChildren4400 = $tmp4401;
    panda$collections$Array$add$panda$collections$Array$T(callChildren4400, ((panda$core$Object*) testValue4398));
    org$pandalanguage$pandac$IRNode* $tmp4404 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4395, &$s4403, ((panda$collections$ListView*) callChildren4400));
    return $tmp4404;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Variable* p_value, org$pandalanguage$pandac$ASTNode* p_w) {
    org$pandalanguage$pandac$ASTNode* test4416;
    org$pandalanguage$pandac$ClassDecl* cl4424;
    org$pandalanguage$pandac$IRNode* base4427;
    panda$collections$Array* callChildren4431;
    org$pandalanguage$pandac$IRNode* target4434;
    org$pandalanguage$pandac$IRNode* check4437;
    org$pandalanguage$pandac$ChoiceEntry* entry4440;
    panda$core$Int64 requiredCount4441;
    panda$core$Int64 actualCount4443;
    panda$collections$Array* statements4470;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4473;
    org$pandalanguage$pandac$Variable* variable4492;
    panda$collections$Array* declChildren4501;
    panda$collections$Array* fieldRefChildren4506;
    panda$collections$Array* varChildren4516;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4529;
    org$pandalanguage$pandac$IRNode* statement4544;
    panda$collections$Array* children4554;
    org$pandalanguage$pandac$IRNode* test4561;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4565;
    org$pandalanguage$pandac$IRNode* nextTest4581;
    panda$collections$Array* callChildren4585;
    panda$collections$Array* statements4598;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4601;
    org$pandalanguage$pandac$IRNode* statement4616;
    panda$collections$Array* children4626;
    panda$core$Bit $tmp4405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4405.value);
    panda$core$Int64 $tmp4406 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4407 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4406, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4407.value);
    panda$core$Object* $tmp4408 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4408)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4409.value);
    panda$core$Object* $tmp4410 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4411 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4410)->children);
    panda$core$Bit $tmp4412 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4411, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4412.value);
    panda$core$Object* $tmp4413 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4414 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4413)->children);
    panda$core$Bit $tmp4415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4414, ((panda$core$Int64) { 1 }));
    if ($tmp4415.value) {
    {
        panda$core$Object* $tmp4417 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4418 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4417)->children, ((panda$core$Int64) { 0 }));
        test4416 = ((org$pandalanguage$pandac$ASTNode*) $tmp4418);
        panda$core$Bit $tmp4420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(test4416->kind, ((panda$core$Int64) { 107 }));
        bool $tmp4419 = $tmp4420.value;
        if (!$tmp4419) goto $l4421;
        panda$core$Bit $tmp4422 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_value->type);
        $tmp4419 = $tmp4422.value;
        $l4421:;
        panda$core$Bit $tmp4423 = { $tmp4419 };
        if ($tmp4423.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp4425 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_value->type);
            cl4424 = $tmp4425;
            panda$core$Bit $tmp4426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(cl4424->classKind->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp4426.value) {
            {
                panda$core$Object* $tmp4428 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4416->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$IRNode* $tmp4429 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4428));
                base4427 = $tmp4429;
                if (((panda$core$Bit) { base4427 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$core$Bit $tmp4430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(base4427->kind, ((panda$core$Int64) { 1046 }));
                if ($tmp4430.value) {
                {
                    panda$collections$Array* $tmp4432 = (panda$collections$Array*) malloc(40);
                    $tmp4432->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4432->refCount.value = 1;
                    panda$collections$Array$init($tmp4432);
                    callChildren4431 = $tmp4432;
                    panda$collections$Array$add$panda$collections$Array$T(callChildren4431, ((panda$core$Object*) base4427));
                    org$pandalanguage$pandac$IRNode* $tmp4435 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4435->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4435->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4435, ((panda$core$Int64) { 1016 }), test4416->position, p_value->type, p_value);
                    target4434 = $tmp4435;
                    org$pandalanguage$pandac$IRNode* $tmp4439 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, target4434, &$s4438, ((panda$collections$ListView*) callChildren4431));
                    check4437 = $tmp4439;
                    if (((panda$core$Bit) { check4437 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    entry4440 = ((org$pandalanguage$pandac$ChoiceEntry*) base4427->payload);
                    panda$core$Int64 $tmp4442 = panda$collections$Array$get_count$R$panda$core$Int64(entry4440->fields);
                    requiredCount4441 = $tmp4442;
                    panda$core$Int64 $tmp4444 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(test4416->children);
                    panda$core$Int64 $tmp4445 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4444, ((panda$core$Int64) { 1 }));
                    actualCount4443 = $tmp4445;
                    panda$core$Bit $tmp4446 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(actualCount4443, requiredCount4441);
                    if ($tmp4446.value) {
                    {
                        panda$core$String* $tmp4448 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4447, base4427->payload);
                        panda$core$String* $tmp4450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4448, &$s4449);
                        panda$core$String* $tmp4451 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4450, ((panda$core$Object*) wrap_panda$core$Int64(requiredCount4441)));
                        panda$core$String* $tmp4453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4451, &$s4452);
                        panda$core$Bit $tmp4455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(requiredCount4441, ((panda$core$Int64) { 1 }));
                        ITable* $tmp4457 = ((panda$core$Formattable*) wrap_panda$core$Bit($tmp4455))->$class->itable;
                        while ($tmp4457->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                            $tmp4457 = $tmp4457->next;
                        }
                        $fn4459 $tmp4458 = $tmp4457->methods[0];
                        panda$core$String* $tmp4460 = $tmp4458(((panda$core$Formattable*) wrap_panda$core$Bit($tmp4455)), &$s4456);
                        panda$core$String* $tmp4461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4454, $tmp4460);
                        panda$core$String* $tmp4463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4461, &$s4462);
                        panda$core$String* $tmp4464 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4463, ((panda$core$Object*) wrap_panda$core$Int64(actualCount4443)));
                        panda$core$String* $tmp4466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4464, &$s4465);
                        panda$core$String* $tmp4467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4453, $tmp4466);
                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, test4416->position, $tmp4467);
                        return NULL;
                    }
                    }
                    org$pandalanguage$pandac$SymbolTable* $tmp4468 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
                    $tmp4468->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
                    $tmp4468->refCount.value = 1;
                    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4468, self->symbolTable);
                    self->symbolTable = $tmp4468;
                    panda$collections$Array* $tmp4471 = (panda$collections$Array*) malloc(40);
                    $tmp4471->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4471->refCount.value = 1;
                    panda$collections$Array$init($tmp4471);
                    statements4470 = $tmp4471;
                    panda$core$Int64 $tmp4474 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(test4416->children);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4473, ((panda$core$Int64) { 1 }), $tmp4474, ((panda$core$Bit) { false }));
                    int64_t $tmp4476 = $tmp4473.min.value;
                    panda$core$Int64 i4475 = { $tmp4476 };
                    int64_t $tmp4478 = $tmp4473.max.value;
                    bool $tmp4479 = $tmp4473.inclusive.value;
                    if ($tmp4479) goto $l4486; else goto $l4487;
                    $l4486:;
                    if ($tmp4476 <= $tmp4478) goto $l4480; else goto $l4482;
                    $l4487:;
                    if ($tmp4476 < $tmp4478) goto $l4480; else goto $l4482;
                    $l4480:;
                    {
                        panda$core$Object* $tmp4488 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4416->children, i4475);
                        panda$core$Bit $tmp4489 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4488)->kind, ((panda$core$Int64) { 106 }));
                        if ($tmp4489.value) {
                        {
                            panda$core$Object* $tmp4490 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4416->children, i4475);
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4490)->position, &$s4491);
                            return NULL;
                        }
                        }
                        org$pandalanguage$pandac$Variable* $tmp4493 = (org$pandalanguage$pandac$Variable*) malloc(88);
                        $tmp4493->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
                        $tmp4493->refCount.value = 1;
                        panda$core$Object* $tmp4495 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4416->children, i4475);
                        org$pandalanguage$pandac$Variable$Kind* $tmp4496 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
                        $tmp4496->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
                        $tmp4496->refCount.value = 1;
                        org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4496, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp4498 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(test4416->children, i4475);
                        panda$core$Int64 $tmp4499 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4475, ((panda$core$Int64) { 1 }));
                        panda$core$Object* $tmp4500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(entry4440->fields, $tmp4499);
                        org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4493, ((org$pandalanguage$pandac$ASTNode*) $tmp4495)->position, $tmp4496, ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp4498)->payload), ((org$pandalanguage$pandac$Type*) ((org$pandalanguage$pandac$Pair*) $tmp4500)->second));
                        variable4492 = $tmp4493;
                        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(self->symbolTable, ((org$pandalanguage$pandac$Symbol*) variable4492));
                        panda$collections$Array* $tmp4502 = (panda$collections$Array*) malloc(40);
                        $tmp4502->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4502->refCount.value = 1;
                        panda$collections$Array$init($tmp4502);
                        declChildren4501 = $tmp4502;
                        org$pandalanguage$pandac$IRNode* $tmp4504 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4504->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4504->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4504, ((panda$core$Int64) { 1016 }), ((org$pandalanguage$pandac$Symbol*) variable4492)->position, variable4492->type, variable4492);
                        panda$collections$Array$add$panda$collections$Array$T(declChildren4501, ((panda$core$Object*) $tmp4504));
                        panda$collections$Array* $tmp4507 = (panda$collections$Array*) malloc(40);
                        $tmp4507->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4507->refCount.value = 1;
                        panda$collections$Array$init($tmp4507);
                        fieldRefChildren4506 = $tmp4507;
                        org$pandalanguage$pandac$IRNode* $tmp4509 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4509->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4509->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4509, ((panda$core$Int64) { 1016 }), test4416->position, p_value->type, p_value);
                        panda$collections$Array$add$panda$collections$Array$T(fieldRefChildren4506, ((panda$core$Object*) $tmp4509));
                        org$pandalanguage$pandac$IRNode* $tmp4511 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4511->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4511->refCount.value = 1;
                        org$pandalanguage$pandac$Pair* $tmp4513 = (org$pandalanguage$pandac$Pair*) malloc(32);
                        $tmp4513->$class = (panda$core$Class*) &org$pandalanguage$pandac$Pair$class;
                        $tmp4513->refCount.value = 1;
                        panda$core$Int64 $tmp4515 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4475, ((panda$core$Int64) { 1 }));
                        org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp4513, ((panda$core$Object*) entry4440), ((panda$core$Object*) wrap_panda$core$Int64($tmp4515)));
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp4511, ((panda$core$Int64) { 1047 }), ((org$pandalanguage$pandac$Symbol*) variable4492)->position, variable4492->type, ((panda$core$Object*) $tmp4513), ((panda$collections$ListView*) fieldRefChildren4506));
                        panda$collections$Array$add$panda$collections$Array$T(declChildren4501, ((panda$core$Object*) $tmp4511));
                        panda$collections$Array* $tmp4517 = (panda$collections$Array*) malloc(40);
                        $tmp4517->$class = (panda$core$Class*) &panda$collections$Array$class;
                        $tmp4517->refCount.value = 1;
                        panda$collections$Array$init($tmp4517);
                        varChildren4516 = $tmp4517;
                        org$pandalanguage$pandac$IRNode* $tmp4519 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4519->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4519->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4519, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) variable4492)->position, ((panda$collections$ListView*) declChildren4501));
                        panda$collections$Array$add$panda$collections$Array$T(varChildren4516, ((panda$core$Object*) $tmp4519));
                        org$pandalanguage$pandac$IRNode* $tmp4521 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                        $tmp4521->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                        $tmp4521->refCount.value = 1;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4521, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) variable4492)->position, ((panda$collections$ListView*) varChildren4516));
                        panda$collections$Array$add$panda$collections$Array$T(statements4470, ((panda$core$Object*) $tmp4521));
                    }
                    $l4483:;
                    int64_t $tmp4524 = $tmp4478 - i4475.value;
                    if ($tmp4479) goto $l4525; else goto $l4526;
                    $l4525:;
                    if ($tmp4524 >= 1) goto $l4523; else goto $l4482;
                    $l4526:;
                    if ($tmp4524 > 1) goto $l4523; else goto $l4482;
                    $l4523:;
                    i4475.value += 1;
                    goto $l4480;
                    $l4482:;
                    panda$core$Int64 $tmp4530 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
                    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4529, ((panda$core$Int64) { 1 }), $tmp4530, ((panda$core$Bit) { false }));
                    int64_t $tmp4532 = $tmp4529.min.value;
                    panda$core$Int64 i4531 = { $tmp4532 };
                    int64_t $tmp4534 = $tmp4529.max.value;
                    bool $tmp4535 = $tmp4529.inclusive.value;
                    if ($tmp4535) goto $l4542; else goto $l4543;
                    $l4542:;
                    if ($tmp4532 <= $tmp4534) goto $l4536; else goto $l4538;
                    $l4543:;
                    if ($tmp4532 < $tmp4534) goto $l4536; else goto $l4538;
                    $l4536:;
                    {
                        panda$core$Object* $tmp4545 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4531);
                        org$pandalanguage$pandac$IRNode* $tmp4546 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4545));
                        statement4544 = $tmp4546;
                        if (((panda$core$Bit) { statement4544 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4470, ((panda$core$Object*) statement4544));
                    }
                    $l4539:;
                    int64_t $tmp4548 = $tmp4534 - i4531.value;
                    if ($tmp4535) goto $l4549; else goto $l4550;
                    $l4549:;
                    if ($tmp4548 >= 1) goto $l4547; else goto $l4538;
                    $l4550:;
                    if ($tmp4548 > 1) goto $l4547; else goto $l4538;
                    $l4547:;
                    i4531.value += 1;
                    goto $l4536;
                    $l4538:;
                    panda$core$Object* $tmp4553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
                    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4553);
                    panda$collections$Array* $tmp4555 = (panda$collections$Array*) malloc(40);
                    $tmp4555->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp4555->refCount.value = 1;
                    panda$collections$Array$init($tmp4555);
                    children4554 = $tmp4555;
                    panda$collections$Array$add$panda$collections$Array$T(children4554, ((panda$core$Object*) check4437));
                    org$pandalanguage$pandac$IRNode* $tmp4557 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4557->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4557->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4557, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4470));
                    panda$collections$Array$add$panda$collections$Array$T(children4554, ((panda$core$Object*) $tmp4557));
                    org$pandalanguage$pandac$IRNode* $tmp4559 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp4559->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp4559->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4559, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4554));
                    return $tmp4559;
                }
                }
            }
            }
        }
        }
    }
    }
    panda$core$Object* $tmp4562 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp4563 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4562)->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4564 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4563));
    test4561 = $tmp4564;
    if (((panda$core$Bit) { test4561 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Object* $tmp4566 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4567 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4566)->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4565, ((panda$core$Int64) { 1 }), $tmp4567, ((panda$core$Bit) { false }));
    int64_t $tmp4569 = $tmp4565.min.value;
    panda$core$Int64 i4568 = { $tmp4569 };
    int64_t $tmp4571 = $tmp4565.max.value;
    bool $tmp4572 = $tmp4565.inclusive.value;
    if ($tmp4572) goto $l4579; else goto $l4580;
    $l4579:;
    if ($tmp4569 <= $tmp4571) goto $l4573; else goto $l4575;
    $l4580:;
    if ($tmp4569 < $tmp4571) goto $l4573; else goto $l4575;
    $l4573:;
    {
        panda$core$Object* $tmp4582 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4583 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$ASTNode*) $tmp4582)->children, i4568);
        org$pandalanguage$pandac$IRNode* $tmp4584 = org$pandalanguage$pandac$Compiler$compileWhenTest$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_value, ((org$pandalanguage$pandac$ASTNode*) $tmp4583));
        nextTest4581 = $tmp4584;
        if (((panda$core$Bit) { nextTest4581 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp4586 = (panda$collections$Array*) malloc(40);
        $tmp4586->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4586->refCount.value = 1;
        panda$collections$Array$init($tmp4586);
        callChildren4585 = $tmp4586;
        panda$collections$Array$add$panda$collections$Array$T(callChildren4585, ((panda$core$Object*) nextTest4581));
        org$pandalanguage$pandac$IRNode* $tmp4589 = org$pandalanguage$pandac$Compiler$call$org$pandalanguage$pandac$IRNode$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$R$org$pandalanguage$pandac$IRNode$Q(self, test4561, &$s4588, ((panda$collections$ListView*) callChildren4585));
        test4561 = $tmp4589;
        if (((panda$core$Bit) { test4561 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    $l4576:;
    int64_t $tmp4591 = $tmp4571 - i4568.value;
    if ($tmp4572) goto $l4592; else goto $l4593;
    $l4592:;
    if ($tmp4591 >= 1) goto $l4590; else goto $l4575;
    $l4593:;
    if ($tmp4591 > 1) goto $l4590; else goto $l4575;
    $l4590:;
    i4568.value += 1;
    goto $l4573;
    $l4575:;
    org$pandalanguage$pandac$SymbolTable* $tmp4596 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4596->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4596->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4596, self->symbolTable);
    self->symbolTable = $tmp4596;
    panda$collections$Array* $tmp4599 = (panda$collections$Array*) malloc(40);
    $tmp4599->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4599->refCount.value = 1;
    panda$collections$Array$init($tmp4599);
    statements4598 = $tmp4599;
    panda$core$Int64 $tmp4602 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4601, ((panda$core$Int64) { 1 }), $tmp4602, ((panda$core$Bit) { false }));
    int64_t $tmp4604 = $tmp4601.min.value;
    panda$core$Int64 i4603 = { $tmp4604 };
    int64_t $tmp4606 = $tmp4601.max.value;
    bool $tmp4607 = $tmp4601.inclusive.value;
    if ($tmp4607) goto $l4614; else goto $l4615;
    $l4614:;
    if ($tmp4604 <= $tmp4606) goto $l4608; else goto $l4610;
    $l4615:;
    if ($tmp4604 < $tmp4606) goto $l4608; else goto $l4610;
    $l4608:;
    {
        panda$core$Object* $tmp4617 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4603);
        org$pandalanguage$pandac$IRNode* $tmp4618 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4617));
        statement4616 = $tmp4618;
        if (((panda$core$Bit) { statement4616 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4598, ((panda$core$Object*) statement4616));
    }
    $l4611:;
    int64_t $tmp4620 = $tmp4606 - i4603.value;
    if ($tmp4607) goto $l4621; else goto $l4622;
    $l4621:;
    if ($tmp4620 >= 1) goto $l4619; else goto $l4610;
    $l4622:;
    if ($tmp4620 > 1) goto $l4619; else goto $l4610;
    $l4619:;
    i4603.value += 1;
    goto $l4608;
    $l4610:;
    panda$core$Object* $tmp4625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4625);
    panda$collections$Array* $tmp4627 = (panda$collections$Array*) malloc(40);
    $tmp4627->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4627->refCount.value = 1;
    panda$collections$Array$init($tmp4627);
    children4626 = $tmp4627;
    panda$collections$Array$add$panda$collections$Array$T(children4626, ((panda$core$Object*) test4561));
    org$pandalanguage$pandac$IRNode* $tmp4629 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4629->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4629->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4629, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4598));
    panda$collections$Array$add$panda$collections$Array$T(children4626, ((panda$core$Object*) $tmp4629));
    org$pandalanguage$pandac$IRNode* $tmp4631 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4631->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4631->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4631, ((panda$core$Int64) { 1012 }), p_w->position, ((panda$collections$ListView*) children4626));
    return $tmp4631;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m, org$pandalanguage$pandac$IRNode* p_value) {
    panda$collections$Array* children4633;
    org$pandalanguage$pandac$Variable* valueVar4636;
    panda$collections$Array* declChildren4648;
    panda$collections$Array* varChildren4653;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4660;
    org$pandalanguage$pandac$ASTNode* c4675;
    org$pandalanguage$pandac$IRNode* w4677;
    panda$collections$Array* statements4679;
    panda$collections$Iterator* astStatement$Iter4682;
    org$pandalanguage$pandac$ASTNode* astStatement4694;
    org$pandalanguage$pandac$IRNode* stmt4699;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp4709;
    panda$collections$Array* newChildren4737;
    panda$collections$Array* $tmp4634 = (panda$collections$Array*) malloc(40);
    $tmp4634->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4634->refCount.value = 1;
    panda$collections$Array$init($tmp4634);
    children4633 = $tmp4634;
    org$pandalanguage$pandac$Variable* $tmp4637 = (org$pandalanguage$pandac$Variable*) malloc(88);
    $tmp4637->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
    $tmp4637->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind* $tmp4639 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
    $tmp4639->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
    $tmp4639->refCount.value = 1;
    org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4639, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4642 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4641, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.line)));
    panda$core$String* $tmp4644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4642, &$s4643);
    panda$core$String* $tmp4645 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4644, ((panda$core$Object*) wrap_panda$core$Int64(p_m->position.column)));
    panda$core$String* $tmp4647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4645, &$s4646);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type($tmp4637, p_m->position, $tmp4639, $tmp4647, p_value->type);
    valueVar4636 = $tmp4637;
    panda$collections$Array* $tmp4649 = (panda$collections$Array*) malloc(40);
    $tmp4649->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4649->refCount.value = 1;
    panda$collections$Array$init($tmp4649);
    declChildren4648 = $tmp4649;
    org$pandalanguage$pandac$IRNode* $tmp4651 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4651->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4651->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable($tmp4651, ((panda$core$Int64) { 1016 }), p_value->position, valueVar4636->type, valueVar4636);
    panda$collections$Array$add$panda$collections$Array$T(declChildren4648, ((panda$core$Object*) $tmp4651));
    panda$collections$Array$add$panda$collections$Array$T(declChildren4648, ((panda$core$Object*) p_value));
    panda$collections$Array* $tmp4654 = (panda$collections$Array*) malloc(40);
    $tmp4654->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4654->refCount.value = 1;
    panda$collections$Array$init($tmp4654);
    varChildren4653 = $tmp4654;
    org$pandalanguage$pandac$IRNode* $tmp4656 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4656->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4656->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4656, ((panda$core$Int64) { 1021 }), ((org$pandalanguage$pandac$Symbol*) valueVar4636)->position, ((panda$collections$ListView*) declChildren4648));
    panda$collections$Array$add$panda$collections$Array$T(varChildren4653, ((panda$core$Object*) $tmp4656));
    org$pandalanguage$pandac$IRNode* $tmp4658 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4658->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4658->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4658, ((panda$core$Int64) { 1018 }), ((org$pandalanguage$pandac$Symbol*) valueVar4636)->position, ((panda$collections$ListView*) varChildren4653));
    panda$collections$Array$add$panda$collections$Array$T(children4633, ((panda$core$Object*) $tmp4658));
    panda$core$Int64 $tmp4661 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4660, ((panda$core$Int64) { 1 }), $tmp4661, ((panda$core$Bit) { false }));
    int64_t $tmp4663 = $tmp4660.min.value;
    panda$core$Int64 i4662 = { $tmp4663 };
    int64_t $tmp4665 = $tmp4660.max.value;
    bool $tmp4666 = $tmp4660.inclusive.value;
    if ($tmp4666) goto $l4673; else goto $l4674;
    $l4673:;
    if ($tmp4663 <= $tmp4665) goto $l4667; else goto $l4669;
    $l4674:;
    if ($tmp4663 < $tmp4665) goto $l4667; else goto $l4669;
    $l4667:;
    {
        panda$core$Object* $tmp4676 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i4662);
        c4675 = ((org$pandalanguage$pandac$ASTNode*) $tmp4676);
        switch (c4675->kind.value) {
            case 124:
            {
                org$pandalanguage$pandac$IRNode* $tmp4678 = org$pandalanguage$pandac$Compiler$compileChainedIfWhen$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, valueVar4636, c4675);
                w4677 = $tmp4678;
                if (((panda$core$Bit) { w4677 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4633, ((panda$core$Object*) w4677));
            }
            break;
            case 127:
            {
                panda$collections$Array* $tmp4680 = (panda$collections$Array*) malloc(40);
                $tmp4680->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp4680->refCount.value = 1;
                panda$collections$Array$init($tmp4680);
                statements4679 = $tmp4680;
                {
                    ITable* $tmp4683 = ((panda$collections$Iterable*) c4675->children)->$class->itable;
                    while ($tmp4683->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp4683 = $tmp4683->next;
                    }
                    $fn4685 $tmp4684 = $tmp4683->methods[0];
                    panda$collections$Iterator* $tmp4686 = $tmp4684(((panda$collections$Iterable*) c4675->children));
                    astStatement$Iter4682 = $tmp4686;
                    $l4687:;
                    ITable* $tmp4689 = astStatement$Iter4682->$class->itable;
                    while ($tmp4689->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp4689 = $tmp4689->next;
                    }
                    $fn4691 $tmp4690 = $tmp4689->methods[0];
                    panda$core$Bit $tmp4692 = $tmp4690(astStatement$Iter4682);
                    panda$core$Bit $tmp4693 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4692);
                    if (!$tmp4693.value) goto $l4688;
                    {
                        ITable* $tmp4695 = astStatement$Iter4682->$class->itable;
                        while ($tmp4695->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp4695 = $tmp4695->next;
                        }
                        $fn4697 $tmp4696 = $tmp4695->methods[1];
                        panda$core$Object* $tmp4698 = $tmp4696(astStatement$Iter4682);
                        astStatement4694 = ((org$pandalanguage$pandac$ASTNode*) $tmp4698);
                        org$pandalanguage$pandac$IRNode* $tmp4700 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, astStatement4694);
                        stmt4699 = $tmp4700;
                        if (((panda$core$Bit) { stmt4699 == NULL }).value) {
                        {
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements4679, ((panda$core$Object*) stmt4699));
                    }
                    goto $l4687;
                    $l4688:;
                }
                org$pandalanguage$pandac$IRNode* $tmp4701 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                $tmp4701->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                $tmp4701->refCount.value = 1;
                org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4701, ((panda$core$Int64) { 1000 }), c4675->position, ((panda$collections$ListView*) statements4679));
                panda$collections$Array$add$panda$collections$Array$T(children4633, ((panda$core$Object*) $tmp4701));
            }
            break;
            default:
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
        }
    }
    $l4670:;
    int64_t $tmp4704 = $tmp4665 - i4662.value;
    if ($tmp4666) goto $l4705; else goto $l4706;
    $l4705:;
    if ($tmp4704 >= 1) goto $l4703; else goto $l4669;
    $l4706:;
    if ($tmp4704 > 1) goto $l4703; else goto $l4669;
    $l4703:;
    i4662.value += 1;
    goto $l4667;
    $l4669:;
    panda$core$Int64 $tmp4710 = panda$collections$Array$get_count$R$panda$core$Int64(children4633);
    panda$core$Int64 $tmp4711 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4710, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4709, $tmp4711, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp4713 = $tmp4709.start.value;
    panda$core$Int64 i4712 = { $tmp4713 };
    int64_t $tmp4715 = $tmp4709.end.value;
    int64_t $tmp4716 = $tmp4709.step.value;
    bool $tmp4717 = $tmp4709.inclusive.value;
    bool $tmp4724 = $tmp4716 > 0;
    if ($tmp4724) goto $l4722; else goto $l4723;
    $l4722:;
    if ($tmp4717) goto $l4725; else goto $l4726;
    $l4725:;
    if ($tmp4713 <= $tmp4715) goto $l4718; else goto $l4720;
    $l4726:;
    if ($tmp4713 < $tmp4715) goto $l4718; else goto $l4720;
    $l4723:;
    if ($tmp4717) goto $l4727; else goto $l4728;
    $l4727:;
    if ($tmp4713 >= $tmp4715) goto $l4718; else goto $l4720;
    $l4728:;
    if ($tmp4713 > $tmp4715) goto $l4718; else goto $l4720;
    $l4718:;
    {
        panda$core$Int64 $tmp4730 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4712, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4633, $tmp4730);
        panda$core$Bit $tmp4732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4731)->kind, ((panda$core$Int64) { 1012 }));
        PANDA_ASSERT($tmp4732.value);
        panda$core$Int64 $tmp4733 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4712, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4734 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4633, $tmp4733);
        panda$core$Int64 $tmp4735 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4734)->children);
        panda$core$Bit $tmp4736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4735, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp4736.value);
        panda$collections$Array* $tmp4738 = (panda$collections$Array*) malloc(40);
        $tmp4738->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4738->refCount.value = 1;
        panda$core$Int64 $tmp4740 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4712, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4741 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4633, $tmp4740);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp4738, ((panda$collections$ListView*) ((org$pandalanguage$pandac$IRNode*) $tmp4741)->children));
        newChildren4737 = $tmp4738;
        panda$core$Object* $tmp4742 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4633, i4712);
        panda$collections$Array$add$panda$collections$Array$T(newChildren4737, ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp4742)));
        panda$core$Int64 $tmp4743 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4712, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$IRNode* $tmp4744 = (org$pandalanguage$pandac$IRNode*) malloc(72);
        $tmp4744->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
        $tmp4744->refCount.value = 1;
        panda$core$Int64 $tmp4746 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4712, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4747 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4633, $tmp4746);
        panda$core$Int64 $tmp4748 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4712, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4749 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children4633, $tmp4748);
        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4744, ((org$pandalanguage$pandac$IRNode*) $tmp4747)->kind, ((org$pandalanguage$pandac$IRNode*) $tmp4749)->position, ((panda$collections$ListView*) newChildren4737));
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(children4633, $tmp4743, ((panda$core$Object*) $tmp4744));
        panda$core$Int64 $tmp4750 = panda$collections$Array$get_count$R$panda$core$Int64(children4633);
        panda$core$Int64 $tmp4751 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4750, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(children4633, $tmp4751);
    }
    $l4721:;
    if ($tmp4724) goto $l4753; else goto $l4754;
    $l4753:;
    int64_t $tmp4755 = $tmp4715 - i4712.value;
    if ($tmp4717) goto $l4756; else goto $l4757;
    $l4756:;
    if ($tmp4755 >= $tmp4716) goto $l4752; else goto $l4720;
    $l4757:;
    if ($tmp4755 > $tmp4716) goto $l4752; else goto $l4720;
    $l4754:;
    int64_t $tmp4759 = i4712.value - $tmp4715;
    if ($tmp4717) goto $l4760; else goto $l4761;
    $l4760:;
    if ($tmp4759 >= -$tmp4716) goto $l4752; else goto $l4720;
    $l4761:;
    if ($tmp4759 > -$tmp4716) goto $l4752; else goto $l4720;
    $l4752:;
    i4712.value += $tmp4716;
    goto $l4718;
    $l4720:;
    org$pandalanguage$pandac$IRNode* $tmp4763 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4763->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4763->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4763, ((panda$core$Int64) { 1000 }), p_m->position, ((panda$collections$ListView*) children4633));
    return $tmp4763;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$ASTNode* p_w) {
    panda$collections$Array* children4773;
    panda$collections$Iterator* expr$Iter4776;
    org$pandalanguage$pandac$ASTNode* expr4789;
    org$pandalanguage$pandac$IRNode* compiled4794;
    panda$collections$Array* statements4799;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4802;
    org$pandalanguage$pandac$IRNode* statement4817;
    panda$core$Bit $tmp4765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 124 }));
    PANDA_ASSERT($tmp4765.value);
    panda$core$Int64 $tmp4766 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp4767 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4766, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4767.value);
    panda$core$Object* $tmp4768 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp4768)->kind, ((panda$core$Int64) { 128 }));
    PANDA_ASSERT($tmp4769.value);
    panda$core$Object* $tmp4770 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$Int64 $tmp4771 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$ASTNode*) $tmp4770)->children);
    panda$core$Bit $tmp4772 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4771, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4772.value);
    panda$collections$Array* $tmp4774 = (panda$collections$Array*) malloc(40);
    $tmp4774->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4774->refCount.value = 1;
    panda$collections$Array$init($tmp4774);
    children4773 = $tmp4774;
    {
        panda$core$Object* $tmp4777 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
        ITable* $tmp4778 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4777)->children)->$class->itable;
        while ($tmp4778->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4778 = $tmp4778->next;
        }
        $fn4780 $tmp4779 = $tmp4778->methods[0];
        panda$collections$Iterator* $tmp4781 = $tmp4779(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp4777)->children));
        expr$Iter4776 = $tmp4781;
        $l4782:;
        ITable* $tmp4784 = expr$Iter4776->$class->itable;
        while ($tmp4784->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4784 = $tmp4784->next;
        }
        $fn4786 $tmp4785 = $tmp4784->methods[0];
        panda$core$Bit $tmp4787 = $tmp4785(expr$Iter4776);
        panda$core$Bit $tmp4788 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4787);
        if (!$tmp4788.value) goto $l4783;
        {
            ITable* $tmp4790 = expr$Iter4776->$class->itable;
            while ($tmp4790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4790 = $tmp4790->next;
            }
            $fn4792 $tmp4791 = $tmp4790->methods[1];
            panda$core$Object* $tmp4793 = $tmp4791(expr$Iter4776);
            expr4789 = ((org$pandalanguage$pandac$ASTNode*) $tmp4793);
            org$pandalanguage$pandac$IRNode* $tmp4795 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, expr4789);
            org$pandalanguage$pandac$IRNode* $tmp4796 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4795, p_type);
            compiled4794 = $tmp4796;
            if (((panda$core$Bit) { compiled4794 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4773, ((panda$core$Object*) compiled4794));
        }
        goto $l4782;
        $l4783:;
    }
    org$pandalanguage$pandac$SymbolTable* $tmp4797 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4797->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4797->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4797, self->symbolTable);
    self->symbolTable = $tmp4797;
    panda$collections$Array* $tmp4800 = (panda$collections$Array*) malloc(40);
    $tmp4800->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4800->refCount.value = 1;
    panda$collections$Array$init($tmp4800);
    statements4799 = $tmp4800;
    panda$core$Int64 $tmp4803 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4802, ((panda$core$Int64) { 1 }), $tmp4803, ((panda$core$Bit) { false }));
    int64_t $tmp4805 = $tmp4802.min.value;
    panda$core$Int64 i4804 = { $tmp4805 };
    int64_t $tmp4807 = $tmp4802.max.value;
    bool $tmp4808 = $tmp4802.inclusive.value;
    if ($tmp4808) goto $l4815; else goto $l4816;
    $l4815:;
    if ($tmp4805 <= $tmp4807) goto $l4809; else goto $l4811;
    $l4816:;
    if ($tmp4805 < $tmp4807) goto $l4809; else goto $l4811;
    $l4809:;
    {
        panda$core$Object* $tmp4818 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, i4804);
        org$pandalanguage$pandac$IRNode* $tmp4819 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4818));
        statement4817 = $tmp4819;
        if (((panda$core$Bit) { statement4817 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(statements4799, ((panda$core$Object*) statement4817));
    }
    $l4812:;
    int64_t $tmp4821 = $tmp4807 - i4804.value;
    if ($tmp4808) goto $l4822; else goto $l4823;
    $l4822:;
    if ($tmp4821 >= 1) goto $l4820; else goto $l4811;
    $l4823:;
    if ($tmp4821 > 1) goto $l4820; else goto $l4811;
    $l4820:;
    i4804.value += 1;
    goto $l4809;
    $l4811:;
    panda$core$Object* $tmp4826 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4826);
    org$pandalanguage$pandac$IRNode* $tmp4827 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4827->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4827->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4827, ((panda$core$Int64) { 1000 }), p_w->position, ((panda$collections$ListView*) statements4799));
    panda$collections$Array$add$panda$collections$Array$T(children4773, ((panda$core$Object*) $tmp4827));
    org$pandalanguage$pandac$IRNode* $tmp4829 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4829->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4829->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4829, ((panda$core$Int64) { 1042 }), p_w->position, ((panda$collections$ListView*) children4773));
    return $tmp4829;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_o) {
    panda$collections$Array* children4832;
    panda$collections$Array* statements4837;
    panda$collections$Iterator* s$Iter4840;
    org$pandalanguage$pandac$ASTNode* s4852;
    org$pandalanguage$pandac$IRNode* statement4857;
    panda$core$Bit $tmp4831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_o->kind, ((panda$core$Int64) { 127 }));
    PANDA_ASSERT($tmp4831.value);
    panda$collections$Array* $tmp4833 = (panda$collections$Array*) malloc(40);
    $tmp4833->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4833->refCount.value = 1;
    panda$collections$Array$init($tmp4833);
    children4832 = $tmp4833;
    org$pandalanguage$pandac$SymbolTable* $tmp4835 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4835->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4835->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4835, self->symbolTable);
    self->symbolTable = $tmp4835;
    panda$collections$Array* $tmp4838 = (panda$collections$Array*) malloc(40);
    $tmp4838->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4838->refCount.value = 1;
    panda$collections$Array$init($tmp4838);
    statements4837 = $tmp4838;
    {
        ITable* $tmp4841 = ((panda$collections$Iterable*) p_o->children)->$class->itable;
        while ($tmp4841->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4841 = $tmp4841->next;
        }
        $fn4843 $tmp4842 = $tmp4841->methods[0];
        panda$collections$Iterator* $tmp4844 = $tmp4842(((panda$collections$Iterable*) p_o->children));
        s$Iter4840 = $tmp4844;
        $l4845:;
        ITable* $tmp4847 = s$Iter4840->$class->itable;
        while ($tmp4847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4847 = $tmp4847->next;
        }
        $fn4849 $tmp4848 = $tmp4847->methods[0];
        panda$core$Bit $tmp4850 = $tmp4848(s$Iter4840);
        panda$core$Bit $tmp4851 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4850);
        if (!$tmp4851.value) goto $l4846;
        {
            ITable* $tmp4853 = s$Iter4840->$class->itable;
            while ($tmp4853->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4853 = $tmp4853->next;
            }
            $fn4855 $tmp4854 = $tmp4853->methods[1];
            panda$core$Object* $tmp4856 = $tmp4854(s$Iter4840);
            s4852 = ((org$pandalanguage$pandac$ASTNode*) $tmp4856);
            org$pandalanguage$pandac$IRNode* $tmp4858 = org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, s4852);
            statement4857 = $tmp4858;
            if (((panda$core$Bit) { statement4857 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(statements4837, ((panda$core$Object*) statement4857));
        }
        goto $l4845;
        $l4846:;
    }
    panda$core$Object* $tmp4859 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->symbolTable->parents, ((panda$core$Int64) { 0 }));
    self->symbolTable = ((org$pandalanguage$pandac$SymbolTable*) $tmp4859);
    org$pandalanguage$pandac$IRNode* $tmp4860 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4860->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4860->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4860, ((panda$core$Int64) { 1000 }), p_o->position, ((panda$collections$ListView*) statements4837));
    panda$collections$Array$add$panda$collections$Array$T(children4832, ((panda$core$Object*) $tmp4860));
    org$pandalanguage$pandac$IRNode* $tmp4862 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4862->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4862->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4862, ((panda$core$Int64) { 1043 }), p_o->position, ((panda$collections$ListView*) children4832));
    return $tmp4862;
}
panda$core$Bit org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4871;
    org$pandalanguage$pandac$Variable* v4880;
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$Bit) { true });
        }
        break;
        case 1010:
        {
            panda$core$Bit $tmp4865 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_expr->type);
            bool $tmp4864 = $tmp4865.value;
            if (!$tmp4864) goto $l4866;
            panda$core$Object* $tmp4867 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4868 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4867)->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4869 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4868));
            $tmp4864 = $tmp4869.value;
            $l4866:;
            panda$core$Bit $tmp4870 = { $tmp4864 };
            return $tmp4870;
        }
        break;
        case 1026:
        {
            f4871 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            PANDA_ASSERT(f4871->resolved.value);
            panda$core$Bit $tmp4874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(f4871->fieldKind, ((panda$core$Int64) { 10002 }));
            bool $tmp4873 = $tmp4874.value;
            if (!$tmp4873) goto $l4875;
            $tmp4873 = ((panda$core$Bit) { f4871->value != NULL }).value;
            $l4875:;
            panda$core$Bit $tmp4876 = { $tmp4873 };
            bool $tmp4872 = $tmp4876.value;
            if (!$tmp4872) goto $l4877;
            panda$core$Bit $tmp4878 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, f4871->value);
            $tmp4872 = $tmp4878.value;
            $l4877:;
            panda$core$Bit $tmp4879 = { $tmp4872 };
            return $tmp4879;
        }
        break;
        case 1016:
        {
            v4880 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$Bit $tmp4882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4880->varKind->$rawValue, ((panda$core$Int64) { 1 }));
            bool $tmp4881 = $tmp4882.value;
            if ($tmp4881) goto $l4883;
            panda$core$Bit $tmp4886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(v4880->varKind->$rawValue, ((panda$core$Int64) { 2 }));
            bool $tmp4885 = $tmp4886.value;
            if (!$tmp4885) goto $l4887;
            $tmp4885 = ((panda$core$Bit) { v4880->initialValue != NULL }).value;
            $l4887:;
            panda$core$Bit $tmp4888 = { $tmp4885 };
            bool $tmp4884 = $tmp4888.value;
            if (!$tmp4884) goto $l4889;
            panda$core$Bit $tmp4890 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, v4880->initialValue);
            $tmp4884 = $tmp4890.value;
            $l4889:;
            panda$core$Bit $tmp4891 = { $tmp4884 };
            $tmp4881 = $tmp4891.value;
            $l4883:;
            panda$core$Bit $tmp4892 = { $tmp4881 };
            return $tmp4892;
        }
        break;
        default:
        {
            return ((panda$core$Bit) { false });
        }
    }
}
panda$core$UInt64 org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$IRNode* p_expr) {
    org$pandalanguage$pandac$FieldDecl* f4897;
    org$pandalanguage$pandac$Variable* v4899;
    panda$core$Bit $tmp4893 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_expr);
    PANDA_ASSERT($tmp4893.value);
    switch (p_expr->kind.value) {
        case 1004:
        {
            return ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
        }
        break;
        case 1010:
        {
            panda$core$Object* $tmp4894 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp4895 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4894)->children, ((panda$core$Int64) { 0 }));
            panda$core$UInt64 $tmp4896 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, ((org$pandalanguage$pandac$IRNode*) $tmp4895));
            return $tmp4896;
        }
        break;
        case 1026:
        {
            f4897 = ((org$pandalanguage$pandac$FieldDecl*) p_expr->payload);
            panda$core$UInt64 $tmp4898 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, f4897->value);
            return $tmp4898;
        }
        break;
        case 1016:
        {
            v4899 = ((org$pandalanguage$pandac$Variable*) p_expr->payload);
            panda$core$UInt64 $tmp4900 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self, v4899->initialValue);
            return $tmp4900;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_m) {
    org$pandalanguage$pandac$IRNode* value4904;
    panda$collections$Array* children4911;
    panda$collections$Iterator* rawWhen$Iter4914;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp4915;
    org$pandalanguage$pandac$ASTNode* rawWhen4928;
    org$pandalanguage$pandac$IRNode* o4934;
    org$pandalanguage$pandac$IRNode* w4936;
    panda$core$Bit $tmp4901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 125 }));
    PANDA_ASSERT($tmp4901.value);
    panda$core$Int64 $tmp4902 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Bit $tmp4903 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4902, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4903.value);
    panda$core$Object* $tmp4905 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$IRNode* $tmp4906 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, ((org$pandalanguage$pandac$ASTNode*) $tmp4905));
    org$pandalanguage$pandac$IRNode* $tmp4907 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4906);
    value4904 = $tmp4907;
    if (((panda$core$Bit) { value4904 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit $tmp4908 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(value4904->type);
    panda$core$Bit $tmp4909 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4908);
    if ($tmp4909.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp4910 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4904);
        return $tmp4910;
    }
    }
    panda$collections$Array* $tmp4912 = (panda$collections$Array*) malloc(40);
    $tmp4912->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4912->refCount.value = 1;
    panda$collections$Array$init($tmp4912);
    children4911 = $tmp4912;
    panda$collections$Array$add$panda$collections$Array$T(children4911, ((panda$core$Object*) value4904));
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp4915, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$collections$ImmutableArray* $tmp4916 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(p_m->children, $tmp4915);
        ITable* $tmp4917 = ((panda$collections$Iterable*) $tmp4916)->$class->itable;
        while ($tmp4917->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4917 = $tmp4917->next;
        }
        $fn4919 $tmp4918 = $tmp4917->methods[0];
        panda$collections$Iterator* $tmp4920 = $tmp4918(((panda$collections$Iterable*) $tmp4916));
        rawWhen$Iter4914 = $tmp4920;
        $l4921:;
        ITable* $tmp4923 = rawWhen$Iter4914->$class->itable;
        while ($tmp4923->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4923 = $tmp4923->next;
        }
        $fn4925 $tmp4924 = $tmp4923->methods[0];
        panda$core$Bit $tmp4926 = $tmp4924(rawWhen$Iter4914);
        panda$core$Bit $tmp4927 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4926);
        if (!$tmp4927.value) goto $l4922;
        {
            ITable* $tmp4929 = rawWhen$Iter4914->$class->itable;
            while ($tmp4929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4929 = $tmp4929->next;
            }
            $fn4931 $tmp4930 = $tmp4929->methods[1];
            panda$core$Object* $tmp4932 = $tmp4930(rawWhen$Iter4914);
            rawWhen4928 = ((org$pandalanguage$pandac$ASTNode*) $tmp4932);
            panda$core$Bit $tmp4933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(rawWhen4928->kind, ((panda$core$Int64) { 127 }));
            if ($tmp4933.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4935 = org$pandalanguage$pandac$Compiler$compileOtherwise$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, rawWhen4928);
                o4934 = $tmp4935;
                if (((panda$core$Bit) { o4934 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children4911, ((panda$core$Object*) o4934));
                goto $l4921;
            }
            }
            org$pandalanguage$pandac$IRNode* $tmp4937 = org$pandalanguage$pandac$Compiler$compileWhen$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, value4904->type, rawWhen4928);
            w4936 = $tmp4937;
            if (((panda$core$Bit) { w4936 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$core$Object* $tmp4938 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w4936->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp4939 = org$pandalanguage$pandac$Compiler$isConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4938));
            panda$core$Bit $tmp4940 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4939);
            if ($tmp4940.value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4941 = org$pandalanguage$pandac$Compiler$compileChainedIfMatch$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m, value4904);
                return $tmp4941;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children4911, ((panda$core$Object*) w4936));
        }
        goto $l4921;
        $l4922:;
    }
    org$pandalanguage$pandac$IRNode* $tmp4942 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp4942->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp4942->refCount.value = 1;
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp4942, ((panda$core$Int64) { 1042 }), p_m->position, ((panda$collections$ListView*) children4911));
    return $tmp4942;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ASTNode* p_s) {
    org$pandalanguage$pandac$IRNode* result4957;
    switch (p_s->kind.value) {
        case 123:
        {
            org$pandalanguage$pandac$IRNode* $tmp4944 = org$pandalanguage$pandac$Compiler$compileAssert$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4944;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$IRNode* $tmp4945 = org$pandalanguage$pandac$Compiler$compileBinary$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4946 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4945);
            return $tmp4946;
        }
        break;
        case 126:
        {
            org$pandalanguage$pandac$IRNode* $tmp4947 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4947;
        }
        break;
        case 118:
        {
            org$pandalanguage$pandac$IRNode* $tmp4948 = org$pandalanguage$pandac$Compiler$compileIf$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4948;
        }
        break;
        case 119:
        {
            org$pandalanguage$pandac$IRNode* $tmp4949 = org$pandalanguage$pandac$Compiler$compileFor$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4949;
        }
        break;
        case 121:
        {
            org$pandalanguage$pandac$IRNode* $tmp4950 = org$pandalanguage$pandac$Compiler$compileWhile$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4950;
        }
        break;
        case 120:
        {
            org$pandalanguage$pandac$IRNode* $tmp4951 = org$pandalanguage$pandac$Compiler$compileDo$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4951;
        }
        break;
        case 122:
        {
            org$pandalanguage$pandac$IRNode* $tmp4952 = org$pandalanguage$pandac$Compiler$compileLoop$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4952;
        }
        break;
        case 125:
        {
            org$pandalanguage$pandac$IRNode* $tmp4953 = org$pandalanguage$pandac$Compiler$compileMatch$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4953;
        }
        break;
        case 134:
        {
            org$pandalanguage$pandac$IRNode* $tmp4954 = org$pandalanguage$pandac$Compiler$compileBreak$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4954;
        }
        break;
        case 135:
        {
            org$pandalanguage$pandac$IRNode* $tmp4955 = org$pandalanguage$pandac$Compiler$compileContinue$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4955;
        }
        break;
        case 136:
        {
            org$pandalanguage$pandac$IRNode* $tmp4956 = org$pandalanguage$pandac$Compiler$compileReturn$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4956;
        }
        break;
        case 107:
        {
            org$pandalanguage$pandac$IRNode* $tmp4958 = org$pandalanguage$pandac$Compiler$compileCall$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            org$pandalanguage$pandac$IRNode* $tmp4959 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(self, $tmp4958);
            result4957 = $tmp4959;
            if (((panda$core$Bit) { result4957 != NULL }).value) {
            {
                org$pandalanguage$pandac$IRNode* $tmp4960 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self, result4957);
                result4957 = $tmp4960;
            }
            }
            return result4957;
        }
        break;
        case 130:
        case 131:
        case 132:
        case 133:
        {
            org$pandalanguage$pandac$IRNode* $tmp4961 = org$pandalanguage$pandac$Compiler$compileVar$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_s);
            return $tmp4961;
        }
        break;
    }
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$SymbolTable* old4962;
    org$pandalanguage$pandac$SymbolTable* symbols4964;
    panda$collections$Iterator* p$Iter4967;
    org$pandalanguage$pandac$MethodDecl$Parameter* p4979;
    panda$collections$Array* fieldInitializers4990;
    panda$collections$Iterator* f$Iter4994;
    org$pandalanguage$pandac$FieldDecl* f5007;
    panda$collections$Array* children5017;
    org$pandalanguage$pandac$IRNode* fieldRef5024;
    org$pandalanguage$pandac$IRNode* compiled5029;
    panda$collections$Array* children5031;
    if (((panda$core$Bit) { p_m->compiledBody != NULL }).value) {
    {
        return p_m->compiledBody;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_m->owner));
    old4962 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp4963 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_m->owner);
    self->symbolTable = $tmp4963;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentMethod, ((panda$core$Object*) p_m));
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
    PANDA_ASSERT(((panda$core$Bit) { p_m->body != NULL }).value);
    org$pandalanguage$pandac$SymbolTable* $tmp4965 = (org$pandalanguage$pandac$SymbolTable*) malloc(48);
    $tmp4965->$class = (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class;
    $tmp4965->refCount.value = 1;
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp4965, self->symbolTable);
    symbols4964 = $tmp4965;
    {
        ITable* $tmp4968 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp4968->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4968 = $tmp4968->next;
        }
        $fn4970 $tmp4969 = $tmp4968->methods[0];
        panda$collections$Iterator* $tmp4971 = $tmp4969(((panda$collections$Iterable*) p_m->parameters));
        p$Iter4967 = $tmp4971;
        $l4972:;
        ITable* $tmp4974 = p$Iter4967->$class->itable;
        while ($tmp4974->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4974 = $tmp4974->next;
        }
        $fn4976 $tmp4975 = $tmp4974->methods[0];
        panda$core$Bit $tmp4977 = $tmp4975(p$Iter4967);
        panda$core$Bit $tmp4978 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4977);
        if (!$tmp4978.value) goto $l4973;
        {
            ITable* $tmp4980 = p$Iter4967->$class->itable;
            while ($tmp4980->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4980 = $tmp4980->next;
            }
            $fn4982 $tmp4981 = $tmp4980->methods[1];
            panda$core$Object* $tmp4983 = $tmp4981(p$Iter4967);
            p4979 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp4983);
            org$pandalanguage$pandac$Variable* $tmp4984 = (org$pandalanguage$pandac$Variable*) malloc(88);
            $tmp4984->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$class;
            $tmp4984->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind* $tmp4986 = (org$pandalanguage$pandac$Variable$Kind*) malloc(24);
            $tmp4986->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$class;
            $tmp4986->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp4986, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$Storage* $tmp4988 = (org$pandalanguage$pandac$Variable$Storage*) malloc(24);
            $tmp4988->$class = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Storage$class;
            $tmp4988->refCount.value = 1;
            org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64($tmp4988, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage($tmp4984, ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp4986, p4979->name, p4979->type, $tmp4988);
            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(symbols4964, ((org$pandalanguage$pandac$Symbol*) $tmp4984));
        }
        goto $l4972;
        $l4973:;
    }
    self->symbolTable = symbols4964;
    fieldInitializers4990 = NULL;
    panda$core$Bit $tmp4991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp4991.value) {
    {
        panda$collections$Array* $tmp4992 = (panda$collections$Array*) malloc(40);
        $tmp4992->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp4992->refCount.value = 1;
        panda$collections$Array$init($tmp4992);
        fieldInitializers4990 = $tmp4992;
        {
            panda$core$Object* $tmp4995 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
            ITable* $tmp4996 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4995)->fields)->$class->itable;
            while ($tmp4996->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp4996 = $tmp4996->next;
            }
            $fn4998 $tmp4997 = $tmp4996->methods[0];
            panda$collections$Iterator* $tmp4999 = $tmp4997(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ClassDecl*) $tmp4995)->fields));
            f$Iter4994 = $tmp4999;
            $l5000:;
            ITable* $tmp5002 = f$Iter4994->$class->itable;
            while ($tmp5002->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5002 = $tmp5002->next;
            }
            $fn5004 $tmp5003 = $tmp5002->methods[0];
            panda$core$Bit $tmp5005 = $tmp5003(f$Iter4994);
            panda$core$Bit $tmp5006 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5005);
            if (!$tmp5006.value) goto $l5001;
            {
                ITable* $tmp5008 = f$Iter4994->$class->itable;
                while ($tmp5008->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5008 = $tmp5008->next;
                }
                $fn5010 $tmp5009 = $tmp5008->methods[1];
                panda$core$Object* $tmp5011 = $tmp5009(f$Iter4994);
                f5007 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5011);
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self, f5007);
                panda$core$Bit $tmp5013 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f5007->annotations);
                panda$core$Bit $tmp5014 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5013);
                bool $tmp5012 = $tmp5014.value;
                if (!$tmp5012) goto $l5015;
                $tmp5012 = ((panda$core$Bit) { f5007->value != NULL }).value;
                $l5015:;
                panda$core$Bit $tmp5016 = { $tmp5012 };
                if ($tmp5016.value) {
                {
                    panda$collections$Array* $tmp5018 = (panda$collections$Array*) malloc(40);
                    $tmp5018->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp5018->refCount.value = 1;
                    panda$collections$Array$init($tmp5018);
                    children5017 = $tmp5018;
                    org$pandalanguage$pandac$IRNode* $tmp5020 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5020->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5020->refCount.value = 1;
                    panda$core$Object* $tmp5022 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
                    org$pandalanguage$pandac$Type* $tmp5023 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$ClassDecl*) $tmp5022));
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp5020, ((panda$core$Int64) { 1025 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp5023);
                    panda$collections$Array$add$panda$collections$Array$T(children5017, ((panda$core$Object*) $tmp5020));
                    org$pandalanguage$pandac$IRNode* $tmp5025 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5025->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5025->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp5025, ((panda$core$Int64) { 1026 }), ((org$pandalanguage$pandac$Symbol*) p_m)->position, f5007->type, ((panda$core$Object*) f5007), ((panda$collections$ListView*) children5017));
                    fieldRef5024 = $tmp5025;
                    panda$collections$Array$clear(children5017);
                    panda$collections$Array$add$panda$collections$Array$T(children5017, ((panda$core$Object*) fieldRef5024));
                    panda$collections$Array$add$panda$collections$Array$T(children5017, ((panda$core$Object*) f5007->value));
                    org$pandalanguage$pandac$IRNode* $tmp5027 = (org$pandalanguage$pandac$IRNode*) malloc(72);
                    $tmp5027->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
                    $tmp5027->refCount.value = 1;
                    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5027, ((panda$core$Int64) { 1023 }), ((org$pandalanguage$pandac$Symbol*) f5007)->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 73 }))), ((panda$collections$ListView*) children5017));
                    panda$collections$Array$add$panda$collections$Array$T(fieldInitializers4990, ((panda$core$Object*) $tmp5027));
                }
                }
            }
            goto $l5000;
            $l5001:;
        }
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp5030 = org$pandalanguage$pandac$Compiler$compileBlock$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IRNode$Q(self, p_m->body);
    compiled5029 = $tmp5030;
    if (((panda$core$Bit) { compiled5029 != NULL }).value) {
    {
        if (((panda$core$Bit) { fieldInitializers4990 != NULL }).value) {
        {
            panda$collections$Array* $tmp5032 = (panda$collections$Array*) malloc(40);
            $tmp5032->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5032->refCount.value = 1;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp5032, ((panda$collections$ListView*) fieldInitializers4990));
            children5031 = $tmp5032;
            panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(children5031, ((panda$collections$CollectionView*) compiled5029->children));
            org$pandalanguage$pandac$IRNode* $tmp5034 = (org$pandalanguage$pandac$IRNode*) malloc(72);
            $tmp5034->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
            $tmp5034->refCount.value = 1;
            org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp5034, ((panda$core$Int64) { 1000 }), p_m->body->position, ((panda$collections$ListView*) children5031));
            compiled5029 = $tmp5034;
        }
        }
    }
    }
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->symbolTable) == ((panda$core$Object*) symbols4964) }).value);
    self->symbolTable = old4962;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentMethod);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    panda$core$Bit $tmp5036 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_m->annotations);
    if ($tmp5036.value) {
    {
        p_m->compiledBody = compiled5029;
    }
    }
    return compiled5029;
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$IRNode* compiled5037;
    if (((panda$core$Bit) { p_m->body != NULL }).value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp5038 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self, p_m);
        compiled5037 = $tmp5038;
        panda$core$Bit $tmp5040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->errorCount, ((panda$core$Int64) { 0 }));
        bool $tmp5039 = $tmp5040.value;
        if (!$tmp5039) goto $l5041;
        $tmp5039 = ((panda$core$Bit) { compiled5037 != NULL }).value;
        $l5041:;
        panda$core$Bit $tmp5042 = { $tmp5039 };
        if ($tmp5042.value) {
        {
            ITable* $tmp5043 = self->codeGenerator->$class->itable;
            while ($tmp5043->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
                $tmp5043 = $tmp5043->next;
            }
            $fn5045 $tmp5044 = $tmp5043->methods[3];
            $tmp5044(self->codeGenerator, p_m, compiled5037);
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self, p_m);
        ITable* $tmp5046 = self->codeGenerator->$class->itable;
        while ($tmp5046->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5046 = $tmp5046->next;
        }
        $fn5048 $tmp5047 = $tmp5046->methods[2];
        $tmp5047(self->codeGenerator, p_m);
    }
    }
}
void org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Iterator* inner$Iter5049;
    org$pandalanguage$pandac$ClassDecl* inner5061;
    p_cl->external = ((panda$core$Bit) { false });
    {
        ITable* $tmp5050 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp5050->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5050 = $tmp5050->next;
        }
        $fn5052 $tmp5051 = $tmp5050->methods[0];
        panda$collections$Iterator* $tmp5053 = $tmp5051(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter5049 = $tmp5053;
        $l5054:;
        ITable* $tmp5056 = inner$Iter5049->$class->itable;
        while ($tmp5056->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5056 = $tmp5056->next;
        }
        $fn5058 $tmp5057 = $tmp5056->methods[0];
        panda$core$Bit $tmp5059 = $tmp5057(inner$Iter5049);
        panda$core$Bit $tmp5060 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5059);
        if (!$tmp5060.value) goto $l5055;
        {
            ITable* $tmp5062 = inner$Iter5049->$class->itable;
            while ($tmp5062->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5062 = $tmp5062->next;
            }
            $fn5064 $tmp5063 = $tmp5062->methods[1];
            panda$core$Object* $tmp5065 = $tmp5063(inner$Iter5049);
            inner5061 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5065);
            org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, inner5061);
        }
        goto $l5054;
        $l5055:;
    }
}
void org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$SymbolTable* old5073;
    panda$collections$Iterator* m$Iter5078;
    org$pandalanguage$pandac$MethodDecl* m5090;
    org$pandalanguage$pandac$ClassDecl* next5100;
    PANDA_ASSERT(((panda$core$Bit) { self->compiling == NULL }).value);
    self->compiling = p_cl;
    panda$collections$Stack$push$panda$collections$Stack$T(self->currentClass, ((panda$core$Object*) p_cl));
    org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(self, p_cl);
    panda$core$Bit $tmp5066 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp5066.value) {
    {
        ITable* $tmp5067 = self->codeGenerator->$class->itable;
        while ($tmp5067->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5067 = $tmp5067->next;
        }
        $fn5069 $tmp5068 = $tmp5067->methods[1];
        $tmp5068(self->codeGenerator, p_cl);
        ITable* $tmp5070 = self->codeGenerator->$class->itable;
        while ($tmp5070->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
            $tmp5070 = $tmp5070->next;
        }
        $fn5072 $tmp5071 = $tmp5070->methods[4];
        $tmp5071(self->codeGenerator, p_cl);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
        return;
    }
    }
    old5073 = self->symbolTable;
    org$pandalanguage$pandac$SymbolTable* $tmp5074 = org$pandalanguage$pandac$Compiler$getSymbolTable$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$SymbolTable(self, p_cl);
    self->symbolTable = $tmp5074;
    ITable* $tmp5075 = self->codeGenerator->$class->itable;
    while ($tmp5075->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5075 = $tmp5075->next;
    }
    $fn5077 $tmp5076 = $tmp5075->methods[1];
    $tmp5076(self->codeGenerator, p_cl);
    {
        ITable* $tmp5079 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp5079->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5079 = $tmp5079->next;
        }
        $fn5081 $tmp5080 = $tmp5079->methods[0];
        panda$collections$Iterator* $tmp5082 = $tmp5080(((panda$collections$Iterable*) p_cl->methods));
        m$Iter5078 = $tmp5082;
        $l5083:;
        ITable* $tmp5085 = m$Iter5078->$class->itable;
        while ($tmp5085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5085 = $tmp5085->next;
        }
        $fn5087 $tmp5086 = $tmp5085->methods[0];
        panda$core$Bit $tmp5088 = $tmp5086(m$Iter5078);
        panda$core$Bit $tmp5089 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5088);
        if (!$tmp5089.value) goto $l5084;
        {
            ITable* $tmp5091 = m$Iter5078->$class->itable;
            while ($tmp5091->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5091 = $tmp5091->next;
            }
            $fn5093 $tmp5092 = $tmp5091->methods[1];
            panda$core$Object* $tmp5094 = $tmp5092(m$Iter5078);
            m5090 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5094);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$MethodDecl(self, m5090);
        }
        goto $l5083;
        $l5084:;
    }
    ITable* $tmp5095 = self->codeGenerator->$class->itable;
    while ($tmp5095->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5095 = $tmp5095->next;
    }
    $fn5097 $tmp5096 = $tmp5095->methods[4];
    $tmp5096(self->codeGenerator, p_cl);
    self->symbolTable = old5073;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->currentClass);
    self->compiling = NULL;
    panda$core$Int64 $tmp5098 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5099 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5098, ((panda$core$Int64) { 0 }));
    if ($tmp5099.value) {
    {
        panda$core$Object* $tmp5101 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->compilationQueue, ((panda$core$Int64) { 0 }));
        next5100 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5101);
        panda$collections$Array$removeIndex$panda$core$Int64(self->compilationQueue, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, next5100);
    }
    }
    panda$core$Int64 $tmp5102 = panda$collections$Array$get_count$R$panda$core$Int64(self->compilationQueue);
    panda$core$Bit $tmp5103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5102, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5103.value);
}
panda$collections$ListView* org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* result5104;
    org$pandalanguage$pandac$ASTNode* parsed5107;
    panda$collections$Iterator* cl$Iter5110;
    org$pandalanguage$pandac$ClassDecl* cl5122;
    panda$core$Object* $tmp5105 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->scans, ((panda$collections$Key*) p_file));
    result5104 = ((panda$collections$ListView*) $tmp5105);
    if (((panda$core$Bit) { result5104 == NULL }).value) {
    {
        panda$core$String* $tmp5106 = panda$io$File$readFully$R$panda$core$String(p_file);
        org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(self->parser, p_file, $tmp5106);
        org$pandalanguage$pandac$ASTNode* $tmp5108 = org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(self->parser);
        parsed5107 = $tmp5108;
        if (((panda$core$Bit) { parsed5107 != NULL }).value) {
        {
            panda$collections$ListView* $tmp5109 = org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self->scanner, p_file, parsed5107);
            result5104 = $tmp5109;
            {
                ITable* $tmp5111 = ((panda$collections$Iterable*) result5104)->$class->itable;
                while ($tmp5111->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp5111 = $tmp5111->next;
                }
                $fn5113 $tmp5112 = $tmp5111->methods[0];
                panda$collections$Iterator* $tmp5114 = $tmp5112(((panda$collections$Iterable*) result5104));
                cl$Iter5110 = $tmp5114;
                $l5115:;
                ITable* $tmp5117 = cl$Iter5110->$class->itable;
                while ($tmp5117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp5117 = $tmp5117->next;
                }
                $fn5119 $tmp5118 = $tmp5117->methods[0];
                panda$core$Bit $tmp5120 = $tmp5118(cl$Iter5110);
                panda$core$Bit $tmp5121 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5120);
                if (!$tmp5121.value) goto $l5116;
                {
                    ITable* $tmp5123 = cl$Iter5110->$class->itable;
                    while ($tmp5123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp5123 = $tmp5123->next;
                    }
                    $fn5125 $tmp5124 = $tmp5123->methods[1];
                    panda$core$Object* $tmp5126 = $tmp5124(cl$Iter5110);
                    cl5122 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5126);
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) cl5122)->name), ((panda$core$Object*) cl5122));
                }
                goto $l5115;
                $l5116:;
            }
        }
        }
        else {
        {
            panda$collections$Array* $tmp5127 = (panda$collections$Array*) malloc(40);
            $tmp5127->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp5127->refCount.value = 1;
            panda$collections$Array$init($tmp5127);
            result5104 = ((panda$collections$ListView*) $tmp5127);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->scans, ((panda$collections$Key*) p_file), ((panda$core$Object*) result5104));
    }
    }
    return result5104;
}
void org$pandalanguage$pandac$Compiler$compile$panda$io$File(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file) {
    panda$collections$ListView* classes5129;
    panda$collections$Iterator* cl$Iter5131;
    org$pandalanguage$pandac$ClassDecl* cl5143;
    panda$collections$ListView* $tmp5130 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(self, p_file);
    classes5129 = $tmp5130;
    {
        ITable* $tmp5132 = ((panda$collections$Iterable*) classes5129)->$class->itable;
        while ($tmp5132->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5132 = $tmp5132->next;
        }
        $fn5134 $tmp5133 = $tmp5132->methods[0];
        panda$collections$Iterator* $tmp5135 = $tmp5133(((panda$collections$Iterable*) classes5129));
        cl$Iter5131 = $tmp5135;
        $l5136:;
        ITable* $tmp5138 = cl$Iter5131->$class->itable;
        while ($tmp5138->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5138 = $tmp5138->next;
        }
        $fn5140 $tmp5139 = $tmp5138->methods[0];
        panda$core$Bit $tmp5141 = $tmp5139(cl$Iter5131);
        panda$core$Bit $tmp5142 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5141);
        if (!$tmp5142.value) goto $l5137;
        {
            ITable* $tmp5144 = cl$Iter5131->$class->itable;
            while ($tmp5144->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5144 = $tmp5144->next;
            }
            $fn5146 $tmp5145 = $tmp5144->methods[1];
            panda$core$Object* $tmp5147 = $tmp5145(cl$Iter5131);
            cl5143 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5147);
            org$pandalanguage$pandac$Compiler$compile$org$pandalanguage$pandac$ClassDecl(self, cl5143);
        }
        goto $l5136;
        $l5137:;
    }
}
void org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_msg) {
    panda$core$Object* $tmp5148 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->currentClass);
    org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp5148)->source, p_position, p_msg);
}
void org$pandalanguage$pandac$Compiler$error$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Compiler* self, panda$io$File* p_file, org$pandalanguage$pandac$Position p_pos, panda$core$String* p_msg) {
    if (self->reportErrors.value) {
    {
        panda$core$Int64 $tmp5149 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->errorCount, ((panda$core$Int64) { 1 }));
        self->errorCount = $tmp5149;
        panda$core$String* $tmp5150 = panda$io$File$name$R$panda$core$String(p_file);
        panda$core$String* $tmp5151 = panda$core$String$convert$R$panda$core$String($tmp5150);
        panda$core$String* $tmp5153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5151, &$s5152);
        panda$core$String* $tmp5154 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5153, ((panda$core$Object*) wrap_org$pandalanguage$pandac$Position(p_pos)));
        panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5154, &$s5155);
        panda$core$String* $tmp5157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5156, p_msg);
        panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5157, &$s5158);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp5159));
    }
    }
}
void org$pandalanguage$pandac$Compiler$finish(org$pandalanguage$pandac$Compiler* self) {
    ITable* $tmp5160 = self->codeGenerator->$class->itable;
    while ($tmp5160->$class != (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class) {
        $tmp5160 = $tmp5160->next;
    }
    $fn5162 $tmp5161 = $tmp5160->methods[5];
    $tmp5161(self->codeGenerator);
}

